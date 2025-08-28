#include "TaleWorlds.Native.Split.h"

// 99_part_11_part001_sub002.c - 1 个函数

// 函数: void FUN_1806d4e70(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806d4e70(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t *param_5,uint64_t param_6)

{
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  uint64_t uStack_18;
  
  uStack_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  uStack_18 = *(uint64_t *)(param_5 + 4);
  FUN_1806c3ed0(&uStack_28,param_3,param_2,param_4,param_6);
  return;
}



bool FUN_1806d4ec0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4,
                  uint64_t *param_5,uint64_t param_6)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  bool bVar4;
  uint64_t uStackX_10;
  uint64_t *puStack_218;
  int64_t lStack_210;
  uint64_t uStack_208;
  uint64_t *puStack_200;
  int64_t lStack_1f8;
  uint64_t uStack_1f0;
  uint64_t **ppuStack_1e8;
  uint64_t **ppuStack_1e0;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  uint64_t uStack_1b8;
  int64_t *plStack_1b0;
  uint64_t uStack_1a8;
  int8_t uStack_1a0;
  uint64_t *puStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  int8_t auStack_178 [368];
  
  uVar2 = *param_5;
  uVar3 = param_5[1];
  uVar1 = param_5[2];
  uStackX_10 = (**(code **)(*param_4 + 0x18))();
  puStack_200 = &uStackX_10;
  lStack_1f8 = 0;
  puStack_218 = &uStackX_10;
  uStack_1f0 = 0;
  lStack_210 = 0;
  uStack_208 = 0;
  __0PxRigidStaticGeneratedInfo_physx__QEAA_XZ(auStack_178);
  ppuStack_1e8 = &puStack_200;
  param_5._0_1_ = '\0';
  ppuStack_1e0 = &puStack_218;
  uStack_1a8 = param_6;
  puStack_198 = &param_5;
  uStack_1a0 = 1;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_1d8 = uVar2;
  uStack_1d0 = uVar3;
  uStack_1c8 = uVar1;
  uStack_1c0 = param_3;
  uStack_1b8 = param_2;
  plStack_1b0 = param_4;
  FUN_1806c4e90(auStack_178,&ppuStack_1e8,0);
  bVar4 = (char)param_5 == '\0';
  if ((((uStack_208 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_208)) && (lStack_210 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_218 + 0x10))();
  }
  if ((((uStack_1f0 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_1f0)) && (lStack_1f8 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_200 + 0x10))();
  }
  return bVar4;
}



bool FUN_1806d5030(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4,
                  uint64_t *param_5,uint64_t param_6)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  bool bVar4;
  uint64_t uStackX_10;
  uint64_t *puStack_2a8;
  int64_t lStack_2a0;
  uint64_t uStack_298;
  uint64_t *puStack_290;
  int64_t lStack_288;
  uint64_t uStack_280;
  uint64_t **ppuStack_278;
  uint64_t **ppuStack_270;
  uint64_t uStack_268;
  uint64_t uStack_260;
  uint64_t uStack_258;
  uint64_t uStack_250;
  uint64_t uStack_248;
  int64_t *plStack_240;
  uint64_t uStack_238;
  int8_t uStack_230;
  uint64_t *puStack_228;
  uint64_t uStack_220;
  uint64_t uStack_218;
  int8_t auStack_208 [512];
  
  uVar2 = *param_5;
  uVar3 = param_5[1];
  uVar1 = param_5[2];
  uStackX_10 = (**(code **)(*param_4 + 0x18))();
  puStack_290 = &uStackX_10;
  lStack_288 = 0;
  puStack_2a8 = &uStackX_10;
  uStack_280 = 0;
  lStack_2a0 = 0;
  uStack_298 = 0;
  __0PxShapeGeneratedInfo_physx__QEAA_XZ(auStack_208);
  ppuStack_278 = &puStack_290;
  param_5._0_1_ = '\0';
  ppuStack_270 = &puStack_2a8;
  uStack_238 = param_6;
  puStack_228 = &param_5;
  uStack_230 = 1;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_268 = uVar2;
  uStack_260 = uVar3;
  uStack_258 = uVar1;
  uStack_250 = param_3;
  uStack_248 = param_2;
  plStack_240 = param_4;
  FUN_1806cb3f0(auStack_208,&ppuStack_278,0);
  bVar4 = (char)param_5 == '\0';
  if ((((uStack_298 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_298)) && (lStack_2a0 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_2a8 + 0x10))();
  }
  if ((((uStack_280 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_280)) && (lStack_288 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_290 + 0x10))();
  }
  return bVar4;
}



bool FUN_1806d51a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4,
                  uint64_t *param_5,uint64_t param_6)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  bool bVar5;
  uint64_t uStackX_10;
  uint64_t *puStack_358;
  int64_t lStack_350;
  uint64_t uStack_348;
  uint64_t *puStack_340;
  int64_t lStack_338;
  uint64_t uStack_330;
  uint64_t **ppuStack_328;
  uint64_t **ppuStack_320;
  uint64_t uStack_318;
  uint64_t uStack_310;
  uint64_t uStack_308;
  uint64_t uStack_300;
  uint64_t uStack_2f8;
  int64_t *plStack_2f0;
  uint64_t uStack_2e8;
  int8_t uStack_2e0;
  uint64_t *puStack_2d8;
  uint64_t uStack_2d0;
  uint64_t uStack_2c8;
  int8_t auStack_2b8 [672];
  
  uVar2 = *param_5;
  uVar3 = param_5[1];
  uVar1 = param_5[2];
  uStackX_10 = (**(code **)(*param_4 + 0x18))();
  puStack_340 = &uStackX_10;
  lStack_338 = 0;
  puStack_358 = &uStackX_10;
  uStack_330 = 0;
  lStack_350 = 0;
  uStack_348 = 0;
  FUN_1806f3ea0(auStack_2b8);
  uVar4 = param_6;
  ppuStack_328 = &puStack_340;
  ppuStack_320 = &puStack_358;
  param_5._0_1_ = '\0';
  puStack_2d8 = &param_5;
  uStack_2e8 = param_6;
  uStack_2e0 = 1;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_318 = uVar2;
  uStack_310 = uVar3;
  uStack_308 = uVar1;
  uStack_300 = param_3;
  uStack_2f8 = param_2;
  plStack_2f0 = param_4;
  FUN_1806c7b80(auStack_2b8,&ppuStack_328,0);
  ppuStack_328 = &puStack_340;
  ppuStack_320 = &puStack_358;
  puStack_2d8 = &param_5;
  uStack_2e8 = uVar4;
  uStack_2e0 = 1;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_318 = uVar2;
  uStack_310 = uVar3;
  uStack_308 = uVar1;
  uStack_300 = param_3;
  uStack_2f8 = param_2;
  plStack_2f0 = param_4;
  FUN_1806cb8f0(auStack_2b8,&ppuStack_328,0);
  bVar5 = (char)param_5 == '\0';
  if ((((uStack_348 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_348)) && (lStack_350 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_358 + 0x10))();
  }
  if ((((uStack_330 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_330)) && (lStack_338 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_340 + 0x10))();
  }
  return bVar5;
}



int32_t FUN_1806d5410(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  
  lVar1 = *param_2;
  uVar3 = 0;
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    iVar2 = _stricmp_shdfnd_physx__YAHPEBD0_Z(lVar1,param_1);
    if (iVar2 == 0) break;
    uVar3 = (uint64_t)((int)uVar3 + 1);
    lVar1 = param_2[uVar3 * 2];
  }
  return (int)param_2[uVar3 * 2 + 1];
}



uint64_t FUN_1806d54b0(int64_t *param_1)

{
  int iVar1;
  char cVar2;
  void *puVar3;
  uint64_t auStackX_8 [4];
  
  auStackX_8[0] = 0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      puVar3 = &ui_system_data_1920_ptr;
    }
    else {
      puVar3 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_1[5] + 0x10))((int64_t *)param_1[5],puVar3,auStackX_8);
    if (cVar2 != '\0') {
      return auStackX_8[0];
    }
  }
  return 0;
}



int8_t FUN_1806d5620(int64_t *param_1)

{
  int32_t *puVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  void *puStack_28;
  uint uStack_20;
  int32_t uStack_1c;
  int8_t uStack_18;
  uint8_t uStack_17;
  
  FUN_1806d56e0();
  lVar3 = *param_1;
  puStack_28 = &ui_system_data_1552_ptr;
  uStack_18 = (int8_t)param_1[9];
  uVar2 = *(uint *)(lVar3 + 0x10);
  uStack_20 = uStack_20 & 0xffffff00;
  if (uVar2 < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    lVar4 = *(int64_t *)(lVar3 + 8);
    puVar1 = (int32_t *)(lVar4 + (uint64_t)uVar2 * 0x18);
    *puVar1 = 0x8094c850;
    puVar1[1] = 1;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    *(uint64_t *)(lVar4 + 0x10 + (uint64_t)uVar2 * 0x18) = CONCAT71(uStack_17,uStack_18);
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
  }
  else {
    FUN_1806d5b60(lVar3,&puStack_28);
  }
  cVar5 = (char)param_1[9];
  if (cVar5 != '\0') {
    cVar5 = (**(code **)(*(int64_t *)param_1[5] + 0x20))();
    *(char *)(param_1 + 9) = cVar5;
  }
  *(char *)(*(int64_t *)(*param_1 + 8) + 0x10 + (uint64_t)(*(int *)(*param_1 + 0x10) - 1) * 0x18)
       = cVar5;
  *(char *)(*(int64_t *)(*param_1 + 8) + 8 + (uint64_t)(*(int *)(*param_1 + 0x10) - 1) * 0x18) =
       (char)param_1[9];
  return (char)param_1[9];
}



char FUN_1806d56e0(int64_t *param_1)

{
  char cVar1;
  uint64_t uVar2;
  int64_t lVar3;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x10) == 0) {
    cVar1 = (char)param_1[9];
  }
  else {
    uVar2 = (uint64_t)(*(int *)(lVar3 + 0x10) - 1);
    cVar1 = (char)param_1[9];
    if (*(char *)(*(int64_t *)(lVar3 + 8) + 8 + uVar2 * 0x18) == '\0') {
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*(int64_t *)param_1[5] + 0x18))
                          ((int64_t *)param_1[5],
                           *(uint64_t *)(*(int64_t *)(lVar3 + 8) + uVar2 * 0x18));
        lVar3 = *param_1;
        *(char *)(param_1 + 9) = cVar1;
      }
      *(char *)(*(int64_t *)(lVar3 + 8) + 0x10 + (uint64_t)(*(int *)(lVar3 + 0x10) - 1) * 0x18) =
           cVar1;
      *(char *)(*(int64_t *)(*param_1 + 8) + 8 + (uint64_t)(*(int *)(*param_1 + 0x10) - 1) * 0x18)
           = (char)param_1[9];
      return (char)param_1[9];
    }
  }
  return cVar1;
}



int32_t * FUN_1806d5770(uint64_t *param_1,int32_t *param_2)

{
  int32_t uVar1;
  uint uVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  uint uVar8;
  int32_t *puVar9;
  
  puVar7 = (int32_t *)0x0;
  uVar2 = *(uint *)((int64_t)param_1 + 0x14) & 0x7fffffff;
  if (uVar2 == 0) {
    uVar8 = 1;
  }
  else {
    uVar8 = uVar2 * 2;
    puVar3 = puVar7;
    if (uVar2 == 0) goto LAB_1806d57d8;
  }
  puVar3 = (int32_t *)
           (**(code **)(**(int64_t **)*param_1 + 8))
                     (*(int64_t **)*param_1,(uint64_t)uVar8 << 2,&processed_var_6480_ptr,&rendering_buffer_2784_ptr,
                      0x229);
LAB_1806d57d8:
  uVar4 = (uint64_t)*(uint *)(param_1 + 2);
  puVar5 = (int32_t *)param_1[1];
  if (puVar3 < puVar3 + uVar4) {
    puVar9 = (int32_t *)(uint64_t)*(uint *)(param_1 + 2);
    if (puVar3 + uVar4 < puVar3) {
      puVar9 = puVar7;
    }
    puVar6 = puVar3;
    if (puVar9 != (int32_t *)0x0) {
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = (int32_t *)((int64_t)puVar7 + 1);
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
      } while (puVar7 < puVar9);
      uVar4 = (uint64_t)*(uint *)(param_1 + 2);
    }
  }
  puVar3[uVar4] = *param_2;
  if ((-1 < *(int *)((int64_t)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(**(int64_t **)*param_1 + 0x10))();
  }
  uVar2 = *(uint *)(param_1 + 2);
  param_1[1] = puVar3;
  *(uint *)((int64_t)param_1 + 0x14) = uVar8;
  *(uint *)(param_1 + 2) = uVar2 + 1;
  return puVar3 + uVar2;
}



uint64_t * FUN_1806d5870(int64_t *param_1,uint64_t *param_2)

{
  int64_t lVar1;
  uint uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint uVar9;
  uint64_t *puVar10;
  
  puVar8 = (uint64_t *)0x0;
  uVar2 = *(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff;
  if (uVar2 == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = uVar2 * 2;
    puVar3 = puVar8;
    if (uVar2 == 0) goto LAB_1806d58c8;
  }
  puVar3 = (uint64_t *)FUN_1806d3660(param_1,(uint64_t)uVar9 << 3,&rendering_buffer_2784_ptr,0x229);
LAB_1806d58c8:
  uVar4 = (uint64_t)*(uint *)(param_1 + 1);
  puVar6 = (uint64_t *)*param_1;
  if (puVar3 < puVar3 + uVar4) {
    puVar10 = (uint64_t *)(uint64_t)*(uint *)(param_1 + 1);
    if (puVar3 + uVar4 < puVar3) {
      puVar10 = puVar8;
    }
    puVar7 = puVar3;
    if (puVar10 != (uint64_t *)0x0) {
      do {
        puVar8 = (uint64_t *)((int64_t)puVar8 + 1);
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (puVar8 < puVar10);
      uVar4 = (uint64_t)*(uint *)(param_1 + 1);
    }
  }
  puVar3[uVar4] = *param_2;
  lVar1 = *param_1;
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (lVar1 != 0)) {
    plVar5 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar5 + 0x10))(plVar5,lVar1);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *param_1 = (int64_t)puVar3;
  *(uint *)((int64_t)param_1 + 0xc) = uVar9;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return puVar3 + uVar2;
}



uint64_t * FUN_1806d5970(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  uint uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int iVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  
  iVar8 = 1;
  uVar2 = *(uint *)(param_1 + 0x214) & 0x7fffffff;
  if (uVar2 != 0) {
    iVar8 = uVar2 * 2;
  }
  puVar3 = (uint64_t *)FUN_1806d3500(param_1,iVar8);
  puVar7 = *(uint64_t **)(param_1 + 0x208);
  uVar4 = (uint64_t)*(uint *)(param_1 + 0x210);
  if (puVar3 < puVar3 + uVar4) {
    uVar6 = 0;
    uVar10 = (uint64_t)*(uint *)(param_1 + 0x210);
    if (puVar3 + uVar4 < puVar3) {
      uVar10 = uVar6;
    }
    puVar9 = puVar3;
    if (uVar10 != 0) {
      do {
        uVar6 = uVar6 + 1;
        *puVar9 = *puVar7;
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar6 < uVar10);
      uVar4 = (uint64_t)*(uint *)(param_1 + 0x210);
    }
  }
  puVar3[uVar4] = *param_2;
  lVar1 = *(int64_t *)(param_1 + 0x208);
  if (-1 < *(int *)(param_1 + 0x214)) {
    if (lVar1 == param_1) {
      *(int8_t *)(param_1 + 0x200) = 0;
    }
    else if (lVar1 != 0) {
      plVar5 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar5 + 0x10))(plVar5,lVar1);
    }
  }
  uVar2 = *(uint *)(param_1 + 0x210);
  *(uint64_t **)(param_1 + 0x208) = puVar3;
  *(int *)(param_1 + 0x214) = iVar8;
  *(uint *)(param_1 + 0x210) = uVar2 + 1;
  return puVar3 + uVar2;
}



uint64_t * FUN_1806d5a70(uint64_t *param_1,int32_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint uVar10;
  uint64_t uVar11;
  
  uVar6 = *(uint *)((int64_t)param_1 + 0x14) & 0x7fffffff;
  if (uVar6 == 0) {
    uVar10 = 1;
  }
  else {
    uVar10 = uVar6 * 2;
    if (uVar6 == 0) {
      puVar7 = (uint64_t *)0x0;
      goto LAB_1806d5acf;
    }
  }
  puVar7 = (uint64_t *)
           (**(code **)(**(int64_t **)*param_1 + 8))
                     (*(int64_t **)*param_1,(uint64_t)uVar10 << 4,&processed_var_6480_ptr,&rendering_buffer_2784_ptr,
                      0x229);
LAB_1806d5acf:
  uVar11 = (uint64_t)*(uint *)(param_1 + 2);
  puVar9 = (uint64_t *)param_1[1];
  puVar8 = puVar7;
  if (puVar7 < puVar7 + uVar11 * 2) {
    do {
      uVar4 = *puVar9;
      uVar5 = puVar9[1];
      puVar9 = puVar9 + 2;
      *puVar8 = uVar4;
      puVar8[1] = uVar5;
      puVar8 = puVar8 + 2;
    } while (puVar8 < puVar7 + uVar11 * 2);
    uVar11 = (uint64_t)*(uint *)(param_1 + 2);
  }
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  puVar9 = puVar7 + uVar11 * 2;
  *(int32_t *)puVar9 = *param_2;
  *(int32_t *)((int64_t)puVar9 + 4) = uVar1;
  *(int32_t *)(puVar9 + 1) = uVar2;
  *(int32_t *)((int64_t)puVar9 + 0xc) = uVar3;
  if ((-1 < *(int *)((int64_t)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(**(int64_t **)*param_1 + 0x10))();
  }
  uVar6 = *(uint *)(param_1 + 2);
  *(uint *)((int64_t)param_1 + 0x14) = uVar10;
  param_1[1] = puVar7;
  *(uint *)(param_1 + 2) = uVar6 + 1;
  return puVar7 + (uint64_t)uVar6 * 2;
}



uint64_t * FUN_1806d5b60(uint64_t *param_1,int32_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  uint uVar10;
  
  uVar5 = *(uint *)((int64_t)param_1 + 0x14) & 0x7fffffff;
  if (uVar5 == 0) {
    uVar10 = 1;
  }
  else {
    uVar10 = uVar5 * 2;
    if (uVar5 == 0) {
      puVar6 = (uint64_t *)0x0;
      goto LAB_1806d5bc4;
    }
  }
  puVar6 = (uint64_t *)
           (**(code **)(**(int64_t **)*param_1 + 8))
                     (*(int64_t **)*param_1,(uint64_t)uVar10 * 0x18,&processed_var_6480_ptr,&rendering_buffer_2784_ptr,
                      0x229);
LAB_1806d5bc4:
  uVar9 = (uint64_t)*(uint *)(param_1 + 2);
  puVar8 = (uint64_t *)param_1[1];
  puVar7 = puVar6;
  if (puVar6 < puVar6 + uVar9 * 3) {
    do {
      uVar4 = puVar8[1];
      *puVar7 = *puVar8;
      puVar7[1] = uVar4;
      puVar7[2] = puVar8[2];
      puVar7 = puVar7 + 3;
      puVar8 = puVar8 + 3;
    } while (puVar7 < puVar6 + uVar9 * 3);
    uVar9 = (uint64_t)*(uint *)(param_1 + 2);
  }
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  puVar8 = puVar6 + uVar9 * 3;
  *(int32_t *)puVar8 = *param_2;
  *(int32_t *)((int64_t)puVar8 + 4) = uVar1;
  *(int32_t *)(puVar8 + 1) = uVar2;
  *(int32_t *)((int64_t)puVar8 + 0xc) = uVar3;
  puVar6[uVar9 * 3 + 2] = *(uint64_t *)(param_2 + 4);
  if ((-1 < *(int *)((int64_t)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(**(int64_t **)*param_1 + 0x10))();
  }
  uVar5 = *(uint *)(param_1 + 2);
  *(uint *)((int64_t)param_1 + 0x14) = uVar10;
  param_1[1] = puVar6;
  *(uint *)(param_1 + 2) = uVar5 + 1;
  return puVar6 + (uint64_t)uVar5 * 3;
}







