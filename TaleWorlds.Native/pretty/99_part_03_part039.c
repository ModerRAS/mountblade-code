#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part039.c - 1 个函数

// 函数: void FUN_1801f1300(longlong param_1)
void FUN_1801f1300(longlong param_1)

{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  void **ppuVar4;
  uint64_t *puVar5;
  int32_t uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint64_t uVar11;
  longlong *plVar12;
  int32_t *puVar13;
  int8_t *puVar14;
  int8_t *puVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  int32_t *puVar18;
  uint64_t *puVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  int8_t auStack_2f8 [32];
  int32_t uStack_2d8;
  int32_t uStack_2c8;
  void *puStack_2c0;
  int32_t *puStack_2b8;
  uint uStack_2b0;
  uint64_t uStack_2a8;
  void *puStack_2a0;
  uint64_t *puStack_298;
  uint uStack_290;
  uint64_t uStack_288;
  void *puStack_260;
  int32_t *puStack_258;
  int32_t uStack_250;
  int32_t uStack_248;
  int32_t uStack_244;
  int32_t uStack_240;
  int32_t uStack_23c;
  int8_t uStack_238;
  int32_t uStack_234;
  void **ppuStack_230;
  void *puStack_228;
  int32_t *puStack_220;
  int32_t uStack_218;
  uint64_t uStack_210;
  void **ppuStack_208;
  void *puStack_200;
  longlong lStack_1f8;
  int32_t uStack_1e8;
  int32_t uStack_1d8;
  int32_t uStack_1d4;
  int32_t uStack_1d0;
  int32_t uStack_1cc;
  int32_t uStack_1c8;
  int32_t uStack_1c4;
  int32_t uStack_1c0;
  int32_t uStack_1bc;
  int32_t uStack_1b8;
  int32_t uStack_1b4;
  int32_t uStack_1b0;
  int32_t uStack_1ac;
  int32_t uStack_1a8;
  int32_t uStack_1a4;
  int32_t uStack_1a0;
  int32_t uStack_19c;
  int8_t uStack_198;
  int32_t uStack_197;
  int32_t uStack_193;
  uint64_t uStack_188;
  uint64_t auStack_178 [24];
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  ulonglong uStack_38;
  
  uStack_188 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_2f8;
  puVar14 = (int8_t *)0x0;
  uVar10 = 0;
  uStack_2c8 = 0;
  ppuStack_208 = (void **)param_1;
  uVar11 = FUN_18062b1e0(_DAT_180c8ed18,0x880,0x10,0x1f);
  plVar12 = (longlong *)FUN_180301040(uVar11);
  if (plVar12 != (longlong *)0x0) {
    ppuStack_230 = (void **)plVar12;
    (**(code **)(*plVar12 + 0x28))(plVar12);
  }
  ppuStack_230 = *(void ***)(param_1 + 0x20);
  *(longlong **)(param_1 + 0x20) = plVar12;
  if (ppuStack_230 != (void **)0x0) {
    (**(code **)((longlong)*ppuStack_230 + 0x38))();
  }
  puStack_228 = &unknown_var_3456_ptr;
  uStack_210 = 0;
  puStack_220 = (int32_t *)0x0;
  uStack_218 = 0;
  puVar13 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x1e,0x13);
  *(int8_t *)puVar13 = 0;
  puStack_220 = puVar13;
  uVar6 = FUN_18064e990(puVar13);
  uStack_210 = CONCAT44(uStack_210._4_4_,uVar6);
  *puVar13 = 0x5f33626d;
  puVar13[1] = 0x66726570;
  puVar13[2] = 0x616d726f;
  puVar13[3] = 0x5f65636e;
  *(uint64_t *)(puVar13 + 4) = 0x745f74726f706572;
  puVar13[6] = 0x5f6e776f;
  *(int16_t *)(puVar13 + 7) = 0x31;
  uStack_218 = 0x1d;
  lVar21 = *_DAT_180c86870;
  iVar7 = FUN_1801426a0(lVar21,&puStack_228);
  if (iVar7 < 0) {
LAB_1801f1465:
    lVar21 = FUN_180628ca0();
  }
  else {
    if ((ulonglong)(*(longlong *)(lVar21 + 0x890) - *(longlong *)(lVar21 + 0x888) >> 5) <=
        (ulonglong)(longlong)iVar7) goto LAB_1801f1465;
    lVar21 = (longlong)iVar7 * 0x20 + *(longlong *)(lVar21 + 0x888);
  }
  puStack_2a0 = &unknown_var_3456_ptr;
  uStack_288 = 0;
  puStack_298 = (uint64_t *)0x0;
  uStack_290 = 0;
  uStack_2c8 = 1;
  uVar1 = *(uint *)(lVar21 + 0x10);
  uVar22 = (ulonglong)uVar1;
  uVar8 = 0;
  if (*(longlong *)(lVar21 + 8) == 0) {
LAB_1801f14e3:
    uVar10 = uVar8;
    if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar14,*(uint64_t *)(lVar21 + 8),uVar22);
    }
  }
  else if (uVar1 != 0) {
    iVar7 = uVar1 + 1;
    if (iVar7 < 0x10) {
      iVar7 = 0x10;
    }
    puVar14 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar7,0x13);
    *puVar14 = 0;
    puStack_298 = (uint64_t *)puVar14;
    uVar8 = FUN_18064e990(puVar14);
    uStack_288 = CONCAT44(uStack_288._4_4_,uVar8);
    goto LAB_1801f14e3;
  }
  if (puVar14 != (int8_t *)0x0) {
    puVar14[uVar22] = 0;
  }
  uVar8 = *(uint *)(lVar21 + 0x1c);
  uStack_288 = CONCAT44(uVar8,(int32_t)uStack_288);
  uVar20 = uVar1 + 9;
  if (uVar20 != 0) {
    uVar9 = uVar1 + 10;
    uStack_290 = uVar1;
    if (puVar14 == (int8_t *)0x0) {
      if ((int)uVar9 < 0x10) {
        uVar9 = 0x10;
      }
      puVar14 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar9,0x13);
      *puVar14 = 0;
    }
    else {
      if (uVar9 <= uVar10) goto LAB_1801f157c;
      uStack_2d8 = CONCAT31(uStack_2d8._1_3_,0x13);
      puVar14 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar14,uVar9,0x10);
    }
    puStack_298 = (uint64_t *)puVar14;
    uVar6 = FUN_18064e990(puVar14);
    uStack_288 = CONCAT44(uStack_288._4_4_,uVar6);
  }
LAB_1801f157c:
  *(uint64_t *)(puVar14 + uVar22) = 0x6a624f656e656353;
  *(int16_t *)(puVar14 + uVar22 + 8) = 0x2f;
  puVar15 = (int8_t *)0x0;
  uVar9 = 0;
  puStack_2c0 = &unknown_var_3456_ptr;
  uStack_2a8 = 0;
  puStack_2b8 = (int32_t *)0x0;
  uStack_2b0 = 0;
  uStack_2c8 = 3;
  uVar10 = 0;
  uStack_290 = uVar20;
  if (puVar14 == (int8_t *)0x0) {
LAB_1801f161f:
    uVar9 = uVar10;
    if (uVar20 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar15,puVar14,uVar20);
    }
  }
  else if (uVar20 != 0) {
    iVar7 = uVar1 + 10;
    if (iVar7 < 0x10) {
      iVar7 = 0x10;
    }
    puVar15 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar7,0x13);
    *puVar15 = 0;
    puStack_2b8 = (int32_t *)puVar15;
    uVar10 = FUN_18064e990(puVar15);
    uStack_2a8 = CONCAT44(uStack_2a8._4_4_,uVar10);
    goto LAB_1801f161f;
  }
  if (puVar15 != (int8_t *)0x0) {
    puVar15[uVar20] = 0;
  }
  uStack_2a8._4_4_ = uVar8;
  if (uVar1 + 0x26 != 0) {
    uVar10 = uVar1 + 0x27;
    uStack_2b0 = uVar20;
    if (puVar15 == (int8_t *)0x0) {
      if ((int)uVar10 < 0x10) {
        uVar10 = 0x10;
      }
      puVar15 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar10,0x13);
      *puVar15 = 0;
    }
    else {
      if (uVar10 <= uVar9) goto LAB_1801f16b2;
      uStack_2d8 = CONCAT31(uStack_2d8._1_3_,0x13);
      puVar15 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar15,uVar10,0x10);
    }
    puStack_2b8 = (int32_t *)puVar15;
    uStack_2a8._0_4_ = FUN_18064e990(puVar15);
  }
LAB_1801f16b2:
  puVar18 = (int32_t *)(puVar15 + uVar20);
  uVar6 = puVar13[1];
  uVar2 = puVar13[2];
  uVar3 = puVar13[3];
  *puVar18 = *puVar13;
  puVar18[1] = uVar6;
  puVar18[2] = uVar2;
  puVar18[3] = uVar3;
  *(uint64_t *)(puVar18 + 4) = *(uint64_t *)(puVar13 + 4);
  puVar18[6] = puVar13[6];
  *(int16_t *)(puVar18 + 7) = *(int16_t *)(puVar13 + 7);
  uStack_2b0 = uVar1 + 0x26;
  FUN_180627e10(&puStack_2c0,&puStack_200,&system_data_d7c8);
  uStack_2c8 = 1;
  puStack_2c0 = &unknown_var_3456_ptr;
  if (puVar15 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar15);
  }
  puStack_2b8 = (int32_t *)0x0;
  uStack_2a8 = (ulonglong)uStack_2a8._4_4_ << 0x20;
  puStack_2c0 = &unknown_var_720_ptr;
  uStack_2c8 = 0;
  puStack_2a0 = &unknown_var_3456_ptr;
  if (puVar14 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar14);
  }
  puStack_298 = (uint64_t *)0x0;
  uStack_288 = uStack_288 & 0xffffffff00000000;
  puStack_2a0 = &unknown_var_720_ptr;
  ppuStack_230 = &puStack_260;
  puStack_260 = &unknown_var_3456_ptr;
  uStack_248 = 0;
  uStack_244 = 0;
  puStack_258 = (int32_t *)0x0;
  uStack_250 = 0;
  uStack_23c = 0x100;
  uStack_238 = 0;
  uStack_234 = 0;
  puStack_258 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x1e,0x13);
  *(int8_t *)puStack_258 = 0;
  uStack_248 = FUN_18064e990(puStack_258);
  uVar6 = puVar13[1];
  uVar2 = puVar13[2];
  uVar3 = puVar13[3];
  *puStack_258 = *puVar13;
  puStack_258[1] = uVar6;
  puStack_258[2] = uVar2;
  puStack_258[3] = uVar3;
  *(uint64_t *)(puStack_258 + 4) = *(uint64_t *)(puVar13 + 4);
  puStack_258[6] = puVar13[6];
  *(int8_t *)(puStack_258 + 7) = *(int8_t *)(puVar13 + 7);
  uStack_250 = 0x1d;
  if (puStack_258 != (int32_t *)0x0) {
    *(int8_t *)((longlong)puStack_258 + 0x1d) = 0;
  }
  uStack_244 = 0;
  uStack_240 = 0;
  uStack_23c = CONCAT31(uStack_23c._1_3_,1);
  uVar11 = FUN_18062b1e0(_DAT_180c8ed18,0x60d30,0x10,0x1f);
  plVar12 = (longlong *)FUN_1801954d0(uVar11,&puStack_260);
  ppuStack_230 = (void **)plVar12;
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x28))(plVar12);
  }
  FUN_1803898a0(plVar12 + 0x534);
  *(int8_t *)(plVar12 + 0x54c) = 1;
  puStack_2a0 = &unknown_var_3456_ptr;
  uStack_288 = 0;
  puStack_298 = (uint64_t *)0x0;
  uStack_290 = 0;
  puVar18 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar18 = 0;
  puStack_298 = (uint64_t *)puVar18;
  uVar6 = FUN_18064e990(puVar18);
  *puVar18 = 0x65736162;
  *(int8_t *)(puVar18 + 1) = 0;
  uStack_290 = 4;
  uStack_288._0_4_ = uVar6;
  FUN_180066df0(plVar12 + 0xc0e2,&puStack_2a0);
  puStack_2a0 = &unknown_var_3456_ptr;
  if (puStack_298 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_298 = (uint64_t *)0x0;
  uStack_288 = (ulonglong)uStack_288._4_4_ << 0x20;
  puStack_2a0 = &unknown_var_720_ptr;
  puStack_2c0 = &unknown_var_3456_ptr;
  uStack_2a8 = 0;
  puStack_2b8 = (int32_t *)0x0;
  uStack_2b0 = 0;
  puVar18 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar18 = 0;
  puStack_2b8 = puVar18;
  uVar6 = FUN_18064e990(puVar18);
  *puVar18 = 0x67656973;
  *(int16_t *)(puVar18 + 1) = 0x65;
  uStack_2b0 = 5;
  uStack_2a8._0_4_ = uVar6;
  FUN_180066df0(plVar12 + 0xc0e2,&puStack_2c0);
  puStack_2c0 = &unknown_var_3456_ptr;
  if (puStack_2b8 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_2b8 = (int32_t *)0x0;
  uStack_2a8 = (ulonglong)uStack_2a8._4_4_ << 0x20;
  puStack_2c0 = &unknown_var_720_ptr;
  puStack_2a0 = &unknown_var_3456_ptr;
  uStack_288 = 0;
  puStack_298 = (uint64_t *)0x0;
  uStack_290 = 0;
  puVar16 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar16 = 0;
  puStack_298 = puVar16;
  uVar6 = FUN_18064e990(puVar16);
  *puVar16 = 0x335f6c6576656c;
  uStack_290 = 7;
  uStack_288._0_4_ = uVar6;
  FUN_180066df0(plVar12 + 0xc0e2,&puStack_2a0);
  puStack_2a0 = &unknown_var_3456_ptr;
  if (puStack_298 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_298 = (uint64_t *)0x0;
  uStack_288 = (ulonglong)uStack_288._4_4_ << 0x20;
  puStack_2a0 = &unknown_var_720_ptr;
  *(int32_t *)(plVar12 + 0xc060) = 0;
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
  FUN_1801a6440(plVar12,_DAT_180c868e8,&puStack_200,&uStack_1d8);
  FUN_18019e260(plVar12);
  FUN_180094c20(auStack_178);
  lVar21 = FUN_1801ae3a0(plVar12);
  if (lVar21 == 0) {
    puVar16 = (uint64_t *)FUN_1801ac640(plVar12,&puStack_2a0);
    uStack_b8 = *puVar16;
    uStack_b0 = puVar16[1];
    uStack_a8 = puVar16[2];
    uStack_a0 = puVar16[3];
    uStack_98 = *(int32_t *)(puVar16 + 4);
    uStack_94 = *(int32_t *)((longlong)puVar16 + 0x24);
    uStack_90 = *(int32_t *)(puVar16 + 5);
    uStack_8c = *(int32_t *)((longlong)puVar16 + 0x2c);
    uStack_88 = *(int32_t *)(puVar16 + 6);
    uStack_84 = *(int32_t *)((longlong)puVar16 + 0x34);
    uStack_80 = *(int32_t *)(puVar16 + 7);
    uStack_7c = *(int32_t *)((longlong)puVar16 + 0x3c);
  }
  else {
    uStack_b8 = *(uint64_t *)(lVar21 + 0x70);
    uStack_b0 = *(uint64_t *)(lVar21 + 0x78);
    uStack_a8 = *(uint64_t *)(lVar21 + 0x80);
    uStack_a0 = *(uint64_t *)(lVar21 + 0x88);
    uStack_98 = *(int32_t *)(lVar21 + 0x90);
    uStack_94 = *(int32_t *)(lVar21 + 0x94);
    uStack_90 = *(int32_t *)(lVar21 + 0x98);
    uStack_8c = *(int32_t *)(lVar21 + 0x9c);
    uStack_88 = *(int32_t *)(lVar21 + 0xa0);
    uStack_84 = *(int32_t *)(lVar21 + 0xa4);
    uStack_80 = *(int32_t *)(lVar21 + 0xa8);
    uStack_7c = *(int32_t *)(lVar21 + 0xac);
  }
  FUN_1802864f0(auStack_178);
  uStack_2d8 = 0x44af0000;
  FUN_180286e40(auStack_178,0x3fd8f49c,0x3fe38e39,0x3e99999a);
  ppuVar4 = ppuStack_208;
  lVar21 = 2;
  puVar16 = (uint64_t *)(*(longlong *)((longlong)ppuStack_208 + 0x20) + 0x6e0);
  puVar5 = auStack_178;
  do {
    puVar19 = puVar5;
    puVar17 = puVar16;
    uVar11 = puVar19[1];
    *puVar17 = *puVar19;
    puVar17[1] = uVar11;
    uVar11 = puVar19[3];
    puVar17[2] = puVar19[2];
    puVar17[3] = uVar11;
    uVar11 = puVar19[5];
    puVar17[4] = puVar19[4];
    puVar17[5] = uVar11;
    uVar11 = puVar19[7];
    puVar17[6] = puVar19[6];
    puVar17[7] = uVar11;
    uVar11 = puVar19[9];
    puVar17[8] = puVar19[8];
    puVar17[9] = uVar11;
    uVar11 = puVar19[0xb];
    puVar17[10] = puVar19[10];
    puVar17[0xb] = uVar11;
    uVar11 = puVar19[0xd];
    puVar17[0xc] = puVar19[0xc];
    puVar17[0xd] = uVar11;
    uVar11 = puVar19[0xf];
    puVar17[0xe] = puVar19[0xe];
    puVar17[0xf] = uVar11;
    lVar21 = lVar21 + -1;
    puVar16 = puVar17 + 0x10;
    puVar5 = puVar19 + 0x10;
  } while (lVar21 != 0);
  uVar11 = puVar19[0x11];
  puVar17[0x10] = puVar19[0x10];
  puVar17[0x11] = uVar11;
  uVar11 = puVar19[0x13];
  puVar17[0x12] = puVar19[0x12];
  puVar17[0x13] = uVar11;
  uVar6 = *(int32_t *)((longlong)puVar19 + 0xa4);
  uVar2 = *(int32_t *)(puVar19 + 0x15);
  uVar3 = *(int32_t *)((longlong)puVar19 + 0xac);
  *(int32_t *)(puVar17 + 0x14) = *(int32_t *)(puVar19 + 0x14);
  *(int32_t *)((longlong)puVar17 + 0xa4) = uVar6;
  *(int32_t *)(puVar17 + 0x15) = uVar2;
  *(int32_t *)((longlong)puVar17 + 0xac) = uVar3;
  uVar6 = *(int32_t *)((longlong)puVar19 + 0xb4);
  uVar2 = *(int32_t *)(puVar19 + 0x17);
  uVar3 = *(int32_t *)((longlong)puVar19 + 0xbc);
  *(int32_t *)(puVar17 + 0x16) = *(int32_t *)(puVar19 + 0x16);
  *(int32_t *)((longlong)puVar17 + 0xb4) = uVar6;
  *(int32_t *)(puVar17 + 0x17) = uVar2;
  *(int32_t *)((longlong)puVar17 + 0xbc) = uVar3;
  FUN_180301f30(*(uint64_t *)((longlong)ppuStack_208 + 0x20),plVar12);
  *(int8_t *)(*(longlong *)((longlong)ppuVar4 + 0x20) + 0x823) = 1;
  FUN_1802e1590(*(longlong *)((longlong)ppuVar4 + 0x20) + 0x560,plVar12);
  (**(code **)(*plVar12 + 0x38))(plVar12);
  ppuStack_208 = &puStack_260;
  puStack_260 = &unknown_var_3456_ptr;
  if (puStack_258 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_258 = (int32_t *)0x0;
  uStack_248 = 0;
  puStack_260 = &unknown_var_720_ptr;
  puStack_200 = &unknown_var_3456_ptr;
  if (lStack_1f8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_1f8 = 0;
  uStack_1e8 = 0;
  puStack_200 = &unknown_var_720_ptr;
  puStack_228 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar13);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




