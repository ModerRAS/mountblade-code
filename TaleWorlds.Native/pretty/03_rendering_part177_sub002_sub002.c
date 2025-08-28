#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part177_sub002_sub002.c - 1 个函数

// 函数: void FUN_18037585f(void)
void FUN_18037585f(void)

{
  float fVar1;
  double dVar2;
  byte bVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int32_t uVar13;
  int iVar14;
  uint64_t *puVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t *plVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  int32_t *puVar21;
  int *piVar22;
  uint64_t *puVar23;
  uint64_t *puVar24;
  uint64_t *puVar25;
  uint uVar26;
  int64_t lVar27;
  int64_t lVar28;
  uint64_t uVar29;
  int32_t *puVar30;
  bool bVar31;
  int unaff_EBX;
  int64_t unaff_RBP;
  int iVar32;
  int64_t unaff_RSI;
  int64_t lVar33;
  int unaff_EDI;
  int64_t lVar34;
  int32_t *puVar35;
  int iVar36;
  uint *puVar37;
  int64_t lVar38;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t unaff_R15;
  int64_t lVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
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
  
  lVar27 = 2;
  puVar25 = (uint64_t *)(unaff_RSI + 0x30);
  puVar23 = (uint64_t *)(unaff_RBP + 0x60);
  do {
    puVar24 = puVar23;
    puVar15 = puVar25;
    uVar20 = puVar15[1];
    uVar19 = puVar15[2];
    uVar11 = puVar15[3];
    *puVar24 = *puVar15;
    puVar24[1] = uVar20;
    uVar20 = puVar15[4];
    uVar12 = puVar15[5];
    puVar24[2] = uVar19;
    puVar24[3] = uVar11;
    uVar19 = puVar15[6];
    uVar11 = puVar15[7];
    puVar24[4] = uVar20;
    puVar24[5] = uVar12;
    uVar20 = puVar15[8];
    uVar12 = puVar15[9];
    puVar24[6] = uVar19;
    puVar24[7] = uVar11;
    uVar19 = puVar15[10];
    uVar11 = puVar15[0xb];
    puVar24[8] = uVar20;
    puVar24[9] = uVar12;
    uVar20 = puVar15[0xc];
    uVar12 = puVar15[0xd];
    puVar24[10] = uVar19;
    puVar24[0xb] = uVar11;
    uVar19 = puVar15[0xe];
    uVar11 = puVar15[0xf];
    puVar24[0xc] = uVar20;
    puVar24[0xd] = uVar12;
    puVar24[0xe] = uVar19;
    puVar24[0xf] = uVar11;
    lVar27 = lVar27 + -1;
    puVar25 = puVar15 + 0x10;
    puVar23 = puVar24 + 0x10;
  } while (lVar27 != 0);
  uVar20 = puVar15[0x11];
  uVar19 = puVar15[0x12];
  uVar11 = puVar15[0x13];
  fVar1 = *(float *)(unaff_R13 + 100);
  puVar24[0x10] = puVar15[0x10];
  puVar24[0x11] = uVar20;
  uVar13 = *(int32_t *)(puVar15 + 0x14);
  uVar4 = *(int32_t *)((int64_t)puVar15 + 0xa4);
  uVar5 = *(int32_t *)(puVar15 + 0x15);
  uVar6 = *(int32_t *)((int64_t)puVar15 + 0xac);
  puVar24[0x12] = uVar19;
  puVar24[0x13] = uVar11;
  uVar7 = *(int32_t *)(puVar15 + 0x16);
  uVar8 = *(int32_t *)((int64_t)puVar15 + 0xb4);
  uVar9 = *(int32_t *)(puVar15 + 0x17);
  uVar10 = *(int32_t *)((int64_t)puVar15 + 0xbc);
  *(int32_t *)(puVar24 + 0x14) = uVar13;
  *(int32_t *)((int64_t)puVar24 + 0xa4) = uVar4;
  *(int32_t *)(puVar24 + 0x15) = uVar5;
  *(int32_t *)((int64_t)puVar24 + 0xac) = uVar6;
  *(int32_t *)(puVar24 + 0x16) = uVar7;
  *(int32_t *)((int64_t)puVar24 + 0xb4) = uVar8;
  *(int32_t *)(puVar24 + 0x17) = uVar9;
  *(int32_t *)((int64_t)puVar24 + 0xbc) = uVar10;
  bVar3 = (byte)((uint)*(int32_t *)(unaff_R13 + 0x60) >> 0x18);
  uVar13 = 0x31;
  if ((~(bVar3 >> 4) & 1) == 0) {
    uVar13 = 1;
  }
  *(int32_t *)(unaff_RBP + -0x68) = uVar13;
  _cStack0000000000000074 = (uint)(bVar3 >> 5 & 1);
  fStack0000000000000070 =
       ((float)*(int *)(SYSTEM_STATE_MANAGER + 0xe0) * 0.125 + 0.5) * *(float *)(system_main_module_state + 0x3a4);
  if ((*(char *)(*(int64_t *)(unaff_R15 + 0x2148) + 0x3f62) == '\0') ||
     (*(int *)(render_system_data_memory + 0x7e0) != 0)) {
    fStack0000000000000070 = 3.4028235e+38;
  }
  dVar2 = (double)FUN_180629810();
  lVar27 = *(int64_t *)(unaff_RSI + 0x3580);
  uVar26 = 0;
  *(int32_t *)(unaff_RBP + -0x7c) = 0;
  fVar46 = (float)dVar2;
  if (*(int *)(lVar27 + 0x110) != 0) {
    fVar43 = *(float *)(unaff_RBP + 0x158);
    fVar45 = *(float *)(unaff_RBP + 0x154);
    lStack0000000000000060 = 0;
    do {
      puVar37 = *(uint **)(lVar27 + 0x118 + lStack0000000000000060 * 8);
      *(uint **)(unaff_RBP + -0x78) = puVar37;
      if ((((*puVar37 & *(uint *)(unaff_RBP + -0x68)) != 0) && (puVar37[0x5e] != 3)) &&
         ((puVar37[1] >> 0x18 & 1) == 0)) {
        lVar27 = *(int64_t *)(puVar37 + 0xd60);
        if (((lVar27 == 0) || (*(int *)(lVar27 + 0x110) == 0)) ||
           ((*(uint **)(lVar27 + 0x118) != puVar37 ||
            (cStack0000000000000041 = '\x01', (puVar37[0x6f6] & 0x20) == 0)))) {
          cStack0000000000000041 = '\0';
        }
        iStack0000000000000048 = 0;
        if (0 < unaff_EDI) {
          do {
            iStack0000000000000044 = 0;
            if (0 < unaff_EBX) {
              do {
                lVar27 = *(int64_t *)(unaff_R14 + 0x138);
                lVar34 = (int64_t)
                         (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                         iStack0000000000000044) * 0x130;
                lVar28 = lVar27 + 8 + lVar34;
                lVar38 = lVar27 + 0xc0 + lVar34;
                fVar42 = *(float *)(lVar28 + 0x20) - *(float *)(unaff_RBP + 0x150);
                fVar40 = *(float *)(lVar28 + 0x24) - fVar45;
                fVar41 = *(float *)(lVar28 + 0x28) - fVar43;
                if (*(int *)(unaff_R13 + 0x60) < 0) {
                  fVar47 = 5.0;
                }
                else {
                  fVar47 = 1.0;
                }
                fVar44 = 1.0;
                if ((((puVar37[1] & 0x8000) == 0) && ((*puVar37 & 1) == 1)) &&
                   (*(int64_t *)(lVar34 + 0x118 + lVar27) != 0)) {
                  bVar31 = true;
                }
                else {
                  bVar31 = false;
                }
                if (*(float *)(lVar38 + 0x30) != 0.0) {
                  if (cStack0000000000000041 == '\0') {
                    iVar14 = FUN_18063c930(puVar37 + 0xc);
                  }
                  else {
                    iVar14 = FUN_1801b8ce0(*(int64_t *)(unaff_R15 + 0x2148) + 0x2998,puVar37 + 0xc,
                                           lVar28,lVar38,&system_data_0300);
                  }
                  if (iVar14 != 0) {
                    if (bVar31) {
                      if ((cStack0000000000000074 != '\0') ||
                         (fVar42 * fVar42 + fVar40 * fVar40 + fVar41 * fVar41 <=
                          fStack0000000000000070)) {
                        lVar38 = (int64_t)
                                 (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                                 iStack0000000000000044) * 0x130;
                        lVar28 = *(int64_t *)(unaff_R14 + 0x138);
                        if (*(int *)(lVar38 + 0xf4 + lVar28) == 2) {
                          if ((*(uint *)(unaff_R13 + 0x60) & 0x800000) == 0) {
                            *(int32_t *)(lVar38 + 0xf4 + lVar28) = 1;
                            *(float *)((int64_t)
                                       (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                                       iStack0000000000000044) * 0x130 + 0x128 +
                                      *(int64_t *)(unaff_R14 + 0x138)) = fVar46;
                          }
                          else {
                            *(int32_t *)(lVar38 + 0xf4 + lVar28) = 0;
                          }
                        }
                        lVar38 = (int64_t)
                                 (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                                 iStack0000000000000044) * 0x130;
                        lVar28 = *(int64_t *)(unaff_R14 + 0x138);
                        if (*(int *)(lVar38 + 0xf4 + lVar28) == 1) {
                          fVar40 = (fVar46 - *(float *)(lVar38 + 0x128 + lVar28)) * fVar47;
                          if (fVar40 <= 0.001) {
                            fVar40 = 0.001;
                          }
                          fVar40 = -fVar40;
                          bVar31 = fVar40 < -1.0;
                          if (bVar31) {
                            fVar40 = -1.0;
                            *(int32_t *)(lVar38 + 0xf4 + lVar28) = 0;
                          }
                          bStack0000000000000040 = !bVar31;
                          for (lVar28 = *(int64_t *)(lVar34 + 0x100 + lVar27);
                              lVar28 != lVar27 + 0xf8 + lVar34; lVar28 = func_0x00018066bd70(lVar28)
                              ) {
                            lVar38 = FUN_18046c710(*(uint64_t *)(unaff_RBP + 0x2a8),
                                                   *(uint64_t *)(lVar28 + 0x20));
                            lVar38 = *(int64_t *)(lVar38 + 0x18);
                            lVar33 = ((int64_t)*(int *)(unaff_R15 + 0x2140) * 0x20 +
                                     lStack0000000000000060) * 0x100;
                            iVar14 = (int)(*(int64_t *)(lVar28 + 0x30) -
                                           *(int64_t *)(lVar28 + 0x28) >> 5);
                            lVar16 = (int64_t)iVar14;
                            if (0 < iVar14) {
                              lVar17 = 0;
                              do {
                                puVar35 = *(int32_t **)(lVar33 + 0x18 + lVar38);
                                puVar30 = (int32_t *)
                                          (*(int64_t *)(lVar28 + 0x28) + 0x10 + lVar17);
                                uVar7 = puVar30[1];
                                uVar8 = puVar30[2];
                                uVar9 = puVar30[3];
                                puVar21 = (int32_t *)(*(int64_t *)(lVar28 + 0x28) + lVar17);
                                uVar13 = *puVar21;
                                uVar4 = puVar21[1];
                                uVar5 = puVar21[2];
                                uVar6 = puVar21[3];
                                *(int32_t *)(unaff_RBP + 0x38) = *puVar30;
                                *(int32_t *)(unaff_RBP + 0x3c) = uVar7;
                                *(int32_t *)(unaff_RBP + 0x40) = uVar8;
                                *(int32_t *)(unaff_RBP + 0x44) = uVar9;
                                *(float *)(unaff_RBP + 0x44) = fVar40;
                                if (puVar35 < *(int32_t **)(lVar33 + 0x20 + lVar38)) {
                                  uVar7 = *(int32_t *)(unaff_RBP + 0x38);
                                  uVar8 = *(int32_t *)(unaff_RBP + 0x3c);
                                  uVar9 = *(int32_t *)(unaff_RBP + 0x40);
                                  uVar10 = *(int32_t *)(unaff_RBP + 0x44);
                                  *(int32_t **)(lVar33 + 0x18 + lVar38) = puVar35 + 8;
                                  *puVar35 = uVar13;
                                  puVar35[1] = uVar4;
                                  puVar35[2] = uVar5;
                                  puVar35[3] = uVar6;
                                  puVar35[4] = uVar7;
                                  puVar35[5] = uVar8;
                                  puVar35[6] = uVar9;
                                  puVar35[7] = uVar10;
                                }
                                else {
                                  puVar21 = *(int32_t **)(lVar33 + 0x10 + lVar38);
                                  lVar39 = (int64_t)puVar35 - (int64_t)puVar21 >> 5;
                                  if (lVar39 == 0) {
                                    lVar39 = 1;
LAB_1803760d1:
                                    puVar30 = (int32_t *)
                                              FUN_18062b420(system_memory_pool_ptr,lVar39 << 5,
                                                            *(int8_t *)(lVar33 + 0x28 + lVar38))
                                    ;
                                    puVar21 = *(int32_t **)(lVar33 + 0x10 + lVar38);
                                    puVar35 = *(int32_t **)(lVar33 + 0x18 + lVar38);
                                  }
                                  else {
                                    lVar39 = lVar39 * 2;
                                    if (lVar39 != 0) goto LAB_1803760d1;
                                    puVar30 = (int32_t *)0x0;
                                  }
                                  if (puVar21 != puVar35) {
                    // WARNING: Subroutine does not return
                                    memmove(puVar30,puVar21,(int64_t)puVar35 - (int64_t)puVar21);
                                  }
                                  uVar7 = *(int32_t *)(unaff_RBP + 0x38);
                                  uVar8 = *(int32_t *)(unaff_RBP + 0x3c);
                                  uVar9 = *(int32_t *)(unaff_RBP + 0x40);
                                  uVar10 = *(int32_t *)(unaff_RBP + 0x44);
                                  *puVar30 = uVar13;
                                  puVar30[1] = uVar4;
                                  puVar30[2] = uVar5;
                                  puVar30[3] = uVar6;
                                  puVar30[4] = uVar7;
                                  puVar30[5] = uVar8;
                                  puVar30[6] = uVar9;
                                  puVar30[7] = uVar10;
                                  if (*(int64_t *)(lVar33 + 0x10 + lVar38) != 0) {
                    // WARNING: Subroutine does not return
                                    FUN_18064e900();
                                  }
                                  *(int32_t **)(lVar33 + 0x10 + lVar38) = puVar30;
                                  *(int32_t **)(lVar33 + 0x20 + lVar38) = puVar30 + lVar39 * 8;
                                  *(int32_t **)(lVar33 + 0x18 + lVar38) = puVar30 + 8;
                                }
                                lVar17 = lVar17 + 0x20;
                                lVar16 = lVar16 + -1;
                              } while (lVar16 != 0);
                              unaff_R15 = *(int64_t *)(unaff_RBP + 0x290);
                              unaff_R13 = in_stack_00000058;
                            }
                          }
                          if (!bVar31) goto LAB_18037619a;
                        }
                      }
                      else {
                        lVar38 = (int64_t)
                                 (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                                 iStack0000000000000044) * 0x130;
                        lVar28 = *(int64_t *)(unaff_R14 + 0x138);
                        if (*(int *)(lVar38 + 0xf4 + lVar28) == 0) {
                          if ((*(uint *)(unaff_R13 + 0x60) & 0x800000) == 0) {
                            *(int32_t *)(lVar38 + 0xf4 + lVar28) = 1;
                            *(float *)((int64_t)
                                       (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                                       iStack0000000000000044) * 0x130 + 0x128 +
                                      *(int64_t *)(unaff_R14 + 0x138)) = fVar46;
                          }
                          else {
                            *(int32_t *)(lVar38 + 0xf4 + lVar28) = 2;
                          }
                        }
                        bStack0000000000000040 = false;
                        lVar38 = (int64_t)
                                 (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                                 iStack0000000000000044) * 0x130;
                        lVar28 = *(int64_t *)(unaff_R14 + 0x138);
                        if (*(int *)(lVar38 + 0xf4 + lVar28) == 1) {
                          bStack0000000000000040 = true;
                          fVar44 = (fVar46 - *(float *)(lVar38 + 0x128 + lVar28)) * fVar47;
                          if (fVar44 <= 0.001) {
                            fVar44 = 0.001;
                          }
                          if (1.0 < fVar44) {
                            fVar44 = 1.0;
                            *(int32_t *)(lVar38 + 0xf4 + lVar28) = 2;
                            bStack0000000000000040 = false;
                          }
                        }
                        lVar28 = *(int64_t *)(lVar34 + 0x100 + lVar27);
                        while (lVar28 != lVar27 + 0xf8 + lVar34) {
                          lVar16 = FUN_18046c710(*(uint64_t *)(unaff_RBP + 0x2a8),
                                                 *(uint64_t *)(lVar28 + 0x20));
                          lVar38 = *(int64_t *)(lVar16 + 0x18);
                          *(int32_t *)(lVar16 + 0xc) = 7;
                          uStack0000000000000050 =
                               (uint64_t)
                               (int)(*(int64_t *)(lVar28 + 0x30) - *(int64_t *)(lVar28 + 0x28) >>
                                    5);
                          lVar33 = ((int64_t)*(int *)(unaff_R15 + 0x2140) * 0x20 +
                                   lStack0000000000000060) * 0x100;
                          lVar16 = *(int64_t *)(lVar33 + 0x10 + lVar38);
                          if ((uint64_t)(*(int64_t *)(lVar33 + 0x20 + lVar38) - lVar16 >> 5) <
                              uStack0000000000000050) {
                            if (uStack0000000000000050 == 0) {
                              lVar17 = 0;
                            }
                            else {
                              lVar17 = FUN_18062b420(system_memory_pool_ptr,uStack0000000000000050 << 5,
                                                     *(int8_t *)(lVar33 + 0x28 + lVar38));
                              lVar16 = *(int64_t *)(lVar33 + 0x10 + lVar38);
                            }
                            lVar39 = *(int64_t *)(lVar33 + 0x18 + lVar38);
                            if (lVar16 != lVar39) {
                    // WARNING: Subroutine does not return
                              memmove(lVar17,lVar16,lVar39 - lVar16);
                            }
                            if (lVar16 != 0) {
                    // WARNING: Subroutine does not return
                              FUN_18064e900();
                            }
                            *(int64_t *)(lVar33 + 0x10 + lVar38) = lVar17;
                            *(int64_t *)(lVar33 + 0x18 + lVar38) = lVar17;
                            *(uint64_t *)(lVar33 + 0x20 + lVar38) =
                                 uStack0000000000000050 * 0x20 + lVar17;
                          }
                          if (0 < (int64_t)uStack0000000000000050) {
                            lVar16 = 0;
                            do {
                              puVar35 = *(int32_t **)(lVar33 + 0x18 + lVar38);
                              puVar30 = (int32_t *)(*(int64_t *)(lVar28 + 0x28) + 0x10 + lVar16)
                              ;
                              uVar7 = puVar30[1];
                              uVar8 = puVar30[2];
                              uVar9 = puVar30[3];
                              puVar21 = (int32_t *)(*(int64_t *)(lVar28 + 0x28) + lVar16);
                              uVar13 = *puVar21;
                              uVar4 = puVar21[1];
                              uVar5 = puVar21[2];
                              uVar6 = puVar21[3];
                              *(int32_t *)(unaff_RBP + 0x18) = *puVar30;
                              *(int32_t *)(unaff_RBP + 0x1c) = uVar7;
                              *(int32_t *)(unaff_RBP + 0x20) = uVar8;
                              *(int32_t *)(unaff_RBP + 0x24) = uVar9;
                              *(float *)(unaff_RBP + 0x24) = fVar44;
                              if (puVar35 < *(int32_t **)(lVar33 + 0x20 + lVar38)) {
                                uVar7 = *(int32_t *)(unaff_RBP + 0x18);
                                uVar8 = *(int32_t *)(unaff_RBP + 0x1c);
                                uVar9 = *(int32_t *)(unaff_RBP + 0x20);
                                uVar10 = *(int32_t *)(unaff_RBP + 0x24);
                                *(int32_t **)(lVar33 + 0x18 + lVar38) = puVar35 + 8;
                                *puVar35 = uVar13;
                                puVar35[1] = uVar4;
                                puVar35[2] = uVar5;
                                puVar35[3] = uVar6;
                                puVar35[4] = uVar7;
                                puVar35[5] = uVar8;
                                puVar35[6] = uVar9;
                                puVar35[7] = uVar10;
                              }
                              else {
                                puVar21 = *(int32_t **)(lVar33 + 0x10 + lVar38);
                                lVar17 = (int64_t)puVar35 - (int64_t)puVar21 >> 5;
                                if (lVar17 == 0) {
                                  lVar17 = 1;
LAB_180375e41:
                                  puVar30 = (int32_t *)
                                            FUN_18062b420(system_memory_pool_ptr,lVar17 << 5,
                                                          *(int8_t *)(lVar33 + 0x28 + lVar38));
                                  puVar21 = *(int32_t **)(lVar33 + 0x10 + lVar38);
                                  puVar35 = *(int32_t **)(lVar33 + 0x18 + lVar38);
                                }
                                else {
                                  lVar17 = lVar17 * 2;
                                  if (lVar17 != 0) goto LAB_180375e41;
                                  puVar30 = (int32_t *)0x0;
                                }
                                if (puVar21 != puVar35) {
                    // WARNING: Subroutine does not return
                                  memmove(puVar30,puVar21,(int64_t)puVar35 - (int64_t)puVar21);
                                }
                                uVar7 = *(int32_t *)(unaff_RBP + 0x18);
                                uVar8 = *(int32_t *)(unaff_RBP + 0x1c);
                                uVar9 = *(int32_t *)(unaff_RBP + 0x20);
                                uVar10 = *(int32_t *)(unaff_RBP + 0x24);
                                *puVar30 = uVar13;
                                puVar30[1] = uVar4;
                                puVar30[2] = uVar5;
                                puVar30[3] = uVar6;
                                puVar30[4] = uVar7;
                                puVar30[5] = uVar8;
                                puVar30[6] = uVar9;
                                puVar30[7] = uVar10;
                                if (*(int64_t *)(lVar33 + 0x10 + lVar38) != 0) {
                    // WARNING: Subroutine does not return
                                  FUN_18064e900();
                                }
                                *(int32_t **)(lVar33 + 0x10 + lVar38) = puVar30;
                                *(int32_t **)(lVar33 + 0x20 + lVar38) = puVar30 + lVar17 * 8;
                                *(int32_t **)(lVar33 + 0x18 + lVar38) = puVar30 + 8;
                              }
                              lVar16 = lVar16 + 0x20;
                              uStack0000000000000050 = uStack0000000000000050 - 1;
                              unaff_R13 = in_stack_00000058;
                            } while (uStack0000000000000050 != 0);
                          }
                          lVar28 = func_0x00018066bd70(lVar28);
                          unaff_R15 = *(int64_t *)(unaff_RBP + 0x290);
                        }
LAB_18037619a:
                        if (!bStack0000000000000040) {
                          unaff_R14 = *(int64_t *)(unaff_RBP + 0x2a0);
                          unaff_R15 = *(int64_t *)(unaff_RBP + 0x290);
                          goto LAB_1803768c5;
                        }
                      }
                    }
                    iVar36 = 0;
                    *(int32_t *)(unaff_RBP + -0x80) = 0;
                    iVar14 = iStack0000000000000048 * 4;
                    iVar32 = iStack0000000000000044 * 4;
                    *(int *)(unaff_RBP + -0x5c) = iVar14;
                    *(int *)(unaff_RBP + -0x58) = iVar32;
                    do {
                      unaff_R14 = *(int64_t *)(unaff_RBP + 0x2a0);
                      iVar14 = iVar14 + iVar36;
                      *(int *)(unaff_RBP + -0x60) = iVar14;
                      lStack0000000000000068 = 4;
                      do {
                        lVar27 = *(int64_t *)(unaff_R14 + 0x110);
                        iVar36 = *(int *)(unaff_R14 + 0x58) * iVar14 + iVar32;
                        uVar29 = (uint64_t)(int64_t)iVar36 %
                                 (uint64_t)*(uint *)(unaff_R14 + 0x118);
                        for (piVar22 = *(int **)(lVar27 + uVar29 * 8); piVar22 != (int *)0x0;
                            piVar22 = *(int **)(piVar22 + 4)) {
                          if (iVar36 == *piVar22) {
                            if (piVar22 != (int *)0x0) {
                              lVar28 = *(int64_t *)(unaff_R14 + 0x118);
                              *(int **)(unaff_RBP + -0x30) = piVar22;
                              plVar18 = (int64_t *)(unaff_RBP + -0x30);
                              *(uint64_t *)(unaff_RBP + -0x28) = lVar27 + uVar29 * 8;
                              goto LAB_18037624d;
                            }
                            break;
                          }
                        }
                        lVar28 = *(int64_t *)(unaff_R14 + 0x118);
                        *(uint64_t *)(unaff_RBP + -0x20) = *(uint64_t *)(lVar27 + lVar28 * 8);
                        plVar18 = (int64_t *)(unaff_RBP + -0x20);
                        *(int64_t *)(unaff_RBP + -0x18) = lVar27 + lVar28 * 8;
LAB_18037624d:
                        if ((*plVar18 != *(int64_t *)(lVar27 + lVar28 * 8)) &&
                           (lVar27 = FUN_180372570(unaff_R14,iVar14,iVar32),
                           *(int64_t *)(lVar27 + 0x108) != 0)) {
                          lVar27 = FUN_180372570(unaff_R14,iVar14,iVar32);
                          lVar28 = FUN_180372570(unaff_R14,iVar14,iVar32);
                          fVar40 = *(float *)(lVar27 + 0x38) - *(float *)(unaff_RBP + 0x150);
                          fVar42 = *(float *)(lVar27 + 0x3c) - fVar45;
                          fVar41 = *(float *)(lVar27 + 0x40) - fVar43;
                          fVar40 = SQRT(fVar42 * fVar42 + fVar40 * fVar40 + fVar41 * fVar41) -
                                   *(float *)(lVar27 + 0x48);
                          if (((cStack0000000000000074 == '\0') || (fVar40 <= fVar1)) &&
                             ((((-1 < *(int *)(unaff_R13 + 0x60) ||
                                (0 < *(int *)(SYSTEM_STATE_MANAGER + 0xe0))) || (fVar40 <= 120.0)) &&
                              (iVar36 = FUN_1801b8ce0(*(int64_t *)
                                                       (*(int64_t *)(unaff_RBP + 0x290) + 0x2148) +
                                                      0x2998,*(int64_t *)(unaff_RBP + -0x78) + 0x30
                                                      ,lVar28 + 0x4c,lVar27 + 0x18,&system_data_0300),
                              iVar36 != 0)))) {
                            lVar28 = FUN_180372570(unaff_R14,iVar14,iVar32);
                            uVar26 = *(uint *)(unaff_R14 + 0x118);
                            iVar36 = *(int *)(unaff_R14 + 0x58);
                            lVar27 = *(int64_t *)(unaff_R14 + 0x110);
                            *(int64_t *)(unaff_RBP + -0x48) = lVar28 + 0x118;
                            iVar36 = iVar36 * iVar14 + iVar32;
                            for (piVar22 = *(int **)(lVar27 + ((uint64_t)(int64_t)iVar36 %
                                                              (uint64_t)uVar26) * 8);
                                piVar22 != (int *)0x0; piVar22 = *(int **)(piVar22 + 4)) {
                              if (iVar36 == *piVar22) {
                                lVar34 = *(int64_t *)(unaff_R14 + 0x118);
                                goto LAB_1803763e0;
                              }
                            }
                            lVar34 = *(int64_t *)(unaff_R14 + 0x118);
                            piVar22 = *(int **)(lVar27 + lVar34 * 8);
LAB_1803763e0:
                            if (piVar22 == *(int **)(lVar27 + lVar34 * 8)) {
                              uVar19 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
                              uVar20 = *(uint64_t *)(unaff_R14 + 0x68);
                              *(int *)(unaff_RBP + -0x10) = iVar36;
                              uVar20 = FUN_180372430(uVar19,uVar20);
                              *(uint64_t *)(unaff_RBP + -8) = uVar20;
                              puVar21 = (int32_t *)
                                        FUN_18037f020(unaff_R14 + 0x108,unaff_RBP + 0x48,
                                                      unaff_RBP + -0x10);
                              uVar13 = puVar21[1];
                              uVar4 = puVar21[2];
                              uVar5 = puVar21[3];
                              *(int32_t *)(unaff_RBP + -0x40) = *puVar21;
                              *(int32_t *)(unaff_RBP + -0x3c) = uVar13;
                              *(int32_t *)(unaff_RBP + -0x38) = uVar4;
                              *(int32_t *)(unaff_RBP + -0x34) = uVar5;
                              piVar22 = *(int **)(unaff_RBP + -0x40);
                            }
                            lVar27 = *(int64_t *)(lVar28 + 0x120);
                            puVar25 = (uint64_t *)(*(int64_t *)(piVar22 + 2) + 0x148);
                            *(uint64_t **)(unaff_RBP + -0x40) = puVar25;
                            if (lVar27 != lVar28 + 0x118) {
                              do {
                                plVar18 = *(int64_t **)(lVar27 + 0x20);
                                puVar15 = (uint64_t *)puVar25[2];
                                puVar23 = puVar25;
                                while (puVar24 = puVar15, puVar24 != (uint64_t *)0x0) {
                                  if ((int64_t *)puVar24[4] < plVar18) {
                                    puVar15 = (uint64_t *)*puVar24;
                                  }
                                  else {
                                    puVar15 = (uint64_t *)puVar24[1];
                                    puVar23 = puVar24;
                                  }
                                }
                                if ((puVar23 == puVar25) || (plVar18 < (int64_t *)puVar23[4])) {
                                  puVar23 = (uint64_t *)FUN_18037f530();
                                  puVar23 = (uint64_t *)*puVar23;
                                }
                                lVar28 = *(int64_t *)(lVar27 + 0x30);
                                lVar34 = *(int64_t *)(lVar27 + 0x28);
                                iVar14 = (int)plVar18[0xb];
                                *(int *)(unaff_RBP + -100) = iVar14;
                                iVar36 = (int)(lVar28 - lVar34 >> 5);
                                if (0 < iVar36) {
                                  lVar28 = FUN_18046c710(*(uint64_t *)(unaff_RBP + 0x2a8));
                                  lVar34 = 0;
                                  lVar28 = *(int64_t *)(lVar28 + 0x18) +
                                           ((int64_t)
                                            *(int *)(*(int64_t *)(unaff_RBP + 0x290) + 0x2140) *
                                            0x20 + lStack0000000000000060) * 0x100 + 0x10;
                                  *(int64_t *)(unaff_RBP + -0x50) = (int64_t)iVar36;
                                  if (0 < iVar36) {
                                    lVar38 = 0;
                                    do {
                                      lVar16 = *(int64_t *)(lVar27 + 0x28);
                                      fVar41 = (float)modff(*(float *)(lVar38 + 4 + lVar16) +
                                                            *(float *)(lVar38 + lVar16) +
                                                            *(float *)(lVar38 + 8 + lVar16) +
                                                            *(float *)(lVar38 + 0x18 + lVar16),
                                                            unaff_RBP + -0x54);
                                      lVar16 = *(int64_t *)(lVar27 + 0x28);
                                      uVar26 = *(uint *)(in_stack_00000058 + 0x60);
                                      fVar43 = *(float *)(lVar38 + lVar16);
                                      fVar45 = *(float *)(lVar38 + 4 + lVar16);
                                      fVar40 = *(float *)(lVar38 + 8 + lVar16);
                                      if ((uVar26 >> 0x16 & 1) == 0) {
                                        fVar42 = 0.0;
                                      }
                                      else if (*(code **)(*plVar18 + 0x198) ==
                                               (code *)&unknown_var_2544_ptr) {
                                        fVar42 = *(float *)((int64_t)plVar18 + 0x244);
                                      }
                                      else {
                                        lVar16 = (**(code **)(*plVar18 + 0x198))();
                                        uVar26 = *(uint *)(in_stack_00000058 + 0x60);
                                        fVar42 = *(float *)(lVar16 + 0x30);
                                      }
                                      if (*(int *)(render_system_data_memory + 0x7e0) == 0) {
                                        if ((*(int64_t *)(system_main_module_state + 0x3d8) == 0) ||
                                           (*(int *)(*(int64_t *)(system_main_module_state + 0x3d8) + 0x110)
                                            != 3)) {
                                          iVar36 = *(int *)(*(int64_t *)(unaff_RBP + 0x290) +
                                                           0x2310);
                                          if (iVar36 == -1) {
                                            fVar43 = fVar43 - *(float *)(unaff_RBP + 0x150);
                                            fVar45 = fVar45 - *(float *)(unaff_RBP + 0x154);
                                            fVar40 = fVar40 - *(float *)(unaff_RBP + 0x158);
                                            fVar43 = SQRT(fVar43 * fVar43 + fVar45 * fVar45 +
                                                          fVar40 * fVar40) -
                                                     ((fVar41 * 2.0 - 1.0) * 5.0 + fVar42);
                                            if (fVar43 <= 0.0) {
                                              fVar43 = 0.0;
                                            }
                                            fVar43 = fVar43 * 0.2;
                                            if (127.0 <= fVar43) {
                                              fVar43 = 127.0;
                                            }
                                            iVar36 = (int)*(char *)((int64_t)(int)fVar43 + 8 +
                                                                   *(int64_t *)(unaff_RBP + 0x290))
                                            ;
                                          }
                                          if (iVar14 <= iVar36) {
                                            iVar36 = iVar14 + -1;
                                          }
                                        }
                                        else {
                                          iVar36 = 0;
                                        }
                                      }
                                      else {
                                        iVar36 = 0;
                                      }
                                      lVar16 = *(int64_t *)(unaff_RBP + -0x78);
                                      lVar33 = puVar23[5];
                                      if ((*(uint *)(lVar16 + 4) & 0x200000) == 0) {
                                        iVar14 = (int)*(char *)(lVar33 + 4 + lVar34 * 8);
                                      }
                                      else {
                                        iVar14 = 4;
                                        iVar36 = 4;
                                      }
                                      if ((-1 < (int)uVar26) || (*(int *)(lVar16 + 0x178) < 2)) {
                                        if (iVar36 != iVar14) {
                                          fVar43 = *(float *)(lVar33 + lVar34 * 8);
                                          if (fVar43 == -1.0) {
                                            *(float *)(lVar33 + lVar34 * 8) = fVar46;
                                            fVar43 = fVar46;
                                          }
                                          fVar43 = (fVar46 - fVar43) * fVar47;
                                          if (fVar43 <= 0.001) {
                                            fVar43 = 0.001;
                                          }
                                          if (fVar43 <= 1.0) {
                                            puVar30 = (int32_t *)
                                                      (*(int64_t *)(lVar27 + 0x28) + lVar38);
                                            lVar16 = (int64_t)iVar36 * 0x20 + lVar28;
                                            puVar21 = *(int32_t **)(lVar16 + 8);
                                            if (puVar21 < *(int32_t **)(lVar16 + 0x10)) {
                                              uVar13 = puVar30[1];
                                              uVar4 = puVar30[2];
                                              uVar5 = puVar30[3];
                                              *puVar21 = *puVar30;
                                              puVar21[1] = uVar13;
                                              puVar21[2] = uVar4;
                                              puVar21[3] = uVar5;
                                              uVar20 = *(uint64_t *)(puVar30 + 6);
                                              *(uint64_t *)(puVar21 + 4) =
                                                   *(uint64_t *)(puVar30 + 4);
                                              *(uint64_t *)(puVar21 + 6) = uVar20;
                                              *(int64_t *)(lVar16 + 8) =
                                                   *(int64_t *)(lVar16 + 8) + 0x20;
                                            }
                                            else {
                                              FUN_18037f6b0(lVar16);
                                            }
                                            lVar33 = (int64_t)iVar14 * 0x20 + lVar28;
                                            *(float *)(*(int64_t *)(lVar16 + 8) + -4) = fVar43;
                                            puVar30 = (int32_t *)
                                                      (*(int64_t *)(lVar27 + 0x28) + lVar38);
                                            puVar21 = *(int32_t **)(lVar33 + 8);
                                            if (puVar21 < *(int32_t **)(lVar33 + 0x10)) {
                                              uVar13 = puVar30[1];
                                              uVar4 = puVar30[2];
                                              uVar5 = puVar30[3];
                                              *puVar21 = *puVar30;
                                              puVar21[1] = uVar13;
                                              puVar21[2] = uVar4;
                                              puVar21[3] = uVar5;
                                              uVar20 = *(uint64_t *)(puVar30 + 6);
                                              *(uint64_t *)(puVar21 + 4) =
                                                   *(uint64_t *)(puVar30 + 4);
                                              *(uint64_t *)(puVar21 + 6) = uVar20;
                                              *(int64_t *)(lVar33 + 8) =
                                                   *(int64_t *)(lVar33 + 8) + 0x20;
                                            }
                                            else {
                                              FUN_18037f6b0();
                                            }
                                            *(float *)(*(int64_t *)(lVar33 + 8) + -4) = -fVar43;
                                            goto LAB_180376825;
                                          }
                                          *(char *)(puVar23[5] + 4 + lVar34 * 8) = (char)iVar36;
                                          *(int32_t *)(puVar23[5] + lVar34 * 8) = 0xbf800000;
                                          if (-1 < *(int *)(lVar16 + 0x178)) {
                                            if (((*(uint *)(in_stack_00000058 + 0x60) >> 0x16 & 1)
                                                 != 0) && (4 < iVar36)) {
                                              iVar36 = 4;
                                            }
                                            if (((int)*(uint *)(in_stack_00000058 + 0x60) < 0) &&
                                               (2 < iVar36)) {
                                              iVar36 = 2;
                                            }
                                          }
                                        }
                                        puVar30 = (int32_t *)
                                                  (*(int64_t *)(lVar27 + 0x28) + lVar38);
                                        lVar16 = (int64_t)iVar36 * 0x20 + lVar28;
                                        puVar21 = *(int32_t **)(lVar16 + 8);
                                        if (puVar21 < *(int32_t **)(lVar16 + 0x10)) {
                                          uVar13 = puVar30[1];
                                          uVar4 = puVar30[2];
                                          uVar5 = puVar30[3];
                                          *puVar21 = *puVar30;
                                          puVar21[1] = uVar13;
                                          puVar21[2] = uVar4;
                                          puVar21[3] = uVar5;
                                          uVar20 = *(uint64_t *)(puVar30 + 6);
                                          *(uint64_t *)(puVar21 + 4) =
                                               *(uint64_t *)(puVar30 + 4);
                                          *(uint64_t *)(puVar21 + 6) = uVar20;
                                          *(int64_t *)(lVar16 + 8) =
                                               *(int64_t *)(lVar16 + 8) + 0x20;
                                        }
                                        else {
                                          FUN_18037f6b0();
                                        }
                                      }
LAB_180376825:
                                      iVar14 = *(int *)(unaff_RBP + -100);
                                      lVar34 = lVar34 + 1;
                                      lVar38 = lVar38 + 0x20;
                                    } while (lVar34 < *(int64_t *)(unaff_RBP + -0x50));
                                  }
                                }
                                lVar27 = func_0x00018066bd70(lVar27);
                                puVar25 = *(uint64_t **)(unaff_RBP + -0x40);
                              } while (lVar27 != *(int64_t *)(unaff_RBP + -0x48));
                              fVar43 = *(float *)(unaff_RBP + 0x158);
                              fVar45 = *(float *)(unaff_RBP + 0x154);
                              unaff_R14 = *(int64_t *)(unaff_RBP + 0x2a0);
                              iVar14 = *(int *)(unaff_RBP + -0x60);
                            }
                          }
                        }
                        iVar32 = iVar32 + 1;
                        lStack0000000000000068 = lStack0000000000000068 + -1;
                        unaff_R13 = in_stack_00000058;
                      } while (lStack0000000000000068 != 0);
                      iVar14 = *(int *)(unaff_RBP + -0x5c);
                      iVar36 = *(int *)(unaff_RBP + -0x80) + 1;
                      iVar32 = *(int *)(unaff_RBP + -0x58);
                      *(int *)(unaff_RBP + -0x80) = iVar36;
                    } while (iVar36 < 4);
                    unaff_R15 = *(int64_t *)(unaff_RBP + 0x290);
                  }
LAB_1803768c5:
                  puVar37 = *(uint **)(unaff_RBP + -0x78);
                }
                unaff_EBX = *(int *)(unaff_RBP + -0x70);
                iStack0000000000000044 = iStack0000000000000044 + 1;
                unaff_R13 = in_stack_00000058;
              } while (iStack0000000000000044 < unaff_EBX);
              unaff_EDI = *(int *)(unaff_RBP + -0x6c);
            }
            iStack0000000000000048 = iStack0000000000000048 + 1;
          } while (iStack0000000000000048 < unaff_EDI);
          uVar26 = *(uint *)(unaff_RBP + -0x7c);
          unaff_RSI = *(int64_t *)(unaff_RBP + 0x298);
        }
      }
      lVar27 = *(int64_t *)(unaff_RSI + 0x3580);
      uVar26 = uVar26 + 1;
      lStack0000000000000060 = lStack0000000000000060 + 1;
      *(uint *)(unaff_RBP + -0x7c) = uVar26;
    } while (uVar26 < *(uint *)(lVar27 + 0x110));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





