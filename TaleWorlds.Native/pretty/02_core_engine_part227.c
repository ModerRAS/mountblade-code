/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part227.c - 2 个函数
// 函数: void function_19e260(int64_t param_1)
void function_19e260(int64_t param_1)
{
  float fVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int64_t *plVar8;
  uint uVar9;
  int64_t lVar10;
  uint64_t **ppuVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint uVar17;
  uint64_t uVar18;
  void *puVar19;
  uint64_t *puVar20;
  int64_t lVar21;
  uint64_t *puVar22;
  uint64_t *puVar23;
  uint64_t *puVar24;
  uint64_t local_var_198;
  float fStack_190;
  float fStack_18c;
  uint64_t local_var_188;
  int8_t stack_array_180 [8];
  void *plocal_var_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  int32_t local_var_160;
  int32_t local_var_15c;
  int32_t local_var_158;
  int64_t *plStack_150;
  int64_t alStack_148 [2];
  int iStack_138;
  int64_t lStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int32_t local_var_11c;
  int64_t lStack_118;
  int64_t *plStack_110;
  uint64_t *plocal_var_108;
  uint64_t *plocal_var_100;
  uint64_t *plocal_var_f8;
  int64_t *plStack_f0;
  uint64_t *plocal_var_e8;
  uint64_t *plocal_var_e0;
  uint64_t *plocal_var_d8;
  int64_t *plStack_d0;
  uint64_t local_var_c8;
  int64_t *plStack_c0;
  uint64_t local_var_b8;
  int64_t lStack_a8;
  int64_t *plStack_a0;
  uint64_t local_var_98;
  uint64_t local_var_88;
  int64_t *plStack_80;
  uint64_t local_var_78;
  uint64_t local_var_68;
  int8_t stack_array_60 [56];
  local_var_c8 = 0xfffffffffffffffe;
  lStack_118 = param_1;
  function_3986d0(param_1 + 0x607e0);
  puVar20 = (uint64_t *)0x0;
  alStack_148[0] = 0;
  alStack_148[0] = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x100000,0xd);
  LOCK();
  alStack_148[1] = 0;
  UNLOCK();
  iStack_138 = 0;
  function_1c2360(param_1 + 0x60830,&plStack_c0);
  lVar21 = param_1 + 0x60830;
  puVar24 = puVar20;
  do {
    uVar17 = (uint)puVar24;
    if (local_var_b8 == *(uint64_t *)(param_1 + 0x60838)) {
      local_var_160 = 0x3f800000;
      local_var_15c = 0x40000000;
      plStack_150 = alStack_148;
      local_var_170 = 1;
      plocal_var_178 = &system_data_0000;
      local_var_168 = 0;
      local_var_158 = 0;
      puVar24 = puVar20;
      local_var_198 = puVar20;
      lStack_130 = lVar21;
      if (uVar17 * 2 != 0) {
        uVar14 = (int64_t)(iStack_138 + 0xf) & 0xfffffffffffffff0;
        iStack_138 = (int)uVar14 + uVar17 * 0x10;
        local_var_198 = (uint64_t *)(alStack_148[0] + uVar14);
        puVar20 = local_var_198 + (int)(uVar17 * 2);
        puVar24 = local_var_198;
      }
      do {
        function_1c2360(lVar21);
        plVar8 = plStack_a0;
        uVar18 = local_var_98;
        uVar14 = local_var_88;
        puVar19 = plocal_var_178;
        puVar23 = puVar24;
LAB_18019e403:
        uVar15 = 0;
        if (uVar18 != *(uint64_t *)(lVar21 + 8)) {
          if (*(int64_t *)(uVar14 + 0x208) - *(int64_t *)(uVar14 + 0x200) >> 3 != 0) {
            puVar22 = *(uint64_t **)(puVar19 + local_var_170 * 8);
            for (puVar3 = *(uint64_t **)(puVar19 + (uVar14 % (local_var_170 & 0xffffffff)) * 8);
                puVar3 != (uint64_t *)0x0; puVar3 = (uint64_t *)puVar3[1]) {
              if (uVar14 == *puVar3) {
                plocal_var_108 = puVar3;
                plocal_var_100 = (uint64_t *)(puVar19 + (uVar14 % (local_var_170 & 0xffffffff)) * 8);
                ppuVar11 = &plocal_var_108;
                goto LAB_18019e46a;
              }
            }
            plocal_var_f8 = puVar22;
            plStack_f0 = (int64_t *)(puVar19 + local_var_170 * 8);
            ppuVar11 = &plocal_var_f8;
LAB_18019e46a:
            if (*ppuVar11 == puVar22) {
              puVar22 = puVar24;
              if (puVar20 <= puVar24) {
                lVar21 = (int64_t)puVar24 - (int64_t)puVar23 >> 3;
                if (lVar21 == 0) {
                  lVar21 = 1;
LAB_18019e4af:
                  uVar15 = (int64_t)(iStack_138 + 0xf) & 0xfffffffffffffff0;
                  iStack_138 = (int)uVar15 + (int)lVar21 * 8;
                  puVar22 = (uint64_t *)(alStack_148[0] + uVar15);
                }
                else {
                  lVar21 = lVar21 * 2;
                  if (lVar21 != 0) goto LAB_18019e4af;
                  puVar22 = (uint64_t *)0x0;
                }
                if (local_var_198 != puVar24) {
// WARNING: Subroutine does not return
                  memmove(puVar22);
                }
                puVar20 = puVar22 + lVar21;
                local_var_198 = puVar22;
              }
              *puVar22 = uVar14;
              puVar24 = puVar22 + 1;
              uVar15 = uVar14 % (local_var_170 & 0xffffffff);
              for (puVar22 = *(uint64_t **)(plocal_var_178 + uVar15 * 8); puVar23 = local_var_198,
                  puVar22 != (uint64_t *)0x0; puVar22 = (uint64_t *)puVar22[1]) {
                puVar19 = plocal_var_178;
                if (uVar14 == *puVar22) goto LAB_18019e5b4;
              }
              uVar16 = (int64_t)(int)plStack_150[2] + 0xfU & 0xfffffffffffffff0;
              *(int *)(plStack_150 + 2) = (int)uVar16 + 0x10;
              puVar22 = (uint64_t *)(*plStack_150 + uVar16);
              *puVar22 = uVar14;
              puVar22[1] = 0;
              RenderingShaderProcessor0(&local_var_160);
              if (fStack_190._0_1_ != '\0') {
                uVar15 = uVar14 % (uint64_t)(uint)fStack_18c;
                function_083b20(stack_array_180,fStack_18c);
              }
              puVar22[1] = *(uint64_t *)(plocal_var_178 + uVar15 * 8);
              *(uint64_t **)(plocal_var_178 + uVar15 * 8) = puVar22;
              local_var_168 = local_var_168 + 1;
              puVar19 = plocal_var_178;
            }
          }
LAB_18019e5b4:
          lVar2 = *plVar8;
          do {
            uVar18 = uVar18 + 1;
            lVar21 = (uVar18 & 0xffffffff) * 0x10;
            lVar10 = lVar21 + 8 + lVar2;
            if ((*(uint64_t *)(lVar21 + lVar2) & 0xffffffff00000000) == 0) {
              lVar10 = 0;
            }
            lVar21 = lStack_130;
            if (lVar10 != 0) {
              uVar14 = *(uint64_t *)(lVar2 + 8 + (uVar18 & 0xffffffff) * 0x10);
              break;
            }
          } while (uVar18 != plVar8[1]);
          goto LAB_18019e403;
        }
        uVar14 = (int64_t)puVar24 - (int64_t)puVar23 >> 3;
        puVar22 = puVar23;
        if (uVar14 == 0) {
          if (local_var_170 != 0) {
            do {
              *(uint64_t *)(puVar19 + uVar15 * 8) = 0;
              uVar15 = uVar15 + 1;
            } while (uVar15 < local_var_170);
          }
          local_var_168 = 0;
          do {
            function_1c2360(lVar21);
            plVar8 = plStack_80;
            uVar18 = local_var_78;
            uVar14 = local_var_68;
            puVar22 = puVar24;
            puVar19 = plocal_var_178;
            puVar24 = puVar23;
LAB_18019e681:
            lVar2 = lStack_118;
            uVar15 = 0;
            if (uVar18 != *(uint64_t *)(lVar21 + 8)) {
              if (*(int64_t *)(uVar14 + 0x208) - *(int64_t *)(uVar14 + 0x200) >> 3 != 0) {
                puVar23 = *(uint64_t **)(puVar19 + local_var_170 * 8);
                for (puVar3 = *(uint64_t **)(puVar19 + (uVar14 % (local_var_170 & 0xffffffff)) * 8);
                    puVar3 != (uint64_t *)0x0; puVar3 = (uint64_t *)puVar3[1]) {
                  if (uVar14 == *puVar3) {
                    plocal_var_e8 = puVar3;
                    plocal_var_e0 = (uint64_t *)(puVar19 + (uVar14 % (local_var_170 & 0xffffffff)) * 8);
                    ppuVar11 = &plocal_var_e8;
                    goto LAB_18019e6ea;
                  }
                }
                plocal_var_d8 = puVar23;
                plStack_d0 = (int64_t *)(puVar19 + local_var_170 * 8);
                ppuVar11 = &plocal_var_d8;
LAB_18019e6ea:
                if (*ppuVar11 == puVar23) {
                  puVar23 = puVar22;
                  if (puVar20 <= puVar22) {
                    lVar21 = (int64_t)puVar22 - (int64_t)puVar24 >> 3;
                    if (lVar21 == 0) {
                      lVar21 = 1;
LAB_18019e731:
                      uVar15 = (int64_t)(iStack_138 + 0xf) & 0xfffffffffffffff0;
                      iStack_138 = (int)uVar15 + (int)lVar21 * 8;
                      puVar23 = (uint64_t *)(alStack_148[0] + uVar15);
                    }
                    else {
                      lVar21 = lVar21 * 2;
                      if (lVar21 != 0) goto LAB_18019e731;
                      puVar23 = (uint64_t *)0x0;
                    }
                    if (local_var_198 != puVar22) {
// WARNING: Subroutine does not return
                      memmove(puVar23);
                    }
                    puVar20 = puVar23 + lVar21;
                    local_var_198 = puVar23;
                  }
                  *puVar23 = uVar14;
                  puVar22 = puVar23 + 1;
                  uVar15 = uVar14 % (local_var_170 & 0xffffffff);
                  for (puVar24 = *(uint64_t **)(plocal_var_178 + uVar15 * 8);
                      puVar24 != (uint64_t *)0x0; puVar24 = (uint64_t *)puVar24[1]) {
                    puVar19 = plocal_var_178;
                    lVar21 = lStack_130;
                    if (uVar14 == *puVar24) goto LAB_18019e833;
                  }
                  uVar16 = (int64_t)(int)plStack_150[2] + 0xfU & 0xfffffffffffffff0;
                  *(int *)(plStack_150 + 2) = (int)uVar16 + 0x10;
                  puVar24 = (uint64_t *)(*plStack_150 + uVar16);
                  *puVar24 = uVar14;
                  puVar24[1] = 0;
                  RenderingShaderProcessor0(&local_var_160,&local_var_188,local_var_170 & 0xffffffff,
                                local_var_168 & 0xffffffff,1);
                  if ((char)local_var_188 != '\0') {
                    uVar15 = uVar14 % (uint64_t)(uint)local_var_188._4_4_;
                    function_083b20(stack_array_180,local_var_188._4_4_);
                  }
                  puVar24[1] = *(uint64_t *)(plocal_var_178 + uVar15 * 8);
                  *(uint64_t **)(plocal_var_178 + uVar15 * 8) = puVar24;
                  local_var_168 = local_var_168 + 1;
                  puVar19 = plocal_var_178;
                  lVar21 = lStack_130;
                }
              }
LAB_18019e833:
              lVar2 = *plVar8;
              do {
                uVar18 = uVar18 + 1;
                lVar12 = (uVar18 & 0xffffffff) * 0x10;
                lVar10 = lVar12 + 8 + lVar2;
                if ((*(uint64_t *)(lVar12 + lVar2) & 0xffffffff00000000) == 0) {
                  lVar10 = 0;
                }
                puVar24 = local_var_198;
                if (lVar10 != 0) {
                  uVar14 = *(uint64_t *)(lVar2 + 8 + (uVar18 & 0xffffffff) * 0x10);
                  break;
                }
              } while (uVar18 != plVar8[1]);
              goto LAB_18019e681;
            }
            uVar14 = (int64_t)puVar22 - (int64_t)puVar24 >> 3;
            puVar22 = puVar24;
            if (uVar14 == 0) {
              if (local_var_170 != 0) {
                do {
                  *(uint64_t *)(plocal_var_178 + uVar15 * 8) = 0;
                  uVar15 = uVar15 + 1;
                } while (uVar15 < local_var_170);
              }
              local_var_168 = 0;
              if (alStack_148[0] != 0) {
// WARNING: Subroutine does not return
                CoreEngine_MemoryPoolManager();
              }
              alStack_148[0] = 0;
              if ((*(char *)(lStack_118 + 0x60c1c) != '\0') &&
                 (*(int *)(lStack_118 + 0x60c40) == -1)) {
                lVar21 = *(int64_t *)(lStack_118 + 0x60c48);
                local_var_11c = 0;
                lVar10 = *(int64_t *)(lVar21 + 0x60b80);
                if (lVar10 == 0) {
                  uVar4 = *(uint64_t *)(lVar21 + 0x464);
                  local_var_188._0_4_ = (float)uVar4;
                  fStack_190 = (float)*(uint64_t *)(lVar21 + 0x454);
                  fStack_190 = (float)local_var_188 + fStack_190;
                  local_var_188._4_4_ = (float)((uint64_t)uVar4 >> 0x20);
                  fStack_18c = (float)((uint64_t)*(uint64_t *)(lVar21 + 0x454) >> 0x20);
                  fStack_124 = local_var_188._4_4_ + fStack_18c;
                  local_var_188 = uVar4;
                }
                else {
                  fStack_190 = *(float *)(lVar10 + 0x20);
                  fStack_124 = *(float *)(lVar10 + 0x24);
                }
                fStack_128 = fStack_190 * 0.5;
                fStack_124 = fStack_124 * 0.5;
                fStack_120 = *(float *)(lVar21 + 0x46c) + 5.0;
                function_319320(lStack_118 + 0x60c10,&plStack_110,&fStack_128);
                if (plStack_110 != (int64_t *)0x0) {
                  (**(code **)(*plStack_110 + 0x38))();
                }
              }
              puVar13 = (uint64_t *)function_1a4e70(lVar2,stack_array_60);
              uVar4 = puVar13[1];
              *(uint64_t *)(lVar2 + 0x454) = *puVar13;
              *(uint64_t *)(lVar2 + 0x45c) = uVar4;
              uVar5 = *(int32_t *)((int64_t)puVar13 + 0x14);
              uVar6 = *(int32_t *)(puVar13 + 3);
              uVar7 = *(int32_t *)((int64_t)puVar13 + 0x1c);
              *(int32_t *)(lVar2 + 0x464) = *(int32_t *)(puVar13 + 2);
              *(int32_t *)(lVar2 + 0x468) = uVar5;
              *(int32_t *)(lVar2 + 0x46c) = uVar6;
              *(int32_t *)(lVar2 + 0x470) = uVar7;
              uVar5 = *(int32_t *)((int64_t)puVar13 + 0x24);
              uVar6 = *(int32_t *)(puVar13 + 5);
              uVar7 = *(int32_t *)((int64_t)puVar13 + 0x2c);
              *(int32_t *)(lVar2 + 0x474) = *(int32_t *)(puVar13 + 4);
              *(int32_t *)(lVar2 + 0x478) = uVar5;
              *(int32_t *)(lVar2 + 0x47c) = uVar6;
              *(int32_t *)(lVar2 + 0x480) = uVar7;
              *(int32_t *)(lVar2 + 0x484) = *(int32_t *)(puVar13 + 6);
              local_var_198 = *(uint64_t **)(lVar2 + 0x464);
              lVar21 = *(int64_t *)(lVar2 + 0x60b80);
              if (lVar21 != 0) {
                fVar1 = *(float *)(lVar21 + 0x20);
                if (*(float *)(lVar2 + 0x464) < fVar1) {
                  fVar1 = *(float *)(lVar2 + 0x464);
                }
                if (*(float *)(lVar21 + 0x24) <= *(float *)(lVar2 + 0x468)) {
                  local_var_198 = (uint64_t *)CONCAT44(*(float *)(lVar21 + 0x24),fVar1);
                }
                else {
                  local_var_198 = (uint64_t *)CONCAT44(*(float *)(lVar2 + 0x468),fVar1);
                }
              }
              *(uint64_t *)(lVar2 + 0x60b68) = *(uint64_t *)(lVar2 + 0x454);
              *(uint64_t **)(lVar2 + 0x60b70) = local_var_198;
              function_1b2460(lVar2);
              if ((*(char *)(lVar2 + 0x560) == '\0') &&
                 (lVar21 = *(int64_t *)(lVar2 + 0x448), lVar21 != 0)) {
                *(int32_t *)(lVar21 + 0x2150) =
                     *(int32_t *)(*(int64_t *)(lVar21 + 0x2148) + 0x3054);
                function_379810(lVar21);
                function_3769d0(lVar21);
                SystemCore_Controller(*(int64_t *)(lVar2 + 0x448) + 0x21e0);
                SystemCore_Controller(lVar2 + 0x81b0);
              }
              if (system_data_2847 == '\0') {
                function_1aedf0(lVar2);
              }
              return;
            }
            do {
              function_2f07e0(*puVar22);
              uVar17 = (int)uVar15 + 1;
              uVar15 = (uint64_t)uVar17;
              puVar22 = puVar22 + 1;
              puVar23 = puVar24;
            } while ((uint64_t)(int64_t)(int)uVar17 < uVar14);
          } while( true );
        }
        do {
          function_2f0f10(*puVar22);
          uVar17 = (int)uVar15 + 1;
          uVar15 = (uint64_t)uVar17;
          puVar22 = puVar22 + 1;
          puVar24 = puVar23;
        } while ((uint64_t)(int64_t)(int)uVar17 < uVar14);
      } while( true );
    }
    uVar9 = uVar17 + 1;
    if (*(int64_t *)(lStack_a8 + 0x208) - *(int64_t *)(lStack_a8 + 0x200) >> 3 == 0) {
      uVar9 = uVar17;
    }
    puVar24 = (uint64_t *)(uint64_t)uVar9;
    lVar2 = *plStack_c0;
    do {
      local_var_b8 = local_var_b8 + 1;
      lVar10 = (local_var_b8 & 0xffffffff) * 0x10;
      puVar23 = (uint64_t *)(lVar10 + 8 + lVar2);
      if ((*(uint64_t *)(lVar10 + lVar2) & 0xffffffff00000000) == 0) {
        puVar23 = puVar20;
      }
      if (puVar23 != (uint64_t *)0x0) {
        lStack_a8 = *(int64_t *)(lVar2 + 8 + (local_var_b8 & 0xffffffff) * 0x10);
        break;
      }
    } while (local_var_b8 != plStack_c0[1]);
  } while( true );
}
// 函数: void function_19eb00(int64_t param_1)
void function_19eb00(int64_t param_1)
{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uVar1 = *(uint64_t *)(param_1 + 0x10);
  lVar2 = *(int64_t *)(param_1 + 8);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      *(uint64_t *)(lVar2 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  return;
}