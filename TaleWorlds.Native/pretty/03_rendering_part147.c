#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part147.c - 8 个函数

// 函数: void FUN_18035bbd0(int64_t *param_1)
void FUN_18035bbd0(int64_t *param_1)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  code *pcVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  uint64_t *puVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int64_t *plVar20;
  float *pfVar21;
  void *puVar22;
  int64_t lVar23;
  int iVar24;
  uint64_t *puVar25;
  uint64_t *puVar26;
  uint64_t uVar27;
  uint uVar28;
  int64_t lVar30;
  int iVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  int64_t lStackX_20;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  int64_t *plStack_2c8;
  int64_t *plStack_2c0;
  int8_t auStack_2b8 [8];
  uint64_t uStack_2b0;
  int64_t *plStack_2a0;
  char cStack_298;
  char cStack_297;
  char cStack_296;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  uint64_t *puStack_280;
  uint64_t *puStack_278;
  uint64_t *puStack_270;
  int32_t uStack_268;
  uint64_t uStack_258;
  uint64_t uStack_250;
  uint64_t uStack_248;
  uint64_t uStack_240;
  uint64_t uStack_238;
  uint64_t uStack_230;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  int64_t *plStack_218;
  int64_t *plStack_210;
  uint64_t uStack_208;
  int32_t uStack_200;
  uint64_t uStack_1f8;
  uint64_t uStack_1f0;
  uint64_t uStack_1e8;
  uint64_t uStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  uint64_t uStack_198;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  int32_t uStack_108;
  float fStack_104;
  int64_t **pplStack_100;
  int64_t **pplStack_f8;
  uint64_t *puVar29;
  
  uStack_198 = 0xfffffffffffffffe;
  if (((int)(*(int64_t *)(param_1[0x21] + 0xd8) - *(int64_t *)(param_1[0x21] + 0xd0) >> 3) != 0)
     && (param_1[0x12] != 0)) {
    param_1[0x25] = -0x368bdc0f368bdc10;
    param_1[0x26] = 0x7f7fffffc97423f0;
    *(int32_t *)(param_1 + 0x27) = 0x497423f0;
    *(int32_t *)((int64_t)param_1 + 0x13c) = 0x497423f0;
    *(int32_t *)(param_1 + 0x28) = 0x497423f0;
    *(int32_t *)((int64_t)param_1 + 0x144) = 0x7f7fffff;
    puStack_280 = (uint64_t *)0x0;
    puStack_278 = (uint64_t *)0x0;
    puVar25 = (uint64_t *)0x0;
    puStack_270 = (uint64_t *)0x0;
    uStack_268 = 3;
    lStackX_20 = param_1[0x21];
    pplStackX_10 = (int64_t **)((uint64_t)pplStackX_10 & 0xffffffff00000000);
    lVar30 = *(int64_t *)(lStackX_20 + 0xd0);
    plStackX_8 = param_1;
    if (*(int64_t *)(lStackX_20 + 0xd8) - lVar30 >> 3 != 0) {
      pplStackX_18 = (int64_t **)0x0;
      puVar26 = (uint64_t *)0x0;
      puVar29 = puVar25;
      do {
        puVar8 = puStack_278;
        puVar1 = *(uint64_t **)((int64_t)pplStackX_18 + lVar30);
        if (puStack_278 < puVar25) {
          uVar18 = puVar1[1];
          *puStack_278 = *puVar1;
          puStack_278[1] = uVar18;
          uVar18 = puVar1[3];
          puStack_278[2] = puVar1[2];
          puStack_278[3] = uVar18;
          uVar18 = puVar1[5];
          puStack_278[4] = puVar1[4];
          puStack_278[5] = uVar18;
          uVar5 = *(int32_t *)((int64_t)puVar1 + 0x34);
          uVar6 = *(int32_t *)(puVar1 + 7);
          uVar7 = *(int32_t *)((int64_t)puVar1 + 0x3c);
          *(int32_t *)(puStack_278 + 6) = *(int32_t *)(puVar1 + 6);
          *(int32_t *)((int64_t)puStack_278 + 0x34) = uVar5;
          *(int32_t *)(puStack_278 + 7) = uVar6;
          *(int32_t *)((int64_t)puStack_278 + 0x3c) = uVar7;
          puVar17 = puVar26;
          iVar31 = (int)puVar29;
        }
        else {
          lVar23 = (int64_t)puStack_278 - (int64_t)puVar26 >> 6;
          lVar30 = lVar23 * 2;
          if (lVar23 == 0) {
            lVar30 = 1;
          }
          if (lVar30 == 0) {
            puVar17 = (uint64_t *)0x0;
          }
          else {
            puVar17 = (uint64_t *)
                      CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar30 << 6,
                                    CONCAT71((int7)((uint64_t)puStack_278 >> 8),3));
          }
          if (puVar26 != puVar8) {
                    // WARNING: Subroutine does not return
            memmove(puVar17,puVar26,(int64_t)puVar8 - (int64_t)puVar26);
          }
          uVar18 = puVar1[1];
          *puVar17 = *puVar1;
          puVar17[1] = uVar18;
          uVar18 = puVar1[3];
          puVar17[2] = puVar1[2];
          puVar17[3] = uVar18;
          uVar18 = puVar1[5];
          puVar17[4] = puVar1[4];
          puVar17[5] = uVar18;
          uVar5 = *(int32_t *)((int64_t)puVar1 + 0x34);
          uVar6 = *(int32_t *)(puVar1 + 7);
          uVar7 = *(int32_t *)((int64_t)puVar1 + 0x3c);
          *(int32_t *)(puVar17 + 6) = *(int32_t *)(puVar1 + 6);
          *(int32_t *)((int64_t)puVar17 + 0x34) = uVar5;
          *(int32_t *)(puVar17 + 7) = uVar6;
          *(int32_t *)((int64_t)puVar17 + 0x3c) = uVar7;
          if (puVar26 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(puVar26);
          }
          puVar25 = puVar17 + lVar30 * 8;
          iVar31 = (int)pplStackX_10._0_4_;
          puStack_280 = puVar17;
          puStack_270 = puVar25;
          puStack_278 = puVar17;
        }
        puStack_278 = puStack_278 + 8;
        uVar28 = iVar31 + 1;
        puVar29 = (uint64_t *)(uint64_t)uVar28;
        pplStackX_10 = (int64_t **)CONCAT44(pplStackX_10._4_4_,uVar28);
        pplStackX_18 = pplStackX_18 + 1;
        lVar30 = *(int64_t *)(lStackX_20 + 0xd0);
        puVar26 = puVar17;
      } while ((uint64_t)(int64_t)(int)uVar28 <
               (uint64_t)(*(int64_t *)(lStackX_20 + 0xd8) - lVar30 >> 3));
    }
    puVar25 = puStack_278;
    plVar3 = plStackX_8;
    iVar31 = 0;
    plStack_218 = (int64_t *)0x0;
    plStack_210 = (int64_t *)0x0;
    uStack_208 = 0;
    uStack_200 = 3;
    uVar27 = 10000;
    lVar30 = *(int64_t *)(*(int64_t *)(plStackX_8[3] + 0x20) + 0x60b80);
    if (lVar30 != 0) {
      plVar2 = *(int64_t **)(lVar30 + 0x40);
      lVar23 = *plVar2;
      plVar20 = plVar2;
      if (lVar23 == 0) {
        plVar20 = plVar2 + 1;
        lVar23 = *plVar20;
        while (lVar23 == 0) {
          plVar20 = plVar20 + 1;
          lVar23 = *plVar20;
        }
      }
      iVar24 = -10000;
      while (lVar23 != plVar2[*(int64_t *)(lVar30 + 0x48)]) {
        fVar35 = *(float *)(*(int64_t *)(lVar23 + 8) + 0x7c);
        iVar16 = (int)fVar35;
        if (fVar35 <= (float)iVar24) {
          iVar16 = iVar24;
        }
        if (fVar35 < (float)(int)uVar27) {
          uVar27 = (uint64_t)(uint)(int)fVar35;
        }
        lVar23 = *(int64_t *)(lVar23 + 0x10);
        while (iVar24 = iVar16, lVar23 == 0) {
          plVar20 = plVar20 + 1;
          lVar23 = *plVar20;
        }
      }
    }
    plVar20 = plStackX_8 + 0x22;
    if (*plVar20 == 0) {
      uVar18 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,CONCAT71((int7)(uVar27 >> 8),0x16));
      uVar18 = FUN_180275090(uVar18);
      FUN_180056f10(plVar20,uVar18);
      lVar30 = plVar3[0x23];
      pplStackX_10 = &plStackX_8;
      plStackX_8 = (int64_t *)*plVar20;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
      }
      pplStackX_18 = &plStackX_8;
      FUN_1802edcd0(lVar30,plStackX_8,1);
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
    }
    uVar18 = *(uint64_t *)(plVar3[3] + 0x20);
    FUN_1802e9fa0(plVar3[0x23],1,1);
    lVar30 = plVar3[0x23];
    pplStackX_10 = &plStackX_8;
    plStackX_8 = (int64_t *)*plVar20;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    pplStackX_18 = &plStackX_8;
    FUN_1802edcd0(lVar30,plStackX_8,1);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    (**(code **)(*(int64_t *)*plVar20 + 0xd8))();
    (**(code **)(*(int64_t *)(*plVar20 + 0x1f0) + 0x10))
              ((int64_t *)(*plVar20 + 0x1f0),&memory_allocator_3088_ptr);
    uVar19 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x300,0x10,3);
    plVar20 = (int64_t *)FUN_180075030(uVar19,1);
    pplStackX_18 = (int64_t **)plVar20;
    if (plVar20 != (int64_t *)0x0) {
      (**(code **)(*plVar20 + 0x28))(plVar20);
    }
    (**(code **)(plVar20[2] + 0x10))(plVar20 + 2,&memory_allocator_3072_ptr);
    plStack_2c8 = (int64_t *)0x0;
    plStack_2c0 = (int64_t *)0x0;
    plStackX_8 = (int64_t *)auStack_2b8;
    plStack_2a0 = (int64_t *)0x0;
    uStack_2b0 = 0;
    auStack_2b8[0] = 0;
    FUN_18022f2e0(&plStack_2c8,plVar20,0);
    pfVar21 = (float *)FUN_180466610(plVar3[0x21],&uStack_1e8);
    uStack_248 = *(uint64_t *)(pfVar21 + 4);
    uStack_240 = *(uint64_t *)(pfVar21 + 6);
    uStack_238 = *(uint64_t *)(pfVar21 + 8);
    uStack_230 = *(uint64_t *)(pfVar21 + 10);
    fStack_2cc = pfVar21[0xf];
    fVar35 = (float)(double)plVar3[0x18];
    fStack_2d8 = pfVar21[0xc] - fVar35 * *pfVar21;
    fStack_2d4 = pfVar21[0xd] - fVar35 * pfVar21[1];
    fStack_2d0 = pfVar21[0xe] - fVar35 * pfVar21[2];
    fStack_2e8 = fVar35 * *pfVar21 + pfVar21[0xc];
    fStack_2e4 = pfVar21[0xd] + fVar35 * pfVar21[1];
    fStack_2e0 = pfVar21[0xe] + fVar35 * pfVar21[2];
    fStack_2dc = fStack_2cc;
    if ((char)plVar3[0x19] != '\0') {
      FUN_1801a9fd0(uVar18,&fStack_2d8,0x31b189,&fStack_2d0);
      FUN_1801a9fd0(uVar18,&fStack_2e8,0x31b189,&fStack_2e0);
    }
    fStack_2d0 = fStack_2d0 + (float)(double)plVar3[0x17];
    fStack_2e0 = fStack_2e0 + (float)(double)plVar3[0x17];
    dVar32 = (double)cos((double)plVar3[0x13] * 0.0174532925199433);
    puVar26 = puStack_280;
    fVar35 = (float)dVar32;
    pplStackX_10 = (int64_t **)CONCAT44(pplStackX_10._4_4_,fVar35);
    plStackX_8 = (int64_t *)((uint64_t)plStackX_8 & 0xffffffff00000000);
    lVar30 = (int64_t)puVar25 - (int64_t)puStack_280 >> 6;
    fVar41 = fStack_2d8;
    fVar43 = fStack_2d4;
    fVar45 = fStack_2d0;
    fVar46 = fStack_2cc;
    fVar48 = fStack_2e8;
    fVar50 = fStack_2e4;
    fVar52 = fStack_2e0;
    fVar53 = fStack_2dc;
    if (lVar30 != 1) {
      do {
        iVar24 = 0;
        FUN_180466610(plVar3[0x21],&uStack_1e8);
        uStack_1f8 = uStack_1a8;
        uStack_1f0 = uStack_1a0;
        fStack_2e8 = fStack_1d8;
        fStack_2e4 = fStack_1d4;
        fStack_2e0 = fStack_1d0;
        fStack_2dc = fStack_1cc;
        fStack_290 = fStack_1b8;
        fStack_28c = fStack_1b4;
        fStack_288 = fStack_1b0;
        fStack_284 = fStack_1ac;
        if ((char)plVar3[0x19] != '\0') {
          FUN_1801a9fd0(uVar18,&fStack_290,0x31b189,&fStack_288);
        }
        fVar37 = fStack_288 + (float)(double)plVar3[0x17];
        fVar38 = fStack_2e0;
        fVar39 = fStack_2e4;
        fVar40 = fStack_2e8;
        fVar55 = fStack_28c;
        do {
          iVar24 = iVar24 + 1;
          FUN_180466610(plVar3[0x21],&uStack_1e8,(float)iVar24 * 0.001,iVar31);
          uStack_258 = uStack_1e8;
          uStack_250 = uStack_1e0;
          uStack_248 = CONCAT44(fStack_1d4,fStack_1d8);
          uStack_240 = CONCAT44(fStack_1cc,fStack_1d0);
          uStack_238 = uStack_1c8;
          uStack_230 = uStack_1c0;
          fStack_228 = fStack_1b8;
          fStack_224 = fStack_1b4;
          fStack_220 = fStack_1b0;
          fStack_21c = fStack_1ac;
          if ((char)plVar3[0x19] != '\0') {
            FUN_1801a9fd0(uVar18,&fStack_228,0x31b189,&fStack_220);
          }
          fVar15 = fStack_21c;
          fVar14 = fStack_220;
          fVar13 = fStack_224;
          fVar12 = fStack_228;
          fVar9 = (float)uStack_248;
          fVar10 = uStack_248._4_4_;
          fVar11 = (float)uStack_240;
          fVar36 = SQRT((fStack_228 - fStack_290) * (fStack_228 - fStack_290) +
                        (fStack_224 - fVar55) * (fStack_224 - fVar55) +
                        (fStack_220 - fVar37) * (fStack_220 - fVar37));
          dVar32 = (double)fVar36;
          if ((((double)plVar3[0x14] <= dVar32 && dVar32 != (double)plVar3[0x14]) ||
              ((float)uStack_248 * fVar40 + uStack_248._4_4_ * fVar39 + (float)uStack_240 * fVar38 <
               fVar35)) ||
             (fVar42 = fVar41, fVar44 = fVar43, fVar33 = fVar45, fVar47 = fVar46, fVar49 = fVar48,
             fVar51 = fVar50, fVar34 = fVar52, fVar54 = fVar53, iVar24 == 999)) {
            fVar35 = (float)(double)plVar3[0x18];
            fStack_2e8 = fStack_228 - fVar35 * (float)uStack_258;
            fStack_2e4 = fStack_224 - fVar35 * uStack_258._4_4_;
            fStack_2e0 = fStack_220 - fVar35 * (float)uStack_250;
            fStack_2d8 = fVar35 * (float)uStack_258 + fStack_228;
            fStack_2d4 = fStack_224 + fVar35 * uStack_258._4_4_;
            fStack_2d0 = fStack_220 + fVar35 * (float)uStack_250;
            fVar36 = fVar36 + plStackX_8._0_4_;
            fStack_2cc = fStack_21c;
            fStack_2dc = fStack_21c;
            if ((char)plVar3[0x19] != '\0') {
              FUN_1801a9fd0(uVar18,&fStack_2e8,0x31b189,&fStack_2e0);
              FUN_1801a9fd0(uVar18,&fStack_2d8,0x31b189,&fStack_2d0);
            }
            fVar54 = fStack_2cc;
            fVar51 = fStack_2d4;
            fVar49 = fStack_2d8;
            fVar47 = fStack_2dc;
            fVar44 = fStack_2e4;
            fVar42 = fStack_2e8;
            fVar33 = fStack_2e0 + (float)(double)plVar3[0x17];
            fVar34 = fStack_2d0 + (float)(double)plVar3[0x17];
            fStack_188 = fStack_290;
            fStack_17c = fStack_284;
            fStack_148 = fStack_2e8;
            fStack_144 = fStack_2e4;
            fStack_13c = fStack_2dc;
            fStack_138 = fStack_2d8;
            fStack_134 = fStack_2d4;
            fStack_12c = fStack_2cc;
            uStack_128 = uStack_1f8;
            uStack_120 = uStack_1f0;
            uStack_1f8 = uStack_1a8;
            uStack_1f0 = uStack_1a0;
            uStack_118 = uStack_1a8;
            uStack_110 = uStack_1a0;
            uStack_108 = plStackX_8._0_4_;
            pplStack_100 = &plStack_2c8;
            pplStack_f8 = &plStack_218;
            fStack_2d0 = fVar34;
            fStack_184 = fVar55;
            fStack_180 = fVar37;
            fStack_178 = fVar41;
            fStack_174 = fVar43;
            fStack_170 = fVar45;
            fStack_16c = fVar46;
            fStack_168 = fVar48;
            fStack_164 = fVar50;
            fStack_160 = fVar52;
            fStack_15c = fVar53;
            fStack_158 = fVar12;
            fStack_154 = fVar13;
            fStack_150 = fVar14;
            fStack_14c = fVar15;
            fStack_140 = fVar33;
            fStack_130 = fVar34;
            fStack_104 = fVar36;
            fStack_2e0 = fVar33;
            FUN_18035a8e0(plVar3,&fStack_188);
            plStackX_8 = (int64_t *)CONCAT44(plStackX_8._4_4_,fVar36);
            fVar37 = fVar14;
            fVar38 = fVar11;
            fVar39 = fVar10;
            fVar40 = fVar9;
            fVar55 = fVar13;
            fStack_290 = fVar12;
            fStack_28c = fVar13;
            fStack_288 = fVar14;
            fStack_284 = fVar15;
          }
          fVar35 = pplStackX_10._0_4_;
          fVar41 = fVar42;
          fVar43 = fVar44;
          fVar45 = fVar33;
          fVar46 = fVar47;
          fVar48 = fVar49;
          fVar50 = fVar51;
          fVar52 = fVar34;
          fVar53 = fVar54;
        } while (iVar24 < 1000);
        iVar31 = iVar31 + 1;
      } while ((uint64_t)(int64_t)iVar31 < lVar30 - 1U);
    }
    FUN_180234a10(&plStack_2c8,0,1);
    iVar31 = FUN_1802349a0(plStack_2c0);
    if ((10 < iVar31) ||
       ((int)((int)plStack_2c0[0x11] + ((int)plStack_2c0[0x11] >> 0x1f & 3U)) >> 2 < iVar31)) {
      puVar22 = &system_buffer_ptr;
      if ((void *)plStack_2c8[3] != (void *)0x0) {
        puVar22 = (void *)plStack_2c8[3];
      }
      FUN_1800623b0(system_message_context,0,0x80000000000,3,&processed_var_5472_ptr,iVar31,puVar22,
                    (int)plStack_2c0[0xc]);
    }
    cStack_298 = '\x01';
    if (plStack_2c0 != (int64_t *)0x0) {
      if (cStack_296 != '\0') {
        FUN_180075b70(plStack_2c8);
      }
      FUN_18007f6a0(auStack_2b8);
      if (cStack_298 != '\0') {
        FUN_180079520(plStack_2c8);
      }
      if (cStack_297 != '\0') {
        FUN_180079520(plStack_2c8);
      }
      plVar2 = plStack_2c0;
      plStackX_8 = plStack_2c0;
      plStack_2c0 = (int64_t *)0x0;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
    }
    lVar30 = plVar3[0x22];
    pplStackX_10 = &plStackX_8;
    plStackX_8 = plVar20;
    (**(code **)(*plVar20 + 0x28))(plVar20);
    FUN_180275cf0(lVar30,0,&plStackX_8,1);
    plVar2 = (int64_t *)plVar3[0x22];
    if (*(code **)(*plVar2 + 0x160) == (code *)&processed_var_6368_ptr) {
      FUN_180276f30(plVar2,(int64_t)plVar2 + 0x214,0);
    }
    else {
      (**(code **)(*plVar2 + 0x160))();
    }
    plVar2 = (int64_t *)plVar3[0x12];
    if (plVar2 != (int64_t *)0x0) {
      plVar3 = (int64_t *)plVar3[0x22];
      pcVar4 = *(code **)(*plVar3 + 0x118);
      plStackX_8 = plVar2;
      (**(code **)(*plVar2 + 0x28))();
      (*pcVar4)(plVar3,&plStackX_8);
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
    }
    if ((plStack_2c8 != (int64_t *)0x0) && (plStack_2c0 != (int64_t *)0x0)) {
      if (cStack_296 != '\0') {
        FUN_180075b70();
      }
      FUN_18007f6a0(auStack_2b8);
      if (cStack_298 != '\0') {
        FUN_180079520(plStack_2c8);
      }
      if (cStack_297 != '\0') {
        FUN_180079520(plStack_2c8);
      }
      plVar3 = plStack_2c0;
      plStackX_8 = plStack_2c0;
      plStack_2c0 = (int64_t *)0x0;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
    }
    plStackX_8 = (int64_t *)auStack_2b8;
    FUN_18007f6a0(auStack_2b8);
    if (plStack_2a0 != (int64_t *)0x0) {
      (**(code **)(*plStack_2a0 + 0x38))();
    }
    if (plStack_2c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_2c0 + 0x38))();
    }
    if (plStack_2c8 != (int64_t *)0x0) {
      (**(code **)(*plStack_2c8 + 0x38))();
    }
    (**(code **)(*plVar20 + 0x38))(plVar20);
    for (plStackX_8 = plStack_218; plStackX_8 != plStack_210; plStackX_8 = plStackX_8 + 0xd) {
      pplStackX_10 = (int64_t **)(plStackX_8 + 9);
      if (*pplStackX_10 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      if (*plStackX_8 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
    }
    if (plStack_218 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (puVar26 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar26);
    }
  }
  return;
}





// 函数: void FUN_18035c940(int64_t *param_1)
void FUN_18035c940(int64_t *param_1)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)*param_1;
  while( true ) {
    if (plVar1 == (int64_t *)param_1[1]) {
      if (*param_1 == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (plVar1[9] != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (*plVar1 != 0) break;
    plVar1 = plVar1 + 0xd;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_18035c960(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  
  if (param_1 != param_2) {
    lVar4 = *param_1;
    lVar1 = param_2[1];
    lVar2 = *param_2;
    lVar7 = lVar1 - lVar2;
    uVar6 = lVar7 >> 3;
    if ((uint64_t)(param_1[2] - lVar4 >> 3) < uVar6) {
      if (uVar6 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar6 * 8,(char)param_1[3]);
      }
      if (lVar2 != lVar1) {
                    // WARNING: Subroutine does not return
        memmove(lVar4,lVar2,lVar7);
      }
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lVar1 = lVar4 + uVar6 * 8;
      *param_1 = lVar4;
      param_1[1] = lVar1;
      param_1[2] = lVar1;
    }
    else {
      lVar3 = param_1[1];
      uVar5 = lVar3 - lVar4 >> 3;
      if (uVar5 < uVar6) {
        lVar7 = uVar5 * 8 + lVar2;
        if (lVar2 != lVar7) {
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar2);
        }
        if (lVar7 != lVar1) {
                    // WARNING: Subroutine does not return
          memmove(lVar3,lVar7,lVar1 - lVar7);
        }
        param_1[1] = lVar3;
      }
      else {
        if (lVar2 != lVar1) {
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar2,lVar7);
        }
        param_1[1] = lVar4;
      }
    }
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035c979(int64_t param_1,int64_t *param_2)
void FUN_18035c979(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t in_RAX;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *unaff_RBX;
  uint64_t uVar5;
  int64_t lVar6;
  
  lVar1 = param_2[1];
  lVar2 = *param_2;
  lVar6 = lVar1 - lVar2;
  uVar5 = lVar6 >> 3;
  if ((uint64_t)(in_RAX - param_1 >> 3) < uVar5) {
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar5 * 8,(char)unaff_RBX[3]);
    }
    if (lVar2 != lVar1) {
                    // WARNING: Subroutine does not return
      memmove(lVar3,lVar2,lVar6);
    }
    if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lVar1 = lVar3 + uVar5 * 8;
    *unaff_RBX = lVar3;
    unaff_RBX[1] = lVar1;
    unaff_RBX[2] = lVar1;
  }
  else {
    lVar3 = unaff_RBX[1];
    uVar4 = lVar3 - param_1 >> 3;
    if (uVar4 < uVar5) {
      lVar6 = uVar4 * 8 + lVar2;
      if (lVar2 != lVar6) {
                    // WARNING: Subroutine does not return
        memmove(param_1,lVar2);
      }
      if (lVar6 != lVar1) {
                    // WARNING: Subroutine does not return
        memmove(lVar3,lVar6,lVar1 - lVar6);
      }
      unaff_RBX[1] = lVar3;
    }
    else {
      if (lVar2 != lVar1) {
                    // WARNING: Subroutine does not return
        memmove(param_1,lVar2,lVar6);
      }
      unaff_RBX[1] = param_1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035c9ad(void)
void FUN_18035c9ad(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  if (unaff_RSI == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,unaff_RSI * 8,(char)unaff_RBX[3]);
  }
  if (unaff_RDI != unaff_RBP) {
                    // WARNING: Subroutine does not return
    memmove(lVar2);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lVar1 = lVar2 + unaff_RSI * 8;
  *unaff_RBX = lVar2;
  unaff_RBX[1] = lVar1;
  unaff_RBX[2] = lVar1;
  return;
}





// 函数: void FUN_18035ca0e(int64_t param_1)
void FUN_18035ca0e(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  
  lVar2 = *(int64_t *)(unaff_RBX + 8);
  uVar3 = lVar2 - param_1 >> 3;
  if (uVar3 < unaff_RSI) {
    lVar1 = uVar3 * 8 + unaff_RDI;
    if (unaff_RDI != lVar1) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    if (lVar1 != unaff_RBP) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar1,unaff_RBP - lVar1);
    }
    *(int64_t *)(unaff_RBX + 8) = lVar2;
  }
  else {
    if (unaff_RDI != unaff_RBP) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    *(int64_t *)(unaff_RBX + 8) = param_1;
  }
  return;
}





// 函数: void FUN_18035ca8e(void)
void FUN_18035ca8e(void)

{
  return;
}





// 函数: void FUN_18035caa0(int64_t *param_1)
void FUN_18035caa0(int64_t *param_1)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)*param_1;
  while( true ) {
    if (plVar1 == (int64_t *)param_1[1]) {
      if (*param_1 == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (plVar1[9] != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (*plVar1 != 0) break;
    plVar1 = plVar1 + 0xd;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18035cb30(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  FUN_18063e690();
  lVar3 = *(int64_t *)(param_2 + 0x50) - *(int64_t *)(param_2 + 0x48) >> 4;
  uVar1 = *(uint *)(param_2 + 0x60);
  *(uint *)(param_1 + 0x60) = uVar1;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar3 << 4,uVar1 & 0xff,param_4,uVar4);
  }
  *(int64_t *)(param_1 + 0x48) = lVar2;
  *(int64_t *)(param_1 + 0x50) = lVar2;
  *(int64_t *)(param_1 + 0x58) = lVar3 * 0x10 + lVar2;
  lVar3 = *(int64_t *)(param_1 + 0x48);
  lVar2 = *(int64_t *)(param_2 + 0x48);
  if (lVar2 != *(int64_t *)(param_2 + 0x50)) {
                    // WARNING: Subroutine does not return
    memmove(lVar3,lVar2,*(int64_t *)(param_2 + 0x50) - lVar2);
  }
  *(int64_t *)(param_1 + 0x50) = lVar3;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035cbe0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18035cbe0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t lVar10;
  int32_t *puVar11;
  
  puVar11 = (int32_t *)param_1[1];
  puVar5 = (int32_t *)*param_1;
  lVar9 = ((int64_t)puVar11 - (int64_t)puVar5) / 0x68;
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) {
      lVar4 = 0;
      goto LAB_18035cc63;
    }
  }
  lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 0x68,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar11 = (int32_t *)param_1[1];
  puVar5 = (int32_t *)*param_1;
LAB_18035cc63:
  lVar7 = lVar4;
  if (puVar5 != puVar11) {
    lVar10 = lVar4 - (int64_t)puVar5;
    puVar5 = puVar5 + 0x18;
    do {
      FUN_18063e690(lVar7,puVar5 + -0x18);
      puVar6 = (uint64_t *)((int64_t)puVar5 + lVar10 + -0x18);
      *puVar6 = 0;
      *(uint64_t *)(lVar10 + -0x10 + (int64_t)puVar5) = 0;
      *(uint64_t *)(lVar10 + -8 + (int64_t)puVar5) = 0;
      *(int32_t *)(lVar10 + (int64_t)puVar5) = *puVar5;
      uVar3 = *puVar6;
      *puVar6 = *(uint64_t *)(puVar5 + -6);
      *(uint64_t *)(puVar5 + -6) = uVar3;
      uVar3 = *(uint64_t *)(lVar10 + -0x10 + (int64_t)puVar5);
      *(uint64_t *)(lVar10 + -0x10 + (int64_t)puVar5) = *(uint64_t *)(puVar5 + -4);
      *(uint64_t *)(puVar5 + -4) = uVar3;
      uVar3 = *(uint64_t *)(lVar10 + -8 + (int64_t)puVar5);
      *(uint64_t *)(lVar10 + -8 + (int64_t)puVar5) = *(uint64_t *)(puVar5 + -2);
      *(uint64_t *)(puVar5 + -2) = uVar3;
      uVar2 = *(int32_t *)(lVar10 + (int64_t)puVar5);
      *(int32_t *)(lVar10 + (int64_t)puVar5) = *puVar5;
      *puVar5 = uVar2;
      lVar7 = lVar7 + 0x68;
      puVar1 = puVar5 + 2;
      puVar5 = puVar5 + 0x1a;
    } while (puVar1 != puVar11);
  }
  FUN_18035cb30(lVar7,param_2);
  plVar8 = (int64_t *)*param_1;
  if (plVar8 != (int64_t *)param_1[1]) {
    do {
      if (plVar8[9] != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      if (*plVar8 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plVar8 = plVar8 + 0xd;
    } while (plVar8 != (int64_t *)param_1[1]);
    plVar8 = (int64_t *)*param_1;
  }
  if (plVar8 == (int64_t *)0x0) {
    *param_1 = lVar4;
    param_1[1] = lVar7 + 0x68;
    param_1[2] = lVar9 * 0x68 + lVar4;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(plVar8);
}





