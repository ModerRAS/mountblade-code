#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// $fun 的语义化别名
#define $alias_name $fun


// 03_rendering_part178_sub002_sub002.c - 1 个函数

// 函数: void FUN_1803759b8(uint64_t param_1,uint param_2)
void FUN_1803759b8(uint64_t param_1,uint param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  int iVar6;
  int64_t in_RAX;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  int64_t *plVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int32_t *puVar14;
  int *piVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  int64_t lVar18;
  uint64_t uVar19;
  int32_t *puVar20;
  bool bVar21;
  int unaff_EBX;
  int64_t unaff_RBP;
  int iVar22;
  int64_t unaff_RSI;
  int unaff_EDI;
  int64_t lVar23;
  int iVar24;
  uint uVar25;
  uint *puVar26;
  int64_t lVar27;
  int64_t unaff_R13;
  int64_t lVar28;
  int64_t unaff_R14;
  int64_t unaff_R15;
  int64_t lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float unaff_XMM10_Da;
  float fVar36;
  float unaff_XMM15_Da;
  bool bStack0000000000000040;
  char cStack0000000000000041;
  int iStack0000000000000044;
  int iStack0000000000000048;
  uint64_t uStack0000000000000050;
  int64_t in_stack_00000058;
  int64_t lStack0000000000000060;
  int64_t lStack0000000000000068;
  float fStack0000000000000070;
  char cStack0000000000000074;
  
  fVar33 = *(float *)(unaff_RBP + 0x158);
  fVar35 = *(float *)(unaff_RBP + 0x154);
  lStack0000000000000060 = 0;
  do {
    puVar26 = *(uint **)(in_RAX + 0x118 + lStack0000000000000060 * 8);
    *(uint **)(unaff_RBP + -0x78) = puVar26;
    lVar28 = lStack0000000000000060;
    if ((((*puVar26 & *(uint *)(unaff_RBP + -0x68)) != 0) && (puVar26[0x5e] != 3)) &&
       ((puVar26[1] >> 0x18 & 1) == 0)) {
      lVar11 = *(int64_t *)(puVar26 + 0xd60);
      if (((lVar11 == 0) || (*(int *)(lVar11 + 0x110) == 0)) ||
         ((*(uint **)(lVar11 + 0x118) != puVar26 ||
          (cStack0000000000000041 = '\x01', (puVar26[0x6f6] & 0x20) == 0)))) {
        cStack0000000000000041 = '\0';
      }
      iStack0000000000000048 = 0;
      if (0 < unaff_EDI) {
        do {
          iStack0000000000000044 = 0;
          iVar6 = iStack0000000000000048;
          if (0 < unaff_EBX) {
            do {
              lVar11 = *(int64_t *)(unaff_R14 + 0x138);
              lVar23 = (int64_t)(*(int *)(unaff_R14 + 0x60) * iVar6 + iStack0000000000000044) *
                       0x130;
              lVar18 = lVar11 + 8 + lVar23;
              lVar27 = lVar11 + 0xc0 + lVar23;
              fVar32 = *(float *)(lVar18 + 0x20) - *(float *)(unaff_RBP + 0x150);
              fVar30 = *(float *)(lVar18 + 0x24) - fVar35;
              fVar31 = *(float *)(lVar18 + 0x28) - fVar33;
              if (*(int *)(unaff_R13 + 0x60) < 0) {
                fVar36 = 5.0;
              }
              else {
                fVar36 = 1.0;
              }
              fVar34 = 1.0;
              if ((((puVar26[1] & 0x8000) == 0) && ((*puVar26 & 1) == 1)) &&
                 (*(int64_t *)(lVar23 + 0x118 + lVar11) != 0)) {
                bVar21 = true;
              }
              else {
                bVar21 = false;
              }
              if (*(float *)(lVar27 + 0x30) != 0.0) {
                if (cStack0000000000000041 == '\0') {
                  iVar6 = FUN_18063c930(puVar26 + 0xc);
                }
                else {
                  iVar6 = FUN_1801b8ce0(*(int64_t *)(unaff_R15 + 0x2148) + 0x2998,puVar26 + 0xc,
                                        lVar18,lVar27,&system_data_0300);
                }
                if (iVar6 != 0) {
                  if (bVar21) {
                    if ((cStack0000000000000074 != '\0') ||
                       (fVar32 * fVar32 + fVar30 * fVar30 + fVar31 * fVar31 <=
                        fStack0000000000000070)) {
                      lVar27 = (int64_t)
                               (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                               iStack0000000000000044) * 0x130;
                      lVar18 = *(int64_t *)(unaff_R14 + 0x138);
                      if (*(int *)(lVar27 + 0xf4 + lVar18) == 2) {
                        if ((*(uint *)(unaff_R13 + 0x60) & 0x800000) == 0) {
                          *(int32_t *)(lVar27 + 0xf4 + lVar18) = 1;
                          *(float *)((int64_t)
                                     (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                                     iStack0000000000000044) * 0x130 + 0x128 +
                                    *(int64_t *)(unaff_R14 + 0x138)) = unaff_XMM10_Da;
                        }
                        else {
                          *(int32_t *)(lVar27 + 0xf4 + lVar18) = 0;
                        }
                      }
                      lVar27 = (int64_t)
                               (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                               iStack0000000000000044) * 0x130;
                      lVar18 = *(int64_t *)(unaff_R14 + 0x138);
                      if (*(int *)(lVar27 + 0xf4 + lVar18) == 1) {
                        fVar30 = (unaff_XMM10_Da - *(float *)(lVar27 + 0x128 + lVar18)) * fVar36;
                        if (fVar30 <= 0.001) {
                          fVar30 = 0.001;
                        }
                        fVar30 = -fVar30;
                        bVar21 = fVar30 < -1.0;
                        if (bVar21) {
                          fVar30 = -1.0;
                          *(int32_t *)(lVar27 + 0xf4 + lVar18) = 0;
                        }
                        bStack0000000000000040 = !bVar21;
                        for (lVar18 = *(int64_t *)(lVar23 + 0x100 + lVar11);
                            lVar18 != lVar11 + 0xf8 + lVar23; lVar18 = func_0x00018066bd70(lVar18))
                        {
                          lVar27 = FUN_18046c710(*(uint64_t *)(unaff_RBP + 0x2a8),
                                                 *(uint64_t *)(lVar18 + 0x20));
                          lVar27 = *(int64_t *)(lVar27 + 0x18);
                          lVar8 = ((int64_t)*(int *)(unaff_R15 + 0x2140) * 0x20 + lVar28) * 0x100;
                          iVar6 = (int)(*(int64_t *)(lVar18 + 0x30) - *(int64_t *)(lVar18 + 0x28)
                                       >> 5);
                          lVar7 = (int64_t)iVar6;
                          if (0 < iVar6) {
                            lVar28 = 0;
                            do {
                              puVar16 = *(uint64_t **)(lVar8 + 0x18 + lVar27);
                              puVar14 = (int32_t *)(*(int64_t *)(lVar18 + 0x28) + 0x10 + lVar28)
                              ;
                              uVar1 = puVar14[1];
                              uVar2 = puVar14[2];
                              uVar3 = puVar14[3];
                              puVar17 = (uint64_t *)(*(int64_t *)(lVar18 + 0x28) + lVar28);
                              uVar13 = *puVar17;
                              uVar12 = puVar17[1];
                              *(int32_t *)(unaff_RBP + 0x38) = *puVar14;
                              *(int32_t *)(unaff_RBP + 0x3c) = uVar1;
                              *(int32_t *)(unaff_RBP + 0x40) = uVar2;
                              *(int32_t *)(unaff_RBP + 0x44) = uVar3;
                              *(float *)(unaff_RBP + 0x44) = fVar30;
                              if (puVar16 < *(uint64_t **)(lVar8 + 0x20 + lVar27)) {
                                uVar1 = *(int32_t *)(unaff_RBP + 0x38);
                                uVar2 = *(int32_t *)(unaff_RBP + 0x3c);
                                uVar3 = *(int32_t *)(unaff_RBP + 0x40);
                                uVar4 = *(int32_t *)(unaff_RBP + 0x44);
                                *(uint64_t **)(lVar8 + 0x18 + lVar27) = puVar16 + 4;
                                *puVar16 = uVar13;
                                puVar16[1] = uVar12;
                                *(int32_t *)(puVar16 + 2) = uVar1;
                                *(int32_t *)((int64_t)puVar16 + 0x14) = uVar2;
                                *(int32_t *)(puVar16 + 3) = uVar3;
                                *(int32_t *)((int64_t)puVar16 + 0x1c) = uVar4;
                              }
                              else {
                                puVar17 = *(uint64_t **)(lVar8 + 0x10 + lVar27);
                                lVar29 = (int64_t)puVar16 - (int64_t)puVar17 >> 5;
                                if (lVar29 == 0) {
                                  lVar29 = 1;
LAB_1803760d1:
                                  puVar9 = (uint64_t *)
                                           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar29 << 5,
                                                         *(int8_t *)(lVar8 + 0x28 + lVar27));
                                  puVar17 = *(uint64_t **)(lVar8 + 0x10 + lVar27);
                                  puVar16 = *(uint64_t **)(lVar8 + 0x18 + lVar27);
                                }
                                else {
                                  lVar29 = lVar29 * 2;
                                  if (lVar29 != 0) goto LAB_1803760d1;
                                  puVar9 = (uint64_t *)0x0;
                                }
                                if (puVar17 != puVar16) {
                    // WARNING: Subroutine does not return
                                  memmove(puVar9,puVar17,(int64_t)puVar16 - (int64_t)puVar17);
                                }
                                uVar1 = *(int32_t *)(unaff_RBP + 0x38);
                                uVar2 = *(int32_t *)(unaff_RBP + 0x3c);
                                uVar3 = *(int32_t *)(unaff_RBP + 0x40);
                                uVar4 = *(int32_t *)(unaff_RBP + 0x44);
                                *puVar9 = uVar13;
                                puVar9[1] = uVar12;
                                *(int32_t *)(puVar9 + 2) = uVar1;
                                *(int32_t *)((int64_t)puVar9 + 0x14) = uVar2;
                                *(int32_t *)(puVar9 + 3) = uVar3;
                                *(int32_t *)((int64_t)puVar9 + 0x1c) = uVar4;
                                if (*(int64_t *)(lVar8 + 0x10 + lVar27) != 0) {
                    // WARNING: Subroutine does not return
                                  CoreEngineMemoryPoolCleaner();
                                }
                                *(uint64_t **)(lVar8 + 0x10 + lVar27) = puVar9;
                                *(uint64_t **)(lVar8 + 0x20 + lVar27) = puVar9 + lVar29 * 4;
                                *(uint64_t **)(lVar8 + 0x18 + lVar27) = puVar9 + 4;
                              }
                              lVar28 = lVar28 + 0x20;
                              lVar7 = lVar7 + -1;
                            } while (lVar7 != 0);
                            unaff_R15 = *(int64_t *)(unaff_RBP + 0x290);
                            lVar28 = lStack0000000000000060;
                            unaff_R13 = in_stack_00000058;
                          }
                        }
                        if (!bVar21) goto LAB_18037619a;
                      }
                    }
                    else {
                      lVar27 = (int64_t)
                               (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                               iStack0000000000000044) * 0x130;
                      lVar18 = *(int64_t *)(unaff_R14 + 0x138);
                      if (*(int *)(lVar27 + 0xf4 + lVar18) == 0) {
                        if ((*(uint *)(unaff_R13 + 0x60) & 0x800000) == 0) {
                          *(int32_t *)(lVar27 + 0xf4 + lVar18) = 1;
                          *(float *)((int64_t)
                                     (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                                     iStack0000000000000044) * 0x130 + 0x128 +
                                    *(int64_t *)(unaff_R14 + 0x138)) = unaff_XMM10_Da;
                        }
                        else {
                          *(int32_t *)(lVar27 + 0xf4 + lVar18) = 2;
                        }
                      }
                      bStack0000000000000040 = false;
                      lVar27 = (int64_t)
                               (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                               iStack0000000000000044) * 0x130;
                      lVar18 = *(int64_t *)(unaff_R14 + 0x138);
                      if (*(int *)(lVar27 + 0xf4 + lVar18) == 1) {
                        bStack0000000000000040 = true;
                        fVar34 = (unaff_XMM10_Da - *(float *)(lVar27 + 0x128 + lVar18)) * fVar36;
                        if (fVar34 <= 0.001) {
                          fVar34 = 0.001;
                        }
                        if (1.0 < fVar34) {
                          fVar34 = 1.0;
                          *(int32_t *)(lVar27 + 0xf4 + lVar18) = 2;
                          bStack0000000000000040 = false;
                        }
                      }
                      lVar18 = *(int64_t *)(lVar23 + 0x100 + lVar11);
                      while (lVar18 != lVar11 + 0xf8 + lVar23) {
                        lVar7 = FUN_18046c710(*(uint64_t *)(unaff_RBP + 0x2a8),
                                              *(uint64_t *)(lVar18 + 0x20));
                        lVar27 = *(int64_t *)(lVar7 + 0x18);
                        *(int32_t *)(lVar7 + 0xc) = 7;
                        uStack0000000000000050 =
                             (uint64_t)
                             (int)(*(int64_t *)(lVar18 + 0x30) - *(int64_t *)(lVar18 + 0x28) >> 5)
                        ;
                        lVar7 = ((int64_t)*(int *)(unaff_R15 + 0x2140) * 0x20 + lVar28) * 0x100;
                        lVar28 = *(int64_t *)(lVar7 + 0x10 + lVar27);
                        if ((uint64_t)(*(int64_t *)(lVar7 + 0x20 + lVar27) - lVar28 >> 5) <
                            uStack0000000000000050) {
                          if (uStack0000000000000050 == 0) {
                            lVar8 = 0;
                          }
                          else {
                            lVar8 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uStack0000000000000050 << 5,
                                                  *(int8_t *)(lVar7 + 0x28 + lVar27));
                            lVar28 = *(int64_t *)(lVar7 + 0x10 + lVar27);
                          }
                          lVar29 = *(int64_t *)(lVar7 + 0x18 + lVar27);
                          if (lVar28 != lVar29) {
                    // WARNING: Subroutine does not return
                            memmove(lVar8,lVar28,lVar29 - lVar28);
                          }
                          if (lVar28 != 0) {
                    // WARNING: Subroutine does not return
                            CoreEngineMemoryPoolCleaner();
                          }
                          *(int64_t *)(lVar7 + 0x10 + lVar27) = lVar8;
                          *(int64_t *)(lVar7 + 0x18 + lVar27) = lVar8;
                          *(uint64_t *)(lVar7 + 0x20 + lVar27) =
                               uStack0000000000000050 * 0x20 + lVar8;
                        }
                        if (0 < (int64_t)uStack0000000000000050) {
                          lVar28 = 0;
                          do {
                            puVar16 = *(uint64_t **)(lVar7 + 0x18 + lVar27);
                            puVar14 = (int32_t *)(*(int64_t *)(lVar18 + 0x28) + 0x10 + lVar28);
                            uVar1 = puVar14[1];
                            uVar2 = puVar14[2];
                            uVar3 = puVar14[3];
                            puVar17 = (uint64_t *)(*(int64_t *)(lVar18 + 0x28) + lVar28);
                            uVar13 = *puVar17;
                            uVar12 = puVar17[1];
                            *(int32_t *)(unaff_RBP + 0x18) = *puVar14;
                            *(int32_t *)(unaff_RBP + 0x1c) = uVar1;
                            *(int32_t *)(unaff_RBP + 0x20) = uVar2;
                            *(int32_t *)(unaff_RBP + 0x24) = uVar3;
                            *(float *)(unaff_RBP + 0x24) = fVar34;
                            if (puVar16 < *(uint64_t **)(lVar7 + 0x20 + lVar27)) {
                              uVar1 = *(int32_t *)(unaff_RBP + 0x18);
                              uVar2 = *(int32_t *)(unaff_RBP + 0x1c);
                              uVar3 = *(int32_t *)(unaff_RBP + 0x20);
                              uVar4 = *(int32_t *)(unaff_RBP + 0x24);
                              *(uint64_t **)(lVar7 + 0x18 + lVar27) = puVar16 + 4;
                              *puVar16 = uVar13;
                              puVar16[1] = uVar12;
                              *(int32_t *)(puVar16 + 2) = uVar1;
                              *(int32_t *)((int64_t)puVar16 + 0x14) = uVar2;
                              *(int32_t *)(puVar16 + 3) = uVar3;
                              *(int32_t *)((int64_t)puVar16 + 0x1c) = uVar4;
                            }
                            else {
                              puVar17 = *(uint64_t **)(lVar7 + 0x10 + lVar27);
                              lVar8 = (int64_t)puVar16 - (int64_t)puVar17 >> 5;
                              if (lVar8 == 0) {
                                lVar8 = 1;
LAB_180375e41:
                                puVar9 = (uint64_t *)
                                         CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 << 5,
                                                       *(int8_t *)(lVar7 + 0x28 + lVar27));
                                puVar17 = *(uint64_t **)(lVar7 + 0x10 + lVar27);
                                puVar16 = *(uint64_t **)(lVar7 + 0x18 + lVar27);
                              }
                              else {
                                lVar8 = lVar8 * 2;
                                if (lVar8 != 0) goto LAB_180375e41;
                                puVar9 = (uint64_t *)0x0;
                              }
                              if (puVar17 != puVar16) {
                    // WARNING: Subroutine does not return
                                memmove(puVar9,puVar17,(int64_t)puVar16 - (int64_t)puVar17);
                              }
                              uVar1 = *(int32_t *)(unaff_RBP + 0x18);
                              uVar2 = *(int32_t *)(unaff_RBP + 0x1c);
                              uVar3 = *(int32_t *)(unaff_RBP + 0x20);
                              uVar4 = *(int32_t *)(unaff_RBP + 0x24);
                              *puVar9 = uVar13;
                              puVar9[1] = uVar12;
                              *(int32_t *)(puVar9 + 2) = uVar1;
                              *(int32_t *)((int64_t)puVar9 + 0x14) = uVar2;
                              *(int32_t *)(puVar9 + 3) = uVar3;
                              *(int32_t *)((int64_t)puVar9 + 0x1c) = uVar4;
                              if (*(int64_t *)(lVar7 + 0x10 + lVar27) != 0) {
                    // WARNING: Subroutine does not return
                                CoreEngineMemoryPoolCleaner();
                              }
                              *(uint64_t **)(lVar7 + 0x10 + lVar27) = puVar9;
                              *(uint64_t **)(lVar7 + 0x20 + lVar27) = puVar9 + lVar8 * 4;
                              *(uint64_t **)(lVar7 + 0x18 + lVar27) = puVar9 + 4;
                            }
                            lVar28 = lVar28 + 0x20;
                            uStack0000000000000050 = uStack0000000000000050 - 1;
                            unaff_R13 = in_stack_00000058;
                          } while (uStack0000000000000050 != 0);
                        }
                        lVar18 = func_0x00018066bd70(lVar18);
                        unaff_R15 = *(int64_t *)(unaff_RBP + 0x290);
                        lVar28 = lStack0000000000000060;
                      }
LAB_18037619a:
                      if (!bStack0000000000000040) {
                        unaff_R14 = *(int64_t *)(unaff_RBP + 0x2a0);
                        unaff_R15 = *(int64_t *)(unaff_RBP + 0x290);
                        lVar28 = lStack0000000000000060;
                        goto LAB_1803768c5;
                      }
                    }
                  }
                  iVar24 = 0;
                  *(int32_t *)(unaff_RBP + -0x80) = 0;
                  iVar6 = iStack0000000000000048 * 4;
                  iVar22 = iStack0000000000000044 * 4;
                  *(int *)(unaff_RBP + -0x5c) = iVar6;
                  *(int *)(unaff_RBP + -0x58) = iVar22;
                  do {
                    unaff_R14 = *(int64_t *)(unaff_RBP + 0x2a0);
                    iVar6 = iVar6 + iVar24;
                    *(int *)(unaff_RBP + -0x60) = iVar6;
                    lStack0000000000000068 = 4;
                    do {
                      lVar28 = *(int64_t *)(unaff_R14 + 0x110);
                      iVar24 = *(int *)(unaff_R14 + 0x58) * iVar6 + iVar22;
                      uVar19 = (uint64_t)(int64_t)iVar24 % (uint64_t)*(uint *)(unaff_R14 + 0x118)
                      ;
                      for (piVar15 = *(int **)(lVar28 + uVar19 * 8); piVar15 != (int *)0x0;
                          piVar15 = *(int **)(piVar15 + 4)) {
                        if (iVar24 == *piVar15) {
                          if (piVar15 != (int *)0x0) {
                            lVar11 = *(int64_t *)(unaff_R14 + 0x118);
                            *(int **)(unaff_RBP + -0x30) = piVar15;
                            plVar10 = (int64_t *)(unaff_RBP + -0x30);
                            *(uint64_t *)(unaff_RBP + -0x28) = lVar28 + uVar19 * 8;
                            goto LAB_18037624d;
                          }
                          break;
                        }
                      }
                      lVar11 = *(int64_t *)(unaff_R14 + 0x118);
                      *(uint64_t *)(unaff_RBP + -0x20) = *(uint64_t *)(lVar28 + lVar11 * 8);
                      plVar10 = (int64_t *)(unaff_RBP + -0x20);
                      *(int64_t *)(unaff_RBP + -0x18) = lVar28 + lVar11 * 8;
LAB_18037624d:
                      if ((*plVar10 != *(int64_t *)(lVar28 + lVar11 * 8)) &&
                         (lVar28 = SystemCore_SecurityManager(unaff_R14,iVar6,iVar22),
                         *(int64_t *)(lVar28 + 0x108) != 0)) {
                        lVar28 = SystemCore_SecurityManager(unaff_R14,iVar6,iVar22);
                        lVar11 = SystemCore_SecurityManager(unaff_R14,iVar6,iVar22);
                        fVar30 = *(float *)(lVar28 + 0x38) - *(float *)(unaff_RBP + 0x150);
                        fVar32 = *(float *)(lVar28 + 0x3c) - fVar35;
                        fVar31 = *(float *)(lVar28 + 0x40) - fVar33;
                        fVar30 = SQRT(fVar32 * fVar32 + fVar30 * fVar30 + fVar31 * fVar31) -
                                 *(float *)(lVar28 + 0x48);
                        if (((cStack0000000000000074 == '\0') || (fVar30 <= unaff_XMM15_Da)) &&
                           ((((-1 < *(int *)(unaff_R13 + 0x60) ||
                              (0 < *(int *)(SYSTEM_STATE_MANAGER + 0xe0))) || (fVar30 <= 120.0)) &&
                            (iVar24 = FUN_1801b8ce0(*(int64_t *)
                                                     (*(int64_t *)(unaff_RBP + 0x290) + 0x2148) +
                                                    0x2998,*(int64_t *)(unaff_RBP + -0x78) + 0x30,
                                                    lVar11 + 0x4c,lVar28 + 0x18,&system_data_0300),
                            iVar24 != 0)))) {
                          lVar11 = SystemCore_SecurityManager(unaff_R14,iVar6,iVar22);
                          uVar25 = *(uint *)(unaff_R14 + 0x118);
                          iVar24 = *(int *)(unaff_R14 + 0x58);
                          lVar28 = *(int64_t *)(unaff_R14 + 0x110);
                          *(int64_t *)(unaff_RBP + -0x48) = lVar11 + 0x118;
                          iVar24 = iVar24 * iVar6 + iVar22;
                          for (piVar15 = *(int **)(lVar28 + ((uint64_t)(int64_t)iVar24 %
                                                            (uint64_t)uVar25) * 8);
                              piVar15 != (int *)0x0; piVar15 = *(int **)(piVar15 + 4)) {
                            if (iVar24 == *piVar15) {
                              lVar18 = *(int64_t *)(unaff_R14 + 0x118);
                              goto LAB_1803763e0;
                            }
                          }
                          lVar18 = *(int64_t *)(unaff_R14 + 0x118);
                          piVar15 = *(int **)(lVar28 + lVar18 * 8);
LAB_1803763e0:
                          if (piVar15 == *(int **)(lVar28 + lVar18 * 8)) {
                            uVar12 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x178,8,3);
                            uVar13 = *(uint64_t *)(unaff_R14 + 0x68);
                            *(int *)(unaff_RBP + -0x10) = iVar24;
                            uVar13 = SystemCore_SignalHandler(uVar12,uVar13);
                            *(uint64_t *)(unaff_RBP + -8) = uVar13;
                            puVar14 = (int32_t *)
                                      SystemCore_MessageQueueManager(unaff_R14 + 0x108,unaff_RBP + 0x48,
                                                    unaff_RBP + -0x10);
                            uVar1 = puVar14[1];
                            uVar2 = puVar14[2];
                            uVar3 = puVar14[3];
                            *(int32_t *)(unaff_RBP + -0x40) = *puVar14;
                            *(int32_t *)(unaff_RBP + -0x3c) = uVar1;
                            *(int32_t *)(unaff_RBP + -0x38) = uVar2;
                            *(int32_t *)(unaff_RBP + -0x34) = uVar3;
                            piVar15 = *(int **)(unaff_RBP + -0x40);
                          }
                          lVar28 = *(int64_t *)(lVar11 + 0x120);
                          puVar17 = (uint64_t *)(*(int64_t *)(piVar15 + 2) + 0x148);
                          *(uint64_t **)(unaff_RBP + -0x40) = puVar17;
                          if (lVar28 != lVar11 + 0x118) {
                            do {
                              plVar10 = *(int64_t **)(lVar28 + 0x20);
                              puVar9 = (uint64_t *)puVar17[2];
                              puVar16 = puVar17;
                              while (puVar5 = puVar9, puVar5 != (uint64_t *)0x0) {
                                if ((int64_t *)puVar5[4] < plVar10) {
                                  puVar9 = (uint64_t *)*puVar5;
                                }
                                else {
                                  puVar9 = (uint64_t *)puVar5[1];
                                  puVar16 = puVar5;
                                }
                              }
                              if ((puVar16 == puVar17) || (plVar10 < (int64_t *)puVar16[4])) {
                                puVar16 = (uint64_t *)FUN_18037f530();
                                puVar16 = (uint64_t *)*puVar16;
                              }
                              lVar11 = *(int64_t *)(lVar28 + 0x30);
                              lVar18 = *(int64_t *)(lVar28 + 0x28);
                              iVar6 = (int)plVar10[0xb];
                              *(int *)(unaff_RBP + -100) = iVar6;
                              iVar24 = (int)(lVar11 - lVar18 >> 5);
                              if (0 < iVar24) {
                                lVar11 = FUN_18046c710(*(uint64_t *)(unaff_RBP + 0x2a8));
                                lVar18 = 0;
                                lVar11 = *(int64_t *)(lVar11 + 0x18) +
                                         ((int64_t)
                                          *(int *)(*(int64_t *)(unaff_RBP + 0x290) + 0x2140) * 0x20
                                         + lStack0000000000000060) * 0x100 + 0x10;
                                *(int64_t *)(unaff_RBP + -0x50) = (int64_t)iVar24;
                                if (0 < iVar24) {
                                  lVar23 = 0;
                                  do {
                                    lVar27 = *(int64_t *)(lVar28 + 0x28);
                                    fVar31 = (float)modff(*(float *)(lVar23 + 4 + lVar27) +
                                                          *(float *)(lVar23 + lVar27) +
                                                          *(float *)(lVar23 + 8 + lVar27) +
                                                          *(float *)(lVar23 + 0x18 + lVar27),
                                                          unaff_RBP + -0x54);
                                    lVar27 = *(int64_t *)(lVar28 + 0x28);
                                    uVar25 = *(uint *)(in_stack_00000058 + 0x60);
                                    fVar33 = *(float *)(lVar23 + lVar27);
                                    fVar35 = *(float *)(lVar23 + 4 + lVar27);
                                    fVar30 = *(float *)(lVar23 + 8 + lVar27);
                                    if ((uVar25 >> 0x16 & 1) == 0) {
                                      fVar32 = 0.0;
                                    }
                                    else if (*(code **)(*plVar10 + 0x198) == (code *)&rendering_buffer_2544_ptr)
                                    {
                                      fVar32 = *(float *)((int64_t)plVar10 + 0x244);
                                    }
                                    else {
                                      lVar27 = (**(code **)(*plVar10 + 0x198))();
                                      uVar25 = *(uint *)(in_stack_00000058 + 0x60);
                                      fVar32 = *(float *)(lVar27 + 0x30);
                                    }
                                    if (*(int *)(render_system_data_ui + 0x7e0) == 0) {
                                      if ((*(int64_t *)(system_main_module_state + 0x3d8) == 0) ||
                                         (*(int *)(*(int64_t *)(system_main_module_state + 0x3d8) + 0x110) !=
                                          3)) {
                                        iVar24 = *(int *)(*(int64_t *)(unaff_RBP + 0x290) + 0x2310)
                                        ;
                                        if (iVar24 == -1) {
                                          fVar33 = fVar33 - *(float *)(unaff_RBP + 0x150);
                                          fVar35 = fVar35 - *(float *)(unaff_RBP + 0x154);
                                          fVar30 = fVar30 - *(float *)(unaff_RBP + 0x158);
                                          fVar33 = SQRT(fVar33 * fVar33 + fVar35 * fVar35 +
                                                        fVar30 * fVar30) -
                                                   ((fVar31 * 2.0 - 1.0) * 5.0 + fVar32);
                                          if (fVar33 <= 0.0) {
                                            fVar33 = 0.0;
                                          }
                                          fVar33 = fVar33 * 0.2;
                                          if (127.0 <= fVar33) {
                                            fVar33 = 127.0;
                                          }
                                          iVar24 = (int)*(char *)((int64_t)(int)fVar33 + 8 +
                                                                 *(int64_t *)(unaff_RBP + 0x290));
                                        }
                                        if (iVar6 <= iVar24) {
                                          iVar24 = iVar6 + -1;
                                        }
                                      }
                                      else {
                                        iVar24 = 0;
                                      }
                                    }
                                    else {
                                      iVar24 = 0;
                                    }
                                    lVar27 = *(int64_t *)(unaff_RBP + -0x78);
                                    lVar7 = puVar16[5];
                                    if ((*(uint *)(lVar27 + 4) & 0x200000) == 0) {
                                      iVar6 = (int)*(char *)(lVar7 + 4 + lVar18 * 8);
                                    }
                                    else {
                                      iVar6 = 4;
                                      iVar24 = 4;
                                    }
                                    if ((-1 < (int)uVar25) || (*(int *)(lVar27 + 0x178) < 2)) {
                                      if (iVar24 != iVar6) {
                                        fVar33 = *(float *)(lVar7 + lVar18 * 8);
                                        if (fVar33 == -1.0) {
                                          *(float *)(lVar7 + lVar18 * 8) = unaff_XMM10_Da;
                                          fVar33 = unaff_XMM10_Da;
                                        }
                                        fVar33 = (unaff_XMM10_Da - fVar33) * fVar36;
                                        if (fVar33 <= 0.001) {
                                          fVar33 = 0.001;
                                        }
                                        if (fVar33 <= 1.0) {
                                          puVar20 = (int32_t *)
                                                    (*(int64_t *)(lVar28 + 0x28) + lVar23);
                                          lVar27 = (int64_t)iVar24 * 0x20 + lVar11;
                                          puVar14 = *(int32_t **)(lVar27 + 8);
                                          if (puVar14 < *(int32_t **)(lVar27 + 0x10)) {
                                            uVar1 = puVar20[1];
                                            uVar2 = puVar20[2];
                                            uVar3 = puVar20[3];
                                            *puVar14 = *puVar20;
                                            puVar14[1] = uVar1;
                                            puVar14[2] = uVar2;
                                            puVar14[3] = uVar3;
                                            uVar13 = *(uint64_t *)(puVar20 + 6);
                                            *(uint64_t *)(puVar14 + 4) =
                                                 *(uint64_t *)(puVar20 + 4);
                                            *(uint64_t *)(puVar14 + 6) = uVar13;
                                            *(int64_t *)(lVar27 + 8) =
                                                 *(int64_t *)(lVar27 + 8) + 0x20;
                                          }
                                          else {
                                            FUN_18037f6b0(lVar27);
                                          }
                                          lVar7 = (int64_t)iVar6 * 0x20 + lVar11;
                                          *(float *)(*(int64_t *)(lVar27 + 8) + -4) = fVar33;
                                          puVar20 = (int32_t *)
                                                    (*(int64_t *)(lVar28 + 0x28) + lVar23);
                                          puVar14 = *(int32_t **)(lVar7 + 8);
                                          if (puVar14 < *(int32_t **)(lVar7 + 0x10)) {
                                            uVar1 = puVar20[1];
                                            uVar2 = puVar20[2];
                                            uVar3 = puVar20[3];
                                            *puVar14 = *puVar20;
                                            puVar14[1] = uVar1;
                                            puVar14[2] = uVar2;
                                            puVar14[3] = uVar3;
                                            uVar13 = *(uint64_t *)(puVar20 + 6);
                                            *(uint64_t *)(puVar14 + 4) =
                                                 *(uint64_t *)(puVar20 + 4);
                                            *(uint64_t *)(puVar14 + 6) = uVar13;
                                            *(int64_t *)(lVar7 + 8) =
                                                 *(int64_t *)(lVar7 + 8) + 0x20;
                                          }
                                          else {
                                            FUN_18037f6b0();
                                          }
                                          *(float *)(*(int64_t *)(lVar7 + 8) + -4) = -fVar33;
                                          goto LAB_180376825;
                                        }
                                        *(char *)(puVar16[5] + 4 + lVar18 * 8) = (char)iVar24;
                                        *(int32_t *)(puVar16[5] + lVar18 * 8) = 0xbf800000;
                                        if (-1 < *(int *)(lVar27 + 0x178)) {
                                          if (((*(uint *)(in_stack_00000058 + 0x60) >> 0x16 & 1) !=
                                               0) && (4 < iVar24)) {
                                            iVar24 = 4;
                                          }
                                          if (((int)*(uint *)(in_stack_00000058 + 0x60) < 0) &&
                                             (2 < iVar24)) {
                                            iVar24 = 2;
                                          }
                                        }
                                      }
                                      puVar20 = (int32_t *)
                                                (*(int64_t *)(lVar28 + 0x28) + lVar23);
                                      lVar27 = (int64_t)iVar24 * 0x20 + lVar11;
                                      puVar14 = *(int32_t **)(lVar27 + 8);
                                      if (puVar14 < *(int32_t **)(lVar27 + 0x10)) {
                                        uVar1 = puVar20[1];
                                        uVar2 = puVar20[2];
                                        uVar3 = puVar20[3];
                                        *puVar14 = *puVar20;
                                        puVar14[1] = uVar1;
                                        puVar14[2] = uVar2;
                                        puVar14[3] = uVar3;
                                        uVar13 = *(uint64_t *)(puVar20 + 6);
                                        *(uint64_t *)(puVar14 + 4) = *(uint64_t *)(puVar20 + 4);
                                        *(uint64_t *)(puVar14 + 6) = uVar13;
                                        *(int64_t *)(lVar27 + 8) = *(int64_t *)(lVar27 + 8) + 0x20
                                        ;
                                      }
                                      else {
                                        FUN_18037f6b0();
                                      }
                                    }
LAB_180376825:
                                    iVar6 = *(int *)(unaff_RBP + -100);
                                    lVar18 = lVar18 + 1;
                                    lVar23 = lVar23 + 0x20;
                                  } while (lVar18 < *(int64_t *)(unaff_RBP + -0x50));
                                }
                              }
                              lVar28 = func_0x00018066bd70(lVar28);
                              puVar17 = *(uint64_t **)(unaff_RBP + -0x40);
                            } while (lVar28 != *(int64_t *)(unaff_RBP + -0x48));
                            fVar33 = *(float *)(unaff_RBP + 0x158);
                            fVar35 = *(float *)(unaff_RBP + 0x154);
                            unaff_R14 = *(int64_t *)(unaff_RBP + 0x2a0);
                            iVar6 = *(int *)(unaff_RBP + -0x60);
                          }
                        }
                      }
                      iVar22 = iVar22 + 1;
                      lStack0000000000000068 = lStack0000000000000068 + -1;
                      unaff_R13 = in_stack_00000058;
                    } while (lStack0000000000000068 != 0);
                    iVar6 = *(int *)(unaff_RBP + -0x5c);
                    iVar24 = *(int *)(unaff_RBP + -0x80) + 1;
                    iVar22 = *(int *)(unaff_RBP + -0x58);
                    *(int *)(unaff_RBP + -0x80) = iVar24;
                  } while (iVar24 < 4);
                  unaff_R15 = *(int64_t *)(unaff_RBP + 0x290);
                  lVar28 = lStack0000000000000060;
                }
LAB_1803768c5:
                puVar26 = *(uint **)(unaff_RBP + -0x78);
                iVar6 = iStack0000000000000048;
              }
              unaff_EBX = *(int *)(unaff_RBP + -0x70);
              iStack0000000000000044 = iStack0000000000000044 + 1;
              unaff_R13 = in_stack_00000058;
            } while (iStack0000000000000044 < unaff_EBX);
            unaff_EDI = *(int *)(unaff_RBP + -0x6c);
          }
          iStack0000000000000048 = iVar6 + 1;
        } while (iStack0000000000000048 < unaff_EDI);
        param_2 = *(uint *)(unaff_RBP + -0x7c);
        unaff_RSI = *(int64_t *)(unaff_RBP + 0x298);
      }
    }
    in_RAX = *(int64_t *)(unaff_RSI + 0x3580);
    param_2 = param_2 + 1;
    lStack0000000000000060 = lVar28 + 1;
    *(uint *)(unaff_RBP + -0x7c) = param_2;
    if (*(uint *)(in_RAX + 0x110) <= param_2) {
      return;
    }
  } while( true );
}







