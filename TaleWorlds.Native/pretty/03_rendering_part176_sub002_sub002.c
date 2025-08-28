#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part176_sub002_sub002.c - 1 个函数

// 函数: void FUN_18037579d(int64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_18037579d(int64_t param_1,uint64_t param_2,int64_t param_3)

{
  float fVar1;
  char cVar2;
  int64_t lVar3;
  double dVar4;
  byte bVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int iVar15;
  int iVar16;
  int32_t uVar17;
  int64_t in_RAX;
  uint64_t *puVar18;
  int64_t lVar19;
  int64_t lVar20;
  int64_t *plVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  int32_t *puVar24;
  int *piVar25;
  uint64_t *puVar26;
  int64_t lVar27;
  uint64_t *puVar28;
  uint64_t *puVar29;
  uint uVar30;
  int64_t lVar31;
  int64_t lVar32;
  int32_t *puVar33;
  bool bVar34;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar35;
  uint64_t unaff_RDI;
  int64_t lVar36;
  int32_t *puVar37;
  int iVar38;
  uint *puVar39;
  uint64_t uVar40;
  int64_t lVar41;
  uint64_t in_R10;
  uint64_t unaff_R13;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  bool bStack0000000000000040;
  char cStack0000000000000041;
  int iStack0000000000000044;
  int iStack0000000000000048;
  uint64_t uStack0000000000000050;
  int64_t lStack0000000000000058;
  int64_t lStack0000000000000060;
  int64_t lStack0000000000000068;
  float fStack0000000000000070;
  char cStack0000000000000074;
  
  *(uint64_t *)(in_RAX + -0x28) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x30) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x40) = unaff_R13;
  uVar40 = *(int64_t *)(render_system_data_memory + 0xd0) - *(int64_t *)(render_system_data_memory + 200) >> 3;
  if (in_R10 == uVar40) {
    in_R10 = (uint64_t)((int)uVar40 - 1);
  }
  lVar27 = *(int64_t *)(*(int64_t *)(render_system_data_memory + 200) + (int64_t)(int)in_R10 * 8);
  iVar15 = (int)(*(int *)(param_1 + 0x2154) + (*(int *)(param_1 + 0x2154) >> 0x1f & 3U)) >> 2;
  *(int *)(unaff_RBP + -0x6c) = iVar15;
  iVar16 = (int)(*(int *)(param_1 + 0x2158) + (*(int *)(param_1 + 0x2158) >> 0x1f & 3U)) >> 2;
  cVar2 = *(char *)(param_3 + 0x140);
  *(int *)(unaff_RBP + -0x70) = iVar16;
  if (cVar2 != '\0') {
    if (*(char *)(param_3 + 0x141) == '\0') {
      iVar38 = (int)((*(int64_t *)(param_3 + 0x88) - *(int64_t *)(param_3 + 0x80)) / 0x28);
    }
    else {
      iVar38 = (int)*(uint64_t *)(param_3 + 0x148);
    }
    if ((iVar38 != 0) && (*(int *)(param_3 + 0x54) != 0)) {
      lVar31 = 2;
      puVar29 = (uint64_t *)(unaff_RSI + 0x30);
      puVar26 = (uint64_t *)(unaff_RBP + 0x60);
      do {
        puVar28 = puVar26;
        puVar18 = puVar29;
        uVar23 = puVar18[1];
        uVar22 = puVar18[2];
        uVar13 = puVar18[3];
        *puVar28 = *puVar18;
        puVar28[1] = uVar23;
        uVar23 = puVar18[4];
        uVar14 = puVar18[5];
        puVar28[2] = uVar22;
        puVar28[3] = uVar13;
        uVar22 = puVar18[6];
        uVar13 = puVar18[7];
        puVar28[4] = uVar23;
        puVar28[5] = uVar14;
        uVar23 = puVar18[8];
        uVar14 = puVar18[9];
        puVar28[6] = uVar22;
        puVar28[7] = uVar13;
        uVar22 = puVar18[10];
        uVar13 = puVar18[0xb];
        puVar28[8] = uVar23;
        puVar28[9] = uVar14;
        uVar23 = puVar18[0xc];
        uVar14 = puVar18[0xd];
        puVar28[10] = uVar22;
        puVar28[0xb] = uVar13;
        uVar22 = puVar18[0xe];
        uVar13 = puVar18[0xf];
        puVar28[0xc] = uVar23;
        puVar28[0xd] = uVar14;
        puVar28[0xe] = uVar22;
        puVar28[0xf] = uVar13;
        lVar31 = lVar31 + -1;
        puVar29 = puVar18 + 0x10;
        puVar26 = puVar28 + 0x10;
      } while (lVar31 != 0);
      uVar23 = puVar18[0x11];
      uVar22 = puVar18[0x12];
      uVar13 = puVar18[0x13];
      fVar1 = *(float *)(lVar27 + 100);
      puVar28[0x10] = puVar18[0x10];
      puVar28[0x11] = uVar23;
      uVar17 = *(int32_t *)(puVar18 + 0x14);
      uVar6 = *(int32_t *)((int64_t)puVar18 + 0xa4);
      uVar7 = *(int32_t *)(puVar18 + 0x15);
      uVar8 = *(int32_t *)((int64_t)puVar18 + 0xac);
      puVar28[0x12] = uVar22;
      puVar28[0x13] = uVar13;
      uVar9 = *(int32_t *)(puVar18 + 0x16);
      uVar10 = *(int32_t *)((int64_t)puVar18 + 0xb4);
      uVar11 = *(int32_t *)(puVar18 + 0x17);
      uVar12 = *(int32_t *)((int64_t)puVar18 + 0xbc);
      *(int32_t *)(puVar28 + 0x14) = uVar17;
      *(int32_t *)((int64_t)puVar28 + 0xa4) = uVar6;
      *(int32_t *)(puVar28 + 0x15) = uVar7;
      *(int32_t *)((int64_t)puVar28 + 0xac) = uVar8;
      *(int32_t *)(puVar28 + 0x16) = uVar9;
      *(int32_t *)((int64_t)puVar28 + 0xb4) = uVar10;
      *(int32_t *)(puVar28 + 0x17) = uVar11;
      *(int32_t *)((int64_t)puVar28 + 0xbc) = uVar12;
      bVar5 = (byte)((uint)*(int32_t *)(lVar27 + 0x60) >> 0x18);
      uVar17 = 0x31;
      if ((~(bVar5 >> 4) & 1) == 0) {
        uVar17 = 1;
      }
      *(int32_t *)(unaff_RBP + -0x68) = uVar17;
      _cStack0000000000000074 = (uint)(bVar5 >> 5 & 1);
      fStack0000000000000070 =
           ((float)*(int *)(SYSTEM_STATE_MANAGER + 0xe0) * 0.125 + 0.5) *
           *(float *)(system_main_module_state + 0x3a4);
      if ((*(char *)(*(int64_t *)(unaff_R15 + 0x2148) + 0x3f62) == '\0') ||
         (*(int *)(render_system_data_memory + 0x7e0) != 0)) {
        fStack0000000000000070 = 3.4028235e+38;
      }
      lStack0000000000000058 = lVar27;
      dVar4 = (double)FUN_180629810();
      lVar31 = *(int64_t *)(unaff_RSI + 0x3580);
      uVar30 = 0;
      *(int32_t *)(unaff_RBP + -0x7c) = 0;
      fVar48 = (float)dVar4;
      if (*(int *)(lVar31 + 0x110) != 0) {
        fVar45 = *(float *)(unaff_RBP + 0x158);
        fVar47 = *(float *)(unaff_RBP + 0x154);
        lStack0000000000000060 = 0;
        do {
          puVar39 = *(uint **)(lVar31 + 0x118 + lStack0000000000000060 * 8);
          *(uint **)(unaff_RBP + -0x78) = puVar39;
          if ((((*puVar39 & *(uint *)(unaff_RBP + -0x68)) != 0) && (puVar39[0x5e] != 3)) &&
             ((puVar39[1] >> 0x18 & 1) == 0)) {
            lVar31 = *(int64_t *)(puVar39 + 0xd60);
            if (((lVar31 == 0) || (*(int *)(lVar31 + 0x110) == 0)) ||
               ((*(uint **)(lVar31 + 0x118) != puVar39 ||
                (cStack0000000000000041 = '\x01', (puVar39[0x6f6] & 0x20) == 0)))) {
              cStack0000000000000041 = '\0';
            }
            iStack0000000000000048 = 0;
            if (0 < iVar15) {
              do {
                iStack0000000000000044 = 0;
                if (0 < iVar16) {
                  do {
                    lVar31 = *(int64_t *)(unaff_R14 + 0x138);
                    lVar36 = (int64_t)
                             (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                             iStack0000000000000044) * 0x130;
                    lVar32 = lVar31 + 8 + lVar36;
                    lVar41 = lVar31 + 0xc0 + lVar36;
                    fVar44 = *(float *)(lVar32 + 0x20) - *(float *)(unaff_RBP + 0x150);
                    fVar42 = *(float *)(lVar32 + 0x24) - fVar47;
                    fVar43 = *(float *)(lVar32 + 0x28) - fVar45;
                    if (*(int *)(lVar27 + 0x60) < 0) {
                      fVar49 = 5.0;
                    }
                    else {
                      fVar49 = 1.0;
                    }
                    fVar46 = 1.0;
                    if ((((puVar39[1] & 0x8000) == 0) && ((*puVar39 & 1) == 1)) &&
                       (*(int64_t *)(lVar36 + 0x118 + lVar31) != 0)) {
                      bVar34 = true;
                    }
                    else {
                      bVar34 = false;
                    }
                    if (*(float *)(lVar41 + 0x30) != 0.0) {
                      if (cStack0000000000000041 == '\0') {
                        iVar16 = FUN_18063c930(puVar39 + 0xc);
                      }
                      else {
                        iVar16 = FUN_1801b8ce0(*(int64_t *)(unaff_R15 + 0x2148) + 0x2998,
                                               puVar39 + 0xc,lVar32,lVar41,&system_data_0300);
                      }
                      if (iVar16 != 0) {
                        if (bVar34) {
                          if ((cStack0000000000000074 != '\0') ||
                             (fVar44 * fVar44 + fVar42 * fVar42 + fVar43 * fVar43 <=
                              fStack0000000000000070)) {
                            lVar41 = (int64_t)
                                     (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                                     iStack0000000000000044) * 0x130;
                            lVar32 = *(int64_t *)(unaff_R14 + 0x138);
                            if (*(int *)(lVar41 + 0xf4 + lVar32) == 2) {
                              if ((*(uint *)(lVar27 + 0x60) & 0x800000) == 0) {
                                *(int32_t *)(lVar41 + 0xf4 + lVar32) = 1;
                                *(float *)((int64_t)
                                           (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                                           iStack0000000000000044) * 0x130 + 0x128 +
                                          *(int64_t *)(unaff_R14 + 0x138)) = fVar48;
                              }
                              else {
                                *(int32_t *)(lVar41 + 0xf4 + lVar32) = 0;
                              }
                            }
                            lVar41 = (int64_t)
                                     (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                                     iStack0000000000000044) * 0x130;
                            lVar32 = *(int64_t *)(unaff_R14 + 0x138);
                            if (*(int *)(lVar41 + 0xf4 + lVar32) == 1) {
                              fVar42 = (fVar48 - *(float *)(lVar41 + 0x128 + lVar32)) * fVar49;
                              if (fVar42 <= 0.001) {
                                fVar42 = 0.001;
                              }
                              fVar42 = -fVar42;
                              bVar34 = fVar42 < -1.0;
                              if (bVar34) {
                                fVar42 = -1.0;
                                *(int32_t *)(lVar41 + 0xf4 + lVar32) = 0;
                              }
                              bStack0000000000000040 = !bVar34;
                              for (lVar32 = *(int64_t *)(lVar36 + 0x100 + lVar31);
                                  lVar32 != lVar31 + 0xf8 + lVar36;
                                  lVar32 = func_0x00018066bd70(lVar32)) {
                                lVar41 = FUN_18046c710(*(uint64_t *)(unaff_RBP + 0x2a8),
                                                       *(uint64_t *)(lVar32 + 0x20));
                                lVar41 = *(int64_t *)(lVar41 + 0x18);
                                lVar35 = ((int64_t)*(int *)(unaff_R15 + 0x2140) * 0x20 +
                                         lStack0000000000000060) * 0x100;
                                iVar16 = (int)(*(int64_t *)(lVar32 + 0x30) -
                                               *(int64_t *)(lVar32 + 0x28) >> 5);
                                lVar19 = (int64_t)iVar16;
                                if (0 < iVar16) {
                                  lVar27 = 0;
                                  do {
                                    puVar37 = *(int32_t **)(lVar35 + 0x18 + lVar41);
                                    puVar33 = (int32_t *)
                                              (*(int64_t *)(lVar32 + 0x28) + 0x10 + lVar27);
                                    uVar9 = puVar33[1];
                                    uVar10 = puVar33[2];
                                    uVar11 = puVar33[3];
                                    puVar24 = (int32_t *)(*(int64_t *)(lVar32 + 0x28) + lVar27);
                                    uVar17 = *puVar24;
                                    uVar6 = puVar24[1];
                                    uVar7 = puVar24[2];
                                    uVar8 = puVar24[3];
                                    *(int32_t *)(unaff_RBP + 0x38) = *puVar33;
                                    *(int32_t *)(unaff_RBP + 0x3c) = uVar9;
                                    *(int32_t *)(unaff_RBP + 0x40) = uVar10;
                                    *(int32_t *)(unaff_RBP + 0x44) = uVar11;
                                    *(float *)(unaff_RBP + 0x44) = fVar42;
                                    if (puVar37 < *(int32_t **)(lVar35 + 0x20 + lVar41)) {
                                      uVar9 = *(int32_t *)(unaff_RBP + 0x38);
                                      uVar10 = *(int32_t *)(unaff_RBP + 0x3c);
                                      uVar11 = *(int32_t *)(unaff_RBP + 0x40);
                                      uVar12 = *(int32_t *)(unaff_RBP + 0x44);
                                      *(int32_t **)(lVar35 + 0x18 + lVar41) = puVar37 + 8;
                                      *puVar37 = uVar17;
                                      puVar37[1] = uVar6;
                                      puVar37[2] = uVar7;
                                      puVar37[3] = uVar8;
                                      puVar37[4] = uVar9;
                                      puVar37[5] = uVar10;
                                      puVar37[6] = uVar11;
                                      puVar37[7] = uVar12;
                                    }
                                    else {
                                      puVar24 = *(int32_t **)(lVar35 + 0x10 + lVar41);
                                      lVar20 = (int64_t)puVar37 - (int64_t)puVar24 >> 5;
                                      if (lVar20 == 0) {
                                        lVar20 = 1;
LAB_1803760d1:
                                        puVar33 = (int32_t *)
                                                  CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar20 << 5,
                                                                *(int8_t *)
                                                                 (lVar35 + 0x28 + lVar41));
                                        puVar24 = *(int32_t **)(lVar35 + 0x10 + lVar41);
                                        puVar37 = *(int32_t **)(lVar35 + 0x18 + lVar41);
                                      }
                                      else {
                                        lVar20 = lVar20 * 2;
                                        if (lVar20 != 0) goto LAB_1803760d1;
                                        puVar33 = (int32_t *)0x0;
                                      }
                                      if (puVar24 != puVar37) {
                    // WARNING: Subroutine does not return
                                        memmove(puVar33,puVar24,
                                                (int64_t)puVar37 - (int64_t)puVar24);
                                      }
                                      uVar9 = *(int32_t *)(unaff_RBP + 0x38);
                                      uVar10 = *(int32_t *)(unaff_RBP + 0x3c);
                                      uVar11 = *(int32_t *)(unaff_RBP + 0x40);
                                      uVar12 = *(int32_t *)(unaff_RBP + 0x44);
                                      *puVar33 = uVar17;
                                      puVar33[1] = uVar6;
                                      puVar33[2] = uVar7;
                                      puVar33[3] = uVar8;
                                      puVar33[4] = uVar9;
                                      puVar33[5] = uVar10;
                                      puVar33[6] = uVar11;
                                      puVar33[7] = uVar12;
                                      if (*(int64_t *)(lVar35 + 0x10 + lVar41) != 0) {
                    // WARNING: Subroutine does not return
                                        CoreEngineMemoryPoolCleaner();
                                      }
                                      *(int32_t **)(lVar35 + 0x10 + lVar41) = puVar33;
                                      *(int32_t **)(lVar35 + 0x20 + lVar41) =
                                           puVar33 + lVar20 * 8;
                                      *(int32_t **)(lVar35 + 0x18 + lVar41) = puVar33 + 8;
                                    }
                                    lVar27 = lVar27 + 0x20;
                                    lVar19 = lVar19 + -1;
                                  } while (lVar19 != 0);
                                  unaff_R15 = *(int64_t *)(unaff_RBP + 0x290);
                                  lVar27 = lStack0000000000000058;
                                }
                              }
                              if (!bVar34) goto LAB_18037619a;
                            }
                          }
                          else {
                            lVar41 = (int64_t)
                                     (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                                     iStack0000000000000044) * 0x130;
                            lVar32 = *(int64_t *)(unaff_R14 + 0x138);
                            if (*(int *)(lVar41 + 0xf4 + lVar32) == 0) {
                              if ((*(uint *)(lVar27 + 0x60) & 0x800000) == 0) {
                                *(int32_t *)(lVar41 + 0xf4 + lVar32) = 1;
                                *(float *)((int64_t)
                                           (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                                           iStack0000000000000044) * 0x130 + 0x128 +
                                          *(int64_t *)(unaff_R14 + 0x138)) = fVar48;
                              }
                              else {
                                *(int32_t *)(lVar41 + 0xf4 + lVar32) = 2;
                              }
                            }
                            bStack0000000000000040 = false;
                            lVar41 = (int64_t)
                                     (*(int *)(unaff_R14 + 0x60) * iStack0000000000000048 +
                                     iStack0000000000000044) * 0x130;
                            lVar32 = *(int64_t *)(unaff_R14 + 0x138);
                            if (*(int *)(lVar41 + 0xf4 + lVar32) == 1) {
                              bStack0000000000000040 = true;
                              fVar46 = (fVar48 - *(float *)(lVar41 + 0x128 + lVar32)) * fVar49;
                              if (fVar46 <= 0.001) {
                                fVar46 = 0.001;
                              }
                              if (1.0 < fVar46) {
                                fVar46 = 1.0;
                                *(int32_t *)(lVar41 + 0xf4 + lVar32) = 2;
                                bStack0000000000000040 = false;
                              }
                            }
                            lVar32 = *(int64_t *)(lVar36 + 0x100 + lVar31);
                            while (lVar32 != lVar31 + 0xf8 + lVar36) {
                              lVar19 = FUN_18046c710(*(uint64_t *)(unaff_RBP + 0x2a8),
                                                     *(uint64_t *)(lVar32 + 0x20));
                              lVar41 = *(int64_t *)(lVar19 + 0x18);
                              *(int32_t *)(lVar19 + 0xc) = 7;
                              uStack0000000000000050 =
                                   (uint64_t)
                                   (int)(*(int64_t *)(lVar32 + 0x30) - *(int64_t *)(lVar32 + 0x28)
                                        >> 5);
                              lVar35 = ((int64_t)*(int *)(unaff_R15 + 0x2140) * 0x20 +
                                       lStack0000000000000060) * 0x100;
                              lVar19 = *(int64_t *)(lVar35 + 0x10 + lVar41);
                              if ((uint64_t)(*(int64_t *)(lVar35 + 0x20 + lVar41) - lVar19 >> 5) <
                                  uStack0000000000000050) {
                                if (uStack0000000000000050 == 0) {
                                  lVar20 = 0;
                                }
                                else {
                                  lVar20 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uStack0000000000000050 << 5,
                                                         *(int8_t *)(lVar35 + 0x28 + lVar41));
                                  lVar19 = *(int64_t *)(lVar35 + 0x10 + lVar41);
                                }
                                lVar3 = *(int64_t *)(lVar35 + 0x18 + lVar41);
                                if (lVar19 != lVar3) {
                    // WARNING: Subroutine does not return
                                  memmove(lVar20,lVar19,lVar3 - lVar19);
                                }
                                if (lVar19 != 0) {
                    // WARNING: Subroutine does not return
                                  CoreEngineMemoryPoolCleaner();
                                }
                                *(int64_t *)(lVar35 + 0x10 + lVar41) = lVar20;
                                *(int64_t *)(lVar35 + 0x18 + lVar41) = lVar20;
                                *(uint64_t *)(lVar35 + 0x20 + lVar41) =
                                     uStack0000000000000050 * 0x20 + lVar20;
                              }
                              if (0 < (int64_t)uStack0000000000000050) {
                                lVar19 = 0;
                                do {
                                  puVar37 = *(int32_t **)(lVar35 + 0x18 + lVar41);
                                  puVar33 = (int32_t *)
                                            (*(int64_t *)(lVar32 + 0x28) + 0x10 + lVar19);
                                  uVar9 = puVar33[1];
                                  uVar10 = puVar33[2];
                                  uVar11 = puVar33[3];
                                  puVar24 = (int32_t *)(*(int64_t *)(lVar32 + 0x28) + lVar19);
                                  uVar17 = *puVar24;
                                  uVar6 = puVar24[1];
                                  uVar7 = puVar24[2];
                                  uVar8 = puVar24[3];
                                  *(int32_t *)(unaff_RBP + 0x18) = *puVar33;
                                  *(int32_t *)(unaff_RBP + 0x1c) = uVar9;
                                  *(int32_t *)(unaff_RBP + 0x20) = uVar10;
                                  *(int32_t *)(unaff_RBP + 0x24) = uVar11;
                                  *(float *)(unaff_RBP + 0x24) = fVar46;
                                  if (puVar37 < *(int32_t **)(lVar35 + 0x20 + lVar41)) {
                                    uVar9 = *(int32_t *)(unaff_RBP + 0x18);
                                    uVar10 = *(int32_t *)(unaff_RBP + 0x1c);
                                    uVar11 = *(int32_t *)(unaff_RBP + 0x20);
                                    uVar12 = *(int32_t *)(unaff_RBP + 0x24);
                                    *(int32_t **)(lVar35 + 0x18 + lVar41) = puVar37 + 8;
                                    *puVar37 = uVar17;
                                    puVar37[1] = uVar6;
                                    puVar37[2] = uVar7;
                                    puVar37[3] = uVar8;
                                    puVar37[4] = uVar9;
                                    puVar37[5] = uVar10;
                                    puVar37[6] = uVar11;
                                    puVar37[7] = uVar12;
                                  }
                                  else {
                                    puVar24 = *(int32_t **)(lVar35 + 0x10 + lVar41);
                                    lVar27 = (int64_t)puVar37 - (int64_t)puVar24 >> 5;
                                    if (lVar27 == 0) {
                                      lVar27 = 1;
LAB_180375e41:
                                      puVar33 = (int32_t *)
                                                CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar27 << 5,
                                                              *(int8_t *)
                                                               (lVar35 + 0x28 + lVar41));
                                      puVar24 = *(int32_t **)(lVar35 + 0x10 + lVar41);
                                      puVar37 = *(int32_t **)(lVar35 + 0x18 + lVar41);
                                    }
                                    else {
                                      lVar27 = lVar27 * 2;
                                      if (lVar27 != 0) goto LAB_180375e41;
                                      puVar33 = (int32_t *)0x0;
                                    }
                                    if (puVar24 != puVar37) {
                    // WARNING: Subroutine does not return
                                      memmove(puVar33,puVar24,(int64_t)puVar37 - (int64_t)puVar24)
                                      ;
                                    }
                                    uVar9 = *(int32_t *)(unaff_RBP + 0x18);
                                    uVar10 = *(int32_t *)(unaff_RBP + 0x1c);
                                    uVar11 = *(int32_t *)(unaff_RBP + 0x20);
                                    uVar12 = *(int32_t *)(unaff_RBP + 0x24);
                                    *puVar33 = uVar17;
                                    puVar33[1] = uVar6;
                                    puVar33[2] = uVar7;
                                    puVar33[3] = uVar8;
                                    puVar33[4] = uVar9;
                                    puVar33[5] = uVar10;
                                    puVar33[6] = uVar11;
                                    puVar33[7] = uVar12;
                                    if (*(int64_t *)(lVar35 + 0x10 + lVar41) != 0) {
                    // WARNING: Subroutine does not return
                                      CoreEngineMemoryPoolCleaner();
                                    }
                                    *(int32_t **)(lVar35 + 0x10 + lVar41) = puVar33;
                                    *(int32_t **)(lVar35 + 0x20 + lVar41) = puVar33 + lVar27 * 8;
                                    *(int32_t **)(lVar35 + 0x18 + lVar41) = puVar33 + 8;
                                  }
                                  lVar19 = lVar19 + 0x20;
                                  uStack0000000000000050 = uStack0000000000000050 - 1;
                                  lVar27 = lStack0000000000000058;
                                } while (uStack0000000000000050 != 0);
                              }
                              lVar32 = func_0x00018066bd70(lVar32);
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
                        iVar38 = 0;
                        *(int32_t *)(unaff_RBP + -0x80) = 0;
                        iVar16 = iStack0000000000000048 * 4;
                        iVar15 = iStack0000000000000044 * 4;
                        *(int *)(unaff_RBP + -0x5c) = iVar16;
                        *(int *)(unaff_RBP + -0x58) = iVar15;
                        do {
                          unaff_R14 = *(int64_t *)(unaff_RBP + 0x2a0);
                          iVar16 = iVar16 + iVar38;
                          *(int *)(unaff_RBP + -0x60) = iVar16;
                          lStack0000000000000068 = 4;
                          do {
                            lVar31 = *(int64_t *)(unaff_R14 + 0x110);
                            iVar38 = *(int *)(unaff_R14 + 0x58) * iVar16 + iVar15;
                            uVar40 = (uint64_t)(int64_t)iVar38 %
                                     (uint64_t)*(uint *)(unaff_R14 + 0x118);
                            for (piVar25 = *(int **)(lVar31 + uVar40 * 8); piVar25 != (int *)0x0;
                                piVar25 = *(int **)(piVar25 + 4)) {
                              if (iVar38 == *piVar25) {
                                if (piVar25 != (int *)0x0) {
                                  lVar32 = *(int64_t *)(unaff_R14 + 0x118);
                                  *(int **)(unaff_RBP + -0x30) = piVar25;
                                  plVar21 = (int64_t *)(unaff_RBP + -0x30);
                                  *(uint64_t *)(unaff_RBP + -0x28) = lVar31 + uVar40 * 8;
                                  goto LAB_18037624d;
                                }
                                break;
                              }
                            }
                            lVar32 = *(int64_t *)(unaff_R14 + 0x118);
                            *(uint64_t *)(unaff_RBP + -0x20) =
                                 *(uint64_t *)(lVar31 + lVar32 * 8);
                            plVar21 = (int64_t *)(unaff_RBP + -0x20);
                            *(int64_t *)(unaff_RBP + -0x18) = lVar31 + lVar32 * 8;
LAB_18037624d:
                            if ((*plVar21 != *(int64_t *)(lVar31 + lVar32 * 8)) &&
                               (lVar31 = FUN_180372570(unaff_R14,iVar16,iVar15),
                               *(int64_t *)(lVar31 + 0x108) != 0)) {
                              lVar31 = FUN_180372570(unaff_R14,iVar16,iVar15);
                              lVar32 = FUN_180372570(unaff_R14,iVar16,iVar15);
                              fVar42 = *(float *)(lVar31 + 0x38) - *(float *)(unaff_RBP + 0x150);
                              fVar44 = *(float *)(lVar31 + 0x3c) - fVar47;
                              fVar43 = *(float *)(lVar31 + 0x40) - fVar45;
                              fVar42 = SQRT(fVar44 * fVar44 + fVar42 * fVar42 + fVar43 * fVar43) -
                                       *(float *)(lVar31 + 0x48);
                              if (((cStack0000000000000074 == '\0') || (fVar42 <= fVar1)) &&
                                 ((((-1 < *(int *)(lVar27 + 0x60) ||
                                    (0 < *(int *)(SYSTEM_STATE_MANAGER + 0xe0))) || (fVar42 <= 120.0)) &&
                                  (iVar38 = FUN_1801b8ce0(*(int64_t *)
                                                           (*(int64_t *)(unaff_RBP + 0x290) +
                                                           0x2148) + 0x2998,
                                                          *(int64_t *)(unaff_RBP + -0x78) + 0x30,
                                                          lVar32 + 0x4c,lVar31 + 0x18,&system_data_0300
                                                         ), iVar38 != 0)))) {
                                lVar31 = FUN_180372570(unaff_R14,iVar16,iVar15);
                                uVar30 = *(uint *)(unaff_R14 + 0x118);
                                iVar38 = *(int *)(unaff_R14 + 0x58);
                                lVar27 = *(int64_t *)(unaff_R14 + 0x110);
                                *(int64_t *)(unaff_RBP + -0x48) = lVar31 + 0x118;
                                iVar38 = iVar38 * iVar16 + iVar15;
                                for (piVar25 = *(int **)(lVar27 + ((uint64_t)(int64_t)iVar38 %
                                                                  (uint64_t)uVar30) * 8);
                                    piVar25 != (int *)0x0; piVar25 = *(int **)(piVar25 + 4)) {
                                  if (iVar38 == *piVar25) {
                                    lVar32 = *(int64_t *)(unaff_R14 + 0x118);
                                    goto LAB_1803763e0;
                                  }
                                }
                                lVar32 = *(int64_t *)(unaff_R14 + 0x118);
                                piVar25 = *(int **)(lVar27 + lVar32 * 8);
LAB_1803763e0:
                                if (piVar25 == *(int **)(lVar27 + lVar32 * 8)) {
                                  uVar22 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x178,8,3);
                                  uVar23 = *(uint64_t *)(unaff_R14 + 0x68);
                                  *(int *)(unaff_RBP + -0x10) = iVar38;
                                  uVar23 = FUN_180372430(uVar22,uVar23);
                                  *(uint64_t *)(unaff_RBP + -8) = uVar23;
                                  puVar24 = (int32_t *)
                                            FUN_18037f020(unaff_R14 + 0x108,unaff_RBP + 0x48,
                                                          unaff_RBP + -0x10);
                                  uVar17 = puVar24[1];
                                  uVar6 = puVar24[2];
                                  uVar7 = puVar24[3];
                                  *(int32_t *)(unaff_RBP + -0x40) = *puVar24;
                                  *(int32_t *)(unaff_RBP + -0x3c) = uVar17;
                                  *(int32_t *)(unaff_RBP + -0x38) = uVar6;
                                  *(int32_t *)(unaff_RBP + -0x34) = uVar7;
                                  piVar25 = *(int **)(unaff_RBP + -0x40);
                                }
                                lVar27 = *(int64_t *)(lVar31 + 0x120);
                                puVar29 = (uint64_t *)(*(int64_t *)(piVar25 + 2) + 0x148);
                                *(uint64_t **)(unaff_RBP + -0x40) = puVar29;
                                if (lVar27 != lVar31 + 0x118) {
                                  do {
                                    plVar21 = *(int64_t **)(lVar27 + 0x20);
                                    puVar18 = (uint64_t *)puVar29[2];
                                    puVar26 = puVar29;
                                    while (puVar28 = puVar18, puVar28 != (uint64_t *)0x0) {
                                      if ((int64_t *)puVar28[4] < plVar21) {
                                        puVar18 = (uint64_t *)*puVar28;
                                      }
                                      else {
                                        puVar18 = (uint64_t *)puVar28[1];
                                        puVar26 = puVar28;
                                      }
                                    }
                                    if ((puVar26 == puVar29) || (plVar21 < (int64_t *)puVar26[4]))
                                    {
                                      puVar26 = (uint64_t *)FUN_18037f530();
                                      puVar26 = (uint64_t *)*puVar26;
                                    }
                                    lVar31 = *(int64_t *)(lVar27 + 0x30);
                                    lVar32 = *(int64_t *)(lVar27 + 0x28);
                                    iVar16 = (int)plVar21[0xb];
                                    *(int *)(unaff_RBP + -100) = iVar16;
                                    iVar38 = (int)(lVar31 - lVar32 >> 5);
                                    if (0 < iVar38) {
                                      lVar31 = FUN_18046c710(*(uint64_t *)(unaff_RBP + 0x2a8));
                                      lVar32 = 0;
                                      lVar31 = *(int64_t *)(lVar31 + 0x18) +
                                               ((int64_t)
                                                *(int *)(*(int64_t *)(unaff_RBP + 0x290) + 0x2140)
                                                * 0x20 + lStack0000000000000060) * 0x100 + 0x10;
                                      *(int64_t *)(unaff_RBP + -0x50) = (int64_t)iVar38;
                                      if (0 < iVar38) {
                                        lVar41 = 0;
                                        lVar36 = lStack0000000000000058;
                                        do {
                                          lVar19 = *(int64_t *)(lVar27 + 0x28);
                                          fVar43 = (float)modff(*(float *)(lVar41 + 4 + lVar19) +
                                                                *(float *)(lVar41 + lVar19) +
                                                                *(float *)(lVar41 + 8 + lVar19) +
                                                                *(float *)(lVar41 + 0x18 + lVar19),
                                                                unaff_RBP + -0x54);
                                          lVar19 = *(int64_t *)(lVar27 + 0x28);
                                          uVar30 = *(uint *)(lVar36 + 0x60);
                                          fVar45 = *(float *)(lVar41 + lVar19);
                                          fVar47 = *(float *)(lVar41 + 4 + lVar19);
                                          fVar42 = *(float *)(lVar41 + 8 + lVar19);
                                          if ((uVar30 >> 0x16 & 1) == 0) {
                                            fVar44 = 0.0;
                                          }
                                          else if (*(code **)(*plVar21 + 0x198) ==
                                                   (code *)&rendering_buffer_2544_ptr) {
                                            fVar44 = *(float *)((int64_t)plVar21 + 0x244);
                                          }
                                          else {
                                            lVar19 = (**(code **)(*plVar21 + 0x198))();
                                            uVar30 = *(uint *)(lVar36 + 0x60);
                                            fVar44 = *(float *)(lVar19 + 0x30);
                                          }
                                          if (*(int *)(render_system_data_memory + 0x7e0) == 0) {
                                            if ((*(int64_t *)(system_main_module_state + 0x3d8) == 0) ||
                                               (*(int *)(*(int64_t *)(system_main_module_state + 0x3d8) +
                                                        0x110) != 3)) {
                                              iVar38 = *(int *)(*(int64_t *)(unaff_RBP + 0x290) +
                                                               0x2310);
                                              if (iVar38 == -1) {
                                                fVar45 = fVar45 - *(float *)(unaff_RBP + 0x150);
                                                fVar47 = fVar47 - *(float *)(unaff_RBP + 0x154);
                                                fVar42 = fVar42 - *(float *)(unaff_RBP + 0x158);
                                                fVar45 = SQRT(fVar45 * fVar45 + fVar47 * fVar47 +
                                                              fVar42 * fVar42) -
                                                         ((fVar43 * 2.0 - 1.0) * 5.0 + fVar44);
                                                if (fVar45 <= 0.0) {
                                                  fVar45 = 0.0;
                                                }
                                                fVar45 = fVar45 * 0.2;
                                                if (127.0 <= fVar45) {
                                                  fVar45 = 127.0;
                                                }
                                                iVar38 = (int)*(char *)((int64_t)(int)fVar45 + 8 +
                                                                       *(int64_t *)
                                                                        (unaff_RBP + 0x290));
                                              }
                                              if (iVar16 <= iVar38) {
                                                iVar38 = iVar16 + -1;
                                              }
                                            }
                                            else {
                                              iVar38 = 0;
                                            }
                                          }
                                          else {
                                            iVar38 = 0;
                                          }
                                          lVar19 = *(int64_t *)(unaff_RBP + -0x78);
                                          lVar35 = puVar26[5];
                                          if ((*(uint *)(lVar19 + 4) & 0x200000) == 0) {
                                            iVar16 = (int)*(char *)(lVar35 + 4 + lVar32 * 8);
                                          }
                                          else {
                                            iVar16 = 4;
                                            iVar38 = 4;
                                          }
                                          if ((-1 < (int)uVar30) || (*(int *)(lVar19 + 0x178) < 2))
                                          {
                                            if (iVar38 != iVar16) {
                                              fVar45 = *(float *)(lVar35 + lVar32 * 8);
                                              if (fVar45 == -1.0) {
                                                *(float *)(lVar35 + lVar32 * 8) = fVar48;
                                                fVar45 = fVar48;
                                              }
                                              fVar45 = (fVar48 - fVar45) * fVar49;
                                              if (fVar45 <= 0.001) {
                                                fVar45 = 0.001;
                                              }
                                              if (fVar45 <= 1.0) {
                                                puVar33 = (int32_t *)
                                                          (*(int64_t *)(lVar27 + 0x28) + lVar41);
                                                lVar36 = (int64_t)iVar38 * 0x20 + lVar31;
                                                puVar24 = *(int32_t **)(lVar36 + 8);
                                                if (puVar24 < *(int32_t **)(lVar36 + 0x10)) {
                                                  uVar17 = puVar33[1];
                                                  uVar6 = puVar33[2];
                                                  uVar7 = puVar33[3];
                                                  *puVar24 = *puVar33;
                                                  puVar24[1] = uVar17;
                                                  puVar24[2] = uVar6;
                                                  puVar24[3] = uVar7;
                                                  uVar23 = *(uint64_t *)(puVar33 + 6);
                                                  *(uint64_t *)(puVar24 + 4) =
                                                       *(uint64_t *)(puVar33 + 4);
                                                  *(uint64_t *)(puVar24 + 6) = uVar23;
                                                  *(int64_t *)(lVar36 + 8) =
                                                       *(int64_t *)(lVar36 + 8) + 0x20;
                                                }
                                                else {
                                                  FUN_18037f6b0(lVar36);
                                                }
                                                lVar19 = (int64_t)iVar16 * 0x20 + lVar31;
                                                *(float *)(*(int64_t *)(lVar36 + 8) + -4) = fVar45;
                                                puVar33 = (int32_t *)
                                                          (*(int64_t *)(lVar27 + 0x28) + lVar41);
                                                puVar24 = *(int32_t **)(lVar19 + 8);
                                                if (puVar24 < *(int32_t **)(lVar19 + 0x10)) {
                                                  uVar17 = puVar33[1];
                                                  uVar6 = puVar33[2];
                                                  uVar7 = puVar33[3];
                                                  *puVar24 = *puVar33;
                                                  puVar24[1] = uVar17;
                                                  puVar24[2] = uVar6;
                                                  puVar24[3] = uVar7;
                                                  uVar23 = *(uint64_t *)(puVar33 + 6);
                                                  *(uint64_t *)(puVar24 + 4) =
                                                       *(uint64_t *)(puVar33 + 4);
                                                  *(uint64_t *)(puVar24 + 6) = uVar23;
                                                  *(int64_t *)(lVar19 + 8) =
                                                       *(int64_t *)(lVar19 + 8) + 0x20;
                                                }
                                                else {
                                                  FUN_18037f6b0();
                                                }
                                                *(float *)(*(int64_t *)(lVar19 + 8) + -4) = -fVar45
                                                ;
                                                lVar36 = lStack0000000000000058;
                                                goto LAB_180376825;
                                              }
                                              *(char *)(puVar26[5] + 4 + lVar32 * 8) = (char)iVar38;
                                              *(int32_t *)(puVar26[5] + lVar32 * 8) = 0xbf800000;
                                              if (-1 < *(int *)(lVar19 + 0x178)) {
                                                if (((*(uint *)(lVar36 + 0x60) >> 0x16 & 1) != 0) &&
                                                   (4 < iVar38)) {
                                                  iVar38 = 4;
                                                }
                                                if (((int)*(uint *)(lVar36 + 0x60) < 0) &&
                                                   (2 < iVar38)) {
                                                  iVar38 = 2;
                                                }
                                              }
                                            }
                                            puVar33 = (int32_t *)
                                                      (*(int64_t *)(lVar27 + 0x28) + lVar41);
                                            lVar19 = (int64_t)iVar38 * 0x20 + lVar31;
                                            puVar24 = *(int32_t **)(lVar19 + 8);
                                            if (puVar24 < *(int32_t **)(lVar19 + 0x10)) {
                                              uVar17 = puVar33[1];
                                              uVar6 = puVar33[2];
                                              uVar7 = puVar33[3];
                                              *puVar24 = *puVar33;
                                              puVar24[1] = uVar17;
                                              puVar24[2] = uVar6;
                                              puVar24[3] = uVar7;
                                              uVar23 = *(uint64_t *)(puVar33 + 6);
                                              *(uint64_t *)(puVar24 + 4) =
                                                   *(uint64_t *)(puVar33 + 4);
                                              *(uint64_t *)(puVar24 + 6) = uVar23;
                                              *(int64_t *)(lVar19 + 8) =
                                                   *(int64_t *)(lVar19 + 8) + 0x20;
                                            }
                                            else {
                                              FUN_18037f6b0();
                                            }
                                          }
LAB_180376825:
                                          iVar16 = *(int *)(unaff_RBP + -100);
                                          lVar32 = lVar32 + 1;
                                          lVar41 = lVar41 + 0x20;
                                        } while (lVar32 < *(int64_t *)(unaff_RBP + -0x50));
                                      }
                                    }
                                    lVar27 = func_0x00018066bd70(lVar27);
                                    puVar29 = *(uint64_t **)(unaff_RBP + -0x40);
                                  } while (lVar27 != *(int64_t *)(unaff_RBP + -0x48));
                                  fVar45 = *(float *)(unaff_RBP + 0x158);
                                  fVar47 = *(float *)(unaff_RBP + 0x154);
                                  unaff_R14 = *(int64_t *)(unaff_RBP + 0x2a0);
                                  iVar16 = *(int *)(unaff_RBP + -0x60);
                                }
                              }
                            }
                            iVar15 = iVar15 + 1;
                            lStack0000000000000068 = lStack0000000000000068 + -1;
                            lVar27 = lStack0000000000000058;
                          } while (lStack0000000000000068 != 0);
                          iVar16 = *(int *)(unaff_RBP + -0x5c);
                          iVar38 = *(int *)(unaff_RBP + -0x80) + 1;
                          iVar15 = *(int *)(unaff_RBP + -0x58);
                          *(int *)(unaff_RBP + -0x80) = iVar38;
                        } while (iVar38 < 4);
                        unaff_R15 = *(int64_t *)(unaff_RBP + 0x290);
                      }
LAB_1803768c5:
                      puVar39 = *(uint **)(unaff_RBP + -0x78);
                    }
                    iVar16 = *(int *)(unaff_RBP + -0x70);
                    iStack0000000000000044 = iStack0000000000000044 + 1;
                    lVar27 = lStack0000000000000058;
                  } while (iStack0000000000000044 < iVar16);
                  iVar15 = *(int *)(unaff_RBP + -0x6c);
                }
                iStack0000000000000048 = iStack0000000000000048 + 1;
              } while (iStack0000000000000048 < iVar15);
              uVar30 = *(uint *)(unaff_RBP + -0x7c);
              unaff_RSI = *(int64_t *)(unaff_RBP + 0x298);
            }
          }
          lVar31 = *(int64_t *)(unaff_RSI + 0x3580);
          uVar30 = uVar30 + 1;
          lStack0000000000000060 = lStack0000000000000060 + 1;
          *(uint *)(unaff_RBP + -0x7c) = uVar30;
        } while (uVar30 < *(uint *)(lVar31 + 0x110));
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





