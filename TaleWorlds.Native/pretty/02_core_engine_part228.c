#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// 02_core_engine_part228.c - 1 个函数

// 函数: void FUN_18019eb40(int64_t param_1)
void FUN_18019eb40(int64_t param_1)

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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_18019eb80(int64_t param_1,int64_t *param_2)

{
  int iVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  char cVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t *plVar11;
  int64_t lVar12;
  int iVar13;
  int64_t lVar14;
  int64_t **pplVar15;
  uint uVar16;
  int64_t lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint64_t *puVar35;
  uint64_t uStack_358;
  uint64_t uStack_350;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  int32_t uStack_33c;
  uint64_t uStack_338;
  uint64_t uStack_330;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  int32_t uStack_31c;
  float fStack_318;
  float fStack_308;
  float fStack_2f8;
  int iStack_2f4;
  uint64_t uStack_2f0;
  int64_t lStack_2e8;
  int64_t **pplStack_2e0;
  int64_t *plStack_2d8;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  int iStack_2c0;
  int iStack_2bc;
  uint64_t uStack_2b8;
  uint64_t uStack_2b0;
  uint64_t uStack_2a8;
  uint64_t uStack_2a0;
  uint64_t uStack_298;
  uint64_t uStack_290;
  uint64_t uStack_288;
  uint64_t uStack_280;
  uint64_t *puStack_278;
  int64_t *plStack_270;
  uint64_t uStack_268;
  uint64_t uStack_260;
  int32_t uStack_258;
  float fStack_254;
  uint64_t uStack_250;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  int32_t uStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  int32_t uStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  int32_t uStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  int32_t uStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  int32_t uStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  int32_t uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  int32_t uStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  int32_t uStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  int32_t uStack_1bc;
  int32_t uStack_1b8;
  float fStack_1b4;
  int32_t uStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t uStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  int32_t uStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  int32_t uStack_17c;
  int64_t *plStack_178;
  int64_t *plStack_170;
  int64_t *plStack_168;
  int64_t lStack_160;
  int64_t *plStack_158;
  int64_t lStack_150;
  int64_t lStack_148;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  int64_t lStack_118;
  int64_t lStack_110;
  uint64_t uStack_f8;
  int64_t *plStack_f0;
  int64_t *plStack_e8;
  
  uStack_f8 = 0xfffffffffffffffe;
  uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,3);
  plVar8 = (int64_t *)RenderingSystem_ShaderManager(uVar7);
  (**(code **)(*plVar8 + 0x100))(plVar8,0);
  lVar14 = *param_2;
  lVar17 = param_2[1] - lVar14 >> 3;
  if (lVar17 != 0) {
    iVar19 = -10000;
    iVar18 = 10000;
    plVar2 = *(int64_t **)(*(int64_t *)(param_1 + 0x60b80) + 0x40);
    lVar12 = *plVar2;
    plVar11 = plVar2;
    if (lVar12 == 0) {
      plVar11 = plVar2 + 1;
      lVar12 = *plVar11;
      while (lVar12 == 0) {
        plVar11 = plVar11 + 1;
        lVar12 = *plVar11;
      }
    }
    while (lVar12 != plVar2[*(int64_t *)(*(int64_t *)(param_1 + 0x60b80) + 0x48)]) {
      if (*(int64_t *)(lVar12 + 8) != 0) {
        fVar24 = *(float *)(*(int64_t *)(lVar12 + 8) + 0x7c);
        if ((float)iVar19 < fVar24) {
          iVar19 = (int)fVar24;
        }
        if (fVar24 < (float)iVar18) {
          iVar18 = (int)fVar24;
        }
      }
      lVar12 = *(int64_t *)(lVar12 + 0x10);
      while (lVar12 == 0) {
        plVar11 = plVar11 + 1;
        lVar12 = *plVar11;
      }
    }
    iVar19 = iVar19 + 5;
    iVar18 = iVar18 + -5;
    iStack_2f4 = 0;
    iStack_2c0 = iVar18;
    iStack_2bc = iVar19;
    if (lVar17 != 1) {
      uStack_1fc = 0x7f7fffff;
      uStack_1dc = 0x7f7fffff;
      uStack_21c = 0x7f7fffff;
      uStack_1ec = 0x7f7fffff;
      uStack_20c = 0x7f7fffff;
      uStack_22c = 0x7f7fffff;
      lStack_160 = 0;
      do {
        iVar13 = iStack_2f4;
        lVar17 = *(int64_t *)(lStack_160 + lVar14);
        lStack_160 = lStack_160 + 8;
        lVar14 = *(int64_t *)(lStack_160 + lVar14);
        fVar24 = *(float *)(lVar17 + 0xa4);
        fVar30 = *(float *)(lVar17 + 0xa8);
        uStack_280 = *(uint64_t *)(lVar17 + 0xa8);
        uStack_338 = *(int64_t **)(lVar14 + 0x90);
        uStack_330 = *(int64_t **)(lVar14 + 0x98);
        fStack_124 = *(float *)(lVar14 + 0xa8);
        fStack_1e0 = *(float *)(lVar17 + 0x78) * 0.5;
        fStack_1e4 = *(float *)(lVar17 + 0x74) * 0.5;
        fStack_1e8 = *(float *)(lVar17 + 0x70) * 0.5;
        fVar27 = fStack_1e0 + fVar30;
        fStack_2f8 = fStack_1e4 + fVar24;
        fVar33 = fStack_1e8 + *(float *)(lVar17 + 0xa0);
        fStack_1e0 = fVar30 - fStack_1e0;
        uStack_298 = CONCAT44(fVar30,fStack_1e0);
        uStack_290 = CONCAT44(fVar30,fVar30);
        fStack_1e4 = fVar24 - fStack_1e4;
        uStack_2b8 = CONCAT44(fVar24,fStack_1e4);
        uStack_2b0 = CONCAT44(fVar24,fVar24);
        fStack_1e8 = *(float *)(lVar17 + 0xa0) - fStack_1e8;
        uStack_288 = CONCAT44(fVar24,fStack_1e8);
        fVar24 = *(float *)(lVar14 + 0x78) * 0.5;
        fVar21 = *(float *)(lVar14 + 0x74) * 0.5;
        fVar25 = *(float *)(lVar14 + 0x70) * 0.5;
        fVar28 = fVar24 + fStack_124;
        fVar26 = fVar21 + *(float *)(lVar14 + 0xa4);
        fVar30 = fVar25 + *(float *)(lVar14 + 0xa0);
        fVar24 = fStack_124 - fVar24;
        fVar21 = *(float *)(lVar14 + 0xa4) - fVar21;
        fVar25 = *(float *)(lVar14 + 0xa0) - fVar25;
        fStack_218 = *(float *)(lVar17 + 0x80) * -10.0;
        fStack_214 = -*(float *)(lVar17 + 0x84) * 10.0;
        fStack_210 = -*(float *)(lVar17 + 0x88) * 10.0;
        fStack_238 = *(float *)(lVar14 + 0x80) * -10.0;
        fStack_234 = -*(float *)(lVar14 + 0x84) * 10.0;
        fStack_230 = -*(float *)(lVar14 + 0x88) * 10.0;
        fStack_318 = fVar30;
        fStack_308 = fVar33;
        fStack_228 = fVar30;
        fStack_224 = fVar26;
        fStack_220 = fVar28;
        fStack_208 = fVar33;
        fStack_204 = fStack_2f8;
        fStack_200 = fVar27;
        fStack_1f8 = fVar25;
        fStack_1f4 = fVar21;
        fStack_1f0 = fVar24;
        fStack_128 = fVar24;
        fStack_120 = fStack_124;
        fStack_11c = fStack_124;
        if (*(int64_t *)(lVar17 + 0xf8) - (int64_t)*(uint64_t **)(lVar17 + 0xf0) >> 3 != 0) {
          (**(code **)(*(int64_t *)**(uint64_t **)(lVar17 + 0xf0) + 0x178))();
        }
        if (*(int64_t *)(lVar14 + 0xf8) - (int64_t)*(uint64_t **)(lVar14 + 0xf0) >> 3 != 0) {
          (**(code **)(*(int64_t *)**(uint64_t **)(lVar14 + 0xf0) + 0x178))();
        }
        if (iVar13 != 0) {
          if (*(int64_t *)(lVar17 + 0xf8) - (int64_t)*(uint64_t **)(lVar17 + 0xf0) >> 3 != 0) {
            (**(code **)(*(int64_t *)**(uint64_t **)(lVar17 + 0xf0) + 0x178))();
          }
          lVar14 = core_system_data_memory;
          fStack_2c8 = (float)lStack_2e8;
          puStack_278 = (uint64_t *)CONCAT44(puStack_278._4_4_,uStack_2f0._4_4_);
          fStack_2c4 = ((float)lStack_2e8 + (float)uStack_2a0) * 0.5;
          fStack_2d0 = (uStack_2f0._4_4_ + uStack_2a8._4_4_) * 0.5;
          fVar24 = (float)uStack_2f0;
          fVar32 = ((float)uStack_2f0 + (float)uStack_2a8) * 0.5;
          fVar29 = ((float)uStack_298 + fVar27) * 0.5;
          fVar31 = ((float)uStack_2b8 + fStack_2f8) * 0.5;
          fStack_2cc = ((float)uStack_288 + fVar33) * 0.5;
          fVar33 = fStack_2c4 - fVar29;
          fStack_244 = fStack_2d0 - fVar31;
          fStack_248 = fVar32 - fStack_2cc;
          uStack_23c = 0x7f7fffff;
          fVar34 = fStack_248 * fStack_248 + fStack_244 * fStack_244 + fVar33 * fVar33;
          auVar22 = rsqrtss(ZEXT416((uint)fVar34),ZEXT416((uint)fVar34));
          fVar30 = auVar22._0_4_;
          fStack_240 = fVar30 * 0.5 * (3.0 - fVar34 * fVar30 * fVar30);
          fStack_248 = fStack_240 * fStack_248;
          fStack_244 = fStack_240 * fStack_244;
          uStack_2f0 = (int64_t **)CONCAT44(uStack_2f0._4_4_,fStack_244);
          fStack_240 = fStack_240 * fVar33;
          uStack_268 = 0;
          uStack_260 = 0x7f7fffff3f800000;
          fStack_194 = -fStack_248;
          fStack_190 = 0.0;
          uStack_18c = 0x7f7fffff;
          fStack_198 = fStack_244;
          if (*(int64_t *)(core_system_data_memory + 0x350) == 0) {
            puVar9 = (uint64_t *)FUN_180094e80();
            uVar7 = *puVar9;
            *puVar9 = 0;
            plStack_178 = *(int64_t **)(lVar14 + 0x350);
            *(uint64_t *)(lVar14 + 0x350) = uVar7;
            if (plStack_178 != (int64_t *)0x0) {
              (**(code **)(*plStack_178 + 0x38))();
            }
            if (plStack_170 != (int64_t *)0x0) {
              (**(code **)(*plStack_170 + 0x38))();
            }
          }
          plVar11 = *(int64_t **)(lVar14 + 0x350);
          plStack_e8 = plVar11;
          if (plVar11 != (int64_t *)0x0) {
            (**(code **)(*plVar11 + 0x28))(plVar11);
          }
          SystemCore_BufferManager(plVar11,&pplStack_2e0);
          if (plVar11 != (int64_t *)0x0) {
            (**(code **)(*plVar11 + 0x38))(plVar11);
          }
          fStack_1a0 = (fVar29 + fStack_2c4) * 0.5;
          fStack_324 = (fVar31 + fStack_2d0) * 0.5;
          fStack_328 = (fVar32 + fStack_2cc) * 0.5;
          uStack_19c = 0x7f7fffff;
          uStack_31c = 0x7f7fffff;
          fStack_320 = (float)(iVar18 + iVar19) * 0.5;
          uStack_33c = uStack_23c;
          fVar34 = SQRT(fVar34);
          fVar30 = SQRT((fVar24 - (float)uStack_2a8) * (fVar24 - (float)uStack_2a8) +
                        (puStack_278._0_4_ - uStack_2a8._4_4_) *
                        (puStack_278._0_4_ - uStack_2a8._4_4_) +
                        (fStack_2c8 - (float)uStack_2a0) * (fStack_2c8 - (float)uStack_2a0));
          fVar24 = (float)((iVar19 - iVar18) + 10);
          uStack_358 = (int64_t *)CONCAT44(fStack_194 * fVar30,fVar30 * (float)uStack_2f0);
          uStack_350 = (int64_t *)CONCAT44(uStack_18c,fStack_190 * fVar30);
          fStack_348 = fStack_248 * fVar34;
          fStack_344 = fStack_244 * fVar34;
          fStack_340 = fStack_240 * fVar34;
          uStack_338 = (int64_t *)
                       CONCAT44((float)((uint64_t)uStack_268 >> 0x20) * fVar24,
                                (float)uStack_268 * fVar24);
          uStack_330 = (int64_t *)CONCAT44(uStack_260._4_4_,(float)uStack_260 * fVar24);
          uVar16 = *(uint *)(pplStack_2e0 + 0x20) & 0xfbffffff;
          *(uint *)(pplStack_2e0 + 0x20) = uVar16;
          pplVar15 = pplStack_2e0;
          fStack_1a8 = fStack_328;
          fStack_1a4 = fStack_324;
          cVar6 = FUN_1800861a0(&uStack_358);
          if (cVar6 == '\0') {
            *(uint *)(pplVar15 + 0x20) = uVar16 | 0x4000000;
          }
          pplVar15[0x24] = uStack_358;
          pplVar15[0x25] = uStack_350;
          pplVar15[0x26] = (int64_t *)CONCAT44(fStack_344,fStack_348);
          pplVar15[0x27] = (int64_t *)CONCAT44(uStack_33c,fStack_340);
          pplVar15[0x28] = uStack_338;
          pplVar15[0x29] = uStack_330;
          *(float *)(pplVar15 + 0x2a) = fStack_328;
          *(float *)((int64_t)pplVar15 + 0x154) = fStack_324;
          *(float *)(pplVar15 + 0x2b) = fStack_320;
          *(int32_t *)((int64_t)pplVar15 + 0x15c) = uStack_31c;
          plVar11 = pplVar15[0x39];
          if (plVar11 != (int64_t *)0x0) {
            if (*(code **)(*plVar11 + 0x160) == (code *)&processed_var_6368_ptr) {
              SystemCore_UpdateState(plVar11,(int64_t)plVar11 + 0x214,0);
            }
            else {
              (**(code **)(*plVar11 + 0x160))();
            }
          }
          fStack_254 = fVar34 / fVar30;
          uStack_258 = 0x3f800000;
          uStack_250 = 0;
          *(int32_t *)(pplStack_2e0 + 0x55) = 0x3f800000;
          *(float *)((int64_t)pplStack_2e0 + 0x2ac) = fStack_254;
          *(int32_t *)(pplStack_2e0 + 0x56) = 0;
          *(int32_t *)((int64_t)pplStack_2e0 + 0x2b4) = 0;
          puStack_278 = &uStack_2f0;
          uStack_2f0 = pplStack_2e0;
          if (pplStack_2e0 != (int64_t **)0x0) {
            (*(code *)(*pplStack_2e0)[5])();
          }
          FUN_180275cf0(plVar8,0,&uStack_2f0,1);
          fVar24 = fStack_128;
          fVar30 = fStack_318;
          fVar33 = fStack_308;
          if (pplStack_2e0 != (int64_t **)0x0) {
            (*(code *)(*pplStack_2e0)[7])();
            fVar24 = fStack_128;
            fVar30 = fStack_318;
            fVar33 = fStack_308;
          }
        }
        fVar24 = SQRT((fVar21 - (float)uStack_2b8) * (fVar21 - (float)uStack_2b8) +
                      (fVar25 - (float)uStack_288) * (fVar25 - (float)uStack_288) +
                      (fVar24 - (float)uStack_298) * (fVar24 - (float)uStack_298));
        fVar30 = SQRT((fVar26 - fStack_2f8) * (fVar26 - fStack_2f8) +
                      (fVar30 - fVar33) * (fVar30 - fVar33) + (fVar28 - fVar27) * (fVar28 - fVar27))
        ;
        if (fVar24 <= fVar30) {
          fVar24 = fVar30;
        }
        iVar13 = (int)((double)(int)fVar24 * 1.5);
        uVar7 = CONCAT44(fStack_234,fStack_238);
        uVar3 = CONCAT44(uStack_22c,fStack_230);
        uStack_288 = CONCAT44(fStack_224,fStack_228);
        uStack_280 = CONCAT44(uStack_21c,fStack_220);
        uVar4 = CONCAT44(fStack_214,fStack_218);
        uVar5 = CONCAT44(uStack_20c,fStack_210);
        uStack_298 = CONCAT44(fStack_204,fStack_208);
        uStack_290 = CONCAT44(uStack_1fc,fStack_200);
        uStack_2b8 = uVar4;
        uStack_2b0 = uVar5;
        uStack_268 = uVar7;
        uStack_260 = uVar3;
        FUN_1801a20e0();
        uStack_288 = CONCAT44(fStack_1f4,fStack_1f8);
        uStack_280 = CONCAT44(uStack_1ec,fStack_1f0);
        uStack_298 = CONCAT44(fStack_1e4,fStack_1e8);
        uStack_290 = CONCAT44(uStack_1dc,fStack_1e0);
        puVar9 = &uStack_268;
        puVar35 = &uStack_288;
        uStack_2b8 = uVar4;
        uStack_2b0 = uVar5;
        uStack_268 = uVar7;
        uStack_260 = uVar3;
        FUN_1801a20e0();
        if (*(int64_t *)(lVar17 + 0xf8) - (int64_t)*(uint64_t **)(lVar17 + 0xf0) >> 3 != 0) {
          (**(code **)(*(int64_t *)**(uint64_t **)(lVar17 + 0xf0) + 0x178))();
        }
        iVar20 = 0;
        if (lStack_148 - lStack_150 >> 4 != 1) {
          uStack_1bc = 0x7f7fffff;
          fStack_180 = 0.0;
          uStack_17c = 0x7f7fffff;
          uStack_1cc = 0x7f7fffff;
          iVar1 = iVar18 + iVar19;
          fVar30 = (float)((iVar19 - iVar18) + 10);
          uStack_1b8 = 0x3f800000;
          uStack_1b0 = 0;
          lVar14 = 0;
          fVar24 = 0.0;
          do {
            lVar17 = core_system_data_memory;
            fVar34 = (*(float *)(lStack_150 + 8 + lVar14) + *(float *)(lStack_118 + 8 + lVar14)) *
                     0.5;
            fVar29 = (*(float *)(lStack_150 + 4 + lVar14) + *(float *)(lStack_118 + 4 + lVar14)) *
                     0.5;
            fVar28 = (*(float *)(lStack_150 + lVar14) + *(float *)(lStack_118 + lVar14)) * 0.5;
            fVar26 = (*(float *)(lStack_150 + 0x18 + lVar14) +
                     *(float *)(lStack_118 + 0x18 + lVar14)) * 0.5;
            fVar27 = (*(float *)(lStack_150 + 0x14 + lVar14) +
                     *(float *)(lStack_118 + 0x14 + lVar14)) * 0.5;
            fVar31 = (*(float *)(lStack_150 + 0x10 + lVar14) +
                     *(float *)(lStack_118 + 0x10 + lVar14)) * 0.5;
            fStack_1c0 = fVar34 - fVar26;
            fVar25 = fVar29 - fVar27;
            fStack_1c8 = fVar28 - fVar31;
            fVar21 = fStack_1c8 * fStack_1c8 + fVar25 * fVar25 + fStack_1c0 * fStack_1c0;
            auVar22 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
            fVar33 = auVar22._0_4_;
            auVar22._8_4_ = 0x40400000;
            auVar22._0_8_ = 0x4040000040400000;
            auVar22._12_4_ = 0x40400000;
            auVar23._4_12_ = auVar22._4_12_;
            auVar23._0_4_ = 3.0 - fVar21 * fVar33 * fVar33;
            fVar33 = (float)system_data_fc80 * fVar33 * auVar23._0_4_;
            fStack_1c8 = fStack_1c8 * fVar33;
            fVar25 = fVar25 * fVar33;
            fStack_1c0 = fStack_1c0 * fVar33;
            fStack_184 = -fStack_1c8;
            fStack_1c4 = fVar25;
            fStack_188 = fVar25;
            if (*(int64_t *)(core_system_data_memory + 0x350) == 0) {
              puVar10 = (uint64_t *)
                        FUN_180094e80(auVar23._0_8_,&plStack_168,&system_data_35c0,fStack_184,puVar35,
                                      puVar9,iVar13);
              uVar7 = *puVar10;
              *puVar10 = 0;
              plStack_158 = *(int64_t **)(lVar17 + 0x350);
              *(uint64_t *)(lVar17 + 0x350) = uVar7;
              if (plStack_158 != (int64_t *)0x0) {
                (**(code **)(*plStack_158 + 0x38))();
              }
              if (plStack_168 != (int64_t *)0x0) {
                (**(code **)(*plStack_168 + 0x38))();
              }
            }
            plVar11 = *(int64_t **)(lVar17 + 0x350);
            plStack_f0 = plVar11;
            if (plVar11 != (int64_t *)0x0) {
              (**(code **)(*plVar11 + 0x28))(plVar11);
            }
            SystemCore_BufferManager(plVar11,&plStack_2d8);
            if (plVar11 != (int64_t *)0x0) {
              (**(code **)(*plVar11 + 0x38))(plVar11);
            }
            fStack_1d0 = (fVar26 + fVar34) * 0.5;
            fStack_324 = (fVar27 + fVar29) * 0.5;
            fStack_328 = (fVar28 + fVar31) * 0.5;
            uStack_31c = uStack_1cc;
            uStack_33c = uStack_1bc;
            fVar21 = SQRT(fVar21);
            fVar27 = *(float *)(lStack_150 + 8 + lVar14) - *(float *)(lStack_118 + 8 + lVar14);
            fVar33 = *(float *)(lStack_150 + 4 + lVar14) - *(float *)(lStack_118 + 4 + lVar14);
            fVar26 = *(float *)(lStack_150 + lVar14) - *(float *)(lStack_118 + lVar14);
            fStack_1b4 = SQRT(fVar26 * fVar26 + fVar33 * fVar33 + fVar27 * fVar27);
            uStack_358 = (int64_t *)CONCAT44(fStack_184 * fStack_1b4,fVar25 * fStack_1b4);
            uStack_350 = (int64_t *)CONCAT44(uStack_17c,fStack_180 * fStack_1b4);
            fStack_348 = fStack_1c8 * fVar21;
            fStack_344 = fStack_1c4 * fVar21;
            fStack_340 = fStack_1c0 * fVar21;
            uStack_338 = (int64_t *)CONCAT44(fVar30 * 0.0,fVar30 * 0.0);
            uStack_330 = (int64_t *)CONCAT44(0x7f7fffff,fVar30 * 1.0);
            fStack_1b4 = fVar21 / fStack_1b4;
            *(int32_t *)(plStack_2d8 + 0x55) = uStack_1b8;
            *(float *)((int64_t)plStack_2d8 + 0x2ac) = fStack_1b4;
            *(int32_t *)(plStack_2d8 + 0x56) = uStack_1b0;
            *(float *)((int64_t)plStack_2d8 + 0x2b4) = fVar24;
            fVar33 = fVar24 + fStack_1b4;
            if (1.0 < fVar33) {
              fVar33 = fVar33 - 1.0;
            }
            uVar16 = *(uint *)(plStack_2d8 + 0x20) & 0xfbffffff;
            *(uint *)(plStack_2d8 + 0x20) = uVar16;
            plVar11 = plStack_2d8;
            fStack_320 = (float)iVar1 * 0.5;
            fStack_1d8 = fStack_328;
            fStack_1d4 = fStack_324;
            fStack_1ac = fVar24;
            cVar6 = FUN_1800861a0(&uStack_358);
            if (cVar6 == '\0') {
              *(uint *)(plVar11 + 0x20) = uVar16 | 0x4000000;
            }
            plVar11[0x24] = (int64_t)uStack_358;
            plVar11[0x25] = (int64_t)uStack_350;
            plVar11[0x26] = CONCAT44(fStack_344,fStack_348);
            plVar11[0x27] = CONCAT44(uStack_33c,fStack_340);
            plVar11[0x28] = (int64_t)uStack_338;
            plVar11[0x29] = (int64_t)uStack_330;
            *(float *)(plVar11 + 0x2a) = fStack_328;
            *(float *)((int64_t)plVar11 + 0x154) = fStack_324;
            *(float *)(plVar11 + 0x2b) = fStack_320;
            *(int32_t *)((int64_t)plVar11 + 0x15c) = uStack_31c;
            plVar11 = (int64_t *)plVar11[0x39];
            if (plVar11 != (int64_t *)0x0) {
              if (*(code **)(*plVar11 + 0x160) == (code *)&processed_var_6368_ptr) {
                SystemCore_UpdateState(plVar11,(int64_t)plVar11 + 0x214,0);
              }
              else {
                (**(code **)(*plVar11 + 0x160))();
              }
            }
            uStack_2f0 = &plStack_270;
            plStack_270 = plStack_2d8;
            if (plStack_2d8 != (int64_t *)0x0) {
              (**(code **)(*plStack_2d8 + 0x28))();
            }
            FUN_180275cf0(plVar8,0,&plStack_270,1);
            if (plStack_2d8 != (int64_t *)0x0) {
              (**(code **)(*plStack_2d8 + 0x38))();
            }
            iVar20 = iVar20 + 1;
            lVar14 = lVar14 + 0x10;
            fVar24 = fVar33;
            iVar18 = iStack_2c0;
            iVar19 = iStack_2bc;
          } while ((uint64_t)(int64_t)iVar20 < (lStack_148 - lStack_150 >> 4) - 1U);
        }
        puVar9 = (uint64_t *)
                 (((lStack_110 - lStack_118 & 0xfffffffffffffff0U) - 0x10) + lStack_118);
        uStack_2a8 = *puVar9;
        uStack_2a0 = puVar9[1];
        plVar11 = (int64_t *)
                  (((lStack_148 - lStack_150 & 0xfffffffffffffff0U) - 0x10) + lStack_150);
        uStack_2f0 = (int64_t **)*plVar11;
        lStack_2e8 = plVar11[1];
        if (lStack_118 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        if (lStack_150 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        iStack_2f4 = iStack_2f4 + 1;
        lVar14 = *param_2;
      } while ((uint64_t)(int64_t)iStack_2f4 < (param_2[1] - lVar14 >> 3) - 1U);
    }
    SystemCore_UpdateState(plVar8,(int64_t)plVar8 + 0x214,CONCAT71((int7)((uint64_t)lVar14 >> 8),1));
    (**(code **)(*plVar8 + 0x148))(plVar8,&system_data_0300);
  }
  return plVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



