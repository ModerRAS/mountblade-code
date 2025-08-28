#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part634.c - 1 个函数

// 函数: void FUN_18061e84c(void)
void FUN_18061e84c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_18061e860(int64_t param_1,int32_t *param_2,int32_t param_3,float param_4)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  uint64_t uStackX_8;
  int64_t *plStackX_10;
  int32_t auStackX_18 [4];
  int32_t uStack_88;
  int32_t uStack_84;
  float fStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  uint64_t uStack_6c;
  int32_t uStack_64;
  
  plVar1 = *(int64_t **)(render_system_data_memory + 0x20);
  uVar2 = *(uint64_t *)(render_system_data_memory + 0xd0);
  uVar5 = (int32_t)(*(int64_t *)(param_1 + 0x50) - *(int64_t *)(param_1 + 0x48) >> 3);
  auStackX_18[0] = uVar5;
  FUN_1800571e0(param_1 + 0x1e0,auStackX_18);
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0x3f800000;
  uStack_6c = 0;
  uStack_64 = 0;
  plVar3 = (int64_t *)(**(code **)(*plVar1 + 0xa8))(plVar1,&uStack_7c);
  fStack_80 = param_4 * 0.5;
  uStack_88 = 2;
  auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,0xb);
  uStackX_8 = uVar2;
  plStackX_10 = plVar3;
  uStack_84 = param_3;
  puVar4 = (uint64_t *)(**(code **)(*plVar1 + 0xb8))(plVar1,&uStack_88,&uStackX_8,1,1,auStackX_18)
  ;
  (**(code **)(*plVar3 + 0xa0))(plVar3,puVar4);
  (**(code **)*puVar4)(puVar4);
  FUN_18005ea90(param_1 + 0x48,&plStackX_10);
  *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
  FUN_18061d270(param_1);
  FUN_18061d1b0(param_1);
  *param_2 = uVar5;
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x00018061ed75)
// WARNING: Removing unreachable block (ram,0x00018061ed80)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18061e9c0(uint64_t *param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  char *pcVar12;
  uint64_t *puVar13;
  uint64_t ****ppppuVar14;
  uint64_t *****pppppuVar15;
  float *pfVar16;
  int64_t *plVar17;
  uint64_t *puVar18;
  char *pcVar19;
  uint uVar20;
  uint uVar21;
  int64_t lVar22;
  uint64_t *puVar23;
  uint64_t *puVar24;
  uint64_t *****pppppuVar25;
  int iVar26;
  uint uVar27;
  char *pcVar28;
  char *pcVar29;
  byte bVar30;
  char *pcVar31;
  int64_t lVar32;
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  int64_t lStackX_10;
  uint64_t *puStackX_18;
  uint64_t *puStackX_20;
  int8_t uStack_358;
  int8_t uStack_357;
  char cStack_356;
  char cStack_354;
  char cStack_353;
  char *pcStack_350;
  int64_t *plStack_348;
  int64_t *plStack_340;
  uint64_t uStack_338;
  uint64_t uStack_330;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_318;
  uint64_t uStack_310;
  uint64_t uStack_308;
  uint64_t ****ppppuStack_300;
  uint64_t ****ppppuStack_2f8;
  uint64_t ****ppppuStack_2f0;
  uint64_t uStack_2e8;
  uint64_t uStack_2e0;
  int32_t uStack_2d8;
  uint64_t uStack_2c8;
  uint64_t uStack_2c0;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  int32_t uStack_2a8;
  int32_t uStack_2a4;
  int32_t uStack_2a0;
  int32_t uStack_29c;
  char *pcStack_298;
  uint64_t uStack_290;
  int32_t uStack_288;
  int32_t uStack_284;
  float fStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  int32_t uStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  int32_t uStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  int32_t uStack_24c;
  int32_t uStack_248;
  int32_t uStack_244;
  int32_t uStack_240;
  int32_t uStack_23c;
  uint64_t uStack_238;
  int32_t uStack_230;
  int32_t uStack_22c;
  int32_t uStack_228;
  int32_t uStack_224;
  uint64_t *puStack_220;
  uint64_t uStack_218;
  char *pcStack_210;
  uint64_t uStack_208;
  int32_t uStack_200;
  int64_t lStack_1f8;
  uint64_t uStack_1f0;
  uint64_t uStack_1e8;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  int32_t uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t uStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  int32_t uStack_18c;
  float afStack_188 [18];
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  int32_t uStack_128;
  int8_t auStack_120 [28];
  int8_t auStack_104 [196];
  
  afStack_188[8] = -NAN;
  afStack_188[9] = -NAN;
  *param_1 = &rendering_buffer_2256_ptr;
  *param_1 = &rendering_buffer_2136_ptr;
  puVar24 = (uint64_t *)0x0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 8) = 3;
  plVar1 = param_1 + 9;
  *plVar1 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xc) = 3;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x10) = 3;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x14) = 3;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(int32_t *)(param_1 + 0x18) = 3;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(int32_t *)(param_1 + 0x1c) = 3;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(int32_t *)(param_1 + 0x20) = 3;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(int32_t *)(param_1 + 0x24) = 3;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(int32_t *)(param_1 + 0x28) = 3;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(int32_t *)(param_1 + 0x2c) = 3;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(int32_t *)(param_1 + 0x30) = 3;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(int32_t *)(param_1 + 0x34) = 3;
  plVar2 = param_1 + 0x38;
  *plVar2 = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(int32_t *)(param_1 + 0x3b) = 3;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(int32_t *)(param_1 + 0x3f) = 3;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(int32_t *)(param_1 + 0x43) = 3;
  plStack_348 = param_1 + 0x44;
  *plStack_348 = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(int32_t *)(param_1 + 0x47) = 3;
  puStackX_18 = param_1 + 0x4a;
  *puStackX_18 = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(int32_t *)(param_1 + 0x4d) = 3;
  param_1[0x35] = 0;
  *(int32_t *)(param_1 + 0x36) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1b4) = 0x40800000;
  *(int32_t *)(param_1 + 0x37) = 0x40c00000;
  plStack_340 = *(int64_t **)(render_system_data_memory + 0x20);
  lStackX_10 = param_2;
  uStack_310 = (**(code **)(*plStack_340 + 0xe8))(plStack_340,0,0,0x3dcccccd);
  cVar6 = *(char *)(lStackX_10 + 0x148);
  pcVar31 = (char *)(int64_t)cVar6;
  puStackX_20 = (uint64_t *)CONCAT71(puStackX_20._1_7_,cVar6);
  uStack_218 = 0;
  pcStack_210 = (char *)0x0;
  uStack_208 = 0;
  uStack_200 = 3;
  if (cVar6 != '\0') {
    pcVar19 = (char *)0x1;
    if ((char *)0x1 < pcVar31) {
      pcVar19 = pcVar31;
    }
    if (pcVar19 == (char *)0x0) {
      pcStack_350 = (char *)0x0;
    }
    else {
      pcStack_350 = (char *)CoreMemoryPoolAllocator(system_memory_pool_ptr,pcVar19,3);
    }
                    // WARNING: Subroutine does not return
    memset(pcStack_350,0,pcVar31);
  }
  pcStack_350 = (char *)0x0;
  bVar30 = 0;
  pcVar19 = (char *)0x0;
  pcStack_210 = pcVar31;
  if (pcVar31 != (char *)0x0) {
    uVar20 = 0;
    puVar13 = puVar24;
    uVar21 = uVar20;
    for (pcVar12 = pcVar31; pcVar12 != (char *)0x0; pcVar12 = (char *)((int64_t)pcVar12 >> 1)) {
      uVar21 = (int)puVar13 + 1;
      puVar13 = (uint64_t *)(uint64_t)uVar21;
    }
    FUN_180622f90(0,pcVar31,(int64_t)(int)(uVar21 - 1) * 2,&lStackX_10);
    if ((int64_t)pcVar31 < 0x1d) {
      FUN_180622e70(0,pcVar31,&lStackX_10);
    }
    else {
      pcVar12 = (char *)0x1c;
      FUN_180622e70(pcStack_350,0x1c,&lStackX_10);
      pcVar19 = pcStack_350;
      if (pcVar31 != (char *)0x1c) {
LAB_18061edf0:
        cVar6 = *pcVar12;
        puStackX_18 = (uint64_t *)CONCAT71(puStackX_18._1_7_,cVar6);
        pcVar28 = pcVar12;
        pcVar29 = pcVar12;
        do {
          pcVar29 = pcVar29 + -1;
          puVar13 = puVar24;
          uVar21 = uVar20;
          cVar7 = cVar6;
          while (lVar22 = *(int64_t *)(lStackX_10 + 0x140) + (int64_t)cVar7 * 0x1b0, lVar22 != 0)
          {
            uVar21 = (uint)puVar13;
            cVar7 = *(char *)(lVar22 + 0xf0);
            if (cVar7 == -1) break;
            uVar21 = uVar21 + 1;
            puVar13 = (uint64_t *)(uint64_t)uVar21;
          }
          puVar13 = puVar24;
          uVar27 = uVar20;
          cVar7 = *pcVar29;
          while (lVar22 = (int64_t)cVar7 * 0x1b0 + *(int64_t *)(lStackX_10 + 0x140), lVar22 != 0)
          {
            uVar27 = (uint)puVar13;
            cVar7 = *(char *)(lVar22 + 0xf0);
            if (cVar7 == -1) break;
            uVar27 = uVar27 + 1;
            puVar13 = (uint64_t *)(uint64_t)uVar27;
          }
          if ((int)uVar27 <= (int)uVar21) goto LAB_18061ee96;
          *pcVar28 = *pcVar29;
          pcVar28 = pcVar28 + -1;
        } while( true );
      }
    }
  }
LAB_18061eeb9:
  afStack_188[10] = 0.0;
  afStack_188[0xb] = 0.0;
  afStack_188[0xc] = 0.0;
  afStack_188[0xd] = 0.0;
  afStack_188[0xe] = 0.0;
  afStack_188[0xf] = 0.0;
  afStack_188[0x10] = 4.2039e-45;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 3;
  FUN_1805f2580(plStack_348,(int64_t)*(char *)(lStackX_10 + 0x148));
  uStack_2d8 = 3;
  ppppuStack_300 = &ppppuStack_300;
  ppppuStack_2f8 = &ppppuStack_300;
  ppppuStack_2f0 = (uint64_t *****)0x0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  if ('\0' < (char)bVar30) {
    pcStack_298 = pcVar19;
    uStack_308 = (uint64_t)bVar30;
    uStack_290 = uStack_308;
    do {
      plVar17 = plStack_340;
      cStack_356 = *pcVar19;
      lVar22 = (int64_t)cStack_356 * 0x1b0 + *(int64_t *)(lStackX_10 + 0x140);
      cVar6 = *(char *)(lVar22 + 0xf0);
      pcStack_298 = pcVar19;
      if (cVar6 != -1) {
        lStack_1f8 = (int64_t)cVar6;
        lVar32 = (int64_t)cVar6 * 0x1b0 + *(int64_t *)(lStackX_10 + 0x140);
        fVar38 = *(float *)(lVar32 + 0x38) - *(float *)(lVar22 + 0x38);
        fStack_318 = *(float *)(lVar22 + 0x34);
        fVar40 = *(float *)(lVar32 + 0x34) - fStack_318;
        fVar42 = *(float *)(lVar32 + 0x30) - *(float *)(lVar22 + 0x30);
        fVar35 = SQRT(fVar40 * fVar40 + fVar42 * fVar42 + fVar38 * fVar38);
        puStackX_18 = (uint64_t *)((uint64_t)puStackX_18 & 0xffffffffffffff00);
        if (fVar35 <= 0.0) {
          uStack_338 = 0;
          uStack_330 = 0x3f80000000000000;
          fStack_320 = *(float *)(lVar32 + 0x38);
          fStack_324 = *(float *)(lVar32 + 0x34);
          fStack_328 = *(float *)(lVar32 + 0x30);
          uStack_357 = 9;
          uStack_2a0 = 0;
          uStack_29c = 0x3ccccccd;
          puVar13 = (uint64_t *)
                    (**(code **)(*plStack_340 + 0xb8))
                              (plStack_340,&uStack_2a0,&uStack_310,1,1,&uStack_357);
LAB_18061f4c2:
          puStackX_18 = (uint64_t *)CONCAT71(puStackX_18._1_7_,1);
        }
        else {
          fStack_1c8 = 1.0 / fVar35;
          fStack_1c0 = fVar38 * fStack_1c8;
          fStack_1c4 = fVar40 * fStack_1c8;
          fStack_1c8 = fVar42 * fStack_1c8;
          if (fStack_1c0 <= 0.999) {
            afStack_188[4] = 0.0;
            afStack_188[5] = 0.0;
            afStack_188[6] = 1.0;
            afStack_188[7] = 3.4028235e+38;
            pfVar16 = afStack_188 + 4;
          }
          else {
            afStack_188[0] = 0.0;
            afStack_188[1] = 1.0;
            afStack_188[2] = 0.0;
            afStack_188[3] = 3.4028235e+38;
            pfVar16 = afStack_188;
          }
          fVar38 = pfVar16[1];
          fStack_270 = *pfVar16 * fStack_1c4 - fVar38 * fStack_1c8;
          fStack_274 = pfVar16[2] * fStack_1c8 - *pfVar16 * fStack_1c0;
          fStack_278 = fVar38 * fStack_1c0 - pfVar16[2] * fStack_1c4;
          uStack_26c = 0x7f7fffff;
          auVar34._4_4_ = fVar38;
          auVar34._0_4_ = fStack_278;
          auVar34._8_4_ = fVar38;
          auVar34._12_4_ = fVar38;
          auVar33._4_12_ = auVar34._4_12_;
          auVar33._0_4_ =
               fStack_278 * fStack_278 + fStack_274 * fStack_274 + fStack_270 * fStack_270;
          auVar34 = rsqrtss(auVar33,ZEXT416((uint)auVar33._0_4_));
          fVar38 = auVar34._0_4_;
          fStack_1b0 = fVar38 * 0.5 * (3.0 - auVar33._0_4_ * fVar38 * fVar38);
          fStack_1b8 = fStack_1b0 * fStack_278;
          fStack_1b4 = fStack_1b0 * fStack_274;
          fStack_1b0 = fStack_1b0 * fStack_270;
          fStack_260 = fStack_1b4 * fStack_1c8 - fStack_1c4 * fStack_1b8;
          fStack_264 = fStack_1c0 * fStack_1b8 - fStack_1c8 * fStack_1b0;
          fStack_268 = fStack_1c4 * fStack_1b0 - fStack_1c0 * fStack_1b4;
          uStack_25c = 0x7f7fffff;
          fVar40 = fStack_264 * fStack_264 + fStack_268 * fStack_268 + fStack_260 * fStack_260;
          auVar34 = rsqrtss(ZEXT416((uint)fVar40),ZEXT416((uint)fVar40));
          fVar38 = auVar34._0_4_;
          fStack_1a0 = fVar38 * 0.5 * (3.0 - fVar40 * fVar38 * fVar38);
          fStack_1a8 = fStack_268 * fStack_1a0;
          fStack_1a4 = fStack_264 * fStack_1a0;
          fStack_1a0 = fStack_260 * fStack_1a0;
          fStack_250 = (*(float *)(lVar22 + 0x38) + *(float *)(lVar32 + 0x38)) * 0.5;
          fStack_254 = (fStack_318 + *(float *)(lVar32 + 0x34)) * 0.5;
          fStack_258 = (*(float *)(lVar22 + 0x30) + *(float *)(lVar32 + 0x30)) * 0.5;
          uStack_1bc = 0x7f7fffff;
          uStack_2c8 = CONCAT44(fStack_1b4,fStack_1b8);
          uStack_2c0 = CONCAT44(0x7f7fffff,fStack_1b0);
          uStack_1ac = 0x7f7fffff;
          uStack_19c = 0x7f7fffff;
          uStack_24c = 0x7f7fffff;
          uStack_18c = 0x7f7fffff;
          fStack_198 = fStack_258;
          fStack_194 = fStack_254;
          fStack_190 = fStack_250;
          if (fVar35 - 0.05 <= 0.0) {
            uStack_338 = 0;
            uStack_330 = 0x3f80000000000000;
            fStack_320 = *(float *)(lVar32 + 0x38);
            fStack_324 = *(float *)(lVar32 + 0x34);
            fStack_328 = *(float *)(lVar32 + 0x30);
            uStack_358 = 9;
            uStack_2a8 = 0;
            uStack_2a4 = 0x3ccccccd;
            puVar13 = (uint64_t *)
                      (**(code **)(*plStack_340 + 0xb8))
                                (plStack_340,&uStack_2a8,&uStack_310,1,1,&uStack_358);
            goto LAB_18061f4c2;
          }
          FUN_18063b470(&uStack_248,&fStack_1c8);
          plVar17 = plStack_340;
          uStack_338 = CONCAT44(uStack_240,uStack_244);
          uStack_330 = CONCAT44(uStack_248,uStack_23c);
          fStack_328 = fStack_198;
          fStack_324 = fStack_194;
          fStack_320 = fStack_190;
          puStackX_20 = (uint64_t *)CONCAT71(puStackX_20._1_7_,9);
          uStack_288 = 2;
          uStack_284 = 0x3ccccccd;
          fStack_280 = (fVar35 - 0.05) * 0.5;
          puVar13 = (uint64_t *)
                    (**(code **)(*plStack_340 + 0xb8))
                              (plStack_340,&uStack_288,&uStack_310,1,1,&puStackX_20);
        }
        ppppuVar14 = (uint64_t ****)(**(code **)(*plVar17 + 0xa8))(plVar17,&uStack_338);
        (*(code *)(*ppppuVar14)[0x14])(ppppuVar14,puVar13);
        (**(code **)*puVar13)(puVar13);
        FUN_1806b7380(ppppuVar14,0x40000000,0,0);
        (*(code *)(*ppppuVar14)[0x1c])(ppppuVar14,0x3e4ccccd);
        (*(code *)(*ppppuVar14)[0x24])(ppppuVar14,*(int32_t *)((int64_t)param_1 + 0x1b4));
        (*(code *)(*ppppuVar14)[0x22])(ppppuVar14,*(int32_t *)(param_1 + 0x37));
        (*(code *)(*ppppuVar14)[0x2c])(ppppuVar14,0x447a0000);
        iVar26 = (int)cVar6;
        iVar11 = (int)cStack_356;
        cStack_353 = cVar6;
        if (iVar26 < iVar11) {
          cStack_353 = cStack_356;
        }
        iVar8 = iVar26;
        if (iVar11 < iVar26) {
          iVar8 = iVar11;
        }
        cStack_354 = (char)iVar8;
        pppppuVar15 = &ppppuStack_300;
        pppppuVar25 = (uint64_t *****)ppppuStack_2f0;
        while (pppppuVar25 != (uint64_t *****)0x0) {
          if ((*(char *)(pppppuVar25 + 4) < cStack_354) ||
             ((*(char *)(pppppuVar25 + 4) <= cStack_354 &&
              (*(char *)((int64_t)pppppuVar25 + 0x21) < cStack_353)))) {
            bVar10 = true;
          }
          else {
            bVar10 = false;
          }
          if (bVar10) {
            pppppuVar25 = (uint64_t *****)*pppppuVar25;
          }
          else {
            pppppuVar15 = pppppuVar25;
            pppppuVar25 = (uint64_t *****)pppppuVar25[1];
          }
        }
        if (pppppuVar15 == &ppppuStack_300) {
LAB_18061f602:
          puVar13 = (uint64_t *)
                    FUN_180622bf0(&ppppuStack_300,&puStack_220,iVar8,pppppuVar15,&cStack_354);
          pppppuVar15 = (uint64_t *****)*puVar13;
        }
        else {
          if ((cStack_354 < *(char *)(pppppuVar15 + 4)) ||
             ((cStack_354 <= *(char *)(pppppuVar15 + 4) &&
              (cStack_353 < *(char *)((int64_t)pppppuVar15 + 0x21))))) {
            bVar10 = true;
          }
          else {
            bVar10 = false;
          }
          if (bVar10) goto LAB_18061f602;
        }
        pppppuVar15[5] = ppppuVar14;
        cVar7 = *(char *)(lVar32 + 0xf0);
        if (cVar7 != -1) {
          cVar9 = cVar6;
          if (iVar26 < cVar7) {
            cVar9 = cVar7;
          }
          if (cVar7 < iVar26) {
            cVar6 = cVar7;
          }
          pppppuVar25 = &ppppuStack_300;
          pppppuVar15 = (uint64_t *****)ppppuStack_2f0;
          if ((uint64_t *****)ppppuStack_2f0 == (uint64_t *****)0x0) {
LAB_18061f6b2:
            pppppuVar25 = &ppppuStack_300;
          }
          else {
            do {
              if ((*(char *)(pppppuVar15 + 4) < cVar6) ||
                 ((*(char *)(pppppuVar15 + 4) <= cVar6 &&
                  (*(char *)((int64_t)pppppuVar15 + 0x21) < cVar9)))) {
                bVar10 = true;
              }
              else {
                bVar10 = false;
              }
              if (bVar10) {
                pppppuVar15 = (uint64_t *****)*pppppuVar15;
              }
              else {
                pppppuVar25 = pppppuVar15;
                pppppuVar15 = (uint64_t *****)pppppuVar15[1];
              }
            } while (pppppuVar15 != (uint64_t *****)0x0);
            if (pppppuVar25 == &ppppuStack_300) goto LAB_18061f6b2;
            if ((cVar6 < *(char *)(pppppuVar25 + 4)) ||
               ((cVar6 <= *(char *)(pppppuVar25 + 4) &&
                (cVar9 < *(char *)((int64_t)pppppuVar25 + 0x21))))) {
              bVar10 = true;
            }
            else {
              bVar10 = false;
            }
            if (bVar10) goto LAB_18061f6b2;
          }
          fVar35 = *(float *)(lVar32 + 0x38);
          fVar38 = *(float *)(lVar32 + 0x34);
          fVar40 = *(float *)(lVar32 + 0x30);
          pfVar16 = (float *)(*(code *)(*ppppuVar14)[0x12])(ppppuVar14,auStack_120);
          fVar43 = fVar35 - pfVar16[6];
          fVar41 = fVar38 - pfVar16[5];
          fVar37 = fVar40 - pfVar16[4];
          fVar37 = fVar37 + fVar37;
          fVar41 = fVar41 + fVar41;
          fVar43 = fVar43 + fVar43;
          fVar42 = pfVar16[3];
          fVar39 = fVar42 * fVar42 - 0.5;
          fVar3 = pfVar16[1];
          fVar4 = *pfVar16;
          fVar5 = pfVar16[2];
          fVar36 = fVar4 * fVar37 + fVar3 * fVar41 + fVar5 * fVar43;
          uStack_2c8 = 0;
          uStack_2c0 = 0x3f80000000000000;
          fStack_2b8 = (fVar39 * fVar37 - (fVar3 * fVar43 - fVar5 * fVar41) * fVar42) +
                       fVar4 * fVar36;
          fStack_2b4 = (fVar39 * fVar41 - (fVar5 * fVar37 - fVar4 * fVar43) * fVar42) +
                       fVar3 * fVar36;
          fStack_2b0 = (fVar39 * fVar43 - (fVar4 * fVar41 - fVar3 * fVar37) * fVar42) +
                       fVar5 * fVar36;
          pfVar16 = (float *)(*(code *)(*pppppuVar25[5])[0x12])(pppppuVar25[5],auStack_104);
          fVar35 = fVar35 - pfVar16[6];
          fVar38 = fVar38 - pfVar16[5];
          fVar40 = fVar40 - pfVar16[4];
          fVar40 = fVar40 + fVar40;
          fVar38 = fVar38 + fVar38;
          fVar35 = fVar35 + fVar35;
          fVar42 = pfVar16[3];
          fVar37 = fVar42 * fVar42 - 0.5;
          fVar3 = pfVar16[1];
          fVar4 = *pfVar16;
          fVar5 = pfVar16[2];
          fVar36 = fVar4 * fVar40 + fVar3 * fVar38 + fVar5 * fVar35;
          uStack_1f0 = 0;
          uStack_1e8 = 0x3f80000000000000;
          fStack_1e0 = (fVar37 * fVar40 - (fVar3 * fVar35 - fVar5 * fVar38) * fVar42) +
                       fVar4 * fVar36;
          fStack_1dc = (fVar37 * fVar38 - (fVar5 * fVar40 - fVar4 * fVar35) * fVar42) +
                       fVar3 * fVar36;
          fStack_1d8 = (fVar37 * fVar35 - (fVar4 * fVar38 - fVar3 * fVar40) * fVar42) +
                       fVar5 * fVar36;
          plVar17 = (int64_t *)
                    FUN_1806d8aa0(plStack_340,pppppuVar25[5],&uStack_1f0,ppppuVar14,&uStack_2c8);
          if ((char)puStackX_18 == '\0') {
            (**(code **)(*plVar17 + 0xe8))(plVar17,3,0);
          }
          else {
            (**(code **)(*plVar17 + 0xe8))(plVar17,3,2);
          }
          (**(code **)(*plVar17 + 0xe8))(plVar17,4,2);
          (**(code **)(*plVar17 + 0xe8))(plVar17,5,2);
          (**(code **)(*plVar17 + 0xe8))(plVar17,0,1);
          (**(code **)(*plVar17 + 0xe8))(plVar17,1);
          (**(code **)(*plVar17 + 0xe8))(plVar17,2);
          uStack_238 = 0;
          uStack_228 = 0;
          uStack_224 = 0x358637bd;
          uStack_230 = 0x447a0000;
          uStack_22c = 0x42480000;
          (**(code **)(*plVar17 + 0x110))(plVar17,&uStack_238);
          puVar13 = (uint64_t *)param_1[0x39];
          if (puVar13 < (uint64_t *)param_1[0x3a]) {
            param_1[0x39] = puVar13 + 1;
            *puVar13 = plVar17;
          }
          else {
            puVar23 = (uint64_t *)*plVar2;
            lVar22 = (int64_t)puVar13 - (int64_t)puVar23 >> 3;
            if (lVar22 == 0) {
              puStackX_18 = (uint64_t *)0x1;
LAB_18061fa4f:
              puVar18 = (uint64_t *)
                        CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)puStackX_18 * 8,
                                      *(int8_t *)(param_1 + 0x3b));
              puVar13 = (uint64_t *)param_1[0x39];
              puVar23 = (uint64_t *)*plVar2;
            }
            else {
              puStackX_18 = (uint64_t *)(lVar22 * 2);
              puVar18 = puVar24;
              if (puStackX_18 != (uint64_t *)0x0) goto LAB_18061fa4f;
            }
            if (puVar23 != puVar13) {
                    // WARNING: Subroutine does not return
              memmove(puVar18,puVar23,(int64_t)puVar13 - (int64_t)puVar23);
            }
            *puVar18 = plVar17;
            if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
              CoreMemoryPoolInitializer();
            }
            *plVar2 = (int64_t)puVar18;
            param_1[0x39] = puVar18 + 1;
            param_1[0x3a] = puVar18 + (int64_t)puStackX_18;
          }
        }
        *(int *)(*plStack_348 + lStack_1f8 * 4) = (int)(param_1[10] - *plVar1 >> 3);
        puVar13 = (uint64_t *)param_1[10];
        if (puVar13 < (uint64_t *)param_1[0xb]) {
          param_1[10] = puVar13 + 1;
          *puVar13 = ppppuVar14;
        }
        else {
          puVar23 = (uint64_t *)*plVar1;
          lVar22 = (int64_t)puVar13 - (int64_t)puVar23 >> 3;
          if (lVar22 == 0) {
            lVar22 = 1;
LAB_18061fb27:
            puVar18 = (uint64_t *)
                      CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar22 * 8,*(int8_t *)(param_1 + 0xc));
            puVar13 = (uint64_t *)param_1[10];
            puVar23 = (uint64_t *)*plVar1;
          }
          else {
            lVar22 = lVar22 * 2;
            puVar18 = puVar24;
            if (lVar22 != 0) goto LAB_18061fb27;
          }
          if (puVar23 != puVar13) {
                    // WARNING: Subroutine does not return
            memmove(puVar18,puVar23,(int64_t)puVar13 - (int64_t)puVar23);
          }
          *puVar18 = ppppuVar14;
          if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          *plVar1 = (int64_t)puVar18;
          param_1[10] = puVar18 + 1;
          param_1[0xb] = puVar18 + lVar22;
        }
      }
      pcVar19 = pcStack_298 + 1;
      pcStack_298 = pcVar19;
      uStack_290 = uStack_290 - 1;
      puVar13 = puVar24;
      puVar23 = puVar24;
    } while (uStack_290 != 0);
    do {
      lVar22 = *plStack_348;
      if (*(int *)((int64_t)puVar13 + lVar22) == -1) {
        *(int32_t *)((int64_t)puVar13 + lVar22) =
             *(int32_t *)
              (lVar22 + (int64_t)
                        *(char *)(*(int64_t *)(lStackX_10 + 0x140) + 0xf0 + (int64_t)puVar23) * 4)
        ;
      }
      uStack_308 = uStack_308 - 1;
      puVar13 = (uint64_t *)((int64_t)puVar13 + 4);
      puVar23 = puVar23 + 0x36;
    } while (uStack_308 != 0);
  }
  *(int *)(param_1 + 0x35) = (int)(param_1[10] - *plVar1 >> 3);
  puVar13 = (uint64_t *)FUN_1808fc418(0x80);
  *puVar13 = &memory_allocator_3672_ptr;
  *puVar13 = &rendering_buffer_2488_ptr;
  puStackX_18 = puVar13;
  DataStructureManager(puVar13 + 1,0x38,2,FUN_18061cb70,FUN_18061cd80);
  *(int32_t *)(puVar13 + 0xf) = 0;
  param_1[0x48] = puVar13;
  puVar13 = (uint64_t *)FUN_1808fc418(0xb8);
  *puVar13 = &rendering_buffer_2456_ptr;
  *puVar13 = &rendering_buffer_2376_ptr;
  puStackX_20 = puVar13 + 1;
  *puStackX_20 = &rendering_buffer_2432_ptr;
  puVar13[2] = 0;
  puStack_220 = puVar13 + 3;
  *puStack_220 = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  *(int32_t *)(puVar13 + 6) = 3;
  *(int32_t *)(puVar13 + 7) = 0;
  puStackX_18 = puVar13;
  DataStructureManager(puVar13 + 8,0x38,2,FUN_18061cb70,FUN_18061cd80);
  *(int32_t *)(puVar13 + 0x16) = 0;
  param_1[0x49] = puVar13;
  FUN_180080ca0(param_1 + 0x3c,param_1[10] - *plVar1 >> 3);
  puVar13 = puVar24;
  if (param_1[10] - *plVar1 >> 3 != 0) {
    do {
      *(int *)((int64_t)puVar24 + param_1[0x3c]) = (int)puVar13;
      uVar21 = (int)puVar13 + 1;
      puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
      puVar13 = (uint64_t *)(uint64_t)uVar21;
    } while ((uint64_t)(int64_t)(int)uVar21 < (uint64_t)(param_1[10] - *plVar1 >> 3));
  }
  FUN_18061d270(param_1);
  FUN_18061d1b0(param_1);
  ppppuVar14 = ppppuStack_2f0;
  if ((uint64_t *****)ppppuStack_2f0 != (uint64_t *****)0x0) {
    FUN_18004b790(&ppppuStack_300,*ppppuStack_2f0);
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(ppppuVar14);
  }
  if (pcStack_350 != (char *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return param_1;
LAB_18061ee96:
  *pcVar28 = cVar6;
  pcVar12 = pcVar12 + 1;
  if (pcVar12 == pcVar31) goto code_r0x00018061eeac;
  goto LAB_18061edf0;
code_r0x00018061eeac:
  bVar30 = (byte)puStackX_20;
  goto LAB_18061eeb9;
}



uint64_t FUN_18061fe80(uint64_t param_1,uint64_t param_2)

{
  FUN_18061fec0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x270);
  }
  return param_1;
}





