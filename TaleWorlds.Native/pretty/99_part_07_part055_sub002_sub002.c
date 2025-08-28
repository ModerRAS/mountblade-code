/* 函数别名定义: RenderingSystemProcessor */
#define RenderingSystemProcessor RenderingSystemProcessor
#include "RenderingSystemProcessor0_definition.h"
#include "TaleWorlds.Native.Split.h"
// 99_part_07_part055_sub002_sub002.c - 1 个函数
// 函数: void function_4d13d0(int64_t param_1,int64_t param_2,uint param_3)
void function_4d13d0(int64_t param_1,int64_t param_2,uint param_3)
{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  uint *puVar12;
  uint *puVar13;
  int64_t lVar14;
  int64_t *plVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  int64_t *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iStackX_20;
  int iStack_248;
  int iStack_244;
  int iStack_240;
  uint *plocal_var_238;
  uint *plocal_var_230;
  int64_t lStack_228;
  int64_t *plStack_220;
  uint *plocal_var_218;
  int64_t lStack_210;
  int64_t *plStack_208;
  int64_t *plStack_200;
  int64_t lStack_1f8;
  uint *plocal_var_1f0;
  uint stack_array_1e8 [2];
  int64_t *plStack_1e0;
  int64_t *plStack_1d8;
  int64_t *plStack_1d0;
  uint local_var_1c8;
  uint local_var_1c4;
  float fStack_1c0;
  uint stack_array_1b8 [2];
  int64_t *plStack_1b0;
  int64_t *plStack_1a8;
  int64_t *plStack_1a0;
  uint local_var_198;
  uint local_var_194;
  float fStack_190;
  uint stack_array_188 [2];
  int64_t *plStack_180;
  int64_t *plStack_178;
  int64_t *plStack_170;
  uint local_var_168;
  uint local_var_164;
  float fStack_160;
  uint stack_array_158 [2];
  int64_t *plStack_150;
  int64_t *plStack_148;
  int64_t *plStack_140;
  uint local_var_138;
  uint local_var_134;
  float fStack_130;
  uint local_var_128;
  int8_t local_var_124;
  uint64_t local_var_120;
  int64_t *plStack_118;
  int32_t local_var_110;
  uint local_var_108;
  int8_t local_var_104;
  int64_t *plStack_100;
  int64_t *plStack_f8;
  int32_t local_var_f0;
  uint64_t local_var_e8;
  uint local_var_e0;
  int64_t *plStack_d8;
  uint local_var_d0;
  int64_t *plStack_c8;
  if (param_2 != 0) {
    local_var_e8 = 0xfffffffffffffffe;
    iStackX_20 = 0;
    lVar14 = *(int64_t *)(param_2 + 0xf0);
    if (*(int64_t *)(param_2 + 0xf8) - lVar14 >> 3 != 0) {
      lStack_210 = 0;
      do {
        iVar5 = 0;
        plVar9 = *(int64_t **)(lVar14 + lStack_210 * 8);
        plStack_220 = plVar9;
        iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
        iVar4 = (int)param_3 >> 10;
        if (iVar3 == 0) {
          iStack_240 = 0;
          lVar14 = (int64_t)*(int *)((int64_t)plVar9 + 0x5c);
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
            plocal_var_238 = puVar13;
            if (plVar9[8] - lVar8 >> 4 != 0) {
              do {
                uVar6 = *(uint *)(lVar8 + 8 + lVar16);
                puVar12 = (uint *)(lVar14 + (int64_t)puVar13);
                if (((lVar14 != 0) && (puVar12 = puVar13, (int64_t)puVar13 < 0)) &&
                   ((uVar6 & 0xfffffffe) != 0)) {
                  puVar12 = (uint *)0x0;
                }
                if (((1 << (bVar7 & 0x1f) & uVar6) != 0) && (-1 < (int64_t)puVar12)) {
                  plVar10 = *(int64_t **)(lVar8 + lVar16);
                  stack_array_1e8[0] = param_3;
                  plStack_1e0 = plVar9;
                  (**(code **)(*plVar9 + 0x28))(plVar9);
                  plStack_1d8 = plVar9;
                  (**(code **)(*plVar9 + 0x28))(plVar9);
                  plStack_1d0 = plVar10;
                  if (plVar10 != (int64_t *)0x0) {
                    (**(code **)(*plVar10 + 0x28))(plVar10);
                  }
                  uVar6 = *(uint *)(plVar9 + 0xd);
                  local_var_1c8 = uVar6;
                  if (*(code **)(*plVar9 + 0x198) == (code *)&rendering_buffer_2544_ptr) {
                    lVar14 = (int64_t)plVar9 + 0x214;
                  }
                  else {
                    lVar14 = (**(code **)(*plVar9 + 0x198))(plVar9);
                  }
                  uVar1 = *(uint *)(lVar14 + 0x30);
                  fVar20 = *(float *)((int64_t)plVar10 + 0x28c) -
                           *(float *)((int64_t)plVar10 + 0x27c);
                  fVar21 = *(float *)((int64_t)plVar10 + 0x284) -
                           *(float *)((int64_t)plVar10 + 0x274);
                  if (*(float *)(plVar10 + 0x51) - *(float *)(plVar10 + 0x4f) <= fVar21) {
                    fVar21 = *(float *)(plVar10 + 0x51) - *(float *)(plVar10 + 0x4f);
                  }
                  if (fVar20 <= fVar21) {
                    fVar21 = fVar20;
                  }
                  lVar14 = ((int64_t)puVar12 + 2) * 0x58 + param_1;
                  uVar2 = *(uint *)((int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_3) * 0xd8 +
                                    *(int64_t *)
                                     (*(int64_t *)(param_1 + 11000) + (int64_t)iVar4 * 8) + 0x2c +
                                   (int64_t)puVar12 * 4);
                  lVar14 = (int64_t)(int)(*(uint *)(lVar14 + 0x50) & uVar2) * 0x68 + 0x48 +
                           *(int64_t *)
                            (*(int64_t *)(lVar14 + 0x30) + (int64_t)((int)uVar2 >> 10) * 8);
                  puVar13 = *(uint **)(lVar14 + 8);
                  local_var_1c4 = uVar1;
                  fStack_1c0 = fVar21;
                  if (puVar13 < *(uint **)(lVar14 + 0x10)) {
                    *(uint **)(lVar14 + 8) = puVar13 + 0xc;
                    *puVar13 = param_3;
                    *(int64_t **)(puVar13 + 2) = plVar9;
                    plocal_var_218 = puVar13;
                    (**(code **)(*plVar9 + 0x28))(plVar9);
                    *(int64_t **)(puVar13 + 4) = plVar9;
                    (**(code **)(*plVar9 + 0x28))(plVar9);
                    *(int64_t **)(puVar13 + 6) = plVar10;
                    if (plVar10 != (int64_t *)0x0) {
                      (**(code **)(*plVar10 + 0x28))(plVar10);
                    }
                    puVar13[8] = uVar6;
                    puVar13[9] = uVar1;
                    puVar13[10] = (uint)fVar21;
                    plVar11 = plVar9;
                    plVar15 = plVar9;
                  }
                  else {
                    function_4de3f0(lVar14,stack_array_1e8);
                    plVar10 = plStack_1d0;
                    plVar11 = plStack_1e0;
                    plVar15 = plStack_1d8;
                  }
                  if (plVar10 != (int64_t *)0x0) {
                    (**(code **)(*plVar10 + 0x38))(plVar10);
                  }
                  if (plVar15 != (int64_t *)0x0) {
                    (**(code **)(*plVar15 + 0x38))(plVar15);
                  }
                  puVar13 = plocal_var_238;
                  lVar14 = lStack_228;
                  if (plVar11 != (int64_t *)0x0) {
                    (**(code **)(*plVar11 + 0x38))(plVar11);
                    puVar13 = plocal_var_238;
                    lVar14 = lStack_228;
                  }
                }
                iStack_244 = iStack_244 + 1;
                lVar16 = lVar16 + 0x10;
                lVar8 = plVar9[7];
              } while ((uint64_t)(int64_t)iStack_244 < (uint64_t)(plVar9[8] - lVar8 >> 4));
            }
            iStack_240 = iStack_240 + 1;
            puVar13 = (uint *)((int64_t)puVar13 + 1);
            plocal_var_238 = puVar13;
          } while (iStack_240 < 8);
        }
        else {
          iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
          if (iVar3 == 3) {
            plVar10 = (int64_t *)plVar9[9];
            local_var_124 = 0xff;
            local_var_120 = 0;
            local_var_128 = param_3;
            plStack_118 = plVar9;
            (**(code **)(*plVar9 + 0x28))(plVar9);
            local_var_110 = 0;
            uVar6 = function_4dbf30(param_1 + 0x5b8);
            plocal_var_238._0_4_ = uVar6;
            function_4d0560((int64_t)(int)(*(uint *)(param_1 + 0x608) & uVar6) * 0x28 +
                          *(int64_t *)
                           (*(int64_t *)(param_1 + 0x5e8) + (int64_t)((int)uVar6 >> 10) * 8) + 8,
                          &local_var_128);
            lStack_228 = (int64_t)iVar4;
            SystemDatabaseProcessor((int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_3) * 0xd8 +
                          *(int64_t *)(*(int64_t *)(param_1 + 11000) + lStack_228 * 8) + 0x70,
                          &plocal_var_238);
            local_var_e0 = param_3;
            plStack_d8 = plVar9;
            (**(code **)(*plVar9 + 0x28))(plVar9);
            uVar6 = function_4dbfe0(param_1 + 0x560);
            plocal_var_238 = (uint *)CONCAT44(plocal_var_238._4_4_,uVar6);
            lVar14 = *(int64_t *)
                      (*(int64_t *)(param_1 + 0x590) + (int64_t)((int)uVar6 >> 10) * 8);
            lVar16 = (int64_t)(int)(*(uint *)(param_1 + 0x5b0) & uVar6);
            *(uint *)(lVar14 + 8 + lVar16 * 0x18) = param_3;
            plStack_208 = plVar9;
            (**(code **)(*plVar9 + 0x28))(plVar9);
            plStack_208 = *(int64_t **)(lVar14 + 0x10 + lVar16 * 0x18);
            *(int64_t **)(lVar14 + 0x10 + lVar16 * 0x18) = plVar9;
            if (plStack_208 != (int64_t *)0x0) {
              (**(code **)(*plStack_208 + 0x38))();
            }
            SystemDatabaseProcessor();
            iStack_248 = 0;
            plocal_var_230 = (uint *)0x2c;
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
                plocal_var_238 = puVar13;
                do {
                  if ((*(uint *)(lVar14 + 8 + lVar16) & 1 << ((byte)iVar3 & 0x1f)) != 0) {
                    plVar9 = *(int64_t **)(lVar14 + lVar16);
                    stack_array_1b8[0] = param_3;
                    plStack_1b0 = plVar10;
                    (**(code **)(*plVar10 + 0x28))(plVar10);
                    plStack_1a8 = plVar10;
                    (**(code **)(*plVar10 + 0x28))(plVar10);
                    plStack_1a0 = plVar9;
                    if (plVar9 != (int64_t *)0x0) {
                      (**(code **)(*plVar9 + 0x28))(plVar9);
                    }
                    uVar6 = *(uint *)(plVar10 + 0xd);
                    local_var_198 = uVar6;
                    if (*(code **)(*plVar10 + 0x198) == (code *)&rendering_buffer_2544_ptr) {
                      lVar14 = (int64_t)plVar10 + 0x214;
                    }
                    else {
                      lVar14 = (**(code **)(*plVar10 + 0x198))(plVar10);
                    }
                    uVar1 = *(uint *)(lVar14 + 0x30);
                    fVar20 = *(float *)((int64_t)plVar9 + 0x28c) -
                             *(float *)((int64_t)plVar9 + 0x27c);
                    fVar21 = *(float *)((int64_t)plVar9 + 0x284) -
                             *(float *)((int64_t)plVar9 + 0x274);
                    if (*(float *)(plVar9 + 0x51) - *(float *)(plVar9 + 0x4f) <= fVar21) {
                      fVar21 = *(float *)(plVar9 + 0x51) - *(float *)(plVar9 + 0x4f);
                    }
                    if (fVar20 <= fVar21) {
                      fVar21 = fVar20;
                    }
                    uVar2 = *(uint *)(*(int64_t *)(*(int64_t *)(param_1 + 11000) + lStack_228 * 8)
                                      + (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_3) *
                                        0xd8 + (int64_t)plocal_var_230);
                    lVar14 = (int64_t)(int)(*puVar13 & uVar2) * 0x68 + 0x48 +
                             *(int64_t *)
                              (*(int64_t *)(puVar13 + -8) + (int64_t)((int)uVar2 >> 10) * 8);
                    puVar13 = *(uint **)(lVar14 + 8);
                    local_var_194 = uVar1;
                    fStack_190 = fVar21;
                    if (puVar13 < *(uint **)(lVar14 + 0x10)) {
                      *(uint **)(lVar14 + 8) = puVar13 + 0xc;
                      *puVar13 = param_3;
                      *(int64_t **)(puVar13 + 2) = plVar10;
                      plocal_var_218 = puVar13;
                      (**(code **)(*plVar10 + 0x28))(plVar10);
                      *(int64_t **)(puVar13 + 4) = plVar10;
                      (**(code **)(*plVar10 + 0x28))(plVar10);
                      *(int64_t **)(puVar13 + 6) = plVar9;
                      if (plVar9 != (int64_t *)0x0) {
                        (**(code **)(*plVar9 + 0x28))(plVar9);
                      }
                      puVar13[8] = uVar6;
                      puVar13[9] = uVar1;
                      puVar13[10] = (uint)fVar21;
                      plVar11 = plVar10;
                      plVar15 = plVar10;
                    }
                    else {
                      function_4de3f0(lVar14,stack_array_1b8);
                      plVar9 = plStack_1a0;
                      plVar11 = plStack_1a8;
                      plVar15 = plStack_1b0;
                    }
                    if (plVar9 != (int64_t *)0x0) {
                      (**(code **)(*plVar9 + 0x38))(plVar9);
                    }
                    if (plVar11 != (int64_t *)0x0) {
                      (**(code **)(*plVar11 + 0x38))(plVar11);
                    }
                    puVar13 = plocal_var_238;
                    if (plVar15 != (int64_t *)0x0) {
                      (**(code **)(*plVar15 + 0x38))(plVar15);
                      puVar13 = plocal_var_238;
                    }
                  }
                  iStack_244 = iStack_244 + 1;
                  lVar16 = lVar16 + 0x10;
                  lVar14 = plVar10[7];
                } while ((uint64_t)(int64_t)iStack_244 < (uint64_t)(plVar10[8] - lVar14 >> 4));
              }
              plVar9 = plStack_220;
              iStack_248 = iStack_248 + 1;
              puVar13 = puVar13 + 0x16;
              plocal_var_230 = plocal_var_230 + 1;
            } while (iStack_248 < 8);
            plocal_var_238 = puVar13;
            (**(code **)(*plStack_220 + 0x38))(plStack_220);
            (**(code **)(*plVar9 + 0x38))(plVar9);
          }
          else {
            iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
            if (iVar3 == 6) {
              uVar6 = function_4dbfe0(param_1 + 0x508);
              lStack_1f8 = (int64_t)iVar4;
              *(uint *)(*(int64_t *)(*(int64_t *)(param_1 + 11000) + lStack_1f8 * 8) + 0x28 +
                       (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_3) * 0xd8) = uVar6;
              local_var_d0 = param_3;
              plStack_c8 = plVar9;
              (**(code **)(*plVar9 + 0x28))(plVar9);
              lVar14 = *(int64_t *)
                        (*(int64_t *)(param_1 + 0x538) + (int64_t)((int)uVar6 >> 10) * 8);
              lVar16 = (int64_t)(int)(*(uint *)(param_1 + 0x558) & uVar6);
              *(uint *)(lVar14 + 8 + lVar16 * 0x18) = param_3;
              plStack_200 = plVar9;
              (**(code **)(*plVar9 + 0x28))(plVar9);
              plStack_200 = *(int64_t **)(lVar14 + 0x10 + lVar16 * 0x18);
              *(int64_t **)(lVar14 + 0x10 + lVar16 * 0x18) = plVar9;
              if (plStack_200 != (int64_t *)0x0) {
                (**(code **)(*plStack_200 + 0x38))();
              }
              iStack_248 = 0;
              lVar14 = plVar9[0x1c];
              if (plVar9[0x1d] - lVar14 >> 3 != 0) {
                plocal_var_218 = (uint *)(param_1 + 0x100);
                lStack_228 = 0;
                do {
                  plVar9 = *(int64_t **)(lVar14 + lStack_228);
                  iStack_244 = 0;
                  plocal_var_238 = (uint *)0x2c;
                  plocal_var_230 = plocal_var_218;
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
                          plVar10 = *(int64_t **)(lVar14 + uVar17);
                          stack_array_188[0] = param_3;
                          plStack_180 = plVar9;
                          (**(code **)(*plVar9 + 0x28))(plVar9);
                          plStack_178 = plVar9;
                          (**(code **)(*plVar9 + 0x28))(plVar9);
                          plStack_170 = plVar10;
                          if (plVar10 != (int64_t *)0x0) {
                            (**(code **)(*plVar10 + 0x28))(plVar10);
                          }
                          uVar6 = *(uint *)(plVar9 + 0xd);
                          local_var_168 = uVar6;
                          if (*(code **)(*plVar9 + 0x198) == (code *)&rendering_buffer_2544_ptr) {
                            lVar14 = (int64_t)plVar9 + 0x214;
                          }
                          else {
                            lVar14 = (**(code **)(*plVar9 + 0x198))(plVar9);
                          }
                          uVar1 = *(uint *)(lVar14 + 0x30);
                          fVar22 = *(float *)((int64_t)plVar10 + 0x28c) -
                                   *(float *)((int64_t)plVar10 + 0x27c);
                          fVar21 = *(float *)(plVar10 + 0x51) - *(float *)(plVar10 + 0x4f);
                          fVar20 = *(float *)((int64_t)plVar10 + 0x284) -
                                   *(float *)((int64_t)plVar10 + 0x274);
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
                          uVar2 = *(uint *)(*(int64_t *)
                                             (*(int64_t *)(param_1 + 11000) + lStack_1f8 * 8) +
                                            (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_3) *
                                            0xd8 + (int64_t)plocal_var_238);
                          lVar14 = (int64_t)(int)(uVar2 & *plocal_var_230) * 0x68 + 0x48 +
                                   *(int64_t *)
                                    (*(int64_t *)(plocal_var_230 + -8) +
                                    (int64_t)((int)uVar2 >> 10) * 8);
                          puVar13 = *(uint **)(lVar14 + 8);
                          local_var_164 = uVar1;
                          fStack_160 = fVar21;
                          if (puVar13 < *(uint **)(lVar14 + 0x10)) {
                            *(uint **)(lVar14 + 8) = puVar13 + 0xc;
                            *puVar13 = param_3;
                            *(int64_t **)(puVar13 + 2) = plVar9;
                            plocal_var_1f0 = puVar13;
                            (**(code **)(*plVar9 + 0x28))(plVar9);
                            *(int64_t **)(puVar13 + 4) = plVar9;
                            (**(code **)(*plVar9 + 0x28))(plVar9);
                            *(int64_t **)(puVar13 + 6) = plVar10;
                            if (plVar10 != (int64_t *)0x0) {
                              (**(code **)(*plVar10 + 0x28))(plVar10);
                            }
                            puVar13[8] = uVar6;
                            puVar13[9] = uVar1;
                            puVar13[10] = (uint)fVar21;
                            plVar11 = plVar9;
                            plVar15 = plVar9;
                          }
                          else {
                            function_4de3f0(lVar14,stack_array_188);
                            plVar10 = plStack_170;
                            plVar11 = plStack_180;
                            plVar15 = plStack_178;
                          }
                          if (plVar10 != (int64_t *)0x0) {
                            (**(code **)(*plVar10 + 0x38))(plVar10);
                          }
                          if (plVar15 != (int64_t *)0x0) {
                            (**(code **)(*plVar15 + 0x38))(plVar15);
                          }
                          if (plVar11 != (int64_t *)0x0) {
                            (**(code **)(*plVar11 + 0x38))(plVar11);
                          }
                        }
                        uVar6 = (int)uVar18 + 1;
                        uVar17 = uVar17 + 0x10;
                        lVar14 = plVar9[7];
                        uVar18 = (uint64_t)uVar6;
                      } while ((uint64_t)(int64_t)(int)uVar6 <
                               (uint64_t)(plVar9[8] - lVar14 >> 4));
                    }
                    iStack_244 = iStack_244 + 1;
                    plocal_var_230 = plocal_var_230 + 0x16;
                    plocal_var_238 = plocal_var_238 + 1;
                  } while (iStack_244 < 8);
                  iStack_248 = iStack_248 + 1;
                  lStack_228 = lStack_228 + 8;
                  lVar14 = plStack_220[0x1c];
                  plVar9 = plStack_220;
                } while ((uint64_t)(int64_t)iStack_248 <
                         (uint64_t)(plStack_220[0x1d] - lVar14 >> 3));
              }
              (**(code **)(*plVar9 + 0x38))(plVar9);
            }
            else {
              iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
              if ((iVar3 != 1) && (iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9), iVar3 == 2)) {
                plocal_var_238 = (uint *)((uint64_t)plocal_var_238 & 0xffffffff00000000);
                lVar14 = plVar9[6];
                if (plVar9[7] - lVar14 >> 3 != 0) {
                  plStack_220 = (int64_t *)0x0;
                  do {
                    plVar10 = *(int64_t **)(lVar14 + (int64_t)plStack_220);
                    iVar3 = (**(code **)(*plVar10 + 0x98))(plVar10);
                    if (iVar3 == 0) {
                      if ((void *)*plVar9 != &processed_var_7336_ptr) {
                        (**(code **)((void *)*plVar9 + 0x158))(plVar9);
                      }
                      if (*(code **)(*plVar10 + 0x158) != (code *)&rendering_buffer_2528_ptr) {
                        (**(code **)(*plVar10 + 0x158))(plVar10);
                      }
                      iStack_248 = 0;
                      lStack_228 = 0x2c;
                      plocal_var_230 = (uint *)(param_1 + 0x100);
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
                              plVar11 = *(int64_t **)(lVar16 + lVar14);
                              stack_array_158[0] = param_3;
                              plStack_150 = plVar10;
                              (**(code **)(*plVar10 + 0x28))(plVar10);
                              plStack_148 = plVar9;
                              (**(code **)(*plVar9 + 0x28))(plVar9);
                              plStack_140 = plVar11;
                              if (plVar11 != (int64_t *)0x0) {
                                (**(code **)(*plVar11 + 0x28))(plVar11);
                              }
                              uVar6 = *(uint *)(plVar10 + 0xd);
                              local_var_138 = uVar6;
                              if (*(code **)(*plVar10 + 0x198) == (code *)&rendering_buffer_2544_ptr) {
                                lVar16 = (int64_t)plVar10 + 0x214;
                              }
                              else {
                                lVar16 = (**(code **)(*plVar10 + 0x198))(plVar10);
                              }
                              uVar1 = *(uint *)(lVar16 + 0x30);
                              fVar20 = *(float *)((int64_t)plVar11 + 0x28c) -
                                       *(float *)((int64_t)plVar11 + 0x27c);
                              fVar21 = *(float *)((int64_t)plVar11 + 0x284) -
                                       *(float *)((int64_t)plVar11 + 0x274);
                              if (*(float *)(plVar11 + 0x51) - *(float *)(plVar11 + 0x4f) <= fVar21)
                              {
                                fVar21 = *(float *)(plVar11 + 0x51) - *(float *)(plVar11 + 0x4f);
                              }
                              if (fVar20 <= fVar21) {
                                fVar21 = fVar20;
                              }
                              uVar2 = *(uint *)(lStack_228 +
                                               (int64_t)
                                               (int)(*(uint *)(param_1 + 0x2b18) & param_3) * 0xd8 +
                                               *(int64_t *)
                                                (*(int64_t *)(param_1 + 11000) +
                                                (int64_t)iVar4 * 8));
                              lVar16 = (int64_t)(int)(*plocal_var_230 & uVar2) * 0x68 + 0x48 +
                                       *(int64_t *)
                                        (*(int64_t *)(plocal_var_230 + -8) +
                                        (int64_t)((int)uVar2 >> 10) * 8);
                              puVar13 = *(uint **)(lVar16 + 8);
                              local_var_134 = uVar1;
                              fStack_130 = fVar21;
                              if (puVar13 < *(uint **)(lVar16 + 0x10)) {
                                *(uint **)(lVar16 + 8) = puVar13 + 0xc;
                                *puVar13 = param_3;
                                *(int64_t **)(puVar13 + 2) = plVar10;
                                plocal_var_1f0 = puVar13;
                                (**(code **)(*plVar10 + 0x28))(plVar10);
                                *(int64_t **)(puVar13 + 4) = plVar9;
                                (**(code **)(*plVar9 + 0x28))(plVar9);
                                *(int64_t **)(puVar13 + 6) = plVar11;
                                if (plVar11 != (int64_t *)0x0) {
                                  (**(code **)(*plVar11 + 0x28))(plVar11);
                                }
                                puVar13[8] = uVar6;
                                puVar13[9] = uVar1;
                                puVar13[10] = (uint)fVar21;
                                plVar15 = plVar10;
                                plVar19 = plVar9;
                              }
                              else {
                                function_4de3f0(lVar16,stack_array_158);
                                plVar11 = plStack_140;
                                plVar15 = plStack_150;
                                plVar19 = plStack_148;
                              }
                              if (plVar11 != (int64_t *)0x0) {
                                (**(code **)(*plVar11 + 0x38))(plVar11);
                              }
                              if (plVar19 != (int64_t *)0x0) {
                                (**(code **)(*plVar19 + 0x38))(plVar19);
                              }
                              if (plVar15 != (int64_t *)0x0) {
                                (**(code **)(*plVar15 + 0x38))(plVar15);
                              }
                            }
                            iStack_244 = iStack_244 + 1;
                            lVar14 = lVar14 + 0x10;
                            lVar16 = plVar10[7];
                          } while ((uint64_t)(int64_t)iStack_244 <
                                   (uint64_t)(plVar10[8] - lVar16 >> 4));
                        }
                        iStack_248 = iStack_248 + 1;
                        plocal_var_230 = plocal_var_230 + 0x16;
                        lStack_228 = lStack_228 + 4;
                      } while (iStack_248 < 8);
                      iVar5 = (uint)plocal_var_238;
                    }
                    else {
                      iVar3 = (**(code **)(*plVar10 + 0x98))(plVar10);
                      if ((iVar3 != 1) &&
                         (iVar3 = (**(code **)(*plVar10 + 0x98))(plVar10), iVar3 == 4)) {
                        local_var_104 = 0xff;
                        local_var_108 = param_3;
                        plStack_100 = plVar9;
                        (**(code **)(*plVar9 + 0x28))(plVar9);
                        plStack_f8 = plVar10;
                        (**(code **)(*plVar10 + 0x28))(plVar10);
                        local_var_f0 = 0;
                        uVar6 = function_4dbf30(param_1 + 0x5b8);
                        plocal_var_238 = (uint *)CONCAT44(plocal_var_238._4_4_,uVar6);
                        function_4d0560((int64_t)(int)(*(uint *)(param_1 + 0x608) & uVar6) * 0x28 +
                                      *(int64_t *)
                                       (*(int64_t *)(param_1 + 0x5e8) +
                                       (int64_t)((int)uVar6 >> 10) * 8) + 8,&local_var_108);
                        SystemDatabaseProcessor((int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_3) * 0xd8
                                      + *(int64_t *)
                                         (*(int64_t *)(param_1 + 11000) + (int64_t)iVar4 * 8) +
                                        0x70,&plocal_var_238);
                        if (plVar10 != (int64_t *)0x0) {
                          (**(code **)(*plVar10 + 0x38))(plVar10);
                        }
                        (**(code **)(*plVar9 + 0x38))(plVar9);
                      }
                    }
                    iVar5 = iVar5 + 1;
                    plocal_var_238 = (uint *)CONCAT44(plocal_var_238._4_4_,iVar5);
                    plStack_220 = (int64_t *)((int64_t)plStack_220 + 8);
                    lVar14 = plVar9[6];
                  } while ((uint64_t)(int64_t)iVar5 < (uint64_t)(plVar9[7] - lVar14 >> 3));
                }
              }
            }
          }
        }
        iStackX_20 = iStackX_20 + 1;
        lStack_210 = lStack_210 + 1;
        lVar14 = *(int64_t *)(param_2 + 0xf0);
      } while ((uint64_t)(int64_t)iStackX_20 <
               (uint64_t)(*(int64_t *)(param_2 + 0xf8) - lVar14 >> 3));
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address