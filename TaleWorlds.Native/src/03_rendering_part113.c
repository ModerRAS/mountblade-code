#include "TaleWorlds.Native.Split.h"

// 03_rendering_part113.c - 9 个函数

// 函数: void FUN_180336980(undefined4 *param_1,longlong *param_2)
void FUN_180336980(undefined4 *param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar2 = *param_1;
  puVar5 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = uVar2;
  param_2[1] = param_2[1] + 4;
  FUN_18063a110(param_2,param_1 + 1);
  puVar5 = (undefined4 *)param_2[1];
  uVar2 = param_1[0x11];
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = uVar2;
  param_2[1] = param_2[1] + 4;
  puVar5 = (undefined4 *)param_2[1];
  uVar2 = param_1[0x12];
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = uVar2;
  param_2[1] = param_2[1] + 4;
  puVar4 = (undefined1 *)param_2[1];
  uVar1 = *(undefined1 *)(param_1 + 0x13);
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 2) {
    FUN_180639bf0(param_2,puVar4 + (1 - *param_2));
    puVar4 = (undefined1 *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 1;
  FUN_180639ec0(param_2,param_1 + 0x14);
  puVar5 = (undefined4 *)param_2[1];
  uVar2 = param_1[0x2a];
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = uVar2;
  param_2[1] = param_2[1] + 4;
  puVar5 = (undefined4 *)param_2[1];
  uVar2 = param_1[0x2b];
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = uVar2;
  param_2[1] = param_2[1] + 4;
  puVar4 = (undefined1 *)param_2[1];
  uVar1 = *(undefined1 *)(param_1 + 0x2c);
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 2) {
    FUN_180639bf0(param_2,puVar4 + (1 - *param_2));
    puVar4 = (undefined1 *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 1;
  puVar5 = (undefined4 *)param_2[1];
  uVar2 = param_1[0x2e];
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = uVar2;
  param_2[1] = param_2[1] + 4;
  puVar5 = (undefined4 *)param_2[1];
  uVar2 = param_1[0x2d];
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = uVar2;
  param_2[1] = param_2[1] + 4;
  FUN_1803370b0(param_1 + 0x30,param_2);
  lVar8 = *(longlong *)(param_1 + 0x5e);
  lVar3 = *(longlong *)(param_1 + 0x5c);
  puVar5 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = (int)(lVar8 - lVar3 >> 2);
  uVar6 = 0;
  puVar5 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar5;
  lVar8 = *(longlong *)(param_1 + 0x5c);
  uVar7 = uVar6;
  uVar10 = uVar6;
  if (*(longlong *)(param_1 + 0x5e) - lVar8 >> 2 != 0) {
    do {
      uVar2 = *(undefined4 *)(lVar8 + uVar7);
      if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
        puVar5 = (undefined4 *)param_2[1];
      }
      *puVar5 = uVar2;
      uVar9 = (int)uVar10 + 1;
      puVar5 = (undefined4 *)(param_2[1] + 4);
      param_2[1] = (longlong)puVar5;
      lVar8 = *(longlong *)(param_1 + 0x5c);
      uVar7 = uVar7 + 4;
      uVar10 = (ulonglong)uVar9;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0x5e) - lVar8 >> 2));
  }
  lVar8 = *(longlong *)(param_1 + 0x66);
  lVar3 = *(longlong *)(param_1 + 100);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = (int)(lVar8 - lVar3 >> 3);
  param_2[1] = param_2[1] + 4;
  uVar7 = uVar6;
  if (*(longlong *)(param_1 + 0x66) - *(longlong *)(param_1 + 100) >> 3 != 0) {
    do {
      (**(code **)(**(longlong **)(uVar7 + *(longlong *)(param_1 + 100)) + 0x18))
                (*(longlong **)(uVar7 + *(longlong *)(param_1 + 100)),param_2);
      uVar9 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar9;
      uVar7 = uVar7 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0x66) - *(longlong *)(param_1 + 100) >> 3));
  }
  return;
}





// 函数: void FUN_180336994(undefined8 param_1,longlong *param_2)
void FUN_180336994(undefined8 param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  longlong *unaff_RBX;
  ulonglong uVar6;
  undefined4 unaff_ESI;
  ulonglong uVar7;
  longlong unaff_RDI;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  puVar5 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = unaff_ESI;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_18063a110();
  puVar5 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0x44);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar5 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0x48);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x4c);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar4 = (undefined1 *)unaff_RBX[1];
  }
  *puVar4 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  FUN_180639ec0();
  puVar5 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0xa8);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar5 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0xac);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0xb0);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar4 = (undefined1 *)unaff_RBX[1];
  }
  *puVar4 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar5 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0xb8);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar5 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0xb4);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_1803370b0(unaff_RDI + 0xc0);
  lVar8 = *(longlong *)(unaff_RDI + 0x178);
  lVar3 = *(longlong *)(unaff_RDI + 0x170);
  puVar5 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = (int)(lVar8 - lVar3 >> 2);
  uVar6 = 0;
  puVar5 = (undefined4 *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (longlong)puVar5;
  lVar8 = *(longlong *)(unaff_RDI + 0x170);
  uVar7 = uVar6;
  uVar10 = uVar6;
  if (*(longlong *)(unaff_RDI + 0x178) - lVar8 >> 2 != 0) {
    do {
      uVar2 = *(undefined4 *)(lVar8 + uVar7);
      if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar5 = (undefined4 *)unaff_RBX[1];
      }
      *puVar5 = uVar2;
      uVar9 = (int)uVar10 + 1;
      puVar5 = (undefined4 *)(unaff_RBX[1] + 4);
      unaff_RBX[1] = (longlong)puVar5;
      lVar8 = *(longlong *)(unaff_RDI + 0x170);
      uVar7 = uVar7 + 4;
      uVar10 = (ulonglong)uVar9;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x178) - lVar8 >> 2));
  }
  lVar8 = *(longlong *)(unaff_RDI + 0x198);
  lVar3 = *(longlong *)(unaff_RDI + 400);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = (int)(lVar8 - lVar3 >> 3);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar7 = uVar6;
  if (*(longlong *)(unaff_RDI + 0x198) - *(longlong *)(unaff_RDI + 400) >> 3 != 0) {
    do {
      (**(code **)(**(longlong **)(uVar7 + *(longlong *)(unaff_RDI + 400)) + 0x18))();
      uVar9 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar9;
      uVar7 = uVar7 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x198) - *(longlong *)(unaff_RDI + 400) >> 3));
  }
  return;
}





// 函数: void FUN_1803369a3(undefined4 *param_1)
void FUN_1803369a3(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong in_RAX;
  undefined1 *puVar4;
  undefined4 *puVar5;
  longlong *unaff_RBX;
  ulonglong uVar6;
  undefined4 unaff_ESI;
  ulonglong uVar7;
  longlong unaff_RDI;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if ((ulonglong)((in_RAX - (longlong)param_1) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    param_1 = (undefined4 *)unaff_RBX[1];
  }
  *param_1 = unaff_ESI;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_18063a110();
  puVar5 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0x44);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar5 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0x48);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x4c);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar4 = (undefined1 *)unaff_RBX[1];
  }
  *puVar4 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  FUN_180639ec0();
  puVar5 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0xa8);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar5 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0xac);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0xb0);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar4 = (undefined1 *)unaff_RBX[1];
  }
  *puVar4 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar5 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0xb8);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar5 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0xb4);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_1803370b0(unaff_RDI + 0xc0);
  lVar8 = *(longlong *)(unaff_RDI + 0x178);
  lVar3 = *(longlong *)(unaff_RDI + 0x170);
  puVar5 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = (int)(lVar8 - lVar3 >> 2);
  uVar6 = 0;
  puVar5 = (undefined4 *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (longlong)puVar5;
  lVar8 = *(longlong *)(unaff_RDI + 0x170);
  uVar7 = uVar6;
  uVar10 = uVar6;
  if (*(longlong *)(unaff_RDI + 0x178) - lVar8 >> 2 != 0) {
    do {
      uVar2 = *(undefined4 *)(lVar8 + uVar7);
      if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar5 = (undefined4 *)unaff_RBX[1];
      }
      *puVar5 = uVar2;
      uVar9 = (int)uVar10 + 1;
      puVar5 = (undefined4 *)(unaff_RBX[1] + 4);
      unaff_RBX[1] = (longlong)puVar5;
      lVar8 = *(longlong *)(unaff_RDI + 0x170);
      uVar7 = uVar7 + 4;
      uVar10 = (ulonglong)uVar9;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x178) - lVar8 >> 2));
  }
  lVar8 = *(longlong *)(unaff_RDI + 0x198);
  lVar3 = *(longlong *)(unaff_RDI + 400);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = (int)(lVar8 - lVar3 >> 3);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar7 = uVar6;
  if (*(longlong *)(unaff_RDI + 0x198) - *(longlong *)(unaff_RDI + 400) >> 3 != 0) {
    do {
      (**(code **)(**(longlong **)(uVar7 + *(longlong *)(unaff_RDI + 400)) + 0x18))();
      uVar9 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar9;
      uVar7 = uVar7 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x198) - *(longlong *)(unaff_RDI + 400) >> 3));
  }
  return;
}





// 函数: void FUN_180336be5(void)
void FUN_180336be5(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *unaff_RBX;
  ulonglong uVar4;
  undefined4 unaff_ESI;
  ulonglong uVar5;
  longlong unaff_RDI;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  FUN_180639bf0();
  *(undefined4 *)unaff_RBX[1] = unaff_ESI;
  uVar4 = 0;
  puVar3 = (undefined4 *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (longlong)puVar3;
  lVar6 = *(longlong *)(unaff_RDI + 0x170);
  uVar5 = uVar4;
  uVar8 = uVar4;
  if (*(longlong *)(unaff_RDI + 0x178) - lVar6 >> 2 != 0) {
    do {
      uVar1 = *(undefined4 *)(lVar6 + uVar5);
      if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar3 = (undefined4 *)unaff_RBX[1];
      }
      *puVar3 = uVar1;
      uVar7 = (int)uVar8 + 1;
      puVar3 = (undefined4 *)(unaff_RBX[1] + 4);
      unaff_RBX[1] = (longlong)puVar3;
      lVar6 = *(longlong *)(unaff_RDI + 0x170);
      uVar5 = uVar5 + 4;
      uVar8 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x178) - lVar6 >> 2));
  }
  lVar6 = *(longlong *)(unaff_RDI + 0x198);
  lVar2 = *(longlong *)(unaff_RDI + 400);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (undefined4 *)unaff_RBX[1];
  }
  *puVar3 = (int)(lVar6 - lVar2 >> 3);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar5 = uVar4;
  if (*(longlong *)(unaff_RDI + 0x198) - *(longlong *)(unaff_RDI + 400) >> 3 != 0) {
    do {
      (**(code **)(**(longlong **)(uVar5 + *(longlong *)(unaff_RDI + 400)) + 0x18))();
      uVar7 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar7;
      uVar5 = uVar5 + 8;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x198) - *(longlong *)(unaff_RDI + 400) >> 3));
  }
  return;
}





// 函数: void FUN_180336c25(undefined8 param_1,undefined4 *param_2,longlong param_3)
void FUN_180336c25(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RBX;
  uint uVar4;
  ulonglong unaff_RBP;
  ulonglong uVar5;
  longlong unaff_RDI;
  int unaff_R15D;
  
  uVar5 = unaff_RBP & 0xffffffff;
  do {
    uVar1 = *(undefined4 *)(param_3 + uVar5);
    if ((ulonglong)((*unaff_RBX - (longlong)param_2) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      param_2 = (undefined4 *)unaff_RBX[1];
    }
    *param_2 = uVar1;
    unaff_R15D = unaff_R15D + 1;
    uVar5 = uVar5 + 4;
    param_2 = (undefined4 *)(unaff_RBX[1] + 4);
    unaff_RBX[1] = (longlong)param_2;
    param_3 = *(longlong *)(unaff_RDI + 0x170);
  } while ((ulonglong)(longlong)unaff_R15D <
           (ulonglong)(*(longlong *)(unaff_RDI + 0x178) - param_3 >> 2));
  lVar2 = *(longlong *)(unaff_RDI + 0x198);
  lVar3 = *(longlong *)(unaff_RDI + 400);
  if ((ulonglong)((*unaff_RBX - (longlong)param_2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    param_2 = (undefined4 *)unaff_RBX[1];
  }
  *param_2 = (int)(lVar2 - lVar3 >> 3);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar5 = unaff_RBP;
  if (*(longlong *)(unaff_RDI + 0x198) - *(longlong *)(unaff_RDI + 400) >> 3 != 0) {
    do {
      (**(code **)(**(longlong **)(uVar5 + *(longlong *)(unaff_RDI + 400)) + 0x18))();
      uVar4 = (int)unaff_RBP + 1;
      unaff_RBP = (ulonglong)uVar4;
      uVar5 = uVar5 + 8;
    } while ((ulonglong)(longlong)(int)uVar4 <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x198) - *(longlong *)(unaff_RDI + 400) >> 3));
  }
  return;
}





// 函数: void FUN_180336c92(undefined8 param_1,undefined4 *param_2)
void FUN_180336c92(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RBX;
  uint uVar3;
  ulonglong unaff_RBP;
  ulonglong uVar4;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x198);
  lVar2 = *(longlong *)(unaff_RDI + 400);
  if ((ulonglong)((*unaff_RBX - (longlong)param_2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    param_2 = (undefined4 *)unaff_RBX[1];
  }
  *param_2 = (int)(lVar1 - lVar2 >> 3);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar4 = unaff_RBP;
  if (*(longlong *)(unaff_RDI + 0x198) - *(longlong *)(unaff_RDI + 400) >> 3 != 0) {
    do {
      (**(code **)(**(longlong **)(uVar4 + *(longlong *)(unaff_RDI + 400)) + 0x18))();
      uVar3 = (int)unaff_RBP + 1;
      unaff_RBP = (ulonglong)uVar3;
      uVar4 = uVar4 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x198) - *(longlong *)(unaff_RDI + 400) >> 3));
  }
  return;
}





// 函数: void FUN_180336cbc(void)
void FUN_180336cbc(void)

{
  longlong unaff_RBX;
  uint uVar1;
  ulonglong unaff_RBP;
  undefined4 unaff_ESI;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  FUN_180639bf0();
  **(undefined4 **)(unaff_RBX + 8) = unaff_ESI;
  *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + 4;
  uVar2 = unaff_RBP;
  if (*(longlong *)(unaff_RDI + 0x198) - *(longlong *)(unaff_RDI + 400) >> 3 != 0) {
    do {
      (**(code **)(**(longlong **)(uVar2 + *(longlong *)(unaff_RDI + 400)) + 0x18))();
      uVar1 = (int)unaff_RBP + 1;
      unaff_RBP = (ulonglong)uVar1;
      uVar2 = uVar2 + 8;
    } while ((ulonglong)(longlong)(int)uVar1 <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x198) - *(longlong *)(unaff_RDI + 400) >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180336d40(undefined4 *param_1,longlong param_2)
void FUN_180336d40(undefined4 *param_1,longlong param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  
  *param_1 = **(undefined4 **)(param_2 + 8);
  lVar7 = *(longlong *)(param_2 + 8);
  param_1[1] = *(undefined4 *)(lVar7 + 4);
  param_1[2] = *(undefined4 *)(lVar7 + 8);
  param_1[3] = *(undefined4 *)(lVar7 + 0xc);
  param_1[4] = *(undefined4 *)(lVar7 + 0x10);
  param_1[5] = *(undefined4 *)(lVar7 + 0x14);
  param_1[6] = *(undefined4 *)(lVar7 + 0x18);
  param_1[7] = *(undefined4 *)(lVar7 + 0x1c);
  param_1[8] = *(undefined4 *)(lVar7 + 0x20);
  param_1[9] = *(undefined4 *)(lVar7 + 0x24);
  param_1[10] = *(undefined4 *)(lVar7 + 0x28);
  param_1[0xb] = *(undefined4 *)(lVar7 + 0x2c);
  param_1[0xc] = *(undefined4 *)(lVar7 + 0x30);
  param_1[0xd] = *(undefined4 *)(lVar7 + 0x34);
  param_1[0xe] = *(undefined4 *)(lVar7 + 0x38);
  param_1[0xf] = *(undefined4 *)(lVar7 + 0x3c);
  param_1[0x10] = *(undefined4 *)(lVar7 + 0x40);
  *(undefined4 **)(param_2 + 8) = (undefined4 *)(lVar7 + 0x44);
  param_1[0x11] = *(undefined4 *)(lVar7 + 0x44);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  param_1[0x12] = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  uVar1 = **(undefined1 **)(param_2 + 8);
  *(undefined1 **)(param_2 + 8) = *(undefined1 **)(param_2 + 8) + 1;
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  uVar2 = **(uint **)(param_2 + 8);
  puVar5 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar5;
  if (uVar2 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x14) + 0x18))(param_1 + 0x14,puVar5,uVar2);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
    puVar5 = *(uint **)(param_2 + 8);
  }
  param_1[0x2a] = *puVar5;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  param_1[0x2b] = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined1 *)(param_1 + 0x2c) = **(undefined1 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
  param_1[0x2e] = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  param_1[0x2d] = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  FUN_180337400(param_1 + 0x30,param_2);
  uVar2 = **(uint **)(param_2 + 8);
  puVar5 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar5;
  if (0 < (int)uVar2) {
    uVar13 = (ulonglong)uVar2;
    do {
      uVar3 = **(undefined4 **)(param_2 + 8);
      *(undefined4 **)(param_2 + 8) = *(undefined4 **)(param_2 + 8) + 1;
      puVar11 = *(undefined4 **)(param_1 + 0x5e);
      if (puVar11 < *(undefined4 **)(param_1 + 0x60)) {
        *(undefined4 **)(param_1 + 0x5e) = puVar11 + 1;
        *puVar11 = uVar3;
      }
      else {
        puVar9 = *(undefined4 **)(param_1 + 0x5c);
        lVar7 = (longlong)puVar11 - (longlong)puVar9 >> 2;
        if (lVar7 == 0) {
          lVar7 = 1;
LAB_180336f0c:
          puVar4 = (undefined4 *)
                   FUN_18062b420(_DAT_180c8ed18,lVar7 * 4,*(undefined1 *)(param_1 + 0x62));
          puVar9 = *(undefined4 **)(param_1 + 0x5c);
          puVar11 = *(undefined4 **)(param_1 + 0x5e);
        }
        else {
          lVar7 = lVar7 * 2;
          if (lVar7 != 0) goto LAB_180336f0c;
          puVar4 = (undefined4 *)0x0;
        }
        if (puVar9 != puVar11) {
                    // WARNING: Subroutine does not return
          memmove(puVar4,puVar9,(longlong)puVar11 - (longlong)puVar9);
        }
        *puVar4 = uVar3;
        if (*(longlong *)(param_1 + 0x5c) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined4 **)(param_1 + 0x5c) = puVar4;
        *(undefined4 **)(param_1 + 0x60) = puVar4 + lVar7;
        *(undefined4 **)(param_1 + 0x5e) = puVar4 + 1;
      }
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    puVar5 = *(uint **)(param_2 + 8);
  }
  uVar2 = *puVar5;
  *(uint **)(param_2 + 8) = puVar5 + 1;
  if (0 < (int)uVar2) {
    uVar13 = (ulonglong)uVar2;
    do {
      uVar6 = FUN_180337b40(param_2);
      puVar12 = *(undefined8 **)(param_1 + 0x66);
      if (puVar12 < *(undefined8 **)(param_1 + 0x68)) {
        *(undefined8 **)(param_1 + 0x66) = puVar12 + 1;
        *puVar12 = uVar6;
      }
      else {
        puVar10 = *(undefined8 **)(param_1 + 100);
        lVar7 = (longlong)puVar12 - (longlong)puVar10 >> 3;
        if (lVar7 == 0) {
          lVar7 = 1;
LAB_180337007:
          puVar8 = (undefined8 *)
                   FUN_18062b420(_DAT_180c8ed18,lVar7 * 8,*(undefined1 *)(param_1 + 0x6a));
          puVar10 = *(undefined8 **)(param_1 + 100);
          puVar12 = *(undefined8 **)(param_1 + 0x66);
        }
        else {
          lVar7 = lVar7 * 2;
          if (lVar7 != 0) goto LAB_180337007;
          puVar8 = (undefined8 *)0x0;
        }
        if (puVar10 != puVar12) {
                    // WARNING: Subroutine does not return
          memmove(puVar8,puVar10,(longlong)puVar12 - (longlong)puVar10);
        }
        *puVar8 = uVar6;
        if (*(longlong *)(param_1 + 100) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 **)(param_1 + 100) = puVar8;
        *(undefined8 **)(param_1 + 0x68) = puVar8 + lVar7;
        *(undefined8 **)(param_1 + 0x66) = puVar8 + 1;
      }
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180336e3d(void)
void FUN_180336e3d(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_RAX;
  undefined4 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  longlong unaff_RBX;
  longlong unaff_RSI;
  undefined4 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  
  *(undefined4 *)(unaff_RBX + 0xac) = *in_RAX;
  *(longlong *)(unaff_RSI + 8) = *(longlong *)(unaff_RSI + 8) + 4;
  *(undefined1 *)(unaff_RBX + 0xb0) = **(undefined1 **)(unaff_RSI + 8);
  *(longlong *)(unaff_RSI + 8) = *(longlong *)(unaff_RSI + 8) + 1;
  *(undefined4 *)(unaff_RBX + 0xb8) = **(undefined4 **)(unaff_RSI + 8);
  *(longlong *)(unaff_RSI + 8) = *(longlong *)(unaff_RSI + 8) + 4;
  *(undefined4 *)(unaff_RBX + 0xb4) = **(undefined4 **)(unaff_RSI + 8);
  *(longlong *)(unaff_RSI + 8) = *(longlong *)(unaff_RSI + 8) + 4;
  FUN_180337400(unaff_RBX + 0xc0);
  uVar1 = **(uint **)(unaff_RSI + 8);
  puVar4 = *(uint **)(unaff_RSI + 8) + 1;
  *(uint **)(unaff_RSI + 8) = puVar4;
  if (0 < (int)uVar1) {
    uVar12 = (ulonglong)uVar1;
    do {
      uVar2 = **(undefined4 **)(unaff_RSI + 8);
      *(undefined4 **)(unaff_RSI + 8) = *(undefined4 **)(unaff_RSI + 8) + 1;
      puVar10 = *(undefined4 **)(unaff_RBX + 0x178);
      if (puVar10 < *(undefined4 **)(unaff_RBX + 0x180)) {
        *(undefined4 **)(unaff_RBX + 0x178) = puVar10 + 1;
        *puVar10 = uVar2;
      }
      else {
        puVar8 = *(undefined4 **)(unaff_RBX + 0x170);
        lVar6 = (longlong)puVar10 - (longlong)puVar8 >> 2;
        if (lVar6 == 0) {
          lVar6 = 1;
LAB_180336f0c:
          puVar3 = (undefined4 *)
                   FUN_18062b420(_DAT_180c8ed18,lVar6 * 4,*(undefined1 *)(unaff_RBX + 0x188));
          puVar8 = *(undefined4 **)(unaff_RBX + 0x170);
          puVar10 = *(undefined4 **)(unaff_RBX + 0x178);
        }
        else {
          lVar6 = lVar6 * 2;
          if (lVar6 != 0) goto LAB_180336f0c;
          puVar3 = (undefined4 *)0x0;
        }
        if (puVar8 != puVar10) {
                    // WARNING: Subroutine does not return
          memmove(puVar3,puVar8,(longlong)puVar10 - (longlong)puVar8);
        }
        *puVar3 = uVar2;
        if (*(longlong *)(unaff_RBX + 0x170) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined4 **)(unaff_RBX + 0x170) = puVar3;
        *(undefined4 **)(unaff_RBX + 0x180) = puVar3 + lVar6;
        *(undefined4 **)(unaff_RBX + 0x178) = puVar3 + 1;
      }
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    puVar4 = *(uint **)(unaff_RSI + 8);
  }
  uVar1 = *puVar4;
  *(uint **)(unaff_RSI + 8) = puVar4 + 1;
  if (0 < (int)uVar1) {
    uVar12 = (ulonglong)uVar1;
    do {
      uVar5 = FUN_180337b40();
      puVar11 = *(undefined8 **)(unaff_RBX + 0x198);
      if (puVar11 < *(undefined8 **)(unaff_RBX + 0x1a0)) {
        *(undefined8 **)(unaff_RBX + 0x198) = puVar11 + 1;
        *puVar11 = uVar5;
      }
      else {
        puVar9 = *(undefined8 **)(unaff_RBX + 400);
        lVar6 = (longlong)puVar11 - (longlong)puVar9 >> 3;
        if (lVar6 == 0) {
          lVar6 = 1;
LAB_180337007:
          puVar7 = (undefined8 *)
                   FUN_18062b420(_DAT_180c8ed18,lVar6 * 8,*(undefined1 *)(unaff_RBX + 0x1a8));
          puVar9 = *(undefined8 **)(unaff_RBX + 400);
          puVar11 = *(undefined8 **)(unaff_RBX + 0x198);
        }
        else {
          lVar6 = lVar6 * 2;
          if (lVar6 != 0) goto LAB_180337007;
          puVar7 = (undefined8 *)0x0;
        }
        if (puVar9 != puVar11) {
                    // WARNING: Subroutine does not return
          memmove(puVar7,puVar9,(longlong)puVar11 - (longlong)puVar9);
        }
        *puVar7 = uVar5;
        if (*(longlong *)(unaff_RBX + 400) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 **)(unaff_RBX + 400) = puVar7;
        *(undefined8 **)(unaff_RBX + 0x1a0) = puVar7 + lVar6;
        *(undefined8 **)(unaff_RBX + 0x198) = puVar7 + 1;
      }
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}





