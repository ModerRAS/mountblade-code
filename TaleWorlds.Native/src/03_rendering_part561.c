#include "TaleWorlds.Native.Split.h"

// 03_rendering_part561.c - 1 个函数

// 函数: void FUN_180579140(longlong param_1,longlong param_2)
void FUN_180579140(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  ulonglong uVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_288 [32];
  undefined4 uStack_268;
  undefined4 uStack_260;
  uint uStack_248;
  undefined1 auStack_238 [16];
  uint uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 uStack_1a4;
  undefined1 uStack_1a3;
  undefined1 uStack_1a2;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined4 uStack_80;
  ulonglong uStack_78;
  
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)auStack_288;
  uVar10 = 0;
  uVar9 = uVar10;
  if (*(longlong *)(param_1 + 0x2460) != 0) {
    uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x2460) + 0x1d0);
  }
  uVar9 = *(ulonglong *)(param_1 + 0x2470) | uVar9;
  uVar5 = uVar10;
  if (*(longlong *)(param_1 + 0x24a8) != 0) {
    uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x24a8) + 0x1d0);
  }
  uVar8 = uVar5 & 0xffffffffffffff00;
  if ((char)*(ulonglong *)(param_1 + 0x24b8) == '\0') {
    uVar8 = uVar5;
  }
  uVar8 = uVar8 | *(ulonglong *)(param_1 + 0x24b8);
  if (*(int *)(param_2 + 0x564) < 0) {
    if ((uVar9 >> 0x1c & 1) == 0) {
      if ((uVar9 & 0x20000000000) != 0) goto LAB_180579837;
      uVar3 = *(undefined4 *)(param_2 + 0x558);
      if ((*(float *)(param_1 + 0xa9e4) != 1.0) || (*(int *)(param_1 + 0xa8b0) != 0)) {
        *(undefined4 *)(param_1 + 0xa9e4) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xa9e8) = 0x40400000;
        *(undefined4 *)(param_1 + 0xabd4) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xabd8) = 0x40400000;
        uStack_260 = 0;
        uStack_268 = 1;
        FUN_180662190(auStack_238,*(undefined1 *)(param_1 + 0x2603),
                      *(undefined1 *)(param_1 + 0x2605),*(undefined1 *)(param_1 + 0x2607));
        *(undefined8 *)(param_1 + 0xa820) = 0;
        *(undefined8 *)(param_1 + 0xa828) = 0;
        *(undefined1 *)(param_1 + 0xa8b4) = uStack_1a4;
        *(undefined8 *)(param_1 + 0xa9c0) = uStack_98;
        *(undefined8 *)(param_1 + 0xa9c8) = uStack_90;
        *(undefined1 *)(param_1 + 0xa8b5) = uStack_1a3;
        *(ulonglong *)(param_1 + 0xa830) = CONCAT44(uStack_224,uStack_228);
        *(undefined8 *)(param_1 + 0xa838) = uStack_220;
        *(undefined8 *)(param_1 + 0xa840) = uStack_218;
        *(undefined8 *)(param_1 + 0xa848) = uStack_210;
        *(undefined8 *)(param_1 + 0xa850) = uStack_208;
        *(undefined8 *)(param_1 + 0xa858) = uStack_200;
        *(undefined8 *)(param_1 + 0xa860) = uStack_1f8;
        *(undefined8 *)(param_1 + 0xa868) = uStack_1f0;
        *(undefined8 *)(param_1 + 0xa870) = uStack_1e8;
        *(undefined8 *)(param_1 + 0xa878) = uStack_1e0;
        *(undefined1 *)(param_1 + 0xa8b6) = uStack_1a2;
        *(undefined8 *)(param_1 + 0xa880) = uStack_1d8;
        *(undefined8 *)(param_1 + 0xa888) = uStack_1d0;
        *(undefined1 *)(param_1 + 0xa9d4) = uStack_84;
        *(undefined4 *)(param_1 + 0xa9d0) = uStack_88;
        *(undefined4 *)(param_1 + 0xa890) = uStack_1c8;
        *(undefined4 *)(param_1 + 0xa894) = uStack_1c4;
        *(undefined4 *)(param_1 + 0xa898) = uStack_1c0;
        *(undefined4 *)(param_1 + 0xa89c) = uStack_1bc;
        *(undefined4 *)(param_1 + 0xa9d8) = uStack_80;
        *(undefined4 *)(param_1 + 0xa8a0) = uStack_1b8;
        *(undefined4 *)(param_1 + 0xa8a4) = uStack_1b4;
        *(undefined4 *)(param_1 + 0xa8a8) = uStack_1b0;
        *(undefined4 *)(param_1 + 0xa8ac) = uStack_1ac;
        *(undefined4 *)(param_1 + 0xa8b0) = 0;
        *(undefined1 *)(param_1 + 0xa9f0) = 1;
        *(undefined4 *)(param_1 + 0xa9c8) = uVar3;
        uStack_260 = 0;
        uStack_268 = 1;
        FUN_180662190(auStack_238,*(undefined1 *)(param_1 + 0x2604),
                      *(undefined1 *)(param_1 + 0x2606),*(undefined1 *)(param_1 + 0x2607));
        *(undefined1 *)(param_1 + 0xaaa4) = uStack_1a4;
        *(undefined8 *)(param_1 + 0xaa10) = 0;
        *(undefined8 *)(param_1 + 0xaa18) = 0;
        *(undefined1 *)(param_1 + 0xaaa5) = uStack_1a3;
        *(undefined8 *)(param_1 + 0xabb0) = uStack_98;
        *(undefined8 *)(param_1 + 0xabb8) = uStack_90;
        *(undefined1 *)(param_1 + 0xaaa6) = uStack_1a2;
        *(ulonglong *)(param_1 + 0xaa20) = CONCAT44(uStack_224,uStack_228);
        *(undefined8 *)(param_1 + 0xaa28) = uStack_220;
        *(undefined8 *)(param_1 + 0xaa30) = uStack_218;
        *(undefined8 *)(param_1 + 0xaa38) = uStack_210;
        *(undefined8 *)(param_1 + 0xaa40) = uStack_208;
        *(undefined8 *)(param_1 + 0xaa48) = uStack_200;
        *(undefined1 *)(param_1 + 0xabc4) = uStack_84;
        *(undefined8 *)(param_1 + 0xaa50) = uStack_1f8;
        *(undefined8 *)(param_1 + 0xaa58) = uStack_1f0;
        *(undefined4 *)(param_1 + 0xabc0) = uStack_88;
        *(undefined4 *)(param_1 + 0xabc8) = uStack_80;
        *(undefined4 *)(param_1 + 0xaaa0) = 0;
        *(undefined8 *)(param_1 + 0xaa60) = uStack_1e8;
        *(undefined8 *)(param_1 + 0xaa68) = uStack_1e0;
        *(undefined8 *)(param_1 + 0xaa70) = uStack_1d8;
        *(undefined8 *)(param_1 + 0xaa78) = uStack_1d0;
        *(undefined4 *)(param_1 + 0xaa80) = uStack_1c8;
        *(undefined4 *)(param_1 + 0xaa84) = uStack_1c4;
        *(undefined4 *)(param_1 + 0xaa88) = uStack_1c0;
        *(undefined4 *)(param_1 + 0xaa8c) = uStack_1bc;
        *(undefined4 *)(param_1 + 0xaa90) = uStack_1b8;
        *(undefined4 *)(param_1 + 0xaa94) = uStack_1b4;
        *(undefined4 *)(param_1 + 0xaa98) = uStack_1b0;
        *(undefined4 *)(param_1 + 0xaa9c) = uStack_1ac;
        *(undefined1 *)(param_1 + 44000) = 1;
        *(undefined4 *)(param_1 + 0xabb8) = uVar3;
      }
    }
    else if ((*(float *)(param_1 + 0xa9e4) != 1.0) || (*(int *)(param_1 + 0xa8b0) != 1)) {
      uStack_260 = 0;
      uStack_268 = 1;
      FUN_180662190(auStack_238,*(undefined1 *)(param_1 + 0x2603),*(undefined1 *)(param_1 + 0x2605),
                    *(undefined1 *)(param_1 + 0x2607));
      *(undefined8 *)(param_1 + 0xa820) = 0;
      *(undefined8 *)(param_1 + 0xa828) = 0;
      *(undefined1 *)(param_1 + 0xa8b4) = uStack_1a4;
      *(undefined8 *)(param_1 + 0xa9c0) = uStack_98;
      *(undefined8 *)(param_1 + 0xa9c8) = uStack_90;
      *(undefined1 *)(param_1 + 0xa8b5) = uStack_1a3;
      *(ulonglong *)(param_1 + 0xa830) = CONCAT44(uStack_224,uStack_228);
      *(undefined8 *)(param_1 + 0xa838) = uStack_220;
      *(undefined8 *)(param_1 + 0xa840) = uStack_218;
      *(undefined8 *)(param_1 + 0xa848) = uStack_210;
      *(undefined8 *)(param_1 + 0xa850) = uStack_208;
      *(undefined8 *)(param_1 + 0xa858) = uStack_200;
      *(undefined8 *)(param_1 + 0xa860) = uStack_1f8;
      *(undefined8 *)(param_1 + 0xa868) = uStack_1f0;
      *(undefined8 *)(param_1 + 0xa870) = uStack_1e8;
      *(undefined8 *)(param_1 + 0xa878) = uStack_1e0;
      *(undefined1 *)(param_1 + 0xa8b6) = uStack_1a2;
      *(undefined8 *)(param_1 + 0xa880) = uStack_1d8;
      *(undefined8 *)(param_1 + 0xa888) = uStack_1d0;
      *(undefined1 *)(param_1 + 0xa9d4) = uStack_84;
      *(undefined4 *)(param_1 + 0xa9d0) = uStack_88;
      *(undefined4 *)(param_1 + 0xa890) = uStack_1c8;
      *(undefined4 *)(param_1 + 0xa894) = uStack_1c4;
      *(undefined4 *)(param_1 + 0xa898) = uStack_1c0;
      *(undefined4 *)(param_1 + 0xa89c) = uStack_1bc;
      *(undefined4 *)(param_1 + 0xa9d8) = uStack_80;
      *(undefined4 *)(param_1 + 0xa8a0) = uStack_1b8;
      *(undefined4 *)(param_1 + 0xa8a4) = uStack_1b4;
      *(undefined4 *)(param_1 + 0xa8a8) = uStack_1b0;
      *(undefined4 *)(param_1 + 0xa8ac) = uStack_1ac;
      *(undefined4 *)(param_1 + 0xa8b0) = 1;
      *(undefined1 *)(param_1 + 0xa9f0) = 1;
      uStack_260 = 0;
      uStack_268 = 1;
      FUN_180662190(auStack_238,*(undefined1 *)(param_1 + 0x2604),*(undefined1 *)(param_1 + 0x2606),
                    *(undefined1 *)(param_1 + 0x2607));
      *(undefined4 *)(param_1 + 0xaaa0) = 1;
      goto LAB_1805793a4;
    }
  }
  else if ((uVar9 & 0x20000000000) == 0) {
    uVar2 = *(uint *)(*(longlong *)
                       ((longlong)*(int *)(param_2 + 0x564) * 0xa60 + 0x3778 +
                       *(longlong *)(param_2 + 0x8d8)) + 0x8c0);
    if ((*(float *)(param_1 + 0xa9e4) != 1.0) || (*(int *)(param_1 + 0xa8b0) != 2)) {
      uStack_248 = uVar2 ^ 0x80000000;
      uStack_260 = 0;
      uStack_268 = 1;
      FUN_180662190(auStack_238,*(undefined1 *)(param_1 + 0x2603),*(undefined1 *)(param_1 + 0x2605),
                    *(undefined1 *)(param_1 + 0x2607));
      *(undefined8 *)(param_1 + 0xa820) = 0;
      *(undefined8 *)(param_1 + 0xa828) = 0;
      uStack_228 = uStack_248;
      *(undefined1 *)(param_1 + 0xa8b4) = uStack_1a4;
      *(undefined8 *)(param_1 + 0xa9c0) = uStack_98;
      *(undefined8 *)(param_1 + 0xa9c8) = uStack_90;
      *(undefined1 *)(param_1 + 0xa8b5) = uStack_1a3;
      *(ulonglong *)(param_1 + 0xa830) = CONCAT44(uStack_224,uStack_248);
      *(undefined8 *)(param_1 + 0xa838) = uStack_220;
      *(undefined8 *)(param_1 + 0xa840) = uStack_218;
      *(undefined8 *)(param_1 + 0xa848) = uStack_210;
      *(undefined8 *)(param_1 + 0xa850) = uStack_208;
      *(undefined8 *)(param_1 + 0xa858) = uStack_200;
      *(undefined8 *)(param_1 + 0xa860) = uStack_1f8;
      *(undefined8 *)(param_1 + 0xa868) = uStack_1f0;
      *(undefined8 *)(param_1 + 0xa870) = uStack_1e8;
      *(undefined8 *)(param_1 + 0xa878) = uStack_1e0;
      *(undefined1 *)(param_1 + 0xa8b6) = uStack_1a2;
      *(undefined8 *)(param_1 + 0xa880) = uStack_1d8;
      *(undefined8 *)(param_1 + 0xa888) = uStack_1d0;
      *(undefined1 *)(param_1 + 0xa9d4) = uStack_84;
      *(undefined4 *)(param_1 + 0xa9d0) = uStack_88;
      *(undefined4 *)(param_1 + 0xa890) = uStack_1c8;
      *(undefined4 *)(param_1 + 0xa894) = uStack_1c4;
      *(undefined4 *)(param_1 + 0xa898) = uStack_1c0;
      *(undefined4 *)(param_1 + 0xa89c) = uStack_1bc;
      *(undefined4 *)(param_1 + 0xa9d8) = uStack_80;
      *(undefined4 *)(param_1 + 0xa8b0) = 2;
      *(undefined4 *)(param_1 + 0xa8a0) = uStack_1b8;
      *(undefined4 *)(param_1 + 0xa8a4) = uStack_1b4;
      *(undefined4 *)(param_1 + 0xa8a8) = uStack_1b0;
      *(undefined4 *)(param_1 + 0xa8ac) = uStack_1ac;
      *(undefined1 *)(param_1 + 0xa9f0) = 1;
      uStack_260 = 0;
      uStack_268 = 1;
      uStack_248 = uVar2;
      FUN_180662190(auStack_238,*(undefined1 *)(param_1 + 0x2604),*(undefined1 *)(param_1 + 0x2606),
                    *(undefined1 *)(param_1 + 0x2607));
      uStack_228 = uStack_248;
      *(undefined4 *)(param_1 + 0xaaa0) = 2;
LAB_1805793a4:
      *(undefined1 *)(param_1 + 0xaaa4) = uStack_1a4;
      *(undefined1 *)(param_1 + 0xaaa5) = uStack_1a3;
      *(undefined1 *)(param_1 + 0xaaa6) = uStack_1a2;
      *(undefined1 *)(param_1 + 0xabc4) = uStack_84;
      *(undefined8 *)(param_1 + 0xabb0) = uStack_98;
      *(undefined8 *)(param_1 + 0xabb8) = uStack_90;
      *(undefined4 *)(param_1 + 0xabc0) = uStack_88;
      *(undefined4 *)(param_1 + 0xabc8) = uStack_80;
      *(undefined4 *)(param_1 + 0xaa10) = 0;
      *(undefined4 *)(param_1 + 0xaa14) = 0;
      *(undefined4 *)(param_1 + 0xaa18) = 0;
      *(undefined4 *)(param_1 + 0xaa1c) = 0;
      *(ulonglong *)(param_1 + 0xaa20) = CONCAT44(uStack_224,uStack_228);
      *(undefined8 *)(param_1 + 0xaa28) = uStack_220;
      *(undefined8 *)(param_1 + 0xaa30) = uStack_218;
      *(undefined8 *)(param_1 + 0xaa38) = uStack_210;
      *(undefined8 *)(param_1 + 0xaa40) = uStack_208;
      *(undefined8 *)(param_1 + 0xaa48) = uStack_200;
      *(undefined8 *)(param_1 + 0xaa50) = uStack_1f8;
      *(undefined8 *)(param_1 + 0xaa58) = uStack_1f0;
      *(undefined8 *)(param_1 + 0xaa60) = uStack_1e8;
      *(undefined8 *)(param_1 + 0xaa68) = uStack_1e0;
      *(undefined8 *)(param_1 + 0xaa70) = uStack_1d8;
      *(undefined8 *)(param_1 + 0xaa78) = uStack_1d0;
      *(undefined4 *)(param_1 + 0xaa80) = uStack_1c8;
      *(undefined4 *)(param_1 + 0xaa84) = uStack_1c4;
      *(undefined4 *)(param_1 + 0xaa88) = uStack_1c0;
      *(undefined4 *)(param_1 + 0xaa8c) = uStack_1bc;
      *(undefined4 *)(param_1 + 0xaa90) = uStack_1b8;
      *(undefined4 *)(param_1 + 0xaa94) = uStack_1b4;
      *(undefined4 *)(param_1 + 0xaa98) = uStack_1b0;
      *(undefined4 *)(param_1 + 0xaa9c) = uStack_1ac;
      *(undefined1 *)(param_1 + 44000) = 1;
      *(undefined4 *)(param_1 + 0xa9e4) = 0x3f800000;
      *(undefined4 *)(param_1 + 0xa9e8) = 0x40400000;
      *(undefined4 *)(param_1 + 0xabd4) = 0x3f800000;
LAB_180579861:
      *(undefined4 *)(param_1 + 0xabd8) = 0x40400000;
    }
  }
  else {
LAB_180579837:
    if (*(float *)(param_1 + 0xa9e4) != 0.0) {
      *(undefined4 *)(param_1 + 0xa9e4) = 0;
      *(undefined4 *)(param_1 + 0xa9e8) = 0x40400000;
    }
    if (*(float *)(param_1 + 0xabd4) != 0.0) {
      *(undefined4 *)(param_1 + 0xabd4) = 0;
      goto LAB_180579861;
    }
  }
  lVar6 = *(longlong *)(param_2 + 0x728);
  uVar7 = *(ushort *)(lVar6 + 0x5aa) & 0x40;
  if (((uVar7 != 0) && (0.0 < *(float *)(param_1 + 0xa7f0))) &&
     (0.0025000002 <
      *(float *)(param_1 + 0xa7d0) * *(float *)(param_1 + 0xa7d0) +
      *(float *)(param_1 + 0xa7d4) * *(float *)(param_1 + 0xa7d4) +
      *(float *)(param_1 + 0xa7d8) * *(float *)(param_1 + 0xa7d8))) {
    *(ushort *)(lVar6 + 0x5ac) = *(ushort *)(lVar6 + 0x5ac) | uVar7;
    puVar1 = (ushort *)(*(longlong *)(param_2 + 0x728) + 0x5aa);
    *puVar1 = *puVar1 & ~uVar7;
    *(undefined4 *)(*(longlong *)(param_2 + 0x728) + 0x5a4) = 0xffffffff;
    lVar6 = *(longlong *)(param_2 + 0x728);
  }
  uVar7 = *(ushort *)(lVar6 + 0x5aa) & 0x3c;
  if (((uVar7 != 0) &&
      ((uVar5 = uVar9 & 0x2000000000, (uVar9 >> 0x1b & 1) == 0 ||
       (((uVar9 & 0x2000000000) == 0 && (uVar5 = uVar10, *(int *)(param_1 + 0x2498) != -1)))))) &&
     (((uVar8 >> 0x1b & 1) == 0 || (uVar5 != 0)))) {
    *(ushort *)(lVar6 + 0x5ac) = *(ushort *)(lVar6 + 0x5ac) | uVar7;
    puVar1 = (ushort *)(*(longlong *)(param_2 + 0x728) + 0x5aa);
    *puVar1 = *puVar1 & ~uVar7;
  }
  if ((((uint)uVar8 | (uint)uVar9) & 0x8040000) == 0x40000) {
    *(undefined4 *)(param_1 + 0xa608) = *(undefined4 *)(param_1 + 0xa608);
    *(undefined4 *)(param_1 + 0xa604) = 0;
    if ((*(ushort *)(*(longlong *)(param_2 + 0x728) + 0x5aa) & 0x1000) == 0) {
      *(undefined4 *)(param_1 + 43000) = *(undefined4 *)(param_1 + 43000);
      *(undefined4 *)(param_1 + 0xa7f4) = 0;
    }
    if ((*(float *)(param_1 + 0xa600) <= 0.0) && (*(float *)(param_1 + 0xa604) == 0.0)) {
      FUN_180516e40(param_2,0xc7d5);
    }
    fVar4 = *(float *)(param_1 + 0xa7f0);
joined_r0x000180579c37:
    if ((0.0 < fVar4) || (*(float *)(param_1 + 0xa7f4) != 0.0)) goto LAB_180579c4f;
  }
  else {
    uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x728) + 0x5aa);
    if ((uVar7 & 0x2c0) == 0) {
      if ((uVar7 & 0x100) == 0) {
        if ((*(ushort *)(*(longlong *)(param_2 + 0x728) + 0x5ac) & 0x3c0) != 0) {
          FUN_1805162e0(param_2);
        }
      }
      else {
        FUN_180515880(param_2);
      }
    }
    else {
      FUN_180514a60(param_2);
    }
    lVar6 = *(longlong *)(param_2 + 0x728);
    if ((*(ushort *)(lVar6 + 0x5aa) & 0x800) != 0) {
      uStack_260 = 0;
      uStack_248 = CONCAT31(uStack_248._1_3_,*(undefined1 *)(param_1 + 0x25fb));
      uStack_268 = 0;
      FUN_180662190(auStack_238,*(undefined1 *)(param_1 + 0x25fa),*(undefined1 *)(param_1 + 0x25fc),
                    *(undefined1 *)(param_1 + 0x2600));
      *(undefined8 *)(param_1 + 0xa630) = 0;
      *(undefined8 *)(param_1 + 0xa638) = 0;
      uStack_228 = uStack_248;
      *(undefined1 *)(param_1 + 0xa6c4) = uStack_1a4;
      *(undefined8 *)(param_1 + 0xa7d0) = uStack_98;
      *(undefined8 *)(param_1 + 0xa7d8) = uStack_90;
      *(undefined1 *)(param_1 + 0xa6c5) = uStack_1a3;
      *(ulonglong *)(param_1 + 0xa640) = CONCAT44(uStack_224,uStack_248);
      *(undefined8 *)(param_1 + 0xa648) = uStack_220;
      *(undefined8 *)(param_1 + 0xa650) = uStack_218;
      *(undefined8 *)(param_1 + 0xa658) = uStack_210;
      *(undefined8 *)(param_1 + 0xa660) = uStack_208;
      *(undefined8 *)(param_1 + 0xa668) = uStack_200;
      *(undefined8 *)(param_1 + 0xa670) = uStack_1f8;
      *(undefined8 *)(param_1 + 0xa678) = uStack_1f0;
      *(undefined8 *)(param_1 + 0xa680) = uStack_1e8;
      *(undefined8 *)(param_1 + 0xa688) = uStack_1e0;
      *(undefined1 *)(param_1 + 0xa6c6) = uStack_1a2;
      *(undefined8 *)(param_1 + 0xa690) = uStack_1d8;
      *(undefined8 *)(param_1 + 0xa698) = uStack_1d0;
      *(undefined1 *)(param_1 + 0xa7e4) = uStack_84;
      *(undefined4 *)(param_1 + 0xa7e0) = uStack_88;
      *(undefined4 *)(param_1 + 0xa6a0) = uStack_1c8;
      *(undefined4 *)(param_1 + 0xa6a4) = uStack_1c4;
      *(undefined4 *)(param_1 + 0xa6a8) = uStack_1c0;
      *(undefined4 *)(param_1 + 0xa6ac) = uStack_1bc;
      *(undefined4 *)(param_1 + 0xa7e8) = uStack_80;
      *(undefined4 *)(param_1 + 0xa6c0) = 5;
      *(ulonglong *)(param_1 + 0xa6b0) = CONCAT44(uStack_1b4,uStack_1b8);
      *(ulonglong *)(param_1 + 0xa6b8) = CONCAT44(uStack_1ac,uStack_1b0);
      *(undefined1 *)(param_1 + 0xa800) = 1;
      if (*(float *)(param_1 + 0xa7f4) != 1.0) {
        *(undefined4 *)(param_1 + 0xa7f4) = 0x3f800000;
        *(undefined4 *)(param_1 + 43000) = 0x40400000;
      }
      *(undefined4 *)(param_1 + 0xa7fc) = 0x42200000;
      lVar6 = *(longlong *)(param_2 + 0x728);
    }
    if ((*(ushort *)(lVar6 + 0x5aa) & 0xc7d5) == 0) {
      if (*(float *)(param_1 + 0xa604) != 0.0) {
        *(undefined4 *)(param_1 + 0xa608) = *(undefined4 *)(param_1 + 0xa608);
        *(undefined4 *)(param_1 + 0xa604) = 0;
      }
      if (*(float *)(param_1 + 0xa600) <= 0.0) {
LAB_180579bd9:
        FUN_180516e40(param_2,0xc7d5);
      }
    }
    else if ((1.0 <= *(float *)(param_1 + 0xa600)) ||
            ((*(float *)(param_1 + 0xa600) <= 0.0 && (*(float *)(param_1 + 0xa604) == 0.0))))
    goto LAB_180579bd9;
    if ((*(ushort *)(*(longlong *)(param_2 + 0x728) + 0x5aa) & 0x3c2a) == 0) {
      if (*(float *)(param_1 + 0xa7f4) != 0.0) {
        *(undefined4 *)(param_1 + 43000) = *(undefined4 *)(param_1 + 43000);
        *(undefined4 *)(param_1 + 0xa7f4) = 0;
      }
      if (0.0 < *(float *)(param_1 + 0xa7f0)) goto LAB_180579c4f;
    }
    else {
      fVar4 = *(float *)(param_1 + 0xa7f0);
      if (fVar4 < 1.0) goto joined_r0x000180579c37;
    }
  }
  FUN_180516e40(param_2,0x382a);
LAB_180579c4f:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_288);
}





