#include "TaleWorlds.Native.Split.h"

// 99_part_10_part051_sub002_sub002.c - 1 个函数

// 函数: void FUN_1806c7910(void)
void FUN_1806c7910(void)

{
  longlong unaff_RBP;
  longlong unaff_R12;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined4 uStack0000000000000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  **(undefined1 **)(unaff_R12 + 0x50) = 1;
  uStack0000000000000040 = in_stack_00000070;
  uStack0000000000000048 = in_stack_00000078;
  uStack0000000000000050 = *(undefined8 *)(unaff_RBP + -0x80);
  uStack0000000000000058 = *(undefined8 *)(unaff_RBP + -0x78);
  uStack0000000000000060 = *(undefined4 *)(unaff_RBP + -0x70);
  (**(code **)(unaff_RBP + -0x40))(*(undefined8 *)(unaff_R12 + 0x30),&stack0x00000040);
  FUN_1806d6f60();
                    // WARNING: Subroutine does not return
  memset(unaff_RBP + -0x38,0,0x80);
}



int FUN_1806c7a9d(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  int unaff_EDI;
  longlong *unaff_R12;
  longlong unaff_R13;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar1 = *(int *)(*unaff_R12 + 0x10);
  if (iVar1 != 0) {
    unaff_RBX = *(undefined8 *)(*(longlong *)(*unaff_R12 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
  }
  cVar7 = (**(code **)(*(longlong *)unaff_R12[5] + 0x10))
                    ((longlong *)unaff_R12[5],unaff_RBX,unaff_RBP + 0x230);
  if (((cVar7 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x230), pcVar2 != (char *)0x0)) &&
     (*pcVar2 != '\0')) {
    uVar8 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x238);
    (**(code **)(unaff_RBP + -0x40))(unaff_R12[6],uVar8);
  }
  uVar9 = FUN_1806d6f60();
  uVar8 = *(undefined4 *)(unaff_R13 + 0x36c);
  uVar5 = *(undefined4 *)(unaff_R13 + 0x370);
  uVar6 = *(undefined4 *)(unaff_R13 + 0x374);
  uVar3 = *(undefined8 *)(unaff_R13 + 0x358);
  *(undefined4 *)(unaff_RBP + -0x48) = *(undefined4 *)(unaff_R13 + 0x368);
  *(undefined4 *)(unaff_RBP + -0x44) = uVar8;
  *(undefined4 *)(unaff_RBP + -0x40) = uVar5;
  *(undefined4 *)(unaff_RBP + -0x3c) = uVar6;
  uVar8 = FUN_1806d7000(uVar9,uVar3);
  piVar4 = (int *)unaff_R12[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  cVar7 = FUN_1806c4320(uVar8,unaff_RBP + 0x240);
  if (cVar7 != '\0') {
    (**(code **)(unaff_RBP + -0x40))(unaff_R12[6],*(undefined4 *)(unaff_RBP + 0x240));
  }
  FUN_1806d6f60();
  return unaff_EDI + 0xf;
}



int FUN_1806c7b35(void)

{
  char cVar1;
  int *in_RAX;
  longlong unaff_RBP;
  int unaff_EDI;
  longlong unaff_R12;
  
  *in_RAX = *in_RAX + 1;
  cVar1 = FUN_1806c4320();
  if (cVar1 != '\0') {
    (**(code **)(unaff_RBP + -0x40))
              (*(undefined8 *)(unaff_R12 + 0x30),*(undefined4 *)(unaff_RBP + 0x240));
  }
  FUN_1806d6f60();
  return unaff_EDI + 0xf;
}



int FUN_1806c7b80(undefined8 *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcStackX_8;
  undefined8 uStackX_10;
  int aiStackX_18 [2];
  undefined1 auStackX_20 [8];
  
  aiStackX_18[0] = 0x15b;
  piVar8 = aiStackX_18;
  if ((int *)param_2[0xb] != (int *)0x0) {
    piVar8 = (int *)param_2[0xb];
  }
  FUN_1806d7000(param_2,*param_1);
  FUN_1806d7000(param_2,param_1[2]);
  puVar7 = &UNK_18094c9c0;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar6 = &UNK_18094c9c0;
  }
  else {
    puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
  }
  cVar4 = FUN_1806c4940(param_2[5],param_2[8],puVar6,&uStackX_10);
  if (cVar4 != '\0') {
    lVar2 = param_2[6];
    (*(code *)param_1[5])(lVar2,auStackX_20,&pcStackX_8);
    (*(code *)param_1[4])(lVar2,uStackX_10,pcStackX_8);
  }
  *piVar8 = *piVar8 + 1;
  FUN_1806d6f60(param_2);
  FUN_1806d7000(param_2,param_1[3]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar6 = &UNK_18094c9c0;
  }
  else {
    puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
  }
  cVar4 = FUN_1806c4940(param_2[5],param_2[8],puVar6,&pcStackX_8);
  if (cVar4 != '\0') {
    lVar2 = param_2[6];
    (*(code *)param_1[5])(lVar2,&uStackX_10,auStackX_20);
    (*(code *)param_1[4])(lVar2,uStackX_10,pcStackX_8);
  }
  FUN_1806d6f60(param_2);
  FUN_1806d6f60(param_2);
  FUN_1806c1c70(param_2,param_3 + 1,param_1 + 6,0x180be0530,aiStackX_18);
  FUN_1806c0130(param_2,param_1 + 0x13,param_3 + 5);
  pcVar3 = (code *)param_1[0x1c];
  FUN_1806d7000(param_2,param_1[0x19]);
  piVar8 = (int *)param_2[0xb];
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      aiStackX_18[0] = 0;
      FUN_1806d81c0(pcStackX_8,param_2[7],aiStackX_18,0x180be0430);
      (*pcVar3)(param_2[6],aiStackX_18);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = (code *)param_1[0x20];
  FUN_1806d7000(param_2,param_1[0x1d]);
  piVar8 = (int *)param_2[0xb];
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar9 = FUN_1806d80c0(pcStackX_8,&uStackX_10);
      (*pcVar3)(param_2[6],uVar9);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = (code *)param_1[0x24];
  FUN_1806d7000(param_2,param_1[0x21]);
  piVar8 = (int *)param_2[0xb];
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar9 = FUN_1806d80c0(pcStackX_8,&uStackX_10);
      (*pcVar3)(param_2[6],uVar9);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = (code *)param_1[0x28];
  FUN_1806d7000(param_2,param_1[0x25]);
  piVar8 = (int *)param_2[0xb];
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar9 = FUN_1806d80c0(pcStackX_8,&uStackX_10);
      (*pcVar3)(param_2[6],uVar9);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = (code *)param_1[0x2c];
  FUN_1806d7000(param_2,param_1[0x29]);
  piVar8 = (int *)param_2[0xb];
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar9 = FUN_1806d80c0(pcStackX_8,&uStackX_10);
      (*pcVar3)(param_2[6],uVar9);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = (code *)param_1[0x33];
  FUN_1806d7000(param_2,param_1[0x30]);
  piVar8 = (int *)param_2[0xb];
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar7 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar7,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) &&
       ((*pcStackX_8 != '\0' && ((longlong *)param_2[4] != (longlong *)0x0)))) {
      uVar5 = (**(code **)(*(longlong *)param_2[4] + 8))();
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  FUN_1806d6f60(param_2);
  return param_3 + 0xf;
}



int FUN_1806c8030(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  char *pcStackX_8;
  undefined1 auStackX_10 [8];
  undefined4 auStackX_18 [2];
  
  pcVar3 = *(code **)(param_1 + 0x58);
  FUN_1806d7080(param_2,*(undefined8 *)(param_1 + 0x40));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar6 = &UNK_18094c9c0;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = *(code **)(param_1 + 0x78);
  FUN_1806d7080(param_2,*(undefined8 *)(param_1 + 0x60));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      auStackX_18[0] = 0;
      FUN_1806d81c0(pcStackX_8,param_2[7],auStackX_18,0x180be0740);
      (*pcVar3)(param_2[6],auStackX_18);
    }
  }
  FUN_1806d6f60(param_2);
  return param_3 + 2;
}



int FUN_1806c81b0(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  char *pcStackX_8;
  undefined1 auStackX_10 [8];
  undefined4 auStackX_18 [2];
  
  pcVar3 = *(code **)(param_1 + 0x208);
  FUN_1806d7080(param_2,*(undefined8 *)(param_1 + 0x1f0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar6 = &UNK_18094c9c0;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = *(code **)(param_1 + 0x228);
  FUN_1806d7080(param_2,*(undefined8 *)(param_1 + 0x210));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = *(code **)(param_1 + 0x248);
  FUN_1806d7080(param_2,*(undefined8 *)(param_1 + 0x230));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = *(code **)(param_1 + 0x268);
  FUN_1806d7080(param_2,*(undefined8 *)(param_1 + 0x250));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = *(code **)(param_1 + 0x288);
  FUN_1806d7080(param_2,*(undefined8 *)(param_1 + 0x270));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = *(code **)(param_1 + 0x2a8);
  FUN_1806d7080(param_2,*(undefined8 *)(param_1 + 0x290));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      auStackX_18[0] = 0;
      FUN_1806d81c0(pcStackX_8,param_2[7],auStackX_18,0x180be0680);
      (*pcVar3)(param_2[6],auStackX_18);
    }
  }
  FUN_1806d6f60(param_2);
  return param_3 + 8;
}



int FUN_1806c8540(undefined8 *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcStackX_8;
  undefined8 uStackX_10;
  int aiStackX_18 [2];
  undefined1 auStackX_20 [8];
  
  aiStackX_18[0] = 0x15b;
  piVar8 = aiStackX_18;
  if ((int *)param_2[0xb] != (int *)0x0) {
    piVar8 = (int *)param_2[0xb];
  }
  FUN_1806d7080(param_2,*param_1);
  FUN_1806d7080(param_2,param_1[2]);
  puVar7 = &UNK_18094c9c0;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar6 = &UNK_18094c9c0;
  }
  else {
    puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
  }
  cVar4 = FUN_1806c4940(param_2[5],param_2[8],puVar6,&uStackX_10);
  if (cVar4 != '\0') {
    lVar2 = param_2[6];
    (*(code *)param_1[5])(lVar2,auStackX_20,&pcStackX_8);
    (*(code *)param_1[4])(lVar2,uStackX_10,pcStackX_8);
  }
  *piVar8 = *piVar8 + 1;
  FUN_1806d6f60(param_2);
  FUN_1806d7080(param_2,param_1[3]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar6 = &UNK_18094c9c0;
  }
  else {
    puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
  }
  cVar4 = FUN_1806c4940(param_2[5],param_2[8],puVar6,&pcStackX_8);
  if (cVar4 != '\0') {
    lVar2 = param_2[6];
    (*(code *)param_1[5])(lVar2,&uStackX_10,auStackX_20);
    (*(code *)param_1[4])(lVar2,uStackX_10,pcStackX_8);
  }
  FUN_1806d6f60(param_2);
  FUN_1806d6f60(param_2);
  FUN_1806c1e70(param_2,param_3 + 1,param_1 + 6,0x180be0530,aiStackX_18);
  FUN_1806c02c0(param_2,param_1 + 0x13,param_3 + 5);
  pcVar3 = (code *)param_1[0x1c];
  FUN_1806d7080(param_2,param_1[0x19]);
  piVar8 = (int *)param_2[0xb];
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      aiStackX_18[0] = 0;
      FUN_1806d81c0(pcStackX_8,param_2[7],aiStackX_18,0x180be0430);
      (*pcVar3)(param_2[6],aiStackX_18);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = (code *)param_1[0x20];
  FUN_1806d7080(param_2,param_1[0x1d]);
  piVar8 = (int *)param_2[0xb];
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar9 = FUN_1806d80c0(pcStackX_8,&uStackX_10);
      (*pcVar3)(param_2[6],uVar9);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = (code *)param_1[0x24];
  FUN_1806d7080(param_2,param_1[0x21]);
  piVar8 = (int *)param_2[0xb];
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar9 = FUN_1806d80c0(pcStackX_8,&uStackX_10);
      (*pcVar3)(param_2[6],uVar9);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = (code *)param_1[0x28];
  FUN_1806d7080(param_2,param_1[0x25]);
  piVar8 = (int *)param_2[0xb];
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar9 = FUN_1806d80c0(pcStackX_8,&uStackX_10);
      (*pcVar3)(param_2[6],uVar9);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = (code *)param_1[0x2c];
  FUN_1806d7080(param_2,param_1[0x29]);
  piVar8 = (int *)param_2[0xb];
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar9 = FUN_1806d80c0(pcStackX_8,&uStackX_10);
      (*pcVar3)(param_2[6],uVar9);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = (code *)param_1[0x33];
  FUN_1806d7080(param_2,param_1[0x30]);
  piVar8 = (int *)param_2[0xb];
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar7 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar7,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) &&
       ((*pcStackX_8 != '\0' && ((longlong *)param_2[4] != (longlong *)0x0)))) {
      uVar5 = (**(code **)(*(longlong *)param_2[4] + 8))();
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  FUN_1806d6f60(param_2);
  return param_3 + 0xf;
}



int FUN_1806c89f0(undefined8 *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  char *pcStackX_8;
  char *pcStackX_10;
  undefined4 auStackX_18 [2];
  
  pcVar4 = (code *)param_1[3];
  FUN_1806d7080(param_2,*param_1);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar10 = &UNK_18094c9c0;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &UNK_18094c9c0;
  }
  else {
    puVar9 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
  }
  plVar3 = (longlong *)param_2[8];
  lVar7 = 0;
  cVar5 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar9,&pcStackX_8);
  if ((((cVar5 == '\0') || (pcStackX_10 = pcStackX_8, pcStackX_8 == (char *)0x0)) ||
      (*pcStackX_8 == '\0')) ||
     ((lVar6 = _strtoui64(pcStackX_8,&pcStackX_10,10), lVar7 = 0, lVar6 == 0 ||
      (lVar7 = (**(code **)(*plVar3 + 0x50))(plVar3,lVar6), lVar7 != 0)))) {
    (*pcVar4)(param_2[6],lVar7);
  }
  else {
    uVar8 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
    _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
              (uVar8,4,&UNK_18094c930,0x6c,&UNK_18094c870,lVar6);
  }
  FUN_1806d6f60(param_2);
  pcVar4 = (code *)param_1[7];
  FUN_1806d7080(param_2,param_1[4]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar5 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar9,&pcStackX_8)
    ;
    if (((cVar5 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar11 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      (*pcVar4)(param_2[6],uVar11);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar4 = (code *)param_1[0xb];
  FUN_1806d7080(param_2,param_1[8]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar5 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar9,&pcStackX_8)
    ;
    if (((cVar5 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar11 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      (*pcVar4)(param_2[6],uVar11);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar4 = (code *)param_1[0xf];
  FUN_1806d7080(param_2,param_1[0xc]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar5 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar9,&pcStackX_8)
    ;
    if (((cVar5 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar11 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      (*pcVar4)(param_2[6],uVar11);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar4 = (code *)param_1[0x13];
  FUN_1806d7080(param_2,param_1[0x10]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar10 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar5 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar10,&pcStackX_8);
    if (((cVar5 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      auStackX_18[0] = 0;
      FUN_1806d81c0(pcStackX_8,param_2[7],auStackX_18,0x180be0510);
      (*pcVar4)(param_2[6],auStackX_18);
    }
  }
  FUN_1806d6f60(param_2);
  return param_3 + 5;
}



int FUN_1806c8a06(undefined4 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *in_RCX;
  undefined *puVar11;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  undefined *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  
  uVar10 = *in_RCX;
  *(int *)(unaff_RBP + -0x28) = (int)param_2;
  *(int *)(unaff_RBP + -0x24) = (int)((ulonglong)param_2 >> 0x20);
  *(undefined4 *)(unaff_RBP + -0x20) = in_XMM1_Dc;
  *(undefined4 *)(unaff_RBP + -0x1c) = in_XMM1_Dd;
  FUN_1806d7080(param_1,uVar10);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar12 = &UNK_18094c9c0;
  iVar1 = *(int *)(*unaff_RBX + 0x10);
  if (iVar1 == 0) {
    puVar11 = &UNK_18094c9c0;
  }
  else {
    puVar11 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
  }
  plVar3 = (longlong *)unaff_RBX[8];
  lVar9 = 0;
  cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                    ((longlong *)unaff_RBX[5],puVar11,unaff_RBP + 0x30);
  if (cVar7 != '\0') {
    pcVar4 = *(char **)(unaff_RBP + 0x30);
    *(char **)(unaff_RBP + 0x38) = pcVar4;
    if ((((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) &&
        (lVar8 = _strtoui64(pcVar4,unaff_RBP + 0x38,10), lVar9 = 0, lVar8 != 0)) &&
       (lVar9 = (**(code **)(*plVar3 + 0x50))(plVar3,lVar8), lVar9 == 0)) {
      uVar10 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar10,4,&UNK_18094c930,0x6c,&UNK_18094c870);
      goto LAB_1806c8af0;
    }
  }
  (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],lVar9);
LAB_1806c8af0:
  uVar13 = FUN_1806d6f60();
  uVar14 = *(undefined4 *)((longlong)in_RCX + 0x34);
  uVar5 = *(undefined4 *)(in_RCX + 7);
  uVar6 = *(undefined4 *)((longlong)in_RCX + 0x3c);
  uVar10 = in_RCX[4];
  *(undefined4 *)(unaff_RBP + -0x28) = *(undefined4 *)(in_RCX + 6);
  *(undefined4 *)(unaff_RBP + -0x24) = uVar14;
  *(undefined4 *)(unaff_RBP + -0x20) = uVar5;
  *(undefined4 *)(unaff_RBP + -0x1c) = uVar6;
  FUN_1806d7080(uVar13,uVar10);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(undefined8 *)(unaff_RBP + 0x30) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 == 0) {
      puVar11 = &UNK_18094c9c0;
    }
    else {
      puVar11 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar11,unaff_RBP + 0x30);
    if (((cVar7 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x30), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar14 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x38);
      (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],uVar14);
    }
  }
  uVar13 = FUN_1806d6f60();
  uVar14 = *(undefined4 *)((longlong)in_RCX + 0x54);
  uVar5 = *(undefined4 *)(in_RCX + 0xb);
  uVar6 = *(undefined4 *)((longlong)in_RCX + 0x5c);
  uVar10 = in_RCX[8];
  *(undefined4 *)(unaff_RBP + -0x28) = *(undefined4 *)(in_RCX + 10);
  *(undefined4 *)(unaff_RBP + -0x24) = uVar14;
  *(undefined4 *)(unaff_RBP + -0x20) = uVar5;
  *(undefined4 *)(unaff_RBP + -0x1c) = uVar6;
  FUN_1806d7080(uVar13,uVar10);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(undefined8 *)(unaff_RBP + 0x30) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 == 0) {
      puVar11 = &UNK_18094c9c0;
    }
    else {
      puVar11 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar11,unaff_RBP + 0x30);
    if (((cVar7 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x30), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar14 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x38);
      (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],uVar14);
    }
  }
  uVar13 = FUN_1806d6f60();
  uVar14 = *(undefined4 *)((longlong)in_RCX + 0x74);
  uVar5 = *(undefined4 *)(in_RCX + 0xf);
  uVar6 = *(undefined4 *)((longlong)in_RCX + 0x7c);
  uVar10 = in_RCX[0xc];
  *(undefined4 *)(unaff_RBP + -0x28) = *(undefined4 *)(in_RCX + 0xe);
  *(undefined4 *)(unaff_RBP + -0x24) = uVar14;
  *(undefined4 *)(unaff_RBP + -0x20) = uVar5;
  *(undefined4 *)(unaff_RBP + -0x1c) = uVar6;
  FUN_1806d7080(uVar13,uVar10);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(undefined8 *)(unaff_RBP + 0x30) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 == 0) {
      puVar11 = &UNK_18094c9c0;
    }
    else {
      puVar11 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar11,unaff_RBP + 0x30);
    if (((cVar7 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x30), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar14 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x38);
      (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],uVar14);
    }
  }
  uVar13 = FUN_1806d6f60();
  uVar14 = *(undefined4 *)((longlong)in_RCX + 0x94);
  uVar5 = *(undefined4 *)(in_RCX + 0x13);
  uVar6 = *(undefined4 *)((longlong)in_RCX + 0x9c);
  uVar10 = in_RCX[0x10];
  *(undefined4 *)(unaff_RBP + -0x28) = *(undefined4 *)(in_RCX + 0x12);
  *(undefined4 *)(unaff_RBP + -0x24) = uVar14;
  *(undefined4 *)(unaff_RBP + -0x20) = uVar5;
  *(undefined4 *)(unaff_RBP + -0x1c) = uVar6;
  FUN_1806d7080(uVar13,uVar10);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(undefined8 *)(unaff_RBP + 0x30) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      puVar12 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar12,unaff_RBP + 0x30);
    if (((cVar7 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x30), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      lVar9 = unaff_RBX[7];
      *(undefined4 *)(unaff_RBP + 0x40) = 0;
      FUN_1806d81c0(pcVar4,lVar9,unaff_RBP + 0x40,0x180be0510);
      lVar9 = unaff_RBX[6];
      *(undefined1 *)(unaff_RBP + 0x40) = *(undefined1 *)(unaff_RBP + 0x40);
      (**(code **)(unaff_RBP + -0x20))(lVar9,unaff_RBP + 0x40);
    }
  }
  FUN_1806d6f60();
  return param_3 + 5;
}



int FUN_1806c8a17(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  
  *(int *)(unaff_RBP + -0x28) = (int)param_2;
  *(int *)(unaff_RBP + -0x24) = (int)((ulonglong)param_2 >> 0x20);
  *(undefined4 *)(unaff_RBP + -0x20) = in_XMM1_Dc;
  *(undefined4 *)(unaff_RBP + -0x1c) = in_XMM1_Dd;
  FUN_1806d7080();
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar12 = &UNK_18094c9c0;
  iVar1 = *(int *)(*unaff_RBX + 0x10);
  if (iVar1 == 0) {
    puVar11 = &UNK_18094c9c0;
  }
  else {
    puVar11 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
  }
  plVar3 = (longlong *)unaff_RBX[8];
  lVar9 = 0;
  cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                    ((longlong *)unaff_RBX[5],puVar11,unaff_RBP + 0x30);
  if (cVar7 != '\0') {
    pcVar4 = *(char **)(unaff_RBP + 0x30);
    *(char **)(unaff_RBP + 0x38) = pcVar4;
    if ((((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) &&
        (lVar8 = _strtoui64(pcVar4,unaff_RBP + 0x38,10), lVar9 = 0, lVar8 != 0)) &&
       (lVar9 = (**(code **)(*plVar3 + 0x50))(plVar3,lVar8), lVar9 == 0)) {
      uVar10 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar10,4,&UNK_18094c930,0x6c,&UNK_18094c870);
      goto LAB_1806c8af0;
    }
  }
  (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],lVar9);
LAB_1806c8af0:
  uVar13 = FUN_1806d6f60();
  uVar14 = *(undefined4 *)(unaff_RDI + 0x34);
  uVar5 = *(undefined4 *)(unaff_RDI + 0x38);
  uVar6 = *(undefined4 *)(unaff_RDI + 0x3c);
  uVar10 = *(undefined8 *)(unaff_RDI + 0x20);
  *(undefined4 *)(unaff_RBP + -0x28) = *(undefined4 *)(unaff_RDI + 0x30);
  *(undefined4 *)(unaff_RBP + -0x24) = uVar14;
  *(undefined4 *)(unaff_RBP + -0x20) = uVar5;
  *(undefined4 *)(unaff_RBP + -0x1c) = uVar6;
  FUN_1806d7080(uVar13,uVar10);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(undefined8 *)(unaff_RBP + 0x30) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 == 0) {
      puVar11 = &UNK_18094c9c0;
    }
    else {
      puVar11 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar11,unaff_RBP + 0x30);
    if (((cVar7 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x30), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar14 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x38);
      (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],uVar14);
    }
  }
  uVar13 = FUN_1806d6f60();
  uVar14 = *(undefined4 *)(unaff_RDI + 0x54);
  uVar5 = *(undefined4 *)(unaff_RDI + 0x58);
  uVar6 = *(undefined4 *)(unaff_RDI + 0x5c);
  uVar10 = *(undefined8 *)(unaff_RDI + 0x40);
  *(undefined4 *)(unaff_RBP + -0x28) = *(undefined4 *)(unaff_RDI + 0x50);
  *(undefined4 *)(unaff_RBP + -0x24) = uVar14;
  *(undefined4 *)(unaff_RBP + -0x20) = uVar5;
  *(undefined4 *)(unaff_RBP + -0x1c) = uVar6;
  FUN_1806d7080(uVar13,uVar10);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(undefined8 *)(unaff_RBP + 0x30) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 == 0) {
      puVar11 = &UNK_18094c9c0;
    }
    else {
      puVar11 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar11,unaff_RBP + 0x30);
    if (((cVar7 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x30), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar14 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x38);
      (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],uVar14);
    }
  }
  uVar13 = FUN_1806d6f60();
  uVar14 = *(undefined4 *)(unaff_RDI + 0x74);
  uVar5 = *(undefined4 *)(unaff_RDI + 0x78);
  uVar6 = *(undefined4 *)(unaff_RDI + 0x7c);
  uVar10 = *(undefined8 *)(unaff_RDI + 0x60);
  *(undefined4 *)(unaff_RBP + -0x28) = *(undefined4 *)(unaff_RDI + 0x70);
  *(undefined4 *)(unaff_RBP + -0x24) = uVar14;
  *(undefined4 *)(unaff_RBP + -0x20) = uVar5;
  *(undefined4 *)(unaff_RBP + -0x1c) = uVar6;
  FUN_1806d7080(uVar13,uVar10);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(undefined8 *)(unaff_RBP + 0x30) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 == 0) {
      puVar11 = &UNK_18094c9c0;
    }
    else {
      puVar11 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar11,unaff_RBP + 0x30);
    if (((cVar7 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x30), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar14 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x38);
      (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],uVar14);
    }
  }
  uVar13 = FUN_1806d6f60();
  uVar14 = *(undefined4 *)(unaff_RDI + 0x94);
  uVar5 = *(undefined4 *)(unaff_RDI + 0x98);
  uVar6 = *(undefined4 *)(unaff_RDI + 0x9c);
  uVar10 = *(undefined8 *)(unaff_RDI + 0x80);
  *(undefined4 *)(unaff_RBP + -0x28) = *(undefined4 *)(unaff_RDI + 0x90);
  *(undefined4 *)(unaff_RBP + -0x24) = uVar14;
  *(undefined4 *)(unaff_RBP + -0x20) = uVar5;
  *(undefined4 *)(unaff_RBP + -0x1c) = uVar6;
  FUN_1806d7080(uVar13,uVar10);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(undefined8 *)(unaff_RBP + 0x30) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      puVar12 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar12,unaff_RBP + 0x30);
    if (((cVar7 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x30), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      lVar9 = unaff_RBX[7];
      *(undefined4 *)(unaff_RBP + 0x40) = 0;
      FUN_1806d81c0(pcVar4,lVar9,unaff_RBP + 0x40,0x180be0510);
      lVar9 = unaff_RBX[6];
      *(undefined1 *)(unaff_RBP + 0x40) = *(undefined1 *)(unaff_RBP + 0x40);
      (**(code **)(unaff_RBP + -0x20))(lVar9,unaff_RBP + 0x40);
    }
  }
  FUN_1806d6f60();
  return param_3 + 5;
}



int FUN_1806c8b1f(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int *in_RAX;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  int unaff_R13D;
  undefined8 unaff_R15;
  undefined4 uVar9;
  undefined4 uVar10;
  
  *in_RAX = *in_RAX + 1;
  *(undefined8 *)(unaff_RBP + 0x30) = 0;
  if (((((char)unaff_RBX[9] != '\0') &&
       (cVar8 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                          ((longlong *)unaff_RBX[5],param_2,unaff_RBP + 0x30), cVar8 != '\0')) &&
      (pcVar2 = *(char **)(unaff_RBP + 0x30), pcVar2 != (char *)0x0)) && (*pcVar2 != '\0')) {
    uVar9 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x38);
    (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],uVar9);
  }
  uVar10 = FUN_1806d6f60();
  uVar9 = *(undefined4 *)(unaff_RDI + 0x54);
  uVar6 = *(undefined4 *)(unaff_RDI + 0x58);
  uVar7 = *(undefined4 *)(unaff_RDI + 0x5c);
  uVar3 = *(undefined8 *)(unaff_RDI + 0x40);
  *(undefined4 *)(unaff_RBP + -0x28) = *(undefined4 *)(unaff_RDI + 0x50);
  *(undefined4 *)(unaff_RBP + -0x24) = uVar9;
  *(undefined4 *)(unaff_RBP + -0x20) = uVar6;
  *(undefined4 *)(unaff_RBP + -0x1c) = uVar7;
  FUN_1806d7080(uVar10,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(undefined8 *)(unaff_RBP + 0x30) = 0;
  if ((((char)unaff_RBX[9] != '\0') &&
      (cVar8 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar8 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x30), pcVar2 != (char *)0x0 && (*pcVar2 != '\0')))) {
    uVar9 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x38);
    (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],uVar9);
  }
  uVar10 = FUN_1806d6f60();
  uVar9 = *(undefined4 *)(unaff_RDI + 0x74);
  uVar6 = *(undefined4 *)(unaff_RDI + 0x78);
  uVar7 = *(undefined4 *)(unaff_RDI + 0x7c);
  uVar3 = *(undefined8 *)(unaff_RDI + 0x60);
  *(undefined4 *)(unaff_RBP + -0x28) = *(undefined4 *)(unaff_RDI + 0x70);
  *(undefined4 *)(unaff_RBP + -0x24) = uVar9;
  *(undefined4 *)(unaff_RBP + -0x20) = uVar6;
  *(undefined4 *)(unaff_RBP + -0x1c) = uVar7;
  FUN_1806d7080(uVar10,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(undefined8 *)(unaff_RBP + 0x30) = 0;
  if ((((char)unaff_RBX[9] != '\0') &&
      (cVar8 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar8 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x30), pcVar2 != (char *)0x0 && (*pcVar2 != '\0')))) {
    uVar9 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x38);
    (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],uVar9);
  }
  uVar10 = FUN_1806d6f60();
  uVar9 = *(undefined4 *)(unaff_RDI + 0x94);
  uVar6 = *(undefined4 *)(unaff_RDI + 0x98);
  uVar7 = *(undefined4 *)(unaff_RDI + 0x9c);
  uVar3 = *(undefined8 *)(unaff_RDI + 0x80);
  *(undefined4 *)(unaff_RBP + -0x28) = *(undefined4 *)(unaff_RDI + 0x90);
  *(undefined4 *)(unaff_RBP + -0x24) = uVar9;
  *(undefined4 *)(unaff_RBP + -0x20) = uVar6;
  *(undefined4 *)(unaff_RBP + -0x1c) = uVar7;
  FUN_1806d7080(uVar10,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(undefined8 *)(unaff_RBP + 0x30) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      unaff_R15 = *(undefined8 *)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar8 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],unaff_R15,unaff_RBP + 0x30);
    if (((cVar8 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x30), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != '\0')) {
      lVar5 = unaff_RBX[7];
      *(undefined4 *)(unaff_RBP + 0x40) = 0;
      FUN_1806d81c0(pcVar2,lVar5,unaff_RBP + 0x40,0x180be0510);
      lVar5 = unaff_RBX[6];
      *(undefined1 *)(unaff_RBP + 0x40) = *(undefined1 *)(unaff_RBP + 0x40);
      (**(code **)(unaff_RBP + -0x20))(lVar5,unaff_RBP + 0x40);
    }
  }
  FUN_1806d6f60();
  return unaff_R13D + 5;
}



int FUN_1806c8cb5(void)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  char cVar4;
  int *in_RAX;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  int unaff_R13D;
  undefined8 unaff_R15;
  
  *in_RAX = *in_RAX + 1;
  *(undefined8 *)(unaff_RBP + 0x30) = unaff_RSI;
  if ((char)unaff_RBX[9] != (char)unaff_RSI) {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      unaff_R15 = *(undefined8 *)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],unaff_R15,unaff_RBP + 0x30);
    if (((cVar4 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x30), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != (char)unaff_RSI)) {
      lVar3 = unaff_RBX[7];
      *(int *)(unaff_RBP + 0x40) = (int)unaff_RSI;
      FUN_1806d81c0(pcVar2,lVar3,unaff_RBP + 0x40,0x180be0510);
      lVar3 = unaff_RBX[6];
      *(undefined1 *)(unaff_RBP + 0x40) = *(undefined1 *)(unaff_RBP + 0x40);
      (**(code **)(unaff_RBP + -0x20))(lVar3,unaff_RBP + 0x40);
    }
  }
  FUN_1806d6f60();
  return unaff_R13D + 5;
}



int FUN_1806c8d40(undefined8 *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  char *pcStackX_8;
  undefined1 auStackX_10 [8];
  
  pcVar3 = (code *)param_1[3];
  FUN_1806d7080(param_2,*param_1);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar6 = &UNK_18094c9c0;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = (code *)param_1[7];
  FUN_1806d7080(param_2,param_1[4]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = (code *)param_1[0xb];
  FUN_1806d7080(param_2,param_1[8]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = (code *)param_1[0xf];
  FUN_1806d7080(param_2,param_1[0xc]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = (code *)param_1[0x13];
  FUN_1806d7080(param_2,param_1[0x10]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  return param_3 + 5;
}



int FUN_1806c9010(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  char *pcStackX_8;
  undefined1 auStackX_10 [8];
  
  pcVar3 = *(code **)(param_1 + 0xb8);
  FUN_1806d7080(param_2,*(undefined8 *)(param_1 + 0xa0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar6 = &UNK_18094c9c0;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = *(code **)(param_1 + 0xd8);
  FUN_1806d7080(param_2,*(undefined8 *)(param_1 + 0xc0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = *(code **)(param_1 + 0xf8);
  FUN_1806d7080(param_2,*(undefined8 *)(param_1 + 0xe0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = *(code **)(param_1 + 0x118);
  FUN_1806d7080(param_2,*(undefined8 *)(param_1 + 0x100));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  return param_3 + 4;
}



int FUN_1806c9270(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  char *pcStackX_8;
  undefined1 auStackX_10 [8];
  undefined4 auStackX_18 [2];
  
  pcVar3 = *(code **)(param_1 + 0x30);
  FUN_1806d7080(param_2,*(undefined8 *)(param_1 + 0x18));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar6 = &UNK_18094c9c0;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = *(code **)(param_1 + 0x50);
  FUN_1806d7080(param_2,*(undefined8 *)(param_1 + 0x38));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = *(code **)(param_1 + 0x70);
  FUN_1806d7080(param_2,*(undefined8 *)(param_1 + 0x58));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = *(code **)(param_1 + 0x90);
  FUN_1806d7080(param_2,*(undefined8 *)(param_1 + 0x78));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      auStackX_18[0] = 0;
      FUN_1806d81c0(pcStackX_8,param_2[7],auStackX_18,0x180be00c0);
      (*pcVar3)(param_2[6],auStackX_18);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = *(code **)(param_1 + 0xb0);
  FUN_1806d7080(param_2,*(undefined8 *)(param_1 + 0x98));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d5410(pcStackX_8,&DAT_180be0100);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = *(code **)(param_1 + 0xd0);
  FUN_1806d7080(param_2,*(undefined8 *)(param_1 + 0xb8));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d5410(pcStackX_8,&DAT_180be0100);
      (*pcVar3)(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  return param_3 + 9;
}



int FUN_1806c95f0(undefined8 *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcStackX_8;
  char *pcStackX_10;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  uStack_60 = *(undefined4 *)(param_1 + 2);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_58 = *(undefined4 *)(param_1 + 3);
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_1806d7080(param_2,*param_1);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar5 = &UNK_18094c9c0;
  pcStackX_10 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar4,&pcStackX_10);
    if (((cVar3 != '\0') && (pcStackX_10 != (char *)0x0)) && (*pcStackX_10 != '\0')) {
      pcStackX_8 = pcStackX_10;
      uVar6 = FUN_1806d80c0(pcStackX_10,&pcStackX_8);
      uVar7 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uStack_80 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uStack_88 = uVar6;
      uStack_84 = uVar7;
      (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],&uStack_88);
    }
  }
  FUN_1806d6f60(param_2);
  uStack_60 = *(undefined4 *)(param_1 + 6);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_58 = *(undefined4 *)(param_1 + 7);
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0x3c);
  FUN_1806d7080(param_2,param_1[4]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_10 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar5 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar5,&pcStackX_10);
    if (((cVar3 != '\0') && (pcStackX_10 != (char *)0x0)) && (*pcStackX_10 != '\0')) {
      pcStackX_8 = pcStackX_10;
      uVar6 = FUN_1806d80c0(pcStackX_10,&pcStackX_8);
      uVar7 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uVar8 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uStack_7c = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uStack_88 = uVar6;
      uStack_84 = uVar7;
      uStack_80 = uVar8;
      (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],&uStack_88);
    }
  }
  FUN_1806d6f60(param_2);
  return param_3 + 2;
}



int FUN_1806c960c(undefined4 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  char *pcVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *in_RCX;
  undefined *puVar7;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  
  uVar2 = *in_RCX;
  *(int *)(unaff_RBP + -1) = (int)param_2;
  *(int *)(unaff_RBP + 3) = (int)((ulonglong)param_2 >> 0x20);
  *(undefined4 *)(unaff_RBP + 7) = in_XMM1_Dc;
  *(undefined4 *)(unaff_RBP + 0xb) = in_XMM1_Dd;
  FUN_1806d7080(param_1,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  lVar5 = unaff_RBX[9];
  puVar8 = &UNK_18094c9c0;
  *(undefined8 *)(unaff_RBP + 0x6f) = 0;
  if ((char)lVar5 != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 == 0) {
      puVar7 = &UNK_18094c9c0;
    }
    else {
      puVar7 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar7,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x6f), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar4;
      uVar9 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x67);
      uVar10 = FUN_1806d80c0(*(undefined8 *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar11 = FUN_1806d80c0(*(undefined8 *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      lVar5 = unaff_RBX[6];
      *(undefined4 *)(unaff_RBP + -0x29) = uVar9;
      *(undefined4 *)(unaff_RBP + -0x25) = uVar10;
      *(undefined4 *)(unaff_RBP + -0x21) = uVar11;
      (**(code **)(unaff_RBP + 7))(lVar5,unaff_RBP + -0x29);
    }
  }
  uVar12 = FUN_1806d6f60();
  uVar9 = *(undefined4 *)((longlong)in_RCX + 0x34);
  uVar10 = *(undefined4 *)(in_RCX + 7);
  uVar11 = *(undefined4 *)((longlong)in_RCX + 0x3c);
  uVar2 = in_RCX[4];
  *(undefined4 *)(unaff_RBP + -1) = *(undefined4 *)(in_RCX + 6);
  *(undefined4 *)(unaff_RBP + 3) = uVar9;
  *(undefined4 *)(unaff_RBP + 7) = uVar10;
  *(undefined4 *)(unaff_RBP + 0xb) = uVar11;
  FUN_1806d7080(uVar12,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  lVar5 = unaff_RBX[9];
  *(undefined8 *)(unaff_RBP + 0x6f) = 0;
  if ((char)lVar5 != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      puVar8 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar8,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x6f), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar4;
      uVar9 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x67);
      uVar10 = FUN_1806d80c0(*(undefined8 *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar11 = FUN_1806d80c0(*(undefined8 *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar12 = FUN_1806d80c0(*(undefined8 *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      lVar5 = unaff_RBX[6];
      *(undefined4 *)(unaff_RBP + -0x29) = uVar9;
      *(undefined4 *)(unaff_RBP + -0x25) = uVar10;
      *(undefined4 *)(unaff_RBP + -0x21) = uVar11;
      *(undefined4 *)(unaff_RBP + -0x1d) = uVar12;
      (**(code **)(unaff_RBP + 7))(lVar5,unaff_RBP + -0x29);
    }
  }
  FUN_1806d6f60();
  return param_3 + 2;
}



int FUN_1806c970c(void)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  char cVar4;
  int *in_RAX;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  int unaff_R14D;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *in_RAX = *in_RAX + 1;
  lVar3 = unaff_RBX[9];
  *(undefined8 *)(unaff_RBP + 0x6f) = 0;
  if ((char)lVar3 != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      unaff_RSI = *(undefined8 *)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],unaff_RSI,unaff_RBP + 0x6f);
    if (((cVar4 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x6f), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar2;
      uVar5 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x67);
      uVar6 = FUN_1806d80c0(*(undefined8 *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar7 = FUN_1806d80c0(*(undefined8 *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar8 = FUN_1806d80c0(*(undefined8 *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      lVar3 = unaff_RBX[6];
      *(undefined4 *)(unaff_RBP + -0x29) = uVar5;
      *(undefined4 *)(unaff_RBP + -0x25) = uVar6;
      *(undefined4 *)(unaff_RBP + -0x21) = uVar7;
      *(undefined4 *)(unaff_RBP + -0x1d) = uVar8;
      (**(code **)(unaff_RBP + 7))(lVar3,unaff_RBP + -0x29);
    }
  }
  FUN_1806d6f60();
  return unaff_R14D + 2;
}



int FUN_1806c9760(undefined8 param_1)

{
  undefined8 uVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int unaff_R14D;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined8 *)(unaff_RBP + 0x67) = param_1;
  uVar2 = FUN_1806d80c0();
  uVar3 = FUN_1806d80c0(*(undefined8 *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
  uVar4 = FUN_1806d80c0(*(undefined8 *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
  uVar5 = FUN_1806d80c0(*(undefined8 *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
  uVar1 = *(undefined8 *)(unaff_RBX + 0x30);
  *(undefined4 *)(unaff_RBP + -0x29) = uVar2;
  *(undefined4 *)(unaff_RBP + -0x25) = uVar3;
  *(undefined4 *)(unaff_RBP + -0x21) = uVar4;
  *(undefined4 *)(unaff_RBP + -0x1d) = uVar5;
  (**(code **)(unaff_RBP + 7))(uVar1,unaff_RBP + -0x29);
  FUN_1806d6f60();
  return unaff_R14D + 2;
}



int FUN_1806c97c6(void)

{
  int unaff_R14D;
  
  FUN_1806d6f60();
  return unaff_R14D + 2;
}








