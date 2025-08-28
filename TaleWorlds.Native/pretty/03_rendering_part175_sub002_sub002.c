#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part175_sub002_sub002.c - 1 个函数

// 函数: void FUN_180375760(longlong param_1,longlong param_2,longlong param_3,uint64_t param_4)
void FUN_180375760(longlong param_1,longlong param_2,longlong param_3,uint64_t param_4)

{
  float fVar1;
  uint *puVar2;
  longlong *plVar3;
  double dVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  bool bVar16;
  uint64_t *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint64_t *puVar22;
  longlong lVar23;
  longlong lVar24;
  int32_t *puVar25;
  int **ppiVar26;
  uint64_t uVar27;
  uint64_t *puVar28;
  int *piVar29;
  byte bVar30;
  uint64_t *puVar31;
  longlong lVar32;
  longlong lVar33;
  int32_t *puVar34;
  ulonglong uVar35;
  int32_t *puVar36;
  bool bVar37;
  int iVar38;
  longlong lVar39;
  longlong lVar40;
  int iVar41;
  uint uVar42;
  longlong lVar43;
  longlong lVar44;
  int iVar45;
  int iVar46;
  longlong lVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  bool bStack_348;
  int iStack_344;
  int iStack_340;
  ulonglong uStack_338;
  longlong lStack_328;
  longlong lStack_320;
  float fStack_318;
  int iStack_308;
  uint uStack_304;
  int8_t auStack_2dc [4];
  longlong lStack_2d8;
  longlong lStack_2d0;
  uint64_t *puStack_2c8;
  int32_t uStack_2c0;
  int32_t uStack_2bc;
  int *piStack_2b8;
  longlong lStack_2b0;
  int *piStack_2a8;
  longlong lStack_2a0;
  int aiStack_298 [2];
  uint64_t uStack_290;
  int32_t uStack_270;
  int32_t uStack_26c;
  int32_t uStack_268;
  float fStack_264;
  int32_t uStack_250;
  int32_t uStack_24c;
  int32_t uStack_248;
  float fStack_244;
  int8_t auStack_240 [24];
  uint64_t auStack_228 [30];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  
  iVar45 = *(int *)(param_3 + 0x50);
  if (-1 < iVar45) {
    lVar43 = *(longlong *)(_DAT_180c86978 + 0xd0) - *(longlong *)(_DAT_180c86978 + 200) >> 3;
    if (iVar45 == lVar43) {
      iVar45 = (int)lVar43 + -1;
    }
    lVar43 = *(longlong *)(*(longlong *)(_DAT_180c86978 + 200) + (longlong)iVar45 * 8);
    iVar45 = (int)(*(int *)(param_1 + 0x2154) + (*(int *)(param_1 + 0x2154) >> 0x1f & 3U)) >> 2;
    iVar18 = (int)(*(int *)(param_1 + 0x2158) + (*(int *)(param_1 + 0x2158) >> 0x1f & 3U)) >> 2;
    if (*(char *)(param_3 + 0x140) != '\0') {
      if (*(char *)(param_3 + 0x141) == '\0') {
        iVar20 = (int)((*(longlong *)(param_3 + 0x88) - *(longlong *)(param_3 + 0x80)) / 0x28);
      }
      else {
        iVar20 = (int)*(uint64_t *)(param_3 + 0x148);
      }
      if ((iVar20 != 0) && (*(int *)(param_3 + 0x54) != 0)) {
        lVar32 = 2;
        puVar28 = (uint64_t *)(param_2 + 0x30);
        puVar17 = auStack_228;
        do {
          puVar31 = puVar17;
          puVar22 = puVar28;
          uVar27 = puVar22[1];
          uVar13 = puVar22[2];
          uVar14 = puVar22[3];
          *puVar31 = *puVar22;
          puVar31[1] = uVar27;
          uVar27 = puVar22[4];
          uVar15 = puVar22[5];
          puVar31[2] = uVar13;
          puVar31[3] = uVar14;
          uVar13 = puVar22[6];
          uVar14 = puVar22[7];
          puVar31[4] = uVar27;
          puVar31[5] = uVar15;
          uVar27 = puVar22[8];
          uVar15 = puVar22[9];
          puVar31[6] = uVar13;
          puVar31[7] = uVar14;
          uVar13 = puVar22[10];
          uVar14 = puVar22[0xb];
          puVar31[8] = uVar27;
          puVar31[9] = uVar15;
          uVar27 = puVar22[0xc];
          uVar15 = puVar22[0xd];
          puVar31[10] = uVar13;
          puVar31[0xb] = uVar14;
          uVar13 = puVar22[0xe];
          uVar14 = puVar22[0xf];
          puVar31[0xc] = uVar27;
          puVar31[0xd] = uVar15;
          puVar31[0xe] = uVar13;
          puVar31[0xf] = uVar14;
          lVar32 = lVar32 + -1;
          puVar28 = puVar22 + 0x10;
          puVar17 = puVar31 + 0x10;
        } while (lVar32 != 0);
        uVar27 = puVar22[0x11];
        uVar13 = puVar22[0x12];
        uVar14 = puVar22[0x13];
        fVar1 = *(float *)(lVar43 + 100);
        puVar31[0x10] = puVar22[0x10];
        puVar31[0x11] = uVar27;
        uVar5 = *(int32_t *)(puVar22 + 0x14);
        uVar6 = *(int32_t *)((longlong)puVar22 + 0xa4);
        uVar7 = *(int32_t *)(puVar22 + 0x15);
        uVar8 = *(int32_t *)((longlong)puVar22 + 0xac);
        puVar31[0x12] = uVar13;
        puVar31[0x13] = uVar14;
        uVar9 = *(int32_t *)(puVar22 + 0x16);
        uVar10 = *(int32_t *)((longlong)puVar22 + 0xb4);
        uVar11 = *(int32_t *)(puVar22 + 0x17);
        uVar12 = *(int32_t *)((longlong)puVar22 + 0xbc);
        *(int32_t *)(puVar31 + 0x14) = uVar5;
        *(int32_t *)((longlong)puVar31 + 0xa4) = uVar6;
        *(int32_t *)(puVar31 + 0x15) = uVar7;
        *(int32_t *)((longlong)puVar31 + 0xac) = uVar8;
        *(int32_t *)(puVar31 + 0x16) = uVar9;
        *(int32_t *)((longlong)puVar31 + 0xb4) = uVar10;
        *(int32_t *)(puVar31 + 0x17) = uVar11;
        *(int32_t *)((longlong)puVar31 + 0xbc) = uVar12;
        bVar30 = (byte)((uint)*(int32_t *)(lVar43 + 0x60) >> 0x18);
        uVar19 = 0x31;
        if ((~(bVar30 >> 4) & 1) == 0) {
          uVar19 = 1;
        }
        bVar30 = bVar30 >> 5 & 1;
        fStack_318 = ((float)*(int *)(SYSTEM_STATE_MANAGER + 0xe0) * 0.125 + 0.5) *
                     *(float *)(_DAT_180c86870 + 0x3a4);
        if ((*(char *)(*(longlong *)(param_1 + 0x2148) + 0x3f62) == '\0') ||
           (*(int *)(_DAT_180c8a9c8 + 0x7e0) != 0)) {
          fStack_318 = 3.4028235e+38;
        }
        dVar4 = (double)FUN_180629810();
        lVar32 = *(longlong *)(param_2 + 0x3580);
        uStack_304 = 0;
        fVar54 = (float)dVar4;
        if (*(int *)(lVar32 + 0x110) != 0) {
          lStack_328 = 0;
          fVar51 = fStack_130;
          fVar53 = fStack_134;
          do {
            puVar2 = *(uint **)(lVar32 + 0x118 + lStack_328 * 8);
            if ((((*puVar2 & uVar19) != 0) && (puVar2[0x5e] != 3)) && ((puVar2[1] >> 0x18 & 1) == 0)
               ) {
              lVar32 = *(longlong *)(puVar2 + 0xd60);
              if (((lVar32 == 0) || (*(int *)(lVar32 + 0x110) == 0)) ||
                 ((*(uint **)(lVar32 + 0x118) != puVar2 ||
                  (bVar16 = true, (puVar2[0x6f6] & 0x20) == 0)))) {
                bVar16 = false;
              }
              fVar55 = 0.0;
              if ((puVar2[1] >> 0x14 & 1) != 0) {
                fVar55 = (float)puVar2[0x5d];
              }
              iStack_340 = 0;
              if (0 < iVar45) {
                do {
                  iStack_344 = 0;
                  if (0 < iVar18) {
                    do {
                      lVar32 = *(longlong *)(param_3 + 0x138);
                      lVar40 = (longlong)(*(int *)(param_3 + 0x60) * iStack_340 + iStack_344) *
                               0x130;
                      lVar33 = lVar32 + 8 + lVar40;
                      lVar44 = lVar32 + 0xc0 + lVar40;
                      fVar50 = *(float *)(lVar33 + 0x20) - fStack_138;
                      fVar48 = *(float *)(lVar33 + 0x24) - fVar53;
                      fVar49 = *(float *)(lVar33 + 0x28) - fVar51;
                      if (*(int *)(lVar43 + 0x60) < 0) {
                        fVar56 = 5.0;
                      }
                      else {
                        fVar56 = 1.0;
                      }
                      fVar52 = 1.0;
                      if ((((puVar2[1] & 0x8000) == 0) && ((*puVar2 & 1) == 1)) &&
                         (*(longlong *)(lVar40 + 0x118 + lVar32) != 0)) {
                        bVar37 = true;
                      }
                      else {
                        bVar37 = false;
                      }
                      if (*(float *)(lVar44 + 0x30) != 0.0) {
                        if (bVar16) {
                          iVar20 = FUN_1801b8ce0(*(longlong *)(param_1 + 0x2148) + 0x2998,
                                                 puVar2 + 0xc,lVar33,lVar44,&system_data_0300,fVar55,1,
                                                 (byte)puVar2[0x6f6] >> 1 & 1);
                        }
                        else {
                          iVar20 = FUN_18063c930(puVar2 + 0xc);
                        }
                        if (iVar20 != 0) {
                          if (bVar37) {
                            if ((bVar30 != 0) ||
                               (fVar50 * fVar50 + fVar48 * fVar48 + fVar49 * fVar49 <= fStack_318))
                            {
                              lVar44 = (longlong)
                                       (*(int *)(param_3 + 0x60) * iStack_340 + iStack_344) * 0x130;
                              lVar33 = *(longlong *)(param_3 + 0x138);
                              if (*(int *)(lVar44 + 0xf4 + lVar33) == 2) {
                                if ((*(uint *)(lVar43 + 0x60) & 0x800000) == 0) {
                                  *(int32_t *)(lVar44 + 0xf4 + lVar33) = 1;
                                  *(float *)((longlong)
                                             (*(int *)(param_3 + 0x60) * iStack_340 + iStack_344) *
                                             0x130 + 0x128 + *(longlong *)(param_3 + 0x138)) =
                                       fVar54;
                                }
                                else {
                                  *(int32_t *)(lVar44 + 0xf4 + lVar33) = 0;
                                }
                              }
                              lVar44 = (longlong)
                                       (*(int *)(param_3 + 0x60) * iStack_340 + iStack_344) * 0x130;
                              lVar33 = *(longlong *)(param_3 + 0x138);
                              if (*(int *)(lVar44 + 0xf4 + lVar33) == 1) {
                                fVar48 = (fVar54 - *(float *)(lVar44 + 0x128 + lVar33)) * fVar56;
                                if (fVar48 <= 0.001) {
                                  fVar48 = 0.001;
                                }
                                fVar48 = -fVar48;
                                bVar37 = fVar48 < -1.0;
                                if (bVar37) {
                                  fVar48 = -1.0;
                                  *(int32_t *)(lVar44 + 0xf4 + lVar33) = 0;
                                }
                                bStack_348 = !bVar37;
                                for (lVar33 = *(longlong *)(lVar40 + 0x100 + lVar32);
                                    lVar33 != lVar32 + 0xf8 + lVar40;
                                    lVar33 = func_0x00018066bd70(lVar33)) {
                                  lVar44 = FUN_18046c710(param_4,*(uint64_t *)(lVar33 + 0x20));
                                  lVar44 = *(longlong *)(lVar44 + 0x18);
                                  lVar39 = ((longlong)*(int *)(param_1 + 0x2140) * 0x20 + lStack_328
                                           ) * 0x100;
                                  iVar21 = (int)(*(longlong *)(lVar33 + 0x30) -
                                                 *(longlong *)(lVar33 + 0x28) >> 5);
                                  lVar23 = (longlong)iVar21;
                                  if (0 < iVar21) {
                                    lVar24 = 0;
                                    do {
                                      puVar36 = *(int32_t **)(lVar39 + 0x18 + lVar44);
                                      puVar34 = (int32_t *)
                                                (*(longlong *)(lVar33 + 0x28) + 0x10 + lVar24);
                                      uStack_250 = *puVar34;
                                      uStack_24c = puVar34[1];
                                      uStack_248 = puVar34[2];
                                      puVar34 = (int32_t *)
                                                (*(longlong *)(lVar33 + 0x28) + lVar24);
                                      uVar5 = *puVar34;
                                      uVar6 = puVar34[1];
                                      uVar7 = puVar34[2];
                                      uVar8 = puVar34[3];
                                      fStack_244 = fVar48;
                                      if (puVar36 < *(int32_t **)(lVar39 + 0x20 + lVar44)) {
                                        *(int32_t **)(lVar39 + 0x18 + lVar44) = puVar36 + 8;
                                        *puVar36 = uVar5;
                                        puVar36[1] = uVar6;
                                        puVar36[2] = uVar7;
                                        puVar36[3] = uVar8;
                                        puVar36[4] = uStack_250;
                                        puVar36[5] = uStack_24c;
                                        puVar36[6] = uStack_248;
                                        puVar36[7] = fVar48;
                                      }
                                      else {
                                        puVar34 = *(int32_t **)(lVar39 + 0x10 + lVar44);
                                        lVar47 = (longlong)puVar36 - (longlong)puVar34 >> 5;
                                        if (lVar47 == 0) {
                                          lVar47 = 1;
LAB_1803760d1:
                                          puVar25 = (int32_t *)
                                                    FUN_18062b420(_DAT_180c8ed18,lVar47 << 5,
                                                                  *(int8_t *)
                                                                   (lVar39 + 0x28 + lVar44));
                                          puVar34 = *(int32_t **)(lVar39 + 0x10 + lVar44);
                                          puVar36 = *(int32_t **)(lVar39 + 0x18 + lVar44);
                                        }
                                        else {
                                          lVar47 = lVar47 * 2;
                                          if (lVar47 != 0) goto LAB_1803760d1;
                                          puVar25 = (int32_t *)0x0;
                                        }
                                        if (puVar34 != puVar36) {
                    // WARNING: Subroutine does not return
                                          memmove(puVar25,puVar34,
                                                  (longlong)puVar36 - (longlong)puVar34);
                                        }
                                        *puVar25 = uVar5;
                                        puVar25[1] = uVar6;
                                        puVar25[2] = uVar7;
                                        puVar25[3] = uVar8;
                                        puVar25[4] = uStack_250;
                                        puVar25[5] = uStack_24c;
                                        puVar25[6] = uStack_248;
                                        puVar25[7] = fStack_244;
                                        if (*(longlong *)(lVar39 + 0x10 + lVar44) != 0) {
                    // WARNING: Subroutine does not return
                                          FUN_18064e900();
                                        }
                                        *(int32_t **)(lVar39 + 0x10 + lVar44) = puVar25;
                                        *(int32_t **)(lVar39 + 0x20 + lVar44) =
                                             puVar25 + lVar47 * 8;
                                        *(int32_t **)(lVar39 + 0x18 + lVar44) = puVar25 + 8;
                                      }
                                      lVar24 = lVar24 + 0x20;
                                      lVar23 = lVar23 + -1;
                                    } while (lVar23 != 0);
                                  }
                                }
                                if (!bVar37) goto LAB_18037619a;
                              }
                            }
                            else {
                              lVar44 = (longlong)
                                       (*(int *)(param_3 + 0x60) * iStack_340 + iStack_344) * 0x130;
                              lVar33 = *(longlong *)(param_3 + 0x138);
                              if (*(int *)(lVar44 + 0xf4 + lVar33) == 0) {
                                if ((*(uint *)(lVar43 + 0x60) & 0x800000) == 0) {
                                  *(int32_t *)(lVar44 + 0xf4 + lVar33) = 1;
                                  *(float *)((longlong)
                                             (*(int *)(param_3 + 0x60) * iStack_340 + iStack_344) *
                                             0x130 + 0x128 + *(longlong *)(param_3 + 0x138)) =
                                       fVar54;
                                }
                                else {
                                  *(int32_t *)(lVar44 + 0xf4 + lVar33) = 2;
                                }
                              }
                              bStack_348 = false;
                              lVar44 = (longlong)
                                       (*(int *)(param_3 + 0x60) * iStack_340 + iStack_344) * 0x130;
                              lVar33 = *(longlong *)(param_3 + 0x138);
                              if (*(int *)(lVar44 + 0xf4 + lVar33) == 1) {
                                bStack_348 = true;
                                fVar52 = (fVar54 - *(float *)(lVar44 + 0x128 + lVar33)) * fVar56;
                                if (fVar52 <= 0.001) {
                                  fVar52 = 0.001;
                                }
                                if (1.0 < fVar52) {
                                  fVar52 = 1.0;
                                  *(int32_t *)(lVar44 + 0xf4 + lVar33) = 2;
                                  bStack_348 = false;
                                }
                              }
                              for (lVar33 = *(longlong *)(lVar40 + 0x100 + lVar32);
                                  lVar33 != lVar32 + 0xf8 + lVar40;
                                  lVar33 = func_0x00018066bd70(lVar33)) {
                                lVar23 = FUN_18046c710(param_4,*(uint64_t *)(lVar33 + 0x20));
                                lVar44 = *(longlong *)(lVar23 + 0x18);
                                *(int32_t *)(lVar23 + 0xc) = 7;
                                uStack_338 = (ulonglong)
                                             (int)(*(longlong *)(lVar33 + 0x30) -
                                                   *(longlong *)(lVar33 + 0x28) >> 5);
                                lVar39 = ((longlong)*(int *)(param_1 + 0x2140) * 0x20 + lStack_328)
                                         * 0x100;
                                lVar23 = *(longlong *)(lVar39 + 0x10 + lVar44);
                                if ((ulonglong)(*(longlong *)(lVar39 + 0x20 + lVar44) - lVar23 >> 5)
                                    < uStack_338) {
                                  if (uStack_338 == 0) {
                                    lVar24 = 0;
                                  }
                                  else {
                                    lVar24 = FUN_18062b420(_DAT_180c8ed18,uStack_338 << 5,
                                                           *(int8_t *)(lVar39 + 0x28 + lVar44));
                                    lVar23 = *(longlong *)(lVar39 + 0x10 + lVar44);
                                  }
                                  lVar47 = *(longlong *)(lVar39 + 0x18 + lVar44);
                                  if (lVar23 != lVar47) {
                    // WARNING: Subroutine does not return
                                    memmove(lVar24,lVar23,lVar47 - lVar23);
                                  }
                                  if (lVar23 != 0) {
                    // WARNING: Subroutine does not return
                                    FUN_18064e900();
                                  }
                                  *(longlong *)(lVar39 + 0x10 + lVar44) = lVar24;
                                  *(longlong *)(lVar39 + 0x18 + lVar44) = lVar24;
                                  *(ulonglong *)(lVar39 + 0x20 + lVar44) =
                                       uStack_338 * 0x20 + lVar24;
                                }
                                if (0 < (longlong)uStack_338) {
                                  lVar23 = 0;
                                  do {
                                    puVar36 = *(int32_t **)(lVar39 + 0x18 + lVar44);
                                    puVar34 = (int32_t *)
                                              (*(longlong *)(lVar33 + 0x28) + 0x10 + lVar23);
                                    uStack_270 = *puVar34;
                                    uStack_26c = puVar34[1];
                                    uStack_268 = puVar34[2];
                                    puVar34 = (int32_t *)(*(longlong *)(lVar33 + 0x28) + lVar23);
                                    uVar5 = *puVar34;
                                    uVar6 = puVar34[1];
                                    uVar7 = puVar34[2];
                                    uVar8 = puVar34[3];
                                    fStack_264 = fVar52;
                                    if (puVar36 < *(int32_t **)(lVar39 + 0x20 + lVar44)) {
                                      *(int32_t **)(lVar39 + 0x18 + lVar44) = puVar36 + 8;
                                      *puVar36 = uVar5;
                                      puVar36[1] = uVar6;
                                      puVar36[2] = uVar7;
                                      puVar36[3] = uVar8;
                                      puVar36[4] = uStack_270;
                                      puVar36[5] = uStack_26c;
                                      puVar36[6] = uStack_268;
                                      puVar36[7] = fVar52;
                                    }
                                    else {
                                      puVar34 = *(int32_t **)(lVar39 + 0x10 + lVar44);
                                      lVar24 = (longlong)puVar36 - (longlong)puVar34 >> 5;
                                      if (lVar24 == 0) {
                                        lVar24 = 1;
LAB_180375e41:
                                        puVar25 = (int32_t *)
                                                  FUN_18062b420(_DAT_180c8ed18,lVar24 << 5,
                                                                *(int8_t *)
                                                                 (lVar39 + 0x28 + lVar44));
                                        puVar34 = *(int32_t **)(lVar39 + 0x10 + lVar44);
                                        puVar36 = *(int32_t **)(lVar39 + 0x18 + lVar44);
                                      }
                                      else {
                                        lVar24 = lVar24 * 2;
                                        if (lVar24 != 0) goto LAB_180375e41;
                                        puVar25 = (int32_t *)0x0;
                                      }
                                      if (puVar34 != puVar36) {
                    // WARNING: Subroutine does not return
                                        memmove(puVar25,puVar34,
                                                (longlong)puVar36 - (longlong)puVar34);
                                      }
                                      *puVar25 = uVar5;
                                      puVar25[1] = uVar6;
                                      puVar25[2] = uVar7;
                                      puVar25[3] = uVar8;
                                      puVar25[4] = uStack_270;
                                      puVar25[5] = uStack_26c;
                                      puVar25[6] = uStack_268;
                                      puVar25[7] = fStack_264;
                                      if (*(longlong *)(lVar39 + 0x10 + lVar44) != 0) {
                    // WARNING: Subroutine does not return
                                        FUN_18064e900();
                                      }
                                      *(int32_t **)(lVar39 + 0x10 + lVar44) = puVar25;
                                      *(int32_t **)(lVar39 + 0x20 + lVar44) =
                                           puVar25 + lVar24 * 8;
                                      *(int32_t **)(lVar39 + 0x18 + lVar44) = puVar25 + 8;
                                    }
                                    lVar23 = lVar23 + 0x20;
                                    uStack_338 = uStack_338 - 1;
                                  } while (uStack_338 != 0);
                                }
                              }
LAB_18037619a:
                              if (!bStack_348) goto LAB_1803768c9;
                            }
                          }
                          iStack_308 = 0;
                          do {
                            iVar21 = iStack_340 * 4 + iStack_308;
                            lStack_320 = 4;
                            iVar38 = iStack_344 * 4;
                            do {
                              lVar32 = *(longlong *)(param_3 + 0x110);
                              iVar41 = *(int *)(param_3 + 0x58) * iVar21 + iVar38;
                              uVar35 = (ulonglong)(longlong)iVar41 %
                                       (ulonglong)*(uint *)(param_3 + 0x118);
                              for (piVar29 = *(int **)(lVar32 + uVar35 * 8); piVar29 != (int *)0x0;
                                  piVar29 = *(int **)(piVar29 + 4)) {
                                if (iVar41 == *piVar29) {
                                  if (piVar29 != (int *)0x0) {
                                    lVar33 = *(longlong *)(param_3 + 0x118);
                                    piStack_2b8 = piVar29;
                                    ppiVar26 = &piStack_2b8;
                                    lStack_2b0 = lVar32 + uVar35 * 8;
                                    goto LAB_18037624d;
                                  }
                                  break;
                                }
                              }
                              lVar33 = *(longlong *)(param_3 + 0x118);
                              piStack_2a8 = *(int **)(lVar32 + lVar33 * 8);
                              ppiVar26 = &piStack_2a8;
                              lStack_2a0 = lVar32 + lVar33 * 8;
LAB_18037624d:
                              if ((*ppiVar26 != *(int **)(lVar32 + lVar33 * 8)) &&
                                 (lVar32 = FUN_180372570(param_3,iVar21,iVar38),
                                 *(longlong *)(lVar32 + 0x108) != 0)) {
                                lVar32 = FUN_180372570(param_3,iVar21,iVar38);
                                lVar33 = FUN_180372570(param_3,iVar21,iVar38);
                                fVar48 = *(float *)(lVar32 + 0x38) - fStack_138;
                                fVar50 = *(float *)(lVar32 + 0x3c) - fVar53;
                                fVar49 = *(float *)(lVar32 + 0x40) - fVar51;
                                fVar48 = SQRT(fVar50 * fVar50 + fVar48 * fVar48 + fVar49 * fVar49) -
                                         *(float *)(lVar32 + 0x48);
                                if (((bVar30 == 0) || (fVar48 <= fVar1)) &&
                                   ((((-1 < *(int *)(lVar43 + 0x60) ||
                                      (0 < *(int *)(SYSTEM_STATE_MANAGER + 0xe0))) || (fVar48 <= 120.0))
                                    && (iVar41 = FUN_1801b8ce0(*(longlong *)(param_1 + 0x2148) +
                                                               0x2998,puVar2 + 0xc,lVar33 + 0x4c,
                                                               lVar32 + 0x18,&system_data_0300,
                                                               fVar55 + fVar55,iVar20 == 2,
                                                               (byte)puVar2[0x6f6] >> 1 & 1),
                                       iVar41 != 0)))) {
                                  lVar40 = FUN_180372570(param_3,iVar21,iVar38);
                                  lVar33 = *(longlong *)(param_3 + 0x110);
                                  lVar32 = lVar40 + 0x118;
                                  iVar41 = *(int *)(param_3 + 0x58) * iVar21 + iVar38;
                                  for (piVar29 = *(int **)(lVar33 + ((ulonglong)(longlong)iVar41 %
                                                                    (ulonglong)
                                                                    *(uint *)(param_3 + 0x118)) * 8)
                                      ; piVar29 != (int *)0x0; piVar29 = *(int **)(piVar29 + 4)) {
                                    if (iVar41 == *piVar29) {
                                      lVar44 = *(longlong *)(param_3 + 0x118);
                                      goto LAB_1803763e0;
                                    }
                                  }
                                  lVar44 = *(longlong *)(param_3 + 0x118);
                                  piVar29 = *(int **)(lVar33 + lVar44 * 8);
LAB_1803763e0:
                                  lStack_2d0 = lVar32;
                                  if (piVar29 == *(int **)(lVar33 + lVar44 * 8)) {
                                    uVar27 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
                                    aiStack_298[0] = iVar41;
                                    uStack_290 = FUN_180372430(uVar27,*(uint64_t *)
                                                                       (param_3 + 0x68));
                                    puVar28 = (uint64_t *)
                                              FUN_18037f020(param_3 + 0x108,auStack_240,aiStack_298)
                                    ;
                                    piVar29 = (int *)*puVar28;
                                    uStack_2c0 = *(int32_t *)(puVar28 + 1);
                                    uStack_2bc = *(int32_t *)((longlong)puVar28 + 0xc);
                                  }
                                  lVar33 = *(longlong *)(lVar40 + 0x120);
                                  puStack_2c8 = (uint64_t *)(*(longlong *)(piVar29 + 2) + 0x148);
                                  if (lVar33 != lVar32) {
                                    do {
                                      plVar3 = *(longlong **)(lVar33 + 0x20);
                                      puVar17 = (uint64_t *)puStack_2c8[2];
                                      puVar28 = puStack_2c8;
                                      while (puVar22 = puVar17, puVar22 != (uint64_t *)0x0) {
                                        if ((longlong *)puVar22[4] < plVar3) {
                                          puVar17 = (uint64_t *)*puVar22;
                                        }
                                        else {
                                          puVar17 = (uint64_t *)puVar22[1];
                                          puVar28 = puVar22;
                                        }
                                      }
                                      if ((puVar28 == puStack_2c8) ||
                                         (plVar3 < (longlong *)puVar28[4])) {
                                        puVar28 = (uint64_t *)FUN_18037f530();
                                        puVar28 = (uint64_t *)*puVar28;
                                      }
                                      lVar32 = plVar3[0xb];
                                      iVar41 = (int)(*(longlong *)(lVar33 + 0x30) -
                                                     *(longlong *)(lVar33 + 0x28) >> 5);
                                      if (0 < iVar41) {
                                        lVar40 = FUN_18046c710(param_4);
                                        lVar44 = 0;
                                        lVar40 = *(longlong *)(lVar40 + 0x18) +
                                                 ((longlong)*(int *)(param_1 + 0x2140) * 0x20 +
                                                 lStack_328) * 0x100 + 0x10;
                                        lStack_2d8 = (longlong)iVar41;
                                        if (0 < iVar41) {
                                          lVar23 = 0;
                                          do {
                                            lVar39 = *(longlong *)(lVar33 + 0x28);
                                            fVar49 = (float)modff(*(float *)(lVar23 + 4 + lVar39) +
                                                                  *(float *)(lVar23 + lVar39) +
                                                                  *(float *)(lVar23 + 8 + lVar39) +
                                                                  *(float *)(lVar23 + 0x18 + lVar39)
                                                                  ,auStack_2dc);
                                            lVar39 = *(longlong *)(lVar33 + 0x28);
                                            uVar42 = *(uint *)(lVar43 + 0x60);
                                            fVar51 = *(float *)(lVar23 + lVar39);
                                            fVar53 = *(float *)(lVar23 + 4 + lVar39);
                                            fVar48 = *(float *)(lVar23 + 8 + lVar39);
                                            if ((uVar42 >> 0x16 & 1) == 0) {
                                              fVar50 = 0.0;
                                            }
                                            else if (*(code **)(*plVar3 + 0x198) ==
                                                     (code *)&unknown_var_2544_ptr) {
                                              fVar50 = *(float *)((longlong)plVar3 + 0x244);
                                            }
                                            else {
                                              lVar39 = (**(code **)(*plVar3 + 0x198))();
                                              uVar42 = *(uint *)(lVar43 + 0x60);
                                              fVar50 = *(float *)(lVar39 + 0x30);
                                            }
                                            if (*(int *)(_DAT_180c8a9c8 + 0x7e0) == 0) {
                                              if ((*(longlong *)(_DAT_180c86870 + 0x3d8) == 0) ||
                                                 (*(int *)(*(longlong *)(_DAT_180c86870 + 0x3d8) +
                                                          0x110) != 3)) {
                                                iVar41 = *(int *)(param_1 + 0x2310);
                                                if (iVar41 == -1) {
                                                  fVar51 = fVar51 - fStack_138;
                                                  fVar53 = fVar53 - fStack_134;
                                                  fVar48 = fVar48 - fStack_130;
                                                  fVar51 = SQRT(fVar51 * fVar51 + fVar53 * fVar53 +
                                                                fVar48 * fVar48) -
                                                           ((fVar49 * 2.0 - 1.0) * 5.0 + fVar50);
                                                  if (fVar51 <= 0.0) {
                                                    fVar51 = 0.0;
                                                  }
                                                  fVar51 = fVar51 * 0.2;
                                                  if (127.0 <= fVar51) {
                                                    fVar51 = 127.0;
                                                  }
                                                  iVar41 = (int)*(char *)((longlong)(int)fVar51 + 8
                                                                         + param_1);
                                                }
                                                if ((int)lVar32 <= iVar41) {
                                                  iVar41 = (int)lVar32 + -1;
                                                }
                                              }
                                              else {
                                                iVar41 = 0;
                                              }
                                            }
                                            else {
                                              iVar41 = 0;
                                            }
                                            lVar39 = puVar28[5];
                                            if ((puVar2[1] & 0x200000) == 0) {
                                              iVar46 = (int)*(char *)(lVar39 + 4 + lVar44 * 8);
                                            }
                                            else {
                                              iVar46 = 4;
                                              iVar41 = 4;
                                            }
                                            if ((-1 < (int)uVar42) || ((int)puVar2[0x5e] < 2)) {
                                              if (iVar41 != iVar46) {
                                                fVar51 = *(float *)(lVar39 + lVar44 * 8);
                                                if (fVar51 == -1.0) {
                                                  *(float *)(lVar39 + lVar44 * 8) = fVar54;
                                                  fVar51 = fVar54;
                                                }
                                                fVar51 = (fVar54 - fVar51) * fVar56;
                                                if (fVar51 <= 0.001) {
                                                  fVar51 = 0.001;
                                                }
                                                if (fVar51 <= 1.0) {
                                                  puVar36 = (int32_t *)
                                                            (*(longlong *)(lVar33 + 0x28) + lVar23);
                                                  lVar39 = (longlong)iVar41 * 0x20 + lVar40;
                                                  puVar34 = *(int32_t **)(lVar39 + 8);
                                                  if (puVar34 < *(int32_t **)(lVar39 + 0x10)) {
                                                    uVar5 = puVar36[1];
                                                    uVar6 = puVar36[2];
                                                    uVar7 = puVar36[3];
                                                    *puVar34 = *puVar36;
                                                    puVar34[1] = uVar5;
                                                    puVar34[2] = uVar6;
                                                    puVar34[3] = uVar7;
                                                    uVar27 = *(uint64_t *)(puVar36 + 6);
                                                    *(uint64_t *)(puVar34 + 4) =
                                                         *(uint64_t *)(puVar36 + 4);
                                                    *(uint64_t *)(puVar34 + 6) = uVar27;
                                                    *(longlong *)(lVar39 + 8) =
                                                         *(longlong *)(lVar39 + 8) + 0x20;
                                                  }
                                                  else {
                                                    FUN_18037f6b0(lVar39);
                                                  }
                                                  lVar24 = (longlong)iVar46 * 0x20 + lVar40;
                                                  *(float *)(*(longlong *)(lVar39 + 8) + -4) =
                                                       fVar51;
                                                  puVar36 = (int32_t *)
                                                            (*(longlong *)(lVar33 + 0x28) + lVar23);
                                                  puVar34 = *(int32_t **)(lVar24 + 8);
                                                  if (puVar34 < *(int32_t **)(lVar24 + 0x10)) {
                                                    uVar5 = puVar36[1];
                                                    uVar6 = puVar36[2];
                                                    uVar7 = puVar36[3];
                                                    *puVar34 = *puVar36;
                                                    puVar34[1] = uVar5;
                                                    puVar34[2] = uVar6;
                                                    puVar34[3] = uVar7;
                                                    uVar27 = *(uint64_t *)(puVar36 + 6);
                                                    *(uint64_t *)(puVar34 + 4) =
                                                         *(uint64_t *)(puVar36 + 4);
                                                    *(uint64_t *)(puVar34 + 6) = uVar27;
                                                    *(longlong *)(lVar24 + 8) =
                                                         *(longlong *)(lVar24 + 8) + 0x20;
                                                  }
                                                  else {
                                                    FUN_18037f6b0();
                                                  }
                                                  *(float *)(*(longlong *)(lVar24 + 8) + -4) =
                                                       -fVar51;
                                                  goto LAB_180376825;
                                                }
                                                *(char *)(puVar28[5] + 4 + lVar44 * 8) =
                                                     (char)iVar41;
                                                *(int32_t *)(puVar28[5] + lVar44 * 8) =
                                                     0xbf800000;
                                                if (-1 < (int)puVar2[0x5e]) {
                                                  if (((*(uint *)(lVar43 + 0x60) >> 0x16 & 1) != 0)
                                                     && (4 < iVar41)) {
                                                    iVar41 = 4;
                                                  }
                                                  if (((int)*(uint *)(lVar43 + 0x60) < 0) &&
                                                     (2 < iVar41)) {
                                                    iVar41 = 2;
                                                  }
                                                }
                                              }
                                              puVar36 = (int32_t *)
                                                        (*(longlong *)(lVar33 + 0x28) + lVar23);
                                              lVar39 = (longlong)iVar41 * 0x20 + lVar40;
                                              puVar34 = *(int32_t **)(lVar39 + 8);
                                              if (puVar34 < *(int32_t **)(lVar39 + 0x10)) {
                                                uVar5 = puVar36[1];
                                                uVar6 = puVar36[2];
                                                uVar7 = puVar36[3];
                                                *puVar34 = *puVar36;
                                                puVar34[1] = uVar5;
                                                puVar34[2] = uVar6;
                                                puVar34[3] = uVar7;
                                                uVar27 = *(uint64_t *)(puVar36 + 6);
                                                *(uint64_t *)(puVar34 + 4) =
                                                     *(uint64_t *)(puVar36 + 4);
                                                *(uint64_t *)(puVar34 + 6) = uVar27;
                                                *(longlong *)(lVar39 + 8) =
                                                     *(longlong *)(lVar39 + 8) + 0x20;
                                              }
                                              else {
                                                FUN_18037f6b0();
                                              }
                                            }
LAB_180376825:
                                            lVar44 = lVar44 + 1;
                                            lVar23 = lVar23 + 0x20;
                                          } while (lVar44 < lStack_2d8);
                                        }
                                      }
                                      lVar33 = func_0x00018066bd70(lVar33);
                                      fVar51 = fStack_130;
                                      fVar53 = fStack_134;
                                    } while (lVar33 != lStack_2d0);
                                  }
                                }
                              }
                              iVar38 = iVar38 + 1;
                              lStack_320 = lStack_320 + -1;
                            } while (lStack_320 != 0);
                            iStack_308 = iStack_308 + 1;
                          } while (iStack_308 < 4);
                        }
                      }
LAB_1803768c9:
                      iStack_344 = iStack_344 + 1;
                    } while (iStack_344 < iVar18);
                  }
                  iStack_340 = iStack_340 + 1;
                } while (iStack_340 < iVar45);
              }
            }
            lVar32 = *(longlong *)(param_2 + 0x3580);
            uStack_304 = uStack_304 + 1;
            lStack_328 = lStack_328 + 1;
          } while (uStack_304 < *(uint *)(lVar32 + 0x110));
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





