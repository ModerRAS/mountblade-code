#include "TaleWorlds.Native.Split.h"

// 99_part_10_part046.c - 2 个函数

// 函数: void FUN_1806c327c(void)
void FUN_1806c327c(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  uint uVar5;
  
  lVar4 = unaff_RDI[1];
  if (*(int *)(lVar4 + 0x10) != 0) {
    uVar1 = *(uint *)(*(longlong *)(lVar4 + 8) + (ulonglong)(*(int *)(lVar4 + 0x10) - 1) * 4);
    lVar2 = *unaff_RDI;
    if (uVar1 < *(uint *)(lVar2 + 0x10)) {
      do {
        if (*(int *)(lVar2 + 0x10) != 0) {
          uVar3 = (ulonglong)(*(int *)(lVar2 + 0x10) - 1);
          if ((*(char *)(*(longlong *)(lVar2 + 8) + 8 + uVar3 * 0x18) != '\0') &&
             (*(char *)(*(longlong *)(lVar2 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
            (**(code **)(*(longlong *)unaff_RDI[5] + 0x48))();
            lVar2 = *unaff_RDI;
          }
          *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
          lVar2 = *unaff_RDI;
        }
        *(undefined1 *)(unaff_RDI + 9) = 1;
        uVar5 = *(uint *)(lVar2 + 0x10);
        if ((uVar5 != 0) &&
           (*(char *)(*(longlong *)(lVar2 + 8) + 0x10 + (ulonglong)(uVar5 - 1) * 0x18) == '\0')) {
          *(undefined1 *)(unaff_RDI + 9) = 0;
          uVar5 = *(uint *)(lVar2 + 0x10);
        }
      } while (uVar1 < uVar5);
      lVar4 = unaff_RDI[1];
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  return;
}



bool FUN_1806c32a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char acStackX_8 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  char *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar1 = param_1[2];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  pcStack_88 = acStackX_8;
  acStackX_8[0] = '\0';
  uStack_a8 = param_5;
  uStack_a0 = param_6;
  uStack_98 = param_7;
  uStack_90 = 1;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_d8 = param_2;
  uStack_d0 = param_3;
  uStack_c8 = uVar2;
  uStack_c0 = uVar3;
  uStack_b8 = uVar1;
  uStack_b0 = param_4;
  uVar4 = FUN_1806c4e90(param_8,&uStack_d8,0);
  pcStack_88 = acStackX_8;
  uStack_a8 = param_5;
  uStack_a0 = param_6;
  uStack_98 = param_7;
  uStack_90 = 1;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_d8 = param_2;
  uStack_d0 = param_3;
  uStack_c8 = uVar2;
  uStack_c0 = uVar3;
  uStack_b8 = uVar1;
  uStack_b0 = param_4;
  FUN_1806c6780(param_8,&uStack_d8,uVar4);
  pcStack_88 = acStackX_8;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_a8 = param_5;
  uStack_a0 = param_6;
  uStack_98 = param_7;
  uStack_90 = 1;
  uStack_d8 = param_2;
  uStack_d0 = param_3;
  uStack_c8 = uVar2;
  uStack_c0 = uVar3;
  uStack_b8 = uVar1;
  uStack_b0 = param_4;
  FUN_1806d65b0(&uStack_d8,param_8 + 0x300);
  return acStackX_8[0] == '\0';
}



bool FUN_1806c3420(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  char acStackX_8 [8];
  undefined8 uStackX_10;
  char *pcStackX_18;
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
  longlong *plStack_250;
  undefined8 uStack_248;
  longlong *plStack_240;
  undefined8 uStack_238;
  char cStack_230;
  char *pcStack_228;
  int *piStack_220;
  undefined8 uStack_218;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 auStack_1e8 [312];
  undefined8 uStack_b0;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  uStackX_10 = (**(code **)(*param_4 + 0x18))(param_4);
  lStack_288 = 0;
  puStack_290 = &uStackX_10;
  uStack_280 = 0;
  puStack_2a8 = &uStackX_10;
  lStack_2a0 = 0;
  uStack_298 = 0;
  __0PxArticulationReducedCoordinateGeneratedInfo_physx__QEAA_XZ(auStack_1e8);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  ppuStack_278 = &puStack_290;
  uVar1 = param_1[2];
  uVar4 = CONCAT44(param_5._4_4_,(undefined4)param_5);
  ppuStack_270 = &puStack_2a8;
  acStackX_8[0] = '\0';
  pcStack_228 = acStackX_8;
  cStack_230 = 1;
  piStack_220 = (int *)0x0;
  uStack_218 = 0;
  uStack_268 = uVar2;
  uStack_260 = uVar3;
  uStack_258 = uVar1;
  plStack_250 = param_2;
  uStack_248 = param_3;
  plStack_240 = param_4;
  uStack_238 = uVar4;
  FUN_1806c52c0(auStack_1e8,&ppuStack_278,0);
  ppuStack_278 = &puStack_290;
  ppuStack_270 = &puStack_2a8;
  piStack_220 = (int *)0x0;
  uStack_218 = 0;
  pcStack_228 = acStackX_8;
  cStack_230 = '\x01';
  uStack_1f8 = uStack_a0;
  uStack_1f4 = uStack_9c;
  uStack_1f0 = uStack_98;
  uStack_1ec = uStack_94;
  uStack_268 = uVar2;
  uStack_260 = uVar3;
  uStack_258 = uVar1;
  plStack_250 = param_2;
  uStack_248 = param_3;
  plStack_240 = param_4;
  uStack_238 = uVar4;
  FUN_1806d7000(&ppuStack_278,uStack_b0);
  if (piStack_220 != (int *)0x0) {
    *piStack_220 = *piStack_220 + 1;
  }
  pcStackX_18 = (char *)0x0;
  if (cStack_230 != '\0') {
    if (*(int *)(ppuStack_278 + 2) == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = (undefined *)ppuStack_278[1][(ulonglong)(*(int *)(ppuStack_278 + 2) - 1) * 3];
    }
    cVar5 = (**(code **)(*plStack_250 + 0x10))(plStack_250,puVar6,&pcStackX_18);
    if (((cVar5 != '\0') && (pcStackX_18 != (char *)0x0)) && (*pcStackX_18 != '\0')) {
      param_5._0_4_ = 0;
      FUN_1806d81c0(pcStackX_18,plStack_240,&param_5,0x180be0400);
      (*(code *)CONCAT44(uStack_1ec,uStack_1f0))(uStack_248,&param_5);
    }
  }
  FUN_1806d6f60(&ppuStack_278);
  bVar7 = acStackX_8[0] == '\0';
  if ((((uStack_298 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_298)) && (lStack_2a0 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_2a8 + 0x10))();
  }
  if ((((uStack_280 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_280)) && (lStack_288 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_290 + 0x10))();
  }
  return bVar7;
}



bool FUN_1806c36a0(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  char *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  char acStackX_8 [8];
  longlong lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  longlong *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char cStack_50;
  char *pcStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar1 = param_8;
  uStack_88 = *param_1;
  uStack_80 = param_1[1];
  uStack_78 = param_1[2];
  uStack_68 = param_5;
  uStack_60 = param_6;
  uStack_18 = *(undefined4 *)(param_8 + 2);
  uStack_14 = *(undefined4 *)((longlong)param_8 + 0x14);
  uStack_10 = *(undefined4 *)(param_8 + 3);
  uStack_c = *(undefined4 *)((longlong)param_8 + 0x1c);
  uStack_58 = param_7;
  pcStack_48 = acStackX_8;
  acStackX_8[0] = '\0';
  cStack_50 = '\x01';
  piStack_40 = (int *)0x0;
  uStack_38 = 0;
  lStack_98 = param_2;
  uStack_90 = param_3;
  plStack_70 = param_4;
  FUN_1806d7080(&lStack_98,*param_8);
  if (piStack_40 != (int *)0x0) {
    *piStack_40 = *piStack_40 + 1;
  }
  puVar4 = &UNK_18094c9c0;
  param_5 = (char *)0x0;
  if (cStack_50 != '\0') {
    if (*(int *)(lStack_98 + 0x10) == 0) {
      puVar3 = &UNK_18094c9c0;
    }
    else {
      puVar3 = *(undefined **)
                (*(longlong *)(lStack_98 + 8) + (ulonglong)(*(int *)(lStack_98 + 0x10) - 1) * 0x18);
    }
    cVar2 = (**(code **)(*plStack_70 + 0x10))(plStack_70,puVar3,&param_5);
    if (((cVar2 != '\0') && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
      uVar5 = FUN_1806d80c0(param_5,&param_6);
      (*(code *)CONCAT44(uStack_c,uStack_10))(uStack_68,uVar5);
    }
  }
  FUN_1806d6f60(&lStack_98);
  uStack_18 = *(undefined4 *)(puVar1 + 6);
  uStack_14 = *(undefined4 *)((longlong)puVar1 + 0x34);
  uStack_10 = *(undefined4 *)(puVar1 + 7);
  uStack_c = *(undefined4 *)((longlong)puVar1 + 0x3c);
  FUN_1806d7080(&lStack_98,puVar1[4]);
  if (piStack_40 != (int *)0x0) {
    *piStack_40 = *piStack_40 + 1;
  }
  param_5 = (char *)0x0;
  if (cStack_50 != '\0') {
    if (*(int *)(lStack_98 + 0x10) != 0) {
      puVar4 = *(undefined **)
                (*(longlong *)(lStack_98 + 8) + (ulonglong)(*(int *)(lStack_98 + 0x10) - 1) * 0x18);
    }
    cVar2 = (**(code **)(*plStack_70 + 0x10))(plStack_70,puVar4,&param_5);
    if (((cVar2 != '\0') && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
      uVar5 = FUN_1806d80c0(param_5,&param_6);
      (*(code *)CONCAT44(uStack_c,uStack_10))(uStack_68,uVar5);
    }
  }
  FUN_1806d6f60(&lStack_98);
  return acStackX_8[0] == '\0';
}



bool FUN_1806c3840(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  char *param_5,char *param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  char acStackX_8 [8];
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  char *pcStack_88;
  int *piStack_80;
  undefined8 uStack_78;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  puVar6 = param_8;
  uVar5 = param_6;
  uVar4 = param_5;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uStack_58 = *(undefined4 *)(param_8 + 2);
  uStack_54 = *(undefined4 *)((longlong)param_8 + 0x14);
  uStack_50 = *(undefined4 *)(param_8 + 3);
  uStack_4c = *(undefined4 *)((longlong)param_8 + 0x1c);
  uVar1 = param_1[2];
  uStack_98 = param_7;
  pcStack_88 = acStackX_8;
  acStackX_8[0] = '\0';
  uStack_a8 = param_5;
  uStack_a0 = param_6;
  cStack_90 = '\x01';
  piStack_80 = (int *)0x0;
  uStack_78 = 0;
  lStack_d8 = param_2;
  uStack_d0 = param_3;
  uStack_c8 = uVar2;
  uStack_c0 = uVar3;
  uStack_b8 = uVar1;
  plStack_b0 = param_4;
  FUN_1806d7080(&lStack_d8,*param_8);
  if (piStack_80 != (int *)0x0) {
    *piStack_80 = *piStack_80 + 1;
  }
  puVar9 = &UNK_18094c9c0;
  param_5 = (char *)0x0;
  if (cStack_90 != '\0') {
    if (*(int *)(lStack_d8 + 0x10) == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(undefined **)
                (*(longlong *)(lStack_d8 + 8) + (ulonglong)(*(int *)(lStack_d8 + 0x10) - 1) * 0x18);
    }
    cVar7 = (**(code **)(*plStack_b0 + 0x10))(plStack_b0,puVar8,&param_5);
    if (((cVar7 != '\0') && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
      uVar10 = FUN_1806d80c0(param_5,&param_6);
      (*(code *)CONCAT44(uStack_4c,uStack_50))(uStack_a8,uVar10);
    }
  }
  FUN_1806d6f60(&lStack_d8);
  uStack_58 = *(undefined4 *)(puVar6 + 6);
  uStack_54 = *(undefined4 *)((longlong)puVar6 + 0x34);
  uStack_50 = *(undefined4 *)(puVar6 + 7);
  uStack_4c = *(undefined4 *)((longlong)puVar6 + 0x3c);
  FUN_1806d7080(&lStack_d8,puVar6[4]);
  if (piStack_80 != (int *)0x0) {
    *piStack_80 = *piStack_80 + 1;
  }
  param_6 = (char *)0x0;
  if (cStack_90 != '\0') {
    if (*(int *)(lStack_d8 + 0x10) != 0) {
      puVar9 = *(undefined **)
                (*(longlong *)(lStack_d8 + 8) + (ulonglong)(*(int *)(lStack_d8 + 0x10) - 1) * 0x18);
    }
    cVar7 = (**(code **)(*plStack_b0 + 0x10))(plStack_b0,puVar9,&param_6);
    if (((cVar7 != '\0') && (param_6 != (char *)0x0)) && (*param_6 != '\0')) {
      uVar10 = FUN_1806d80c0(param_6,&param_8);
      (*(code *)CONCAT44(uStack_4c,uStack_50))(uStack_a8,uVar10);
    }
  }
  FUN_1806d6f60(&lStack_d8);
  uStack_98 = param_7;
  pcStack_88 = acStackX_8;
  uStack_a8 = uVar4;
  uStack_a0 = uVar5;
  cStack_90 = 1;
  piStack_80 = (int *)0x0;
  uStack_78 = 0;
  lStack_d8 = param_2;
  uStack_d0 = param_3;
  uStack_c8 = uVar2;
  uStack_c0 = uVar3;
  uStack_b8 = uVar1;
  plStack_b0 = param_4;
  FUN_1806c8030(puVar6,&lStack_d8,0);
  return acStackX_8[0] == '\0';
}



bool FUN_1806c3a70(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  char *param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  char acStackX_8 [8];
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  char *pcStack_88;
  int *piStack_80;
  undefined8 uStack_78;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar7 = param_8;
  uVar6 = param_7;
  uVar5 = param_6;
  uVar4 = param_5;
  uVar1 = param_1[2];
  pcStack_88 = acStackX_8;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  acStackX_8[0] = '\0';
  uStack_a8 = param_5;
  uStack_a0 = param_6;
  uStack_98 = param_7;
  cStack_90 = 1;
  piStack_80 = (int *)0x0;
  uStack_78 = 0;
  lStack_d8 = param_2;
  uStack_d0 = param_3;
  uStack_c8 = uVar2;
  uStack_c0 = uVar3;
  uStack_b8 = uVar1;
  plStack_b0 = param_4;
  FUN_1806c8540(param_8,&lStack_d8,0);
  uStack_58 = *(undefined4 *)(lVar7 + 0x1e8);
  uStack_54 = *(undefined4 *)(lVar7 + 0x1ec);
  uStack_50 = *(undefined4 *)(lVar7 + 0x1f0);
  uStack_4c = *(undefined4 *)(lVar7 + 500);
  pcStack_88 = acStackX_8;
  uStack_a8 = uVar4;
  uStack_a0 = uVar5;
  uStack_98 = uVar6;
  cStack_90 = '\x01';
  piStack_80 = (int *)0x0;
  uStack_78 = 0;
  lStack_d8 = param_2;
  uStack_d0 = param_3;
  uStack_c8 = uVar2;
  uStack_c0 = uVar3;
  uStack_b8 = uVar1;
  plStack_b0 = param_4;
  FUN_1806d7080(&lStack_d8,*(undefined8 *)(lVar7 + 0x1d8));
  if (piStack_80 != (int *)0x0) {
    *piStack_80 = *piStack_80 + 1;
  }
  puVar10 = &UNK_18094c9c0;
  param_5 = (char *)0x0;
  if (cStack_90 != '\0') {
    if (*(int *)(lStack_d8 + 0x10) == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(undefined **)
                (*(longlong *)(lStack_d8 + 8) + (ulonglong)(*(int *)(lStack_d8 + 0x10) - 1) * 0x18);
    }
    cVar8 = (**(code **)(*plStack_b0 + 0x10))(plStack_b0,puVar9,&param_5);
    if (((cVar8 != '\0') && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
      uVar11 = FUN_1806d80c0(param_5,&param_6);
      (*(code *)CONCAT44(uStack_4c,uStack_50))(uStack_a8,uVar11);
    }
  }
  FUN_1806d6f60(&lStack_d8);
  uStack_58 = *(undefined4 *)(lVar7 + 0x208);
  uStack_54 = *(undefined4 *)(lVar7 + 0x20c);
  uStack_50 = *(undefined4 *)(lVar7 + 0x210);
  uStack_4c = *(undefined4 *)(lVar7 + 0x214);
  FUN_1806d7080(&lStack_d8,*(undefined8 *)(lVar7 + 0x1f8));
  if (piStack_80 != (int *)0x0) {
    *piStack_80 = *piStack_80 + 1;
  }
  param_5 = (char *)0x0;
  if (cStack_90 != '\0') {
    if (*(int *)(lStack_d8 + 0x10) != 0) {
      puVar10 = *(undefined **)
                 (*(longlong *)(lStack_d8 + 8) + (ulonglong)(*(int *)(lStack_d8 + 0x10) - 1) * 0x18)
      ;
    }
    cVar8 = (**(code **)(*plStack_b0 + 0x10))(plStack_b0,puVar10,&param_5);
    if (((cVar8 != '\0') && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
      uVar11 = FUN_1806d80c0(param_5,&param_6);
      (*(code *)CONCAT44(uStack_4c,uStack_50))(uStack_a8,uVar11);
    }
  }
  FUN_1806d6f60(&lStack_d8);
  return acStackX_8[0] == '\0';
}



bool FUN_1806c3ca0(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  char *param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  char acStackX_8 [8];
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  char *pcStack_88;
  int *piStack_80;
  undefined8 uStack_78;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar7 = param_8;
  uVar6 = param_7;
  uVar5 = param_6;
  uVar4 = param_5;
  uVar1 = param_1[2];
  pcStack_88 = acStackX_8;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  acStackX_8[0] = '\0';
  uStack_a8 = param_5;
  uStack_a0 = param_6;
  uStack_98 = param_7;
  cStack_90 = 1;
  piStack_80 = (int *)0x0;
  uStack_78 = 0;
  lStack_d8 = param_2;
  uStack_d0 = param_3;
  uStack_c8 = uVar2;
  uStack_c0 = uVar3;
  uStack_b8 = uVar1;
  plStack_b0 = param_4;
  FUN_1806c8d40(param_8,&lStack_d8,0);
  uStack_58 = *(undefined4 *)(lVar7 + 0xb0);
  uStack_54 = *(undefined4 *)(lVar7 + 0xb4);
  uStack_50 = *(undefined4 *)(lVar7 + 0xb8);
  uStack_4c = *(undefined4 *)(lVar7 + 0xbc);
  pcStack_88 = acStackX_8;
  uStack_a8 = uVar4;
  uStack_a0 = uVar5;
  uStack_98 = uVar6;
  cStack_90 = '\x01';
  piStack_80 = (int *)0x0;
  uStack_78 = 0;
  lStack_d8 = param_2;
  uStack_d0 = param_3;
  uStack_c8 = uVar2;
  uStack_c0 = uVar3;
  uStack_b8 = uVar1;
  plStack_b0 = param_4;
  FUN_1806d7080(&lStack_d8,*(undefined8 *)(lVar7 + 0xa0));
  if (piStack_80 != (int *)0x0) {
    *piStack_80 = *piStack_80 + 1;
  }
  puVar10 = &UNK_18094c9c0;
  param_5 = (char *)0x0;
  if (cStack_90 != '\0') {
    if (*(int *)(lStack_d8 + 0x10) == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(undefined **)
                (*(longlong *)(lStack_d8 + 8) + (ulonglong)(*(int *)(lStack_d8 + 0x10) - 1) * 0x18);
    }
    cVar8 = (**(code **)(*plStack_b0 + 0x10))(plStack_b0,puVar9,&param_5);
    if (((cVar8 != '\0') && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
      uVar11 = FUN_1806d80c0(param_5,&param_6);
      (*(code *)CONCAT44(uStack_4c,uStack_50))(uStack_a8,uVar11);
    }
  }
  FUN_1806d6f60(&lStack_d8);
  uStack_58 = *(undefined4 *)(lVar7 + 0xd0);
  uStack_54 = *(undefined4 *)(lVar7 + 0xd4);
  uStack_50 = *(undefined4 *)(lVar7 + 0xd8);
  uStack_4c = *(undefined4 *)(lVar7 + 0xdc);
  FUN_1806d7080(&lStack_d8,*(undefined8 *)(lVar7 + 0xc0));
  if (piStack_80 != (int *)0x0) {
    *piStack_80 = *piStack_80 + 1;
  }
  param_5 = (char *)0x0;
  if (cStack_90 != '\0') {
    if (*(int *)(lStack_d8 + 0x10) != 0) {
      puVar10 = *(undefined **)
                 (*(longlong *)(lStack_d8 + 8) + (ulonglong)(*(int *)(lStack_d8 + 0x10) - 1) * 0x18)
      ;
    }
    cVar8 = (**(code **)(*plStack_b0 + 0x10))(plStack_b0,puVar10,&param_5);
    if (((cVar8 != '\0') && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
      uVar11 = FUN_1806d80c0(param_5,&param_6);
      (*(code *)CONCAT44(uStack_4c,uStack_50))(uStack_a8,uVar11);
    }
  }
  FUN_1806d6f60(&lStack_d8);
  return acStackX_8[0] == '\0';
}



bool FUN_1806c3ed0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char acStackX_8 [8];
  undefined8 uStackX_10;
  undefined8 **ppuStack_518;
  undefined8 **ppuStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  longlong *plStack_4e0;
  undefined8 uStack_4d8;
  undefined1 uStack_4d0;
  char *pcStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 *puStack_4b0;
  longlong lStack_4a8;
  ulonglong uStack_4a0;
  undefined8 *puStack_498;
  longlong lStack_490;
  ulonglong uStack_488;
  undefined1 auStack_478 [1120];
  
  uStackX_10 = (**(code **)(*param_4 + 0x18))();
  puStack_498 = &uStackX_10;
  lStack_490 = 0;
  puStack_4b0 = &uStackX_10;
  uStack_488 = 0;
  lStack_4a8 = 0;
  uStack_4a0 = 0;
  __0PxRigidDynamicGeneratedInfo_physx__QEAA_XZ(auStack_478);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  ppuStack_518 = &puStack_498;
  uVar1 = param_1[2];
  ppuStack_510 = &puStack_4b0;
  acStackX_8[0] = '\0';
  pcStack_4c8 = acStackX_8;
  uStack_4d8 = param_5;
  uStack_4d0 = 1;
  uStack_4c0 = 0;
  uStack_4b8 = 0;
  uStack_508 = uVar2;
  uStack_500 = uVar3;
  uStack_4f8 = uVar1;
  uStack_4f0 = param_2;
  uStack_4e8 = param_3;
  plStack_4e0 = param_4;
  uVar4 = FUN_1806ca0a0(auStack_478,&ppuStack_518,0);
  ppuStack_518 = &puStack_498;
  ppuStack_510 = &puStack_4b0;
  pcStack_4c8 = acStackX_8;
  uStack_4d8 = param_5;
  uStack_4d0 = 1;
  uStack_4c0 = 0;
  uStack_4b8 = 0;
  uStack_508 = uVar2;
  uStack_500 = uVar3;
  uStack_4f8 = uVar1;
  uStack_4f0 = param_2;
  uStack_4e8 = param_3;
  plStack_4e0 = param_4;
  uVar4 = FUN_1806ca3c0(auStack_478,&ppuStack_518,uVar4);
  ppuStack_518 = &puStack_498;
  ppuStack_510 = &puStack_4b0;
  pcStack_4c8 = acStackX_8;
  uStack_4d8 = param_5;
  uStack_4d0 = 1;
  uStack_4c0 = 0;
  uStack_4b8 = 0;
  uStack_508 = uVar2;
  uStack_500 = uVar3;
  uStack_4f8 = uVar1;
  uStack_4f0 = param_2;
  uStack_4e8 = param_3;
  plStack_4e0 = param_4;
  FUN_1806ca5c0(auStack_478,&ppuStack_518,uVar4);
  ppuStack_518 = &puStack_498;
  ppuStack_510 = &puStack_4b0;
  pcStack_4c8 = acStackX_8;
  uStack_4d8 = param_5;
  uStack_4d0 = 1;
  uStack_4c0 = 0;
  uStack_4b8 = 0;
  uStack_508 = uVar2;
  uStack_500 = uVar3;
  uStack_4f8 = uVar1;
  uStack_4f0 = param_2;
  uStack_4e8 = param_3;
  plStack_4e0 = param_4;
  FUN_1806caf30(auStack_478,&ppuStack_518,0);
  bVar5 = acStackX_8[0] == '\0';
  if ((((uStack_4a0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_4a0)) && (lStack_4a8 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_4b0 + 0x10))();
  }
  if ((((uStack_488 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_488)) && (lStack_490 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_498 + 0x10))();
  }
  return bVar5;
}






// 函数: void FUN_1806c4180(longlong *param_1,undefined8 param_2,longlong param_3)
void FUN_1806c4180(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  undefined *puVar10;
  undefined4 uVar11;
  char acStackX_10 [8];
  char *pcStackX_18;
  undefined1 auStackX_20 [8];
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong *plStack_d0;
  undefined8 uStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  char cStack_b0;
  char *pcStack_a8;
  int *piStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  plVar4 = (longlong *)param_1[5];
  lVar5 = param_1[7];
  lVar6 = param_1[8];
  lVar1 = param_1[4];
  pcStack_a8 = acStackX_10;
  lVar7 = param_1[2];
  lVar8 = param_1[3];
  acStackX_10[0] = '\0';
  cStack_b0 = 1;
  piStack_a0 = (int *)0x0;
  uStack_98 = 0;
  lStack_f8 = lVar2;
  lStack_f0 = lVar3;
  lStack_e8 = lVar7;
  lStack_e0 = lVar8;
  lStack_d8 = lVar1;
  plStack_d0 = plVar4;
  uStack_c8 = param_2;
  lStack_c0 = lVar5;
  lStack_b8 = lVar6;
  FUN_1806c8d40(param_3,&lStack_f8,0);
  uStack_78 = *(undefined4 *)(param_3 + 0xb0);
  uStack_74 = *(undefined4 *)(param_3 + 0xb4);
  uStack_70 = *(undefined4 *)(param_3 + 0xb8);
  uStack_6c = *(undefined4 *)(param_3 + 0xbc);
  pcStack_a8 = acStackX_10;
  cStack_b0 = '\x01';
  piStack_a0 = (int *)0x0;
  uStack_98 = 0;
  lStack_f8 = lVar2;
  lStack_f0 = lVar3;
  lStack_e8 = lVar7;
  lStack_e0 = lVar8;
  lStack_d8 = lVar1;
  plStack_d0 = plVar4;
  uStack_c8 = param_2;
  lStack_c0 = lVar5;
  lStack_b8 = lVar6;
  FUN_1806d7080(&lStack_f8,*(undefined8 *)(param_3 + 0xa0));
  if (piStack_a0 != (int *)0x0) {
    *piStack_a0 = *piStack_a0 + 1;
  }
  pcStackX_18 = (char *)0x0;
  if (cStack_b0 != '\0') {
    if (*(int *)(lStack_f8 + 0x10) == 0) {
      puVar10 = &UNK_18094c9c0;
    }
    else {
      puVar10 = *(undefined **)
                 (*(longlong *)(lStack_f8 + 8) + (ulonglong)(*(int *)(lStack_f8 + 0x10) - 1) * 0x18)
      ;
    }
    cVar9 = (**(code **)(*plStack_d0 + 0x10))(plStack_d0,puVar10,&pcStackX_18);
    if (((cVar9 != '\0') && (pcStackX_18 != (char *)0x0)) && (*pcStackX_18 != '\0')) {
      uVar11 = FUN_1806d80c0(pcStackX_18,auStackX_20);
      (*(code *)CONCAT44(uStack_6c,uStack_70))(uStack_c8,uVar11);
    }
  }
  FUN_1806d6f60(&lStack_f8);
  if (acStackX_10[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



undefined8 FUN_1806c4320(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined4 extraout_XMM0_Da;
  char *apcStackX_8 [4];
  
  apcStackX_8[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      puVar3 = &UNK_18094c9c0;
    }
    else {
      puVar3 = *(undefined **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],puVar3,apcStackX_8)
    ;
    if (((cVar2 != '\0') && (apcStackX_8[0] != (char *)0x0)) && (*apcStackX_8[0] != '\0')) {
      FUN_1806d80c0(apcStackX_8[0],apcStackX_8);
      *param_2 = extraout_XMM0_Da;
      return 1;
    }
  }
  return 0;
}



undefined8 FUN_1806c43a0(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined *puVar4;
  char *apcStackX_8 [4];
  
  apcStackX_8[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(undefined **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],puVar4,apcStackX_8)
    ;
    if (((cVar2 != '\0') && (apcStackX_8[0] != (char *)0x0)) && (*apcStackX_8[0] != '\0')) {
      uVar3 = strtoul(apcStackX_8[0],apcStackX_8,10);
      *param_2 = uVar3;
      uVar3 = strtoul(apcStackX_8[0],apcStackX_8,10);
      param_2[1] = uVar3;
      uVar3 = strtoul(apcStackX_8[0],apcStackX_8,10);
      param_2[2] = uVar3;
      uVar3 = strtoul(apcStackX_8[0],0,10);
      param_2[3] = uVar3;
      return 1;
    }
  }
  return 0;
}






