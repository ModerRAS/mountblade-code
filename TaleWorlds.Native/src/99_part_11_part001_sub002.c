#include "TaleWorlds.Native.Split.h"

// 99_part_11_part001_sub002.c - 1 个函数

// 函数: void FUN_1806d4e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_1806d4e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uStack_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  uStack_18 = *(undefined8 *)(param_5 + 4);
  FUN_1806c3ed0(&uStack_28,param_3,param_2,param_4,param_6);
  return;
}



bool FUN_1806d4ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uStackX_10;
  undefined8 *puStack_218;
  longlong lStack_210;
  ulonglong uStack_208;
  undefined8 *puStack_200;
  longlong lStack_1f8;
  ulonglong uStack_1f0;
  undefined8 **ppuStack_1e8;
  undefined8 **ppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  longlong *plStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_178 [368];
  
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
  if ((((uStack_208 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_208)) && (lStack_210 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_218 + 0x10))();
  }
  if ((((uStack_1f0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_1f0)) && (lStack_1f8 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_200 + 0x10))();
  }
  return bVar4;
}



bool FUN_1806d5030(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uStackX_10;
  undefined8 *puStack_2a8;
  longlong lStack_2a0;
  ulonglong uStack_298;
  undefined8 *puStack_290;
  longlong lStack_288;
  ulonglong uStack_280;
  undefined8 **ppuStack_278;
  undefined8 **ppuStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  longlong *plStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [512];
  
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
  if ((((uStack_298 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_298)) && (lStack_2a0 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_2a8 + 0x10))();
  }
  if ((((uStack_280 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_280)) && (lStack_288 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_290 + 0x10))();
  }
  return bVar4;
}



bool FUN_1806d51a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uStackX_10;
  undefined8 *puStack_358;
  longlong lStack_350;
  ulonglong uStack_348;
  undefined8 *puStack_340;
  longlong lStack_338;
  ulonglong uStack_330;
  undefined8 **ppuStack_328;
  undefined8 **ppuStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  longlong *plStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2b8 [672];
  
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
  if ((((uStack_348 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_348)) && (lStack_350 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_358 + 0x10))();
  }
  if ((((uStack_330 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_330)) && (lStack_338 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_340 + 0x10))();
  }
  return bVar5;
}



undefined4 FUN_1806d5410(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  lVar1 = *param_2;
  uVar3 = 0;
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    iVar2 = _stricmp_shdfnd_physx__YAHPEBD0_Z(lVar1,param_1);
    if (iVar2 == 0) break;
    uVar3 = (ulonglong)((int)uVar3 + 1);
    lVar1 = param_2[uVar3 * 2];
  }
  return (int)param_2[uVar3 * 2 + 1];
}



undefined8 FUN_1806d54b0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 auStackX_8 [4];
  
  auStackX_8[0] = 0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      puVar3 = &UNK_18094c9c0;
    }
    else {
      puVar3 = *(undefined **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],puVar3,auStackX_8);
    if (cVar2 != '\0') {
      return auStackX_8[0];
    }
  }
  return 0;
}



undefined1 FUN_1806d5620(longlong *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined *puStack_28;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  undefined7 uStack_17;
  
  FUN_1806d56e0();
  lVar3 = *param_1;
  puStack_28 = &UNK_18094c850;
  uStack_18 = (undefined1)param_1[9];
  uVar2 = *(uint *)(lVar3 + 0x10);
  uStack_20 = uStack_20 & 0xffffff00;
  if (uVar2 < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    lVar4 = *(longlong *)(lVar3 + 8);
    puVar1 = (undefined4 *)(lVar4 + (ulonglong)uVar2 * 0x18);
    *puVar1 = 0x8094c850;
    puVar1[1] = 1;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    *(ulonglong *)(lVar4 + 0x10 + (ulonglong)uVar2 * 0x18) = CONCAT71(uStack_17,uStack_18);
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
  }
  else {
    FUN_1806d5b60(lVar3,&puStack_28);
  }
  cVar5 = (char)param_1[9];
  if (cVar5 != '\0') {
    cVar5 = (**(code **)(*(longlong *)param_1[5] + 0x20))();
    *(char *)(param_1 + 9) = cVar5;
  }
  *(char *)(*(longlong *)(*param_1 + 8) + 0x10 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x18)
       = cVar5;
  *(char *)(*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x18) =
       (char)param_1[9];
  return (char)param_1[9];
}



char FUN_1806d56e0(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x10) == 0) {
    cVar1 = (char)param_1[9];
  }
  else {
    uVar2 = (ulonglong)(*(int *)(lVar3 + 0x10) - 1);
    cVar1 = (char)param_1[9];
    if (*(char *)(*(longlong *)(lVar3 + 8) + 8 + uVar2 * 0x18) == '\0') {
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*(longlong *)param_1[5] + 0x18))
                          ((longlong *)param_1[5],
                           *(undefined8 *)(*(longlong *)(lVar3 + 8) + uVar2 * 0x18));
        lVar3 = *param_1;
        *(char *)(param_1 + 9) = cVar1;
      }
      *(char *)(*(longlong *)(lVar3 + 8) + 0x10 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18) =
           cVar1;
      *(char *)(*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x18)
           = (char)param_1[9];
      return (char)param_1[9];
    }
  }
  return cVar1;
}



undefined4 * FUN_1806d5770(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  puVar7 = (undefined4 *)0x0;
  uVar2 = *(uint *)((longlong)param_1 + 0x14) & 0x7fffffff;
  if (uVar2 == 0) {
    uVar8 = 1;
  }
  else {
    uVar8 = uVar2 * 2;
    puVar3 = puVar7;
    if (uVar2 == 0) goto LAB_1806d57d8;
  }
  puVar3 = (undefined4 *)
           (**(code **)(**(longlong **)*param_1 + 8))
                     (*(longlong **)*param_1,(ulonglong)uVar8 << 2,&UNK_18094b480,&UNK_18094a610,
                      0x229);
LAB_1806d57d8:
  uVar4 = (ulonglong)*(uint *)(param_1 + 2);
  puVar5 = (undefined4 *)param_1[1];
  if (puVar3 < puVar3 + uVar4) {
    puVar9 = (undefined4 *)(ulonglong)*(uint *)(param_1 + 2);
    if (puVar3 + uVar4 < puVar3) {
      puVar9 = puVar7;
    }
    puVar6 = puVar3;
    if (puVar9 != (undefined4 *)0x0) {
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = (undefined4 *)((longlong)puVar7 + 1);
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
      } while (puVar7 < puVar9);
      uVar4 = (ulonglong)*(uint *)(param_1 + 2);
    }
  }
  puVar3[uVar4] = *param_2;
  if ((-1 < *(int *)((longlong)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(**(longlong **)*param_1 + 0x10))();
  }
  uVar2 = *(uint *)(param_1 + 2);
  param_1[1] = puVar3;
  *(uint *)((longlong)param_1 + 0x14) = uVar8;
  *(uint *)(param_1 + 2) = uVar2 + 1;
  return puVar3 + uVar2;
}



undefined8 * FUN_1806d5870(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  
  puVar8 = (undefined8 *)0x0;
  uVar2 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
  if (uVar2 == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = uVar2 * 2;
    puVar3 = puVar8;
    if (uVar2 == 0) goto LAB_1806d58c8;
  }
  puVar3 = (undefined8 *)FUN_1806d3660(param_1,(ulonglong)uVar9 << 3,&UNK_18094a610,0x229);
LAB_1806d58c8:
  uVar4 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined8 *)*param_1;
  if (puVar3 < puVar3 + uVar4) {
    puVar10 = (undefined8 *)(ulonglong)*(uint *)(param_1 + 1);
    if (puVar3 + uVar4 < puVar3) {
      puVar10 = puVar8;
    }
    puVar7 = puVar3;
    if (puVar10 != (undefined8 *)0x0) {
      do {
        puVar8 = (undefined8 *)((longlong)puVar8 + 1);
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (puVar8 < puVar10);
      uVar4 = (ulonglong)*(uint *)(param_1 + 1);
    }
  }
  puVar3[uVar4] = *param_2;
  lVar1 = *param_1;
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar1 != 0)) {
    plVar5 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar5 + 0x10))(plVar5,lVar1);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *param_1 = (longlong)puVar3;
  *(uint *)((longlong)param_1 + 0xc) = uVar9;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return puVar3 + uVar2;
}



undefined8 * FUN_1806d5970(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  iVar8 = 1;
  uVar2 = *(uint *)(param_1 + 0x214) & 0x7fffffff;
  if (uVar2 != 0) {
    iVar8 = uVar2 * 2;
  }
  puVar3 = (undefined8 *)FUN_1806d3500(param_1,iVar8);
  puVar7 = *(undefined8 **)(param_1 + 0x208);
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x210);
  if (puVar3 < puVar3 + uVar4) {
    uVar6 = 0;
    uVar10 = (ulonglong)*(uint *)(param_1 + 0x210);
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
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x210);
    }
  }
  puVar3[uVar4] = *param_2;
  lVar1 = *(longlong *)(param_1 + 0x208);
  if (-1 < *(int *)(param_1 + 0x214)) {
    if (lVar1 == param_1) {
      *(undefined1 *)(param_1 + 0x200) = 0;
    }
    else if (lVar1 != 0) {
      plVar5 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar5 + 0x10))(plVar5,lVar1);
    }
  }
  uVar2 = *(uint *)(param_1 + 0x210);
  *(undefined8 **)(param_1 + 0x208) = puVar3;
  *(int *)(param_1 + 0x214) = iVar8;
  *(uint *)(param_1 + 0x210) = uVar2 + 1;
  return puVar3 + uVar2;
}



undefined8 * FUN_1806d5a70(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar6 = *(uint *)((longlong)param_1 + 0x14) & 0x7fffffff;
  if (uVar6 == 0) {
    uVar10 = 1;
  }
  else {
    uVar10 = uVar6 * 2;
    if (uVar6 == 0) {
      puVar7 = (undefined8 *)0x0;
      goto LAB_1806d5acf;
    }
  }
  puVar7 = (undefined8 *)
           (**(code **)(**(longlong **)*param_1 + 8))
                     (*(longlong **)*param_1,(ulonglong)uVar10 << 4,&UNK_18094b480,&UNK_18094a610,
                      0x229);
LAB_1806d5acf:
  uVar11 = (ulonglong)*(uint *)(param_1 + 2);
  puVar9 = (undefined8 *)param_1[1];
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
    uVar11 = (ulonglong)*(uint *)(param_1 + 2);
  }
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  puVar9 = puVar7 + uVar11 * 2;
  *(undefined4 *)puVar9 = *param_2;
  *(undefined4 *)((longlong)puVar9 + 4) = uVar1;
  *(undefined4 *)(puVar9 + 1) = uVar2;
  *(undefined4 *)((longlong)puVar9 + 0xc) = uVar3;
  if ((-1 < *(int *)((longlong)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(**(longlong **)*param_1 + 0x10))();
  }
  uVar6 = *(uint *)(param_1 + 2);
  *(uint *)((longlong)param_1 + 0x14) = uVar10;
  param_1[1] = puVar7;
  *(uint *)(param_1 + 2) = uVar6 + 1;
  return puVar7 + (ulonglong)uVar6 * 2;
}



undefined8 * FUN_1806d5b60(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar5 = *(uint *)((longlong)param_1 + 0x14) & 0x7fffffff;
  if (uVar5 == 0) {
    uVar10 = 1;
  }
  else {
    uVar10 = uVar5 * 2;
    if (uVar5 == 0) {
      puVar6 = (undefined8 *)0x0;
      goto LAB_1806d5bc4;
    }
  }
  puVar6 = (undefined8 *)
           (**(code **)(**(longlong **)*param_1 + 8))
                     (*(longlong **)*param_1,(ulonglong)uVar10 * 0x18,&UNK_18094b480,&UNK_18094a610,
                      0x229);
LAB_1806d5bc4:
  uVar9 = (ulonglong)*(uint *)(param_1 + 2);
  puVar8 = (undefined8 *)param_1[1];
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
    uVar9 = (ulonglong)*(uint *)(param_1 + 2);
  }
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  puVar8 = puVar6 + uVar9 * 3;
  *(undefined4 *)puVar8 = *param_2;
  *(undefined4 *)((longlong)puVar8 + 4) = uVar1;
  *(undefined4 *)(puVar8 + 1) = uVar2;
  *(undefined4 *)((longlong)puVar8 + 0xc) = uVar3;
  puVar6[uVar9 * 3 + 2] = *(undefined8 *)(param_2 + 4);
  if ((-1 < *(int *)((longlong)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(**(longlong **)*param_1 + 0x10))();
  }
  uVar5 = *(uint *)(param_1 + 2);
  *(uint *)((longlong)param_1 + 0x14) = uVar10;
  param_1[1] = puVar6;
  *(uint *)(param_1 + 2) = uVar5 + 1;
  return puVar6 + (ulonglong)uVar5 * 3;
}







