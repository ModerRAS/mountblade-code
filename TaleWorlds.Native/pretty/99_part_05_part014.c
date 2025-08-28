#include "TaleWorlds.Native.Split.h"

// 99_part_05_part014.c - 2 个函数

// 函数: void FUN_1802dd2b0(longlong param_1,longlong param_2)
void FUN_1802dd2b0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  longlong lVar27;
  longlong lVar28;
  undefined8 *puVar29;
  undefined4 uVar30;
  uint uVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined1 auStack_80 [88];
  
  uStack_88 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)(param_1 + 200);
  lVar9 = *(longlong *)(param_1 + 0x280);
  if ((*(uint *)(param_1 + 0x2e0) >> 0x10 & 1) != 0) {
    uVar33 = *(undefined8 *)(param_1 + 0xd0);
    uVar34 = *(undefined8 *)(param_1 + 0xd8);
    uVar22 = *(undefined8 *)(param_1 + 0xe0);
    uVar23 = *(undefined8 *)(param_1 + 0xe8);
    uVar24 = *(undefined8 *)(param_1 + 0xf0);
    uVar25 = *(undefined8 *)(param_1 + 0xf8);
    uVar26 = *(undefined8 *)(param_1 + 0x100);
    puVar29 = *(undefined8 **)(param_1 + 0x298);
    *puVar29 = *puVar1;
    puVar29[1] = uVar33;
    puVar29[2] = uVar34;
    puVar29[3] = uVar22;
    puVar29[4] = uVar23;
    puVar29[5] = uVar24;
    puVar29[6] = uVar25;
    puVar29[7] = uVar26;
    fVar2 = *(float *)(lVar9 + 0x2ac);
    fVar3 = *(float *)(param_1 + 0x14c);
    fVar4 = *(float *)(lVar9 + 0x2b0);
    fVar5 = *(float *)(param_1 + 0x150);
    fVar6 = *(float *)(lVar9 + 0x2b4);
    fVar7 = *(float *)(param_1 + 0x154);
    lVar27 = *(longlong *)(param_1 + 0x298);
    *(float *)(lVar27 + 0x40) = *(float *)(param_1 + 0x148) * *(float *)(lVar9 + 0x2a8);
    *(float *)(lVar27 + 0x44) = fVar2 * fVar3;
    *(float *)(lVar27 + 0x48) = fVar4 * fVar5;
    *(float *)(lVar27 + 0x4c) = fVar6 * fVar7;
    uVar33 = (*(undefined8 **)(param_1 + 0x1c0))[1];
    lVar9 = *(longlong *)(param_1 + 0x298);
    *(undefined8 *)(lVar9 + 0x50) = **(undefined8 **)(param_1 + 0x1c0);
    *(undefined8 *)(lVar9 + 0x58) = uVar33;
    uVar33 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x18);
    lVar9 = *(longlong *)(param_1 + 0x298);
    *(undefined8 *)(lVar9 + 0x60) = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x10);
    *(undefined8 *)(lVar9 + 0x68) = uVar33;
    uVar33 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x28);
    lVar9 = *(longlong *)(param_1 + 0x298);
    *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x20);
    *(undefined8 *)(lVar9 + 0x78) = uVar33;
    uVar33 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x38);
    lVar9 = *(longlong *)(param_1 + 0x298);
    *(undefined8 *)(lVar9 + 0x80) = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x30);
    *(undefined8 *)(lVar9 + 0x88) = uVar33;
    uVar33 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x48);
    lVar9 = *(longlong *)(param_1 + 0x298);
    *(undefined8 *)(lVar9 + 0x90) = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x40);
    *(undefined8 *)(lVar9 + 0x98) = uVar33;
    uVar33 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x58);
    lVar9 = *(longlong *)(param_1 + 0x298);
    *(undefined8 *)(lVar9 + 0xa0) = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x50);
    *(undefined8 *)(lVar9 + 0xa8) = uVar33;
    uVar33 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x68);
    lVar9 = *(longlong *)(param_1 + 0x298);
    *(undefined8 *)(lVar9 + 0xb0) = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x60);
    *(undefined8 *)(lVar9 + 0xb8) = uVar33;
    uVar33 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x78);
    lVar9 = *(longlong *)(param_1 + 0x298);
    *(undefined8 *)(lVar9 + 0xc0) = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x70);
    *(undefined8 *)(lVar9 + 200) = uVar33;
    uVar33 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x88);
    lVar9 = *(longlong *)(param_1 + 0x298);
    *(undefined8 *)(lVar9 + 0xd0) = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x80);
    *(undefined8 *)(lVar9 + 0xd8) = uVar33;
    uVar33 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x98);
    lVar9 = *(longlong *)(param_1 + 0x298);
    *(undefined8 *)(lVar9 + 0xe0) = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x90);
    *(undefined8 *)(lVar9 + 0xe8) = uVar33;
    uVar33 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0xa8);
    lVar9 = *(longlong *)(param_1 + 0x298);
    *(undefined8 *)(lVar9 + 0xf0) = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0xa0);
    *(undefined8 *)(lVar9 + 0xf8) = uVar33;
    uVar33 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0xb8);
    lVar9 = *(longlong *)(param_1 + 0x298);
    *(undefined8 *)(lVar9 + 0x100) = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0xb0);
    *(undefined8 *)(lVar9 + 0x108) = uVar33;
    uVar33 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 200);
    lVar9 = *(longlong *)(param_1 + 0x298);
    *(undefined8 *)(lVar9 + 0x110) = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0xc0);
    *(undefined8 *)(lVar9 + 0x118) = uVar33;
    return;
  }
  puVar29 = *(undefined8 **)(param_1 + 0x288);
  if ((*(uint *)(param_1 + 0x2e0) >> 0xd & 1) != 0) {
    *puVar29 = 0x3f800000;
    puVar29[1] = 0;
    puVar29[2] = 0x3f80000000000000;
    puVar29[3] = 0;
    puVar29[4] = 0;
    puVar29[5] = 0x3f800000;
    puVar29[6] = 0;
    puVar29[7] = 0x3f80000000000000;
    *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x40) = *(undefined4 *)(lVar9 + 0x26c);
    *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x44) = *(undefined4 *)(lVar9 + 600);
    *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x4c) = 0;
    uVar33 = *(undefined8 *)(lVar9 + 0x264);
    lVar27 = *(longlong *)(param_1 + 0x288);
    *(undefined8 *)(lVar27 + 0x50) = *(undefined8 *)(lVar9 + 0x25c);
    *(undefined8 *)(lVar27 + 0x58) = uVar33;
    *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x60) = *(undefined4 *)(lVar9 + 0x270);
    *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 100) = *(undefined4 *)(lVar9 + 0x274);
    *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x68) = *(undefined4 *)(lVar9 + 0x278);
    *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x8c) = *(undefined4 *)(lVar9 + 0x27c);
    *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x6c) = *(undefined4 *)(lVar9 + 0x280);
    *(uint *)(*(longlong *)(param_1 + 0x288) + 0x80) = *(uint *)(param_1 + 0x31c) / 6;
    return;
  }
  uVar33 = *(undefined8 *)(param_1 + 0xd0);
  uVar34 = *(undefined8 *)(param_1 + 0xd8);
  uVar22 = *(undefined8 *)(param_1 + 0xe0);
  uVar30 = *(undefined4 *)(param_1 + 0xe8);
  uVar11 = *(undefined4 *)(param_1 + 0xec);
  uVar12 = *(undefined4 *)(param_1 + 0xf0);
  uVar13 = *(undefined4 *)(param_1 + 0xf4);
  uVar14 = *(undefined4 *)(param_1 + 0xf8);
  uVar15 = *(undefined4 *)(param_1 + 0xfc);
  uVar16 = *(undefined4 *)(param_1 + 0x100);
  uVar17 = *(undefined4 *)(param_1 + 0x104);
  *puVar29 = *puVar1;
  puVar29[1] = uVar33;
  puVar29[2] = uVar34;
  puVar29[3] = uVar22;
  *(undefined4 *)(puVar29 + 4) = uVar30;
  *(undefined4 *)((longlong)puVar29 + 0x24) = uVar11;
  *(undefined4 *)(puVar29 + 5) = uVar12;
  *(undefined4 *)((longlong)puVar29 + 0x2c) = uVar13;
  *(undefined4 *)(puVar29 + 6) = uVar14;
  *(undefined4 *)((longlong)puVar29 + 0x34) = uVar15;
  *(undefined4 *)(puVar29 + 7) = uVar16;
  *(undefined4 *)((longlong)puVar29 + 0x3c) = uVar17;
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x40) = *(undefined4 *)(lVar9 + 0x26c);
  if ((*(uint *)(param_1 + 0x2e0) & 0x1000) == 0) {
    uVar30 = *(undefined4 *)(lVar9 + 600);
  }
  else {
    uVar30 = 0;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x44) = uVar30;
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x74) = *(undefined4 *)(param_1 + 0x2f4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x70) = *(undefined4 *)(param_1 + 0x2f0);
  *(float *)(*(longlong *)(param_1 + 0x288) + 0x4c) = (float)(*(uint *)(param_1 + 0x1cc) & 0x800);
  uStack_c8 = *(undefined **)(lVar9 + 0x25c);
  uStack_c0 = *(undefined8 *)(lVar9 + 0x264);
  lVar27 = *(longlong *)(param_1 + 0x288);
  *(undefined **)(lVar27 + 0x50) = uStack_c8;
  *(longlong *)(lVar27 + 0x58) = uStack_c0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x60) = *(undefined4 *)(lVar9 + 0x270);
  *(float *)(*(longlong *)(param_1 + 0x288) + 100) =
       *(float *)(lVar9 + 0x274) * *(float *)(param_1 + 0x1c8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x68) = *(undefined4 *)(lVar9 + 0x278);
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x8c) = *(undefined4 *)(lVar9 + 0x27c);
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x6c) = *(undefined4 *)(lVar9 + 0x280);
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x80) = *(undefined4 *)(param_1 + 0x2fc);
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x84) = *(undefined4 *)(param_1 + 0x300);
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x88) = *(undefined4 *)(param_1 + 0x2e8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x48) = *(undefined4 *)(param_1 + 0x2ec);
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x78) = *(undefined4 *)(param_1 + 0x304);
  if (*(char *)(param_1 + 0x322) == '\0') {
    uVar30 = *(undefined4 *)(param_1 + 0x308);
  }
  else {
    uVar30 = *(undefined4 *)(param_1 + 0x304);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x7c) = uVar30;
  if ((((*(uint *)(param_1 + 0x1cc) & 0x400000) != 0) &&
      (lVar27 = *(longlong *)(param_1 + 0x1b8), lVar27 != 0)) && (*(char *)(lVar27 + 0x13d) != '\0')
     ) {
    lVar27 = FUN_1800f4560(_DAT_180c8a980,*(undefined4 *)(lVar27 + 0x24));
    *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x98) = *(undefined4 *)(lVar27 + 4);
    lVar28 = FUN_1800f44d0(_DAT_180c8a980,*(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + 0x18));
    *(undefined4 *)(*(longlong *)(param_1 + 0x290) + 0xe0) = *(undefined4 *)(lVar28 + 0x180);
    *(undefined4 *)(*(longlong *)(param_1 + 0x290) + 0xe4) = *(undefined4 *)(lVar28 + 0x184);
    *(undefined4 *)(*(longlong *)(param_1 + 0x290) + 0xe8) = *(undefined4 *)(lVar28 + 0x188);
    uVar33 = *(undefined8 *)(lVar28 + 0x198);
    lVar27 = *(longlong *)(param_1 + 0x290);
    *(undefined8 *)(lVar27 + 0xf0) = *(undefined8 *)(lVar28 + 400);
    *(undefined8 *)(lVar27 + 0xf8) = uVar33;
    *(undefined4 *)(*(longlong *)(param_1 + 0x290) + 0xfc) = *(undefined4 *)(param_1 + 0x2dc);
    lVar27 = _DAT_180c8a980;
    if (*(int *)(*(longlong *)(param_1 + 0x1b8) + 0x14) == 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x90) = *(undefined4 *)(lVar28 + 0xcc);
    }
    else {
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x1c);
      lVar28 = _DAT_180c8a980 + 0x2b8;
      uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
      uStack_c8 = (undefined *)lVar28;
      AcquireSRWLockShared(lVar28);
      lVar27 = *(longlong *)(*(longlong *)(lVar27 + 0x160) + (longlong)iVar8 * 8);
      ReleaseSRWLockShared(lVar28);
      *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x94) = *(undefined4 *)(lVar27 + 0x28);
    }
  }
  fVar5 = *(float *)(param_1 + 0x14c);
  fVar6 = *(float *)(param_1 + 0x150);
  fVar7 = *(float *)(param_1 + 0x154);
  fVar37 = *(float *)(param_1 + 0x158);
  fVar32 = *(float *)(param_1 + 0x15c);
  fVar35 = *(float *)(param_1 + 0x160);
  fVar36 = *(float *)(param_1 + 0x164);
  fVar2 = *(float *)(lVar9 + 0x2b4);
  fVar3 = *(float *)(lVar9 + 0x2b0);
  fVar4 = *(float *)(lVar9 + 0x2ac);
  pfVar10 = *(float **)(param_1 + 0x290);
  *pfVar10 = *(float *)(param_1 + 0x148) * *(float *)(lVar9 + 0x2a8);
  pfVar10[1] = fVar5 * fVar4;
  pfVar10[2] = fVar6 * fVar3;
  pfVar10[3] = fVar7 * fVar2;
  fVar36 = fVar36 * *(float *)(lVar9 + 0x2c4);
  fVar35 = fVar35 * *(float *)(lVar9 + 0x2c0);
  fVar32 = fVar32 * *(float *)(lVar9 + 700);
  fVar37 = fVar37 * *(float *)(lVar9 + 0x2b8);
  lVar27 = *(longlong *)(param_1 + 0x290);
  uStack_c8 = (undefined *)CONCAT44(fVar32,fVar37);
  uStack_c0 = CONCAT44(fVar36,fVar35);
  *(float *)(lVar27 + 0x10) = fVar37;
  *(float *)(lVar27 + 0x14) = fVar32;
  *(float *)(lVar27 + 0x18) = fVar35;
  *(float *)(lVar27 + 0x1c) = fVar36;
  uVar31 = 0;
  if ((*(uint *)(lVar9 + 0x138) & 0x40000) != 0) {
    if (*(float *)(param_1 + 0x2d8) <= 0.0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x290) + 0x10) = 0;
    }
    else {
      *(float *)(*(longlong *)(param_1 + 0x290) + 0x10) = *(float *)(param_1 + 0x2d8);
    }
  }
  uVar33 = *(undefined8 *)(param_1 + 0x170);
  lVar27 = *(longlong *)(param_1 + 0x290);
  *(undefined8 *)(lVar27 + 0x20) = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(lVar27 + 0x28) = uVar33;
  uVar30 = *(undefined4 *)(param_1 + 0x17c);
  uVar11 = *(undefined4 *)(param_1 + 0x180);
  uVar12 = *(undefined4 *)(param_1 + 0x184);
  lVar27 = *(longlong *)(param_1 + 0x290);
  *(undefined4 *)(lVar27 + 0x30) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(lVar27 + 0x34) = uVar30;
  *(undefined4 *)(lVar27 + 0x38) = uVar11;
  *(undefined4 *)(lVar27 + 0x3c) = uVar12;
  if (((((*(uint *)(param_2 + 4) & 0x10000000) == 0) &&
       ((_DAT_180c8a9d0 == 0 || (*(char *)(_DAT_180c8a9d0 + 0x1f1) == '\0')))) &&
      (*(char *)(lVar9 + 0x1d8) == '\0')) &&
     ((*(int *)(lVar9 + 0x1d0) != -1 && (*(int *)(lVar9 + 0x1d0) != 0)))) {
    lVar27 = *(longlong *)(param_1 + 0x280);
    if ((*(longlong *)(lVar27 + 0x3c8) == 0) && (_DAT_180c8a9d0 != 0)) {
      uVar33 = FUN_1806279c0(&uStack_c8,lVar27 + 0x160);
      uVar33 = FUN_180177da0(uVar33,&uStack_c8);
      *(undefined8 *)(lVar27 + 0x3c8) = uVar33;
      uStack_c8 = &UNK_180a3c3e0;
      if (uStack_c0 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uStack_c0 = 0;
      uStack_b0._0_4_ = 0;
      uStack_c8 = &UNK_18098bcb0;
      uVar33 = FUN_1806279c0(&uStack_c8,lVar27 + 0x198);
      uVar33 = FUN_180177da0(uVar33,&uStack_c8);
      *(undefined8 *)(lVar27 + 0x3d0) = uVar33;
      uStack_c8 = &UNK_180a3c3e0;
      if (uStack_c0 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uStack_c0 = 0;
      uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
      uStack_c8 = &UNK_18098bcb0;
    }
    if (*(longlong *)(lVar9 + 0x3c8) != 0) {
      puVar29 = (undefined8 *)FUN_18022bbe0(lVar9,0);
      uVar33 = puVar29[1];
      *(undefined8 *)(param_1 + 0x230) = *puVar29;
      *(undefined8 *)(param_1 + 0x238) = uVar33;
      uVar30 = *(undefined4 *)((longlong)puVar29 + 0x14);
      uVar11 = *(undefined4 *)(puVar29 + 3);
      uVar12 = *(undefined4 *)((longlong)puVar29 + 0x1c);
      *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(puVar29 + 2);
      *(undefined4 *)(param_1 + 0x244) = uVar30;
      *(undefined4 *)(param_1 + 0x248) = uVar11;
      *(undefined4 *)(param_1 + 0x24c) = uVar12;
      puVar29 = (undefined8 *)FUN_18022bbe0(lVar9,1);
      uVar33 = puVar29[1];
      *(undefined8 *)(param_1 + 0x250) = *puVar29;
      *(undefined8 *)(param_1 + 600) = uVar33;
      uVar33 = puVar29[3];
      *(undefined8 *)(param_1 + 0x260) = puVar29[2];
      *(undefined8 *)(param_1 + 0x268) = uVar33;
      *(undefined4 *)(param_1 + 0x270) = **(undefined4 **)(*(longlong *)(lVar9 + 0x3c8) + 0x28);
    }
  }
  if (*(int *)(param_2 + 8) != -1) {
    uVar31 = *(uint *)(param_2 + 0x18);
  }
  if ((uVar31 & 2) != 0) {
    *(float *)(*(longlong *)(param_1 + 0x290) + 0x3c) = (float)*(int *)(param_1 + 0x1d0);
  }
  if ((*(uint *)(lVar9 + 0x388) >> 0x19 & 1) == 0) {
    uStack_c8 = (undefined *)*puVar1;
    uStack_c0 = *(longlong *)(param_1 + 0xd0);
    uStack_b8 = *(undefined8 *)(param_1 + 0xd8);
    uStack_b0 = *(longlong *)(param_1 + 0xe0);
    uStack_a8 = *(undefined8 *)(param_1 + 0xe8);
    uStack_a0 = *(undefined8 *)(param_1 + 0xf0);
    uStack_98 = *(undefined4 *)(param_1 + 0xf8);
    uStack_94 = *(undefined4 *)(param_1 + 0xfc);
    uStack_90 = *(undefined4 *)(param_1 + 0x100);
    uStack_8c = *(undefined4 *)(param_1 + 0x104);
    FUN_180084760(puVar1,&uStack_c8);
    lVar27 = FUN_1800946d0(&uStack_c8,auStack_80,param_1 + 0x108);
  }
  else {
    lVar27 = param_1 + 0x108;
  }
  puVar29 = (undefined8 *)FUN_1800946d0(lVar27,&uStack_c8,param_2 + 0x12b40);
  uVar33 = puVar29[1];
  uVar30 = *(undefined4 *)(puVar29 + 2);
  uVar11 = *(undefined4 *)((longlong)puVar29 + 0x14);
  uVar12 = *(undefined4 *)(puVar29 + 3);
  uVar13 = *(undefined4 *)((longlong)puVar29 + 0x1c);
  uVar14 = *(undefined4 *)(puVar29 + 4);
  uVar15 = *(undefined4 *)((longlong)puVar29 + 0x24);
  uVar16 = *(undefined4 *)(puVar29 + 5);
  uVar17 = *(undefined4 *)((longlong)puVar29 + 0x2c);
  uVar18 = *(undefined4 *)(puVar29 + 6);
  uVar19 = *(undefined4 *)((longlong)puVar29 + 0x34);
  uVar20 = *(undefined4 *)(puVar29 + 7);
  uVar21 = *(undefined4 *)((longlong)puVar29 + 0x3c);
  lVar27 = *(longlong *)(param_1 + 0x290);
  *(undefined8 *)(lVar27 + 0x80) = *puVar29;
  *(undefined8 *)(lVar27 + 0x88) = uVar33;
  *(undefined4 *)(lVar27 + 0x90) = uVar30;
  *(undefined4 *)(lVar27 + 0x94) = uVar11;
  *(undefined4 *)(lVar27 + 0x98) = uVar12;
  *(undefined4 *)(lVar27 + 0x9c) = uVar13;
  *(undefined4 *)(lVar27 + 0xa0) = uVar14;
  *(undefined4 *)(lVar27 + 0xa4) = uVar15;
  *(undefined4 *)(lVar27 + 0xa8) = uVar16;
  *(undefined4 *)(lVar27 + 0xac) = uVar17;
  *(undefined4 *)(lVar27 + 0xb0) = uVar18;
  *(undefined4 *)(lVar27 + 0xb4) = uVar19;
  *(undefined4 *)(lVar27 + 0xb8) = uVar20;
  *(undefined4 *)(lVar27 + 0xbc) = uVar21;
  uVar31 = *(uint *)(param_1 + 0x2e0) >> 0x12;
  if ((*(uint *)(param_1 + 0x2e0) >> 9 & 1) == 0) {
    if ((uVar31 & 1) == 0) {
      uVar33 = *(undefined8 *)(param_1 + 400);
      lVar27 = *(longlong *)(param_1 + 0x290);
      *(undefined8 *)(lVar27 + 0xd0) = *(undefined8 *)(param_1 + 0x188);
      *(undefined8 *)(lVar27 + 0xd8) = uVar33;
      goto LAB_1802ddcac;
    }
LAB_1802ddc61:
    uVar33 = 0x3f8000003f800000;
    uVar34 = 0x7f7fffff3f800000;
  }
  else {
    if ((uVar31 & 1) != 0) goto LAB_1802ddc61;
    uVar33 = *(undefined8 *)(param_1 + 0x188);
    uVar34 = *(undefined8 *)(param_1 + 400);
  }
  lVar27 = *(longlong *)(param_1 + 0x290);
  *(undefined8 *)(lVar27 + 0xd0) = uVar33;
  *(undefined8 *)(lVar27 + 0xd8) = uVar34;
  uVar33 = *(undefined8 *)(param_1 + 0x1b0);
  lVar27 = *(longlong *)(param_1 + 0x290);
  *(undefined8 *)(lVar27 + 0x120) = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(lVar27 + 0x128) = uVar33;
  uVar30 = *(undefined4 *)(param_1 + 0x19c);
  uVar11 = *(undefined4 *)(param_1 + 0x1a0);
  uVar12 = *(undefined4 *)(param_1 + 0x1a4);
  lVar27 = *(longlong *)(param_1 + 0x290);
  *(undefined4 *)(lVar27 + 0x110) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(lVar27 + 0x114) = uVar30;
  *(undefined4 *)(lVar27 + 0x118) = uVar11;
  *(undefined4 *)(lVar27 + 0x11c) = uVar12;
LAB_1802ddcac:
  if ((*(uint *)(*(longlong *)(lVar9 + 0x1e0) + 0x1588) & 0x810000) != 0) {
    FUN_180084760(puVar1,*(longlong *)(param_1 + 0x290) + 0x40);
  }
  if ((*(char *)(param_2 + 0x170) != '\0') || ((*(uint *)(param_1 + 0x2e0) & 0x40000) != 0)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x44) = 0;
  }
  *(float *)(*(longlong *)(param_1 + 0x290) + 0xc0) = (float)*(int *)(param_1 + 0x2f8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x290) + 0x100) = *(undefined4 *)(param_1 + 0x2d4);
  *(float *)(*(longlong *)(param_1 + 0x290) + 0x104) =
       (float)(*(uint *)(param_1 + 0x2e0) >> 0x13 & 1);
  *(undefined4 *)(*(longlong *)(param_1 + 0x290) + 0x108) = *(undefined4 *)(lVar9 + 0x284);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802ddd80(longlong param_1,longlong *param_2)
void FUN_1802ddd80(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_108 [32];
  undefined4 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  if (DAT_180c82846 == '\0') {
    lVar3 = FUN_1800bd5c0();
    uVar1 = *(undefined8 *)(_DAT_180c86938 + 0x1cd8);
    if ((longlong *)*param_2 == (longlong *)0x0) {
      uStack_c8 = 0x7f0000;
      puVar4 = &uStack_d8;
      uStack_d8 = 0xffffffffffffffff;
      uStack_d0 = 0xffffffffffffffff;
    }
    else {
      lVar10 = *(longlong *)*param_2;
      puVar4 = &uStack_78;
      uStack_68 = *(undefined4 *)(lVar10 + 0x40);
      uStack_78 = *(undefined8 *)(lVar10 + 0x30);
      uStack_70 = *(undefined8 *)(lVar10 + 0x38);
    }
    uStack_b0 = *(undefined4 *)(puVar4 + 2);
    uVar7 = (ulonglong)(short)uStack_b0;
    uStack_c0 = *(undefined4 *)puVar4;
    uStack_bc = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_b8 = *(undefined4 *)(puVar4 + 1);
    uStack_b4 = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((short)uStack_b0 <= (short)((uint)uStack_b0 >> 0x10)) {
      plVar8 = (longlong *)(param_1 + uVar7 * 8);
      bVar5 = (byte)uStack_b0 & 0x1f;
      uVar9 = 1 << bVar5 | 1U >> 0x20 - bVar5;
      do {
        uVar6 = (uint)uVar7;
        if (0xf < (int)uVar6) break;
        bVar5 = (byte)uVar7 & 7;
        uVar2 = uVar6;
        if ((int)uVar6 < 0) {
          uVar2 = uVar6 + 7;
          bVar5 = bVar5 - 8;
        }
        if (((byte)(1 << (bVar5 & 0x1f)) &
            *(byte *)((longlong)&uStack_c0 + (longlong)((int)uVar2 >> 3))) != 0) {
          if (uVar6 < 0x10) {
            if ((*(uint *)(param_1 + 0x80) & uVar9) == 0) goto LAB_1802dde9e;
            lVar10 = *plVar8;
            if (*plVar8 == 0) goto LAB_1802dde95;
          }
          else {
LAB_1802dde95:
            if ((*(uint *)(param_1 + 0x80) & uVar9) == 0) {
LAB_1802dde9e:
              lVar10 = *plVar8;
              if ((lVar10 != 0) && (*(int *)(lVar10 + 0x380) != 1)) goto LAB_1802ddeb5;
            }
            lVar10 = lVar3;
          }
LAB_1802ddeb5:
          uStack_e8 = 0xffffffff;
          FUN_18029d150(uVar1,uVar7 & 0xffffffff,lVar10,1);
        }
        uVar7 = (ulonglong)(uVar6 + 1);
        uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
        plVar8 = plVar8 + 1;
      } while ((int)(uVar6 + 1) <= (int)uStack_b0._2_2_);
    }
    if (*param_2 == 0) {
      uStack_98 = 0x7f0000;
      puVar4 = &uStack_a8;
      uStack_a8 = 0xffffffffffffffff;
      uStack_a0 = 0xffffffffffffffff;
    }
    else {
      lVar10 = *(longlong *)(*param_2 + 8);
      uStack_50 = *(undefined4 *)(lVar10 + 0x40);
      puVar4 = &uStack_60;
      uStack_60 = *(undefined8 *)(lVar10 + 0x30);
      uStack_58 = *(undefined8 *)(lVar10 + 0x38);
    }
    uStack_80 = *(undefined4 *)(puVar4 + 2);
    uVar7 = (ulonglong)(short)uStack_80;
    uStack_90 = *(undefined4 *)puVar4;
    uStack_8c = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_88 = *(undefined4 *)(puVar4 + 1);
    uStack_84 = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((short)uStack_80 <= (short)((uint)uStack_80 >> 0x10)) {
      plVar8 = (longlong *)(param_1 + uVar7 * 8);
      bVar5 = (byte)uStack_80 & 0x1f;
      uVar9 = 1 << bVar5 | 1U >> 0x20 - bVar5;
      do {
        uVar6 = (uint)uVar7;
        if (0xf < (int)uVar6) break;
        bVar5 = (byte)uVar7 & 7;
        uVar2 = uVar6;
        if ((int)uVar6 < 0) {
          uVar2 = uVar6 + 7;
          bVar5 = bVar5 - 8;
        }
        if (((byte)(1 << (bVar5 & 0x1f)) &
            *(byte *)((longlong)&uStack_90 + (longlong)((int)uVar2 >> 3))) != 0) {
          if (uVar6 < 0x10) {
            if ((*(uint *)(param_1 + 0x80) & uVar9) == 0) goto LAB_1802ddf95;
            lVar10 = *plVar8;
            if (*plVar8 == 0) goto LAB_1802ddf8c;
          }
          else {
LAB_1802ddf8c:
            if ((*(uint *)(param_1 + 0x80) & uVar9) == 0) {
LAB_1802ddf95:
              lVar10 = *plVar8;
              if ((lVar10 != 0) && (*(int *)(lVar10 + 0x380) != 1)) goto LAB_1802ddfac;
            }
            lVar10 = lVar3;
          }
LAB_1802ddfac:
          uStack_e8 = 0xffffffff;
          FUN_18029d150(uVar1,uVar7 & 0xffffffff,lVar10,0x10);
        }
        uVar7 = (ulonglong)(uVar6 + 1);
        uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
        plVar8 = plVar8 + 1;
      } while ((int)(uVar6 + 1) <= (int)uStack_80._2_2_);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




