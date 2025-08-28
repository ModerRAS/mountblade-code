#include "TaleWorlds.Native.Split.h"

// 99_part_07_part054.c - 1 个函数

// 函数: void FUN_1804d0610(int64_t param_1,int64_t param_2,uint param_3,int param_4)
void FUN_1804d0610(int64_t param_1,int64_t param_2,uint param_3,int param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  int8_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int8_t uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  byte bVar17;
  int64_t lVar18;
  int64_t lVar19;
  int64_t *plVar20;
  uint64_t uVar21;
  int64_t lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iStack_2c8;
  int iStack_2c4;
  uint *puStack_2c0;
  uint64_t uStack_2b8;
  int iStack_2b0;
  int64_t lStack_2a8;
  int64_t lStack_2a0;
  uint *puStack_298;
  int64_t *plStack_290;
  int64_t *plStack_288;
  int64_t lStack_280;
  int64_t *plStack_278;
  int64_t *plStack_270;
  int64_t lStack_268;
  uint uStack_260;
  int8_t uStack_25c;
  uint64_t uStack_258;
  int64_t *plStack_250;
  int32_t uStack_248;
  int64_t lStack_238;
  int64_t lStack_230;
  int64_t lStack_228;
  int64_t lStack_220;
  int64_t lStack_218;
  int64_t lStack_210;
  int64_t lStack_208;
  int64_t lStack_200;
  int64_t *plStack_1f8;
  int64_t *plStack_1f0;
  int8_t uStack_1e8;
  int32_t uStack_1e4;
  int32_t uStack_1e0;
  float fStack_1dc;
  uint uStack_1d8;
  int8_t uStack_1d4;
  int64_t lStack_1c8;
  int64_t lStack_1c0;
  int64_t lStack_1b8;
  int64_t lStack_1b0;
  int64_t lStack_1a8;
  int64_t lStack_1a0;
  int64_t lStack_198;
  int64_t lStack_190;
  int64_t *plStack_188;
  int64_t *plStack_180;
  int8_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  float fStack_16c;
  uint uStack_168;
  int8_t uStack_164;
  int64_t lStack_158;
  int64_t lStack_150;
  int64_t lStack_148;
  int64_t lStack_140;
  int64_t lStack_138;
  int64_t lStack_130;
  int64_t lStack_128;
  int64_t lStack_120;
  int64_t *plStack_118;
  int64_t *plStack_110;
  int8_t uStack_108;
  int32_t uStack_104;
  int32_t uStack_100;
  float fStack_fc;
  uint uStack_f8;
  int8_t uStack_f4;
  uint64_t uStack_e8;
  int64_t *plStack_e0;
  uint uStack_d8;
  int64_t *plStack_d0;
  uint uStack_c8;
  int64_t *plStack_c0;
  
  if (param_2 != 0) {
    uStack_e8 = 0xfffffffffffffffe;
    iStack_2b0 = 0;
    lVar19 = *(int64_t *)(param_2 + 0x1a8);
    if (*(int64_t *)(param_2 + 0x1b0) - lVar19 >> 3 != 0) {
      lStack_280 = 0;
      do {
        iVar13 = iStack_2b0;
        plVar16 = *(int64_t **)(lVar19 + lStack_280 * 8);
        plStack_288 = plVar16;
        iVar12 = (**(code **)(*plVar16 + 0x98))(plVar16);
        if (iVar12 == 0) {
          iVar12 = param_4;
          if ((*(byte *)((int64_t)plVar16 + 0x3b4) & 1) != 0) {
            iVar12 = 8;
          }
          iStack_2c4 = 0;
          lStack_2a8 = (int64_t)iVar12;
          if (0 < iVar12) {
            uStack_2b8 = 0x2c;
            puStack_2c0 = (uint *)(param_1 + 0x100);
            do {
              iVar13 = (int)plVar16[0xb] + -1;
              if (iStack_2c4 < 0) {
                bVar17 = 0;
              }
              else {
                bVar17 = (byte)iStack_2c4;
                if (iVar13 < iStack_2c4) {
                  bVar17 = (byte)iVar13;
                }
              }
              iVar13 = 0;
              lVar19 = plVar16[7];
              if (plVar16[8] - lVar19 >> 4 != 0) {
                lVar22 = 0;
                do {
                  if ((*(uint *)(lVar19 + 8 + lVar22) & 1 << (bVar17 & 0x1f)) != 0) {
                    lVar18 = *plVar16;
                    if (*(code **)(lVar18 + 0x158) == (code *)&unknown_var_2528_ptr) {
                      plVar15 = plVar16 + 0x66;
                    }
                    else {
                      plVar15 = (int64_t *)(**(code **)(lVar18 + 0x158))(plVar16);
                      lVar18 = *plVar16;
                    }
                    plVar20 = *(int64_t **)(lVar19 + lVar22);
                    lVar19 = *plVar15;
                    lVar4 = plVar15[1];
                    lVar5 = plVar15[2];
                    lVar6 = plVar15[3];
                    lVar7 = plVar15[4];
                    lVar8 = plVar15[5];
                    lVar9 = plVar15[6];
                    lVar10 = plVar15[7];
                    lStack_238 = lVar19;
                    lStack_230 = lVar4;
                    lStack_228 = lVar5;
                    lStack_220 = lVar6;
                    lStack_218 = lVar7;
                    lStack_210 = lVar8;
                    lStack_208 = lVar9;
                    lStack_200 = lVar10;
                    plStack_1f8 = plVar16;
                    (**(code **)(lVar18 + 0x28))(plVar16);
                    plStack_1f0 = plVar20;
                    if (plVar20 != (int64_t *)0x0) {
                      (**(code **)(*plVar20 + 0x28))(plVar20);
                    }
                    uVar3 = (int8_t)plVar16[0x76];
                    uVar1 = (int32_t)plVar16[0xd];
                    uStack_1e8 = uVar3;
                    uStack_1e4 = uVar1;
                    if (*(code **)(*plVar16 + 0x198) == (code *)&unknown_var_2544_ptr) {
                      lVar18 = (int64_t)plVar16 + 0x214;
                    }
                    else {
                      lVar18 = (**(code **)(*plVar16 + 0x198))(plVar16);
                    }
                    uVar2 = *(int32_t *)(lVar18 + 0x30);
                    fVar23 = *(float *)((int64_t)plVar20 + 0x28c) -
                             *(float *)((int64_t)plVar20 + 0x27c);
                    fVar24 = *(float *)((int64_t)plVar20 + 0x284) -
                             *(float *)((int64_t)plVar20 + 0x274);
                    if (*(float *)(plVar20 + 0x51) - *(float *)(plVar20 + 0x4f) <= fVar24) {
                      fVar24 = *(float *)(plVar20 + 0x51) - *(float *)(plVar20 + 0x4f);
                    }
                    if (fVar23 <= fVar24) {
                      fVar24 = fVar23;
                    }
                    uVar21 = (uint64_t)(int)param_3;
                    uStack_1e0 = uVar2;
                    fStack_1dc = fVar24;
                    uStack_1d8 = param_3;
                    uStack_1d4 = func_0x00018023a100(plVar15);
                    uVar14 = *(uint *)(uStack_2b8 +
                                      ((int64_t)*(int *)(param_1 + 0x2b18) & uVar21) * 0xd8 +
                                      *(int64_t *)
                                       (*(int64_t *)(param_1 + 11000) +
                                       (int64_t)((int)uVar21 >> 10) * 8));
                    lVar18 = (int64_t)(int)(*puStack_2c0 & uVar14) * 0x68 + 8 +
                             *(int64_t *)
                              (*(int64_t *)(puStack_2c0 + -8) + (int64_t)((int)uVar14 >> 10) * 8);
                    plVar15 = *(int64_t **)(lVar18 + 8);
                    if (plVar15 < *(int64_t **)(lVar18 + 0x10)) {
                      *(int64_t **)(lVar18 + 8) = plVar15 + 0xd;
                      *plVar15 = lVar19;
                      plVar15[1] = lVar4;
                      plVar15[2] = lVar5;
                      plVar15[3] = lVar6;
                      plVar15[4] = lVar7;
                      plVar15[5] = lVar8;
                      plVar15[6] = lVar9;
                      plVar15[7] = lVar10;
                      plVar15[8] = (int64_t)plVar16;
                      plStack_290 = plVar15;
                      (**(code **)(*plVar16 + 0x28))(plVar16);
                      plVar15[9] = (int64_t)plVar20;
                      (**(code **)(*plVar20 + 0x28))(plVar20);
                      *(int8_t *)(plVar15 + 10) = uVar3;
                      *(int32_t *)((int64_t)plVar15 + 0x54) = uVar1;
                      *(int32_t *)(plVar15 + 0xb) = uVar2;
                      *(float *)((int64_t)plVar15 + 0x5c) = fVar24;
                      *(uint *)(plVar15 + 0xc) = param_3;
                      *(int8_t *)((int64_t)plVar15 + 100) = uStack_1d4;
                      plVar15 = plVar16;
                    }
                    else {
                      FUN_1804de090(lVar18,&lStack_238);
                      plVar20 = plStack_1f0;
                      plVar15 = plStack_1f8;
                    }
                    if (plVar20 != (int64_t *)0x0) {
                      (**(code **)(*plVar20 + 0x38))(plVar20);
                    }
                    if (plVar15 != (int64_t *)0x0) {
                      (**(code **)(*plVar15 + 0x38))(plVar15);
                    }
                  }
                  iVar13 = iVar13 + 1;
                  lVar22 = lVar22 + 0x10;
                  lVar19 = plVar16[7];
                } while ((uint64_t)(int64_t)iVar13 < (uint64_t)(plVar16[8] - lVar19 >> 4));
              }
              iStack_2c4 = iStack_2c4 + 1;
              puStack_2c0 = puStack_2c0 + 0x16;
              uStack_2b8 = uStack_2b8 + 4;
              lStack_2a8 = lStack_2a8 + -1;
            } while (lStack_2a8 != 0);
            lStack_2a8 = 0;
            iVar13 = iStack_2b0;
          }
        }
        else {
          iVar12 = (**(code **)(*plVar16 + 0x98))(plVar16);
          if (iVar12 == 3) {
            plVar15 = (int64_t *)plVar16[9];
            iVar13 = param_4;
            if ((*(byte *)((int64_t)plVar15 + 0x3b4) & 1) != 0) {
              iVar13 = 8;
            }
            uStack_25c = 0xff;
            uStack_258 = 0;
            uStack_260 = param_3;
            plStack_250 = plVar16;
            (**(code **)(*plVar16 + 0x28))(plVar16);
            uStack_248 = 0;
            uVar14 = FUN_1804dbf30(param_1 + 0x5b8);
            puStack_2c0._0_4_ = uVar14;
            FUN_1804d0560((int64_t)(int)(*(uint *)(param_1 + 0x608) & uVar14) * 0x28 +
                          *(int64_t *)
                           (*(int64_t *)(param_1 + 0x5e8) + (int64_t)((int)uVar14 >> 10) * 8) + 8,
                          &uStack_260);
            lStack_2a0 = (int64_t)((int)param_3 >> 10);
            FUN_1800571e0((int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_3) * 0xd8 +
                          *(int64_t *)(*(int64_t *)(param_1 + 11000) + lStack_2a0 * 8) + 0x70,
                          &puStack_2c0);
            uStack_d8 = param_3;
            plStack_d0 = plVar16;
            (**(code **)(*plVar16 + 0x28))(plVar16);
            uVar14 = FUN_1804dbfe0(param_1 + 0x560);
            puStack_2c0 = (uint *)CONCAT44(puStack_2c0._4_4_,uVar14);
            lVar19 = *(int64_t *)
                      (*(int64_t *)(param_1 + 0x590) + (int64_t)((int)uVar14 >> 10) * 8);
            lVar22 = (int64_t)(int)(*(uint *)(param_1 + 0x5b0) & uVar14);
            *(uint *)(lVar19 + 8 + lVar22 * 0x18) = param_3;
            plStack_278 = plVar16;
            (**(code **)(*plVar16 + 0x28))(plVar16);
            plStack_278 = *(int64_t **)(lVar19 + 0x10 + lVar22 * 0x18);
            *(int64_t **)(lVar19 + 0x10 + lVar22 * 0x18) = plVar16;
            if (plStack_278 != (int64_t *)0x0) {
              (**(code **)(*plStack_278 + 0x38))();
            }
            FUN_1800571e0();
            iStack_2c8 = 0;
            lStack_2a8 = (int64_t)iVar13;
            if (0 < iVar13) {
              uStack_2b8 = 0x2c;
              puStack_2c0 = (uint *)(param_1 + 0x100);
              do {
                iVar13 = (int)plVar15[0xb] + -1;
                if (iStack_2c8 < 0) {
                  iVar12 = 0;
                }
                else {
                  iVar12 = iStack_2c8;
                  if (iVar13 < iStack_2c8) {
                    iVar12 = iVar13;
                  }
                }
                iVar13 = 0;
                lVar19 = plVar15[7];
                if (plVar15[8] - lVar19 >> 4 != 0) {
                  lVar22 = 0;
                  do {
                    if ((*(uint *)(lVar19 + 8 + lVar22) & 1 << ((byte)iVar12 & 0x1f)) != 0) {
                      lVar18 = *plVar15;
                      if (*(code **)(lVar18 + 0x158) == (code *)&unknown_var_2528_ptr) {
                        plVar16 = plVar15 + 0x66;
                      }
                      else {
                        plVar16 = (int64_t *)(**(code **)(lVar18 + 0x158))(plVar15);
                        lVar18 = *plVar15;
                      }
                      plVar20 = *(int64_t **)(lVar19 + lVar22);
                      lVar19 = *plVar16;
                      lVar4 = plVar16[1];
                      lVar5 = plVar16[2];
                      lVar6 = plVar16[3];
                      lVar7 = plVar16[4];
                      lVar8 = plVar16[5];
                      lVar9 = plVar16[6];
                      lVar10 = plVar16[7];
                      lStack_1c8 = lVar19;
                      lStack_1c0 = lVar4;
                      lStack_1b8 = lVar5;
                      lStack_1b0 = lVar6;
                      lStack_1a8 = lVar7;
                      lStack_1a0 = lVar8;
                      lStack_198 = lVar9;
                      lStack_190 = lVar10;
                      plStack_188 = plVar15;
                      (**(code **)(lVar18 + 0x28))(plVar15);
                      plStack_180 = plVar20;
                      if (plVar20 != (int64_t *)0x0) {
                        (**(code **)(*plVar20 + 0x28))(plVar20);
                      }
                      uVar3 = (int8_t)plVar15[0x76];
                      uVar1 = (int32_t)plVar15[0xd];
                      uStack_178 = uVar3;
                      uStack_174 = uVar1;
                      if (*(code **)(*plVar15 + 0x198) == (code *)&unknown_var_2544_ptr) {
                        lVar18 = (int64_t)plVar15 + 0x214;
                      }
                      else {
                        lVar18 = (**(code **)(*plVar15 + 0x198))(plVar15);
                      }
                      uVar2 = *(int32_t *)(lVar18 + 0x30);
                      fVar23 = *(float *)((int64_t)plVar20 + 0x28c) -
                               *(float *)((int64_t)plVar20 + 0x27c);
                      fVar24 = *(float *)((int64_t)plVar20 + 0x284) -
                               *(float *)((int64_t)plVar20 + 0x274);
                      if (*(float *)(plVar20 + 0x51) - *(float *)(plVar20 + 0x4f) <= fVar24) {
                        fVar24 = *(float *)(plVar20 + 0x51) - *(float *)(plVar20 + 0x4f);
                      }
                      if (fVar23 <= fVar24) {
                        fVar24 = fVar23;
                      }
                      uVar21 = (uint64_t)(int)param_3;
                      uStack_170 = uVar2;
                      fStack_16c = fVar24;
                      uStack_168 = param_3;
                      uStack_164 = func_0x00018023a100(plVar16);
                      uVar14 = *(uint *)(uStack_2b8 +
                                        *(int64_t *)
                                         (*(int64_t *)(param_1 + 11000) + lStack_2a0 * 8) +
                                        ((int64_t)*(int *)(param_1 + 0x2b18) & uVar21) * 0xd8);
                      lVar18 = (int64_t)(int)(*puStack_2c0 & uVar14) * 0x68 + 8 +
                               *(int64_t *)
                                (*(int64_t *)(puStack_2c0 + -8) + (int64_t)((int)uVar14 >> 10) * 8
                                );
                      plVar16 = *(int64_t **)(lVar18 + 8);
                      if (plVar16 < *(int64_t **)(lVar18 + 0x10)) {
                        *(int64_t **)(lVar18 + 8) = plVar16 + 0xd;
                        *plVar16 = lVar19;
                        plVar16[1] = lVar4;
                        plVar16[2] = lVar5;
                        plVar16[3] = lVar6;
                        plVar16[4] = lVar7;
                        plVar16[5] = lVar8;
                        plVar16[6] = lVar9;
                        plVar16[7] = lVar10;
                        plVar16[8] = (int64_t)plVar15;
                        plStack_290 = plVar16;
                        (**(code **)(*plVar15 + 0x28))(plVar15);
                        plVar16[9] = (int64_t)plVar20;
                        (**(code **)(*plVar20 + 0x28))(plVar20);
                        *(int8_t *)(plVar16 + 10) = uVar3;
                        *(int32_t *)((int64_t)plVar16 + 0x54) = uVar1;
                        *(int32_t *)(plVar16 + 0xb) = uVar2;
                        *(float *)((int64_t)plVar16 + 0x5c) = fVar24;
                        *(uint *)(plVar16 + 0xc) = param_3;
                        *(int8_t *)((int64_t)plVar16 + 100) = uStack_164;
                        plVar16 = plVar15;
                      }
                      else {
                        FUN_1804de090(lVar18,&lStack_1c8);
                        plVar20 = plStack_180;
                        plVar16 = plStack_188;
                      }
                      if (plVar20 != (int64_t *)0x0) {
                        (**(code **)(*plVar20 + 0x38))(plVar20);
                      }
                      if (plVar16 != (int64_t *)0x0) {
                        (**(code **)(*plVar16 + 0x38))(plVar16);
                      }
                    }
                    iVar13 = iVar13 + 1;
                    lVar22 = lVar22 + 0x10;
                    lVar19 = plVar15[7];
                  } while ((uint64_t)(int64_t)iVar13 < (uint64_t)(plVar15[8] - lVar19 >> 4));
                }
                iStack_2c8 = iStack_2c8 + 1;
                puStack_2c0 = puStack_2c0 + 0x16;
                uStack_2b8 = uStack_2b8 + 4;
                lStack_2a8 = lStack_2a8 + -1;
              } while (lStack_2a8 != 0);
              lStack_2a8 = 0;
              plVar16 = plStack_288;
            }
            (**(code **)(*plVar16 + 0x38))(plVar16);
            (**(code **)(*plVar16 + 0x38))(plVar16);
            iVar13 = iStack_2b0;
          }
          else {
            iVar12 = (**(code **)(*plVar16 + 0x98))(plVar16);
            if (iVar12 == 6) {
              uVar14 = FUN_1804dbfe0(param_1 + 0x508);
              lStack_268 = (int64_t)((int)param_3 >> 10);
              plStack_290 = (int64_t *)(int64_t)(int)param_3;
              *(uint *)(*(int64_t *)(*(int64_t *)(param_1 + 11000) + lStack_268 * 8) + 0x28 +
                       (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_3) * 0xd8) = uVar14;
              uStack_c8 = param_3;
              plStack_c0 = plVar16;
              (**(code **)(*plVar16 + 0x28))(plVar16);
              lVar19 = *(int64_t *)
                        (*(int64_t *)(param_1 + 0x538) + (int64_t)((int)uVar14 >> 10) * 8);
              lVar22 = (int64_t)(int)(*(uint *)(param_1 + 0x558) & uVar14);
              *(uint *)(lVar19 + 8 + lVar22 * 0x18) = param_3;
              plStack_270 = plVar16;
              (**(code **)(*plVar16 + 0x28))(plVar16);
              plStack_270 = *(int64_t **)(lVar19 + 0x10 + lVar22 * 0x18);
              *(int64_t **)(lVar19 + 0x10 + lVar22 * 0x18) = plVar16;
              if (plStack_270 != (int64_t *)0x0) {
                (**(code **)(*plStack_270 + 0x38))();
              }
              iVar12 = 0;
              puStack_2c0 = (uint *)((uint64_t)puStack_2c0 & 0xffffffff00000000);
              lVar19 = plVar16[0x1c];
              if (plVar16[0x1d] - lVar19 >> 3 != 0) {
                lStack_2a8 = 0;
                do {
                  plVar15 = *(int64_t **)(lStack_2a8 + lVar19);
                  iVar13 = 0;
                  uStack_2b8 = uStack_2b8 & 0xffffffff00000000;
                  if (0 < param_4) {
                    lStack_2a0 = 0x2c;
                    puStack_298 = (uint *)(param_1 + 0x100);
                    do {
                      iVar12 = (int)plVar15[0xb] + -1;
                      if (iVar13 < 0) {
                        bVar17 = 0;
                      }
                      else {
                        bVar17 = (byte)iVar13;
                        if (iVar12 < iVar13) {
                          bVar17 = (byte)iVar12;
                        }
                      }
                      iStack_2c8 = 0;
                      lVar19 = plVar15[7];
                      if (plVar15[8] - lVar19 >> 4 != 0) {
                        lVar22 = 0;
                        do {
                          if ((*(uint *)(lVar22 + 8 + lVar19) & 1 << (bVar17 & 0x1f)) != 0) {
                            lVar18 = *plVar15;
                            if (*(code **)(lVar18 + 0x158) == (code *)&unknown_var_2528_ptr) {
                              plVar16 = plVar15 + 0x66;
                            }
                            else {
                              plVar16 = (int64_t *)(**(code **)(lVar18 + 0x158))(plVar15);
                              lVar18 = *plVar15;
                            }
                            plVar20 = *(int64_t **)(lVar22 + lVar19);
                            lVar19 = *plVar16;
                            lVar4 = plVar16[1];
                            lVar5 = plVar16[2];
                            lVar6 = plVar16[3];
                            lVar7 = plVar16[4];
                            lVar8 = plVar16[5];
                            lVar9 = plVar16[6];
                            lVar10 = plVar16[7];
                            lStack_158 = lVar19;
                            lStack_150 = lVar4;
                            lStack_148 = lVar5;
                            lStack_140 = lVar6;
                            lStack_138 = lVar7;
                            lStack_130 = lVar8;
                            lStack_128 = lVar9;
                            lStack_120 = lVar10;
                            plStack_118 = plVar15;
                            (**(code **)(lVar18 + 0x28))(plVar15);
                            plStack_110 = plVar20;
                            if (plVar20 != (int64_t *)0x0) {
                              (**(code **)(*plVar20 + 0x28))(plVar20);
                            }
                            uVar3 = (int8_t)plVar15[0x76];
                            uVar1 = (int32_t)plVar15[0xd];
                            uStack_108 = uVar3;
                            uStack_104 = uVar1;
                            if (*(code **)(*plVar15 + 0x198) == (code *)&unknown_var_2544_ptr) {
                              lVar18 = (int64_t)plVar15 + 0x214;
                            }
                            else {
                              lVar18 = (**(code **)(*plVar15 + 0x198))(plVar15);
                            }
                            uVar2 = *(int32_t *)(lVar18 + 0x30);
                            fVar25 = *(float *)((int64_t)plVar20 + 0x28c) -
                                     *(float *)((int64_t)plVar20 + 0x27c);
                            fVar24 = *(float *)(plVar20 + 0x51) - *(float *)(plVar20 + 0x4f);
                            fVar23 = *(float *)((int64_t)plVar20 + 0x284) -
                                     *(float *)((int64_t)plVar20 + 0x274);
                            if (fVar24 <= fVar23) {
                              if (fVar25 <= fVar24) {
                                fVar24 = fVar25;
                              }
                            }
                            else {
                              fVar24 = fVar25;
                              if (fVar23 <= fVar25) {
                                fVar24 = fVar23;
                              }
                            }
                            uStack_100 = uVar2;
                            fStack_fc = fVar24;
                            uStack_f8 = param_3;
                            uVar11 = func_0x00018023a100(plVar16);
                            uVar14 = *(uint *)(lStack_2a0 +
                                              *(int64_t *)
                                               (*(int64_t *)(param_1 + 11000) + lStack_268 * 8) +
                                              ((int64_t)*(int *)(param_1 + 0x2b18) &
                                              (uint64_t)plStack_290) * 0xd8);
                            lVar18 = (int64_t)(int)(*puStack_298 & uVar14) * 0x68 + 8 +
                                     *(int64_t *)
                                      (*(int64_t *)(puStack_298 + -8) +
                                      (int64_t)((int)uVar14 >> 10) * 8);
                            plVar16 = *(int64_t **)(lVar18 + 8);
                            uStack_f4 = uVar11;
                            if (plVar16 < *(int64_t **)(lVar18 + 0x10)) {
                              *(int64_t **)(lVar18 + 8) = plVar16 + 0xd;
                              *plVar16 = lVar19;
                              plVar16[1] = lVar4;
                              plVar16[2] = lVar5;
                              plVar16[3] = lVar6;
                              plVar16[4] = lVar7;
                              plVar16[5] = lVar8;
                              plVar16[6] = lVar9;
                              plVar16[7] = lVar10;
                              plVar16[8] = (int64_t)plVar15;
                              plStack_e0 = plVar16;
                              (**(code **)(*plVar15 + 0x28))(plVar15);
                              plVar16[9] = (int64_t)plVar20;
                              (**(code **)(*plVar20 + 0x28))(plVar20);
                              *(int8_t *)(plVar16 + 10) = uVar3;
                              *(int32_t *)((int64_t)plVar16 + 0x54) = uVar1;
                              *(int32_t *)(plVar16 + 0xb) = uVar2;
                              *(float *)((int64_t)plVar16 + 0x5c) = fVar24;
                              *(uint *)(plVar16 + 0xc) = param_3;
                              *(int8_t *)((int64_t)plVar16 + 100) = uVar11;
                              plVar16 = plVar15;
                            }
                            else {
                              FUN_1804de090(lVar18,&lStack_158);
                              plVar20 = plStack_110;
                              plVar16 = plStack_118;
                            }
                            if (plVar20 != (int64_t *)0x0) {
                              (**(code **)(*plVar20 + 0x38))(plVar20);
                            }
                            if (plVar16 != (int64_t *)0x0) {
                              (**(code **)(*plVar16 + 0x38))(plVar16);
                            }
                          }
                          iStack_2c8 = iStack_2c8 + 1;
                          lVar22 = lVar22 + 0x10;
                          lVar19 = plVar15[7];
                        } while ((uint64_t)(int64_t)iStack_2c8 <
                                 (uint64_t)(plVar15[8] - lVar19 >> 4));
                      }
                      iVar13 = (int)uStack_2b8 + 1;
                      uStack_2b8 = CONCAT44(uStack_2b8._4_4_,iVar13);
                      puStack_298 = puStack_298 + 0x16;
                      lStack_2a0 = lStack_2a0 + 4;
                    } while (iVar13 < param_4);
                    plVar16 = plStack_288;
                    iVar12 = (uint)puStack_2c0;
                  }
                  iVar12 = iVar12 + 1;
                  puStack_2c0 = (uint *)CONCAT44(puStack_2c0._4_4_,iVar12);
                  lStack_2a8 = lStack_2a8 + 8;
                  lVar19 = plVar16[0x1c];
                  iVar13 = iStack_2b0;
                } while ((uint64_t)(int64_t)iVar12 < (uint64_t)(plVar16[0x1d] - lVar19 >> 3));
              }
              (**(code **)(*plVar16 + 0x38))(plVar16);
            }
            else {
              (**(code **)(*plVar16 + 0x98))(plVar16);
            }
          }
        }
        iStack_2b0 = iVar13 + 1;
        lStack_280 = lStack_280 + 1;
        lVar19 = *(int64_t *)(param_2 + 0x1a8);
      } while ((uint64_t)(int64_t)iStack_2b0 <
               (uint64_t)(*(int64_t *)(param_2 + 0x1b0) - lVar19 >> 3));
    }
  }
  return;
}






