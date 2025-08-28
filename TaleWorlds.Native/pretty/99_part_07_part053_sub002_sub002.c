#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part053_sub002_sub002.c - 1 个函数

// 函数: void FUN_1804cef30(int64_t param_1,int64_t param_2,uint param_3,int param_4)
void FUN_1804cef30(int64_t param_1,int64_t param_2,uint param_3,int param_4)

{
  int *piVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  byte bVar11;
  uint uVar12;
  int64_t lVar13;
  int iVar14;
  uint *puVar15;
  int64_t *plVar16;
  int8_t uVar17;
  int64_t lVar18;
  float fVar19;
  uint uStack_3a8;
  int iStack_3a4;
  uint *puStack_3a0;
  uint *puStack_398;
  uint64_t uStack_390;
  uint64_t uStack_388;
  int64_t lStack_380;
  uint *puStack_378;
  int64_t *plStack_370;
  int64_t *plStack_368;
  int64_t lStack_360;
  int64_t lStack_358;
  int64_t lStack_350;
  int64_t *plStack_348;
  int64_t *plStack_340;
  int64_t *plStack_338;
  int64_t *plStack_330;
  uint64_t uStack_328;
  int64_t lStack_320;
  int64_t lStack_318;
  uint uStack_310;
  int8_t uStack_30c;
  int64_t *plStack_308;
  int64_t *plStack_300;
  int32_t uStack_2f8;
  uint uStack_2f0;
  int8_t uStack_2ec;
  int64_t *plStack_2e8;
  int64_t *plStack_2e0;
  int32_t uStack_2d8;
  uint uStack_2d0;
  int8_t uStack_2cc;
  uint64_t uStack_2c8;
  int64_t *plStack_2c0;
  int32_t uStack_2b8;
  uint uStack_2a8;
  int8_t uStack_2a4;
  int8_t uStack_2a3;
  int64_t *plStack_2a0;
  int64_t *plStack_298;
  int32_t uStack_290;
  int64_t lStack_28c;
  int64_t lStack_284;
  int64_t lStack_27c;
  int64_t lStack_274;
  int64_t lStack_26c;
  int64_t lStack_264;
  int32_t uStack_25c;
  int32_t uStack_258;
  int32_t uStack_254;
  int32_t uStack_250;
  int32_t uStack_24c;
  int32_t uStack_248;
  float fStack_244;
  uint uStack_238;
  int8_t uStack_234;
  int8_t uStack_233;
  int64_t *plStack_230;
  int64_t *plStack_228;
  int32_t uStack_220;
  int64_t lStack_21c;
  int64_t lStack_214;
  int64_t lStack_20c;
  int64_t lStack_204;
  int64_t lStack_1fc;
  int64_t lStack_1f4;
  int32_t uStack_1ec;
  int32_t uStack_1e8;
  int32_t uStack_1e4;
  int32_t uStack_1e0;
  int32_t uStack_1dc;
  int32_t uStack_1d8;
  float fStack_1d4;
  uint uStack_1c8;
  int8_t uStack_1c4;
  int8_t uStack_1c3;
  int64_t *plStack_1c0;
  int64_t *plStack_1b8;
  int32_t uStack_1b0;
  int64_t lStack_1ac;
  int64_t lStack_1a4;
  int64_t lStack_19c;
  int64_t lStack_194;
  int64_t lStack_18c;
  int64_t lStack_184;
  int32_t uStack_17c;
  int32_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  int32_t uStack_16c;
  int32_t uStack_168;
  float fStack_164;
  uint uStack_158;
  int8_t uStack_154;
  int8_t uStack_153;
  int64_t *plStack_150;
  int64_t *plStack_148;
  int32_t uStack_140;
  int64_t lStack_13c;
  int64_t lStack_134;
  int64_t lStack_12c;
  int64_t lStack_124;
  int64_t lStack_11c;
  int64_t lStack_114;
  int32_t uStack_10c;
  int32_t uStack_108;
  int32_t uStack_104;
  int32_t uStack_100;
  int32_t uStack_fc;
  int32_t uStack_f8;
  float fStack_f4;
  uint uStack_e8;
  int8_t uStack_e4;
  uint64_t uStack_e0;
  int64_t *plStack_d8;
  int32_t uStack_d0;
  uint64_t uStack_c8;
  uint uStack_c0;
  int64_t *plStack_b8;
  uint uStack_b0;
  int64_t *plStack_a8;
  
  if (((param_2 != 0) && (uStack_c8 = 0xfffffffffffffffe, '\0' < *(char *)(param_2 + 0x20))) &&
     (lStack_318 = (int64_t)
                   (int)(*(int64_t *)(param_2 + 0x148) - *(int64_t *)(param_2 + 0x140) >> 3),
     0 < lStack_318)) {
    lStack_350 = 0;
    do {
      lStack_380 = *(int64_t *)(*(int64_t *)(param_2 + 0x140) + lStack_350 * 8);
      lStack_358 = 0;
      lStack_320 = (int64_t)
                   (int)(*(int64_t *)(lStack_380 + 0xb8) - *(int64_t *)(lStack_380 + 0xb0) >> 3);
      if (0 < lStack_320) {
        do {
          lVar13 = lStack_380;
          plVar9 = *(int64_t **)(*(int64_t *)(lStack_380 + 0xb0) + lStack_358 * 8);
          plStack_370 = plVar9;
          iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
          iVar4 = (int)param_3 >> 10;
          if (iVar3 == 0) {
            iVar3 = param_4;
            if ((*(byte *)((int64_t)plVar9 + 0x3b4) & 1) != 0) {
              iVar3 = 8;
            }
            uStack_3a8 = 0;
            puStack_398 = (uint *)(int64_t)iVar3;
            if (0 < iVar3) {
              uStack_390 = 0x2c;
              puVar6 = (uint *)(param_1 + 0x100);
              do {
                uVar5 = (int)plVar9[0xb] - 1;
                if ((int)uStack_3a8 < 0) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = uStack_3a8;
                  if ((int)uVar5 < (int)uStack_3a8) {
                    uVar12 = uVar5;
                  }
                }
                uVar5 = 1 << ((byte)uVar12 & 0x1f);
                uStack_388 = CONCAT44(uStack_388._4_4_,uVar5);
                iStack_3a4 = 0;
                lVar13 = plVar9[7];
                if (plVar9[8] - lVar13 >> 4 != 0) {
                  lVar18 = 0;
                  puStack_3a0 = puVar6;
                  do {
                    if ((*(uint *)(lVar13 + 8 + lVar18) & uVar5) != 0) {
                      if (*(code **)(*plVar9 + 0x158) == (code *)&unknown_var_2528_ptr) {
                        plVar8 = plVar9 + 0x66;
                      }
                      else {
                        plVar8 = (int64_t *)(**(code **)(*plVar9 + 0x158))(plVar9);
                      }
                      plVar10 = *(int64_t **)(lVar13 + lVar18);
                      uStack_2a4 = (int8_t)
                                   ((uint)((int)lStack_380 - *(int *)(param_2 + 0x18)) >> 8);
                      uStack_2a3 = (int8_t)plVar9[0x76];
                      uStack_2a8 = param_3;
                      plStack_2a0 = plVar10;
                      if (plVar10 != (int64_t *)0x0) {
                        (**(code **)(*plVar10 + 0x28))(plVar10);
                      }
                      plStack_298 = plVar9;
                      (**(code **)(*plVar9 + 0x28))(plVar9);
                      uStack_290 = (**(code **)(*plVar9 + 0x98))(plVar9);
                      lStack_28c = *plVar8;
                      lStack_284 = plVar8[1];
                      lStack_27c = plVar8[2];
                      lStack_274 = plVar8[3];
                      lStack_26c = plVar8[4];
                      lStack_264 = plVar8[5];
                      uStack_25c = (int32_t)plVar8[6];
                      uStack_258 = *(int32_t *)((int64_t)plVar8 + 0x34);
                      uStack_254 = (int32_t)plVar8[7];
                      uStack_250 = *(int32_t *)((int64_t)plVar8 + 0x3c);
                      uStack_24c = (int32_t)plVar9[0xd];
                      if (*(code **)(*plVar9 + 0x198) == (code *)&unknown_var_2544_ptr) {
                        lVar13 = (int64_t)plVar9 + 0x214;
                      }
                      else {
                        lVar13 = (**(code **)(*plVar9 + 0x198))(plVar9);
                      }
                      puVar6 = puStack_3a0;
                      uStack_248 = *(int32_t *)(lVar13 + 0x30);
                      fVar19 = *(float *)((int64_t)plVar10 + 0x28c) -
                               *(float *)((int64_t)plVar10 + 0x27c);
                      fStack_244 = *(float *)((int64_t)plVar10 + 0x284) -
                                   *(float *)((int64_t)plVar10 + 0x274);
                      if (*(float *)(plVar10 + 0x51) - *(float *)(plVar10 + 0x4f) <= fStack_244) {
                        fStack_244 = *(float *)(plVar10 + 0x51) - *(float *)(plVar10 + 0x4f);
                      }
                      if (fVar19 <= fStack_244) {
                        fStack_244 = fVar19;
                      }
                      uVar5 = *(uint *)((int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_3) *
                                        0xd8 + *(int64_t *)
                                                (*(int64_t *)(param_1 + 11000) +
                                                (int64_t)iVar4 * 8) + uStack_390);
                      lVar13 = (int64_t)(int)(*puStack_3a0 & uVar5) * 0x68 +
                               *(int64_t *)
                                (*(int64_t *)(puStack_3a0 + -8) + (int64_t)((int)uVar5 >> 10) * 8)
                               + 0x28;
                      uVar2 = *(uint64_t *)(lVar13 + 8);
                      if (uVar2 < *(uint64_t *)(lVar13 + 0x10)) {
                        *(uint64_t *)(lVar13 + 8) = uVar2 + 0x68;
                        FUN_1804dde40(uVar2);
                        plVar8 = plVar9;
                      }
                      else {
                        FUN_1804de240(lVar13,&uStack_2a8);
                        plVar10 = plStack_2a0;
                        plVar8 = plStack_298;
                      }
                      if (plVar8 != (int64_t *)0x0) {
                        (**(code **)(*plVar8 + 0x38))(plVar8);
                      }
                      if (plVar10 != (int64_t *)0x0) {
                        (**(code **)(*plVar10 + 0x38))(plVar10);
                      }
                      uVar5 = (uint)uStack_388;
                    }
                    iStack_3a4 = iStack_3a4 + 1;
                    lVar18 = lVar18 + 0x10;
                    lVar13 = plVar9[7];
                  } while ((uint64_t)(int64_t)iStack_3a4 < (uint64_t)(plVar9[8] - lVar13 >> 4));
                }
                uStack_3a8 = uStack_3a8 + 1;
                puVar6 = puVar6 + 0x16;
                uStack_390 = uStack_390 + 4;
                puStack_398 = (uint *)((int64_t)puStack_398 + -1);
              } while (puStack_398 != (uint *)0x0);
              puStack_398 = (uint *)0x0;
              puStack_3a0 = puVar6;
            }
          }
          else {
            iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
            iVar14 = (int)lVar13;
            if (iVar3 == 3) {
              plVar8 = (int64_t *)plVar9[9];
              iVar3 = param_4;
              if ((*(byte *)((int64_t)plVar8 + 0x3b4) & 1) != 0) {
                iVar3 = 8;
              }
              uStack_390 = CONCAT44(uStack_390._4_4_,iVar3);
              uVar17 = (int8_t)((uint)(iVar14 - *(int *)(param_2 + 0x18)) >> 8);
              uStack_e0 = 0;
              uStack_e8 = param_3;
              uStack_e4 = uVar17;
              plStack_d8 = plVar9;
              (**(code **)(*plVar9 + 0x28))(plVar9);
              uStack_d0 = 0;
              piVar1 = (int *)(param_1 + 0x5b8);
              if ((*(int64_t *)(param_1 + 0x5d0) - *(int64_t *)(param_1 + 0x5c8) &
                  0xfffffffffffffffcU) == 0) {
                FUN_1804dc9e0(piVar1);
              }
              puVar6 = (uint *)(*(int64_t *)(param_1 + 0x5d0) + -4);
              uStack_3a8 = *puVar6;
              *(uint **)(param_1 + 0x5d0) = puVar6;
              iVar3 = *(int *)(param_1 + 0x5bc);
              if (*(int *)(param_1 + 0x5bc) <= (int)uStack_3a8) {
                iVar3 = uStack_3a8 + 1;
              }
              *(int *)(param_1 + 0x5bc) = iVar3;
              lVar13 = *(int64_t *)
                        (*(int64_t *)(param_1 + 0x5e8) + (int64_t)((int)uStack_3a8 >> 10) * 8);
              lVar18 = (int64_t)(int)(*(uint *)(param_1 + 0x608) & uStack_3a8);
              iVar3 = *piVar1;
              *piVar1 = iVar3 + 1;
              *(int *)(lVar13 + lVar18 * 0x28) = iVar3;
              *(uint *)(lVar13 + 4 + lVar18 * 0x28) = uStack_3a8;
              plStack_368 = (int64_t *)(lVar18 * 0x28 + 8 + lVar13);
              *plStack_368 = 0;
              plStack_368[2] = 0;
              plStack_368[3] = 0;
              plStack_368[1] = 0;
              plStack_368[2] = 0;
              *(int32_t *)(plStack_368 + 3) = 0;
              lVar13 = *(int64_t *)
                        (*(int64_t *)(param_1 + 0x5e8) + (int64_t)((int)uStack_3a8 >> 10) * 8);
              lVar18 = (int64_t)(int)(*(uint *)(param_1 + 0x608) & uStack_3a8);
              *(uint *)(lVar13 + 8 + lVar18 * 0x28) = param_3;
              *(int8_t *)(lVar13 + 0xc + lVar18 * 0x28) = uVar17;
              plStack_348 = *(int64_t **)(lVar13 + 0x10 + lVar18 * 0x28);
              *(uint64_t *)(lVar13 + 0x10 + lVar18 * 0x28) = 0;
              if (plStack_348 != (int64_t *)0x0) {
                (**(code **)(*plStack_348 + 0x38))();
              }
              plStack_340 = plVar9;
              (**(code **)(*plVar9 + 0x28))(plVar9);
              plStack_340 = *(int64_t **)(lVar13 + 0x18 + lVar18 * 0x28);
              *(int64_t **)(lVar13 + 0x18 + lVar18 * 0x28) = plVar9;
              if (plStack_340 != (int64_t *)0x0) {
                (**(code **)(*plStack_340 + 0x38))();
              }
              *(int32_t *)(lVar13 + 0x20 + lVar18 * 0x28) = 0;
              puStack_378 = (uint *)(int64_t)iVar4;
              lVar13 = *(int64_t *)(*(int64_t *)(param_1 + 11000) + (int64_t)puStack_378 * 8);
              lVar18 = (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_3) * 0xd8;
              puVar6 = *(uint **)(lVar13 + 0x78 + lVar18);
              if (puVar6 < *(uint **)(lVar13 + 0x80 + lVar18)) {
                *(uint **)(lVar13 + 0x78 + lVar18) = puVar6 + 1;
                *puVar6 = uStack_3a8;
              }
              else {
                puVar15 = *(uint **)(lVar13 + 0x70 + lVar18);
                lVar7 = (int64_t)puVar6 - (int64_t)puVar15 >> 2;
                if (lVar7 == 0) {
                  puStack_3a0 = (uint *)0x1;
LAB_1804cf4bf:
                  puStack_398 = (uint *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)puStack_3a0 * 4,
                                                      *(int8_t *)(lVar13 + 0x88 + lVar18));
                  puVar6 = *(uint **)(lVar13 + 0x78 + lVar18);
                  puVar15 = *(uint **)(lVar13 + 0x70 + lVar18);
                }
                else {
                  puStack_3a0 = (uint *)(lVar7 * 2);
                  if (puStack_3a0 != (uint *)0x0) goto LAB_1804cf4bf;
                  puStack_398 = (uint *)0x0;
                }
                if (puVar15 != puVar6) {
                    // WARNING: Subroutine does not return
                  memmove(puStack_398,puVar15,(int64_t)puVar6 - (int64_t)puVar15);
                }
                *puStack_398 = uStack_3a8;
                if (*(int64_t *)(lVar13 + 0x70 + lVar18) != 0) {
                    // WARNING: Subroutine does not return
                  CoreMemoryPoolInitializer();
                }
                *(uint **)(lVar13 + 0x70 + lVar18) = puStack_398;
                *(uint **)(lVar13 + 0x78 + lVar18) = puStack_398 + 1;
                *(uint **)(lVar13 + 0x80 + lVar18) = puStack_398 + (int64_t)puStack_3a0;
              }
              uStack_c0 = param_3;
              plStack_b8 = plVar9;
              (**(code **)(*plVar9 + 0x28))(plVar9);
              piVar1 = (int *)(param_1 + 0x560);
              if ((*(int64_t *)(param_1 + 0x578) - *(int64_t *)(param_1 + 0x570) &
                  0xfffffffffffffffcU) == 0) {
                FUN_1804dcc20(piVar1);
              }
              puVar6 = (uint *)(*(int64_t *)(param_1 + 0x578) + -4);
              uStack_3a8 = *puVar6;
              *(uint **)(param_1 + 0x578) = puVar6;
              iVar3 = *(int *)(param_1 + 0x564);
              if (*(int *)(param_1 + 0x564) <= (int)uStack_3a8) {
                iVar3 = uStack_3a8 + 1;
              }
              *(int *)(param_1 + 0x564) = iVar3;
              lVar13 = *(int64_t *)
                        (*(int64_t *)(param_1 + 0x590) + (int64_t)((int)uStack_3a8 >> 10) * 8);
              lVar18 = (int64_t)(int)(*(uint *)(param_1 + 0x5b0) & uStack_3a8);
              iVar3 = *piVar1;
              *piVar1 = iVar3 + 1;
              *(int *)(lVar13 + lVar18 * 0x18) = iVar3;
              *(uint *)(lVar13 + 4 + lVar18 * 0x18) = uStack_3a8;
              plStack_368 = (int64_t *)(lVar18 * 0x18 + 8 + lVar13);
              *plStack_368 = 0;
              plStack_368[1] = 0;
              lVar13 = *(int64_t *)
                        (*(int64_t *)(param_1 + 0x590) + (int64_t)((int)uStack_3a8 >> 10) * 8);
              lVar18 = (int64_t)(int)(*(uint *)(param_1 + 0x5b0) & uStack_3a8);
              *(uint *)(lVar13 + 8 + lVar18 * 0x18) = param_3;
              plStack_338 = plVar9;
              (**(code **)(*plVar9 + 0x28))(plVar9);
              plStack_338 = *(int64_t **)(lVar13 + 0x10 + lVar18 * 0x18);
              *(int64_t **)(lVar13 + 0x10 + lVar18 * 0x18) = plVar9;
              if (plStack_338 != (int64_t *)0x0) {
                (**(code **)(*plStack_338 + 0x38))();
              }
              lVar13 = *(int64_t *)(*(int64_t *)(param_1 + 11000) + (int64_t)puStack_378 * 8);
              lVar18 = (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_3) * 0xd8;
              puVar6 = *(uint **)(lVar13 + 0x58 + lVar18);
              if (puVar6 < *(uint **)(lVar13 + 0x60 + lVar18)) {
                *(uint **)(lVar13 + 0x58 + lVar18) = puVar6 + 1;
                *puVar6 = uStack_3a8;
              }
              else {
                puVar15 = *(uint **)(lVar13 + 0x50 + lVar18);
                lVar7 = (int64_t)puVar6 - (int64_t)puVar15 >> 2;
                if (lVar7 == 0) {
                  puStack_3a0 = (uint *)0x1;
LAB_1804cf694:
                  puStack_398 = (uint *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)puStack_3a0 * 4);
                  puVar6 = *(uint **)(lVar13 + 0x58 + lVar18);
                  puVar15 = *(uint **)(lVar13 + 0x50 + lVar18);
                }
                else {
                  puStack_3a0 = (uint *)(lVar7 * 2);
                  if (puStack_3a0 != (uint *)0x0) goto LAB_1804cf694;
                  puStack_398 = (uint *)0x0;
                }
                if (puVar15 != puVar6) {
                    // WARNING: Subroutine does not return
                  memmove(puStack_398,puVar15,(int64_t)puVar6 - (int64_t)puVar15);
                }
                *puStack_398 = uStack_3a8;
                if (*(int64_t *)(lVar13 + 0x50 + lVar18) != 0) {
                    // WARNING: Subroutine does not return
                  CoreMemoryPoolInitializer();
                }
                *(uint **)(lVar13 + 0x50 + lVar18) = puStack_398;
                *(uint **)(lVar13 + 0x58 + lVar18) = puStack_398 + 1;
                *(uint **)(lVar13 + 0x60 + lVar18) = puStack_398 + (int64_t)puStack_3a0;
              }
              iStack_3a4 = 0;
              puStack_3a0 = (uint *)(int64_t)(int)uStack_390;
              if (0 < (int64_t)puStack_3a0) {
                uStack_388 = 0x2c;
                puVar6 = (uint *)(param_1 + 0x100);
                do {
                  iVar3 = (int)plVar8[0xb] + -1;
                  if (iStack_3a4 < 0) {
                    iVar4 = 0;
                  }
                  else {
                    iVar4 = iStack_3a4;
                    if (iVar3 < iStack_3a4) {
                      iVar4 = iVar3;
                    }
                  }
                  uVar5 = 1 << ((byte)iVar4 & 0x1f);
                  iVar3 = 0;
                  lVar13 = plVar8[7];
                  uStack_3a8 = uVar5;
                  if (plVar8[8] - lVar13 >> 4 != 0) {
                    uStack_390 = 0;
                    puStack_398 = puVar6;
                    do {
                      uVar2 = uStack_390;
                      if ((*(uint *)(lVar13 + 8 + uStack_390) & uVar5) != 0) {
                        if (*(code **)(*plVar8 + 0x158) == (code *)&unknown_var_2528_ptr) {
                          plVar9 = plVar8 + 0x66;
                        }
                        else {
                          plVar9 = (int64_t *)(**(code **)(*plVar8 + 0x158))(plVar8);
                        }
                        plVar10 = *(int64_t **)(lVar13 + uVar2);
                        uStack_234 = (int8_t)
                                     ((uint)((int)lStack_380 - *(int *)(param_2 + 0x18)) >> 8);
                        uStack_233 = (int8_t)plVar8[0x76];
                        uStack_238 = param_3;
                        plStack_230 = plVar10;
                        if (plVar10 != (int64_t *)0x0) {
                          (**(code **)(*plVar10 + 0x28))(plVar10);
                        }
                        plStack_228 = plVar8;
                        (**(code **)(*plVar8 + 0x28))(plVar8);
                        uStack_220 = (**(code **)(*plVar8 + 0x98))(plVar8);
                        lStack_21c = *plVar9;
                        lStack_214 = plVar9[1];
                        lStack_20c = plVar9[2];
                        lStack_204 = plVar9[3];
                        lStack_1fc = plVar9[4];
                        lStack_1f4 = plVar9[5];
                        uStack_1ec = (int32_t)plVar9[6];
                        uStack_1e8 = *(int32_t *)((int64_t)plVar9 + 0x34);
                        uStack_1e4 = (int32_t)plVar9[7];
                        uStack_1e0 = *(int32_t *)((int64_t)plVar9 + 0x3c);
                        uStack_1dc = (int32_t)plVar8[0xd];
                        if (*(code **)(*plVar8 + 0x198) == (code *)&unknown_var_2544_ptr) {
                          lVar13 = (int64_t)plVar8 + 0x214;
                        }
                        else {
                          lVar13 = (**(code **)(*plVar8 + 0x198))(plVar8);
                        }
                        puVar6 = puStack_398;
                        uStack_1d8 = *(int32_t *)(lVar13 + 0x30);
                        fVar19 = *(float *)((int64_t)plVar10 + 0x28c) -
                                 *(float *)((int64_t)plVar10 + 0x27c);
                        fStack_1d4 = *(float *)((int64_t)plVar10 + 0x284) -
                                     *(float *)((int64_t)plVar10 + 0x274);
                        if (*(float *)(plVar10 + 0x51) - *(float *)(plVar10 + 0x4f) <= fStack_1d4) {
                          fStack_1d4 = *(float *)(plVar10 + 0x51) - *(float *)(plVar10 + 0x4f);
                        }
                        if (fVar19 <= fStack_1d4) {
                          fStack_1d4 = fVar19;
                        }
                        uVar5 = *(uint *)(*(int64_t *)
                                           (*(int64_t *)(param_1 + 11000) +
                                           (int64_t)puStack_378 * 8) +
                                          (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_3) *
                                          0xd8 + uStack_388);
                        lVar13 = (int64_t)(int)(*puStack_398 & uVar5) * 0x68 +
                                 *(int64_t *)
                                  (*(int64_t *)(puStack_398 + -8) +
                                  (int64_t)((int)uVar5 >> 10) * 8) + 0x28;
                        uVar2 = *(uint64_t *)(lVar13 + 8);
                        if (uVar2 < *(uint64_t *)(lVar13 + 0x10)) {
                          *(uint64_t *)(lVar13 + 8) = uVar2 + 0x68;
                          FUN_1804dde40(uVar2);
                          plVar9 = plVar8;
                        }
                        else {
                          FUN_1804de240(lVar13,&uStack_238);
                          plVar10 = plStack_230;
                          plVar9 = plStack_228;
                        }
                        if (plVar9 != (int64_t *)0x0) {
                          (**(code **)(*plVar9 + 0x38))(plVar9);
                        }
                        uVar5 = uStack_3a8;
                        if (plVar10 != (int64_t *)0x0) {
                          (**(code **)(*plVar10 + 0x38))(plVar10);
                          uVar5 = uStack_3a8;
                        }
                      }
                      iVar3 = iVar3 + 1;
                      uStack_390 = uStack_390 + 0x10;
                      lVar13 = plVar8[7];
                    } while ((uint64_t)(int64_t)iVar3 < (uint64_t)(plVar8[8] - lVar13 >> 4));
                  }
                  iStack_3a4 = iStack_3a4 + 1;
                  puVar6 = puVar6 + 0x16;
                  uStack_388 = uStack_388 + 4;
                  puStack_3a0 = (uint *)((int64_t)puStack_3a0 + -1);
                } while (puStack_3a0 != (uint *)0x0);
                puStack_3a0 = (uint *)0x0;
                plVar9 = plStack_370;
                puStack_398 = puVar6;
              }
              (**(code **)(*plVar9 + 0x38))(plVar9);
              (**(code **)(*plVar9 + 0x38))(plVar9);
            }
            else {
              iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
              if (iVar3 == 2) {
                if (*(char *)((int64_t)plVar9 + 0xa9) != '\0') {
                  uStack_390 = uStack_390 & 0xffffffff00000000;
                  lVar18 = plVar9[6];
                  if (plVar9[7] - lVar18 >> 3 != 0) {
                    plStack_370 = (int64_t *)0x0;
                    do {
                      plVar8 = *(int64_t **)((int64_t)plStack_370 + lVar18);
                      plStack_368 = plVar8;
                      iVar3 = (**(code **)(*plVar8 + 0x98))(plVar8);
                      if (iVar3 == 0) {
                        iVar3 = param_4;
                        if ((*(byte *)((int64_t)plVar8 + 0x3b4) & 1) != 0) {
                          iVar3 = 8;
                        }
                        if ((void *)*plVar9 != &unknown_var_7336_ptr) {
                          (**(code **)((void *)*plVar9 + 0x158))(plVar9);
                        }
                        if (*(code **)(*plVar8 + 0x158) != (code *)&unknown_var_2528_ptr) {
                          (**(code **)(*plVar8 + 0x158))();
                        }
                        iVar14 = 0;
                        uStack_388 = uStack_388 & 0xffffffff00000000;
                        puStack_398 = (uint *)(int64_t)iVar3;
                        if (0 < iVar3) {
                          puStack_3a0 = (uint *)0x2c;
                          puVar6 = (uint *)(param_1 + 0x100);
                          do {
                            iVar3 = (int)plVar8[0xb] + -1;
                            if (iVar14 < 0) {
                              bVar11 = 0;
                            }
                            else {
                              bVar11 = (byte)iVar14;
                              if (iVar3 < iVar14) {
                                bVar11 = (byte)iVar3;
                              }
                            }
                            uVar5 = 1 << (bVar11 & 0x1f);
                            iStack_3a4 = 0;
                            lVar18 = plVar8[7];
                            uStack_3a8 = uVar5;
                            if (plVar8[8] - lVar18 >> 4 != 0) {
                              lVar7 = 0;
                              puStack_378 = puVar6;
                              do {
                                if ((*(uint *)(lVar7 + 8 + lVar18) & uVar5) != 0) {
                                  if (*(code **)(*plVar8 + 0x158) == (code *)&unknown_var_2528_ptr) {
                                    plVar10 = plVar8 + 0x66;
                                  }
                                  else {
                                    plVar10 = (int64_t *)(**(code **)(*plVar8 + 0x158))(plVar8);
                                  }
                                  plVar16 = *(int64_t **)(lVar7 + lVar18);
                                  uStack_1c4 = (int8_t)
                                               ((uint)((int)lVar13 - *(int *)(param_2 + 0x18)) >> 8)
                                  ;
                                  uStack_1c3 = (int8_t)plVar8[0x76];
                                  uStack_1c8 = param_3;
                                  plStack_1c0 = plVar16;
                                  if (plVar16 != (int64_t *)0x0) {
                                    (**(code **)(*plVar16 + 0x28))(plVar16);
                                  }
                                  plStack_1b8 = plVar9;
                                  (**(code **)(*plVar9 + 0x28))(plVar9);
                                  uStack_1b0 = (**(code **)(*plVar9 + 0x98))(plVar9);
                                  lStack_1ac = *plVar10;
                                  lStack_1a4 = plVar10[1];
                                  lStack_19c = plVar10[2];
                                  lStack_194 = plVar10[3];
                                  lStack_18c = plVar10[4];
                                  lStack_184 = plVar10[5];
                                  uStack_17c = (int32_t)plVar10[6];
                                  uStack_178 = *(int32_t *)((int64_t)plVar10 + 0x34);
                                  uStack_174 = (int32_t)plVar10[7];
                                  uStack_170 = *(int32_t *)((int64_t)plVar10 + 0x3c);
                                  uStack_16c = (int32_t)plVar8[0xd];
                                  if (*(code **)(*plVar8 + 0x198) == (code *)&unknown_var_2544_ptr) {
                                    lVar13 = (int64_t)plVar8 + 0x214;
                                  }
                                  else {
                                    lVar13 = (**(code **)(*plVar8 + 0x198))(plVar8);
                                  }
                                  puVar6 = puStack_378;
                                  uStack_168 = *(int32_t *)(lVar13 + 0x30);
                                  fVar19 = *(float *)((int64_t)plVar16 + 0x28c) -
                                           *(float *)((int64_t)plVar16 + 0x27c);
                                  fStack_164 = *(float *)((int64_t)plVar16 + 0x284) -
                                               *(float *)((int64_t)plVar16 + 0x274);
                                  if (*(float *)(plVar16 + 0x51) - *(float *)(plVar16 + 0x4f) <=
                                      fStack_164) {
                                    fStack_164 = *(float *)(plVar16 + 0x51) -
                                                 *(float *)(plVar16 + 0x4f);
                                  }
                                  if (fVar19 <= fStack_164) {
                                    fStack_164 = fVar19;
                                  }
                                  uVar5 = *(uint *)((int64_t)
                                                    (int)(*(uint *)(param_1 + 0x2b18) & param_3) *
                                                    0xd8 + *(int64_t *)
                                                            (*(int64_t *)(param_1 + 11000) +
                                                            (int64_t)iVar4 * 8) +
                                                   (int64_t)puStack_3a0);
                                  lVar13 = (int64_t)(int)(uVar5 & *puStack_378) * 0x68 +
                                           *(int64_t *)
                                            (*(int64_t *)(puStack_378 + -8) +
                                            (int64_t)((int)uVar5 >> 10) * 8) + 0x28;
                                  uVar2 = *(uint64_t *)(lVar13 + 8);
                                  if (uVar2 < *(uint64_t *)(lVar13 + 0x10)) {
                                    *(uint64_t *)(lVar13 + 8) = uVar2 + 0x68;
                                    FUN_1804dde40(uVar2);
                                    plVar10 = plVar9;
                                  }
                                  else {
                                    FUN_1804de240(lVar13,&uStack_1c8);
                                    plVar16 = plStack_1c0;
                                    plVar10 = plStack_1b8;
                                  }
                                  if (plVar10 != (int64_t *)0x0) {
                                    (**(code **)(*plVar10 + 0x38))(plVar10);
                                  }
                                  lVar13 = lStack_380;
                                  uVar5 = uStack_3a8;
                                  if (plVar16 != (int64_t *)0x0) {
                                    (**(code **)(*plVar16 + 0x38))(plVar16);
                                    lVar13 = lStack_380;
                                    uVar5 = uStack_3a8;
                                  }
                                }
                                iStack_3a4 = iStack_3a4 + 1;
                                lVar7 = lVar7 + 0x10;
                                lVar18 = plVar8[7];
                              } while ((uint64_t)(int64_t)iStack_3a4 <
                                       (uint64_t)(plVar8[8] - lVar18 >> 4));
                            }
                            iVar14 = (uint)uStack_388 + 1;
                            uStack_388 = CONCAT44(uStack_388._4_4_,iVar14);
                            puVar6 = puVar6 + 0x16;
                            puStack_3a0 = puStack_3a0 + 1;
                            puStack_398 = (uint *)((int64_t)puStack_398 + -1);
                          } while (puStack_398 != (uint *)0x0);
                          puStack_398 = (uint *)0x0;
                          puStack_378 = puVar6;
                        }
                      }
                      else {
                        iVar3 = (**(code **)(*plVar8 + 0x98))(plVar8);
                        if (iVar3 == 3) {
                          plVar10 = (int64_t *)plVar8[9];
                          if ((void *)*plVar9 != &unknown_var_7336_ptr) {
                            (**(code **)((void *)*plVar9 + 0x158))(plVar9);
                          }
                          if (*(code **)(*plVar10 + 0x158) != (code *)&unknown_var_2528_ptr) {
                            (**(code **)(*plVar10 + 0x158))(plVar10);
                          }
                          uStack_30c = (int8_t)
                                       ((uint)((int)lStack_380 - *(int *)(param_2 + 0x18)) >> 8);
                          uStack_310 = param_3;
                          plStack_308 = plVar9;
                          (**(code **)(*plVar9 + 0x28))(plVar9);
                          plStack_300 = plVar8;
                          (**(code **)(*plVar8 + 0x28))(plVar8);
                          uStack_2f8 = 0;
                          uStack_3a8 = FUN_1804dbf30(param_1 + 0x5b8);
                          FUN_1804d0560((int64_t)(int)(*(uint *)(param_1 + 0x608) & uStack_3a8) *
                                        0x28 + *(int64_t *)
                                                (*(int64_t *)(param_1 + 0x5e8) +
                                                (int64_t)((int)uStack_3a8 >> 10) * 8) + 8,
                                        &uStack_310);
                          puStack_378 = (uint *)(int64_t)iVar4;
                          uStack_328 = (uint64_t)(int)param_3;
                          FUN_1800571e0((int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_3) *
                                        0xd8 + *(int64_t *)
                                                (*(int64_t *)(param_1 + 11000) +
                                                (int64_t)puStack_378 * 8) + 0x70,&uStack_3a8);
                          uStack_b0 = param_3;
                          plStack_a8 = plVar8;
                          (**(code **)(*plVar8 + 0x28))(plVar8);
                          uStack_3a8 = FUN_1804dbfe0(param_1 + 0x560);
                          lVar13 = *(int64_t *)
                                    (*(int64_t *)(param_1 + 0x590) +
                                    (int64_t)((int)uStack_3a8 >> 10) * 8);
                          lVar18 = (int64_t)(int)(*(uint *)(param_1 + 0x5b0) & uStack_3a8);
                          *(uint *)(lVar13 + 8 + lVar18 * 0x18) = param_3;
                          plStack_330 = plVar8;
                          (**(code **)(*plVar8 + 0x28))(plVar8);
                          plStack_330 = *(int64_t **)(lVar13 + 0x10 + lVar18 * 0x18);
                          *(int64_t **)(lVar13 + 0x10 + lVar18 * 0x18) = plVar8;
                          if (plStack_330 != (int64_t *)0x0) {
                            (**(code **)(*plStack_330 + 0x38))();
                          }
                          FUN_1800571e0((int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_3) *
                                        0xd8 + *(int64_t *)
                                                (*(int64_t *)(param_1 + 11000) +
                                                (int64_t)puStack_378 * 8) + 0x50);
                          iVar3 = param_4;
                          if ((*(byte *)((int64_t)plVar10 + 0x3b4) & 1) != 0) {
                            iVar3 = 8;
                          }
                          iVar14 = 0;
                          uStack_388 = uStack_388 & 0xffffffff00000000;
                          lStack_360 = (int64_t)iVar3;
                          if (0 < iVar3) {
                            puStack_3a0 = (uint *)0x2c;
                            puVar6 = (uint *)(param_1 + 0x100);
                            do {
                              iVar3 = (int)plVar10[0xb] + -1;
                              if (iVar14 < 0) {
                                iVar14 = 0;
                              }
                              else if (iVar3 < iVar14) {
                                iVar14 = iVar3;
                              }
                              uVar5 = 1 << ((byte)iVar14 & 0x1f);
                              iStack_3a4 = 0;
                              lVar13 = plVar10[7];
                              uStack_3a8 = uVar5;
                              if (plVar10[8] - lVar13 >> 4 != 0) {
                                lVar18 = 0;
                                puStack_398 = puVar6;
                                do {
                                  if ((*(uint *)(lVar13 + 8 + lVar18) & uVar5) != 0) {
                                    if (*(code **)(*plVar10 + 0x158) == (code *)&unknown_var_2528_ptr) {
                                      plVar8 = plVar10 + 0x66;
                                    }
                                    else {
                                      plVar8 = (int64_t *)(**(code **)(*plVar10 + 0x158))(plVar10);
                                    }
                                    plVar16 = *(int64_t **)(lVar13 + lVar18);
                                    uStack_154 = (int8_t)
                                                 ((uint)((int)lStack_380 - *(int *)(param_2 + 0x18))
                                                 >> 8);
                                    uStack_153 = (int8_t)plVar10[0x76];
                                    uStack_158 = param_3;
                                    plStack_150 = plVar16;
                                    if (plVar16 != (int64_t *)0x0) {
                                      (**(code **)(*plVar16 + 0x28))(plVar16);
                                    }
                                    plStack_148 = plVar9;
                                    (**(code **)(*plVar9 + 0x28))(plVar9);
                                    uStack_140 = (**(code **)(*plVar9 + 0x98))(plVar9);
                                    lStack_13c = *plVar8;
                                    lStack_134 = plVar8[1];
                                    lStack_12c = plVar8[2];
                                    lStack_124 = plVar8[3];
                                    lStack_11c = plVar8[4];
                                    lStack_114 = plVar8[5];
                                    uStack_10c = (int32_t)plVar8[6];
                                    uStack_108 = *(int32_t *)((int64_t)plVar8 + 0x34);
                                    uStack_104 = (int32_t)plVar8[7];
                                    uStack_100 = *(int32_t *)((int64_t)plVar8 + 0x3c);
                                    uStack_fc = (int32_t)plVar10[0xd];
                                    if (*(code **)(*plVar10 + 0x198) == (code *)&unknown_var_2544_ptr) {
                                      lVar13 = (int64_t)plVar10 + 0x214;
                                    }
                                    else {
                                      lVar13 = (**(code **)(*plVar10 + 0x198))(plVar10);
                                    }
                                    puVar6 = puStack_398;
                                    uStack_f8 = *(int32_t *)(lVar13 + 0x30);
                                    fVar19 = *(float *)((int64_t)plVar16 + 0x28c) -
                                             *(float *)((int64_t)plVar16 + 0x27c);
                                    fStack_f4 = *(float *)((int64_t)plVar16 + 0x284) -
                                                *(float *)((int64_t)plVar16 + 0x274);
                                    if (*(float *)(plVar16 + 0x51) - *(float *)(plVar16 + 0x4f) <=
                                        fStack_f4) {
                                      fStack_f4 = *(float *)(plVar16 + 0x51) -
                                                  *(float *)(plVar16 + 0x4f);
                                    }
                                    if (fVar19 <= fStack_f4) {
                                      fStack_f4 = fVar19;
                                    }
                                    uVar5 = *(uint *)(*(int64_t *)
                                                       (*(int64_t *)(param_1 + 11000) +
                                                       (int64_t)puStack_378 * 8) +
                                                      ((int64_t)*(int *)(param_1 + 0x2b18) &
                                                      uStack_328) * 0xd8 + (int64_t)puStack_3a0);
                                    lVar13 = (int64_t)(int)(uVar5 & *puStack_398) * 0x68 +
                                             *(int64_t *)
                                              (*(int64_t *)(puStack_398 + -8) +
                                              (int64_t)((int)uVar5 >> 10) * 8) + 0x28;
                                    uVar2 = *(uint64_t *)(lVar13 + 8);
                                    if (uVar2 < *(uint64_t *)(lVar13 + 0x10)) {
                                      *(uint64_t *)(lVar13 + 8) = uVar2 + 0x68;
                                      FUN_1804dde40(uVar2);
                                      plVar8 = plVar9;
                                    }
                                    else {
                                      FUN_1804de240(lVar13,&uStack_158);
                                      plVar16 = plStack_150;
                                      plVar8 = plStack_148;
                                    }
                                    if (plVar8 != (int64_t *)0x0) {
                                      (**(code **)(*plVar8 + 0x38))(plVar8);
                                    }
                                    uVar5 = uStack_3a8;
                                    if (plVar16 != (int64_t *)0x0) {
                                      (**(code **)(*plVar16 + 0x38))(plVar16);
                                      uVar5 = uStack_3a8;
                                    }
                                  }
                                  iStack_3a4 = iStack_3a4 + 1;
                                  lVar18 = lVar18 + 0x10;
                                  lVar13 = plVar10[7];
                                } while ((uint64_t)(int64_t)iStack_3a4 <
                                         (uint64_t)(plVar10[8] - lVar13 >> 4));
                              }
                              iVar14 = (uint)uStack_388 + 1;
                              uStack_388 = CONCAT44(uStack_388._4_4_,iVar14);
                              puVar6 = puVar6 + 0x16;
                              puStack_3a0 = puStack_3a0 + 1;
                              lStack_360 = lStack_360 + -1;
                            } while (lStack_360 != 0);
                            lStack_360 = 0;
                            plVar8 = plStack_368;
                            puStack_398 = puVar6;
                          }
                          (**(code **)(*plVar8 + 0x38))(plVar8);
                          (**(code **)(*plVar8 + 0x38))(plVar8);
                          (**(code **)(*plVar9 + 0x38))(plVar9);
                        }
                        else {
                          iVar3 = (**(code **)(*plVar8 + 0x98))(plVar8);
                          if ((iVar3 != 1) &&
                             (iVar3 = (**(code **)(*plVar8 + 0x98))(plVar8), iVar3 == 4)) {
                            uStack_2ec = (int8_t)
                                         ((uint)((int)lVar13 - *(int *)(param_2 + 0x18)) >> 8);
                            uStack_2f0 = param_3;
                            plStack_2e8 = plVar9;
                            (**(code **)(*plVar9 + 0x28))(plVar9);
                            plStack_2e0 = plVar8;
                            (**(code **)(*plVar8 + 0x28))(plVar8);
                            uStack_2d8 = 0;
                            uStack_3a8 = FUN_1804dbf30(param_1 + 0x5b8);
                            FUN_1804d0560((int64_t)(int)(*(uint *)(param_1 + 0x608) & uStack_3a8) *
                                          0x28 + *(int64_t *)
                                                  (*(int64_t *)(param_1 + 0x5e8) +
                                                  (int64_t)((int)uStack_3a8 >> 10) * 8) + 8,
                                          &uStack_2f0);
                            FUN_1800571e0((int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_3) *
                                          0xd8 + *(int64_t *)
                                                  (*(int64_t *)(param_1 + 11000) +
                                                  (int64_t)iVar4 * 8) + 0x70,&uStack_3a8);
                            if (plVar8 != (int64_t *)0x0) {
                              (**(code **)(*plVar8 + 0x38))(plVar8);
                            }
                            (**(code **)(*plVar9 + 0x38))(plVar9);
                          }
                        }
                      }
                      iVar3 = (int)uStack_390 + 1;
                      uStack_390 = CONCAT44(uStack_390._4_4_,iVar3);
                      plStack_370 = (int64_t *)((int64_t)plStack_370 + 8);
                      lVar18 = plVar9[6];
                      lVar13 = lStack_380;
                    } while ((uint64_t)(int64_t)iVar3 < (uint64_t)(plVar9[7] - lVar18 >> 3));
                  }
                }
              }
              else {
                iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
                if (iVar3 == 4) {
                  uStack_2cc = (int8_t)((uint)(iVar14 - *(int *)(param_2 + 0x18)) >> 8);
                  uStack_2c8 = 0;
                  uStack_2d0 = param_3;
                  plStack_2c0 = plVar9;
                  (**(code **)(*plVar9 + 0x28))(plVar9);
                  uStack_2b8 = 0;
                  uVar5 = FUN_1804dbf30(param_1 + 0x5b8);
                  uStack_390 = CONCAT44(uStack_390._4_4_,uVar5);
                  FUN_1804d0560((int64_t)(int)(*(uint *)(param_1 + 0x608) & uVar5) * 0x28 +
                                *(int64_t *)
                                 (*(int64_t *)(param_1 + 0x5e8) + (int64_t)((int)uVar5 >> 10) * 8)
                                + 8,&uStack_2d0);
                  FUN_1800571e0((int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_3) * 0xd8 +
                                *(int64_t *)(*(int64_t *)(param_1 + 11000) + (int64_t)iVar4 * 8)
                                + 0x70);
                  if (plVar9 != (int64_t *)0x0) {
                    (**(code **)(*plVar9 + 0x38))(plVar9);
                  }
                }
                else {
                  (**(code **)(*plVar9 + 0x98))(plVar9);
                }
              }
            }
          }
          lStack_358 = lStack_358 + 1;
        } while (lStack_358 < lStack_320);
      }
      lStack_350 = lStack_350 + 1;
    } while (lStack_350 < lStack_318);
  }
  return;
}



int32_t * FUN_1804d0560(int32_t *param_1,int32_t *param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  *param_1 = *param_2;
  *(int8_t *)(param_1 + 1) = *(int8_t *)(param_2 + 1);
  plVar1 = *(int64_t **)(param_2 + 2);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 2);
  *(int64_t **)(param_1 + 2) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_2 + 4);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 4);
  *(int64_t **)(param_1 + 4) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  param_1[6] = param_2[6];
  return param_1;
}








