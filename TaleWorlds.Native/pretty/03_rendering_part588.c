#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part588.c - 1 个函数

// 函数: void FUN_18058e430(int64_t *param_1,int64_t param_2,int64_t param_3,uint param_4,int64_t param_5
void FUN_18058e430(int64_t *param_1,int64_t param_2,int64_t param_3,uint param_4,int64_t param_5
                  ,int64_t *param_6,int32_t param_7,int64_t *param_8,int64_t *param_9,
                  int32_t param_10,int8_t param_11)

{
  int64_t *plVar1;
  int8_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  uint64_t *puVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint uVar12;
  int8_t auStack_2b8 [32];
  void **ppuStack_298;
  void **ppuStack_290;
  uint64_t uStack_288;
  int64_t **pplStack_280;
  int64_t **pplStack_278;
  int32_t uStack_270;
  int8_t uStack_268;
  int8_t uStack_258;
  uint uStack_254;
  int64_t *plStack_250;
  int32_t uStack_248;
  int64_t *plStack_240;
  int64_t *plStack_238;
  int64_t **pplStack_230;
  int64_t *plStack_228;
  int64_t lStack_220;
  int64_t *plStack_218;
  uint64_t uStack_210;
  int64_t *plStack_208;
  void *puStack_1f8;
  uint64_t *puStack_1f0;
  uint64_t uStack_1e8;
  uint64_t auStack_1e0 [8];
  int32_t uStack_1a0;
  uint64_t uStack_19c;
  uint64_t uStack_194;
  uint64_t uStack_18c;
  uint64_t uStack_184;
  int32_t uStack_17c;
  int32_t uStack_178;
  uint64_t uStack_174;
  uint64_t uStack_16c;
  uint64_t uStack_164;
  int32_t uStack_15c;
  void *puStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  int64_t *plStack_138;
  int64_t *plStack_130;
  int64_t *plStack_128;
  int64_t *plStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  int32_t uStack_100;
  int32_t uStack_fc;
  int32_t uStack_f8;
  int32_t uStack_f4;
  int32_t uStack_f0;
  int32_t uStack_ec;
  int32_t uStack_e8;
  int32_t uStack_e4;
  int32_t uStack_e0;
  int32_t uStack_dc;
  int32_t uStack_d8;
  int32_t uStack_d4;
  int32_t uStack_d0;
  int32_t uStack_cc;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int64_t *plStack_98;
  uint64_t uStack_58;
  uint64_t uVar13;
  
  uStack_210 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2b8;
  uVar11 = (uint64_t)param_4;
  lStack_220 = param_5;
  plStack_238 = param_6;
  plStack_208 = param_8;
  plStack_240 = param_9;
  uStack_248 = param_10;
  uStack_258 = param_11;
  uStack_254 = 0;
  *(int32_t *)(param_1 + 6) = *(int32_t *)(param_2 + 0xfc);
  uVar4 = FUN_180590b50(param_2,&puStack_158);
  FUN_18058ed20(param_1 + 0x20,uVar4);
  if (plStack_98 != (int64_t *)0x0) {
    (**(code **)(*plStack_98 + 0x38))();
  }
  if (plStack_120 != (int64_t *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
  if (plStack_128 != (int64_t *)0x0) {
    (**(code **)(*plStack_128 + 0x38))();
  }
  if (plStack_130 != (int64_t *)0x0) {
    (**(code **)(*plStack_130 + 0x38))();
  }
  if (plStack_138 != (int64_t *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  plVar1 = param_1 + 0x1a;
  uVar9 = (uint64_t)(int)param_4;
  uVar13 = (param_1[0x1b] - *plVar1) / 0xa0;
  if (uVar13 < uVar9) {
    FUN_1805906f0(plVar1,uVar9 - uVar13);
  }
  else {
    param_1[0x1b] = uVar9 * 0xa0 + *plVar1;
  }
  if (0 < (int)param_4) {
    lVar10 = 0;
    do {
      func_0x0001805905f0(*plVar1 + lVar10,lVar10 + param_3);
      lVar10 = lVar10 + 0xa0;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar12 = uStack_1e8._4_4_;
  *(int16_t *)((int64_t)param_1 + 10) = *(int16_t *)(param_2 + 0x11c);
  *(int32_t *)(param_1 + 0x17) = *(int32_t *)(param_2 + 0x110);
  *(int32_t *)((int64_t)param_1 + 0xbc) = *(int32_t *)(param_2 + 0x114);
  *(int8_t *)((int64_t)param_1 + 0xcc) = *(int8_t *)(param_2 + 0x11e);
  uVar4 = *(uint64_t *)(param_2 + 0x138);
  *(uint64_t *)((int64_t)param_1 + 100) = *(uint64_t *)(param_2 + 0x130);
  *(uint64_t *)((int64_t)param_1 + 0x6c) = uVar4;
  uVar4 = *(uint64_t *)(param_2 + 0x148);
  *(uint64_t *)((int64_t)param_1 + 0x74) = *(uint64_t *)(param_2 + 0x140);
  *(uint64_t *)((int64_t)param_1 + 0x7c) = uVar4;
  uVar4 = *(uint64_t *)(param_2 + 0x158);
  *(uint64_t *)((int64_t)param_1 + 0x84) = *(uint64_t *)(param_2 + 0x150);
  *(uint64_t *)((int64_t)param_1 + 0x8c) = uVar4;
  uVar4 = *(uint64_t *)(param_2 + 0x168);
  *(uint64_t *)((int64_t)param_1 + 0x94) = *(uint64_t *)(param_2 + 0x160);
  *(uint64_t *)((int64_t)param_1 + 0x9c) = uVar4;
  *(int32_t *)(param_1 + 9) = *(int32_t *)(param_2 + 0x170);
  *(int32_t *)(param_1 + 10) = *(int32_t *)(param_2 + 0x118);
  *(int32_t *)((int64_t)param_1 + 0x4c) = *(int32_t *)(param_2 + 0x174);
  uVar4 = *(uint64_t *)(param_2 + 0x180);
  *(uint64_t *)((int64_t)param_1 + 0x54) = *(uint64_t *)(param_2 + 0x178);
  *(uint64_t *)((int64_t)param_1 + 0x5c) = uVar4;
  lVar10 = *(int64_t *)(param_2 + 400);
  param_1[0x15] = *(int64_t *)(param_2 + 0x188);
  param_1[0x16] = lVar10;
  uVar11 = 0;
  puStack_1f8 = &memory_allocator_3432_ptr;
  puStack_1f0 = auStack_1e0;
  uStack_1e8 = (uint64_t)uStack_1e8._4_4_ << 0x20;
  auStack_1e0[0] = auStack_1e0[0] & 0xffffffffffffff00;
  if (param_2 + 0x1a0 != 0) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (*(char *)(param_2 + 0x1a0 + lVar10) != '\0');
    uStack_1e8 = CONCAT44(uVar12,(int)lVar10);
    strcpy_s(auStack_1e0,0x80);
  }
  uVar3 = FUN_1800c17c0();
  *(int32_t *)(param_1 + 0x19) = uVar3;
  puStack_1f8 = &system_state_ptr;
  plVar8 = *(int64_t **)(param_2 + 0xa0);
  if (plVar8 != (int64_t *)0x0) {
    plStack_250 = plVar8;
    (**(code **)(*plVar8 + 0x28))(plVar8);
  }
  plStack_250 = (int64_t *)param_1[7];
  param_1[7] = (int64_t)plVar8;
  if (plStack_250 != (int64_t *)0x0) {
    (**(code **)(*plStack_250 + 0x38))();
  }
  *(int32_t *)((int64_t)param_1 + 0x34) = *(int32_t *)(param_2 + 0xf8);
  *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_2 + 0x198);
  *(int32_t *)((int64_t)param_1 + 0xc4) = *(int32_t *)(param_2 + 0x19c);
  *(int16_t *)(param_1 + 1) = *(int16_t *)(param_2 + 0x230);
  *(int32_t *)(param_1 + 0x1e) = *(int32_t *)(param_2 + 0x234);
  *(int32_t *)((int64_t)param_1 + 0xa4) = *(int32_t *)(param_2 + 0x238);
  lVar10 = param_1[2];
  uVar13 = uVar11;
  if (param_1[3] - lVar10 >> 3 != 0) {
    do {
      lVar10 = *(int64_t *)(uVar11 + lVar10);
      if (lVar10 != 0) {
        FUN_18058f420(lVar10);
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar10);
      }
      *(uint64_t *)(uVar11 + param_1[2]) = 0;
      uVar12 = (int)uVar13 + 1;
      uVar13 = (uint64_t)uVar12;
      uVar11 = uVar11 + 8;
      lVar10 = param_1[2];
    } while ((uint64_t)(int64_t)(int)uVar12 < (uint64_t)(param_1[3] - lVar10 >> 3));
  }
  param_1[3] = lVar10;
  if (*(int *)(lStack_220 + 0xfc) < 0) {
    *param_1 = 0;
  }
  else {
    uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1f8,8,3);
    lVar5 = FUN_18058f390(uVar4);
    *param_1 = lVar5;
    pplStack_230 = &plStack_228;
    lVar10 = *param_8;
    if ((lVar10 == 0) ||
       (*(int64_t *)(lVar10 + 0x1c8) - (int64_t)*(uint64_t **)(lVar10 + 0x1c0) >> 3 == 0)) {
      plStack_218 = (int64_t *)0x0;
      pplVar6 = &plStack_218;
      uVar12 = 2;
      plVar8 = (int64_t *)0x0;
    }
    else {
      plVar8 = (int64_t *)**(uint64_t **)(lVar10 + 0x1c0);
      plStack_250 = plVar8;
      if (plVar8 != (int64_t *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8);
      }
      pplVar6 = &plStack_250;
      uVar12 = 1;
    }
    plStack_228 = plVar8;
    *pplVar6 = (int64_t *)0x0;
    uStack_268 = 0;
    uStack_270 = 0xffffffff;
    pplStack_278 = (int64_t **)0x0;
    pplStack_280 = &plStack_228;
    uStack_288 = (int64_t **)((uint64_t)uStack_288._4_4_ << 0x20);
    ppuStack_290 = (void **)0x0;
    ppuStack_298 = (void **)&processed_var_5760_ptr;
    uStack_254 = uVar12;
    FUN_18058e430(lVar5,lStack_220,plStack_238,param_7);
    if (((uVar12 & 2) != 0) &&
       (uVar12 = uVar12 & 0xfffffffd, uStack_254 = uVar12, plStack_218 != (int64_t *)0x0)) {
      (**(code **)(*plStack_218 + 0x38))();
    }
    if (((uVar12 & 1) != 0) && (uStack_254 = uVar12 & 0xfffffffe, plStack_250 != (int64_t *)0x0)) {
      (**(code **)(*plStack_250 + 0x38))();
    }
  }
  plVar8 = plStack_240;
  if (((int)param_1[6] < 1) ||
     (((*(uint64_t *)((int64_t)(int)param_1[0x1e] * 0xa0 + 0x50 + *plVar1) & 0x200) != 0 &&
      ((short)param_1[1] < 1)))) {
    if (plStack_240 != (int64_t *)0x0) {
      pplStack_230 = &plStack_240;
      plStack_240 = (int64_t *)0x0;
      puStack_1f8 = (void *)0x3f800000;
      puStack_1f0 = (uint64_t *)0x0;
      uStack_1e8 = 0x3f80000000000000;
      auStack_1e0[0] = 0;
      auStack_1e0[1] = 0;
      auStack_1e0[2] = 0x3f800000;
      auStack_1e0[3] = 0;
      auStack_1e0[4] = 0x3f80000000000000;
      auStack_1e0[5] = 0;
      auStack_1e0[6] = 0;
      auStack_1e0[7] = 0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      uStack_194 = 0x64ffffffff;
      uStack_18c = 100;
      uStack_184 = 0;
      uStack_17c = 0;
      uStack_178 = 100;
      uStack_174 = 0;
      uStack_16c = 0;
      uStack_164 = 0;
      uStack_15c = 0;
      puStack_158 = (void *)0x3f800000;
      uStack_150 = 0;
      uStack_148 = 0x3f80000000000000;
      uStack_140 = 0;
      plStack_138 = (int64_t *)0x0;
      plStack_130 = (int64_t *)0x3f800000;
      plStack_128 = (int64_t *)0x0;
      plStack_120 = (int64_t *)0x3f80000000000000;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_f8 = 0;
      uStack_f4 = 0xffffffff;
      uStack_f0 = 100;
      uStack_ec = 100;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_d8 = 100;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      pplStack_278 = (int64_t **)0x0;
      pplStack_280 = (int64_t **)CONCAT71(pplStack_280._1_7_,uStack_258);
      uStack_288 = &plStack_240;
      ppuStack_290 = &puStack_1f8;
      ppuStack_298 = &puStack_158;
      FUN_180540960(plVar8,uStack_248,0,0);
    }
  }
  else if (plStack_240 != (int64_t *)0x0) {
    pplStack_230 = &plStack_250;
    plStack_250 = (int64_t *)*param_8;
    if (plStack_250 != (int64_t *)0x0) {
      (**(code **)(*plStack_250 + 0x28))();
    }
    lVar10 = *param_1;
    if (lVar10 == 0) {
      puStack_1f8 = (void *)0x3f800000;
      puStack_1f0 = (uint64_t *)0x0;
      uStack_1e8 = 0x3f80000000000000;
      auStack_1e0[0] = 0;
      auStack_1e0[1] = 0;
      auStack_1e0[2] = 0x3f800000;
      auStack_1e0[3] = 0;
      auStack_1e0[4] = 0x3f80000000000000;
      auStack_1e0[5] = 0;
      auStack_1e0[6] = 0;
      auStack_1e0[7] = 0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      uStack_194 = 0x64ffffffff;
      uStack_18c = 100;
      uStack_184 = 0;
      uStack_17c = 0;
      uStack_178 = 100;
      uStack_174 = 0;
      uStack_16c = 0;
      uStack_164 = 0;
      uStack_15c = 0;
      ppuStack_290 = &puStack_1f8;
    }
    else {
      puVar7 = (uint64_t *)
               ((int64_t)*(int *)(lVar10 + 0xf0) * 0xa0 + *(int64_t *)(lVar10 + 0xd0));
      puStack_158 = (void *)*puVar7;
      uStack_150 = puVar7[1];
      uStack_148 = puVar7[2];
      uStack_140 = puVar7[3];
      plStack_138 = (int64_t *)puVar7[4];
      plStack_130 = (int64_t *)puVar7[5];
      plStack_128 = (int64_t *)puVar7[6];
      plStack_120 = (int64_t *)puVar7[7];
      uStack_118 = puVar7[8];
      uStack_110 = puVar7[9];
      uStack_108 = puVar7[10];
      uStack_100 = (int32_t)puVar7[0xb];
      uStack_fc = (int32_t)((uint64_t)puVar7[0xb] >> 0x20);
      uStack_f8 = (int32_t)puVar7[0xc];
      uStack_f4 = (int32_t)((uint64_t)puVar7[0xc] >> 0x20);
      uStack_f0 = (int32_t)puVar7[0xd];
      uStack_ec = (int32_t)((uint64_t)puVar7[0xd] >> 0x20);
      uStack_e8 = (int32_t)puVar7[0xe];
      uStack_e4 = (int32_t)((uint64_t)puVar7[0xe] >> 0x20);
      uStack_e0 = (int32_t)puVar7[0xf];
      uStack_dc = (int32_t)((uint64_t)puVar7[0xf] >> 0x20);
      uStack_d8 = (int32_t)puVar7[0x10];
      uStack_d4 = (int32_t)((uint64_t)puVar7[0x10] >> 0x20);
      uStack_d0 = (int32_t)puVar7[0x11];
      uStack_cc = (int32_t)((uint64_t)puVar7[0x11] >> 0x20);
      uStack_c8 = (int32_t)puVar7[0x12];
      uStack_c4 = (int32_t)((uint64_t)puVar7[0x12] >> 0x20);
      uStack_c0 = (int32_t)puVar7[0x13];
      uStack_bc = (int32_t)((uint64_t)puVar7[0x13] >> 0x20);
      ppuStack_290 = &puStack_158;
    }
    ppuStack_298 = (void **)((int64_t)(int)param_1[0x1e] * 0xa0 + *plVar1);
    lVar5 = lVar10 + 0x100;
    if (lVar10 == 0) {
      lVar5 = 0;
    }
    pplStack_278 = &plStack_238;
    pplStack_280 = (int64_t **)CONCAT71(pplStack_280._1_7_,uStack_258);
    uStack_288 = &plStack_250;
    lVar10 = FUN_180540960(plVar8,uStack_248,param_1 + 0x20,lVar5);
    param_1[0x1f] = lVar10;
    if (((*(uint *)((int64_t)(int)param_1[0x1e] * 0xa0 + 0x50 + *plVar1) >> 8 & 1) == 0) ||
       (0 < (short)param_1[1])) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(int8_t *)(lVar10 + 0x126) = uVar2;
    FUN_18058e3b0(param_1);
    if (*param_1 != 0) {
      *(int64_t **)(*param_1 + 0xf8) = plStack_238;
      lVar10 = *param_1;
      if (((*(uint *)((int64_t)*(int *)(lVar10 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar10 + 0xd0)
                     ) >> 8 & 1) == 0) || (0 < *(short *)(lVar10 + 8))) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *(int8_t *)((int64_t)plStack_238 + 0x126) = uVar2;
      FUN_18058e3b0(*param_1);
    }
    lVar10 = FUN_18058fdf0(*(uint64_t *)(param_2 + 0xa8));
    param_1[8] = lVar10;
    goto LAB_18058ecd4;
  }
  pplStack_230 = (int64_t **)param_1[8];
  if (pplStack_230 != (int64_t **)0x0) {
    plStack_238 = (int64_t *)pplStack_230 + 0x11;
    if (*plStack_238 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (*pplStack_230 == (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(pplStack_230);
    }
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[8] = 0;
  param_1[0x1f] = 0;
  pplStack_230 = (int64_t **)0x0;
LAB_18058ecd4:
  if ((int64_t *)*param_8 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_2b8);
}



int32_t * FUN_18058ed20(int32_t *param_1,int32_t *param_2)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  uVar1 = *(uint64_t *)(param_2 + 8);
  *(uint64_t *)(param_2 + 8) = 0;
  plVar2 = *(int64_t **)(param_1 + 8);
  *(uint64_t *)(param_1 + 8) = uVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  uVar1 = *(uint64_t *)(param_2 + 10);
  *(uint64_t *)(param_2 + 10) = 0;
  plVar2 = *(int64_t **)(param_1 + 10);
  *(uint64_t *)(param_1 + 10) = uVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  uVar1 = *(uint64_t *)(param_2 + 0xc);
  *(uint64_t *)(param_2 + 0xc) = 0;
  plVar2 = *(int64_t **)(param_1 + 0xc);
  *(uint64_t *)(param_1 + 0xc) = uVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  uVar1 = *(uint64_t *)(param_2 + 0xe);
  *(uint64_t *)(param_2 + 0xe) = 0;
  plVar2 = *(int64_t **)(param_1 + 0xe);
  *(uint64_t *)(param_1 + 0xe) = uVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int8_t *)(param_1 + 0x10) = *(int8_t *)(param_2 + 0x10);
  *(int8_t *)((int64_t)param_1 + 0x41) = *(int8_t *)((int64_t)param_2 + 0x41);
  *(int8_t *)((int64_t)param_1 + 0x42) = *(int8_t *)((int64_t)param_2 + 0x42);
  *(int8_t *)((int64_t)param_1 + 0x43) = *(int8_t *)((int64_t)param_2 + 0x43);
  *(int8_t *)(param_1 + 0x11) = *(int8_t *)(param_2 + 0x11);
  *(int8_t *)((int64_t)param_1 + 0x45) = *(int8_t *)((int64_t)param_2 + 0x45);
  *(int8_t *)((int64_t)param_1 + 0x46) = *(int8_t *)((int64_t)param_2 + 0x46);
  *(int8_t *)((int64_t)param_1 + 0x47) = *(int8_t *)((int64_t)param_2 + 0x47);
  *(int8_t *)(param_1 + 0x12) = *(int8_t *)(param_2 + 0x12);
  *(int8_t *)((int64_t)param_1 + 0x49) = *(int8_t *)((int64_t)param_2 + 0x49);
  *(int8_t *)((int64_t)param_1 + 0x4a) = *(int8_t *)((int64_t)param_2 + 0x4a);
  *(int8_t *)((int64_t)param_1 + 0x4b) = *(int8_t *)((int64_t)param_2 + 0x4b);
  *(int8_t *)(param_1 + 0x13) = *(int8_t *)(param_2 + 0x13);
  *(int8_t *)((int64_t)param_1 + 0x4d) = *(int8_t *)((int64_t)param_2 + 0x4d);
  *(int8_t *)((int64_t)param_1 + 0x4e) = *(int8_t *)((int64_t)param_2 + 0x4e);
  *(int8_t *)((int64_t)param_1 + 0x4f) = *(int8_t *)((int64_t)param_2 + 0x4f);
  *(int8_t *)(param_1 + 0x14) = *(int8_t *)(param_2 + 0x14);
  *(int8_t *)((int64_t)param_1 + 0x51) = *(int8_t *)((int64_t)param_2 + 0x51);
  *(int8_t *)((int64_t)param_1 + 0x52) = *(int8_t *)((int64_t)param_2 + 0x52);
  *(int8_t *)((int64_t)param_1 + 0x53) = *(int8_t *)((int64_t)param_2 + 0x53);
  *(int8_t *)(param_1 + 0x15) = *(int8_t *)(param_2 + 0x15);
  *(int8_t *)((int64_t)param_1 + 0x55) = *(int8_t *)((int64_t)param_2 + 0x55);
  *(int8_t *)((int64_t)param_1 + 0x56) = *(int8_t *)((int64_t)param_2 + 0x56);
  *(int8_t *)((int64_t)param_1 + 0x57) = *(int8_t *)((int64_t)param_2 + 0x57);
  *(int8_t *)(param_1 + 0x16) = *(int8_t *)(param_2 + 0x16);
  *(int8_t *)((int64_t)param_1 + 0x59) = *(int8_t *)((int64_t)param_2 + 0x59);
  *(int8_t *)((int64_t)param_1 + 0x5a) = *(int8_t *)((int64_t)param_2 + 0x5a);
  *(int8_t *)((int64_t)param_1 + 0x5b) = *(int8_t *)((int64_t)param_2 + 0x5b);
  *(int8_t *)(param_1 + 0x17) = *(int8_t *)(param_2 + 0x17);
  *(int8_t *)((int64_t)param_1 + 0x5d) = *(int8_t *)((int64_t)param_2 + 0x5d);
  *(int8_t *)((int64_t)param_1 + 0x5e) = *(int8_t *)((int64_t)param_2 + 0x5e);
  *(int8_t *)((int64_t)param_1 + 0x5f) = *(int8_t *)((int64_t)param_2 + 0x5f);
  *(int8_t *)(param_1 + 0x18) = *(int8_t *)(param_2 + 0x18);
  *(int8_t *)((int64_t)param_1 + 0x61) = *(int8_t *)((int64_t)param_2 + 0x61);
  *(int8_t *)((int64_t)param_1 + 0x62) = *(int8_t *)((int64_t)param_2 + 0x62);
  *(int8_t *)((int64_t)param_1 + 99) = *(int8_t *)((int64_t)param_2 + 99);
  *(int8_t *)(param_1 + 0x19) = *(int8_t *)(param_2 + 0x19);
  *(int8_t *)((int64_t)param_1 + 0x65) = *(int8_t *)((int64_t)param_2 + 0x65);
  *(int8_t *)((int64_t)param_1 + 0x66) = *(int8_t *)((int64_t)param_2 + 0x66);
  *(int8_t *)((int64_t)param_1 + 0x67) = *(int8_t *)((int64_t)param_2 + 0x67);
  *(int8_t *)(param_1 + 0x1a) = *(int8_t *)(param_2 + 0x1a);
  *(int8_t *)((int64_t)param_1 + 0x69) = *(int8_t *)((int64_t)param_2 + 0x69);
  *(int8_t *)((int64_t)param_1 + 0x6a) = *(int8_t *)((int64_t)param_2 + 0x6a);
  *(int8_t *)((int64_t)param_1 + 0x6b) = *(int8_t *)((int64_t)param_2 + 0x6b);
  *(int8_t *)(param_1 + 0x1b) = *(int8_t *)(param_2 + 0x1b);
  *(int8_t *)((int64_t)param_1 + 0x6d) = *(int8_t *)((int64_t)param_2 + 0x6d);
  *(int8_t *)((int64_t)param_1 + 0x6e) = *(int8_t *)((int64_t)param_2 + 0x6e);
  *(int8_t *)((int64_t)param_1 + 0x6f) = *(int8_t *)((int64_t)param_2 + 0x6f);
  *(int8_t *)(param_1 + 0x1c) = *(int8_t *)(param_2 + 0x1c);
  *(int8_t *)((int64_t)param_1 + 0x71) = *(int8_t *)((int64_t)param_2 + 0x71);
  *(int8_t *)((int64_t)param_1 + 0x72) = *(int8_t *)((int64_t)param_2 + 0x72);
  *(int8_t *)((int64_t)param_1 + 0x73) = *(int8_t *)((int64_t)param_2 + 0x73);
  *(int8_t *)(param_1 + 0x1d) = *(int8_t *)(param_2 + 0x1d);
  *(int8_t *)((int64_t)param_1 + 0x75) = *(int8_t *)((int64_t)param_2 + 0x75);
  *(int8_t *)((int64_t)param_1 + 0x76) = *(int8_t *)((int64_t)param_2 + 0x76);
  *(int8_t *)((int64_t)param_1 + 0x77) = *(int8_t *)((int64_t)param_2 + 0x77);
  *(int8_t *)(param_1 + 0x1e) = *(int8_t *)(param_2 + 0x1e);
  *(int8_t *)((int64_t)param_1 + 0x79) = *(int8_t *)((int64_t)param_2 + 0x79);
  *(int8_t *)((int64_t)param_1 + 0x7a) = *(int8_t *)((int64_t)param_2 + 0x7a);
  *(int8_t *)((int64_t)param_1 + 0x7b) = *(int8_t *)((int64_t)param_2 + 0x7b);
  *(int8_t *)(param_1 + 0x1f) = *(int8_t *)(param_2 + 0x1f);
  *(int8_t *)((int64_t)param_1 + 0x7d) = *(int8_t *)((int64_t)param_2 + 0x7d);
  *(int8_t *)((int64_t)param_1 + 0x7e) = *(int8_t *)((int64_t)param_2 + 0x7e);
  *(int8_t *)((int64_t)param_1 + 0x7f) = *(int8_t *)((int64_t)param_2 + 0x7f);
  *(int8_t *)(param_1 + 0x20) = *(int8_t *)(param_2 + 0x20);
  *(int8_t *)((int64_t)param_1 + 0x81) = *(int8_t *)((int64_t)param_2 + 0x81);
  *(int8_t *)((int64_t)param_1 + 0x82) = *(int8_t *)((int64_t)param_2 + 0x82);
  *(int8_t *)((int64_t)param_1 + 0x83) = *(int8_t *)((int64_t)param_2 + 0x83);
  *(int8_t *)(param_1 + 0x21) = *(int8_t *)(param_2 + 0x21);
  *(int8_t *)((int64_t)param_1 + 0x85) = *(int8_t *)((int64_t)param_2 + 0x85);
  *(int8_t *)((int64_t)param_1 + 0x86) = *(int8_t *)((int64_t)param_2 + 0x86);
  *(int8_t *)((int64_t)param_1 + 0x87) = *(int8_t *)((int64_t)param_2 + 0x87);
  *(int8_t *)(param_1 + 0x22) = *(int8_t *)(param_2 + 0x22);
  *(int8_t *)((int64_t)param_1 + 0x89) = *(int8_t *)((int64_t)param_2 + 0x89);
  *(int8_t *)((int64_t)param_1 + 0x8a) = *(int8_t *)((int64_t)param_2 + 0x8a);
  *(int8_t *)((int64_t)param_1 + 0x8b) = *(int8_t *)((int64_t)param_2 + 0x8b);
  *(int8_t *)(param_1 + 0x23) = *(int8_t *)(param_2 + 0x23);
  *(int8_t *)((int64_t)param_1 + 0x8d) = *(int8_t *)((int64_t)param_2 + 0x8d);
  *(int8_t *)((int64_t)param_1 + 0x8e) = *(int8_t *)((int64_t)param_2 + 0x8e);
  *(int8_t *)((int64_t)param_1 + 0x8f) = *(int8_t *)((int64_t)param_2 + 0x8f);
  *(int8_t *)(param_1 + 0x24) = *(int8_t *)(param_2 + 0x24);
  *(int8_t *)((int64_t)param_1 + 0x91) = *(int8_t *)((int64_t)param_2 + 0x91);
  *(int8_t *)((int64_t)param_1 + 0x92) = *(int8_t *)((int64_t)param_2 + 0x92);
  *(int8_t *)((int64_t)param_1 + 0x93) = *(int8_t *)((int64_t)param_2 + 0x93);
  *(int8_t *)(param_1 + 0x25) = *(int8_t *)(param_2 + 0x25);
  *(int8_t *)((int64_t)param_1 + 0x95) = *(int8_t *)((int64_t)param_2 + 0x95);
  *(int8_t *)((int64_t)param_1 + 0x96) = *(int8_t *)((int64_t)param_2 + 0x96);
  *(int8_t *)((int64_t)param_1 + 0x97) = *(int8_t *)((int64_t)param_2 + 0x97);
  *(int8_t *)(param_1 + 0x26) = *(int8_t *)(param_2 + 0x26);
  *(int8_t *)((int64_t)param_1 + 0x99) = *(int8_t *)((int64_t)param_2 + 0x99);
  *(int8_t *)((int64_t)param_1 + 0x9a) = *(int8_t *)((int64_t)param_2 + 0x9a);
  *(int8_t *)((int64_t)param_1 + 0x9b) = *(int8_t *)((int64_t)param_2 + 0x9b);
  *(int8_t *)(param_1 + 0x27) = *(int8_t *)(param_2 + 0x27);
  *(int8_t *)((int64_t)param_1 + 0x9d) = *(int8_t *)((int64_t)param_2 + 0x9d);
  *(int8_t *)((int64_t)param_1 + 0x9e) = *(int8_t *)((int64_t)param_2 + 0x9e);
  *(int8_t *)((int64_t)param_1 + 0x9f) = *(int8_t *)((int64_t)param_2 + 0x9f);
  *(int8_t *)(param_1 + 0x28) = *(int8_t *)(param_2 + 0x28);
  *(int8_t *)((int64_t)param_1 + 0xa1) = *(int8_t *)((int64_t)param_2 + 0xa1);
  *(int8_t *)((int64_t)param_1 + 0xa2) = *(int8_t *)((int64_t)param_2 + 0xa2);
  *(int8_t *)((int64_t)param_1 + 0xa3) = *(int8_t *)((int64_t)param_2 + 0xa3);
  *(int8_t *)(param_1 + 0x29) = *(int8_t *)(param_2 + 0x29);
  *(int8_t *)((int64_t)param_1 + 0xa5) = *(int8_t *)((int64_t)param_2 + 0xa5);
  *(int8_t *)((int64_t)param_1 + 0xa6) = *(int8_t *)((int64_t)param_2 + 0xa6);
  *(int8_t *)((int64_t)param_1 + 0xa7) = *(int8_t *)((int64_t)param_2 + 0xa7);
  *(int8_t *)(param_1 + 0x2a) = *(int8_t *)(param_2 + 0x2a);
  *(int8_t *)((int64_t)param_1 + 0xa9) = *(int8_t *)((int64_t)param_2 + 0xa9);
  *(int8_t *)((int64_t)param_1 + 0xaa) = *(int8_t *)((int64_t)param_2 + 0xaa);
  *(int8_t *)((int64_t)param_1 + 0xab) = *(int8_t *)((int64_t)param_2 + 0xab);
  *(int8_t *)(param_1 + 0x2b) = *(int8_t *)(param_2 + 0x2b);
  *(int8_t *)((int64_t)param_1 + 0xad) = *(int8_t *)((int64_t)param_2 + 0xad);
  *(int8_t *)((int64_t)param_1 + 0xae) = *(int8_t *)((int64_t)param_2 + 0xae);
  *(int8_t *)((int64_t)param_1 + 0xaf) = *(int8_t *)((int64_t)param_2 + 0xaf);
  *(int8_t *)(param_1 + 0x2c) = *(int8_t *)(param_2 + 0x2c);
  *(int8_t *)((int64_t)param_1 + 0xb1) = *(int8_t *)((int64_t)param_2 + 0xb1);
  *(int8_t *)((int64_t)param_1 + 0xb2) = *(int8_t *)((int64_t)param_2 + 0xb2);
  *(int8_t *)((int64_t)param_1 + 0xb3) = *(int8_t *)((int64_t)param_2 + 0xb3);
  *(int8_t *)(param_1 + 0x2d) = *(int8_t *)(param_2 + 0x2d);
  *(int8_t *)((int64_t)param_1 + 0xb5) = *(int8_t *)((int64_t)param_2 + 0xb5);
  *(int8_t *)((int64_t)param_1 + 0xb6) = *(int8_t *)((int64_t)param_2 + 0xb6);
  *(int8_t *)((int64_t)param_1 + 0xb7) = *(int8_t *)((int64_t)param_2 + 0xb7);
  *(int8_t *)(param_1 + 0x2e) = *(int8_t *)(param_2 + 0x2e);
  *(int8_t *)((int64_t)param_1 + 0xb9) = *(int8_t *)((int64_t)param_2 + 0xb9);
  *(int8_t *)((int64_t)param_1 + 0xba) = *(int8_t *)((int64_t)param_2 + 0xba);
  *(int8_t *)((int64_t)param_1 + 0xbb) = *(int8_t *)((int64_t)param_2 + 0xbb);
  *(int8_t *)(param_1 + 0x2f) = *(int8_t *)(param_2 + 0x2f);
  *(int8_t *)((int64_t)param_1 + 0xbd) = *(int8_t *)((int64_t)param_2 + 0xbd);
  *(int8_t *)((int64_t)param_1 + 0xbe) = *(int8_t *)((int64_t)param_2 + 0xbe);
  *(int8_t *)((int64_t)param_1 + 0xbf) = *(int8_t *)((int64_t)param_2 + 0xbf);
  uVar1 = *(uint64_t *)(param_2 + 0x30);
  *(uint64_t *)(param_2 + 0x30) = 0;
  plVar2 = *(int64_t **)(param_1 + 0x30);
  *(uint64_t *)(param_1 + 0x30) = uVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  uVar1 = *(uint64_t *)(param_2 + 0x34);
  *(uint64_t *)(param_1 + 0x32) = *(uint64_t *)(param_2 + 0x32);
  *(uint64_t *)(param_1 + 0x34) = uVar1;
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = param_2[0x37];
  uVar1 = *(uint64_t *)(param_2 + 0x3a);
  *(uint64_t *)(param_1 + 0x38) = *(uint64_t *)(param_2 + 0x38);
  *(uint64_t *)(param_1 + 0x3a) = uVar1;
  *(int8_t *)(param_1 + 0x3c) = *(int8_t *)(param_2 + 0x3c);
  param_1[0x3d] = param_2[0x3d];
  return param_1;
}



uint64_t * FUN_18058f390(uint64_t *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 5) = 3;
  param_1[7] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(int32_t *)(param_1 + 0x1d) = 3;
  FUN_1805909a0(param_1 + 0x20);
  param_1[0x1f] = 0;
  param_1[8] = 0;
  *param_1 = 0;
  FUN_18058fb50(param_1);
  return param_1;
}





