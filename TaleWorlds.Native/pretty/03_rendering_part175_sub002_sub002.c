#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part175_sub002_sub002.c - 1 个函数
// 函数: void function_375760(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
void function_375760(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
{
  float fVar1;
  uint *puVar2;
  int64_t *plVar3;
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
  int64_t lVar23;
  int64_t lVar24;
  int32_t *puVar25;
  int **ppiVar26;
  uint64_t uVar27;
  uint64_t *puVar28;
  int *piVar29;
  byte bVar30;
  uint64_t *puVar31;
  int64_t lVar32;
  int64_t lVar33;
  int32_t *puVar34;
  uint64_t uVar35;
  int32_t *puVar36;
  bool bVar37;
  int iVar38;
  int64_t lVar39;
  int64_t lVar40;
  int iVar41;
  uint uVar42;
  int64_t lVar43;
  int64_t lVar44;
  int iVar45;
  int iVar46;
  int64_t lVar47;
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
  uint64_t local_var_338;
  int64_t lStack_328;
  int64_t lStack_320;
  float fStack_318;
  int iStack_308;
  uint local_var_304;
  int8_t stack_array_2dc [4];
  int64_t lStack_2d8;
  int64_t lStack_2d0;
  uint64_t *plocal_var_2c8;
  int32_t local_var_2c0;
  int32_t local_var_2bc;
  int *piStack_2b8;
  int64_t lStack_2b0;
  int *piStack_2a8;
  int64_t lStack_2a0;
  int aiStack_298 [2];
  uint64_t local_var_290;
  int32_t local_var_270;
  int32_t local_var_26c;
  int32_t local_var_268;
  float fStack_264;
  int32_t local_var_250;
  int32_t local_var_24c;
  int32_t local_var_248;
  float fStack_244;
  int8_t stack_array_240 [24];
  uint64_t stack_array_228 [30];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  iVar45 = *(int *)(param_3 + 0x50);
  if (-1 < iVar45) {
    lVar43 = *(int64_t *)(render_system_data_memory + 0xd0) - *(int64_t *)(render_system_data_memory + 200) >> 3;
    if (iVar45 == lVar43) {
      iVar45 = (int)lVar43 + -1;
    }
    lVar43 = *(int64_t *)(*(int64_t *)(render_system_data_memory + 200) + (int64_t)iVar45 * 8);
    iVar45 = (int)(*(int *)(param_1 + 0x2154) + (*(int *)(param_1 + 0x2154) >> 0x1f & 3U)) >> 2;
    iVar18 = (int)(*(int *)(param_1 + 0x2158) + (*(int *)(param_1 + 0x2158) >> 0x1f & 3U)) >> 2;
    if (*(char *)(param_3 + 0x140) != '\0') {
      if (*(char *)(param_3 + 0x141) == '\0') {
        iVar20 = (int)((*(int64_t *)(param_3 + 0x88) - *(int64_t *)(param_3 + 0x80)) / 0x28);
      }
      else {
        iVar20 = (int)*(uint64_t *)(param_3 + 0x148);
      }
      if ((iVar20 != 0) && (*(int *)(param_3 + 0x54) != 0)) {
        lVar32 = 2;
        puVar28 = (uint64_t *)(param_2 + 0x30);
        puVar17 = stack_array_228;
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
        uVar6 = *(int32_t *)((int64_t)puVar22 + 0xa4);
        uVar7 = *(int32_t *)(puVar22 + 0x15);
        uVar8 = *(int32_t *)((int64_t)puVar22 + 0xac);
        puVar31[0x12] = uVar13;
        puVar31[0x13] = uVar14;
        uVar9 = *(int32_t *)(puVar22 + 0x16);
        uVar10 = *(int32_t *)((int64_t)puVar22 + 0xb4);
        uVar11 = *(int32_t *)(puVar22 + 0x17);
        uVar12 = *(int32_t *)((int64_t)puVar22 + 0xbc);
        *(int32_t *)(puVar31 + 0x14) = uVar5;
        *(int32_t *)((int64_t)puVar31 + 0xa4) = uVar6;
        *(int32_t *)(puVar31 + 0x15) = uVar7;
        *(int32_t *)((int64_t)puVar31 + 0xac) = uVar8;
        *(int32_t *)(puVar31 + 0x16) = uVar9;
        *(int32_t *)((int64_t)puVar31 + 0xb4) = uVar10;
        *(int32_t *)(puVar31 + 0x17) = uVar11;
        *(int32_t *)((int64_t)puVar31 + 0xbc) = uVar12;
        bVar30 = (byte)((uint)*(int32_t *)(lVar43 + 0x60) >> 0x18);
        uVar19 = 0x31;
        if ((~(bVar30 >> 4) & 1) == 0) {
          uVar19 = 1;
        }
        bVar30 = bVar30 >> 5 & 1;
        fStack_318 = ((float)*(int *)(SYSTEM_STATE_MANAGER + 0xe0) * 0.125 + 0.5) *
                     *(float *)(system_main_module_state + 0x3a4);
        if ((*(char *)(*(int64_t *)(param_1 + 0x2148) + 0x3f62) == '\0') ||
           (*(int *)(render_system_data_memory + 0x7e0) != 0)) {
          fStack_318 = 3.4028235e+38;
        }
        dVar4 = (double)function_629810();
        lVar32 = *(int64_t *)(param_2 + 0x3580);
        local_var_304 = 0;
        fVar54 = (float)dVar4;
        if (*(int *)(lVar32 + 0x110) != 0) {
          lStack_328 = 0;
          fVar51 = fStack_130;
          fVar53 = fStack_134;
          do {
            puVar2 = *(uint **)(lVar32 + 0x118 + lStack_328 * 8);
            if ((((*puVar2 & uVar19) != 0) && (puVar2[0x5e] != 3)) && ((puVar2[1] >> 0x18 & 1) == 0)
               ) {
              lVar32 = *(int64_t *)(puVar2 + 0xd60);
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
                      lVar32 = *(int64_t *)(param_3 + 0x138);
                      lVar40 = (int64_t)(*(int *)(param_3 + 0x60) * iStack_340 + iStack_344) *
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
                         (*(int64_t *)(lVar40 + 0x118 + lVar32) != 0)) {
                        bVar37 = true;
                      }
                      else {
                        bVar37 = false;
                      }
                      if (*(float *)(lVar44 + 0x30) != 0.0) {
                        if (bVar16) {
                          iVar20 = function_1b8ce0(*(int64_t *)(param_1 + 0x2148) + 0x2998,
                                                 puVar2 + 0xc,lVar33,lVar44,&system_data_0300,fVar55,1,
                                                 (byte)puVar2[0x6f6] >> 1 & 1);
                        }
                        else {
                          iVar20 = function_63c930(puVar2 + 0xc);
                        }
                        if (iVar20 != 0) {
                          if (bVar37) {
                            if ((bVar30 != 0) ||
                               (fVar50 * fVar50 + fVar48 * fVar48 + fVar49 * fVar49 <= fStack_318))
                            {
                              lVar44 = (int64_t)
                                       (*(int *)(param_3 + 0x60) * iStack_340 + iStack_344) * 0x130;
                              lVar33 = *(int64_t *)(param_3 + 0x138);
                              if (*(int *)(lVar44 + 0xf4 + lVar33) == 2) {
                                if ((*(uint *)(lVar43 + 0x60) & 0x800000) == 0) {
                                  *(int32_t *)(lVar44 + 0xf4 + lVar33) = 1;
                                  *(float *)((int64_t)
                                             (*(int *)(param_3 + 0x60) * iStack_340 + iStack_344) *
                                             0x130 + 0x128 + *(int64_t *)(param_3 + 0x138)) =
                                       fVar54;
                                }
                                else {
                                  *(int32_t *)(lVar44 + 0xf4 + lVar33) = 0;
                                }
                              }
                              lVar44 = (int64_t)
                                       (*(int *)(param_3 + 0x60) * iStack_340 + iStack_344) * 0x130;
                              lVar33 = *(int64_t *)(param_3 + 0x138);
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
                                for (lVar33 = *(int64_t *)(lVar40 + 0x100 + lVar32);
                                    lVar33 != lVar32 + 0xf8 + lVar40;
                                    lVar33 = SystemFunction_00018066bd70(lVar33)) {
                                  lVar44 = function_46c710(param_4,*(uint64_t *)(lVar33 + 0x20));
                                  lVar44 = *(int64_t *)(lVar44 + 0x18);
                                  lVar39 = ((int64_t)*(int *)(param_1 + 0x2140) * 0x20 + lStack_328
                                           ) * 0x100;
                                  iVar21 = (int)(*(int64_t *)(lVar33 + 0x30) -
                                                 *(int64_t *)(lVar33 + 0x28) >> 5);
                                  lVar23 = (int64_t)iVar21;
                                  if (0 < iVar21) {
                                    lVar24 = 0;
                                    do {
                                      puVar36 = *(int32_t **)(lVar39 + 0x18 + lVar44);
                                      puVar34 = (int32_t *)
                                                (*(int64_t *)(lVar33 + 0x28) + 0x10 + lVar24);
                                      local_var_250 = *puVar34;
                                      local_var_24c = puVar34[1];
                                      local_var_248 = puVar34[2];
                                      puVar34 = (int32_t *)
                                                (*(int64_t *)(lVar33 + 0x28) + lVar24);
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
                                        puVar36[4] = local_var_250;
                                        puVar36[5] = local_var_24c;
                                        puVar36[6] = local_var_248;
                                        puVar36[7] = fVar48;
                                      }
                                      else {
                                        puVar34 = *(int32_t **)(lVar39 + 0x10 + lVar44);
                                        lVar47 = (int64_t)puVar36 - (int64_t)puVar34 >> 5;
                                        if (lVar47 == 0) {
                                          lVar47 = 1;
LAB_1803760d1:
                                          puVar25 = (int32_t *)
                                                    CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar47 << 5,
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
                                                  (int64_t)puVar36 - (int64_t)puVar34);
                                        }
                                        *puVar25 = uVar5;
                                        puVar25[1] = uVar6;
                                        puVar25[2] = uVar7;
                                        puVar25[3] = uVar8;
                                        puVar25[4] = local_var_250;
                                        puVar25[5] = local_var_24c;
                                        puVar25[6] = local_var_248;
                                        puVar25[7] = fStack_244;
                                        if (*(int64_t *)(lVar39 + 0x10 + lVar44) != 0) {
// WARNING: Subroutine does not return
                                          CoreEngineMemoryPoolCleaner();
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
                              lVar44 = (int64_t)
                                       (*(int *)(param_3 + 0x60) * iStack_340 + iStack_344) * 0x130;
                              lVar33 = *(int64_t *)(param_3 + 0x138);
                              if (*(int *)(lVar44 + 0xf4 + lVar33) == 0) {
                                if ((*(uint *)(lVar43 + 0x60) & 0x800000) == 0) {
                                  *(int32_t *)(lVar44 + 0xf4 + lVar33) = 1;
                                  *(float *)((int64_t)
                                             (*(int *)(param_3 + 0x60) * iStack_340 + iStack_344) *
                                             0x130 + 0x128 + *(int64_t *)(param_3 + 0x138)) =
                                       fVar54;
                                }
                                else {
                                  *(int32_t *)(lVar44 + 0xf4 + lVar33) = 2;
                                }
                              }
                              bStack_348 = false;
                              lVar44 = (int64_t)
                                       (*(int *)(param_3 + 0x60) * iStack_340 + iStack_344) * 0x130;
                              lVar33 = *(int64_t *)(param_3 + 0x138);
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
                              for (lVar33 = *(int64_t *)(lVar40 + 0x100 + lVar32);
                                  lVar33 != lVar32 + 0xf8 + lVar40;
                                  lVar33 = SystemFunction_00018066bd70(lVar33)) {
                                lVar23 = function_46c710(param_4,*(uint64_t *)(lVar33 + 0x20));
                                lVar44 = *(int64_t *)(lVar23 + 0x18);
                                *(int32_t *)(lVar23 + 0xc) = 7;
                                local_var_338 = (uint64_t)
                                             (int)(*(int64_t *)(lVar33 + 0x30) -
                                                   *(int64_t *)(lVar33 + 0x28) >> 5);
                                lVar39 = ((int64_t)*(int *)(param_1 + 0x2140) * 0x20 + lStack_328)
                                         * 0x100;
                                lVar23 = *(int64_t *)(lVar39 + 0x10 + lVar44);
                                if ((uint64_t)(*(int64_t *)(lVar39 + 0x20 + lVar44) - lVar23 >> 5)
                                    < local_var_338) {
                                  if (local_var_338 == 0) {
                                    lVar24 = 0;
                                  }
                                  else {
                                    lVar24 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,local_var_338 << 5,
                                                           *(int8_t *)(lVar39 + 0x28 + lVar44));
                                    lVar23 = *(int64_t *)(lVar39 + 0x10 + lVar44);
                                  }
                                  lVar47 = *(int64_t *)(lVar39 + 0x18 + lVar44);
                                  if (lVar23 != lVar47) {
// WARNING: Subroutine does not return
                                    memmove(lVar24,lVar23,lVar47 - lVar23);
                                  }
                                  if (lVar23 != 0) {
// WARNING: Subroutine does not return
                                    CoreEngineMemoryPoolCleaner();
                                  }
                                  *(int64_t *)(lVar39 + 0x10 + lVar44) = lVar24;
                                  *(int64_t *)(lVar39 + 0x18 + lVar44) = lVar24;
                                  *(uint64_t *)(lVar39 + 0x20 + lVar44) =
                                       local_var_338 * 0x20 + lVar24;
                                }
                                if (0 < (int64_t)local_var_338) {
                                  lVar23 = 0;
                                  do {
                                    puVar36 = *(int32_t **)(lVar39 + 0x18 + lVar44);
                                    puVar34 = (int32_t *)
                                              (*(int64_t *)(lVar33 + 0x28) + 0x10 + lVar23);
                                    local_var_270 = *puVar34;
                                    local_var_26c = puVar34[1];
                                    local_var_268 = puVar34[2];
                                    puVar34 = (int32_t *)(*(int64_t *)(lVar33 + 0x28) + lVar23);
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
                                      puVar36[4] = local_var_270;
                                      puVar36[5] = local_var_26c;
                                      puVar36[6] = local_var_268;
                                      puVar36[7] = fVar52;
                                    }
                                    else {
                                      puVar34 = *(int32_t **)(lVar39 + 0x10 + lVar44);
                                      lVar24 = (int64_t)puVar36 - (int64_t)puVar34 >> 5;
                                      if (lVar24 == 0) {
                                        lVar24 = 1;
LAB_180375e41:
                                        puVar25 = (int32_t *)
                                                  CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar24 << 5,
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
                                                (int64_t)puVar36 - (int64_t)puVar34);
                                      }
                                      *puVar25 = uVar5;
                                      puVar25[1] = uVar6;
                                      puVar25[2] = uVar7;
                                      puVar25[3] = uVar8;
                                      puVar25[4] = local_var_270;
                                      puVar25[5] = local_var_26c;
                                      puVar25[6] = local_var_268;
                                      puVar25[7] = fStack_264;
                                      if (*(int64_t *)(lVar39 + 0x10 + lVar44) != 0) {
// WARNING: Subroutine does not return
                                        CoreEngineMemoryPoolCleaner();
                                      }
                                      *(int32_t **)(lVar39 + 0x10 + lVar44) = puVar25;
                                      *(int32_t **)(lVar39 + 0x20 + lVar44) =
                                           puVar25 + lVar24 * 8;
                                      *(int32_t **)(lVar39 + 0x18 + lVar44) = puVar25 + 8;
                                    }
                                    lVar23 = lVar23 + 0x20;
                                    local_var_338 = local_var_338 - 1;
                                  } while (local_var_338 != 0);
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
                              lVar32 = *(int64_t *)(param_3 + 0x110);
                              iVar41 = *(int *)(param_3 + 0x58) * iVar21 + iVar38;
                              uVar35 = (uint64_t)(int64_t)iVar41 %
                                       (uint64_t)*(uint *)(param_3 + 0x118);
                              for (piVar29 = *(int **)(lVar32 + uVar35 * 8); piVar29 != (int *)0x0;
                                  piVar29 = *(int **)(piVar29 + 4)) {
                                if (iVar41 == *piVar29) {
                                  if (piVar29 != (int *)0x0) {
                                    lVar33 = *(int64_t *)(param_3 + 0x118);
                                    piStack_2b8 = piVar29;
                                    ppiVar26 = &piStack_2b8;
                                    lStack_2b0 = lVar32 + uVar35 * 8;
                                    goto LAB_18037624d;
                                  }
                                  break;
                                }
                              }
                              lVar33 = *(int64_t *)(param_3 + 0x118);
                              piStack_2a8 = *(int **)(lVar32 + lVar33 * 8);
                              ppiVar26 = &piStack_2a8;
                              lStack_2a0 = lVar32 + lVar33 * 8;
LAB_18037624d:
                              if ((*ppiVar26 != *(int **)(lVar32 + lVar33 * 8)) &&
                                 (lVar32 = SystemCore_SecurityManager(param_3,iVar21,iVar38),
                                 *(int64_t *)(lVar32 + 0x108) != 0)) {
                                lVar32 = SystemCore_SecurityManager(param_3,iVar21,iVar38);
                                lVar33 = SystemCore_SecurityManager(param_3,iVar21,iVar38);
                                fVar48 = *(float *)(lVar32 + 0x38) - fStack_138;
                                fVar50 = *(float *)(lVar32 + 0x3c) - fVar53;
                                fVar49 = *(float *)(lVar32 + 0x40) - fVar51;
                                fVar48 = SQRT(fVar50 * fVar50 + fVar48 * fVar48 + fVar49 * fVar49) -
                                         *(float *)(lVar32 + 0x48);
                                if (((bVar30 == 0) || (fVar48 <= fVar1)) &&
                                   ((((-1 < *(int *)(lVar43 + 0x60) ||
                                      (0 < *(int *)(SYSTEM_STATE_MANAGER + 0xe0))) || (fVar48 <= 120.0))
                                    && (iVar41 = function_1b8ce0(*(int64_t *)(param_1 + 0x2148) +
                                                               0x2998,puVar2 + 0xc,lVar33 + 0x4c,
                                                               lVar32 + 0x18,&system_data_0300,
                                                               fVar55 + fVar55,iVar20 == 2,
                                                               (byte)puVar2[0x6f6] >> 1 & 1),
                                       iVar41 != 0)))) {
                                  lVar40 = SystemCore_SecurityManager(param_3,iVar21,iVar38);
                                  lVar33 = *(int64_t *)(param_3 + 0x110);
                                  lVar32 = lVar40 + 0x118;
                                  iVar41 = *(int *)(param_3 + 0x58) * iVar21 + iVar38;
                                  for (piVar29 = *(int **)(lVar33 + ((uint64_t)(int64_t)iVar41 %
                                                                    (uint64_t)
                                                                    *(uint *)(param_3 + 0x118)) * 8)
                                      ; piVar29 != (int *)0x0; piVar29 = *(int **)(piVar29 + 4)) {
                                    if (iVar41 == *piVar29) {
                                      lVar44 = *(int64_t *)(param_3 + 0x118);
                                      goto LAB_1803763e0;
                                    }
                                  }
                                  lVar44 = *(int64_t *)(param_3 + 0x118);
                                  piVar29 = *(int **)(lVar33 + lVar44 * 8);
LAB_1803763e0:
                                  lStack_2d0 = lVar32;
                                  if (piVar29 == *(int **)(lVar33 + lVar44 * 8)) {
                                    uVar27 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x178,8,3);
                                    aiStack_298[0] = iVar41;
                                    local_var_290 = SystemCore_SignalHandler(uVar27,*(uint64_t *)
                                                                       (param_3 + 0x68));
                                    puVar28 = (uint64_t *)
                                              SystemCore_MessageQueueManager(param_3 + 0x108,stack_array_240,aiStack_298)
                                    ;
                                    piVar29 = (int *)*puVar28;
                                    local_var_2c0 = *(int32_t *)(puVar28 + 1);
                                    local_var_2bc = *(int32_t *)((int64_t)puVar28 + 0xc);
                                  }
                                  lVar33 = *(int64_t *)(lVar40 + 0x120);
                                  plocal_var_2c8 = (uint64_t *)(*(int64_t *)(piVar29 + 2) + 0x148);
                                  if (lVar33 != lVar32) {
                                    do {
                                      plVar3 = *(int64_t **)(lVar33 + 0x20);
                                      puVar17 = (uint64_t *)plocal_var_2c8[2];
                                      puVar28 = plocal_var_2c8;
                                      while (puVar22 = puVar17, puVar22 != (uint64_t *)0x0) {
                                        if ((int64_t *)puVar22[4] < plVar3) {
                                          puVar17 = (uint64_t *)*puVar22;
                                        }
                                        else {
                                          puVar17 = (uint64_t *)puVar22[1];
                                          puVar28 = puVar22;
                                        }
                                      }
                                      if ((puVar28 == plocal_var_2c8) ||
                                         (plVar3 < (int64_t *)puVar28[4])) {
                                        puVar28 = (uint64_t *)function_37f530();
                                        puVar28 = (uint64_t *)*puVar28;
                                      }
                                      lVar32 = plVar3[0xb];
                                      iVar41 = (int)(*(int64_t *)(lVar33 + 0x30) -
                                                     *(int64_t *)(lVar33 + 0x28) >> 5);
                                      if (0 < iVar41) {
                                        lVar40 = function_46c710(param_4);
                                        lVar44 = 0;
                                        lVar40 = *(int64_t *)(lVar40 + 0x18) +
                                                 ((int64_t)*(int *)(param_1 + 0x2140) * 0x20 +
                                                 lStack_328) * 0x100 + 0x10;
                                        lStack_2d8 = (int64_t)iVar41;
                                        if (0 < iVar41) {
                                          lVar23 = 0;
                                          do {
                                            lVar39 = *(int64_t *)(lVar33 + 0x28);
                                            fVar49 = (float)modff(*(float *)(lVar23 + 4 + lVar39) +
                                                                  *(float *)(lVar23 + lVar39) +
                                                                  *(float *)(lVar23 + 8 + lVar39) +
                                                                  *(float *)(lVar23 + 0x18 + lVar39)
                                                                  ,stack_array_2dc);
                                            lVar39 = *(int64_t *)(lVar33 + 0x28);
                                            uVar42 = *(uint *)(lVar43 + 0x60);
                                            fVar51 = *(float *)(lVar23 + lVar39);
                                            fVar53 = *(float *)(lVar23 + 4 + lVar39);
                                            fVar48 = *(float *)(lVar23 + 8 + lVar39);
                                            if ((uVar42 >> 0x16 & 1) == 0) {
                                              fVar50 = 0.0;
                                            }
                                            else if (*(code **)(*plVar3 + 0x198) ==
                                                     (code *)&rendering_buffer_2544_ptr) {
                                              fVar50 = *(float *)((int64_t)plVar3 + 0x244);
                                            }
                                            else {
                                              lVar39 = (**(code **)(*plVar3 + 0x198))();
                                              uVar42 = *(uint *)(lVar43 + 0x60);
                                              fVar50 = *(float *)(lVar39 + 0x30);
                                            }
                                            if (*(int *)(render_system_data_memory + 0x7e0) == 0) {
                                              if ((*(int64_t *)(system_main_module_state + 0x3d8) == 0) ||
                                                 (*(int *)(*(int64_t *)(system_main_module_state + 0x3d8) +
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
                                                  iVar41 = (int)*(char *)((int64_t)(int)fVar51 + 8
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
                                                            (*(int64_t *)(lVar33 + 0x28) + lVar23);
                                                  lVar39 = (int64_t)iVar41 * 0x20 + lVar40;
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
                                                    *(int64_t *)(lVar39 + 8) =
                                                         *(int64_t *)(lVar39 + 8) + 0x20;
                                                  }
                                                  else {
                                                    function_37f6b0(lVar39);
                                                  }
                                                  lVar24 = (int64_t)iVar46 * 0x20 + lVar40;
                                                  *(float *)(*(int64_t *)(lVar39 + 8) + -4) =
                                                       fVar51;
                                                  puVar36 = (int32_t *)
                                                            (*(int64_t *)(lVar33 + 0x28) + lVar23);
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
                                                    *(int64_t *)(lVar24 + 8) =
                                                         *(int64_t *)(lVar24 + 8) + 0x20;
                                                  }
                                                  else {
                                                    function_37f6b0();
                                                  }
                                                  *(float *)(*(int64_t *)(lVar24 + 8) + -4) =
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
                                                        (*(int64_t *)(lVar33 + 0x28) + lVar23);
                                              lVar39 = (int64_t)iVar41 * 0x20 + lVar40;
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
                                                *(int64_t *)(lVar39 + 8) =
                                                     *(int64_t *)(lVar39 + 8) + 0x20;
                                              }
                                              else {
                                                function_37f6b0();
                                              }
                                            }
LAB_180376825:
                                            lVar44 = lVar44 + 1;
                                            lVar23 = lVar23 + 0x20;
                                          } while (lVar44 < lStack_2d8);
                                        }
                                      }
                                      lVar33 = SystemFunction_00018066bd70(lVar33);
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
            lVar32 = *(int64_t *)(param_2 + 0x3580);
            local_var_304 = local_var_304 + 1;
            lStack_328 = lStack_328 + 1;
          } while (local_var_304 < *(uint *)(lVar32 + 0x110));
        }
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address