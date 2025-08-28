#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part021_sub002_sub002.c - 1 个函数

// 函数: void FUN_1804af7b0(int64_t param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4,
void FUN_1804af7b0(int64_t param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4,
                  uint64_t param_5,int64_t ***param_6,int param_7,int param_8,int param_9,
                  int param_10,int param_11,int param_12,int param_13,int param_14,
                  uint64_t param_15,float param_16,uint64_t param_17,int param_18,float param_19
                  ,int32_t param_20,char param_21)

{
  uint *puVar1;
  int64_t ***ppplVar2;
  int64_t *plVar3;
  int8_t auVar4 [16];
  float fVar5;
  int64_t **pplVar6;
  int64_t *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int32_t uVar11;
  uint64_t uVar12;
  int64_t *plVar13;
  int64_t lVar14;
  void *puVar15;
  uint uVar16;
  void **ppuVar17;
  void *puVar18;
  int64_t lVar19;
  int64_t lVar20;
  uint uVar21;
  uint64_t uVar22;
  int64_t ****pppplVar23;
  byte bVar24;
  int iVar25;
  uint uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  int64_t ****pppplVar29;
  int64_t *plVar30;
  uint64_t uVar31;
  uint64_t uVar32;
  int64_t ****pppplVar33;
  int iVar34;
  bool bVar35;
  uint64_t uVar36;
  float fVar37;
  int8_t auVar38 [16];
  float fVar39;
  int8_t auStack_3d8 [32];
  void *puStack_3b8;
  int64_t **pplStack_3b0;
  int64_t **pplStack_3a8;
  uint64_t *puStack_3a0;
  uint64_t *puStack_398;
  char cStack_388;
  uint uStack_384;
  char cStack_380;
  uint uStack_37c;
  int64_t ****pppplStack_378;
  int iStack_370;
  uint64_t uStack_368;
  int64_t ****pppplStack_360;
  int32_t uStack_358;
  uint64_t uStack_350;
  int iStack_348;
  uint uStack_344;
  int32_t uStack_340;
  int64_t ***ppplStack_338;
  uint uStack_330;
  int32_t uStack_32c;
  int aiStack_328 [2];
  int64_t *plStack_320;
  int64_t ****pppplStack_318;
  int iStack_310;
  int64_t **pplStack_308;
  int64_t lStack_300;
  int64_t ****pppplStack_2f8;
  uint *puStack_2f0;
  int64_t ****pppplStack_2e8;
  int64_t lStack_2e0;
  int iStack_2d8;
  int iStack_2d4;
  int iStack_2d0;
  int iStack_2cc;
  int64_t ****pppplStack_2c8;
  int64_t lStack_2c0;
  int64_t *plStack_2b8;
  int64_t *plStack_2b0;
  uint64_t uStack_2a8;
  float fStack_2a0;
  float fStack_29c;
  int64_t lStack_298;
  int64_t lStack_290;
  uint64_t uStack_288;
  int32_t uStack_280;
  int32_t uStack_278;
  int32_t uStack_274;
  int32_t uStack_270;
  int32_t uStack_26c;
  int64_t *plStack_268;
  int64_t **pplStack_260;
  int64_t *plStack_258;
  int64_t **pplStack_250;
  uint64_t uStack_248;
  uint64_t uStack_240;
  int64_t ****pppplStack_238;
  int64_t ****pppplStack_230;
  uint auStack_228 [2];
  int64_t ***ppplStack_220;
  int32_t uStack_218;
  int64_t ****pppplStack_210;
  int16_t uStack_208;
  char cStack_206;
  uint64_t uStack_200;
  uint64_t uStack_1f8;
  void *puStack_1e8;
  void **ppuStack_1e0;
  uint64_t uStack_1d8;
  void *puStack_1d0;
  void *puStack_1c8;
  code *pcStack_1c0;
  uint64_t uStack_1b8;
  void *puStack_188;
  void *puStack_180;
  int iStack_178;
  uint8_t auStack_170 [72];
  void *puStack_128;
  int8_t *puStack_120;
  int32_t uStack_118;
  int8_t auStack_110 [72];
  uint64_t uStack_c8;
  
  uStack_240 = 0xfffffffffffffffe;
  uStack_c8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_3d8;
  iStack_2d0 = param_8;
  iStack_310 = param_10;
  iStack_370 = param_9;
  uStack_248 = param_5;
  pplStack_308 = (int64_t **)param_6;
  iStack_2d4 = param_7;
  iStack_2cc = param_11;
  aiStack_328[0] = param_12;
  cStack_388 = param_21;
  uVar28 = 0;
  uVar26 = 0;
  uStack_37c = 0;
  lVar20 = *(int64_t *)(param_1 + 0xa20);
  uVar31 = 0xffffffff;
  uVar10 = -1;
  uStack_384 = -1;
  uVar22 = uVar28;
  uVar27 = uVar28;
  plStack_320 = param_2;
  lStack_2c0 = param_1;
  plStack_2b8 = param_3;
  plStack_2b0 = param_4;
  if ((*(int64_t *)(param_1 + 0xa28) - lVar20) / 0x50 != 0) {
    do {
      pppplVar33 = *(int64_t *****)(lVar20 + 0x20 + uVar27);
      ppplStack_338 = (int64_t ***)pppplVar33;
      if (pppplVar33 != (int64_t ****)0x0) {
        (*(code *)(*pppplVar33)[5])(pppplVar33);
      }
      uVar36 = FUN_1800b4e00();
      if (pppplVar33 != (int64_t ****)0x0) {
        uVar36 = (*(code *)(*pppplVar33)[7])(pppplVar33);
      }
      puVar1 = *(uint **)(uVar27 + 0x28 + *(int64_t *)(param_1 + 0xa20));
      puStack_2f0 = puVar1;
      if (puVar1 != (uint *)0x0) {
        uVar36 = (**(code **)(*(int64_t *)puVar1 + 0x28))(puVar1);
      }
      FUN_1800b4e00(uVar36,puVar1,0xffffffff);
      if (puVar1 != (uint *)0x0) {
        (**(code **)(*(int64_t *)puVar1 + 0x38))(puVar1);
      }
      uVar21 = (int)uVar22 + 1;
      lVar20 = *(int64_t *)(param_1 + 0xa20);
      uVar22 = (uint64_t)uVar21;
      uVar27 = uVar27 + 0x50;
    } while ((uint64_t)(int64_t)(int)uVar21 <
             (uint64_t)((*(int64_t *)(param_1 + 0xa28) - lVar20) / 0x50));
  }
  plVar30 = plStack_2b0;
  plVar13 = plStack_2b8;
  iVar9 = iStack_370;
  pppplStack_378 = (int64_t ****)*plStack_320;
  *plStack_320 = 0;
  if (pppplStack_378 != (int64_t ****)0x0) {
    (**(code **)((int64_t)*pppplStack_378 + 0x38))();
  }
  pppplStack_378 = (int64_t ****)*plVar13;
  *plVar13 = 0;
  if (pppplStack_378 != (int64_t ****)0x0) {
    (**(code **)((int64_t)*pppplStack_378 + 0x38))();
  }
  pppplStack_378 = (int64_t ****)*plVar30;
  *plVar30 = 0;
  if (pppplStack_378 != (int64_t ****)0x0) {
    (**(code **)((int64_t)*pppplStack_378 + 0x38))();
  }
  iStack_2d8 = -1;
  if (*(int *)(param_1 + 0x390) != 0) {
    iStack_2d8 = iVar9;
  }
  uStack_330 = func_0x0001804af450(param_1,&param_15);
  uStack_340 = func_0x0001804af690(param_1,&param_17);
  if (param_16 <= 27.0) {
    uVar26 = 0xff000000;
  }
  else if (param_16 <= 87.0) {
    uVar26 = (int)((param_16 - 27.0) * 4.25) * -0x1000000 - 0x1000000;
  }
  uStack_344 = uVar26 | 0xffffff;
  uVar36 = *(uint64_t *)(param_1 + 0x370);
  uVar12 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16);
  plVar13 = (int64_t *)FUN_180275090(uVar12);
  pppplStack_378 = (int64_t ****)plVar13;
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13);
  }
  uStack_37c = 1;
  FUN_180275a60(uVar36,plVar13,1);
  plVar30 = plStack_320;
  pppplStack_378 = (int64_t ****)0x0;
  pppplStack_318 = (int64_t ****)*plStack_320;
  *plStack_320 = (int64_t)plVar13;
  if (pppplStack_318 != (int64_t ****)0x0) {
    (*(code *)(*pppplStack_318)[7])();
  }
  uStack_37c = 0;
  iVar9 = -1;
  iStack_370 = -1;
  iStack_348 = -1;
  lVar20 = *plVar30;
  uVar22 = uVar28;
  uVar27 = uVar28;
  uVar26 = uStack_384;
  iVar34 = iStack_348;
  if (*(int64_t *)(lVar20 + 0x40) - *(int64_t *)(lVar20 + 0x38) >> 4 != 0) {
    do {
      lVar20 = *(int64_t *)(uVar22 + *(int64_t *)(lVar20 + 0x38));
      puStack_1e8 = &unknown_var_3480_ptr;
      ppuStack_1e0 = &puStack_1d0;
      puStack_1d0 = (void *)((uint64_t)puStack_1d0 & 0xffffffffffffff00);
      uStack_1d8 = (void *)CONCAT44((int)((uint64_t)uStack_1d8 >> 0x20),0xd);
      strcpy_s(&puStack_1d0,0x40,&unknown_var_6184_ptr);
      uStack_368 = (void **)&system_data_buffer_ptr;
      uStack_350 = 0;
      pppplStack_360 = (int64_t ****)0x0;
      uStack_358 = 0;
      CoreEngineDataBufferProcessor(&uStack_368,(uint64_t)uStack_1d8 & 0xffffffff);
      if (0 < (int)uStack_1d8) {
        ppuVar17 = (void **)&system_buffer_ptr;
        if (ppuStack_1e0 != (void **)0x0) {
          ppuVar17 = ppuStack_1e0;
        }
                    // WARNING: Subroutine does not return
        memcpy(pppplStack_360,ppuVar17,(int64_t)((int)uStack_1d8 + 1));
      }
      if ((ppuStack_1e0 != (void **)0x0) &&
         (uStack_358 = 0, pppplStack_360 != (int64_t ****)0x0)) {
        *(int8_t *)pppplStack_360 = 0;
      }
      cVar8 = FUN_180063510(lVar20 + 0x218,&uStack_368);
      uStack_368 = (void **)&system_data_buffer_ptr;
      if (pppplStack_360 != (int64_t ****)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      pppplStack_360 = (int64_t ****)0x0;
      uStack_350 = uStack_350 & 0xffffffff00000000;
      uStack_368 = (void **)&system_state_ptr;
      puStack_1e8 = &system_state_ptr;
      iVar25 = (int)uVar27;
      uVar32 = uVar31;
      iVar34 = iVar25;
      if (cVar8 == '\0') {
        lVar20 = *(int64_t *)(uVar22 + *(int64_t *)(*plVar30 + 0x38));
        puStack_188 = &unknown_var_3480_ptr;
        puStack_180 = auStack_170;
        auStack_170[0] = 0;
        iStack_178 = 0xf;
        strcpy_s(auStack_170,0x40,&unknown_var_6096_ptr);
        pppplStack_238 = (int64_t ****)&system_data_buffer_ptr;
        ppplStack_220 = (int64_t ***)0x0;
        pppplStack_230 = (int64_t ****)0x0;
        auStack_228[0] = 0;
        CoreEngineDataBufferProcessor(&pppplStack_238,iStack_178);
        if (0 < iStack_178) {
          puVar18 = &system_buffer_ptr;
          if (puStack_180 != (void *)0x0) {
            puVar18 = puStack_180;
          }
                    // WARNING: Subroutine does not return
          memcpy(pppplStack_230,puVar18,(int64_t)(iStack_178 + 1));
        }
        if ((puStack_180 != (void *)0x0) &&
           (auStack_228[0] = 0, pppplStack_230 != (int64_t ****)0x0)) {
          *(int8_t *)pppplStack_230 = 0;
        }
        cVar8 = FUN_180063510(lVar20 + 0x218,&pppplStack_238);
        pppplStack_238 = (int64_t ****)&system_data_buffer_ptr;
        if (pppplStack_230 != (int64_t ****)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        pppplStack_230 = (int64_t ****)0x0;
        ppplStack_220 = (int64_t ***)((uint64_t)ppplStack_220 & 0xffffffff00000000);
        pppplStack_238 = (int64_t ****)&system_state_ptr;
        puStack_188 = &system_state_ptr;
        uVar32 = uVar27;
        iVar34 = iStack_370;
        if (cVar8 == '\0') {
          uVar36 = *(uint64_t *)(uVar22 + *(int64_t *)(*plVar30 + 0x38));
          puStack_128 = &unknown_var_3480_ptr;
          puStack_120 = auStack_110;
          auStack_110[0] = 0;
          uStack_118 = 0x11;
          strcpy_s(auStack_110,0x40,&unknown_var_6072_ptr);
          cVar8 = FUN_1800755c0(uVar36,&puStack_128);
          puStack_128 = &system_state_ptr;
          uVar32 = uVar31;
          iVar34 = iStack_370;
          if (cVar8 != '\0') {
            iVar9 = iVar25;
          }
        }
      }
      iStack_370 = iVar34;
      uVar10 = (uint)uVar32;
      lVar20 = *plVar30;
      uVar22 = uVar22 + 0x10;
      uVar27 = (uint64_t)(iVar25 + 1U);
      uVar31 = uVar32;
      param_1 = lStack_2c0;
      uVar26 = uVar10;
      iVar34 = iVar9;
    } while ((uint64_t)(int64_t)(int)(iVar25 + 1U) <
             (uint64_t)(*(int64_t *)(lVar20 + 0x40) - *(int64_t *)(lVar20 + 0x38) >> 4));
  }
  iStack_348 = iVar34;
  uStack_384 = uVar26;
  lVar19 = **(int64_t **)(lVar20 + 0x38);
  uStack_200 = *(uint64_t *)(lVar19 + 0xb8);
  uStack_1f8 = *(uint64_t *)(lVar19 + 0xc0);
  uVar22 = uVar28;
  uVar27 = uVar28;
  if (*(int64_t *)(lVar20 + 0x40) - (int64_t)*(int64_t **)(lVar20 + 0x38) >> 4 != 0) {
    do {
      lVar20 = *(int64_t *)(uVar22 + *(int64_t *)(lVar20 + 0x38));
      pppplStack_238 = (int64_t ****)&unknown_var_672_ptr;
      pppplStack_230 = &ppplStack_220;
      ppplStack_220 = (int64_t ***)((uint64_t)ppplStack_220 & 0xffffffffffffff00);
      auStack_228[0] = 0xe;
      strcpy_s(&ppplStack_220,0x20,&unknown_var_6120_ptr);
      uStack_368 = (void **)&system_data_buffer_ptr;
      uStack_350 = 0;
      pppplStack_360 = (int64_t ****)0x0;
      uStack_358 = 0;
      CoreEngineDataBufferProcessor(&uStack_368,auStack_228[0]);
      if (0 < (int)auStack_228[0]) {
        pppplVar33 = (int64_t ****)&system_buffer_ptr;
        if (pppplStack_230 != (int64_t ****)0x0) {
          pppplVar33 = pppplStack_230;
        }
                    // WARNING: Subroutine does not return
        memcpy(pppplStack_360,pppplVar33,(int64_t)(int)(auStack_228[0] + 1));
      }
      if ((pppplStack_230 != (int64_t ****)0x0) &&
         (uStack_358 = 0, pppplStack_360 != (int64_t ****)0x0)) {
        *(int8_t *)pppplStack_360 = 0;
      }
      cVar8 = FUN_180063510(lVar20 + 0x218,&uStack_368);
      uStack_368 = (void **)&system_data_buffer_ptr;
      if (pppplStack_360 != (int64_t ****)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      pppplStack_360 = (int64_t ****)0x0;
      uStack_350 = uStack_350 & 0xffffffff00000000;
      uStack_368 = (void **)&system_state_ptr;
      pppplStack_238 = (int64_t ****)&system_state_ptr;
      if (cVar8 != '\0') {
        lVar20 = *(int64_t *)(*(int64_t *)(*plVar30 + 0x38) + (int64_t)(int)uVar27 * 0x10);
        uStack_200 = *(uint64_t *)(lVar20 + 0xb8);
        uStack_1f8 = *(uint64_t *)(lVar20 + 0xc0);
        break;
      }
      uVar26 = (int)uVar27 + 1;
      lVar20 = *plVar30;
      uVar22 = uVar22 + 0x10;
      uVar27 = (uint64_t)uVar26;
    } while ((uint64_t)(int64_t)(int)uVar26 <
             (uint64_t)(*(int64_t *)(lVar20 + 0x40) - *(int64_t *)(lVar20 + 0x38) >> 4));
  }
  lStack_298 = 0;
  lStack_290 = 0;
  uStack_288 = 0;
  uStack_280 = 3;
  (**(code **)(*(int64_t *)*plVar30 + 0xb8))((int64_t *)*plVar30,0,&lStack_298);
  if ((cStack_388 == '\0') && (plVar30 = plStack_320, lStack_290 - lStack_298 >> 3 != 0)) {
    bVar35 = iStack_310 == 5;
    uVar22 = uVar28;
    uVar27 = uVar28;
    do {
      puStack_3b8 = (void *)CONCAT71(puStack_3b8._1_7_,bVar35);
      FUN_1804b2750(param_1,*(uint64_t *)(lStack_298 + uVar22));
      pppplVar33 = *(int64_t *****)(lStack_298 + uVar22);
      if ((pppplVar33[0x37] != (int64_t ***)0x0) &&
         (((uint64_t)pppplVar33[0x37][0x27] & 0x200000) == 0)) {
        ppplStack_338 = (int64_t ***)pppplVar33;
        if (pppplVar33 != (int64_t ****)0x0) {
          (*(code *)(*pppplVar33)[5])(pppplVar33);
        }
        pppplStack_238 = (int64_t ****)0x0;
        pppplStack_230 = (int64_t ****)0x0;
        puStack_2f0 = auStack_228;
        pppplStack_210 = (int64_t ****)0x0;
        ppplStack_220 = (int64_t ***)0x0;
        auStack_228[0] = auStack_228[0] & 0xffffff00;
        if (pppplVar33 != (int64_t ****)0x0) {
          pppplStack_378 = pppplVar33;
          (*(code *)(*pppplVar33)[5])(pppplVar33);
        }
        pppplStack_378 = pppplStack_238;
        pppplVar29 = pppplVar33;
        if (pppplStack_238 != (int64_t ****)0x0) {
          ppplVar2 = *pppplStack_238;
          pppplStack_238 = pppplVar33;
          (*(code *)ppplVar2[7])();
          pppplVar29 = pppplStack_238;
        }
        pppplStack_238 = pppplVar29;
        uStack_218 = 0;
        ppplStack_220 = (int64_t ***)pppplVar33;
        FUN_18007f4c0(auStack_228);
        pppplVar29 = pppplStack_210;
        pppplStack_318 = pppplStack_210;
        if (pppplStack_210 != (int64_t ****)0x0) {
          (*(code *)(*pppplStack_210)[5])(pppplStack_210);
        }
        pppplVar23 = pppplStack_230;
        pppplStack_318 = pppplStack_230;
        pppplStack_230 = pppplVar29;
        if (pppplVar23 != (int64_t ****)0x0) {
          (*(code *)(*pppplVar23)[7])();
        }
        uStack_208 = 0;
        cStack_206 = '\0';
        if (pppplVar33 != (int64_t ****)0x0) {
          (*(code *)(*pppplVar33)[7])(pppplVar33);
        }
        FUN_180234a10(&pppplStack_238,1);
        puStack_1e8 = &unknown_var_3024_ptr;
        ppuStack_1e0 = (void **)&unknown_var_8160_ptr;
        uStack_1d8 = &unknown_var_3040_ptr;
        puStack_1d0 = &unknown_var_3120_ptr;
        puStack_1c8 = &unknown_var_3184_ptr;
        pcStack_1c0 = FUN_180234880;
        uStack_1b8 = 0;
        uStack_368 = &puStack_1e8;
        pppplStack_360 = pppplStack_230;
        FUN_18040fa30(&uStack_368);
        if ((int)(*(int *)(pppplStack_230 + 0x11) + (*(int *)(pppplStack_230 + 0x11) >> 0x1f & 3U))
            >> 2 < 0) {
          pplStack_3a8 = (int64_t **)&system_buffer_ptr;
          if (pppplStack_238[3] != (int64_t ***)0x0) {
            pplStack_3a8 = (int64_t **)pppplStack_238[3];
          }
          puStack_3a0 = (uint64_t *)
                        CONCAT44(puStack_3a0._4_4_,*(int32_t *)(pppplStack_230 + 0xc));
          pplStack_3b0 = (int64_t **)((uint64_t)pplStack_3b0 & 0xffffffff00000000);
          puStack_3b8 = &unknown_var_5472_ptr;
          FUN_1800623b0(system_message_context,0,0x80000000000,3);
        }
        uStack_208 = CONCAT11(uStack_208._1_1_,1);
        if ((pppplStack_238 != (int64_t ****)0x0) && (pppplStack_230 != (int64_t ****)0x0)) {
          if (cStack_206 != '\0') {
            FUN_180075b70();
          }
          FUN_18007f6a0(auStack_228);
          if ((char)uStack_208 != '\0') {
            FUN_180079520(pppplStack_238);
          }
          if (uStack_208._1_1_ != '\0') {
            FUN_180079520(pppplStack_238);
          }
          pppplVar33 = pppplStack_230;
          pppplStack_2f8 = pppplStack_230;
          pppplStack_230 = (int64_t ****)0x0;
          if (pppplVar33 != (int64_t ****)0x0) {
            (*(code *)(*pppplVar33)[7])();
          }
        }
        puStack_2f0 = auStack_228;
        FUN_18007f6a0(auStack_228);
        if (pppplStack_210 != (int64_t ****)0x0) {
          (*(code *)(*pppplStack_210)[7])();
        }
        if (pppplStack_230 != (int64_t ****)0x0) {
          (*(code *)(*pppplStack_230)[7])();
        }
        if (pppplStack_238 != (int64_t ****)0x0) {
          (*(code *)(*pppplStack_238)[7])();
        }
      }
      uVar26 = (int)uVar27 + 1;
      uVar27 = (uint64_t)uVar26;
      uVar22 = uVar22 + 8;
      plVar30 = plStack_320;
      uVar10 = uStack_384;
    } while ((uint64_t)(int64_t)(int)uVar26 < (uint64_t)(lStack_290 - lStack_298 >> 3));
  }
  plVar13 = plStack_320;
  fVar5 = param_19;
  uStack_384 = 0;
  lVar20 = *plVar30;
  if (*(int64_t *)(lVar20 + 0x40) - *(int64_t *)(lVar20 + 0x38) >> 4 != 0) {
    pppplStack_2e8 = (int64_t ****)(int64_t)iStack_370;
    pppplStack_2f8 = (int64_t ****)(int64_t)(int)uVar10;
    pppplVar33 = (int64_t ****)(int64_t)iStack_348;
    pppplStack_2c8 = (int64_t ****)0x0;
    fStack_29c = (float)(uStack_330 >> 0x18) * 0.003921569;
    uStack_2a8 = (int64_t *)
                 CONCAT44((float)(uStack_330 >> 8 & 0xff) * 0.003921569,
                          (float)(uStack_330 >> 0x10 & 0xff) * 0.003921569);
    plVar7 = uStack_2a8;
    fStack_2a0 = (float)(uStack_330 & 0xff) * 0.003921569;
    lStack_300 = 0;
    uVar36 = CONCAT44(fStack_29c,fStack_2a0);
    pppplStack_378 = pppplVar33;
    do {
      pppplVar29 = pppplStack_2c8;
      bVar24 = ~*(byte *)(lStack_300 + 8 + *(int64_t *)(lVar20 + 0x38)) & 1;
      lVar20 = *(int64_t *)(lStack_300 + *(int64_t *)(lVar20 + 0x38));
      *(int64_t **)(lVar20 + 0x238) = plVar7;
      *(uint64_t *)(lVar20 + 0x240) = uVar36;
      lStack_2e0 = lVar20;
      uVar10 = (uint)uVar28;
      if (pppplStack_2c8 == pppplStack_2f8) {
        if (bVar24 == 0) {
          lVar19 = *(int64_t *)(param_1 + 0xa40) + 0x20;
        }
        else {
          lVar19 = *(int64_t *)(param_1 + 0xa40) + 0x28;
        }
        plVar30 = *(int64_t **)(lVar19 + (int64_t)param_14 * 0x50);
        plStack_268 = plVar30;
        if (plVar30 != (int64_t *)0x0) {
          (**(code **)(*plVar30 + 0x28))(plVar30);
        }
        FUN_180076910(lVar20,&plStack_268);
        uStack_26c = 0x3f800000;
        uStack_278 = 0x3f800000;
        uStack_274 = 0x3f800000;
        uStack_270 = 0x3f800000;
        auVar4._8_4_ = 0x3f800000;
        auVar4._0_8_ = 0x3f8000003f800000;
        auVar4._12_4_ = 0x3f800000;
        *(int8_t (*) [16])(lVar20 + 0x238) = auVar4;
        uVar10 = uStack_384;
        if (plVar30 != (int64_t *)0x0) {
          (**(code **)(*plVar30 + 0x38))(plVar30);
          uVar10 = uStack_384;
        }
      }
      if (((pppplVar29 != pppplVar33) && (pppplVar29 != pppplStack_2e8)) &&
         (pppplVar29 != pppplStack_2f8)) {
        if (bVar24 == 0) {
          lVar20 = *(int64_t *)(param_1 + 0xa20) + 0x20;
        }
        else {
          lVar20 = *(int64_t *)(param_1 + 0xa20) + 0x28;
        }
        pppplVar23 = *(int64_t *****)(lVar20 + (int64_t)param_13 * 0x50);
        pppplStack_318 = pppplVar23;
        if (pppplVar23 != (int64_t ****)0x0) {
          (*(code *)(*pppplVar23)[5])(pppplVar23);
        }
        lVar20 = lStack_2e0;
        if (0 < *(int *)(param_1 + 0x3b0)) {
          lVar19 = (int64_t)aiStack_328[0];
          plVar30 = *(int64_t **)(*(int64_t *)(param_1 + 0x3a8) + 0x40 + lVar19 * 0x48);
          uStack_2a8 = plVar30;
          if (plVar30 != (int64_t *)0x0) {
            (**(code **)(*plVar30 + 0x28))(plVar30);
          }
          uStack_368 = (void **)0x0;
          pppplStack_360 = (int64_t ****)0x0;
          lVar20 = lStack_2e0;
          if (plVar30 != (int64_t *)0x0) {
            puVar18 = *(void **)(*(int64_t *)(param_1 + 0x3a8) + 8 + lVar19 * 0x48);
            puVar15 = &system_buffer_ptr;
            if (puVar18 != (void *)0x0) {
              puVar15 = puVar18;
            }
            lVar20 = strstr(puVar15,&unknown_var_6112_ptr);
            cStack_380 = lVar20 != 0;
            FUN_18022cb40(pppplVar23,&uStack_330);
            uStack_37c = uStack_37c | 2;
            lVar20 = CONCAT44(uStack_32c,uStack_330);
            ppplVar2 = pppplVar23[0x17];
            if (ppplVar2 != (int64_t ***)0x0) {
              pplStack_260 = (int64_t **)ppplVar2;
              (*(code *)(*ppplVar2)[5])(ppplVar2);
            }
            pplStack_260 = *(int64_t ***)(lVar20 + 0xb8);
            *(int64_t ****)(lVar20 + 0xb8) = ppplVar2;
            if (pplStack_260 != (int64_t **)0x0) {
              (**(code **)((int64_t)*pplStack_260 + 0x38))();
            }
            FUN_18022ce40(lVar20);
            lVar20 = CONCAT44(uStack_32c,uStack_330);
            plVar3 = (int64_t *)plVar30[0x17];
            if (plVar3 != (int64_t *)0x0) {
              plStack_258 = plVar3;
              (**(code **)(*plVar3 + 0x28))(plVar3);
            }
            plStack_258 = *(int64_t **)(lVar20 + 0x108);
            *(int64_t **)(lVar20 + 0x108) = plVar3;
            if (plStack_258 != (int64_t *)0x0) {
              (**(code **)(*plStack_258 + 0x38))();
            }
            FUN_18022ce40(lVar20);
            lVar20 = CONCAT44(uStack_32c,uStack_330);
            ppplVar2 = pppplVar23[0x19];
            if (ppplVar2 != (int64_t ***)0x0) {
              pplStack_250 = (int64_t **)ppplVar2;
              (*(code *)(*ppplVar2)[5])(ppplVar2);
            }
            pplStack_250 = *(int64_t ***)(lVar20 + 200);
            *(int64_t ****)(lVar20 + 200) = ppplVar2;
            if (pplStack_250 != (int64_t **)0x0) {
              (**(code **)((int64_t)*pplStack_250 + 0x38))();
            }
            FUN_18022ce40(lVar20);
            lVar20 = CONCAT44(uStack_32c,uStack_330);
            plVar3 = (int64_t *)plVar30[0x18];
            if (plVar3 != (int64_t *)0x0) {
              puStack_2f0 = (uint *)plVar3;
              (**(code **)(*plVar3 + 0x28))(plVar3);
            }
            puStack_2f0 = *(uint **)(lVar20 + 0x110);
            *(int64_t **)(lVar20 + 0x110) = plVar3;
            if (puStack_2f0 != (uint *)0x0) {
              (**(code **)(*(int64_t *)puStack_2f0 + 0x38))();
            }
            FUN_18022ce40(lVar20);
            uStack_368 = (void **)CONCAT44(uStack_368._4_4_,0x3f800000);
            if (cStack_380 == '\0') {
              iVar9 = *(int *)(param_1 + 0x5c4) + -1;
              fVar39 = fVar5;
              if (0.99 <= fVar5) {
                fVar39 = 0.99;
              }
              fVar39 = (float)iVar9 * fVar39;
              iVar34 = (int)fVar39;
              fVar37 = fVar39;
              if ((iVar34 != -0x80000000) && ((float)iVar34 != fVar39)) {
                auVar38._4_4_ = fVar39;
                auVar38._0_4_ = fVar39;
                auVar38._8_8_ = 0;
                uVar10 = movmskps(iVar9,auVar38);
                fVar37 = (float)(int)(iVar34 - (uVar10 & 1));
              }
              lVar20 = (int64_t)(int)(fVar37 + 0.1);
              fVar39 = fVar39 - fVar37;
              fVar37 = 1.0 - fVar39;
              uVar26 = (uint)(int64_t)
                             ((fVar37 * *(float *)(param_1 + 0x3c4 + lVar20 * 0x10) +
                              fVar39 * *(float *)(param_1 + 0x3d4 + lVar20 * 0x10)) * 256.0);
              uVar10 = 0xff;
              if (uVar26 < 0xff) {
                uVar10 = uVar26;
              }
              uVar21 = (uint)(int64_t)
                             ((fVar39 * *(float *)(param_1 + 0x3d8 + lVar20 * 0x10) +
                              fVar37 * *(float *)(param_1 + 0x3c8 + lVar20 * 0x10)) * 256.0);
              uVar26 = 0xff;
              if (uVar21 < 0xff) {
                uVar26 = uVar21;
              }
              uVar16 = (uint)(int64_t)
                             ((fVar39 * *(float *)(param_1 + 0x3dc + lVar20 * 0x10) +
                              fVar37 * *(float *)(param_1 + 0x3cc + lVar20 * 0x10)) * 256.0);
              uVar21 = 0xff;
              if (uVar16 < 0xff) {
                uVar21 = uVar16;
              }
              uVar10 = ((uVar10 | 0xffffff00) << 8 | uVar26) << 8 | uVar21;
              *(float *)(lStack_2e0 + 0x2a8) = (float)(uVar10 >> 0x10 & 0xff) * 0.003921569;
              *(float *)(lStack_2e0 + 0x2ac) = (float)(uVar10 >> 8 & 0xff) * 0.003921569;
              *(float *)(lStack_2e0 + 0x2b0) = (float)(uVar21 & 0xff) * 0.003921569;
              *(float *)(lStack_2e0 + 0x2b4) = (float)(uVar10 >> 0x18) * 0.003921569;
            }
            else {
              if (pppplStack_2e8 != (int64_t ****)0xffffffffffffffff) {
                lVar20 = *(int64_t *)
                          (*(int64_t *)(*plVar13 + 0x38) + (int64_t)pppplStack_2e8 * 0x10);
                puVar18 = *(void **)(*(int64_t *)(param_1 + 0x3a8) + 8 + lVar19 * 0x48);
                puVar15 = &system_buffer_ptr;
                if (puVar18 != (void *)0x0) {
                  puVar15 = puVar18;
                }
                lVar14 = strstr(puVar15,&unknown_var_6352_ptr);
                puVar18 = *(void **)(*(int64_t *)(param_1 + 0x3a8) + 8 + lVar19 * 0x48);
                puVar15 = &system_buffer_ptr;
                if (puVar18 != (void *)0x0) {
                  puVar15 = puVar18;
                }
                lVar19 = strstr(puVar15,&unknown_var_6336_ptr);
                if (lVar14 != 0) {
                  *(int32_t *)(lVar20 + 0x2a8) = 0x3f800000;
                }
                if (lVar19 != 0) {
                  *(int32_t *)(lVar20 + 0x2ac) = 0x3f800000;
                }
              }
              uStack_368 = (void **)CONCAT44(0x3f800000,(int32_t)uStack_368);
            }
            lVar20 = lStack_2e0;
            pppplVar33 = (int64_t ****)CONCAT44(uStack_32c,uStack_330);
            if (pppplVar33 != (int64_t ****)0x0) {
              ppplStack_338 = (int64_t ***)pppplVar33;
              (*(code *)(*pppplVar33)[5])(pppplVar33);
            }
            ppplStack_338 = (int64_t ***)pppplVar23;
            pppplStack_318 = pppplVar33;
            if (pppplVar23 != (int64_t ****)0x0) {
              (*(code *)(*pppplVar23)[7])();
            }
            uStack_37c = uStack_37c & 0xfffffffd;
            pppplVar23 = pppplVar33;
            if ((int64_t *)CONCAT44(uStack_32c,uStack_330) != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)CONCAT44(uStack_32c,uStack_330) + 0x38))();
            }
          }
          *(void ***)(lVar20 + 0x2b8) = uStack_368;
          *(int64_t *****)(lVar20 + 0x2c0) = pppplStack_360;
          pppplVar29 = pppplStack_2c8;
          if (plVar30 != (int64_t *)0x0) {
            (**(code **)(*plVar30 + 0x38))(plVar30);
            pppplVar29 = pppplStack_2c8;
          }
        }
        FUN_180076910(lVar20,&pppplStack_318);
        pppplVar33 = pppplStack_378;
        uVar10 = uStack_384;
        if (pppplVar23 != (int64_t ****)0x0) {
          (*(code *)(*pppplVar23)[7])(pppplVar23);
          pppplVar33 = pppplStack_378;
          uVar10 = uStack_384;
        }
      }
      uStack_384 = uVar10 + 1;
      uVar28 = (uint64_t)uStack_384;
      pppplStack_2c8 = (int64_t ****)((int64_t)pppplVar29 + 1);
      lStack_300 = lStack_300 + 0x10;
      lVar20 = *plVar13;
      plVar30 = plStack_320;
    } while ((uint64_t)(int64_t)(int)uStack_384 <
             (uint64_t)(*(int64_t *)(lVar20 + 0x40) - *(int64_t *)(lVar20 + 0x38) >> 4));
  }
  iVar34 = 0;
  aiStack_328[0] = param_18;
  lVar19 = (int64_t)iStack_370;
  iVar9 = iStack_370;
  if (-1 < iStack_370) {
    uVar11 = 0xffffffff;
    if (-1 < param_13) {
      uVar11 = func_0x0001804af570(param_1,aiStack_328);
    }
    FUN_180094f80(*(uint64_t *)(*(int64_t *)(lVar20 + 0x38) + lVar19 * 0x10),uVar11);
    iVar9 = (int)lVar19;
    lVar20 = *plVar30;
  }
  pplVar6 = pplStack_308;
  uVar11 = uStack_340;
  uVar10 = uStack_344;
  cVar8 = cStack_388;
  plVar13 = *(int64_t **)(lVar20 + 0x38);
  if (*(int64_t *)(lVar20 + 0x40) - (int64_t)plVar13 >> 4 != 0) {
    do {
      if ((iVar34 != iStack_348) && (iVar34 != iVar9)) {
        *(int32_t *)(*plVar13 + 0x2b4) = param_20;
      }
      iVar34 = iVar34 + 1;
      plVar13 = *(int64_t **)(lVar20 + 0x38);
      param_1 = lStack_2c0;
    } while ((uint64_t)(int64_t)iVar34 <
             (uint64_t)(*(int64_t *)(lVar20 + 0x40) - (int64_t)plVar13 >> 4));
  }
  if (((0 < iStack_2d8) && (iStack_2d8 < *(int *)(param_1 + 0x390))) && (iStack_310 != 5)) {
    puStack_398 = &uStack_200;
    puStack_3a0 = (uint64_t *)CONCAT71(puStack_3a0._1_7_,cStack_388);
    pplStack_3a8 = pplStack_308;
    pplStack_3b0 = (int64_t **)CONCAT44(pplStack_3b0._4_4_,uStack_344);
    puStack_3b8 = (void *)CONCAT44(puStack_3b8._4_4_,uStack_340);
    uVar36 = FUN_1804b39e0((int64_t)iStack_2d8 * 400 + *(int64_t *)(param_1 + 0x388),
                           &ppplStack_338,param_1,iStack_310);
    FUN_180060b80(plStack_2b8,uVar36);
    if ((int64_t ****)ppplStack_338 != (int64_t ****)0x0) {
      (*(code *)(*ppplStack_338)[7])();
    }
  }
  if (((-1 < iStack_2d4) && (iStack_2d4 < *(int *)(param_1 + 0x380))) && (iStack_2d0 != 5)) {
    puStack_398 = &uStack_200;
    puStack_3a0 = (uint64_t *)CONCAT71(puStack_3a0._1_7_,cVar8);
    pplStack_3a8 = pplVar6;
    pplStack_3b0 = (int64_t **)CONCAT44(pplStack_3b0._4_4_,uVar10);
    puStack_3b8 = (void *)CONCAT44(puStack_3b8._4_4_,uVar11);
    uVar36 = FUN_1804b4700((int64_t)iStack_2d4 * 400 + *(int64_t *)(param_1 + 0x378),
                           &ppplStack_338,param_1);
    FUN_180060b80(plStack_2b0,uVar36);
    if ((int64_t ****)ppplStack_338 != (int64_t ****)0x0) {
      (*(code *)(*ppplStack_338)[7])();
    }
  }
  puStack_3a0 = &uStack_200;
  pplStack_3a8 = (int64_t **)CONCAT71(pplStack_3a8._1_7_,cVar8);
  pplStack_3b0 = pplVar6;
  puStack_3b8 = (void *)CONCAT44(puStack_3b8._4_4_,uVar10);
  uVar36 = FUN_1804b3c30((int64_t)iStack_2cc * 0x58 + *(int64_t *)(param_1 + 0x398),&ppplStack_338
                         ,param_1,uVar11);
  FUN_180060b80(uStack_248,uVar36);
  if ((int64_t ****)ppplStack_338 != (int64_t ****)0x0) {
    (*(code *)(*ppplStack_338)[7])();
  }
  if (lStack_298 == 0) {
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_c8 ^ (uint64_t)auStack_3d8);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Removing unreachable block (ram,0x0001804b10a7)
// WARNING: Removing unreachable block (ram,0x0001804b10b5)
// WARNING: Removing unreachable block (ram,0x0001804b10ac)
// WARNING: Removing unreachable block (ram,0x0001804b10b8)
// WARNING: Removing unreachable block (ram,0x0001804b10bd)
// WARNING: Removing unreachable block (ram,0x0001804b10c7)
// WARNING: Removing unreachable block (ram,0x0001804b13b7)
// WARNING: Removing unreachable block (ram,0x0001804b13d4)
// WARNING: Removing unreachable block (ram,0x0001804b1407)
// WARNING: Removing unreachable block (ram,0x0001804b100a)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address






