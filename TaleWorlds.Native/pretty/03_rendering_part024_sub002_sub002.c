#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part024_sub002_sub002.c - 1 个函数
// 函数: void function_27dd70(uint64_t *******param_1,uint64_t *******param_2)
void function_27dd70(uint64_t *******param_1,uint64_t *******param_2)
{
  uint64_t *******pppppppuVar1;
  int64_t *plVar2;
  uint64_t *****pppppuVar3;
  code *pcVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t *puVar8;
  uint uVar9;
  int64_t lVar10;
  uint64_t ******ppppppuVar11;
  uint64_t ******ppppppuVar12;
  uint64_t uVar13;
  uint64_t *******pppppppuVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  int64_t *plVar17;
  uint64_t *puVar18;
  int64_t lVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t ******ppppppuVar22;
  void *puVar23;
  byte *pbVar24;
  int64_t *plVar25;
  uint64_t *puVar26;
  uint64_t *puVar27;
  uint64_t ******ppppppuVar28;
  uint64_t *******pppppppuVar29;
  uint64_t *puVar30;
  uint uVar31;
  uint64_t uVar32;
  uint64_t ******ppppppuVar33;
  uint *puVar34;
  int iVar35;
  int iVar36;
  uint64_t uVar37;
  uint64_t uVar38;
  int *piVar39;
  uint64_t ******ppppppstack_special_x_8;
  uint64_t ******ppppppstack_special_x_10;
  int iStackX_18;
  uint64_t ******ppppppstack_special_x_20;
  void *plocal_var_238;
  byte *pbStack_230;
  uint local_var_228;
  uint64_t local_var_220;
  int *piStack_218;
  int64_t *plStack_210;
  int64_t *plStack_208;
  uint64_t ******pppppplocal_var_200;
  uint64_t local_var_1f8;
  uint64_t ******pppppplocal_var_1e8;
  uint64_t *plocal_var_1d8;
  byte *pbStack_1d0;
  uint local_var_1c8;
  uint64_t local_var_1c0;
  uint64_t *plocal_var_1b8;
  uint64_t ******pppppplocal_var_1b0;
  uint64_t ******pppppplocal_var_1a8;
  int32_t local_var_1a0;
  uint64_t *plocal_var_198;
  int64_t lStack_190;
  uint64_t local_var_188;
  uint64_t local_var_180;
  uint64_t *plocal_var_170;
  uint64_t *plocal_var_168;
  uint64_t *plocal_var_160;
  int32_t local_var_158;
  uint64_t *plocal_var_150;
  uint64_t *plocal_var_148;
  uint64_t *plocal_var_140;
  uint64_t *plocal_var_138;
  int32_t local_var_130;
  uint64_t *plocal_var_128;
  uint64_t *plocal_var_120;
  uint64_t *plocal_var_118;
  int32_t local_var_110;
  int8_t stack_array_108 [8];
  int64_t *plStack_100;
  int64_t lStack_f8;
  uint64_t local_var_f0;
  int32_t local_var_e8;
  int32_t local_var_e4;
  int32_t local_var_e0;
  int32_t local_var_dc;
  int64_t *plStack_d8;
  int64_t lStack_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  void *plocal_var_b8;
  byte *pbStack_b0;
  uint local_var_a8;
  int32_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  int8_t stack_array_88 [8];
  uint64_t local_var_80;
  uint64_t local_var_70;
  uint64_t local_var_60;
  local_var_60 = 0xfffffffffffffffe;
  ppppppstack_special_x_8 = (uint64_t ******)param_1;
  if ((0 < *(int *)(param_1 + 0xb)) && (*(int *)(param_1 + 0xb) < *(int *)(param_2 + 0xb))) {
    *(int *)(param_1 + 0xb) = *(int *)(param_2 + 0xb);
    function_278270();
  }
  if ((0 < *(int *)(param_2 + 0xb)) && (*(int *)(param_2 + 0xb) < *(int *)(param_1 + 0xb))) {
    *(int *)(param_2 + 0xb) = *(int *)(param_1 + 0xb);
    function_278270(param_2);
  }
  ppppppuVar12 = param_2[7];
  if (((int64_t)param_2[8] - (int64_t)ppppppuVar12 & 0xfffffffffffffff0U) != 0) {
    for (; ppppppuVar12 < param_2[8]; ppppppuVar12 = ppppppuVar12 + 2) {
      if (((uint64_t)ppppppuVar12[1] & 1) != 0) {
        if (*ppppppuVar12 != (uint64_t *****)0x0) goto LAB_18027de2e;
        break;
      }
    }
    ppppppuVar12 = (uint64_t ******)&system_buffer_ptr;
    if (param_2[0x3f] != (uint64_t ******)0x0) {
      ppppppuVar12 = param_2[0x3f];
    }
    SystemDataInitializer(&processed_var_9120_ptr,ppppppuVar12);
  }
LAB_18027de2e:
  pppppppuVar29 = param_1 + 7;
  if ((((int64_t)param_1[8] - (int64_t)*pppppppuVar29 & 0xfffffffffffffff0U) != 0) ||
     (((int64_t)param_2[8] - (int64_t)param_2[7] & 0xfffffffffffffff0U) != 0)) {
    uVar37 = 0;
    local_var_e8 = 0x3f800000;
    local_var_e4 = 0x40000000;
    local_var_dc = 3;
    lStack_f8 = 1;
    plStack_100 = (int64_t *)&system_data_0000;
    local_var_f0 = 0;
    local_var_e0 = 0;
    ppppppuVar22 = param_2[7];
    lVar19 = (int64_t)param_2[8] - (int64_t)ppppppuVar22 >> 4;
    ppppppuVar12 = *pppppppuVar29;
    lVar10 = (int64_t)param_1[8] - (int64_t)ppppppuVar12 >> 4;
    pppppplocal_var_1e8 = (uint64_t ******)pppppppuVar29;
    if (lVar19 == 0) {
      uVar38 = uVar37;
      pppppppuVar29 = param_1;
      if (lVar10 != 0) {
        do {
          local_var_188 = pppppppuVar29;
          ppppppuVar22 = pppppplocal_var_1e8;
          ppppppstack_special_x_10 =
               (uint64_t ******)
               CONCAT44(ppppppstack_special_x_10._4_4_,*(int32_t *)((int64_t)ppppppuVar12 + uVar38 + 8))
          ;
          function_284830(stack_array_108,&pppppplocal_var_200);
          ppppppuVar12 = pppppplocal_var_200;
          lVar10 = function_079430(*(uint64_t *)(uVar38 + (int64_t)*ppppppuVar22));
          plocal_var_238 = &system_data_buffer_ptr;
          local_var_220 = 0;
          pbStack_230 = (byte *)0x0;
          local_var_228 = 0;
          CoreEngineDataBufferProcessor(&plocal_var_238,*(int32_t *)(lVar10 + 0x10));
          if (0 < *(int *)(lVar10 + 0x10)) {
            puVar23 = &system_buffer_ptr;
            if (*(void **)(lVar10 + 8) != (void *)0x0) {
              puVar23 = *(void **)(lVar10 + 8);
            }
// WARNING: Subroutine does not return
            memcpy(pbStack_230,puVar23,(int64_t)(*(int *)(lVar10 + 0x10) + 1));
          }
          if ((*(int64_t *)(lVar10 + 8) != 0) && (local_var_228 = 0, pbStack_230 != (byte *)0x0)) {
            *pbStack_230 = 0;
          }
          pbVar24 = &system_buffer_ptr;
          if (pbStack_230 != (byte *)0x0) {
            pbVar24 = pbStack_230;
          }
          uVar20 = 0xcbf29ce484222325;
          uVar31 = 0;
          if (local_var_228 != 0) {
            do {
              uVar20 = (uVar20 ^ *pbVar24) * 0x100000001b3;
              uVar31 = uVar31 + 1;
              pbVar24 = pbVar24 + 1;
            } while (uVar31 < local_var_228);
          }
          function_284a50(ppppppuVar12 + 1,&pppppplocal_var_200,uVar31,&plocal_var_238,uVar20);
          ppppppuVar22 = pppppplocal_var_200;
          local_var_180 = *(uint64_t *)(uVar38 + (int64_t)*pppppplocal_var_1e8);
          ppppppuVar12 = (uint64_t ******)pppppplocal_var_200[5];
          if (ppppppuVar12 < pppppplocal_var_200[6]) {
            pppppplocal_var_200[5] = (uint64_t *****)(ppppppuVar12 + 2);
            local_var_180._4_4_ = (int32_t)((uint64_t)local_var_180 >> 0x20);
            *(int32_t *)ppppppuVar12 = (int32_t)local_var_188;
            *(int32_t *)((int64_t)ppppppuVar12 + 4) = local_var_188._4_4_;
            *(int32_t *)(ppppppuVar12 + 1) = (int32_t)local_var_180;
            *(int32_t *)((int64_t)ppppppuVar12 + 0xc) = local_var_180._4_4_;
          }
          else {
            ppppppuVar33 = (uint64_t ******)pppppplocal_var_200[4];
            lVar10 = (int64_t)ppppppuVar12 - (int64_t)ppppppuVar33 >> 4;
            if (lVar10 == 0) {
              lVar10 = 1;
LAB_18027e092:
              ppppppuVar11 = (uint64_t ******)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 << 4);
              ppppppuVar12 = (uint64_t ******)ppppppuVar22[5];
              ppppppuVar33 = (uint64_t ******)ppppppuVar22[4];
              ppppppuVar28 = ppppppuVar11;
            }
            else {
              lVar10 = lVar10 * 2;
              if (lVar10 != 0) goto LAB_18027e092;
              ppppppuVar11 = (uint64_t ******)0x0;
              ppppppuVar28 = ppppppuVar11;
            }
            for (; ppppppuVar33 != ppppppuVar12; ppppppuVar33 = ppppppuVar33 + 2) {
              pppppuVar3 = ppppppuVar33[1];
              *ppppppuVar11 = *ppppppuVar33;
              ppppppuVar11[1] = pppppuVar3;
              ppppppuVar11 = ppppppuVar11 + 2;
            }
            *(int32_t *)ppppppuVar11 = (int32_t)local_var_188;
            *(int32_t *)((int64_t)ppppppuVar11 + 4) = local_var_188._4_4_;
            *(int32_t *)(ppppppuVar11 + 1) = (int32_t)local_var_180;
            *(int32_t *)((int64_t)ppppppuVar11 + 0xc) = local_var_180._4_4_;
            if ((uint64_t ******)ppppppuVar22[4] != (uint64_t ******)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            ppppppuVar22[4] = (uint64_t *****)ppppppuVar28;
            ppppppuVar22[5] = (uint64_t *****)(ppppppuVar11 + 2);
            ppppppuVar22[6] = (uint64_t *****)(ppppppuVar28 + lVar10 * 2);
          }
          plocal_var_238 = &system_data_buffer_ptr;
          if (pbStack_230 != (byte *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          pbStack_230 = (byte *)0x0;
          local_var_220 = local_var_220 & 0xffffffff00000000;
          plocal_var_238 = &system_state_ptr;
          uVar31 = (int)uVar37 + 1;
          uVar37 = (uint64_t)uVar31;
          ppppppuVar12 = (uint64_t ******)*pppppplocal_var_1e8;
          uVar38 = uVar38 + 0x10;
          pppppppuVar29 = local_var_188;
        } while ((uint64_t)(int64_t)(int)uVar31 <
                 (uint64_t)((int64_t)pppppplocal_var_1e8[1] - (int64_t)ppppppuVar12 >> 4));
      }
    }
    else if (lVar10 == 0) {
      uVar38 = uVar37;
      uVar20 = uVar37;
      pppppppuVar29 = param_2;
      if (lVar19 != 0) {
        do {
          pppppplocal_var_200 = (uint64_t ******)pppppppuVar29;
          iVar35 = *(int *)(uVar38 + 8 + (int64_t)ppppppuVar22);
          ppppppstack_special_x_10 = (uint64_t ******)CONCAT44(ppppppstack_special_x_10._4_4_,iVar35);
          function_284830(stack_array_108,&local_var_188,ppppppuVar22,&ppppppstack_special_x_10,(int64_t)iVar35);
          pppppppuVar29 = local_var_188;
          uVar13 = function_079430(*(uint64_t *)(uVar38 + (int64_t)param_2[7]));
          SystemCore_EncryptionEngine0(&plocal_var_b8,uVar13);
          pbVar24 = &system_buffer_ptr;
          if (pbStack_b0 != (byte *)0x0) {
            pbVar24 = pbStack_b0;
          }
          uVar21 = 0xcbf29ce484222325;
          uVar32 = uVar37;
          if (local_var_a8 != 0) {
            do {
              uVar21 = (uVar21 ^ *pbVar24) * 0x100000001b3;
              uVar31 = (int)uVar32 + 1;
              uVar32 = (uint64_t)uVar31;
              pbVar24 = pbVar24 + 1;
            } while (uVar31 < local_var_a8);
          }
          function_284a50(pppppppuVar29 + 1,&local_var_188,uVar32,&plocal_var_b8,uVar21);
          local_var_1f8 = *(uint64_t *)(uVar38 + (int64_t)param_2[7]);
          function_284cf0(local_var_188 + 4,&pppppplocal_var_200);
          plocal_var_b8 = &system_data_buffer_ptr;
          if (pbStack_b0 != (byte *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          pbStack_b0 = (byte *)0x0;
          local_var_a0 = 0;
          plocal_var_b8 = &system_state_ptr;
          uVar31 = (int)uVar20 + 1;
          ppppppuVar22 = param_2[7];
          uVar38 = uVar38 + 0x10;
          uVar20 = (uint64_t)uVar31;
          pppppppuVar29 = (uint64_t *******)pppppplocal_var_200;
        } while ((uint64_t)(int64_t)(int)uVar31 <
                 (uint64_t)((int64_t)param_2[8] - (int64_t)ppppppuVar22 >> 4));
      }
    }
    else {
      ppppppstack_special_x_20 = (uint64_t ******)((uint64_t)ppppppstack_special_x_20 & 0xffffffff00000000);
      if (lVar10 != 0) {
        plStack_210 = (int64_t *)0x0;
        do {
          piStack_218 = (int *)CONCAT44(piStack_218._4_4_,
                                        *(uint *)((int64_t)(ppppppuVar12 + 1) +
                                                 (int64_t)plStack_210));
          iStackX_18 = 0;
          ppppppuVar22 = param_2[7];
          plVar17 = plStack_210;
          iVar35 = (int)uVar37;
          if ((int64_t)param_2[8] - (int64_t)ppppppuVar22 >> 4 != 0) {
            plStack_208 = (int64_t *)0x0;
            uVar31 = *(uint *)((int64_t)(ppppppuVar12 + 1) + (int64_t)plStack_210);
            do {
              plVar25 = plStack_208;
              uVar31 = *(uint *)((int64_t)plStack_208 + 8 + (int64_t)ppppppuVar22) & uVar31;
              ppppppstack_special_x_10 = (uint64_t ******)CONCAT44(ppppppstack_special_x_10._4_4_,uVar31);
              if (uVar31 != 0) {
                function_284830(stack_array_108,&pppppplocal_var_200,iStackX_18,&ppppppstack_special_x_10,
                              (int64_t)(int)uVar31);
                ppppppuVar12 = pppppplocal_var_200;
                lVar10 = function_079430(*(uint64_t *)((int64_t)plVar17 + (int64_t)*pppppppuVar29)
                                      );
                plocal_var_238 = &system_data_buffer_ptr;
                local_var_220 = 0;
                pbStack_230 = (byte *)0x0;
                local_var_228 = 0;
                CoreEngineDataBufferProcessor(&plocal_var_238,*(int32_t *)(lVar10 + 0x10));
                if (0 < *(int *)(lVar10 + 0x10)) {
                  puVar23 = &system_buffer_ptr;
                  if (*(void **)(lVar10 + 8) != (void *)0x0) {
                    puVar23 = *(void **)(lVar10 + 8);
                  }
// WARNING: Subroutine does not return
                  memcpy(pbStack_230,puVar23,(int64_t)(*(int *)(lVar10 + 0x10) + 1));
                }
                if ((*(int64_t *)(lVar10 + 8) != 0) && (local_var_228 = 0, pbStack_230 != (byte *)0x0)
                   ) {
                  *pbStack_230 = 0;
                }
                pbVar24 = &system_buffer_ptr;
                if (pbStack_230 != (byte *)0x0) {
                  pbVar24 = pbStack_230;
                }
                uVar37 = 0xcbf29ce484222325;
                uVar31 = 0;
                if (local_var_228 != 0) {
                  do {
                    uVar37 = (uVar37 ^ *pbVar24) * 0x100000001b3;
                    uVar31 = uVar31 + 1;
                    pbVar24 = pbVar24 + 1;
                  } while (uVar31 < local_var_228);
                }
                function_284a50(ppppppuVar12 + 1,&pppppplocal_var_200,uVar31,&plocal_var_238,uVar37);
                ppppppuVar22 = pppppplocal_var_200;
                local_var_180 = *(uint64_t *)((int64_t)plStack_210 + (int64_t)*pppppplocal_var_1e8);
                local_var_188 = (uint64_t *******)ppppppstack_special_x_8;
                pppppppuVar29 = local_var_188;
                ppppppuVar12 = (uint64_t ******)pppppplocal_var_200[5];
                if (ppppppuVar12 < pppppplocal_var_200[6]) {
                  pppppplocal_var_200[5] = (uint64_t *****)(ppppppuVar12 + 2);
                  local_var_188._0_4_ = SUB84(ppppppstack_special_x_8,0);
                  local_var_188._4_4_ = (int32_t)((uint64_t)ppppppstack_special_x_8 >> 0x20);
                  local_var_180._4_4_ = (int32_t)((uint64_t)local_var_180 >> 0x20);
                  *(int32_t *)ppppppuVar12 = (int32_t)local_var_188;
                  *(int32_t *)((int64_t)ppppppuVar12 + 4) = local_var_188._4_4_;
                  *(int32_t *)(ppppppuVar12 + 1) = (int32_t)local_var_180;
                  *(int32_t *)((int64_t)ppppppuVar12 + 0xc) = local_var_180._4_4_;
                  local_var_188 = pppppppuVar29;
                }
                else {
                  ppppppuVar33 = (uint64_t ******)pppppplocal_var_200[4];
                  lVar10 = (int64_t)ppppppuVar12 - (int64_t)ppppppuVar33 >> 4;
                  if (lVar10 == 0) {
                    lVar10 = 1;
LAB_18027e4b2:
                    ppppppuVar11 = (uint64_t ******)
                                   CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 << 4,
                                                 *(int8_t *)(pppppplocal_var_200 + 7));
                    ppppppuVar12 = (uint64_t ******)ppppppuVar22[5];
                    ppppppuVar33 = (uint64_t ******)ppppppuVar22[4];
                    ppppppuVar28 = ppppppuVar11;
                  }
                  else {
                    lVar10 = lVar10 * 2;
                    if (lVar10 != 0) goto LAB_18027e4b2;
                    ppppppuVar11 = (uint64_t ******)0x0;
                    ppppppuVar28 = ppppppuVar11;
                  }
                  for (; ppppppuVar33 != ppppppuVar12; ppppppuVar33 = ppppppuVar33 + 2) {
                    pppppuVar3 = ppppppuVar33[1];
                    *ppppppuVar11 = *ppppppuVar33;
                    ppppppuVar11[1] = pppppuVar3;
                    ppppppuVar11 = ppppppuVar11 + 2;
                  }
                  *(int32_t *)ppppppuVar11 = (int32_t)local_var_188;
                  *(int32_t *)((int64_t)ppppppuVar11 + 4) = local_var_188._4_4_;
                  *(int32_t *)(ppppppuVar11 + 1) = (int32_t)local_var_180;
                  *(int32_t *)((int64_t)ppppppuVar11 + 0xc) = local_var_180._4_4_;
                  if ((uint64_t ******)ppppppuVar22[4] != (uint64_t ******)0x0) {
// WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                  ppppppuVar22[4] = (uint64_t *****)ppppppuVar28;
                  ppppppuVar22[5] = (uint64_t *****)(ppppppuVar11 + 2);
                  ppppppuVar22[6] = (uint64_t *****)(ppppppuVar28 + lVar10 * 2);
                  plVar25 = plStack_208;
                }
                plocal_var_238 = &system_data_buffer_ptr;
                if (pbStack_230 != (byte *)0x0) {
// WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                pbStack_230 = (byte *)0x0;
                local_var_220 = local_var_220 & 0xffffffff00000000;
                plocal_var_238 = &system_state_ptr;
                function_284830(stack_array_108,&pppppplocal_var_200);
                ppppppuVar22 = pppppplocal_var_200;
                lVar10 = function_079430(*(uint64_t *)((int64_t)plVar25 + (int64_t)param_2[7]));
                ppppppuVar12 = (uint64_t ******)0x0;
                plocal_var_1d8 = (uint64_t *)&system_data_buffer_ptr;
                local_var_1c0 = 0;
                pbStack_1d0 = (byte *)0x0;
                local_var_1c8 = 0;
                CoreEngineDataBufferProcessor(&plocal_var_1d8,*(int32_t *)(lVar10 + 0x10));
                if (0 < *(int *)(lVar10 + 0x10)) {
                  puVar23 = &system_buffer_ptr;
                  if (*(void **)(lVar10 + 8) != (void *)0x0) {
                    puVar23 = *(void **)(lVar10 + 8);
                  }
// WARNING: Subroutine does not return
                  memcpy(pbStack_1d0,puVar23,(int64_t)(*(int *)(lVar10 + 0x10) + 1));
                }
                if ((*(int64_t *)(lVar10 + 8) != 0) && (local_var_1c8 = 0, pbStack_1d0 != (byte *)0x0)
                   ) {
                  *pbStack_1d0 = 0;
                }
                pbVar24 = &system_buffer_ptr;
                if (pbStack_1d0 != (byte *)0x0) {
                  pbVar24 = pbStack_1d0;
                }
                uVar37 = 0xcbf29ce484222325;
                ppppppuVar33 = ppppppuVar12;
                if (local_var_1c8 != 0) {
                  do {
                    uVar37 = (uVar37 ^ *pbVar24) * 0x100000001b3;
                    uVar31 = (int)ppppppuVar33 + 1;
                    ppppppuVar33 = (uint64_t ******)(uint64_t)uVar31;
                    pbVar24 = pbVar24 + 1;
                  } while (uVar31 < local_var_1c8);
                }
                function_284a50(ppppppuVar22 + 1,&pppppplocal_var_200,ppppppuVar33,&plocal_var_1d8,uVar37);
                ppppppuVar33 = pppppplocal_var_200;
                local_var_c0 = *(uint64_t *)((int64_t)plVar25 + (int64_t)param_2[7]);
                ppppppuVar22 = (uint64_t ******)pppppplocal_var_200[5];
                local_var_c8 = param_2;
                if (ppppppuVar22 < pppppplocal_var_200[6]) {
                  pppppplocal_var_200[5] = (uint64_t *****)(ppppppuVar22 + 2);
                  local_var_c8._0_4_ = SUB84(param_2,0);
                  local_var_c8._4_4_ = (int32_t)((uint64_t)param_2 >> 0x20);
                  local_var_c0._4_4_ = (int32_t)((uint64_t)local_var_c0 >> 0x20);
                  *(int32_t *)ppppppuVar22 = (int32_t)local_var_c8;
                  *(int32_t *)((int64_t)ppppppuVar22 + 4) = local_var_c8._4_4_;
                  *(int32_t *)(ppppppuVar22 + 1) = (int32_t)local_var_c0;
                  *(int32_t *)((int64_t)ppppppuVar22 + 0xc) = local_var_c0._4_4_;
                }
                else {
                  ppppppuVar11 = (uint64_t ******)pppppplocal_var_200[4];
                  lVar10 = (int64_t)ppppppuVar22 - (int64_t)ppppppuVar11 >> 4;
                  if (lVar10 == 0) {
                    lVar10 = 1;
LAB_18027e6bc:
                    ppppppuVar12 = (uint64_t ******)
                                   CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 << 4,
                                                 *(int8_t *)(pppppplocal_var_200 + 7));
                    ppppppuVar22 = (uint64_t ******)ppppppuVar33[5];
                    ppppppuVar11 = (uint64_t ******)ppppppuVar33[4];
                    ppppppuVar28 = ppppppuVar12;
                  }
                  else {
                    lVar10 = lVar10 * 2;
                    ppppppuVar28 = ppppppuVar12;
                    if (lVar10 != 0) goto LAB_18027e6bc;
                  }
                  for (; ppppppuVar11 != ppppppuVar22; ppppppuVar11 = ppppppuVar11 + 2) {
                    pppppuVar3 = ppppppuVar11[1];
                    *ppppppuVar12 = *ppppppuVar11;
                    ppppppuVar12[1] = pppppuVar3;
                    ppppppuVar12 = ppppppuVar12 + 2;
                  }
                  *(int32_t *)ppppppuVar12 = (int32_t)local_var_c8;
                  *(int32_t *)((int64_t)ppppppuVar12 + 4) = local_var_c8._4_4_;
                  *(int32_t *)(ppppppuVar12 + 1) = (int32_t)local_var_c0;
                  *(int32_t *)((int64_t)ppppppuVar12 + 0xc) = local_var_c0._4_4_;
                  if ((uint64_t ******)ppppppuVar33[4] != (uint64_t ******)0x0) {
// WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                  ppppppuVar33[4] = (uint64_t *****)ppppppuVar28;
                  ppppppuVar33[5] = (uint64_t *****)(ppppppuVar12 + 2);
                  ppppppuVar33[6] = (uint64_t *****)(ppppppuVar28 + lVar10 * 2);
                  plVar25 = plStack_208;
                }
                plocal_var_1d8 = (uint64_t *)&system_data_buffer_ptr;
                if (pbStack_1d0 != (byte *)0x0) {
// WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                pbStack_1d0 = (byte *)0x0;
                local_var_1c0 = local_var_1c0 & 0xffffffff00000000;
                plocal_var_1d8 = (uint64_t *)&system_state_ptr;
                plVar17 = plStack_210;
                pppppppuVar29 = (uint64_t *******)pppppplocal_var_1e8;
              }
              iStackX_18 = iStackX_18 + 1;
              plStack_208 = (int64_t *)((int64_t)plVar25 + 0x10);
              ppppppuVar22 = param_2[7];
              uVar31 = (uint)piStack_218;
            } while ((uint64_t)(int64_t)iStackX_18 <
                     (uint64_t)((int64_t)param_2[8] - (int64_t)ppppppuVar22 >> 4));
            iVar35 = (int)ppppppstack_special_x_20;
          }
          uVar31 = iVar35 + 1;
          uVar37 = (uint64_t)uVar31;
          ppppppstack_special_x_20 = (uint64_t ******)CONCAT44(ppppppstack_special_x_20._4_4_,uVar31);
          plStack_210 = plVar17 + 2;
          ppppppuVar12 = *pppppppuVar29;
        } while ((uint64_t)(int64_t)(int)uVar31 <
                 (uint64_t)((int64_t)pppppppuVar29[1] - (int64_t)ppppppuVar12 >> 4));
      }
    }
    lVar10 = *(int64_t *)(system_main_module_state + 0x98);
    plocal_var_1b8 = (uint64_t *)0x0;
    pppppplocal_var_1b0 = (uint64_t ******)0x0;
    puVar27 = (uint64_t *)0x0;
    pppppplocal_var_1a8 = (uint64_t ******)0x0;
    local_var_1a0 = 3;
    piStack_218 = (int *)*plStack_100;
    plStack_208 = plStack_100;
    if (piStack_218 == (int *)0x0) {
      plStack_208 = plStack_100 + 1;
      lVar19 = *plStack_208;
      while (lVar19 == 0) {
        plStack_208 = plStack_208 + 1;
        lVar19 = *plStack_208;
      }
      piStack_218 = (int *)*plStack_208;
    }
    plVar25 = plStack_100;
    lVar19 = lStack_f8;
    plVar17 = plStack_208;
    lStack_d0 = lVar10;
    if (piStack_218 != (int *)plStack_100[lStack_f8]) {
      do {
        iVar35 = *piStack_218;
        plVar2 = *(int64_t **)(piStack_218 + 4);
        ppppppstack_special_x_20 = (uint64_t ******)*plVar2;
        plStack_210 = plVar2;
        if ((uint64_t *******)ppppppstack_special_x_20 == (uint64_t *******)0x0) {
          plStack_210 = plVar2 + 1;
          ppppppstack_special_x_20 = (uint64_t ******)*plStack_210;
          while ((uint64_t *******)ppppppstack_special_x_20 == (uint64_t *******)0x0) {
            plStack_210 = plStack_210 + 1;
            ppppppstack_special_x_20 = (uint64_t ******)*plStack_210;
          }
        }
        piVar39 = piStack_218;
        iStackX_18 = iVar35;
        if ((uint64_t *******)ppppppstack_special_x_20 !=
            (uint64_t *******)plVar2[*(int64_t *)(piStack_218 + 6)]) {
          do {
            pppppppuVar29 = (uint64_t *******)ppppppstack_special_x_20;
            uVar13 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x300,0x10,9);
            pppppppuVar14 = (uint64_t *******)FileSystem_Operator(uVar13,1);
            local_var_188 = pppppppuVar14;
            if (pppppppuVar14 != (uint64_t *******)0x0) {
              (*(code *)(*pppppppuVar14)[5])(pppppppuVar14);
            }
            plocal_var_238 = &system_data_buffer_ptr;
            local_var_220 = 0;
            pbStack_230 = (byte *)0x0;
            local_var_228 = 0;
            pbStack_230 = (byte *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
            *pbStack_230 = 0;
            uVar37 = (uint64_t)pbStack_230 & 0xffffffffffc00000;
            uVar31 = 0;
            if (uVar37 != 0) {
              lVar19 = ((int64_t)pbStack_230 - uVar37 >> 0x10) * 0x50;
              puVar34 = (uint *)(uVar37 + ((lVar19 + 0x80) -
                                          (uint64_t)*(uint *)(uVar37 + lVar19 + 0x84)));
              if ((*(byte *)((int64_t)puVar34 + 0xe) & 2) == 0) {
                uVar31 = puVar34[7];
                if (0x3ffffff < puVar34[7]) {
                  uVar31 = *puVar34 << 0x10;
                }
              }
              else {
                uVar31 = puVar34[7];
                if (uVar31 < 0x4000000) {
                  uVar38 = (uint64_t)uVar31;
                }
                else {
                  uVar38 = (uint64_t)*puVar34 << 0x10;
                }
                if (0x3ffffff < uVar31) {
                  uVar31 = *puVar34 << 0x10;
                }
                uVar31 = uVar31 - (int)(((int64_t)pbStack_230 -
                                        (uVar37 + ((int64_t)((int64_t)puVar34 + (-0x80 - uVar37))
                                                  / 0x50) * 0x10000)) % uVar38);
              }
            }
            *(int32_t *)pbStack_230 = 0x63746162;
            *(int32_t *)((int64_t)pbStack_230 + 4) = 0x5f646568;
            *(int32_t *)((int64_t)pbStack_230 + 8) = 0x6873656d;
            *(int32_t *)((int64_t)pbStack_230 + 0xc) = 0x5f7365;
            local_var_228 = 0xf;
            local_var_220._0_4_ = uVar31;
            System_DataHandler(&plocal_var_238,&processed_var_9116_ptr,iVar35);
            uVar31 = local_var_228 + 1;
            if (uVar31 != 0) {
              uVar9 = local_var_228 + 2;
              if (pbStack_230 == (byte *)0x0) {
                if ((int)uVar9 < 0x10) {
                  uVar9 = 0x10;
                }
                pbStack_230 = (byte *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar9,0x13);
                *pbStack_230 = 0;
                local_var_220._0_4_ = CoreEngineSystemCleanup(pbStack_230);
              }
              else if ((uint)local_var_220 < uVar9) {
                pbStack_230 = (byte *)DataValidator(system_memory_pool_ptr,pbStack_230,uVar9,0x10,0x13);
                uVar37 = (uint64_t)pbStack_230 & 0xffffffffffc00000;
                if (uVar37 == 0) {
                  local_var_220._0_4_ = 0;
                }
                else {
                  lVar19 = ((int64_t)pbStack_230 - uVar37 >> 0x10) * 0x50;
                  puVar34 = (uint *)(uVar37 + ((lVar19 + 0x80) -
                                              (uint64_t)*(uint *)(uVar37 + lVar19 + 0x84)));
                  if ((*(byte *)((int64_t)puVar34 + 0xe) & 2) == 0) {
                    local_var_220._0_4_ = puVar34[7];
                    if (0x3ffffff < (uint)local_var_220) {
                      local_var_220._0_4_ = *puVar34 << 0x10;
                    }
                  }
                  else {
                    local_var_220._0_4_ = puVar34[7];
                    if ((uint)local_var_220 < 0x4000000) {
                      uVar38 = (uint64_t)(uint)local_var_220;
                    }
                    else {
                      uVar38 = (uint64_t)*puVar34 << 0x10;
                    }
                    if (0x3ffffff < (uint)local_var_220) {
                      local_var_220._0_4_ = *puVar34 << 0x10;
                    }
                    local_var_220._0_4_ =
                         (uint)local_var_220 -
                         (int)(((int64_t)pbStack_230 -
                               (uVar37 + ((int64_t)((int64_t)puVar34 + (-0x80 - uVar37)) / 0x50) *
                                         0x10000)) % uVar38);
                  }
                }
              }
            }
            *(int16_t *)((uint64_t)local_var_228 + (int64_t)pbStack_230) = 0x5f;
            local_var_228 = uVar31;
            if (0 < *(int *)(pppppppuVar29 + 2)) {
              CoreEngineDataBufferProcessor(&plocal_var_238,uVar31 + *(int *)(pppppppuVar29 + 2));
// WARNING: Subroutine does not return
              memcpy((int8_t *)((uint64_t)local_var_228 + (int64_t)pbStack_230),pppppppuVar29[1],
                     (int64_t)(*(int *)(pppppppuVar29 + 2) + 1));
            }
            pbVar24 = &system_buffer_ptr;
            if (pbStack_230 != (byte *)0x0) {
              pbVar24 = pbStack_230;
            }
            (*(code *)pppppppuVar14[2][2])(pppppppuVar14 + 2,pbVar24);
            pppppplocal_var_200 = (uint64_t ******)0x0;
            local_var_1f8 = CONCAT44(local_var_1f8._4_4_,iVar35);
            if (pppppppuVar14 != (uint64_t *******)0x0) {
              local_var_c8 = pppppppuVar14;
              (*(code *)(*pppppppuVar14)[5])(pppppppuVar14);
            }
            local_var_c8 = (uint64_t *******)0x0;
            pppppplocal_var_200 = (uint64_t ******)pppppppuVar14;
            if ((int64_t)pppppppuVar29[5] - (int64_t)pppppppuVar29[4] >> 4 != 0) {
              UltraHighFreq_SecurityValidator1(pppppppuVar14,pppppppuVar29[4][1] + 0x37);
              *(int32_t *)(pppppppuVar14 + 0x4e) = *(int32_t *)(pppppppuVar29[4][1] + 0x4e);
              ppppppuVar12 = (uint64_t ******)pppppppuVar29[4][1][0x56];
              pppppppuVar14[0x55] = (uint64_t ******)pppppppuVar29[4][1][0x55];
              pppppppuVar14[0x56] = ppppppuVar12;
              pppppuVar3 = pppppppuVar29[4][1];
              uVar5 = *(int32_t *)((int64_t)pppppuVar3 + 700);
              uVar6 = *(int32_t *)(pppppuVar3 + 0x58);
              uVar7 = *(int32_t *)((int64_t)pppppuVar3 + 0x2c4);
              *(int32_t *)(pppppppuVar14 + 0x57) = *(int32_t *)(pppppuVar3 + 0x57);
              *(int32_t *)((int64_t)pppppppuVar14 + 700) = uVar5;
              *(int32_t *)(pppppppuVar14 + 0x58) = uVar6;
              *(int32_t *)((int64_t)pppppppuVar14 + 0x2c4) = uVar7;
            }
            if (lVar10 == 0) {
              local_var_98 = 0;
              local_var_90 = 0;
              ppppppstack_special_x_10 = (uint64_t ******)stack_array_88;
              local_var_70 = 0;
              local_var_80 = 0;
              stack_array_88[0] = 0;
              RenderingSystem_MaterialProcessor(&local_var_98,pppppppuVar14,0);
              ppppppuVar12 = pppppppuVar29[4];
              puVar16 = puVar27;
              puVar30 = puVar27;
              if ((int64_t)pppppppuVar29[5] - (int64_t)ppppppuVar12 >> 4 != 0) {
                do {
                  puVar18 = *(uint64_t **)
                             (*(int64_t *)((int64_t)(ppppppuVar12 + 1) + (int64_t)puVar16) +
                             0x238);
                  uVar13 = *(uint64_t *)
                            (*(int64_t *)((int64_t)(ppppppuVar12 + 1) + (int64_t)puVar16) + 0x240
                            );
                  pcVar4 = *(code **)(**(int64_t **)((int64_t)ppppppuVar12 + (int64_t)puVar16) +
                                     0x158);
                  if (pcVar4 == (code *)&rendering_buffer_2528_ptr) {
                    plVar17 = *(int64_t **)((int64_t)ppppppuVar12 + (int64_t)puVar16) + 0x66;
                  }
                  else {
                    plVar17 = (int64_t *)(*pcVar4)();
                    ppppppuVar12 = pppppppuVar29[4];
                  }
                  plocal_var_1d8 = puVar18;
                  pbStack_1d0 = (byte *)uVar13;
                  function_235ca0(&local_var_98,
                                *(uint64_t *)((int64_t)(ppppppuVar12 + 1) + (int64_t)puVar16),
                                plVar17,0xff,&plocal_var_1d8,1,0,0,1);
                  uVar31 = (int)puVar30 + 1;
                  ppppppuVar12 = pppppppuVar29[4];
                  puVar16 = puVar16 + 2;
                  puVar30 = (uint64_t *)(uint64_t)uVar31;
                  piVar39 = piStack_218;
                } while ((uint64_t)(int64_t)(int)uVar31 <
                         (uint64_t)((int64_t)pppppppuVar29[5] - (int64_t)ppppppuVar12 >> 4));
              }
              function_22f410(&local_var_98);
            }
            else {
              plocal_var_128 = (uint64_t *)0x0;
              plocal_var_120 = (uint64_t *)0x0;
              plocal_var_118 = (uint64_t *)0x0;
              local_var_110 = 3;
              plocal_var_148 = (uint64_t *)0x0;
              plocal_var_140 = (uint64_t *)0x0;
              plocal_var_1d8 = (uint64_t *)0x0;
              plocal_var_138 = (uint64_t *)0x0;
              local_var_130 = 3;
              plocal_var_170 = (uint64_t *)0x0;
              plocal_var_168 = (uint64_t *)0x0;
              plocal_var_160 = (uint64_t *)0x0;
              local_var_158 = 3;
              ppppppstack_special_x_10 =
                   (uint64_t ******)((uint64_t)ppppppstack_special_x_10 & 0xffffffff00000000);
              ppppppuVar12 = pppppppuVar29[4];
              if ((int64_t)pppppppuVar29[5] - (int64_t)ppppppuVar12 >> 4 != 0) {
                lStack_190 = 0;
                plocal_var_198 = (uint64_t *)0x0;
                puVar16 = puVar27;
                puVar30 = puVar27;
                do {
                  plVar17 = *(int64_t **)((int64_t)ppppppuVar12 + lStack_190 + 8);
                  plocal_var_150 = plocal_var_140;
                  plStack_d8 = plVar17;
                  if (plVar17 != (int64_t *)0x0) {
                    (**(code **)(*plVar17 + 0x28))(plVar17);
                  }
                  if (plocal_var_168 < plocal_var_160) {
                    *plocal_var_168 = (uint64_t)plVar17;
                    plStack_d8 = (int64_t *)0x0;
                    puVar18 = plocal_var_168;
                  }
                  else {
                    lVar10 = (int64_t)plocal_var_168 - (int64_t)plocal_var_170 >> 3;
                    if (lVar10 == 0) {
                      lVar10 = 1;
LAB_18027ed63:
                      puVar18 = (uint64_t *)
                                CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 8,(int8_t)local_var_158);
                      puVar16 = plocal_var_170;
                      puVar15 = puVar18;
                    }
                    else {
                      lVar10 = lVar10 * 2;
                      puVar18 = puVar27;
                      puVar16 = plocal_var_170;
                      puVar15 = puVar27;
                      if (lVar10 != 0) goto LAB_18027ed63;
                    }
                    for (; puVar8 = plocal_var_168, puVar16 != plocal_var_168; puVar16 = puVar16 + 1) {
                      *puVar18 = *puVar16;
                      *puVar16 = 0;
                      puVar18 = puVar18 + 1;
                    }
                    *puVar18 = (uint64_t)plVar17;
                    plStack_d8 = (int64_t *)0x0;
                    puVar16 = plocal_var_1d8;
                    pppppppuVar29 = (uint64_t *******)ppppppstack_special_x_20;
                    for (puVar26 = plocal_var_170; ppppppstack_special_x_20 = (uint64_t ******)pppppppuVar29,
                        plocal_var_1d8 = puVar16, puVar26 != puVar8; puVar26 = puVar26 + 1) {
                      if ((int64_t *)*puVar26 != (int64_t *)0x0) {
                        (**(code **)(*(int64_t *)*puVar26 + 0x38))();
                      }
                      puVar16 = plocal_var_1d8;
                      pppppppuVar29 = (uint64_t *******)ppppppstack_special_x_20;
                    }
                    if (plocal_var_170 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
                      CoreEngineMemoryPoolCleaner(plocal_var_170);
                    }
                    plocal_var_160 = puVar15 + lVar10;
                    plocal_var_170 = puVar15;
                  }
                  plocal_var_168 = puVar18 + 1;
                  pcVar4 = *(code **)(**(int64_t **)(lStack_190 + (int64_t)pppppppuVar29[4]) +
                                     0x158);
                  if (pcVar4 == (code *)&rendering_buffer_2528_ptr) {
                    puVar18 = (uint64_t *)
                              (*(int64_t **)(lStack_190 + (int64_t)pppppppuVar29[4]) + 0x66);
                  }
                  else {
                    puVar18 = (uint64_t *)(*pcVar4)();
                  }
                  if (plocal_var_198 < puVar30) {
                    plocal_var_120 = plocal_var_198 + 8;
                    uVar37 = puVar18[1];
                    *plocal_var_198 = *puVar18;
                    plocal_var_198[1] = uVar37;
                    uVar37 = puVar18[3];
                    plocal_var_198[2] = puVar18[2];
                    plocal_var_198[3] = uVar37;
                    uVar5 = *(int32_t *)((int64_t)puVar18 + 0x24);
                    uVar37 = puVar18[5];
                    uVar6 = *(int32_t *)((int64_t)puVar18 + 0x2c);
                    *(int *)(plocal_var_198 + 4) = (int)puVar18[4];
                    *(int32_t *)((int64_t)plocal_var_198 + 0x24) = uVar5;
                    *(int *)(plocal_var_198 + 5) = (int)uVar37;
                    *(int32_t *)((int64_t)plocal_var_198 + 0x2c) = uVar6;
                    uVar5 = *(int32_t *)((int64_t)puVar18 + 0x34);
                    uVar37 = puVar18[7];
                    uVar6 = *(int32_t *)((int64_t)puVar18 + 0x3c);
                    *(int *)(plocal_var_198 + 6) = (int)puVar18[6];
                    *(int32_t *)((int64_t)plocal_var_198 + 0x34) = uVar5;
                    *(int *)(plocal_var_198 + 7) = (int)uVar37;
                    *(int32_t *)((int64_t)plocal_var_198 + 0x3c) = uVar6;
                  }
                  else {
                    lVar19 = (int64_t)plocal_var_198 - (int64_t)plocal_var_128;
                    lVar10 = lVar19 >> 6;
                    if (lVar10 == 0) {
                      lVar10 = 1;
LAB_18027ee93:
                      puVar15 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 << 6,3);
                    }
                    else {
                      lVar10 = lVar10 * 2;
                      puVar15 = puVar27;
                      if (lVar10 != 0) goto LAB_18027ee93;
                    }
                    if (plocal_var_128 != plocal_var_198) {
// WARNING: Subroutine does not return
                      memmove(puVar15,plocal_var_128,lVar19);
                    }
                    uVar37 = puVar18[1];
                    *puVar15 = *puVar18;
                    puVar15[1] = uVar37;
                    uVar37 = puVar18[3];
                    puVar15[2] = puVar18[2];
                    puVar15[3] = uVar37;
                    uVar5 = *(int32_t *)((int64_t)puVar18 + 0x24);
                    uVar37 = puVar18[5];
                    uVar6 = *(int32_t *)((int64_t)puVar18 + 0x2c);
                    *(int *)(puVar15 + 4) = (int)puVar18[4];
                    *(int32_t *)((int64_t)puVar15 + 0x24) = uVar5;
                    *(int *)(puVar15 + 5) = (int)uVar37;
                    *(int32_t *)((int64_t)puVar15 + 0x2c) = uVar6;
                    uVar5 = *(int32_t *)((int64_t)puVar18 + 0x34);
                    uVar37 = puVar18[7];
                    uVar6 = *(int32_t *)((int64_t)puVar18 + 0x3c);
                    *(int *)(puVar15 + 6) = (int)puVar18[6];
                    *(int32_t *)((int64_t)puVar15 + 0x34) = uVar5;
                    *(int *)(puVar15 + 7) = (int)uVar37;
                    *(int32_t *)((int64_t)puVar15 + 0x3c) = uVar6;
                    plocal_var_198 = puVar15 + 8;
                    if (plocal_var_128 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
                      CoreEngineMemoryPoolCleaner();
                    }
                    puVar30 = puVar15 + lVar10 * 8;
                    pppppppuVar29 = (uint64_t *******)ppppppstack_special_x_20;
                    plocal_var_128 = puVar15;
                    plocal_var_120 = plocal_var_198;
                    plocal_var_118 = puVar30;
                  }
                  puVar18 = plocal_var_150;
                  lVar10 = *(int64_t *)(lStack_190 + 8 + (int64_t)pppppppuVar29[4]);
                  uVar37 = *(uint64_t *)(lVar10 + 0x238);
                  uVar38 = *(uint64_t *)(lVar10 + 0x240);
                  plocal_var_198 = plocal_var_120;
                  if (plocal_var_150 < puVar16) {
                    plocal_var_140 = plocal_var_150 + 2;
                    *plocal_var_150 = uVar37;
                    plocal_var_150[1] = uVar38;
                  }
                  else {
                    lVar19 = (int64_t)plocal_var_150 - (int64_t)plocal_var_148;
                    lVar10 = lVar19 >> 4;
                    if (lVar10 == 0) {
                      lVar10 = 1;
LAB_18027ef7d:
                      puVar15 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 << 4,3);
                    }
                    else {
                      lVar10 = lVar10 * 2;
                      puVar15 = puVar27;
                      if (lVar10 != 0) goto LAB_18027ef7d;
                    }
                    if (plocal_var_148 != puVar18) {
// WARNING: Subroutine does not return
                      memmove(puVar15,plocal_var_148,lVar19);
                    }
                    *puVar15 = uVar37;
                    puVar15[1] = uVar38;
                    plocal_var_150 = puVar15 + 2;
                    if (plocal_var_148 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
                      CoreEngineMemoryPoolCleaner();
                    }
                    puVar16 = puVar15 + lVar10 * 2;
                    plocal_var_1d8 = puVar16;
                    plocal_var_148 = puVar15;
                    plocal_var_140 = plocal_var_150;
                    plocal_var_138 = puVar16;
                  }
                  iVar36 = (int)ppppppstack_special_x_10 + 1;
                  ppppppstack_special_x_10 = (uint64_t ******)CONCAT44(ppppppstack_special_x_10._4_4_,iVar36);
                  lStack_190 = lStack_190 + 0x10;
                  ppppppuVar12 = (uint64_t ******)ppppppstack_special_x_20[4];
                  pppppppuVar29 = (uint64_t *******)ppppppstack_special_x_20;
                  iVar35 = iStackX_18;
                  plocal_var_150 = plocal_var_140;
                } while ((uint64_t)(int64_t)iVar36 <
                         (uint64_t)((int64_t)ppppppstack_special_x_20[5] - (int64_t)ppppppuVar12 >> 4));
              }
              pppppppuVar14 = local_var_188;
              uVar13 = *(uint64_t *)(system_main_module_state + 0x98);
              ppppppstack_special_x_20 = (uint64_t ******)&ppppppstack_special_x_10;
              ppppppstack_special_x_10 = (uint64_t ******)local_var_188;
              if (local_var_188 != (uint64_t *******)0x0) {
                (*(code *)(*local_var_188)[5])(local_var_188);
              }
              function_17a600(uVar13,&ppppppstack_special_x_10,&plocal_var_170,&plocal_var_128,&plocal_var_148);
              DataTransformer0(&plocal_var_170);
              if (plocal_var_148 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
              piVar39 = piStack_218;
              if (plocal_var_128 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
            }
            ppppppuVar12 = pppppplocal_var_1b0;
            if (pppppplocal_var_1b0 < pppppplocal_var_1a8) {
              pppppppuVar1 = (uint64_t *******)(pppppplocal_var_1b0 + 2);
              ppppppstack_special_x_10 = pppppplocal_var_1b0;
              *pppppplocal_var_1b0 = (uint64_t *****)pppppppuVar14;
              pppppplocal_var_1b0 = (uint64_t ******)pppppppuVar1;
              if (pppppppuVar14 != (uint64_t *******)0x0) {
                (*(code *)(*pppppppuVar14)[5])(pppppppuVar14);
              }
              *(int *)(ppppppuVar12 + 1) = iVar35;
            }
            else {
              lVar10 = (int64_t)pppppplocal_var_1b0 - (int64_t)plocal_var_1b8 >> 4;
              if (lVar10 == 0) {
                lVar10 = 1;
LAB_18027f217:
                puVar16 = (uint64_t *)
                          CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 << 4,(int8_t)local_var_1a0);
              }
              else {
                lVar10 = lVar10 * 2;
                puVar16 = puVar27;
                if (lVar10 != 0) goto LAB_18027f217;
              }
              lVar19 = function_284fe0(plocal_var_1b8,pppppplocal_var_1b0,puVar16);
              function_280fd0(lVar19,&pppppplocal_var_200);
              function_284f90(plocal_var_1b8,pppppplocal_var_1b0);
              if (plocal_var_1b8 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
              pppppplocal_var_1a8 = (uint64_t ******)(puVar16 + lVar10 * 2);
              iVar35 = iStackX_18;
              plocal_var_1b8 = puVar16;
              pppppplocal_var_1b0 = (uint64_t ******)(lVar19 + 0x10);
            }
            if (pppppppuVar14 != (uint64_t *******)0x0) {
              (*(code *)(*pppppppuVar14)[7])(pppppppuVar14);
            }
            plocal_var_238 = &system_data_buffer_ptr;
            if (pbStack_230 != (byte *)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            pbStack_230 = (byte *)0x0;
            local_var_220 = (uint64_t)local_var_220._4_4_ << 0x20;
            plocal_var_238 = &system_state_ptr;
            if (pppppppuVar14 != (uint64_t *******)0x0) {
              (*(code *)(*pppppppuVar14)[7])(pppppppuVar14);
            }
            ppppppstack_special_x_20 = pppppppuVar29[8];
            while ((uint64_t *******)ppppppstack_special_x_20 == (uint64_t *******)0x0) {
              plStack_210 = plStack_210 + 1;
              ppppppstack_special_x_20 = (uint64_t ******)*plStack_210;
            }
            plVar25 = plStack_100;
            lVar10 = lStack_d0;
            lVar19 = lStack_f8;
            plVar17 = plStack_208;
          } while ((uint64_t *******)ppppppstack_special_x_20 !=
                   *(uint64_t ********)
                    (*(int64_t *)(piVar39 + 4) + *(int64_t *)(piVar39 + 6) * 8));
        }
        piStack_218 = *(int **)(piVar39 + 0xe);
        while (piStack_218 == (int *)0x0) {
          plVar17 = plVar17 + 1;
          plStack_208 = plVar17;
          piStack_218 = (int *)*plVar17;
        }
      } while (piStack_218 != (int *)plVar25[lVar19]);
    }
    puVar16 = puVar27;
    puVar30 = puVar27;
    if ((int64_t)pppppplocal_var_1e8[1] - (int64_t)*pppppplocal_var_1e8 >> 4 != 0) {
      do {
        *(uint64_t *)(*(int64_t *)((int64_t)puVar16 + (int64_t)*pppppplocal_var_1e8) + 0x1c8) = 0;
        uVar31 = (int)puVar30 + 1;
        puVar16 = puVar16 + 2;
        puVar30 = (uint64_t *)(uint64_t)uVar31;
      } while ((uint64_t)(int64_t)(int)uVar31 <
               (uint64_t)((int64_t)pppppplocal_var_1e8[1] - (int64_t)*pppppplocal_var_1e8 >> 4));
    }
    function_284500();
    ppppppuVar12 = ppppppstack_special_x_8;
    puVar16 = puVar27;
    if ((int64_t)pppppplocal_var_1b0 - (int64_t)plocal_var_1b8 >> 4 != 0) {
      do {
        ppppppstack_special_x_10 = (uint64_t ******)&ppppppstack_special_x_8;
        ppppppstack_special_x_8 = *(uint64_t *******)((int64_t)plocal_var_1b8 + (int64_t)puVar27);
        if ((uint64_t *******)ppppppstack_special_x_8 != (uint64_t *******)0x0) {
          (*(code *)(*ppppppstack_special_x_8)[5])();
        }
        function_275e10(ppppppuVar12,*(int32_t *)((int64_t)(plocal_var_1b8 + 1) + (int64_t)puVar27),
                      &ppppppstack_special_x_8,0);
        uVar31 = (int)puVar16 + 1;
        puVar27 = puVar27 + 2;
        puVar16 = (uint64_t *)(uint64_t)uVar31;
      } while ((uint64_t)(int64_t)(int)uVar31 <
               (uint64_t)((int64_t)pppppplocal_var_1b0 - (int64_t)plocal_var_1b8 >> 4));
    }
    if (lVar10 == 0) {
      SystemCore_UpdateState(ppppppuVar12,(int64_t)ppppppuVar12 + 0x214,1);
      ppppppuVar12 = (uint64_t ******)ppppppuVar12[5];
      if ((ppppppuVar12 != (uint64_t ******)0x0) &&
         (*(short *)(ppppppuVar12 + 0x56) = *(short *)(ppppppuVar12 + 0x56) + 1,
         ppppppuVar12[0x2d] != (uint64_t *****)0x0)) {
        SystemFunction_0001802eeba0();
      }
    }
    function_2841d0(&plocal_var_1b8);
    function_284780(stack_array_108);
  }
  return;
}