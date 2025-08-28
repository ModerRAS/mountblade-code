#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part189.c - 3 个函数
// 函数: void function_379810(int64_t param_1)
void function_379810(int64_t param_1)
{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t ******ppppppuVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  uint uVar14;
  ushort uVar15;
  int64_t lVar16;
  uint64_t *******pppppppuVar17;
  uint64_t *******pppppppuVar18;
  int *piVar19;
  int64_t *plVar20;
  uint64_t *puVar21;
  int32_t *puVar22;
  int64_t *plVar23;
  uint64_t *puVar24;
  int iVar25;
  int iVar26;
  uint64_t *puVar27;
  void *puVar28;
  uint64_t *puVar29;
  int64_t lVar30;
  int64_t lVar31;
  int32_t *puVar32;
  int64_t *plVar33;
  uint64_t uVar34;
  uint64_t uVar35;
  int32_t *puVar36;
  uint64_t *puVar37;
  int64_t lVar38;
  char *pcVar39;
  bool bVar40;
  int8_t auVar41 [16];
  int8_t auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  int iStackX_10;
  int64_t lStackX_18;
  int64_t lStackX_20;
  uint64_t *******ppppppplocal_var_188;
  uint64_t *******ppppppplocal_var_180;
  uint64_t *******ppppppplocal_var_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  int32_t local_var_160;
  uint64_t *******ppppppplocal_var_158;
  uint64_t *******ppppppplocal_var_150;
  uint64_t *******ppppppplocal_var_148;
  uint64_t local_var_140;
  uint64_t local_var_138;
  int32_t local_var_130;
  int64_t lStack_128;
  int64_t lStack_120;
  int64_t lStack_118;
  int64_t *plStack_110;
  int32_t local_var_108;
  int32_t local_var_104;
  int32_t local_var_100;
  int32_t local_var_fc;
  uint64_t local_var_f8;
  float fStack_f0;
  int32_t local_var_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint64_t local_var_d8;
  int64_t *plStack_d0;
  int64_t *plStack_c8;
  int8_t local_var_a0;
  uint8_t local_var_9f;
  local_var_d8 = 0xfffffffffffffffe;
  local_var_160 = 3;
  ppppppplocal_var_188 = &ppppppplocal_var_188;
  ppppppplocal_var_180 = &ppppppplocal_var_188;
  ppppppplocal_var_178 = (uint64_t *******)0x0;
  local_var_170 = 0;
  local_var_168 = 0;
  local_var_130 = 3;
  ppppppplocal_var_158 = &ppppppplocal_var_158;
  ppppppplocal_var_150 = &ppppppplocal_var_158;
  ppppppplocal_var_148 = (uint64_t *******)0x0;
  local_var_140 = 0;
  local_var_138 = 0;
  iStackX_10 = 0;
  plVar33 = (int64_t *)(param_1 + 0x21e0);
  plStack_110 = plVar33;
  lVar16 = *(int64_t *)(param_1 + 0x21e0);
  if (*(int64_t *)(param_1 + 0x21e8) - lVar16 >> 3 != 0) {
    lStackX_18 = 0;
    do {
      lVar16 = *(int64_t *)(lVar16 + lStackX_18);
      if (*(int *)(lVar16 + 0x50) != 0) {
        pcVar39 = (char *)(lVar16 + 0x40);
        puVar37 = (uint64_t *)(lVar16 + 0x20);
        plVar20 = (int64_t *)(param_1 + 0x2160);
        lVar38 = 4;
        do {
          if (*pcVar39 != '\0') {
            puVar29 = (uint64_t *)0x0;
            plVar23 = (int64_t *)*plVar20;
            uVar34 = plVar20[1] - (int64_t)plVar23 >> 3;
            iVar25 = 0;
            if (uVar34 != 0) {
              do {
                puVar2 = (uint64_t *)*plVar23;
                if ((((int)puVar2[6] == -1) && (*puVar2 != 0)) &&
                   (*(int *)(*puVar2 + 0x50) == *(int *)(lVar16 + 0x50))) {
                  puVar29 = puVar2;
                }
                iVar25 = iVar25 + 1;
                plVar23 = plVar23 + 1;
              } while ((uint64_t)(int64_t)iVar25 < uVar34);
              if (puVar29 != (uint64_t *)0x0) {
                *puVar37 = *puVar29;
                lVar16 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x28,3);
                ppppppuVar3 = (uint64_t ******)*puVar29;
                *(uint64_t *******)(lVar16 + 0x20) = ppppppuVar3;
                bVar40 = true;
                pppppppuVar18 = &ppppppplocal_var_188;
                pppppppuVar17 = ppppppplocal_var_178;
                while (pppppppuVar17 != (uint64_t *******)0x0) {
                  bVar40 = ppppppuVar3 < pppppppuVar17[4];
                  pppppppuVar18 = pppppppuVar17;
                  if (bVar40) {
                    pppppppuVar17 = (uint64_t *******)pppppppuVar17[1];
                  }
                  else {
                    pppppppuVar17 = (uint64_t *******)*pppppppuVar17;
                  }
                }
                pppppppuVar17 = pppppppuVar18;
                if (bVar40) {
                  if (pppppppuVar18 == ppppppplocal_var_180) goto LAB_180379a3f;
                  pppppppuVar17 = (uint64_t *******)Function_e2d50782(pppppppuVar18);
                }
                if (*(uint64_t *******)(lVar16 + 0x20) <= pppppppuVar17[4]) {
// WARNING: Subroutine does not return
                  CoreMemoryPoolInitializer(lVar16);
                }
LAB_180379a3f:
                if (((uint64_t ********)pppppppuVar18 == &ppppppplocal_var_188) ||
                   (*(uint64_t *******)(lVar16 + 0x20) < pppppppuVar18[4])) {
                  uVar35 = 0;
                }
                else {
                  uVar35 = 1;
                }
// WARNING: Subroutine does not return
                SystemStateController(lVar16,pppppppuVar18,&ppppppplocal_var_188,uVar35);
              }
            }
          }
          plVar20 = plVar20 + 4;
          puVar37 = puVar37 + 1;
          pcVar39 = pcVar39 + 1;
          lVar38 = lVar38 + -1;
        } while (lVar38 != 0);
      }
      iStackX_10 = iStackX_10 + 1;
      lStackX_18 = lStackX_18 + 8;
      lVar16 = *(int64_t *)(param_1 + 0x21e0);
    } while ((uint64_t)(int64_t)iStackX_10 <
             (uint64_t)(*(int64_t *)(param_1 + 0x21e8) - lVar16 >> 3));
  }
  plVar20 = (int64_t *)(param_1 + 0x2160);
  lVar16 = 4;
  plVar23 = plVar20;
  do {
    iVar25 = 0;
    lVar38 = *plVar23;
    if (plVar23[1] - lVar38 >> 3 != 0) {
      lVar31 = 0;
      do {
        puVar37 = *(uint64_t **)(lVar38 + lVar31);
        if (((int)puVar37[6] == -1) && (*(int *)(*puVar37 + 0x54) == 0)) {
          lVar16 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x28,3);
          ppppppuVar3 = (uint64_t ******)*puVar37;
          *(uint64_t *******)(lVar16 + 0x20) = ppppppuVar3;
          bVar40 = true;
          pppppppuVar18 = &ppppppplocal_var_188;
          pppppppuVar17 = ppppppplocal_var_178;
          while (pppppppuVar17 != (uint64_t *******)0x0) {
            bVar40 = ppppppuVar3 < pppppppuVar17[4];
            pppppppuVar18 = pppppppuVar17;
            if (bVar40) {
              pppppppuVar17 = (uint64_t *******)pppppppuVar17[1];
            }
            else {
              pppppppuVar17 = (uint64_t *******)*pppppppuVar17;
            }
          }
          pppppppuVar17 = pppppppuVar18;
          if (bVar40) {
            if (pppppppuVar18 == ppppppplocal_var_180) goto LAB_180379c5f;
            pppppppuVar17 = (uint64_t *******)Function_e2d50782(pppppppuVar18);
          }
          if (*(uint64_t *******)(lVar16 + 0x20) <= pppppppuVar17[4]) {
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer(lVar16);
          }
LAB_180379c5f:
          if (((uint64_t ********)pppppppuVar18 == &ppppppplocal_var_188) ||
             (*(uint64_t *******)(lVar16 + 0x20) < pppppppuVar18[4])) {
            uVar35 = 0;
          }
          else {
            uVar35 = 1;
          }
// WARNING: Subroutine does not return
          SystemStateController(lVar16,pppppppuVar18,&ppppppplocal_var_188,uVar35);
        }
        iVar25 = iVar25 + 1;
        lVar31 = lVar31 + 8;
        lVar38 = *plVar23;
      } while ((uint64_t)(int64_t)iVar25 < (uint64_t)(plVar23[1] - lVar38 >> 3));
    }
    plVar23 = plVar23 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  iVar25 = 0;
  lVar16 = *(int64_t *)(param_1 + 0x21e8);
  lVar38 = *plVar33;
  if (lVar16 - lVar38 >> 3 != 0) {
    do {
      iVar25 = iVar25 + 1;
      lVar16 = *(int64_t *)(param_1 + 0x21e8);
      lVar38 = *plVar33;
    } while ((uint64_t)(int64_t)iVar25 < (uint64_t)(lVar16 - lVar38 >> 3));
  }
  iVar25 = 0;
  if (lVar16 - lVar38 >> 3 != 0) {
    do {
      iVar25 = iVar25 + 1;
      lVar16 = *(int64_t *)(param_1 + 0x21e8);
      lVar38 = *plVar33;
    } while ((uint64_t)(int64_t)iVar25 < (uint64_t)(lVar16 - lVar38 >> 3));
  }
  iVar25 = 0;
  if (lVar16 - lVar38 >> 3 != 0) {
    do {
      iVar25 = iVar25 + 1;
      lVar16 = *(int64_t *)(param_1 + 0x21e8);
      lVar38 = *plVar33;
    } while ((uint64_t)(int64_t)iVar25 < (uint64_t)(lVar16 - lVar38 >> 3));
  }
  iVar25 = 0;
  if (lVar16 - lVar38 >> 3 != 0) {
    do {
      iVar25 = iVar25 + 1;
    } while ((uint64_t)(int64_t)iVar25 <
             (uint64_t)(*(int64_t *)(param_1 + 0x21e8) - *plVar33 >> 3));
  }
  lVar16 = 4;
  do {
    iVar25 = 0;
    lVar38 = *plVar20;
    if (plVar20[1] - lVar38 >> 3 != 0) {
      lVar30 = 0;
      lVar31 = lVar38;
      do {
        ppppppuVar3 = *(uint64_t *******)(lVar38 + lVar30);
        if (*(int *)(ppppppuVar3 + 6) == -1) {
          pppppppuVar18 = &ppppppplocal_var_158;
          pppppppuVar17 = ppppppplocal_var_148;
          if (ppppppplocal_var_148 == (uint64_t *******)0x0) {
LAB_18037a051:
            pppppppuVar18 = &ppppppplocal_var_158;
          }
          else {
            do {
              if (pppppppuVar17[4] < ppppppuVar3) {
                pppppppuVar17 = (uint64_t *******)*pppppppuVar17;
              }
              else {
                pppppppuVar18 = pppppppuVar17;
                pppppppuVar17 = (uint64_t *******)pppppppuVar17[1];
              }
            } while (pppppppuVar17 != (uint64_t *******)0x0);
            lVar38 = lVar31;
            if (((uint64_t ********)pppppppuVar18 == &ppppppplocal_var_158) ||
               (ppppppuVar3 < pppppppuVar18[4])) goto LAB_18037a051;
          }
          if ((uint64_t ********)pppppppuVar18 != &ppppppplocal_var_158) {
            (*ppppppuVar3)[0x11] = (*ppppppuVar3)[0x10];
            function_37ef00(*ppppppuVar3 + 0x10);
            lVar38 = *plVar20;
            lVar31 = lVar38;
          }
        }
        iVar25 = iVar25 + 1;
        lVar30 = lVar30 + 8;
      } while ((uint64_t)(int64_t)iVar25 < (uint64_t)(plVar20[1] - lVar38 >> 3));
    }
    plVar20 = plVar20 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  iStackX_10 = 0;
  lVar16 = *plVar33;
  if (*(int64_t *)(param_1 + 0x21e8) - lVar16 >> 3 != 0) {
    lStack_128 = 0;
    do {
      lVar16 = *(int64_t *)(lVar16 + lStack_128);
      lStack_120 = lVar16;
      if (*(int *)(lVar16 + 0x50) != 0) {
        pcVar39 = (char *)(lVar16 + 0x40);
        lStackX_20 = 0x68;
        piVar19 = (int *)(lVar16 + 0x10);
        plVar33 = (int64_t *)(param_1 + 0x2168);
        lStack_118 = 4;
        do {
          if (*pcVar39 != '\0') {
            iVar25 = *(int *)(lVar16 + 0x50);
            if (iVar25 < 0) {
              iVar26 = 0;
            }
            else {
              lVar38 = *(int64_t *)(render_system_data_memory + 0xd0) - *(int64_t *)(render_system_data_memory + 200) >>
                       3;
              iVar26 = (int)lVar38 + -1;
              if (iVar25 != lVar38) {
                iVar26 = iVar25;
              }
            }
            lVar38 = *(int64_t *)(*(int64_t *)(render_system_data_memory + 200) + (int64_t)iVar26 * 8);
            plVar20 = (int64_t *)0x0;
            iVar26 = 0;
            puVar24 = (uint64_t *)plVar33[-1];
            lVar31 = *plVar33 - (int64_t)puVar24;
            uVar34 = lVar31 >> 3;
            if (uVar34 == 0) {
LAB_18037a1d9:
              if (uVar34 < 0x100) {
                plVar20 = (int64_t *)
                          CoreMemoryPoolReallocator(system_memory_pool_ptr,0x38,8,CONCAT71((int7)(lVar31 >> 0xb),3));
                plStack_c8 = plVar20 + 2;
                *plStack_c8 = (int64_t)&system_state_ptr;
                plVar20[3] = 0;
                *(int32_t *)(plVar20 + 4) = 0;
                *plStack_c8 = (int64_t)&system_data_buffer_ptr;
                plVar20[5] = 0;
                plVar20[3] = 0;
                *(int32_t *)(plVar20 + 4) = 0;
                puVar28 = &system_buffer_ptr;
                if (*(void **)(lVar38 + 0x10) != (void *)0x0) {
                  puVar28 = *(void **)(lVar38 + 0x10);
                }
                plStack_d0 = plVar20;
                (**(code **)(*plStack_c8 + 0x10))(plStack_c8,puVar28);
                *(int32_t *)(plVar20 + 6) = 0xffffffff;
                *plVar20 = 0;
                uVar35 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x150,8,3);
                lVar31 = function_372600(uVar35,param_1);
                *plVar20 = lVar31;
                *(int *)(lVar31 + 0x50) = iVar25;
                *(uint64_t *)(*plVar20 + 0x88) = *(uint64_t *)(*plVar20 + 0x80);
                puVar24 = (uint64_t *)*plVar33;
                if (puVar24 < (uint64_t *)plVar33[1]) {
                  *plVar33 = (int64_t)(puVar24 + 1);
                  *puVar24 = plVar20;
                  goto LAB_18037a35a;
                }
                puVar27 = (uint64_t *)plVar33[-1];
                lVar16 = (int64_t)puVar24 - (int64_t)puVar27 >> 3;
                if (lVar16 == 0) {
                  lVar16 = 1;
LAB_18037a2de:
                  puVar21 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar16 * 8,(char)plVar33[2]);
                  puVar24 = (uint64_t *)*plVar33;
                  puVar27 = (uint64_t *)plVar33[-1];
                }
                else {
                  lVar16 = lVar16 * 2;
                  if (lVar16 != 0) goto LAB_18037a2de;
                  puVar21 = (uint64_t *)0x0;
                }
                if (puVar27 != puVar24) {
// WARNING: Subroutine does not return
                  memmove(puVar21,puVar27,(int64_t)puVar24 - (int64_t)puVar27);
                }
                *puVar21 = plVar20;
                if (plVar33[-1] != 0) {
// WARNING: Subroutine does not return
                  CoreMemoryPoolInitializer();
                }
                plVar33[-1] = (int64_t)puVar21;
                *plVar33 = (int64_t)(puVar21 + 1);
                plVar33[1] = (int64_t)(puVar21 + lVar16);
                lVar16 = lStack_120;
                goto LAB_18037a35a;
              }
              puVar28 = &system_buffer_ptr;
              if (*(void **)(lVar38 + 0x10) != (void *)0x0) {
                puVar28 = *(void **)(lVar38 + 0x10);
              }
              SystemCore_Allocator(&memory_allocator_3856_ptr,puVar28);
            }
            else {
              do {
                if (plVar20 != (int64_t *)0x0) goto LAB_18037a35a;
                plVar23 = (int64_t *)*puVar24;
                if ((((int)plVar23[6] == -1) && (*plVar23 != 0)) &&
                   (*(int *)(*plVar23 + 0x50) == iVar25)) {
                  plVar20 = plVar23;
                }
                iVar26 = iVar26 + 1;
                puVar24 = puVar24 + 1;
              } while ((uint64_t)(int64_t)iVar26 < uVar34);
              if (plVar20 == (int64_t *)0x0) goto LAB_18037a1d9;
LAB_18037a35a:
              lVar30 = 0x6666666666666667;
              lVar31 = *plVar20;
              puVar32 = (int32_t *)(lVar16 + 0x88);
              uVar10 = *puVar32;
              uVar11 = *(int32_t *)(lVar16 + 0x8c);
              uVar12 = *(int32_t *)(lVar16 + 0x90);
              uVar7 = *puVar32;
              uVar8 = *(int32_t *)(lVar16 + 0x8c);
              uVar9 = *(int32_t *)(lVar16 + 0x90);
              uVar4 = *puVar32;
              uVar5 = *(int32_t *)(lVar16 + 0x8c);
              uVar6 = *(int32_t *)(lVar16 + 0x90);
              fVar51 = SQRT(*(float *)(lVar16 + 0x58) * *(float *)(lVar16 + 0x58) +
                            *(float *)(lVar16 + 0x5c) * *(float *)(lVar16 + 0x5c) +
                            *(float *)(lVar16 + 0x60) * *(float *)(lVar16 + 0x60));
              AdvancedProcessor_StateManager0();
              fVar43 = fStack_e8 * fStack_e8;
              fVar45 = fStack_e4 * fStack_e4;
              fVar47 = fStack_e0 * fStack_e0;
              fVar48 = fStack_dc * fStack_dc;
              auVar41._4_4_ = fVar47;
              auVar41._0_4_ = fVar48;
              auVar41._8_4_ = fVar45;
              auVar41._12_4_ = fVar43;
              fVar44 = fVar43 + fVar48;
              fVar46 = fVar45 + fVar47;
              fVar49 = fVar44 + fVar47 + fVar45;
              fVar50 = fVar46 + fVar48 + fVar43;
              auVar42._4_4_ = fVar44 + fVar46 + 1.1754944e-38;
              auVar42._0_4_ = fVar46 + fVar44 + 1.1754944e-38;
              auVar42._8_4_ = fVar49 + 1.1754944e-38;
              auVar42._12_4_ = fVar50 + 1.1754944e-38;
              auVar42 = rsqrtps(auVar41,auVar42);
              fVar43 = auVar42._0_4_;
              fVar45 = auVar42._4_4_;
              fVar47 = auVar42._8_4_;
              fVar48 = auVar42._12_4_;
              fStack_e8 = fStack_e8 * (3.0 - fVar43 * fVar43 * (fVar46 + fVar44)) * fVar43 * 0.5;
              fStack_e4 = fStack_e4 * (3.0 - fVar45 * fVar45 * (fVar44 + fVar46)) * fVar45 * 0.5;
              fStack_e0 = fStack_e0 * (3.0 - fVar47 * fVar47 * fVar49) * fVar47 * 0.5;
              fStack_dc = fStack_dc * (3.0 - fVar48 * fVar48 * fVar50) * fVar48 * 0.5;
              uVar15 = Function_f3affc05();
              uVar34 = (uint64_t)uVar15 << 0x10;
              uVar15 = Function_f3affc05();
              uVar34 = (uVar34 | uVar15) << 0x10;
              uVar15 = Function_f3affc05();
              uVar34 = uVar34 | uVar15;
              uVar15 = Function_f3affc05();
              local_var_f8._4_4_ = (uint)(((uint64_t)uVar15 << 0x30) >> 0x20) | (uint)(uVar34 >> 0x20)
              ;
              uVar14 = local_var_f8._4_4_;
              uVar1 = *(int32_t *)(lVar16 + 0x18c);
              local_var_f8._0_4_ = (int32_t)uVar34;
              uVar13 = (int32_t)local_var_f8;
              local_var_ec = 0x3f800000;
              local_var_a0 = 0;
              if (*(uint *)(lVar16 + 0x54) <
                  (uint)(*(int64_t *)(*(int64_t *)(lStackX_20 + lVar38) + 0x10) -
                         *(int64_t *)(*(int64_t *)(lStackX_20 + lVar38) + 8) >> 3)) {
                local_var_a0 = (char)*(uint *)(lVar16 + 0x54);
              }
              puVar32 = *(int32_t **)(lVar31 + 0x88);
              local_var_108 = uVar4;
              local_var_104 = uVar5;
              local_var_100 = uVar6;
              local_var_fc = uVar1;
              fStack_f0 = fVar51;
              if (puVar32 < *(int32_t **)(lVar31 + 0x90)) {
                *(int32_t **)(lVar31 + 0x88) = puVar32 + 10;
                *puVar32 = uVar7;
                puVar32[1] = uVar8;
                puVar32[2] = uVar9;
                puVar32[3] = uVar1;
                puVar32[4] = (int32_t)local_var_f8;
                puVar32[5] = local_var_f8._4_4_;
                puVar32[6] = fVar51;
                puVar32[7] = 0x3f800000;
                *(uint64_t *)(puVar32 + 8) = CONCAT71(local_var_9f,local_var_a0);
                puVar32 = *(int32_t **)(lVar31 + 0x88);
              }
              else {
                puVar36 = *(int32_t **)(lVar31 + 0x80);
                lVar16 = SUB168(SEXT816(lVar30) * SEXT816((int64_t)puVar32 - (int64_t)puVar36),8);
                lVar16 = (lVar16 >> 4) - (lVar16 >> 0x3f);
                if (lVar16 == 0) {
                  lVar16 = 1;
LAB_18037a524:
                  puVar22 = (int32_t *)
                            CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar16 * 0x28,
                                          *(int8_t *)(lVar31 + 0x98));
                  puVar32 = *(int32_t **)(lVar31 + 0x88);
                  puVar36 = *(int32_t **)(lVar31 + 0x80);
                  lVar30 = 0x6666666666666667;
                }
                else {
                  lVar16 = lVar16 * 2;
                  if (lVar16 != 0) goto LAB_18037a524;
                  puVar22 = (int32_t *)0x0;
                }
                if (puVar36 != puVar32) {
// WARNING: Subroutine does not return
                  memmove(puVar22,puVar36,(int64_t)puVar32 - (int64_t)puVar36);
                }
                *puVar22 = uVar10;
                puVar22[1] = uVar11;
                puVar22[2] = uVar12;
                puVar22[3] = uVar1;
                puVar22[4] = uVar13;
                puVar22[5] = uVar14;
                puVar22[6] = fVar51;
                puVar22[7] = 0x3f800000;
                *(uint64_t *)(puVar22 + 8) = CONCAT71(local_var_9f,local_var_a0);
                puVar32 = puVar22 + 10;
                if (*(int64_t *)(lVar31 + 0x80) != 0) {
// WARNING: Subroutine does not return
                  CoreMemoryPoolInitializer();
                }
                *(int32_t **)(lVar31 + 0x80) = puVar22;
                *(int32_t **)(lVar31 + 0x88) = puVar32;
                *(int32_t **)(lVar31 + 0x90) = puVar22 + lVar16 * 10;
                lVar16 = lStack_120;
              }
              auVar42 = SEXT816(lVar30) * SEXT816((int64_t)puVar32 - *(int64_t *)(lVar31 + 0x80));
              *piVar19 = ((int)(auVar42._8_8_ >> 4) - (auVar42._12_4_ >> 0x1f)) + -1;
              *(int64_t *)(lStackX_20 + -0x48 + lVar16) = lVar31;
              function_372980(lVar31);
            }
            *pcVar39 = '\0';
          }
          plVar33 = plVar33 + 4;
          piVar19 = piVar19 + 1;
          lStackX_20 = lStackX_20 + 8;
          pcVar39 = pcVar39 + 1;
          lStack_118 = lStack_118 + -1;
        } while (lStack_118 != 0);
        lStack_118 = 0;
        plVar33 = plStack_110;
      }
      iStackX_10 = iStackX_10 + 1;
      lStack_128 = lStack_128 + 8;
      lVar16 = *plVar33;
    } while ((uint64_t)(int64_t)iStackX_10 < (uint64_t)(plVar33[1] - lVar16 >> 3));
  }
  SystemCore_Controller(plVar33);
  pppppppuVar17 = ppppppplocal_var_148;
  pppppppuVar18 = ppppppplocal_var_178;
  if (ppppppplocal_var_148 != (uint64_t *******)0x0) {
    SystemCache_Manager(&ppppppplocal_var_158,*ppppppplocal_var_148);
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(pppppppuVar17);
  }
  if (ppppppplocal_var_178 == (uint64_t *******)0x0) {
    return;
  }
  SystemCache_Manager(&ppppppplocal_var_188,*ppppppplocal_var_178);
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(pppppppuVar18);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_37a770(int64_t param_1,int64_t param_2)
void function_37a770(int64_t param_1,int64_t param_2)
{
  char cVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  void *puVar5;
  int iVar6;
  int8_t *puVar7;
  int8_t stack_array_3f8 [32];
  void *plocal_var_3d8;
  int8_t *plocal_var_3d0;
  uint local_var_3c8;
  uint64_t local_var_3c0;
  void *plocal_var_3b8;
  int64_t lStack_3b0;
  uint local_var_3a8;
  uint64_t local_var_3a0;
  int64_t *plStack_398;
  void *plocal_var_390;
  int64_t lStack_388;
  int iStack_380;
  int32_t local_var_378;
  void *plocal_var_370;
  int64_t lStack_368;
  int iStack_360;
  int32_t local_var_358;
  uint64_t local_var_350;
  int64_t lStack_348;
  int16_t local_var_338;
  int32_t local_var_334;
  int32_t local_var_330;
  int32_t local_var_32c;
  int32_t local_var_328;
  int32_t local_var_324;
  int32_t local_var_320;
  int64_t alStack_318 [3];
  int32_t local_var_300;
  uint64_t local_var_2f8;
  int32_t stack_array_2e8 [2];
  int64_t lStack_2e0;
  int64_t lStack_2d8;
  int16_t local_var_2d0;
  int8_t local_var_2ce;
  uint64_t local_var_2cc;
  uint64_t local_var_2c4;
  uint64_t local_var_2bc;
  uint64_t local_var_2b4;
  uint64_t local_var_2ac;
  uint64_t local_var_2a4;
  uint64_t local_var_29c;
  uint64_t local_var_294;
  uint64_t local_var_28c;
  int32_t local_var_284;
  int16_t local_var_280;
  int32_t local_var_27e;
  int8_t local_var_27a;
  void *aplocal_var_268 [68];
  uint64_t local_var_48;
  local_var_2f8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_3f8;
  plocal_var_3b8 = &system_data_buffer_ptr;
  local_var_3a0 = 0;
  lStack_3b0 = 0;
  local_var_3a8 = 0;
  puVar5 = &system_buffer_ptr;
  if (*(void **)(*system_main_module_state + 0x440) != (void *)0x0) {
    puVar5 = *(void **)(*system_main_module_state + 0x440);
  }
  CoreSystem_ConfigValidator0(&plocal_var_3b8,puVar5);
  iVar6 = local_var_3a8 + 0x11;
  CoreMemoryPoolProcessor(&plocal_var_3b8,iVar6);
  puVar4 = (int32_t *)((uint64_t)local_var_3a8 + lStack_3b0);
  *puVar4 = 0x6f6c462f;
  puVar4[1] = 0x69426172;
  puVar4[2] = 0x6f626c6c;
  puVar4[3] = 0x73647261;
  *(int16_t *)(puVar4 + 4) = 0x2f;
  local_var_3a8 = iVar6;
  lVar2 = SystemCore_EncryptionEngine(aplocal_var_268,&plocal_var_3b8);
  puVar5 = &system_buffer_ptr;
  if (*(void **)(lVar2 + 8) != (void *)0x0) {
    puVar5 = *(void **)(lVar2 + 8);
  }
  (**(code **)(plocal_var_3b8 + 0x10))(&plocal_var_3b8,puVar5);
  aplocal_var_268[0] = &system_state_ptr;
  cVar1 = UltraHighFreq_LogManager1(&plocal_var_3b8);
  if (cVar1 == '\0') {
    SystemManager_Processor(&plocal_var_3b8);
  }
  SystemCore_NetworkHandler0(&plocal_var_370,param_2 + 0x1f0);
  SystemCore_EncryptionEngine0(&plocal_var_390,param_1 + 0x10);
  plocal_var_3d8 = &system_data_buffer_ptr;
  local_var_3c0 = 0;
  plocal_var_3d0 = (int8_t *)0x0;
  local_var_3c8 = 0;
  CoreMemoryPoolProcessor(&plocal_var_3d8,local_var_3a8);
  if (local_var_3a8 != 0) {
// WARNING: Subroutine does not return
    memcpy(plocal_var_3d0,lStack_3b0,local_var_3a8 + 1);
  }
  if (lStack_3b0 != 0) {
    local_var_3c8 = 0;
    if (plocal_var_3d0 != (int8_t *)0x0) {
      *plocal_var_3d0 = 0;
    }
    local_var_3c0 = local_var_3c0 & 0xffffffff;
  }
  if (0 < iStack_360) {
    CoreMemoryPoolProcessor(&plocal_var_3d8,local_var_3c8 + iStack_360);
// WARNING: Subroutine does not return
    memcpy(plocal_var_3d0 + local_var_3c8,lStack_368,(int64_t)(iStack_360 + 1));
  }
  if (0 < iStack_380) {
    CoreMemoryPoolProcessor(&plocal_var_3d8,local_var_3c8 + iStack_380);
// WARNING: Subroutine does not return
    memcpy(plocal_var_3d0 + local_var_3c8,lStack_388,(int64_t)(iStack_380 + 1));
  }
  iVar6 = local_var_3c8 + 8;
  CoreMemoryPoolProcessor(&plocal_var_3d8,iVar6);
  *(uint64_t *)(plocal_var_3d0 + local_var_3c8) = 0x6863742e6e65672e;
  *(int8_t *)((int64_t)(plocal_var_3d0 + local_var_3c8) + 8) = 0;
  lStack_2e0 = 0;
  lStack_2d8 = 0;
  local_var_2d0 = 0;
  local_var_2ce = 3;
  local_var_27e = 0;
  local_var_28c = 0;
  local_var_284 = 0;
  local_var_280 = 0;
  local_var_27a = 0;
  local_var_2cc = 0;
  local_var_2c4 = 0;
  local_var_2bc = 0;
  local_var_2b4 = 0;
  local_var_2ac = 0;
  local_var_2a4 = 0;
  local_var_29c = 0;
  local_var_294 = 0;
  stack_array_2e8[0] = 0;
  local_var_3c8 = iVar6;
  uVar3 = SystemCore_Scheduler(param_1);
  function_0a5fc0(system_message_buffer,uVar3,&lStack_2e0);
  plStack_398 = alStack_318;
  alStack_318[0] = 0;
  alStack_318[1] = 0;
  alStack_318[2] = 0;
  local_var_300 = 3;
  local_var_338 = 0;
  local_var_334 = 0;
  local_var_330 = 0;
  local_var_32c = 0;
  local_var_328 = 0;
  local_var_324 = 0;
  local_var_320 = 0;
  function_2a8cf0(&plocal_var_390,2,&lStack_2e0);
  if (lStack_2d8 != 0) {
    local_var_350 = 0;
    lStack_348 = 0;
    puVar7 = &system_buffer_ptr;
    if (plocal_var_3d0 != (int8_t *)0x0) {
      puVar7 = plocal_var_3d0;
    }
    SystemCore_Validator(&local_var_350,puVar7,&processed_var_9772_ptr);
    lVar2 = lStack_348;
    if (lStack_348 != 0) {
      plStack_398 = (int64_t *)CONCAT44(plStack_398._4_4_,0x58);
      fwrite(&rendering_buffer_2980_ptr,4,1,lStack_348);
      fwrite(&rendering_buffer_2976_ptr,4,1,lVar2);
      fwrite(&plStack_398,4,1,lVar2);
      fwrite(stack_array_2e8,4,1,lVar2);
      fwrite(&local_var_2cc,0x58,1,lVar2);
      fwrite(lStack_2e0,lStack_2d8,1,lVar2);
      fclose(lVar2);
      lStack_348 = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
    }
  }
  plStack_398 = alStack_318;
  if (alStack_318[0] != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (local_var_2d0._1_1_ == '\0') {
    if (((char)local_var_2d0 == '\0') && (lStack_2e0 != 0)) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_2e0 = 0;
    lStack_2d8 = 0;
    local_var_2d0 = 0;
  }
  plocal_var_3d8 = &system_data_buffer_ptr;
  if (plocal_var_3d0 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_3d0 = (int8_t *)0x0;
  local_var_3c0 = local_var_3c0 & 0xffffffff00000000;
  plocal_var_3d8 = &system_state_ptr;
  plocal_var_390 = &system_data_buffer_ptr;
  if (lStack_388 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_388 = 0;
  local_var_378 = 0;
  plocal_var_390 = &system_state_ptr;
  plocal_var_370 = &system_data_buffer_ptr;
  if (lStack_368 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_368 = 0;
  local_var_358 = 0;
  plocal_var_370 = &system_state_ptr;
  plocal_var_3b8 = &system_data_buffer_ptr;
  if (lStack_3b0 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_3b0 = 0;
  local_var_3a0 = local_var_3a0 & 0xffffffff00000000;
  plocal_var_3b8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_3f8);
}
// 函数: void function_37ac70(int64_t param_1)
void function_37ac70(int64_t param_1)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uVar2 = SystemOptimizer();
  puVar1 = *(uint64_t **)(param_1 + 0x9650);
  if ((*(int *)(param_1 + 0x124e8) == 0) && (*(int *)(param_1 + 0x124ec) == 0)) {
    function_37a770(uVar2,puVar1[2]);
    lVar3 = function_275820(puVar1[4]);
    function_22cd30(*(uint64_t *)(lVar3 + 0x1b8),0,uVar2);
    *(int32_t *)*puVar1 = 1;
    return;
  }
  *(int32_t *)*puVar1 = 2;
  return;
}