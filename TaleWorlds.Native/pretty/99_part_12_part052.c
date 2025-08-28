#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part052.c - 1 个函数

// 函数: void FUN_1807ebcc0(longlong param_1,longlong param_2,longlong param_3,int param_4,uint param_5,
void FUN_1807ebcc0(longlong param_1,longlong param_2,longlong param_3,int param_4,uint param_5,
                  int32_t param_6,float param_7)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  uint *puVar10;
  longlong *plVar11;
  int *piVar12;
  ulonglong uVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float afStack_540 [248];
  uint64_t uStack_160;
  int8_t auStack_158 [32];
  int32_t uStack_138;
  uint uStack_128;
  int iStack_124;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  float afStack_108 [4];
  int32_t uStack_f8;
  int32_t uStack_f4;
  int32_t uStack_f0;
  int32_t uStack_ec;
  ulonglong uStack_e8;
  
  uStack_e8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_158;
  fVar29 = 1.0 / (float)param_5;
  uStack_138 = param_6;
  uStack_160 = 0x1807ebd40;
  iStack_124 = param_4;
  lStack_118 = param_2;
  lStack_110 = param_3;
  FUN_1807eb0a0(param_6,param_5,param_4,param_2);
  *(uint *)(param_1 + 0x4e0) =
       *(int *)(param_1 + 0x4dc) + -1 + *(int *)(param_1 + 0x484) & *(uint *)(param_1 + 0x4d8);
  if (*(int *)(param_1 + 0x484) == *(int *)(param_1 + 0x4a8)) {
    *(int8_t *)(param_1 + 0x4cc) = 0;
  }
  else {
    *(int8_t *)(param_1 + 0x4cc) = 1;
    *(uint *)(param_1 + 0x504) =
         *(int *)(param_1 + 0x4dc) + -1 + *(int *)(param_1 + 0x4a8) & *(uint *)(param_1 + 0x4d8);
    *(int32_t *)(param_1 + 0x4a8) = *(int32_t *)(param_1 + 0x484);
  }
  *(uint *)(param_1 + 0x4e4) =
       *(int *)(param_1 + 0x4dc) + -1 + *(int *)(param_1 + 0x488) & *(uint *)(param_1 + 0x4d8);
  if (*(int *)(param_1 + 0x488) == *(int *)(param_1 + 0x4ac)) {
    *(int8_t *)(param_1 + 0x4cd) = 0;
  }
  else {
    *(int8_t *)(param_1 + 0x4cd) = 1;
    *(uint *)(param_1 + 0x508) =
         *(int *)(param_1 + 0x4dc) + -1 + *(int *)(param_1 + 0x4ac) & *(uint *)(param_1 + 0x4d8);
    *(int32_t *)(param_1 + 0x4ac) = *(int32_t *)(param_1 + 0x488);
  }
  *(uint *)(param_1 + 0x4e8) =
       *(int *)(param_1 + 0x4dc) + -1 + *(int *)(param_1 + 0x48c) & *(uint *)(param_1 + 0x4d8);
  if (*(int *)(param_1 + 0x48c) == *(int *)(param_1 + 0x4b0)) {
    *(int8_t *)(param_1 + 0x4ce) = 0;
  }
  else {
    *(int8_t *)(param_1 + 0x4ce) = 1;
    *(uint *)(param_1 + 0x50c) =
         *(int *)(param_1 + 0x4dc) + -1 + *(int *)(param_1 + 0x4b0) & *(uint *)(param_1 + 0x4d8);
    *(int32_t *)(param_1 + 0x4b0) = *(int32_t *)(param_1 + 0x48c);
  }
  *(uint *)(param_1 + 0x4ec) =
       *(int *)(param_1 + 0x4dc) + -1 + *(int *)(param_1 + 0x490) & *(uint *)(param_1 + 0x4d8);
  if (*(int *)(param_1 + 0x490) == *(int *)(param_1 + 0x4b4)) {
    *(int8_t *)(param_1 + 0x4cf) = 0;
  }
  else {
    *(int8_t *)(param_1 + 0x4cf) = 1;
    *(uint *)(param_1 + 0x510) =
         *(int *)(param_1 + 0x4dc) + -1 + *(int *)(param_1 + 0x4b4) & *(uint *)(param_1 + 0x4d8);
    *(int32_t *)(param_1 + 0x4b4) = *(int32_t *)(param_1 + 0x490);
  }
  *(uint *)(param_1 + 0x4f0) =
       *(int *)(param_1 + 0x4dc) + -1 + *(int *)(param_1 + 0x494) & *(uint *)(param_1 + 0x4d8);
  if (*(int *)(param_1 + 0x494) == *(int *)(param_1 + 0x4b8)) {
    *(int8_t *)(param_1 + 0x4d0) = 0;
  }
  else {
    *(int8_t *)(param_1 + 0x4d0) = 1;
    *(uint *)(param_1 + 0x514) =
         *(int *)(param_1 + 0x4dc) + -1 + *(int *)(param_1 + 0x4b8) & *(uint *)(param_1 + 0x4d8);
    *(int32_t *)(param_1 + 0x4b8) = *(int32_t *)(param_1 + 0x494);
  }
  *(uint *)(param_1 + 0x4f4) =
       *(int *)(param_1 + 0x4dc) + -1 + *(int *)(param_1 + 0x498) & *(uint *)(param_1 + 0x4d8);
  if (*(int *)(param_1 + 0x498) == *(int *)(param_1 + 0x4bc)) {
    *(int8_t *)(param_1 + 0x4d1) = 0;
  }
  else {
    *(int8_t *)(param_1 + 0x4d1) = 1;
    *(uint *)(param_1 + 0x518) =
         *(int *)(param_1 + 0x4dc) + -1 + *(int *)(param_1 + 0x4bc) & *(uint *)(param_1 + 0x4d8);
    *(int32_t *)(param_1 + 0x4bc) = *(int32_t *)(param_1 + 0x498);
  }
  *(uint *)(param_1 + 0x4f8) =
       *(int *)(param_1 + 0x4dc) + -1 + *(int *)(param_1 + 0x49c) & *(uint *)(param_1 + 0x4d8);
  if (*(int *)(param_1 + 0x49c) == *(int *)(param_1 + 0x4c0)) {
    *(int8_t *)(param_1 + 0x4d2) = 0;
  }
  else {
    *(int8_t *)(param_1 + 0x4d2) = 1;
    *(uint *)(param_1 + 0x51c) =
         *(int *)(param_1 + 0x4dc) + -1 + *(int *)(param_1 + 0x4c0) & *(uint *)(param_1 + 0x4d8);
    *(int32_t *)(param_1 + 0x4c0) = *(int32_t *)(param_1 + 0x49c);
  }
  *(uint *)(param_1 + 0x4fc) =
       *(int *)(param_1 + 0x4dc) + -1 + *(int *)(param_1 + 0x4a0) & *(uint *)(param_1 + 0x4d8);
  if (*(int *)(param_1 + 0x4a0) == *(int *)(param_1 + 0x4c4)) {
    *(int8_t *)(param_1 + 0x4d3) = 0;
  }
  else {
    *(int8_t *)(param_1 + 0x4d3) = 1;
    *(uint *)(param_1 + 0x520) =
         *(int *)(param_1 + 0x4dc) + -1 + *(int *)(param_1 + 0x4c4) & *(uint *)(param_1 + 0x4d8);
    *(int32_t *)(param_1 + 0x4c4) = *(int32_t *)(param_1 + 0x4a0);
  }
  *(uint *)(param_1 + 0x500) =
       *(int *)(param_1 + 0x4dc) + -1 + *(int *)(param_1 + 0x4a4) & *(uint *)(param_1 + 0x4d8);
  if (*(int *)(param_1 + 0x4a4) == *(int *)(param_1 + 0x4c8)) {
    *(int8_t *)(param_1 + 0x4d4) = 0;
  }
  else {
    *(int8_t *)(param_1 + 0x4d4) = 1;
    *(uint *)(param_1 + 0x524) =
         *(int *)(param_1 + 0x4dc) + -1 + *(int *)(param_1 + 0x4c8) & *(uint *)(param_1 + 0x4d8);
    *(int32_t *)(param_1 + 0x4c8) = *(int32_t *)(param_1 + 0x4a4);
  }
  lVar14 = 0;
  piVar12 = (int *)(param_1 + 0x390);
  lVar16 = 4;
  do {
    piVar12[0x1a] = piVar12[-0x10] + -1 + piVar12[0x12] & piVar12[10];
    piVar12[0x2a] = piVar12[0x12] + -1 + *piVar12 & piVar12[10];
    if (piVar12[-0x10] == piVar12[-8]) {
      *(int8_t *)(lVar14 + 0x3b0 + param_1) = 0;
    }
    else {
      *(int8_t *)(lVar14 + 0x3b0 + param_1) = 1;
      piVar12[0x22] = piVar12[-8] + -1 + piVar12[0x12] & piVar12[10];
      piVar12[-8] = piVar12[-0x10];
    }
    fVar24 = (float)piVar12[-0x5e];
    piVar12[-0x56] = (int)fVar24;
    if (fVar24 != (float)piVar12[-0x4e]) {
      fVar25 = fVar24;
      fVar24 = (float)piVar12[-0x4e];
      if (*(char *)(lVar14 + 0x3b0 + param_1) == '\0') {
        *(int8_t *)(lVar14 + 0x3b0 + param_1) = 1;
        fVar24 = (float)piVar12[-0x4e];
        fVar25 = (float)piVar12[-0x56];
        piVar12[0x22] = piVar12[-8] + -1 + piVar12[0x12] & piVar12[10];
      }
      piVar12[-0x4e] = (int)fVar25;
    }
    piVar12[-0x46] = (int)fVar24;
    fVar24 = (float)piVar12[-0xcd];
    piVar12[-0xc3] = (int)fVar24;
    piVar12[-0xbb] = (int)(1.0 - fVar24);
    if (fVar24 == (float)piVar12[-0xab]) {
      *(int8_t *)(lVar14 + 0x7c + param_1) = 0;
    }
    else {
      *(int8_t *)(lVar14 + 0x7c + param_1) = 1;
      piVar12[-0xb3] = piVar12[-0xab];
      piVar12[-0xab] = piVar12[-0xc3];
    }
    piVar12[0x1b] = piVar12[-0xf] + -1 + piVar12[0x13] & piVar12[0xb];
    piVar12[0x2b] = piVar12[0x13] + -1 + piVar12[1] & piVar12[0xb];
    if (piVar12[-0xf] == piVar12[-7]) {
      *(int8_t *)(lVar14 + 0x3b1 + param_1) = 0;
    }
    else {
      *(int8_t *)(lVar14 + 0x3b1 + param_1) = 1;
      piVar12[0x23] = piVar12[-7] + -1 + piVar12[0x13] & piVar12[0xb];
      piVar12[-7] = piVar12[-0xf];
    }
    fVar24 = (float)piVar12[-0x5d];
    piVar12[-0x55] = (int)fVar24;
    fVar25 = (float)piVar12[-0x4d];
    if (fVar24 == fVar25) {
      piVar12[-0x45] = (int)fVar24;
    }
    else {
      if (*(char *)(lVar14 + 0x3b1 + param_1) == '\0') {
        *(int8_t *)(lVar14 + 0x3b1 + param_1) = 1;
        piVar12[0x23] = piVar12[-7] + -1 + piVar12[0x13] & piVar12[0xb];
        fVar25 = (float)piVar12[-0x4d];
      }
      piVar12[-0x45] = (int)fVar25;
      piVar12[-0x4d] = piVar12[-0x55];
    }
    piVar12[-0xc2] = piVar12[-0xcc];
    piVar12[-0xba] = (int)(1.0 - (float)piVar12[-0xcc]);
    if ((float)piVar12[-0xaa] == (float)piVar12[-0xc2]) {
      *(int8_t *)(lVar14 + 0x7d + param_1) = 0;
    }
    else {
      *(int8_t *)(lVar14 + 0x7d + param_1) = 1;
      piVar12[-0xb2] = piVar12[-0xaa];
      piVar12[-0xaa] = piVar12[-0xc2];
    }
    lVar14 = lVar14 + 2;
    piVar12 = piVar12 + 2;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  fVar24 = *(float *)(param_1 + 0x2b0);
  fVar25 = *(float *)(param_1 + 0x2c0);
  *(float *)(param_1 + 0x2b8) = fVar24;
  if (fVar24 != fVar25) {
    *(float *)(param_1 + 700) = fVar25;
    *(float *)(param_1 + 0x2c0) = fVar24;
  }
  *(bool *)(param_1 + 0x2b4) = fVar24 != fVar25;
  fVar24 = *(float *)(param_1 + 0x2ac);
  fVar25 = *(float *)(param_1 + 0x2d0);
  *(float *)(param_1 + 0x2c8) = fVar24;
  if (fVar24 != fVar25) {
    *(float *)(param_1 + 0x2cc) = fVar25;
    *(float *)(param_1 + 0x2d0) = fVar24;
  }
  *(bool *)(param_1 + 0x2c4) = fVar24 != fVar25;
  fVar24 = *(float *)(param_1 + 0x20);
  fVar25 = *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x28) = fVar24;
  if (fVar24 != fVar25) {
    *(float *)(param_1 + 0x2c) = fVar25;
    *(float *)(param_1 + 0x30) = fVar24;
  }
  *(bool *)(param_1 + 0x24) = fVar24 != fVar25;
  fVar24 = *(float *)(param_1 + 0x298);
  fVar25 = *(float *)(param_1 + 0x2a8);
  *(float *)(param_1 + 0x2a0) = fVar24;
  if (fVar24 != fVar25) {
    *(float *)(param_1 + 0x2a4) = fVar25;
    *(float *)(param_1 + 0x2a8) = fVar24;
  }
  *(bool *)(param_1 + 0x29c) = fVar24 != fVar25;
  fVar24 = *(float *)(param_1 + 0x2d4);
  fVar25 = *(float *)(param_1 + 0x2e4);
  *(float *)(param_1 + 0x2dc) = fVar24;
  if (fVar24 != fVar25) {
    *(float *)(param_1 + 0x2e0) = fVar25;
    *(float *)(param_1 + 0x2e4) = fVar24;
  }
  *(bool *)(param_1 + 0x2d8) = fVar24 != fVar25;
  iVar19 = (int)(8 / (longlong)param_4);
  if (iVar19 < 1) {
    iVar19 = 1;
  }
  uStack_128 = 0;
  if (param_5 != 0) {
    lStack_120 = 0;
    do {
      fVar24 = *(float *)(param_1 + 0x28);
      fVar26 = (float)(param_5 - uStack_128);
      fVar25 = (float)uStack_128;
      if (*(char *)(param_1 + 0x24) != '\0') {
        fVar24 = (fVar26 * *(float *)(param_1 + 0x2c) + fVar25 * fVar24) * fVar29;
      }
      fVar28 = *(float *)(param_1 + 0x2a0);
      if (*(char *)(param_1 + 0x29c) != '\0') {
        fVar28 = (fVar26 * *(float *)(param_1 + 0x2a4) + fVar25 * fVar28) * fVar29;
      }
      fVar27 = *(float *)(param_1 + 0x2dc);
      if (*(char *)(param_1 + 0x2d8) != '\0') {
        fVar27 = (fVar26 * *(float *)(param_1 + 0x2e0) + fVar25 * fVar27) * fVar29;
      }
      fVar23 = fVar24 * *(float *)(lStack_120 + *(longlong *)(param_1 + 8)) +
               (1.0 - fVar24) * *(float *)(param_1 + 0x34);
      *(float *)(param_1 + 0x34) = fVar23;
      fVar23 = fVar23 * fVar24 + (1.0 - fVar24) * *(float *)(param_1 + 0x38);
      *(float *)(param_1 + 0x38) = fVar23;
      fVar24 = fVar23;
      if (*(float *)(param_1 + 0x50) != 0.0) {
        fVar24 = fVar23 * *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x54);
        *(float *)(param_1 + 0x54) =
             fVar23 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x58) +
             fVar24 * *(float *)(param_1 + 0x48);
        *(float *)(param_1 + 0x58) =
             fVar23 * *(float *)(param_1 + 0x44) + fVar24 * *(float *)(param_1 + 0x4c);
      }
      uVar3 = *(int *)(param_1 + 0x4dc) - 1U & *(uint *)(param_1 + 0x4d8);
      *(uint *)(param_1 + 0x4dc) = uVar3;
      *(float *)(*(longlong *)(param_1 + 0x458) + (longlong)(int)uVar3 * 4) = fVar24;
      uVar3 = *(int *)(param_1 + 0x4e0) - 1U & *(uint *)(param_1 + 0x4d8);
      *(uint *)(param_1 + 0x4e0) = uVar3;
      fVar24 = *(float *)(param_1 + 0x2c8);
      if (*(char *)(param_1 + 0x2c4) != '\0') {
        fVar24 = (fVar26 * *(float *)(param_1 + 0x2cc) + fVar25 * fVar24) * fVar29;
      }
      fVar23 = fVar24 * *(float *)(*(longlong *)(param_1 + 0x458) + (longlong)(int)uVar3 * 4);
      if (*(char *)(param_1 + 0x4cc) != '\0') {
        uVar3 = *(int *)(param_1 + 0x504) - 1U & *(uint *)(param_1 + 0x4d8);
        *(uint *)(param_1 + 0x504) = uVar3;
        fVar23 = (fVar24 * *(float *)(*(longlong *)(param_1 + 0x458) + (longlong)(int)uVar3 * 4) *
                  fVar26 + fVar25 * fVar23) * fVar29;
      }
      uVar3 = *(int *)(param_1 + 0x5c0) - 1U & *(uint *)(param_1 + 0x5b0);
      *(uint *)(param_1 + 0x5c0) = uVar3;
      uVar5 = *(int *)(param_1 + 0x5b8) - 1U & *(uint *)(param_1 + 0x5b0);
      *(uint *)(param_1 + 0x5b8) = uVar5;
      fVar24 = *(float *)(*(longlong *)(param_1 + 0x590) + (longlong)(int)uVar3 * 4) -
               *(float *)(param_1 + 0x2e8) * (fVar23 + 1e-20);
      *(float *)(*(longlong *)(param_1 + 0x590) + (longlong)(int)uVar5 * 4) =
           *(float *)(param_1 + 0x2e8) * fVar24 + fVar23 + 1e-20;
      *(uint *)(param_1 + 0x5bc) = *(int *)(param_1 + 0x5bc) - 1U & *(uint *)(param_1 + 0x5b4);
      uVar3 = *(int *)(param_1 + 0x5c4) - 1U & *(uint *)(param_1 + 0x5b4);
      *(uint *)(param_1 + 0x5c4) = uVar3;
      afStack_108[0] =
           *(float *)(*(longlong *)(param_1 + 0x598) + (longlong)(int)uVar3 * 4) -
           *(float *)(param_1 + 0x2e8) * fVar24;
      *(float *)(*(longlong *)(param_1 + 0x598) + (longlong)*(int *)(param_1 + 0x5bc) * 4) =
           *(float *)(param_1 + 0x2e8) * afStack_108[0] + fVar24;
      uVar3 = *(int *)(param_1 + 0x56c) - 1U & *(uint *)(param_1 + 0x568);
      *(uint *)(param_1 + 0x56c) = uVar3;
      *(float *)(*(longlong *)(param_1 + 0x528) + (longlong)(int)uVar3 * 4) = afStack_108[0];
      uVar3 = *(int *)(param_1 + 0x570) - 1U & *(uint *)(param_1 + 0x568);
      *(uint *)(param_1 + 0x570) = uVar3;
      afStack_108[1] =
           (float)*(int32_t *)(*(longlong *)(param_1 + 0x528) + (longlong)(int)uVar3 * 4);
      uVar3 = *(int *)(param_1 + 0x574) - 1U & *(uint *)(param_1 + 0x568);
      *(uint *)(param_1 + 0x574) = uVar3;
      afStack_108[2] =
           (float)*(int32_t *)(*(longlong *)(param_1 + 0x528) + (longlong)(int)uVar3 * 4);
      uVar3 = *(int *)(param_1 + 0x578) - 1U & *(uint *)(param_1 + 0x568);
      *(uint *)(param_1 + 0x578) = uVar3;
      afStack_108[3] =
           (float)*(int32_t *)(*(longlong *)(param_1 + 0x528) + (longlong)(int)uVar3 * 4);
      uVar3 = *(int *)(param_1 + 0x57c) - 1U & *(uint *)(param_1 + 0x568);
      *(uint *)(param_1 + 0x57c) = uVar3;
      uStack_f8 = *(int32_t *)(*(longlong *)(param_1 + 0x528) + (longlong)(int)uVar3 * 4);
      uVar5 = 0;
      uVar3 = *(int *)(param_1 + 0x580) - 1U & *(uint *)(param_1 + 0x568);
      *(uint *)(param_1 + 0x580) = uVar3;
      uStack_f4 = *(int32_t *)(*(longlong *)(param_1 + 0x528) + (longlong)(int)uVar3 * 4);
      uVar3 = *(int *)(param_1 + 0x584) - 1U & *(uint *)(param_1 + 0x568);
      *(uint *)(param_1 + 0x584) = uVar3;
      uStack_f0 = *(int32_t *)(*(longlong *)(param_1 + 0x528) + (longlong)(int)uVar3 * 4);
      uVar3 = *(int *)(param_1 + 0x588) - 1U & *(uint *)(param_1 + 0x568);
      *(uint *)(param_1 + 0x588) = uVar3;
      uStack_ec = *(int32_t *)(*(longlong *)(param_1 + 0x528) + (longlong)(int)uVar3 * 4);
      if (0 < *(int *)(param_1 + 0x2ec)) {
        pcVar9 = (char *)(param_1 + 0x3b0);
        lVar14 = -0x508 - param_1;
        puVar6 = (uint *)(param_1 + 0x508);
        lVar16 = 0x2f0;
        do {
          uVar3 = puVar6[-9] - 1 & *(uint *)(param_1 + 0x4d8);
          puVar6[-9] = uVar3;
          fVar24 = *(float *)(*(longlong *)(param_1 + 0x458) + (longlong)(int)uVar3 * 4);
          if (pcVar9[(longlong)((char *)(param_1 + 0x4cc) + (-0x3af - param_1))] != '\0') {
            uVar3 = *puVar6 - 1 & *(uint *)(param_1 + 0x4d8);
            *puVar6 = uVar3;
            fVar24 = (fVar26 * *(float *)(*(longlong *)(param_1 + 0x458) + (longlong)(int)uVar3 * 4)
                     + fVar25 * fVar24) * fVar29;
          }
          fVar23 = *(float *)(param_1 + 0x2b8);
          if (*(char *)(param_1 + 0x2b4) != '\0') {
            fVar23 = (fVar26 * *(float *)(param_1 + 700) + fVar23 * fVar25) * fVar29;
          }
          uVar3 = puVar6[-0x44] - 1 & puVar6[-0x54];
          puVar6[-0x44] = uVar3;
          if (*pcVar9 == '\0') {
            fVar22 = *(float *)(*(longlong *)(param_1 + lVar16) + (longlong)(int)uVar3 * 4) *
                     (float)puVar6[-0xb4];
          }
          else {
            uVar4 = puVar6[-0x3c] - 1 & puVar6[-0x54];
            puVar6[-0x3c] = uVar4;
            fVar22 = (*(float *)(*(longlong *)(param_1 + lVar16) + (longlong)(int)uVar4 * 4) *
                      (float)puVar6[-0xa4] * fVar26 +
                     *(float *)(*(longlong *)(param_1 + lVar16) + (longlong)(int)uVar3 * 4) *
                     (float)puVar6[-0xb4] * fVar25) * fVar29;
          }
          if ((uVar5 & 1) == 0) {
            fVar21 = -1e-15;
          }
          else {
            fVar21 = 1e-15;
          }
          fVar21 = (fVar23 * fVar24 + fVar22) * fVar27 + fVar21;
          lVar1 = *(longlong *)(param_1 + 0x208);
          if (pcVar9[-0x334] == '\0') {
            fVar24 = (float)puVar6[-0x119] * *(float *)((longlong)puVar6 + lVar1 + lVar14) +
                     fVar21 * (float)puVar6[-0x121];
          }
          else {
            fVar24 = (fVar26 * (float)puVar6[-0x111] + fVar25 * (float)puVar6[-0x121]) * fVar29;
            fVar24 = (1.0 - fVar24) * *(float *)((longlong)puVar6 + lVar1 + lVar14) +
                     fVar24 * fVar21;
          }
          *(float *)((longlong)puVar6 + lVar1 + lVar14) = fVar24;
          uVar5 = uVar5 + 1;
          lVar16 = lVar16 + 8;
          pcVar9 = pcVar9 + 1;
          puVar6[-0x4c] = puVar6[-0x4c] - 1 & puVar6[-0x54];
          puVar6 = puVar6 + 1;
        } while ((int)uVar5 < *(int *)(param_1 + 0x2ec));
      }
      **(float **)(param_1 + 0x210) =
           fVar28 * (*(float **)(param_1 + 0x208))[1] + **(float **)(param_1 + 0x208);
      *(float *)(*(longlong *)(param_1 + 0x210) + 4) =
           (*(float **)(param_1 + 0x208))[1] - fVar28 * **(float **)(param_1 + 0x208);
      *(float *)(*(longlong *)(param_1 + 0x210) + 8) =
           fVar28 * *(float *)(*(longlong *)(param_1 + 0x208) + 0xc) +
           *(float *)(*(longlong *)(param_1 + 0x208) + 8);
      *(float *)(*(longlong *)(param_1 + 0x210) + 0xc) =
           *(float *)(*(longlong *)(param_1 + 0x208) + 0xc) -
           fVar28 * *(float *)(*(longlong *)(param_1 + 0x208) + 8);
      *(float *)(*(longlong *)(param_1 + 0x210) + 0x10) =
           fVar28 * *(float *)(*(longlong *)(param_1 + 0x208) + 0x14) +
           *(float *)(*(longlong *)(param_1 + 0x208) + 0x10);
      *(float *)(*(longlong *)(param_1 + 0x210) + 0x14) =
           *(float *)(*(longlong *)(param_1 + 0x208) + 0x14) -
           fVar28 * *(float *)(*(longlong *)(param_1 + 0x208) + 0x10);
      *(float *)(*(longlong *)(param_1 + 0x210) + 0x18) =
           fVar28 * *(float *)(*(longlong *)(param_1 + 0x208) + 0x1c) +
           *(float *)(*(longlong *)(param_1 + 0x208) + 0x18);
      *(float *)(*(longlong *)(param_1 + 0x210) + 0x1c) =
           *(float *)(*(longlong *)(param_1 + 0x208) + 0x1c) -
           fVar28 * *(float *)(*(longlong *)(param_1 + 0x208) + 0x18);
      pfVar15 = *(float **)(param_1 + 0x210);
      pfVar15[8] = fVar28 * pfVar15[2] + *pfVar15;
      lVar14 = *(longlong *)(param_1 + 0x210);
      *(float *)(lVar14 + 0x24) = fVar28 * *(float *)(lVar14 + 0xc) + *(float *)(lVar14 + 4);
      pfVar15 = *(float **)(param_1 + 0x210);
      pfVar15[10] = pfVar15[2] - fVar28 * *pfVar15;
      lVar14 = *(longlong *)(param_1 + 0x210);
      *(float *)(lVar14 + 0x2c) = *(float *)(lVar14 + 0xc) - fVar28 * *(float *)(lVar14 + 4);
      lVar14 = *(longlong *)(param_1 + 0x210);
      *(float *)(lVar14 + 0x30) = fVar28 * *(float *)(lVar14 + 0x18) + *(float *)(lVar14 + 0x10);
      lVar14 = *(longlong *)(param_1 + 0x210);
      *(float *)(lVar14 + 0x34) = fVar28 * *(float *)(lVar14 + 0x1c) + *(float *)(lVar14 + 0x14);
      lVar14 = *(longlong *)(param_1 + 0x210);
      *(float *)(lVar14 + 0x38) = *(float *)(lVar14 + 0x18) - fVar28 * *(float *)(lVar14 + 0x10);
      lVar14 = *(longlong *)(param_1 + 0x210);
      *(float *)(lVar14 + 0x3c) = *(float *)(lVar14 + 0x1c) - fVar28 * *(float *)(lVar14 + 0x14);
      lVar14 = *(longlong *)(param_1 + 0x210);
      *(float *)(lVar14 + 0x40) = fVar28 * *(float *)(lVar14 + 0x30) + *(float *)(lVar14 + 0x20);
      lVar14 = *(longlong *)(param_1 + 0x210);
      *(float *)(lVar14 + 0x44) = fVar28 * *(float *)(lVar14 + 0x34) + *(float *)(lVar14 + 0x24);
      lVar14 = *(longlong *)(param_1 + 0x210);
      *(float *)(lVar14 + 0x48) = fVar28 * *(float *)(lVar14 + 0x38) + *(float *)(lVar14 + 0x28);
      lVar14 = *(longlong *)(param_1 + 0x210);
      *(float *)(lVar14 + 0x4c) = fVar28 * *(float *)(lVar14 + 0x3c) + *(float *)(lVar14 + 0x2c);
      lVar14 = *(longlong *)(param_1 + 0x210);
      *(float *)(lVar14 + 0x50) = *(float *)(lVar14 + 0x30) - fVar28 * *(float *)(lVar14 + 0x20);
      lVar14 = *(longlong *)(param_1 + 0x210);
      *(float *)(lVar14 + 0x54) = *(float *)(lVar14 + 0x34) - fVar28 * *(float *)(lVar14 + 0x24);
      lVar14 = *(longlong *)(param_1 + 0x210);
      *(float *)(lVar14 + 0x58) = *(float *)(lVar14 + 0x38) - fVar28 * *(float *)(lVar14 + 0x28);
      lVar14 = *(longlong *)(param_1 + 0x210);
      *(float *)(lVar14 + 0x5c) = *(float *)(lVar14 + 0x3c) - fVar28 * *(float *)(lVar14 + 0x2c);
      *(int32_t *)(*(longlong *)(param_1 + 0x2f0) + (longlong)*(int *)(param_1 + 0x3d8) * 4) =
           *(int32_t *)(*(longlong *)(param_1 + 0x210) + 0x44);
      *(int32_t *)(*(longlong *)(param_1 + 0x2f8) + (longlong)*(int *)(param_1 + 0x3dc) * 4) =
           *(int32_t *)(*(longlong *)(param_1 + 0x210) + 0x48);
      *(int32_t *)(*(longlong *)(param_1 + 0x300) + (longlong)*(int *)(param_1 + 0x3e0) * 4) =
           *(int32_t *)(*(longlong *)(param_1 + 0x210) + 0x4c);
      *(int32_t *)(*(longlong *)(param_1 + 0x308) + (longlong)*(int *)(param_1 + 0x3e4) * 4) =
           *(int32_t *)(*(longlong *)(param_1 + 0x210) + 0x50);
      uVar3 = 0;
      *(int32_t *)(*(longlong *)(param_1 + 0x310) + (longlong)*(int *)(param_1 + 1000) * 4) =
           *(int32_t *)(*(longlong *)(param_1 + 0x210) + 0x54);
      *(int32_t *)(*(longlong *)(param_1 + 0x318) + (longlong)*(int *)(param_1 + 0x3ec) * 4) =
           *(int32_t *)(*(longlong *)(param_1 + 0x210) + 0x58);
      *(int32_t *)(*(longlong *)(param_1 + 800) + (longlong)*(int *)(param_1 + 0x3f0) * 4) =
           *(int32_t *)(*(longlong *)(param_1 + 0x210) + 0x5c);
      *(int32_t *)(*(longlong *)(param_1 + 0x328) + (longlong)*(int *)(param_1 + 0x3f4) * 4) =
           *(int32_t *)(*(longlong *)(param_1 + 0x210) + 0x40);
      if (0 < param_4) {
        uVar5 = param_4 * uStack_128;
        do {
          iVar20 = 0;
          uVar4 = uVar3 & 7;
          uVar13 = (ulonglong)uVar4;
          fVar25 = 0.0;
          fVar24 = 0.0;
          iVar2 = param_4;
          if (3 < iVar19) {
            uVar7 = (iVar19 - 4U >> 2) + 1;
            uVar8 = (ulonglong)uVar7;
            pfVar15 = afStack_108 + uVar13;
            plVar11 = (longlong *)(param_1 + 0x2f0 + uVar13 * 8);
            puVar6 = (uint *)(param_1 + 0x438 + uVar13 * 4);
            puVar10 = (uint *)(param_1 + 0x3b8 + uVar13 * 4);
            iVar20 = uVar7 * 4;
            uVar4 = uVar4 + iStack_124 * uVar7 * 4;
            do {
              uVar7 = *puVar6;
              if ((int)uVar3 < 8) {
                uVar7 = uVar7 - 1 & *puVar10;
                *puVar6 = uVar7;
              }
              fVar26 = *pfVar15;
              puVar6 = puVar6 + param_4;
              puVar10 = puVar10 + param_4;
              plVar17 = plVar11 + param_4;
              pfVar15 = pfVar15 + param_4;
              fVar28 = *(float *)(*plVar11 + (longlong)(int)uVar7 * 4);
              uVar7 = *puVar6;
              if ((int)uVar3 < 8) {
                uVar7 = uVar7 - 1 & *puVar10;
                *puVar6 = uVar7;
              }
              fVar27 = *pfVar15;
              puVar6 = puVar6 + param_4;
              puVar10 = puVar10 + param_4;
              plVar18 = plVar17 + param_4;
              pfVar15 = pfVar15 + param_4;
              fVar23 = *(float *)(*plVar17 + (longlong)(int)uVar7 * 4);
              uVar7 = *puVar6;
              if ((int)uVar3 < 8) {
                uVar7 = uVar7 - 1 & *puVar10;
                *puVar6 = uVar7;
              }
              fVar22 = *pfVar15;
              puVar6 = puVar6 + param_4;
              fVar21 = *(float *)(*plVar18 + (longlong)(int)uVar7 * 4);
              uVar7 = *puVar6;
              if ((int)uVar3 < 8) {
                uVar7 = uVar7 - 1 & puVar10[param_4];
                *puVar6 = uVar7;
              }
              fVar24 = fVar24 + fVar26 + fVar27 + fVar22 + pfVar15[param_4];
              puVar10 = puVar10 + param_4 + param_4;
              puVar6 = puVar6 + param_4;
              plVar11 = plVar18 + param_4 + param_4;
              pfVar15 = pfVar15 + param_4 + param_4;
              fVar25 = fVar25 + fVar28 + fVar23 + fVar21 +
                       *(float *)(plVar18[param_4] + (longlong)(int)uVar7 * 4);
              uVar8 = uVar8 - 1;
              iVar2 = iStack_124;
            } while (uVar8 != 0);
          }
          param_4 = iVar2;
          if (iVar20 < iVar19) {
            plVar11 = (longlong *)(param_1 + 0x2f0 + (longlong)(int)uVar4 * 8);
            uVar13 = (ulonglong)(uint)(iVar19 - iVar20);
            puVar6 = (uint *)(param_1 + 0x438 + (longlong)(int)uVar4 * 4);
            do {
              uVar4 = *puVar6;
              if ((int)uVar3 < 8) {
                uVar4 = uVar4 - 1 & puVar6[-0x20];
                *puVar6 = uVar4;
              }
              fVar24 = fVar24 + *(float *)(((longlong)afStack_540 - param_1) + (longlong)puVar6);
              puVar6 = puVar6 + param_4;
              lVar14 = *plVar11;
              plVar11 = plVar11 + param_4;
              fVar25 = fVar25 + *(float *)(lVar14 + (longlong)(int)uVar4 * 4);
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          if (param_7 != 0.0) {
            fVar24 = param_7 * *(float *)(lStack_118 + (ulonglong)uVar5 * 4) + fVar24;
          }
          uVar3 = uVar3 + 1;
          *(float *)(lStack_110 + (ulonglong)uVar5 * 4) = fVar25 + fVar24;
          uVar5 = uVar5 + 1;
        } while ((int)uVar3 < param_4);
      }
      uStack_128 = uStack_128 + 1;
      lStack_120 = lStack_120 + 4;
    } while (uStack_128 < param_5);
  }
                    // WARNING: Subroutine does not return
  uStack_160 = 0x1807ed0ad;
  FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_158);
}






