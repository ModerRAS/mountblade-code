#include "TaleWorlds.Native.Split.h"

// 99_part_03_part038.c - 3 个函数

// 函数: void FUN_1801f0ed0(longlong param_1,undefined4 param_2)
void FUN_1801f0ed0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 auStack_2f8 [32];
  undefined4 uStack_2d8;
  undefined4 uStack_2c8;
  undefined *puStack_2c0;
  undefined4 *puStack_2b8;
  uint uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 *puStack_298;
  uint uStack_290;
  undefined8 uStack_288;
  undefined *puStack_260;
  undefined4 *puStack_258;
  undefined4 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 uStack_238;
  undefined4 uStack_234;
  undefined **ppuStack_230;
  undefined *puStack_228;
  undefined4 *puStack_220;
  undefined4 uStack_218;
  undefined8 uStack_210;
  undefined **ppuStack_208;
  undefined *puStack_200;
  longlong lStack_1f8;
  undefined4 uStack_1e8;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 uStack_198;
  undefined4 uStack_197;
  undefined4 uStack_193;
  undefined8 uStack_188;
  undefined8 auStack_178 [24];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_40;
  ulonglong uStack_38;
  
  plVar14 = _DAT_180c86870;
  if (*(char *)(param_1 + 8) != '\0') {
    if ((*(longlong *)(param_1 + 0x20) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x20) + 0x820) != '\0')) {
      uStack_40 = 0x1801f0f36;
      uVar8 = FUN_180093a20();
      uStack_40 = 0x1801f0f43;
      func_0x0001800938f0(uVar8,0xbf800000);
      pcVar2 = *(code **)(**(longlong **)(param_1 + 0x20) + 0xb8);
      if (pcVar2 == (code *)&UNK_1802426a0) {
        lVar23 = (*(longlong **)(param_1 + 0x20))[0xda];
      }
      else {
        uStack_40 = 0x1801f0f7f;
        lVar23 = (*pcVar2)();
      }
      uStack_40 = 0x1801f0f72;
      FUN_180199500(lVar23,param_2,1);
    }
    return;
  }
  lVar23 = _DAT_180c86870[7];
  *(char *)(param_1 + 8) = (char)lVar23;
  lVar5 = _DAT_180c8a9a0;
  if ((char)lVar23 == '\0') {
    return;
  }
  *(undefined1 *)((longlong)plVar14 + 0x1ef) = 1;
  if (*(char *)(lVar5 + 0x21) == '\0') {
    return;
  }
  uStack_188 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_2f8;
  puVar16 = (undefined1 *)0x0;
  uVar12 = 0;
  uStack_2c8 = 0;
  ppuStack_208 = (undefined **)param_1;
  uVar13 = FUN_18062b1e0(_DAT_180c8ed18,0x880,0x10,0x1f);
  plVar14 = (longlong *)FUN_180301040(uVar13);
  if (plVar14 != (longlong *)0x0) {
    ppuStack_230 = (undefined **)plVar14;
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  ppuStack_230 = *(undefined ***)(param_1 + 0x20);
  *(longlong **)(param_1 + 0x20) = plVar14;
  if (ppuStack_230 != (undefined **)0x0) {
    (**(code **)((longlong)*ppuStack_230 + 0x38))();
  }
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined4 *)0x0;
  uStack_218 = 0;
  puVar15 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x1e,0x13);
  *(undefined1 *)puVar15 = 0;
  puStack_220 = puVar15;
  uVar8 = FUN_18064e990(puVar15);
  uStack_210 = CONCAT44(uStack_210._4_4_,uVar8);
  *puVar15 = 0x5f33626d;
  puVar15[1] = 0x66726570;
  puVar15[2] = 0x616d726f;
  puVar15[3] = 0x5f65636e;
  *(undefined8 *)(puVar15 + 4) = 0x745f74726f706572;
  puVar15[6] = 0x5f6e776f;
  *(undefined2 *)(puVar15 + 7) = 0x31;
  uStack_218 = 0x1d;
  lVar23 = *_DAT_180c86870;
  iVar9 = FUN_1801426a0(lVar23,&puStack_228);
  if (iVar9 < 0) {
LAB_1801f1465:
    lVar23 = FUN_180628ca0();
  }
  else {
    if ((ulonglong)(*(longlong *)(lVar23 + 0x890) - *(longlong *)(lVar23 + 0x888) >> 5) <=
        (ulonglong)(longlong)iVar9) goto LAB_1801f1465;
    lVar23 = (longlong)iVar9 * 0x20 + *(longlong *)(lVar23 + 0x888);
  }
  puStack_2a0 = &UNK_180a3c3e0;
  uStack_288 = 0;
  puStack_298 = (undefined8 *)0x0;
  uStack_290 = 0;
  uStack_2c8 = 1;
  uVar1 = *(uint *)(lVar23 + 0x10);
  uVar24 = (ulonglong)uVar1;
  uVar10 = 0;
  if (*(longlong *)(lVar23 + 8) == 0) {
LAB_1801f14e3:
    uVar12 = uVar10;
    if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar16,*(undefined8 *)(lVar23 + 8),uVar24);
    }
  }
  else if (uVar1 != 0) {
    iVar9 = uVar1 + 1;
    if (iVar9 < 0x10) {
      iVar9 = 0x10;
    }
    puVar16 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar9,0x13);
    *puVar16 = 0;
    puStack_298 = (undefined8 *)puVar16;
    uVar10 = FUN_18064e990(puVar16);
    uStack_288 = CONCAT44(uStack_288._4_4_,uVar10);
    goto LAB_1801f14e3;
  }
  if (puVar16 != (undefined1 *)0x0) {
    puVar16[uVar24] = 0;
  }
  uVar10 = *(uint *)(lVar23 + 0x1c);
  uStack_288 = CONCAT44(uVar10,(undefined4)uStack_288);
  uVar22 = uVar1 + 9;
  if (uVar22 != 0) {
    uVar11 = uVar1 + 10;
    uStack_290 = uVar1;
    if (puVar16 == (undefined1 *)0x0) {
      if ((int)uVar11 < 0x10) {
        uVar11 = 0x10;
      }
      puVar16 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar11,0x13);
      *puVar16 = 0;
    }
    else {
      if (uVar11 <= uVar12) goto LAB_1801f157c;
      uStack_2d8 = CONCAT31(uStack_2d8._1_3_,0x13);
      puVar16 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puVar16,uVar11,0x10);
    }
    puStack_298 = (undefined8 *)puVar16;
    uVar8 = FUN_18064e990(puVar16);
    uStack_288 = CONCAT44(uStack_288._4_4_,uVar8);
  }
LAB_1801f157c:
  *(undefined8 *)(puVar16 + uVar24) = 0x6a624f656e656353;
  *(undefined2 *)(puVar16 + uVar24 + 8) = 0x2f;
  puVar17 = (undefined1 *)0x0;
  uVar11 = 0;
  puStack_2c0 = &UNK_180a3c3e0;
  uStack_2a8 = 0;
  puStack_2b8 = (undefined4 *)0x0;
  uStack_2b0 = 0;
  uStack_2c8 = 3;
  uVar12 = 0;
  uStack_290 = uVar22;
  if (puVar16 == (undefined1 *)0x0) {
LAB_1801f161f:
    uVar11 = uVar12;
    if (uVar22 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar17,puVar16,uVar22);
    }
  }
  else if (uVar22 != 0) {
    iVar9 = uVar1 + 10;
    if (iVar9 < 0x10) {
      iVar9 = 0x10;
    }
    puVar17 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar9,0x13);
    *puVar17 = 0;
    puStack_2b8 = (undefined4 *)puVar17;
    uVar12 = FUN_18064e990(puVar17);
    uStack_2a8 = CONCAT44(uStack_2a8._4_4_,uVar12);
    goto LAB_1801f161f;
  }
  if (puVar17 != (undefined1 *)0x0) {
    puVar17[uVar22] = 0;
  }
  uStack_2a8._4_4_ = uVar10;
  if (uVar1 + 0x26 != 0) {
    uVar12 = uVar1 + 0x27;
    uStack_2b0 = uVar22;
    if (puVar17 == (undefined1 *)0x0) {
      if ((int)uVar12 < 0x10) {
        uVar12 = 0x10;
      }
      puVar17 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar12,0x13);
      *puVar17 = 0;
    }
    else {
      if (uVar12 <= uVar11) goto LAB_1801f16b2;
      uStack_2d8 = CONCAT31(uStack_2d8._1_3_,0x13);
      puVar17 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puVar17,uVar12,0x10);
    }
    puStack_2b8 = (undefined4 *)puVar17;
    uStack_2a8._0_4_ = FUN_18064e990(puVar17);
  }
LAB_1801f16b2:
  puVar20 = (undefined4 *)(puVar17 + uVar22);
  uVar8 = puVar15[1];
  uVar3 = puVar15[2];
  uVar4 = puVar15[3];
  *puVar20 = *puVar15;
  puVar20[1] = uVar8;
  puVar20[2] = uVar3;
  puVar20[3] = uVar4;
  *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar15 + 4);
  puVar20[6] = puVar15[6];
  *(undefined2 *)(puVar20 + 7) = *(undefined2 *)(puVar15 + 7);
  uStack_2b0 = uVar1 + 0x26;
  FUN_180627e10(&puStack_2c0,&puStack_200,&DAT_1809fd7c8);
  uStack_2c8 = 1;
  puStack_2c0 = &UNK_180a3c3e0;
  if (puVar17 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar17);
  }
  puStack_2b8 = (undefined4 *)0x0;
  uStack_2a8 = (ulonglong)uStack_2a8._4_4_ << 0x20;
  puStack_2c0 = &UNK_18098bcb0;
  uStack_2c8 = 0;
  puStack_2a0 = &UNK_180a3c3e0;
  if (puVar16 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar16);
  }
  puStack_298 = (undefined8 *)0x0;
  uStack_288 = uStack_288 & 0xffffffff00000000;
  puStack_2a0 = &UNK_18098bcb0;
  ppuStack_230 = &puStack_260;
  puStack_260 = &UNK_180a3c3e0;
  uStack_248 = 0;
  uStack_244 = 0;
  puStack_258 = (undefined4 *)0x0;
  uStack_250 = 0;
  uStack_23c = 0x100;
  uStack_238 = 0;
  uStack_234 = 0;
  puStack_258 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x1e,0x13);
  *(undefined1 *)puStack_258 = 0;
  uStack_248 = FUN_18064e990(puStack_258);
  uVar8 = puVar15[1];
  uVar3 = puVar15[2];
  uVar4 = puVar15[3];
  *puStack_258 = *puVar15;
  puStack_258[1] = uVar8;
  puStack_258[2] = uVar3;
  puStack_258[3] = uVar4;
  *(undefined8 *)(puStack_258 + 4) = *(undefined8 *)(puVar15 + 4);
  puStack_258[6] = puVar15[6];
  *(undefined1 *)(puStack_258 + 7) = *(undefined1 *)(puVar15 + 7);
  uStack_250 = 0x1d;
  if (puStack_258 != (undefined4 *)0x0) {
    *(undefined1 *)((longlong)puStack_258 + 0x1d) = 0;
  }
  uStack_244 = 0;
  uStack_240 = 0;
  uStack_23c = CONCAT31(uStack_23c._1_3_,1);
  uVar13 = FUN_18062b1e0(_DAT_180c8ed18,0x60d30,0x10,0x1f);
  plVar14 = (longlong *)FUN_1801954d0(uVar13,&puStack_260);
  ppuStack_230 = (undefined **)plVar14;
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  FUN_1803898a0(plVar14 + 0x534);
  *(undefined1 *)(plVar14 + 0x54c) = 1;
  puStack_2a0 = &UNK_180a3c3e0;
  uStack_288 = 0;
  puStack_298 = (undefined8 *)0x0;
  uStack_290 = 0;
  puVar20 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar20 = 0;
  puStack_298 = (undefined8 *)puVar20;
  uVar8 = FUN_18064e990(puVar20);
  *puVar20 = 0x65736162;
  *(undefined1 *)(puVar20 + 1) = 0;
  uStack_290 = 4;
  uStack_288._0_4_ = uVar8;
  FUN_180066df0(plVar14 + 0xc0e2,&puStack_2a0);
  puStack_2a0 = &UNK_180a3c3e0;
  if (puStack_298 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_298 = (undefined8 *)0x0;
  uStack_288 = (ulonglong)uStack_288._4_4_ << 0x20;
  puStack_2a0 = &UNK_18098bcb0;
  puStack_2c0 = &UNK_180a3c3e0;
  uStack_2a8 = 0;
  puStack_2b8 = (undefined4 *)0x0;
  uStack_2b0 = 0;
  puVar20 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar20 = 0;
  puStack_2b8 = puVar20;
  uVar8 = FUN_18064e990(puVar20);
  *puVar20 = 0x67656973;
  *(undefined2 *)(puVar20 + 1) = 0x65;
  uStack_2b0 = 5;
  uStack_2a8._0_4_ = uVar8;
  FUN_180066df0(plVar14 + 0xc0e2,&puStack_2c0);
  puStack_2c0 = &UNK_180a3c3e0;
  if (puStack_2b8 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_2b8 = (undefined4 *)0x0;
  uStack_2a8 = (ulonglong)uStack_2a8._4_4_ << 0x20;
  puStack_2c0 = &UNK_18098bcb0;
  puStack_2a0 = &UNK_180a3c3e0;
  uStack_288 = 0;
  puStack_298 = (undefined8 *)0x0;
  uStack_290 = 0;
  puVar18 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar18 = 0;
  puStack_298 = puVar18;
  uVar8 = FUN_18064e990(puVar18);
  *puVar18 = 0x335f6c6576656c;
  uStack_290 = 7;
  uStack_288._0_4_ = uVar8;
  FUN_180066df0(plVar14 + 0xc0e2,&puStack_2a0);
  puStack_2a0 = &UNK_180a3c3e0;
  if (puStack_298 == (undefined8 *)0x0) {
    puStack_298 = (undefined8 *)0x0;
    uStack_288 = (ulonglong)uStack_288._4_4_ << 0x20;
    puStack_2a0 = &UNK_18098bcb0;
    *(undefined4 *)(plVar14 + 0xc060) = 0;
    uStack_1d8 = 0x3f800000;
    uStack_1d4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    uStack_1c4 = 0x3f800000;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0x3f800000;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0x3f800000;
    uStack_197 = 0x1010101;
    uStack_193 = 1;
    uStack_198 = 0;
    uStack_2d8 = 0xffffffff;
    FUN_1801a6440(plVar14,_DAT_180c868e8,&puStack_200,&uStack_1d8);
    FUN_18019e260(plVar14);
    FUN_180094c20(auStack_178);
    lVar23 = FUN_1801ae3a0(plVar14);
    if (lVar23 == 0) {
      puVar18 = (undefined8 *)FUN_1801ac640(plVar14,&puStack_2a0);
      uStack_b8 = *puVar18;
      uStack_b0 = puVar18[1];
      uStack_a8 = puVar18[2];
      uStack_a0 = puVar18[3];
      uStack_98 = *(undefined4 *)(puVar18 + 4);
      uStack_94 = *(undefined4 *)((longlong)puVar18 + 0x24);
      uStack_90 = *(undefined4 *)(puVar18 + 5);
      uStack_8c = *(undefined4 *)((longlong)puVar18 + 0x2c);
      uStack_88 = *(undefined4 *)(puVar18 + 6);
      uStack_84 = *(undefined4 *)((longlong)puVar18 + 0x34);
      uStack_80 = *(undefined4 *)(puVar18 + 7);
      uStack_7c = *(undefined4 *)((longlong)puVar18 + 0x3c);
    }
    else {
      uStack_b8 = *(undefined8 *)(lVar23 + 0x70);
      uStack_b0 = *(undefined8 *)(lVar23 + 0x78);
      uStack_a8 = *(undefined8 *)(lVar23 + 0x80);
      uStack_a0 = *(undefined8 *)(lVar23 + 0x88);
      uStack_98 = *(undefined4 *)(lVar23 + 0x90);
      uStack_94 = *(undefined4 *)(lVar23 + 0x94);
      uStack_90 = *(undefined4 *)(lVar23 + 0x98);
      uStack_8c = *(undefined4 *)(lVar23 + 0x9c);
      uStack_88 = *(undefined4 *)(lVar23 + 0xa0);
      uStack_84 = *(undefined4 *)(lVar23 + 0xa4);
      uStack_80 = *(undefined4 *)(lVar23 + 0xa8);
      uStack_7c = *(undefined4 *)(lVar23 + 0xac);
    }
    FUN_1802864f0(auStack_178);
    uStack_2d8 = 0x44af0000;
    FUN_180286e40(auStack_178,0x3fd8f49c,0x3fe38e39,0x3e99999a);
    ppuVar6 = ppuStack_208;
    lVar23 = 2;
    puVar18 = (undefined8 *)(*(longlong *)((longlong)ppuStack_208 + 0x20) + 0x6e0);
    puVar7 = auStack_178;
    do {
      puVar21 = puVar7;
      puVar19 = puVar18;
      uVar13 = puVar21[1];
      *puVar19 = *puVar21;
      puVar19[1] = uVar13;
      uVar13 = puVar21[3];
      puVar19[2] = puVar21[2];
      puVar19[3] = uVar13;
      uVar13 = puVar21[5];
      puVar19[4] = puVar21[4];
      puVar19[5] = uVar13;
      uVar13 = puVar21[7];
      puVar19[6] = puVar21[6];
      puVar19[7] = uVar13;
      uVar13 = puVar21[9];
      puVar19[8] = puVar21[8];
      puVar19[9] = uVar13;
      uVar13 = puVar21[0xb];
      puVar19[10] = puVar21[10];
      puVar19[0xb] = uVar13;
      uVar13 = puVar21[0xd];
      puVar19[0xc] = puVar21[0xc];
      puVar19[0xd] = uVar13;
      uVar13 = puVar21[0xf];
      puVar19[0xe] = puVar21[0xe];
      puVar19[0xf] = uVar13;
      lVar23 = lVar23 + -1;
      puVar18 = puVar19 + 0x10;
      puVar7 = puVar21 + 0x10;
    } while (lVar23 != 0);
    uVar13 = puVar21[0x11];
    puVar19[0x10] = puVar21[0x10];
    puVar19[0x11] = uVar13;
    uVar13 = puVar21[0x13];
    puVar19[0x12] = puVar21[0x12];
    puVar19[0x13] = uVar13;
    uVar8 = *(undefined4 *)((longlong)puVar21 + 0xa4);
    uVar3 = *(undefined4 *)(puVar21 + 0x15);
    uVar4 = *(undefined4 *)((longlong)puVar21 + 0xac);
    *(undefined4 *)(puVar19 + 0x14) = *(undefined4 *)(puVar21 + 0x14);
    *(undefined4 *)((longlong)puVar19 + 0xa4) = uVar8;
    *(undefined4 *)(puVar19 + 0x15) = uVar3;
    *(undefined4 *)((longlong)puVar19 + 0xac) = uVar4;
    uVar8 = *(undefined4 *)((longlong)puVar21 + 0xb4);
    uVar3 = *(undefined4 *)(puVar21 + 0x17);
    uVar4 = *(undefined4 *)((longlong)puVar21 + 0xbc);
    *(undefined4 *)(puVar19 + 0x16) = *(undefined4 *)(puVar21 + 0x16);
    *(undefined4 *)((longlong)puVar19 + 0xb4) = uVar8;
    *(undefined4 *)(puVar19 + 0x17) = uVar3;
    *(undefined4 *)((longlong)puVar19 + 0xbc) = uVar4;
    FUN_180301f30(*(undefined8 *)((longlong)ppuStack_208 + 0x20),plVar14);
    *(undefined1 *)(*(longlong *)((longlong)ppuVar6 + 0x20) + 0x823) = 1;
    FUN_1802e1590(*(longlong *)((longlong)ppuVar6 + 0x20) + 0x560,plVar14);
    (**(code **)(*plVar14 + 0x38))(plVar14);
    ppuStack_208 = &puStack_260;
    puStack_260 = &UNK_180a3c3e0;
    if (puStack_258 == (undefined4 *)0x0) {
      puStack_258 = (undefined4 *)0x0;
      uStack_248 = 0;
      puStack_260 = &UNK_18098bcb0;
      puStack_200 = &UNK_180a3c3e0;
      if (lStack_1f8 == 0) {
        lStack_1f8 = 0;
        uStack_1e8 = 0;
        puStack_200 = &UNK_18098bcb0;
        puStack_228 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar15);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801f0f90(undefined8 param_1,longlong param_2)
void FUN_1801f0f90(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined *puStack_70;
  longlong lStack_68;
  uint uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined4 uStack_38;
  undefined1 auStack_30 [16];
  ulonglong uStack_20;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  uStack_78 = 0;
  (**(code **)(*(longlong *)(param_2 + 0x80) + 0x10))((longlong *)(param_2 + 0x80),&DAT_1809fd128);
  puStack_48 = &UNK_1809fdc18;
  puStack_40 = auStack_30;
  auStack_30[0] = 0;
  uStack_38 = 6;
  strcpy_s(auStack_30,0x10,&UNK_180a3c07c);
  uStack_78 = 1;
  FUN_1806279c0(&puStack_70,&puStack_48);
  uVar2 = uStack_60;
  uStack_78 = 0;
  puStack_48 = &UNK_18098bcb0;
  uVar1 = uStack_60 + 8;
  FUN_1806277c0(&puStack_70,uVar1);
  *(undefined8 *)((ulonglong)uStack_60 + lStack_68) = 0x2f73656c75646f4d;
  *(undefined1 *)((undefined8 *)((ulonglong)uStack_60 + lStack_68) + 1) = 0;
  uStack_60 = uVar1;
  if (0 < *(int *)(param_2 + 0x90)) {
    FUN_1806277c0(&puStack_70,uVar1 + *(int *)(param_2 + 0x90));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)uStack_60 + lStack_68,*(undefined8 *)(param_2 + 0x88),
           (longlong)(*(int *)(param_2 + 0x90) + 1));
  }
  uVar2 = uVar2 + 9;
  FUN_1806277c0(&puStack_70,(ulonglong)uVar2);
  *(undefined2 *)((ulonglong)uStack_60 + lStack_68) = 0x2f;
  uStack_60 = uVar2;
  if (lStack_68 != 0) {
    FUN_1806277c0(param_2 + 0xa0,uVar2);
  }
  if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(param_2 + 0xa8),lStack_68,uVar2);
  }
  *(undefined4 *)(param_2 + 0xb0) = 0;
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    *(undefined1 *)((ulonglong)uVar2 + *(longlong *)(param_2 + 0xa8)) = 0;
  }
  *(undefined4 *)(param_2 + 0xbc) = uStack_54;
  *(undefined1 *)(param_2 + 0x7c) = 0;
  *(undefined4 *)(param_2 + 0x78) = 1;
  puStack_70 = &UNK_180a3c3e0;
  if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_68 = 0;
  uStack_58 = 0;
  puStack_70 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_98,0);
}






// 函数: void FUN_1801f11a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1801f11a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_30;
  undefined4 *puStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  puStack_30 = &UNK_180a3c3e0;
  uStack_18 = 0;
  puStack_28 = (undefined4 *)0x0;
  uStack_20 = 0;
  FUN_1806277c0(&puStack_30,0x22,param_3,param_4,0xfffffffffffffffe);
  *puStack_28 = 0x74696465;
  puStack_28[1] = 0x735f726f;
  puStack_28[2] = 0x70697263;
  puStack_28[3] = 0x6f635f74;
  puStack_28[4] = 0x6e6f706d;
  puStack_28[5] = 0x5f746e65;
  puStack_28[6] = 0x69666564;
  puStack_28[7] = 0x6974696e;
  *(undefined2 *)(puStack_28 + 8) = 0x6e6f;
  *(undefined1 *)((longlong)puStack_28 + 0x22) = 0;
  uStack_20 = 0x22;
  FUN_180354b70(&puStack_30,FUN_1803f5b70,_guard_check_icall);
  return;
}



undefined8 *
FUN_1801f1250(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0x22,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (undefined8 *)param_2[1];
  *puVar1 = 0x735f726f74696465;
  puVar1[1] = 0x6f635f7470697263;
  puVar1[2] = 0x5f746e656e6f706d;
  puVar1[3] = 0x6974696e69666564;
  *(undefined2 *)(puVar1 + 4) = 0x6e6f;
  *(undefined1 *)((longlong)puVar1 + 0x22) = 0;
  *(undefined4 *)(param_2 + 2) = 0x22;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




