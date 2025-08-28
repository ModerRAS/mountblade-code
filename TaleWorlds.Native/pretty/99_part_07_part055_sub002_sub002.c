#include "TaleWorlds.Native.Split.h"

// 99_part_07_part055_sub002_sub002.c - 1 个函数

// 函数: void FUN_1804d13d0(longlong param_1,longlong param_2,uint param_3)
void FUN_1804d13d0(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint *puVar12;
  uint *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iStackX_20;
  int iStack_248;
  int iStack_244;
  int iStack_240;
  uint *puStack_238;
  uint *puStack_230;
  longlong lStack_228;
  longlong *plStack_220;
  uint *puStack_218;
  longlong lStack_210;
  longlong *plStack_208;
  longlong *plStack_200;
  longlong lStack_1f8;
  uint *puStack_1f0;
  uint auStack_1e8 [2];
  longlong *plStack_1e0;
  longlong *plStack_1d8;
  longlong *plStack_1d0;
  uint uStack_1c8;
  uint uStack_1c4;
  float fStack_1c0;
  uint auStack_1b8 [2];
  longlong *plStack_1b0;
  longlong *plStack_1a8;
  longlong *plStack_1a0;
  uint uStack_198;
  uint uStack_194;
  float fStack_190;
  uint auStack_188 [2];
  longlong *plStack_180;
  longlong *plStack_178;
  longlong *plStack_170;
  uint uStack_168;
  uint uStack_164;
  float fStack_160;
  uint auStack_158 [2];
  longlong *plStack_150;
  longlong *plStack_148;
  longlong *plStack_140;
  uint uStack_138;
  uint uStack_134;
  float fStack_130;
  uint uStack_128;
  int8_t uStack_124;
  uint64_t uStack_120;
  longlong *plStack_118;
  int32_t uStack_110;
  uint uStack_108;
  int8_t uStack_104;
  longlong *plStack_100;
  longlong *plStack_f8;
  int32_t uStack_f0;
  uint64_t uStack_e8;
  uint uStack_e0;
  longlong *plStack_d8;
  uint uStack_d0;
  longlong *plStack_c8;
  
  if (param_2 != 0) {
    uStack_e8 = 0xfffffffffffffffe;
    iStackX_20 = 0;
    lVar14 = *(longlong *)(param_2 + 0xf0);
    if (*(longlong *)(param_2 + 0xf8) - lVar14 >> 3 != 0) {
      lStack_210 = 0;
      do {
        iVar5 = 0;
        plVar9 = *(longlong **)(lVar14 + lStack_210 * 8);
        plStack_220 = plVar9;
        iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
        iVar4 = (int)param_3 >> 10;
        if (iVar3 == 0) {
          iStack_240 = 0;
          lVar14 = (longlong)*(int *)((longlong)plVar9 + 0x5c);
          puVar13 = (uint *)-lVar14;
          lStack_228 = lVar14;
          do {
            lVar16 = 0;
            iVar5 = (int)plVar9[0xb] + -1;
            if (iStack_240 < 0) {
              bVar7 = 0;
            }
            else {
              bVar7 = (byte)iStack_240;
              if (iVar5 < iStack_240) {
                bVar7 = (byte)iVar5;
              }
            }
            iStack_244 = 0;
            lVar8 = plVar9[7];
            puStack_238 = puVar13;
            if (plVar9[8] - lVar8 >> 4 != 0) {
              do {
                uVar6 = *(uint *)(lVar8 + 8 + lVar16);
                puVar12 = (uint *)(lVar14 + (longlong)puVar13);
                if (((lVar14 != 0) && (puVar12 = puVar13, (longlong)puVar13 < 0)) &&
                   ((uVar6 & 0xfffffffe) != 0)) {
                  puVar12 = (uint *)0x0;
                }
                if (((1 << (bVar7 & 0x1f) & uVar6) != 0) && (-1 < (longlong)puVar12)) {
                  plVar10 = *(longlong **)(lVar8 + lVar16);
                  auStack_1e8[0] = param_3;
                  plStack_1e0 = plVar9;
                  (**(code **)(*plVar9 + 0x28))(plVar9);
                  plStack_1d8 = plVar9;
                  (**(code **)(*plVar9 + 0x28))(plVar9);
                  plStack_1d0 = plVar10;
                  if (plVar10 != (longlong *)0x0) {
                    (**(code **)(*plVar10 + 0x28))(plVar10);
                  }
                  uVar6 = *(uint *)(plVar9 + 0xd);
                  uStack_1c8 = uVar6;
                  if (*(code **)(*plVar9 + 0x198) == (code *)&UNK_18027d990) {
                    lVar14 = (longlong)plVar9 + 0x214;
                  }
                  else {
                    lVar14 = (**(code **)(*plVar9 + 0x198))(plVar9);
                  }
                  uVar1 = *(uint *)(lVar14 + 0x30);
                  fVar20 = *(float *)((longlong)plVar10 + 0x28c) -
                           *(float *)((longlong)plVar10 + 0x27c);
                  fVar21 = *(float *)((longlong)plVar10 + 0x284) -
                           *(float *)((longlong)plVar10 + 0x274);
                  if (*(float *)(plVar10 + 0x51) - *(float *)(plVar10 + 0x4f) <= fVar21) {
                    fVar21 = *(float *)(plVar10 + 0x51) - *(float *)(plVar10 + 0x4f);
                  }
                  if (fVar20 <= fVar21) {
                    fVar21 = fVar20;
                  }
                  lVar14 = ((longlong)puVar12 + 2) * 0x58 + param_1;
                  uVar2 = *(uint *)((longlong)(int)(*(uint *)(param_1 + 0x2b18) & param_3) * 0xd8 +
                                    *(longlong *)
                                     (*(longlong *)(param_1 + 11000) + (longlong)iVar4 * 8) + 0x2c +
                                   (longlong)puVar12 * 4);
                  lVar14 = (longlong)(int)(*(uint *)(lVar14 + 0x50) & uVar2) * 0x68 + 0x48 +
                           *(longlong *)
                            (*(longlong *)(lVar14 + 0x30) + (longlong)((int)uVar2 >> 10) * 8);
                  puVar13 = *(uint **)(lVar14 + 8);
                  uStack_1c4 = uVar1;
                  fStack_1c0 = fVar21;
                  if (puVar13 < *(uint **)(lVar14 + 0x10)) {
                    *(uint **)(lVar14 + 8) = puVar13 + 0xc;
                    *puVar13 = param_3;
                    *(longlong **)(puVar13 + 2) = plVar9;
                    puStack_218 = puVar13;
                    (**(code **)(*plVar9 + 0x28))(plVar9);
                    *(longlong **)(puVar13 + 4) = plVar9;
                    (**(code **)(*plVar9 + 0x28))(plVar9);
                    *(longlong **)(puVar13 + 6) = plVar10;
                    if (plVar10 != (longlong *)0x0) {
                      (**(code **)(*plVar10 + 0x28))(plVar10);
                    }
                    puVar13[8] = uVar6;
                    puVar13[9] = uVar1;
                    puVar13[10] = (uint)fVar21;
                    plVar11 = plVar9;
                    plVar15 = plVar9;
                  }
                  else {
                    FUN_1804de3f0(lVar14,auStack_1e8);
                    plVar10 = plStack_1d0;
                    plVar11 = plStack_1e0;
                    plVar15 = plStack_1d8;
                  }
                  if (plVar10 != (longlong *)0x0) {
                    (**(code **)(*plVar10 + 0x38))(plVar10);
                  }
                  if (plVar15 != (longlong *)0x0) {
                    (**(code **)(*plVar15 + 0x38))(plVar15);
                  }
                  puVar13 = puStack_238;
                  lVar14 = lStack_228;
                  if (plVar11 != (longlong *)0x0) {
                    (**(code **)(*plVar11 + 0x38))(plVar11);
                    puVar13 = puStack_238;
                    lVar14 = lStack_228;
                  }
                }
                iStack_244 = iStack_244 + 1;
                lVar16 = lVar16 + 0x10;
                lVar8 = plVar9[7];
              } while ((ulonglong)(longlong)iStack_244 < (ulonglong)(plVar9[8] - lVar8 >> 4));
            }
            iStack_240 = iStack_240 + 1;
            puVar13 = (uint *)((longlong)puVar13 + 1);
            puStack_238 = puVar13;
          } while (iStack_240 < 8);
        }
        else {
          iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
          if (iVar3 == 3) {
            plVar10 = (longlong *)plVar9[9];
            uStack_124 = 0xff;
            uStack_120 = 0;
            uStack_128 = param_3;
            plStack_118 = plVar9;
            (**(code **)(*plVar9 + 0x28))(plVar9);
            uStack_110 = 0;
            uVar6 = FUN_1804dbf30(param_1 + 0x5b8);
            puStack_238._0_4_ = uVar6;
            FUN_1804d0560((longlong)(int)(*(uint *)(param_1 + 0x608) & uVar6) * 0x28 +
                          *(longlong *)
                           (*(longlong *)(param_1 + 0x5e8) + (longlong)((int)uVar6 >> 10) * 8) + 8,
                          &uStack_128);
            lStack_228 = (longlong)iVar4;
            FUN_1800571e0((longlong)(int)(*(uint *)(param_1 + 0x2b18) & param_3) * 0xd8 +
                          *(longlong *)(*(longlong *)(param_1 + 11000) + lStack_228 * 8) + 0x70,
                          &puStack_238);
            uStack_e0 = param_3;
            plStack_d8 = plVar9;
            (**(code **)(*plVar9 + 0x28))(plVar9);
            uVar6 = FUN_1804dbfe0(param_1 + 0x560);
            puStack_238 = (uint *)CONCAT44(puStack_238._4_4_,uVar6);
            lVar14 = *(longlong *)
                      (*(longlong *)(param_1 + 0x590) + (longlong)((int)uVar6 >> 10) * 8);
            lVar16 = (longlong)(int)(*(uint *)(param_1 + 0x5b0) & uVar6);
            *(uint *)(lVar14 + 8 + lVar16 * 0x18) = param_3;
            plStack_208 = plVar9;
            (**(code **)(*plVar9 + 0x28))(plVar9);
            plStack_208 = *(longlong **)(lVar14 + 0x10 + lVar16 * 0x18);
            *(longlong **)(lVar14 + 0x10 + lVar16 * 0x18) = plVar9;
            if (plStack_208 != (longlong *)0x0) {
              (**(code **)(*plStack_208 + 0x38))();
            }
            FUN_1800571e0();
            iStack_248 = 0;
            puStack_230 = (uint *)0x2c;
            puVar13 = (uint *)(param_1 + 0x100);
            do {
              iVar5 = (int)plVar10[0xb] + -1;
              if (iStack_248 < 0) {
                iVar3 = 0;
              }
              else {
                iVar3 = iStack_248;
                if (iVar5 < iStack_248) {
                  iVar3 = iVar5;
                }
              }
              iStack_244 = 0;
              lVar14 = plVar10[7];
              if (plVar10[8] - lVar14 >> 4 != 0) {
                lVar16 = 0;
                puStack_238 = puVar13;
                do {
                  if ((*(uint *)(lVar14 + 8 + lVar16) & 1 << ((byte)iVar3 & 0x1f)) != 0) {
                    plVar9 = *(longlong **)(lVar14 + lVar16);
                    auStack_1b8[0] = param_3;
                    plStack_1b0 = plVar10;
                    (**(code **)(*plVar10 + 0x28))(plVar10);
                    plStack_1a8 = plVar10;
                    (**(code **)(*plVar10 + 0x28))(plVar10);
                    plStack_1a0 = plVar9;
                    if (plVar9 != (longlong *)0x0) {
                      (**(code **)(*plVar9 + 0x28))(plVar9);
                    }
                    uVar6 = *(uint *)(plVar10 + 0xd);
                    uStack_198 = uVar6;
                    if (*(code **)(*plVar10 + 0x198) == (code *)&UNK_18027d990) {
                      lVar14 = (longlong)plVar10 + 0x214;
                    }
                    else {
                      lVar14 = (**(code **)(*plVar10 + 0x198))(plVar10);
                    }
                    uVar1 = *(uint *)(lVar14 + 0x30);
                    fVar20 = *(float *)((longlong)plVar9 + 0x28c) -
                             *(float *)((longlong)plVar9 + 0x27c);
                    fVar21 = *(float *)((longlong)plVar9 + 0x284) -
                             *(float *)((longlong)plVar9 + 0x274);
                    if (*(float *)(plVar9 + 0x51) - *(float *)(plVar9 + 0x4f) <= fVar21) {
                      fVar21 = *(float *)(plVar9 + 0x51) - *(float *)(plVar9 + 0x4f);
                    }
                    if (fVar20 <= fVar21) {
                      fVar21 = fVar20;
                    }
                    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 11000) + lStack_228 * 8)
                                      + (longlong)(int)(*(uint *)(param_1 + 0x2b18) & param_3) *
                                        0xd8 + (longlong)puStack_230);
                    lVar14 = (longlong)(int)(*puVar13 & uVar2) * 0x68 + 0x48 +
                             *(longlong *)
                              (*(longlong *)(puVar13 + -8) + (longlong)((int)uVar2 >> 10) * 8);
                    puVar13 = *(uint **)(lVar14 + 8);
                    uStack_194 = uVar1;
                    fStack_190 = fVar21;
                    if (puVar13 < *(uint **)(lVar14 + 0x10)) {
                      *(uint **)(lVar14 + 8) = puVar13 + 0xc;
                      *puVar13 = param_3;
                      *(longlong **)(puVar13 + 2) = plVar10;
                      puStack_218 = puVar13;
                      (**(code **)(*plVar10 + 0x28))(plVar10);
                      *(longlong **)(puVar13 + 4) = plVar10;
                      (**(code **)(*plVar10 + 0x28))(plVar10);
                      *(longlong **)(puVar13 + 6) = plVar9;
                      if (plVar9 != (longlong *)0x0) {
                        (**(code **)(*plVar9 + 0x28))(plVar9);
                      }
                      puVar13[8] = uVar6;
                      puVar13[9] = uVar1;
                      puVar13[10] = (uint)fVar21;
                      plVar11 = plVar10;
                      plVar15 = plVar10;
                    }
                    else {
                      FUN_1804de3f0(lVar14,auStack_1b8);
                      plVar9 = plStack_1a0;
                      plVar11 = plStack_1a8;
                      plVar15 = plStack_1b0;
                    }
                    if (plVar9 != (longlong *)0x0) {
                      (**(code **)(*plVar9 + 0x38))(plVar9);
                    }
                    if (plVar11 != (longlong *)0x0) {
                      (**(code **)(*plVar11 + 0x38))(plVar11);
                    }
                    puVar13 = puStack_238;
                    if (plVar15 != (longlong *)0x0) {
                      (**(code **)(*plVar15 + 0x38))(plVar15);
                      puVar13 = puStack_238;
                    }
                  }
                  iStack_244 = iStack_244 + 1;
                  lVar16 = lVar16 + 0x10;
                  lVar14 = plVar10[7];
                } while ((ulonglong)(longlong)iStack_244 < (ulonglong)(plVar10[8] - lVar14 >> 4));
              }
              plVar9 = plStack_220;
              iStack_248 = iStack_248 + 1;
              puVar13 = puVar13 + 0x16;
              puStack_230 = puStack_230 + 1;
            } while (iStack_248 < 8);
            puStack_238 = puVar13;
            (**(code **)(*plStack_220 + 0x38))(plStack_220);
            (**(code **)(*plVar9 + 0x38))(plVar9);
          }
          else {
            iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
            if (iVar3 == 6) {
              uVar6 = FUN_1804dbfe0(param_1 + 0x508);
              lStack_1f8 = (longlong)iVar4;
              *(uint *)(*(longlong *)(*(longlong *)(param_1 + 11000) + lStack_1f8 * 8) + 0x28 +
                       (longlong)(int)(*(uint *)(param_1 + 0x2b18) & param_3) * 0xd8) = uVar6;
              uStack_d0 = param_3;
              plStack_c8 = plVar9;
              (**(code **)(*plVar9 + 0x28))(plVar9);
              lVar14 = *(longlong *)
                        (*(longlong *)(param_1 + 0x538) + (longlong)((int)uVar6 >> 10) * 8);
              lVar16 = (longlong)(int)(*(uint *)(param_1 + 0x558) & uVar6);
              *(uint *)(lVar14 + 8 + lVar16 * 0x18) = param_3;
              plStack_200 = plVar9;
              (**(code **)(*plVar9 + 0x28))(plVar9);
              plStack_200 = *(longlong **)(lVar14 + 0x10 + lVar16 * 0x18);
              *(longlong **)(lVar14 + 0x10 + lVar16 * 0x18) = plVar9;
              if (plStack_200 != (longlong *)0x0) {
                (**(code **)(*plStack_200 + 0x38))();
              }
              iStack_248 = 0;
              lVar14 = plVar9[0x1c];
              if (plVar9[0x1d] - lVar14 >> 3 != 0) {
                puStack_218 = (uint *)(param_1 + 0x100);
                lStack_228 = 0;
                do {
                  plVar9 = *(longlong **)(lVar14 + lStack_228);
                  iStack_244 = 0;
                  puStack_238 = (uint *)0x2c;
                  puStack_230 = puStack_218;
                  do {
                    uVar17 = 0;
                    iVar5 = (int)plVar9[0xb] + -1;
                    if (iStack_244 < 0) {
                      bVar7 = 0;
                    }
                    else {
                      bVar7 = (byte)iStack_244;
                      if (iVar5 < iStack_244) {
                        bVar7 = (byte)iVar5;
                      }
                    }
                    lVar14 = plVar9[7];
                    uVar18 = uVar17;
                    if (plVar9[8] - lVar14 >> 4 != 0) {
                      do {
                        if ((*(uint *)(lVar14 + 8 + uVar17) & 1 << (bVar7 & 0x1f)) != 0) {
                          plVar10 = *(longlong **)(lVar14 + uVar17);
                          auStack_188[0] = param_3;
                          plStack_180 = plVar9;
                          (**(code **)(*plVar9 + 0x28))(plVar9);
                          plStack_178 = plVar9;
                          (**(code **)(*plVar9 + 0x28))(plVar9);
                          plStack_170 = plVar10;
                          if (plVar10 != (longlong *)0x0) {
                            (**(code **)(*plVar10 + 0x28))(plVar10);
                          }
                          uVar6 = *(uint *)(plVar9 + 0xd);
                          uStack_168 = uVar6;
                          if (*(code **)(*plVar9 + 0x198) == (code *)&UNK_18027d990) {
                            lVar14 = (longlong)plVar9 + 0x214;
                          }
                          else {
                            lVar14 = (**(code **)(*plVar9 + 0x198))(plVar9);
                          }
                          uVar1 = *(uint *)(lVar14 + 0x30);
                          fVar22 = *(float *)((longlong)plVar10 + 0x28c) -
                                   *(float *)((longlong)plVar10 + 0x27c);
                          fVar21 = *(float *)(plVar10 + 0x51) - *(float *)(plVar10 + 0x4f);
                          fVar20 = *(float *)((longlong)plVar10 + 0x284) -
                                   *(float *)((longlong)plVar10 + 0x274);
                          if (fVar21 <= fVar20) {
                            if (fVar22 <= fVar21) {
                              fVar21 = fVar22;
                            }
                          }
                          else {
                            fVar21 = fVar22;
                            if (fVar20 <= fVar22) {
                              fVar21 = fVar20;
                            }
                          }
                          uVar2 = *(uint *)(*(longlong *)
                                             (*(longlong *)(param_1 + 11000) + lStack_1f8 * 8) +
                                            (longlong)(int)(*(uint *)(param_1 + 0x2b18) & param_3) *
                                            0xd8 + (longlong)puStack_238);
                          lVar14 = (longlong)(int)(uVar2 & *puStack_230) * 0x68 + 0x48 +
                                   *(longlong *)
                                    (*(longlong *)(puStack_230 + -8) +
                                    (longlong)((int)uVar2 >> 10) * 8);
                          puVar13 = *(uint **)(lVar14 + 8);
                          uStack_164 = uVar1;
                          fStack_160 = fVar21;
                          if (puVar13 < *(uint **)(lVar14 + 0x10)) {
                            *(uint **)(lVar14 + 8) = puVar13 + 0xc;
                            *puVar13 = param_3;
                            *(longlong **)(puVar13 + 2) = plVar9;
                            puStack_1f0 = puVar13;
                            (**(code **)(*plVar9 + 0x28))(plVar9);
                            *(longlong **)(puVar13 + 4) = plVar9;
                            (**(code **)(*plVar9 + 0x28))(plVar9);
                            *(longlong **)(puVar13 + 6) = plVar10;
                            if (plVar10 != (longlong *)0x0) {
                              (**(code **)(*plVar10 + 0x28))(plVar10);
                            }
                            puVar13[8] = uVar6;
                            puVar13[9] = uVar1;
                            puVar13[10] = (uint)fVar21;
                            plVar11 = plVar9;
                            plVar15 = plVar9;
                          }
                          else {
                            FUN_1804de3f0(lVar14,auStack_188);
                            plVar10 = plStack_170;
                            plVar11 = plStack_180;
                            plVar15 = plStack_178;
                          }
                          if (plVar10 != (longlong *)0x0) {
                            (**(code **)(*plVar10 + 0x38))(plVar10);
                          }
                          if (plVar15 != (longlong *)0x0) {
                            (**(code **)(*plVar15 + 0x38))(plVar15);
                          }
                          if (plVar11 != (longlong *)0x0) {
                            (**(code **)(*plVar11 + 0x38))(plVar11);
                          }
                        }
                        uVar6 = (int)uVar18 + 1;
                        uVar17 = uVar17 + 0x10;
                        lVar14 = plVar9[7];
                        uVar18 = (ulonglong)uVar6;
                      } while ((ulonglong)(longlong)(int)uVar6 <
                               (ulonglong)(plVar9[8] - lVar14 >> 4));
                    }
                    iStack_244 = iStack_244 + 1;
                    puStack_230 = puStack_230 + 0x16;
                    puStack_238 = puStack_238 + 1;
                  } while (iStack_244 < 8);
                  iStack_248 = iStack_248 + 1;
                  lStack_228 = lStack_228 + 8;
                  lVar14 = plStack_220[0x1c];
                  plVar9 = plStack_220;
                } while ((ulonglong)(longlong)iStack_248 <
                         (ulonglong)(plStack_220[0x1d] - lVar14 >> 3));
              }
              (**(code **)(*plVar9 + 0x38))(plVar9);
            }
            else {
              iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
              if ((iVar3 != 1) && (iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9), iVar3 == 2)) {
                puStack_238 = (uint *)((ulonglong)puStack_238 & 0xffffffff00000000);
                lVar14 = plVar9[6];
                if (plVar9[7] - lVar14 >> 3 != 0) {
                  plStack_220 = (longlong *)0x0;
                  do {
                    plVar10 = *(longlong **)(lVar14 + (longlong)plStack_220);
                    iVar3 = (**(code **)(*plVar10 + 0x98))(plVar10);
                    if (iVar3 == 0) {
                      if ((void *)*plVar9 != &UNK_180a22558) {
                        (**(code **)((void *)*plVar9 + 0x158))(plVar9);
                      }
                      if (*(code **)(*plVar10 + 0x158) != (code *)&UNK_18027d980) {
                        (**(code **)(*plVar10 + 0x158))(plVar10);
                      }
                      iStack_248 = 0;
                      lStack_228 = 0x2c;
                      puStack_230 = (uint *)(param_1 + 0x100);
                      do {
                        lVar14 = 0;
                        iVar5 = (int)plVar10[0xb] + -1;
                        if (iStack_248 < 0) {
                          bVar7 = 0;
                        }
                        else {
                          bVar7 = (byte)iStack_248;
                          if (iVar5 < iStack_248) {
                            bVar7 = (byte)iVar5;
                          }
                        }
                        iStack_244 = 0;
                        lVar16 = plVar10[7];
                        if (plVar10[8] - lVar16 >> 4 != 0) {
                          do {
                            if ((*(uint *)(lVar16 + 8 + lVar14) & 1 << (bVar7 & 0x1f)) != 0) {
                              plVar11 = *(longlong **)(lVar16 + lVar14);
                              auStack_158[0] = param_3;
                              plStack_150 = plVar10;
                              (**(code **)(*plVar10 + 0x28))(plVar10);
                              plStack_148 = plVar9;
                              (**(code **)(*plVar9 + 0x28))(plVar9);
                              plStack_140 = plVar11;
                              if (plVar11 != (longlong *)0x0) {
                                (**(code **)(*plVar11 + 0x28))(plVar11);
                              }
                              uVar6 = *(uint *)(plVar10 + 0xd);
                              uStack_138 = uVar6;
                              if (*(code **)(*plVar10 + 0x198) == (code *)&UNK_18027d990) {
                                lVar16 = (longlong)plVar10 + 0x214;
                              }
                              else {
                                lVar16 = (**(code **)(*plVar10 + 0x198))(plVar10);
                              }
                              uVar1 = *(uint *)(lVar16 + 0x30);
                              fVar20 = *(float *)((longlong)plVar11 + 0x28c) -
                                       *(float *)((longlong)plVar11 + 0x27c);
                              fVar21 = *(float *)((longlong)plVar11 + 0x284) -
                                       *(float *)((longlong)plVar11 + 0x274);
                              if (*(float *)(plVar11 + 0x51) - *(float *)(plVar11 + 0x4f) <= fVar21)
                              {
                                fVar21 = *(float *)(plVar11 + 0x51) - *(float *)(plVar11 + 0x4f);
                              }
                              if (fVar20 <= fVar21) {
                                fVar21 = fVar20;
                              }
                              uVar2 = *(uint *)(lStack_228 +
                                               (longlong)
                                               (int)(*(uint *)(param_1 + 0x2b18) & param_3) * 0xd8 +
                                               *(longlong *)
                                                (*(longlong *)(param_1 + 11000) +
                                                (longlong)iVar4 * 8));
                              lVar16 = (longlong)(int)(*puStack_230 & uVar2) * 0x68 + 0x48 +
                                       *(longlong *)
                                        (*(longlong *)(puStack_230 + -8) +
                                        (longlong)((int)uVar2 >> 10) * 8);
                              puVar13 = *(uint **)(lVar16 + 8);
                              uStack_134 = uVar1;
                              fStack_130 = fVar21;
                              if (puVar13 < *(uint **)(lVar16 + 0x10)) {
                                *(uint **)(lVar16 + 8) = puVar13 + 0xc;
                                *puVar13 = param_3;
                                *(longlong **)(puVar13 + 2) = plVar10;
                                puStack_1f0 = puVar13;
                                (**(code **)(*plVar10 + 0x28))(plVar10);
                                *(longlong **)(puVar13 + 4) = plVar9;
                                (**(code **)(*plVar9 + 0x28))(plVar9);
                                *(longlong **)(puVar13 + 6) = plVar11;
                                if (plVar11 != (longlong *)0x0) {
                                  (**(code **)(*plVar11 + 0x28))(plVar11);
                                }
                                puVar13[8] = uVar6;
                                puVar13[9] = uVar1;
                                puVar13[10] = (uint)fVar21;
                                plVar15 = plVar10;
                                plVar19 = plVar9;
                              }
                              else {
                                FUN_1804de3f0(lVar16,auStack_158);
                                plVar11 = plStack_140;
                                plVar15 = plStack_150;
                                plVar19 = plStack_148;
                              }
                              if (plVar11 != (longlong *)0x0) {
                                (**(code **)(*plVar11 + 0x38))(plVar11);
                              }
                              if (plVar19 != (longlong *)0x0) {
                                (**(code **)(*plVar19 + 0x38))(plVar19);
                              }
                              if (plVar15 != (longlong *)0x0) {
                                (**(code **)(*plVar15 + 0x38))(plVar15);
                              }
                            }
                            iStack_244 = iStack_244 + 1;
                            lVar14 = lVar14 + 0x10;
                            lVar16 = plVar10[7];
                          } while ((ulonglong)(longlong)iStack_244 <
                                   (ulonglong)(plVar10[8] - lVar16 >> 4));
                        }
                        iStack_248 = iStack_248 + 1;
                        puStack_230 = puStack_230 + 0x16;
                        lStack_228 = lStack_228 + 4;
                      } while (iStack_248 < 8);
                      iVar5 = (uint)puStack_238;
                    }
                    else {
                      iVar3 = (**(code **)(*plVar10 + 0x98))(plVar10);
                      if ((iVar3 != 1) &&
                         (iVar3 = (**(code **)(*plVar10 + 0x98))(plVar10), iVar3 == 4)) {
                        uStack_104 = 0xff;
                        uStack_108 = param_3;
                        plStack_100 = plVar9;
                        (**(code **)(*plVar9 + 0x28))(plVar9);
                        plStack_f8 = plVar10;
                        (**(code **)(*plVar10 + 0x28))(plVar10);
                        uStack_f0 = 0;
                        uVar6 = FUN_1804dbf30(param_1 + 0x5b8);
                        puStack_238 = (uint *)CONCAT44(puStack_238._4_4_,uVar6);
                        FUN_1804d0560((longlong)(int)(*(uint *)(param_1 + 0x608) & uVar6) * 0x28 +
                                      *(longlong *)
                                       (*(longlong *)(param_1 + 0x5e8) +
                                       (longlong)((int)uVar6 >> 10) * 8) + 8,&uStack_108);
                        FUN_1800571e0((longlong)(int)(*(uint *)(param_1 + 0x2b18) & param_3) * 0xd8
                                      + *(longlong *)
                                         (*(longlong *)(param_1 + 11000) + (longlong)iVar4 * 8) +
                                        0x70,&puStack_238);
                        if (plVar10 != (longlong *)0x0) {
                          (**(code **)(*plVar10 + 0x38))(plVar10);
                        }
                        (**(code **)(*plVar9 + 0x38))(plVar9);
                      }
                    }
                    iVar5 = iVar5 + 1;
                    puStack_238 = (uint *)CONCAT44(puStack_238._4_4_,iVar5);
                    plStack_220 = (longlong *)((longlong)plStack_220 + 8);
                    lVar14 = plVar9[6];
                  } while ((ulonglong)(longlong)iVar5 < (ulonglong)(plVar9[7] - lVar14 >> 3));
                }
              }
            }
          }
        }
        iStackX_20 = iStackX_20 + 1;
        lStack_210 = lStack_210 + 1;
        lVar14 = *(longlong *)(param_2 + 0xf0);
      } while ((ulonglong)(longlong)iStackX_20 <
               (ulonglong)(*(longlong *)(param_2 + 0xf8) - lVar14 >> 3));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






