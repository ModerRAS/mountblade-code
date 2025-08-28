#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part038.c - 3 个函数

// 函数: void FUN_1801f0ed0(int64_t param_1,int32_t param_2)
void FUN_1801f0ed0(int64_t param_1,int32_t param_2)

{
  uint uVar1;
  code *pcVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t lVar5;
  void **ppuVar6;
  uint64_t *puVar7;
  int32_t uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  int32_t *puVar15;
  int8_t *puVar16;
  int8_t *puVar17;
  uint64_t *puVar18;
  uint64_t *puVar19;
  int32_t *puVar20;
  uint64_t *puVar21;
  uint uVar22;
  int64_t lVar23;
  uint64_t uVar24;
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
  int64_t lStack_1f8;
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
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  plVar14 = system_main_module_state;
  if (*(char *)(param_1 + 8) != '\0') {
    if ((*(int64_t *)(param_1 + 0x20) != 0) &&
       (*(char *)(*(int64_t *)(param_1 + 0x20) + 0x820) != '\0')) {
      uStack_40 = 0x1801f0f36;
      uVar8 = FUN_180093a20();
      uStack_40 = 0x1801f0f43;
      func_0x0001800938f0(uVar8,0xbf800000);
      pcVar2 = *(code **)(**(int64_t **)(param_1 + 0x20) + 0xb8);
      if (pcVar2 == (code *)&unknown_var_128_ptr) {
        lVar23 = (*(int64_t **)(param_1 + 0x20))[0xda];
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
  lVar23 = system_main_module_state[7];
  *(char *)(param_1 + 8) = (char)lVar23;
  lVar5 = system_system_data_memory;
  if ((char)lVar23 == '\0') {
    return;
  }
  *(int8_t *)((int64_t)plVar14 + 0x1ef) = 1;
  if (*(char *)(lVar5 + 0x21) == '\0') {
    return;
  }
  uStack_188 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2f8;
  puVar16 = (int8_t *)0x0;
  uVar12 = 0;
  uStack_2c8 = 0;
  ppuStack_208 = (void **)param_1;
  uVar13 = FUN_18062b1e0(system_memory_pool_ptr,0x880,0x10,0x1f);
  plVar14 = (int64_t *)FUN_180301040(uVar13);
  if (plVar14 != (int64_t *)0x0) {
    ppuStack_230 = (void **)plVar14;
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  ppuStack_230 = *(void ***)(param_1 + 0x20);
  *(int64_t **)(param_1 + 0x20) = plVar14;
  if (ppuStack_230 != (void **)0x0) {
    (**(code **)((int64_t)*ppuStack_230 + 0x38))();
  }
  puStack_228 = &system_data_buffer_ptr;
  uStack_210 = 0;
  puStack_220 = (int32_t *)0x0;
  uStack_218 = 0;
  puVar15 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x1e,0x13);
  *(int8_t *)puVar15 = 0;
  puStack_220 = puVar15;
  uVar8 = FUN_18064e990(puVar15);
  uStack_210 = CONCAT44(uStack_210._4_4_,uVar8);
  *puVar15 = 0x5f33626d;
  puVar15[1] = 0x66726570;
  puVar15[2] = 0x616d726f;
  puVar15[3] = 0x5f65636e;
  *(uint64_t *)(puVar15 + 4) = 0x745f74726f706572;
  puVar15[6] = 0x5f6e776f;
  *(int16_t *)(puVar15 + 7) = 0x31;
  uStack_218 = 0x1d;
  lVar23 = *system_main_module_state;
  iVar9 = FUN_1801426a0(lVar23,&puStack_228);
  if (iVar9 < 0) {
LAB_1801f1465:
    lVar23 = FUN_180628ca0();
  }
  else {
    if ((uint64_t)(*(int64_t *)(lVar23 + 0x890) - *(int64_t *)(lVar23 + 0x888) >> 5) <=
        (uint64_t)(int64_t)iVar9) goto LAB_1801f1465;
    lVar23 = (int64_t)iVar9 * 0x20 + *(int64_t *)(lVar23 + 0x888);
  }
  puStack_2a0 = &system_data_buffer_ptr;
  uStack_288 = 0;
  puStack_298 = (uint64_t *)0x0;
  uStack_290 = 0;
  uStack_2c8 = 1;
  uVar1 = *(uint *)(lVar23 + 0x10);
  uVar24 = (uint64_t)uVar1;
  uVar10 = 0;
  if (*(int64_t *)(lVar23 + 8) == 0) {
LAB_1801f14e3:
    uVar12 = uVar10;
    if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar16,*(uint64_t *)(lVar23 + 8),uVar24);
    }
  }
  else if (uVar1 != 0) {
    iVar9 = uVar1 + 1;
    if (iVar9 < 0x10) {
      iVar9 = 0x10;
    }
    puVar16 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar9,0x13);
    *puVar16 = 0;
    puStack_298 = (uint64_t *)puVar16;
    uVar10 = FUN_18064e990(puVar16);
    uStack_288 = CONCAT44(uStack_288._4_4_,uVar10);
    goto LAB_1801f14e3;
  }
  if (puVar16 != (int8_t *)0x0) {
    puVar16[uVar24] = 0;
  }
  uVar10 = *(uint *)(lVar23 + 0x1c);
  uStack_288 = CONCAT44(uVar10,(int32_t)uStack_288);
  uVar22 = uVar1 + 9;
  if (uVar22 != 0) {
    uVar11 = uVar1 + 10;
    uStack_290 = uVar1;
    if (puVar16 == (int8_t *)0x0) {
      if ((int)uVar11 < 0x10) {
        uVar11 = 0x10;
      }
      puVar16 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)(int)uVar11,0x13);
      *puVar16 = 0;
    }
    else {
      if (uVar11 <= uVar12) goto LAB_1801f157c;
      uStack_2d8 = CONCAT31(uStack_2d8._1_3_,0x13);
      puVar16 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar16,uVar11,0x10);
    }
    puStack_298 = (uint64_t *)puVar16;
    uVar8 = FUN_18064e990(puVar16);
    uStack_288 = CONCAT44(uStack_288._4_4_,uVar8);
  }
LAB_1801f157c:
  *(uint64_t *)(puVar16 + uVar24) = 0x6a624f656e656353;
  *(int16_t *)(puVar16 + uVar24 + 8) = 0x2f;
  puVar17 = (int8_t *)0x0;
  uVar11 = 0;
  puStack_2c0 = &system_data_buffer_ptr;
  uStack_2a8 = 0;
  puStack_2b8 = (int32_t *)0x0;
  uStack_2b0 = 0;
  uStack_2c8 = 3;
  uVar12 = 0;
  uStack_290 = uVar22;
  if (puVar16 == (int8_t *)0x0) {
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
    puVar17 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar9,0x13);
    *puVar17 = 0;
    puStack_2b8 = (int32_t *)puVar17;
    uVar12 = FUN_18064e990(puVar17);
    uStack_2a8 = CONCAT44(uStack_2a8._4_4_,uVar12);
    goto LAB_1801f161f;
  }
  if (puVar17 != (int8_t *)0x0) {
    puVar17[uVar22] = 0;
  }
  uStack_2a8._4_4_ = uVar10;
  if (uVar1 + 0x26 != 0) {
    uVar12 = uVar1 + 0x27;
    uStack_2b0 = uVar22;
    if (puVar17 == (int8_t *)0x0) {
      if ((int)uVar12 < 0x10) {
        uVar12 = 0x10;
      }
      puVar17 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)(int)uVar12,0x13);
      *puVar17 = 0;
    }
    else {
      if (uVar12 <= uVar11) goto LAB_1801f16b2;
      uStack_2d8 = CONCAT31(uStack_2d8._1_3_,0x13);
      puVar17 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar17,uVar12,0x10);
    }
    puStack_2b8 = (int32_t *)puVar17;
    uStack_2a8._0_4_ = FUN_18064e990(puVar17);
  }
LAB_1801f16b2:
  puVar20 = (int32_t *)(puVar17 + uVar22);
  uVar8 = puVar15[1];
  uVar3 = puVar15[2];
  uVar4 = puVar15[3];
  *puVar20 = *puVar15;
  puVar20[1] = uVar8;
  puVar20[2] = uVar3;
  puVar20[3] = uVar4;
  *(uint64_t *)(puVar20 + 4) = *(uint64_t *)(puVar15 + 4);
  puVar20[6] = puVar15[6];
  *(int16_t *)(puVar20 + 7) = *(int16_t *)(puVar15 + 7);
  uStack_2b0 = uVar1 + 0x26;
  FUN_180627e10(&puStack_2c0,&puStack_200,&system_data_d7c8);
  uStack_2c8 = 1;
  puStack_2c0 = &system_data_buffer_ptr;
  if (puVar17 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar17);
  }
  puStack_2b8 = (int32_t *)0x0;
  uStack_2a8 = (uint64_t)uStack_2a8._4_4_ << 0x20;
  puStack_2c0 = &system_state_ptr;
  uStack_2c8 = 0;
  puStack_2a0 = &system_data_buffer_ptr;
  if (puVar16 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar16);
  }
  puStack_298 = (uint64_t *)0x0;
  uStack_288 = uStack_288 & 0xffffffff00000000;
  puStack_2a0 = &system_state_ptr;
  ppuStack_230 = &puStack_260;
  puStack_260 = &system_data_buffer_ptr;
  uStack_248 = 0;
  uStack_244 = 0;
  puStack_258 = (int32_t *)0x0;
  uStack_250 = 0;
  uStack_23c = 0x100;
  uStack_238 = 0;
  uStack_234 = 0;
  puStack_258 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x1e,0x13);
  *(int8_t *)puStack_258 = 0;
  uStack_248 = FUN_18064e990(puStack_258);
  uVar8 = puVar15[1];
  uVar3 = puVar15[2];
  uVar4 = puVar15[3];
  *puStack_258 = *puVar15;
  puStack_258[1] = uVar8;
  puStack_258[2] = uVar3;
  puStack_258[3] = uVar4;
  *(uint64_t *)(puStack_258 + 4) = *(uint64_t *)(puVar15 + 4);
  puStack_258[6] = puVar15[6];
  *(int8_t *)(puStack_258 + 7) = *(int8_t *)(puVar15 + 7);
  uStack_250 = 0x1d;
  if (puStack_258 != (int32_t *)0x0) {
    *(int8_t *)((int64_t)puStack_258 + 0x1d) = 0;
  }
  uStack_244 = 0;
  uStack_240 = 0;
  uStack_23c = CONCAT31(uStack_23c._1_3_,1);
  uVar13 = FUN_18062b1e0(system_memory_pool_ptr,0x60d30,0x10,0x1f);
  plVar14 = (int64_t *)FUN_1801954d0(uVar13,&puStack_260);
  ppuStack_230 = (void **)plVar14;
  if (plVar14 != (int64_t *)0x0) {
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  FUN_1803898a0(plVar14 + 0x534);
  *(int8_t *)(plVar14 + 0x54c) = 1;
  puStack_2a0 = &system_data_buffer_ptr;
  uStack_288 = 0;
  puStack_298 = (uint64_t *)0x0;
  uStack_290 = 0;
  puVar20 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar20 = 0;
  puStack_298 = (uint64_t *)puVar20;
  uVar8 = FUN_18064e990(puVar20);
  *puVar20 = 0x65736162;
  *(int8_t *)(puVar20 + 1) = 0;
  uStack_290 = 4;
  uStack_288._0_4_ = uVar8;
  FUN_180066df0(plVar14 + 0xc0e2,&puStack_2a0);
  puStack_2a0 = &system_data_buffer_ptr;
  if (puStack_298 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_298 = (uint64_t *)0x0;
  uStack_288 = (uint64_t)uStack_288._4_4_ << 0x20;
  puStack_2a0 = &system_state_ptr;
  puStack_2c0 = &system_data_buffer_ptr;
  uStack_2a8 = 0;
  puStack_2b8 = (int32_t *)0x0;
  uStack_2b0 = 0;
  puVar20 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar20 = 0;
  puStack_2b8 = puVar20;
  uVar8 = FUN_18064e990(puVar20);
  *puVar20 = 0x67656973;
  *(int16_t *)(puVar20 + 1) = 0x65;
  uStack_2b0 = 5;
  uStack_2a8._0_4_ = uVar8;
  FUN_180066df0(plVar14 + 0xc0e2,&puStack_2c0);
  puStack_2c0 = &system_data_buffer_ptr;
  if (puStack_2b8 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_2b8 = (int32_t *)0x0;
  uStack_2a8 = (uint64_t)uStack_2a8._4_4_ << 0x20;
  puStack_2c0 = &system_state_ptr;
  puStack_2a0 = &system_data_buffer_ptr;
  uStack_288 = 0;
  puStack_298 = (uint64_t *)0x0;
  uStack_290 = 0;
  puVar18 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar18 = 0;
  puStack_298 = puVar18;
  uVar8 = FUN_18064e990(puVar18);
  *puVar18 = 0x335f6c6576656c;
  uStack_290 = 7;
  uStack_288._0_4_ = uVar8;
  FUN_180066df0(plVar14 + 0xc0e2,&puStack_2a0);
  puStack_2a0 = &system_data_buffer_ptr;
  if (puStack_298 == (uint64_t *)0x0) {
    puStack_298 = (uint64_t *)0x0;
    uStack_288 = (uint64_t)uStack_288._4_4_ << 0x20;
    puStack_2a0 = &system_state_ptr;
    *(int32_t *)(plVar14 + 0xc060) = 0;
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
    FUN_1801a6440(plVar14,system_system_data_memory,&puStack_200,&uStack_1d8);
    FUN_18019e260(plVar14);
    FUN_180094c20(auStack_178);
    lVar23 = FUN_1801ae3a0(plVar14);
    if (lVar23 == 0) {
      puVar18 = (uint64_t *)FUN_1801ac640(plVar14,&puStack_2a0);
      uStack_b8 = *puVar18;
      uStack_b0 = puVar18[1];
      uStack_a8 = puVar18[2];
      uStack_a0 = puVar18[3];
      uStack_98 = *(int32_t *)(puVar18 + 4);
      uStack_94 = *(int32_t *)((int64_t)puVar18 + 0x24);
      uStack_90 = *(int32_t *)(puVar18 + 5);
      uStack_8c = *(int32_t *)((int64_t)puVar18 + 0x2c);
      uStack_88 = *(int32_t *)(puVar18 + 6);
      uStack_84 = *(int32_t *)((int64_t)puVar18 + 0x34);
      uStack_80 = *(int32_t *)(puVar18 + 7);
      uStack_7c = *(int32_t *)((int64_t)puVar18 + 0x3c);
    }
    else {
      uStack_b8 = *(uint64_t *)(lVar23 + 0x70);
      uStack_b0 = *(uint64_t *)(lVar23 + 0x78);
      uStack_a8 = *(uint64_t *)(lVar23 + 0x80);
      uStack_a0 = *(uint64_t *)(lVar23 + 0x88);
      uStack_98 = *(int32_t *)(lVar23 + 0x90);
      uStack_94 = *(int32_t *)(lVar23 + 0x94);
      uStack_90 = *(int32_t *)(lVar23 + 0x98);
      uStack_8c = *(int32_t *)(lVar23 + 0x9c);
      uStack_88 = *(int32_t *)(lVar23 + 0xa0);
      uStack_84 = *(int32_t *)(lVar23 + 0xa4);
      uStack_80 = *(int32_t *)(lVar23 + 0xa8);
      uStack_7c = *(int32_t *)(lVar23 + 0xac);
    }
    FUN_1802864f0(auStack_178);
    uStack_2d8 = 0x44af0000;
    FUN_180286e40(auStack_178,0x3fd8f49c,0x3fe38e39,0x3e99999a);
    ppuVar6 = ppuStack_208;
    lVar23 = 2;
    puVar18 = (uint64_t *)(*(int64_t *)((int64_t)ppuStack_208 + 0x20) + 0x6e0);
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
    uVar8 = *(int32_t *)((int64_t)puVar21 + 0xa4);
    uVar3 = *(int32_t *)(puVar21 + 0x15);
    uVar4 = *(int32_t *)((int64_t)puVar21 + 0xac);
    *(int32_t *)(puVar19 + 0x14) = *(int32_t *)(puVar21 + 0x14);
    *(int32_t *)((int64_t)puVar19 + 0xa4) = uVar8;
    *(int32_t *)(puVar19 + 0x15) = uVar3;
    *(int32_t *)((int64_t)puVar19 + 0xac) = uVar4;
    uVar8 = *(int32_t *)((int64_t)puVar21 + 0xb4);
    uVar3 = *(int32_t *)(puVar21 + 0x17);
    uVar4 = *(int32_t *)((int64_t)puVar21 + 0xbc);
    *(int32_t *)(puVar19 + 0x16) = *(int32_t *)(puVar21 + 0x16);
    *(int32_t *)((int64_t)puVar19 + 0xb4) = uVar8;
    *(int32_t *)(puVar19 + 0x17) = uVar3;
    *(int32_t *)((int64_t)puVar19 + 0xbc) = uVar4;
    FUN_180301f30(*(uint64_t *)((int64_t)ppuStack_208 + 0x20),plVar14);
    *(int8_t *)(*(int64_t *)((int64_t)ppuVar6 + 0x20) + 0x823) = 1;
    FUN_1802e1590(*(int64_t *)((int64_t)ppuVar6 + 0x20) + 0x560,plVar14);
    (**(code **)(*plVar14 + 0x38))(plVar14);
    ppuStack_208 = &puStack_260;
    puStack_260 = &system_data_buffer_ptr;
    if (puStack_258 == (int32_t *)0x0) {
      puStack_258 = (int32_t *)0x0;
      uStack_248 = 0;
      puStack_260 = &system_state_ptr;
      puStack_200 = &system_data_buffer_ptr;
      if (lStack_1f8 == 0) {
        lStack_1f8 = 0;
        uStack_1e8 = 0;
        puStack_200 = &system_state_ptr;
        puStack_228 = &system_data_buffer_ptr;
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




// 函数: void FUN_1801f0f90(uint64_t param_1,int64_t param_2)
void FUN_1801f0f90(uint64_t param_1,int64_t param_2)

{
  uint uVar1;
  uint uVar2;
  int8_t auStack_98 [32];
  int32_t uStack_78;
  void *puStack_70;
  int64_t lStack_68;
  uint uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  uint64_t uStack_50;
  void *puStack_48;
  int8_t *puStack_40;
  int32_t uStack_38;
  int8_t auStack_30 [16];
  uint64_t uStack_20;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_20 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  uStack_78 = 0;
  (**(code **)(*(int64_t *)(param_2 + 0x80) + 0x10))((int64_t *)(param_2 + 0x80),&system_data_d128);
  puStack_48 = &system_config_ptr;
  puStack_40 = auStack_30;
  auStack_30[0] = 0;
  uStack_38 = 6;
  strcpy_s(auStack_30,0x10,&unknown_var_2588_ptr);
  uStack_78 = 1;
  FUN_1806279c0(&puStack_70,&puStack_48);
  uVar2 = uStack_60;
  uStack_78 = 0;
  puStack_48 = &system_state_ptr;
  uVar1 = uStack_60 + 8;
  FUN_1806277c0(&puStack_70,uVar1);
  *(uint64_t *)((uint64_t)uStack_60 + lStack_68) = 0x2f73656c75646f4d;
  *(int8_t *)((uint64_t *)((uint64_t)uStack_60 + lStack_68) + 1) = 0;
  uStack_60 = uVar1;
  if (0 < *(int *)(param_2 + 0x90)) {
    FUN_1806277c0(&puStack_70,uVar1 + *(int *)(param_2 + 0x90));
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)uStack_60 + lStack_68,*(uint64_t *)(param_2 + 0x88),
           (int64_t)(*(int *)(param_2 + 0x90) + 1));
  }
  uVar2 = uVar2 + 9;
  FUN_1806277c0(&puStack_70,(uint64_t)uVar2);
  *(int16_t *)((uint64_t)uStack_60 + lStack_68) = 0x2f;
  uStack_60 = uVar2;
  if (lStack_68 != 0) {
    FUN_1806277c0(param_2 + 0xa0,uVar2);
  }
  if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(param_2 + 0xa8),lStack_68,uVar2);
  }
  *(int32_t *)(param_2 + 0xb0) = 0;
  if (*(int64_t *)(param_2 + 0xa8) != 0) {
    *(int8_t *)((uint64_t)uVar2 + *(int64_t *)(param_2 + 0xa8)) = 0;
  }
  *(int32_t *)(param_2 + 0xbc) = uStack_54;
  *(int8_t *)(param_2 + 0x7c) = 0;
  *(int32_t *)(param_2 + 0x78) = 1;
  puStack_70 = &system_data_buffer_ptr;
  if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_68 = 0;
  uStack_58 = 0;
  puStack_70 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (uint64_t)auStack_98,0);
}






// 函数: void FUN_1801f11a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801f11a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puStack_30;
  int32_t *puStack_28;
  int32_t uStack_20;
  uint64_t uStack_18;
  
  puStack_30 = &system_data_buffer_ptr;
  uStack_18 = 0;
  puStack_28 = (int32_t *)0x0;
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
  *(int16_t *)(puStack_28 + 8) = 0x6e6f;
  *(int8_t *)((int64_t)puStack_28 + 0x22) = 0;
  uStack_20 = 0x22;
  FUN_180354b70(&puStack_30,FUN_1803f5b70,_guard_check_icall);
  return;
}



uint64_t *
FUN_1801f1250(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0x22,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_2[1];
  *puVar1 = 0x735f726f74696465;
  puVar1[1] = 0x6f635f7470697263;
  puVar1[2] = 0x5f746e656e6f706d;
  puVar1[3] = 0x6974696e69666564;
  *(int16_t *)(puVar1 + 4) = 0x6e6f;
  *(int8_t *)((int64_t)puVar1 + 0x22) = 0;
  *(int32_t *)(param_2 + 2) = 0x22;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




