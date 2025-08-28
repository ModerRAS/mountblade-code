#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part365.c - 1 个函数
// 函数: void function_467500(int64_t param_1)
void function_467500(int64_t param_1)
{
  uint64_t *puVar1;
  uint64_t *******pppppppuVar2;
  int8_t auVar3 [16];
  int8_t auVar4 [16];
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t ******ppppppuVar15;
  int32_t uVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  uint64_t ******ppppppuVar19;
  float *pfVar20;
  int64_t lVar21;
  int64_t lVar22;
  int64_t lVar23;
  uint64_t *******pppppppuVar24;
  uint64_t ******ppppppuVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  uint64_t ******ppppppuVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  int iVar32;
  uint uVar33;
  float *pfVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  uint64_t stack_special_x_8;
  float afStackX_10 [2];
  float afStackX_18 [3];
  int32_t stack_special_x_24;
  uint64_t *******ppppppplocal_var_1d8;
  uint64_t *******ppppppplocal_var_1d0;
  uint64_t *******ppppppplocal_var_1c8;
  uint64_t local_var_1c0;
  uint64_t local_var_1b8;
  int32_t local_var_1b0;
  uint64_t local_var_1a8;
  uint64_t local_var_1a0;
  uint64_t local_var_198;
  uint64_t local_var_190;
  uint64_t local_var_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  float fStack_168;
  int32_t local_var_164;
  float fStack_160;
  int32_t local_var_15c;
  uint64_t local_var_158;
  uint64_t local_var_150;
  uint64_t local_var_148;
  uint64_t local_var_140;
  uint64_t local_var_138;
  uint64_t local_var_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int32_t local_var_11c;
  uint64_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_108;
  int8_t stack_array_100 [8];
  int8_t stack_array_f8 [184];
  local_var_108 = 0xfffffffffffffffe;
  if ((uint64_t)(*(int64_t *)(param_1 + 0xd8) - *(int64_t *)(param_1 + 0xd0) >> 3) < 2) {
    return;
  }
  if ((*(uint *)(param_1 + 0x170) >> 1 & 1) != 0) {
    function_468070(param_1,1,0);
  }
  puVar1 = (uint64_t *)(param_1 + 0x180);
  function_1e85e0(puVar1,*(uint64_t *)(param_1 + 400));
  *puVar1 = puVar1;
  *(uint64_t **)(param_1 + 0x188) = puVar1;
  pfVar34 = (float *)0x0;
  *(uint64_t *)(param_1 + 400) = 0;
  *(int8_t *)(param_1 + 0x198) = 0;
  *(uint64_t *)(param_1 + 0x1a0) = 0;
  SystemCore_Controller(param_1 + 0x118);
  *(uint64_t *)(param_1 + 0x100) = *(uint64_t *)(param_1 + 0xf8);
  fVar38 = 0.0;
  afStackX_10[0] = 0.0;
  stack_special_x_8 = 0;
  puVar17 = (uint64_t *)SystemFunction_0001804662e0(param_1,0);
  local_var_1a8 = *puVar17;
  local_var_1a0 = puVar17[1];
  local_var_198 = puVar17[2];
  local_var_190 = puVar17[3];
  local_var_188 = puVar17[4];
  local_var_180 = puVar17[5];
  fVar37 = *(float *)(puVar17 + 6);
  fVar42 = *(float *)((int64_t)puVar17 + 0x34);
  fVar41 = *(float *)(puVar17 + 7);
  stack_special_x_8._0_4_ = 0x3f800000;
  stack_special_x_8._4_4_ = 0;
  puVar17 = (uint64_t *)SystemFunction_0001804662e0(param_1,0x3f800000);
  local_var_158 = *puVar17;
  local_var_150 = puVar17[1];
  local_var_148 = puVar17[2];
  local_var_140 = puVar17[3];
  local_var_138 = puVar17[4];
  local_var_130 = puVar17[5];
  fVar39 = 0.0;
  fVar35 = *(float *)((int64_t)puVar17 + 0x34) - fVar42;
  fVar40 = 0.05 / SQRT((*(float *)(puVar17 + 6) - fVar37) * (*(float *)(puVar17 + 6) - fVar37) +
                       fVar35 * fVar35 +
                       (*(float *)(puVar17 + 7) - fVar41) * (*(float *)(puVar17 + 7) - fVar41)) +
           0.0001;
  stack_special_x_8._0_4_ = 0;
  local_var_1b0 = 3;
  ppppppplocal_var_1d8 = &ppppppplocal_var_1d8;
  ppppppplocal_var_1d0 = &ppppppplocal_var_1d8;
  ppppppplocal_var_1c8 = (uint64_t *******)0x0;
  local_var_1c0 = 0;
  local_var_1b8 = 0;
  pfVar27 = pfVar34;
  fVar35 = 0.0;
  do {
    fVar36 = fVar35;
    if (1.0 < fVar39) {
      iVar32 = (int)pfVar27;
      puVar18 = puVar1;
      puVar17 = *(uint64_t **)(param_1 + 400);
      while (puVar17 != (uint64_t *)0x0) {
        if (*(int *)(puVar17 + 4) < iVar32) {
          puVar17 = (uint64_t *)*puVar17;
        }
        else {
          puVar18 = puVar17;
          puVar17 = (uint64_t *)puVar17[1];
        }
      }
      if ((puVar18 == puVar1) || (iVar32 < *(int *)(puVar18 + 4))) {
        puVar18 = (uint64_t *)function_4695d0(puVar1,stack_array_100);
        puVar18 = (uint64_t *)*puVar18;
      }
      pppppppuVar2 = (uint64_t *******)(puVar18 + 5);
      if ((uint64_t ********)pppppppuVar2 == &ppppppplocal_var_1d8) {
LAB_1804677f9:
        pppppppuVar2 = ppppppplocal_var_1c8;
        if (ppppppplocal_var_1c8 != (uint64_t *******)0x0) {
          SystemCache_Manager(&ppppppplocal_var_1d8,*ppppppplocal_var_1c8);
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(pppppppuVar2);
        }
      }
      else {
        CoreEngine_0572D0(pppppppuVar2);
        if (ppppppplocal_var_1c8 != (uint64_t *******)0x0) {
          ppppppuVar19 = (uint64_t ******)
                         function_469740(pppppppuVar2,ppppppplocal_var_1c8,pppppppuVar2);
          puVar18[7] = ppppppuVar19;
          ppppppuVar29 = (uint64_t ******)*ppppppuVar19;
          ppppppuVar25 = ppppppuVar19;
          while (ppppppuVar15 = ppppppuVar29, ppppppuVar15 != (uint64_t ******)0x0) {
            ppppppuVar25 = ppppppuVar15;
            ppppppuVar29 = (uint64_t ******)*ppppppuVar15;
          }
          *pppppppuVar2 = ppppppuVar25;
          ppppppuVar25 = (uint64_t ******)ppppppuVar19[1];
          while (ppppppuVar29 = ppppppuVar25, ppppppuVar29 != (uint64_t ******)0x0) {
            ppppppuVar19 = ppppppuVar29;
            ppppppuVar25 = (uint64_t ******)ppppppuVar29[1];
          }
          puVar18[6] = ppppppuVar19;
          puVar18[9] = local_var_1b8;
          goto LAB_1804677f9;
        }
      }
      ppppppplocal_var_1d8 = &ppppppplocal_var_1d8;
      ppppppplocal_var_1d0 = &ppppppplocal_var_1d8;
      ppppppplocal_var_1c8 = (uint64_t *******)0x0;
      local_var_1c0 = local_var_1c0 & 0xffffffffffffff00;
      local_var_1b8 = 0;
      uVar33 = iVar32 + 1;
      pfVar27 = (float *)(uint64_t)uVar33;
      lVar23 = *(int64_t *)(*(int64_t *)(param_1 + 0xd0) + (int64_t)(int)uVar33 * 8);
      fVar40 = fVar42 - *(float *)(lVar23 + 0x34);
      fVar36 = fVar37 - *(float *)(lVar23 + 0x30);
      fVar39 = fVar41 - *(float *)(lVar23 + 0x38);
      fVar36 = SQRT(fVar36 * fVar36 + fVar40 * fVar40 + fVar39 * fVar39) + fVar38;
      pfVar28 = *(float **)(param_1 + 0x100);
      stack_special_x_8._0_4_ = uVar33;
      if (pfVar28 < *(float **)(param_1 + 0x108)) {
        *(float **)(param_1 + 0x100) = pfVar28 + 1;
        *pfVar28 = fVar36 - fVar35;
      }
      else {
        pfVar26 = *(float **)(param_1 + 0xf8);
        lVar23 = (int64_t)pfVar28 - (int64_t)pfVar26 >> 2;
        if (lVar23 == 0) {
          lVar23 = 1;
LAB_1804678f3:
          pfVar20 = (float *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar23 * 4,
                                           *(int8_t *)(param_1 + 0x110));
          pfVar28 = *(float **)(param_1 + 0x100);
          pfVar26 = *(float **)(param_1 + 0xf8);
        }
        else {
          lVar23 = lVar23 * 2;
          pfVar20 = pfVar34;
          if (lVar23 != 0) goto LAB_1804678f3;
        }
        if (pfVar26 != pfVar28) {
// WARNING: Subroutine does not return
          memmove(pfVar20,pfVar26,(int64_t)pfVar28 - (int64_t)pfVar26);
        }
        *pfVar20 = fVar36 - fVar35;
        if (*(int64_t *)(param_1 + 0xf8) != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(float **)(param_1 + 0xf8) = pfVar20;
        *(float **)(param_1 + 0x100) = pfVar20 + 1;
        *(float **)(param_1 + 0x108) = pfVar20 + lVar23;
      }
      lVar23 = *(int64_t *)(param_1 + 0xd0);
      uVar30 = *(int64_t *)(param_1 + 0xd8) - lVar23 >> 3;
      uVar31 = uVar30 - 1;
      if ((uint64_t)(int64_t)(int)uVar33 < uVar31) {
        iVar32 = iVar32 + 2;
        afStackX_18[0] = (float)iVar32;
        afStackX_18[1] = 0.0;
        lVar21 = SystemFunction_0001804662e0(param_1,afStackX_18[0]);
        afStackX_18[2] = (float)(int)uVar33;
        stack_special_x_24 = 0;
        lVar22 = SystemFunction_0001804662e0(param_1);
        fVar40 = *(float *)(lVar21 + 0x38) - *(float *)(lVar22 + 0x38);
        fVar35 = *(float *)(lVar21 + 0x34) - *(float *)(lVar22 + 0x34);
        fVar39 = *(float *)(lVar21 + 0x30) - *(float *)(lVar22 + 0x30);
        if (SQRT(fVar39 * fVar39 + fVar35 * fVar35 + fVar40 * fVar40) < 1e-06) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar30;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (int64_t)iVar32;
          pfVar27 = SUB168(auVar4 % auVar3,0);
          stack_special_x_8._0_4_ = SUB164(auVar4 % auVar3,0);
        }
      }
      iVar32 = (int)pfVar27;
      if (uVar31 <= (uint64_t)(int64_t)iVar32) {
        puVar17 = *(uint64_t **)(lVar23 + (int64_t)iVar32 * 8);
        uVar5 = *puVar17;
        uVar6 = puVar17[1];
        uVar7 = puVar17[2];
        uVar8 = puVar17[3];
        uVar9 = puVar17[4];
        uVar10 = puVar17[5];
        uVar11 = puVar17[6];
        uVar12 = puVar17[7];
        uVar13 = puVar17[0x18];
        uVar14 = puVar17[0x19];
        pppppppuVar24 = &ppppppplocal_var_1d8;
        pppppppuVar2 = ppppppplocal_var_1c8;
        while (pppppppuVar2 != (uint64_t *******)0x0) {
          if (*(float *)(pppppppuVar2 + 4) <= fVar38 && fVar38 != *(float *)(pppppppuVar2 + 4)) {
            pppppppuVar2 = (uint64_t *******)*pppppppuVar2;
          }
          else {
            pppppppuVar24 = pppppppuVar2;
            pppppppuVar2 = (uint64_t *******)pppppppuVar2[1];
          }
        }
        if (((uint64_t ********)pppppppuVar24 == &ppppppplocal_var_1d8) ||
           (fVar38 < *(float *)(pppppppuVar24 + 4))) {
          puVar17 = (uint64_t *)function_469830(&ppppppplocal_var_1d8,afStackX_18);
          pppppppuVar24 = (uint64_t *******)*puVar17;
        }
        *(uint64_t *)((int64_t)pppppppuVar24 + 0x24) = uVar5;
        *(uint64_t *)((int64_t)pppppppuVar24 + 0x2c) = uVar6;
        *(uint64_t *)((int64_t)pppppppuVar24 + 0x34) = uVar7;
        *(uint64_t *)((int64_t)pppppppuVar24 + 0x3c) = uVar8;
        *(uint64_t *)((int64_t)pppppppuVar24 + 0x44) = uVar9;
        *(uint64_t *)((int64_t)pppppppuVar24 + 0x4c) = uVar10;
        *(uint64_t *)((int64_t)pppppppuVar24 + 0x54) = uVar11;
        *(uint64_t *)((int64_t)pppppppuVar24 + 0x5c) = uVar12;
        *(uint64_t *)((int64_t)pppppppuVar24 + 100) = uVar13;
        *(uint64_t *)((int64_t)pppppppuVar24 + 0x6c) = uVar14;
        puVar18 = puVar1;
        puVar17 = *(uint64_t **)(param_1 + 400);
        while (puVar17 != (uint64_t *)0x0) {
          if (*(int *)(puVar17 + 4) < iVar32) {
            puVar17 = (uint64_t *)*puVar17;
          }
          else {
            puVar18 = puVar17;
            puVar17 = (uint64_t *)puVar17[1];
          }
        }
        if ((puVar18 == puVar1) || (iVar32 < *(int *)(puVar18 + 4))) {
          puVar18 = (uint64_t *)function_4695d0(puVar1,afStackX_10);
          puVar18 = (uint64_t *)*puVar18;
        }
        pppppppuVar2 = (uint64_t *******)(puVar18 + 5);
        if (((uint64_t ********)pppppppuVar2 != &ppppppplocal_var_1d8) &&
           (CoreEngine_0572D0(pppppppuVar2), ppppppplocal_var_1c8 != (uint64_t *******)0x0)) {
          ppppppuVar25 = (uint64_t ******)
                         function_469740(pppppppuVar2,ppppppplocal_var_1c8,pppppppuVar2);
          puVar18[7] = ppppppuVar25;
          ppppppuVar19 = (uint64_t ******)*ppppppuVar25;
          ppppppuVar29 = ppppppuVar25;
          if ((uint64_t ******)*ppppppuVar25 != (uint64_t ******)0x0) {
            do {
              ppppppuVar29 = ppppppuVar19;
              ppppppuVar19 = (uint64_t ******)*ppppppuVar29;
            } while ((uint64_t ******)*ppppppuVar29 != (uint64_t ******)0x0);
            ppppppuVar25 = (uint64_t ******)puVar18[7];
          }
          *pppppppuVar2 = ppppppuVar29;
          ppppppuVar19 = (uint64_t ******)ppppppuVar25[1];
          while (ppppppuVar29 = ppppppuVar19, ppppppuVar29 != (uint64_t ******)0x0) {
            ppppppuVar25 = ppppppuVar29;
            ppppppuVar19 = (uint64_t ******)ppppppuVar29[1];
          }
          puVar18[6] = ppppppuVar25;
          puVar18[9] = local_var_1b8;
        }
        uVar33 = *(uint *)(param_1 + 0x170);
        if ((uVar33 >> 1 & 1) != 0) {
          function_468070(param_1,0,1);
          uVar33 = (uint)*(byte *)(param_1 + 0x170);
        }
        if ((uVar33 & 1) != 0) {
          stack_special_x_8._0_4_ = 0;
          lVar23 = *(int64_t *)(param_1 + 0xd8);
          lVar21 = *(int64_t *)(param_1 + 0xd0);
          if (lVar23 - lVar21 >> 3 != 1) {
            do {
              iVar32 = (int)pfVar34;
              puVar17 = *(uint64_t **)(lVar21 + (int64_t)iVar32 * 8);
              local_var_1a8 = *puVar17;
              local_var_1a0 = puVar17[1];
              local_var_198 = puVar17[2];
              local_var_190 = puVar17[3];
              local_var_188 = puVar17[4];
              local_var_180 = puVar17[5];
              local_var_178 = puVar17[6];
              local_var_170 = puVar17[7];
              puVar18 = puVar1;
              puVar17 = *(uint64_t **)(param_1 + 400);
              while (puVar17 != (uint64_t *)0x0) {
                if (*(int *)(puVar17 + 4) < iVar32) {
                  puVar17 = (uint64_t *)*puVar17;
                }
                else {
                  puVar18 = puVar17;
                  puVar17 = (uint64_t *)puVar17[1];
                }
              }
              if ((puVar18 == puVar1) || (iVar32 < *(int *)(puVar18 + 4))) {
                puVar18 = (uint64_t *)function_4695d0(puVar1,afStackX_10,pfVar34,puVar18,&stack_special_x_8)
                ;
                puVar18 = (uint64_t *)*puVar18;
              }
              lVar23 = puVar18[6];
              local_var_1a8 = *(uint64_t *)(lVar23 + 0x24);
              local_var_1a0 = *(uint64_t *)(lVar23 + 0x2c);
              local_var_198 = *(uint64_t *)(lVar23 + 0x34);
              local_var_190 = *(uint64_t *)(lVar23 + 0x3c);
              local_var_188 = *(uint64_t *)(lVar23 + 0x44);
              local_var_180 = *(uint64_t *)(lVar23 + 0x4c);
              fVar37 = (float)iVar32;
              *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
              if (9.223372e+18 <= fVar37) {
                fVar37 = fVar37 - 9.223372e+18;
              }
              function_464e90(*(uint64_t *)(*(int64_t *)(param_1 + 0xd0) + (int64_t)fVar37 * 8),
                            &local_var_1a8,0);
              stack_special_x_8._0_4_ = iVar32 + 1;
              pfVar34 = (float *)(uint64_t)(uint)stack_special_x_8;
              lVar23 = *(int64_t *)(param_1 + 0xd8);
              lVar21 = *(int64_t *)(param_1 + 0xd0);
            } while ((uint64_t)(int64_t)(int)(uint)stack_special_x_8 < (lVar23 - lVar21 >> 3) - 1U);
          }
          lVar23 = lVar23 - lVar21 >> 3;
          puVar17 = *(uint64_t **)(lVar21 + -8 + lVar23 * 8);
          local_var_1a8 = *puVar17;
          local_var_1a0 = puVar17[1];
          local_var_198 = puVar17[2];
          local_var_190 = puVar17[3];
          local_var_188 = puVar17[4];
          local_var_180 = puVar17[5];
          local_var_178 = puVar17[6];
          local_var_170 = puVar17[7];
          stack_special_x_8._0_4_ = (int)lVar23 - 2;
          puVar18 = puVar1;
          puVar17 = *(uint64_t **)(param_1 + 400);
          while (puVar17 != (uint64_t *)0x0) {
            if (*(int *)(puVar17 + 4) < (int)(uint)stack_special_x_8) {
              puVar17 = (uint64_t *)*puVar17;
            }
            else {
              puVar18 = puVar17;
              puVar17 = (uint64_t *)puVar17[1];
            }
          }
          if ((puVar18 == puVar1) || ((int)(uint)stack_special_x_8 < *(int *)(puVar18 + 4))) {
            puVar18 = (uint64_t *)
                      function_4695d0(puVar1,afStackX_10,(uint)stack_special_x_8,puVar18,&stack_special_x_8);
            puVar18 = (uint64_t *)*puVar18;
          }
          lVar23 = SystemFunction_00018066b9a0(puVar18 + 5);
          local_var_1a8 = *(uint64_t *)(lVar23 + 0x24);
          local_var_1a0 = *(uint64_t *)(lVar23 + 0x2c);
          local_var_198 = *(uint64_t *)(lVar23 + 0x34);
          local_var_190 = *(uint64_t *)(lVar23 + 0x3c);
          local_var_188 = *(uint64_t *)(lVar23 + 0x44);
          local_var_180 = *(uint64_t *)(lVar23 + 0x4c);
          lVar23 = (*(int64_t *)(param_1 + 0xd8) - *(int64_t *)(param_1 + 0xd0) >> 3) + -1;
          fVar37 = (float)lVar23;
          if (lVar23 < 0) {
            fVar37 = fVar37 + 1.8446744e+19;
          }
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          if (9.223372e+18 <= fVar37) {
            fVar37 = fVar37 - 9.223372e+18;
          }
          function_464e90(*(uint64_t *)(*(int64_t *)(param_1 + 0xd0) + (int64_t)fVar37 * 8),
                        &local_var_1a8,0);
        }
        pppppppuVar2 = ppppppplocal_var_1c8;
        if (ppppppplocal_var_1c8 == (uint64_t *******)0x0) {
          return;
        }
        SystemCache_Manager(&ppppppplocal_var_1d8,*ppppppplocal_var_1c8);
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(pppppppuVar2);
      }
      fStack_168 = (float)(iVar32 + 1);
      local_var_164 = 0;
      lVar23 = SystemFunction_0001804662e0(param_1,fStack_168);
      fStack_160 = (float)iVar32;
      local_var_15c = 0;
      lVar21 = SystemFunction_0001804662e0(param_1,fStack_160);
      fVar40 = *(float *)(lVar23 + 0x30) - *(float *)(lVar21 + 0x30);
      fVar39 = *(float *)(lVar23 + 0x34) - *(float *)(lVar21 + 0x34);
      fVar35 = *(float *)(lVar23 + 0x38) - *(float *)(lVar21 + 0x38);
      fVar40 = 0.05 / SQRT(fVar39 * fVar39 + fVar40 * fVar40 + fVar35 * fVar35);
      fVar39 = 0.0;
    }
    function_466610(param_1,&local_var_158);
    fVar37 = (fStack_124 - fVar42) * (fStack_124 - fVar42) +
             (fStack_128 - fVar37) * (fStack_128 - fVar37) +
             (fStack_120 - fVar41) * (fStack_120 - fVar41);
    fVar38 = fVar38 + SQRT(fVar37);
    pppppppuVar24 = &ppppppplocal_var_1d8;
    pppppppuVar2 = ppppppplocal_var_1c8;
    while (pppppppuVar2 != (uint64_t *******)0x0) {
      if (*(float *)(pppppppuVar2 + 4) <= fVar38 && fVar38 != *(float *)(pppppppuVar2 + 4)) {
        pppppppuVar2 = (uint64_t *******)*pppppppuVar2;
      }
      else {
        pppppppuVar24 = pppppppuVar2;
        pppppppuVar2 = (uint64_t *******)pppppppuVar2[1];
      }
    }
    afStackX_10[0] = fVar38;
    if (((uint64_t ********)pppppppuVar24 == &ppppppplocal_var_1d8) ||
       (fVar38 < *(float *)(pppppppuVar24 + 4))) {
      puVar17 = (uint64_t *)
                function_469830(&ppppppplocal_var_1d8,stack_array_f8,fVar37,pppppppuVar24,afStackX_10);
      pppppppuVar24 = (uint64_t *******)*puVar17;
    }
    uVar6 = local_var_150;
    uVar5 = local_var_158;
    *(uint64_t *)((int64_t)pppppppuVar24 + 0x24) = local_var_158;
    *(uint64_t *)((int64_t)pppppppuVar24 + 0x2c) = uVar6;
    uVar8 = local_var_140;
    uVar7 = local_var_148;
    *(uint64_t *)((int64_t)pppppppuVar24 + 0x34) = local_var_148;
    *(uint64_t *)((int64_t)pppppppuVar24 + 0x3c) = uVar8;
    uVar10 = local_var_130;
    uVar9 = local_var_138;
    *(uint64_t *)((int64_t)pppppppuVar24 + 0x44) = local_var_138;
    *(uint64_t *)((int64_t)pppppppuVar24 + 0x4c) = uVar10;
    uVar16 = local_var_11c;
    fVar41 = fStack_120;
    fVar42 = fStack_124;
    fVar37 = fStack_128;
    *(float *)((int64_t)pppppppuVar24 + 0x54) = fStack_128;
    *(float *)(pppppppuVar24 + 0xb) = fVar42;
    *(float *)((int64_t)pppppppuVar24 + 0x5c) = fVar41;
    *(int32_t *)(pppppppuVar24 + 0xc) = uVar16;
    uVar11 = local_var_110;
    *(uint64_t *)((int64_t)pppppppuVar24 + 100) = local_var_118;
    *(uint64_t *)((int64_t)pppppppuVar24 + 0x6c) = uVar11;
    local_var_1a8 = uVar5;
    local_var_1a0 = uVar6;
    local_var_198 = uVar7;
    local_var_190 = uVar8;
    local_var_188 = uVar9;
    local_var_180 = uVar10;
    fVar39 = fVar39 + fVar40;
    local_var_178 = CONCAT44(fVar42,fVar37);
    local_var_170 = CONCAT44(uVar16,fVar41);
    fVar35 = fVar36;
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address