#include "TaleWorlds.Native.Split.h"

// 99_part_10_part053_sub002_sub002.c - 1 个函数

// 函数: void FUN_1806c9b70(longlong param_1,longlong param_2)
void FUN_1806c9b70(longlong param_1,longlong param_2)

{
  int *piVar1;
  int8_t auStack_108 [224];
  
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x208));
  piVar1 = *(int **)(param_2 + 0x58);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
                    // WARNING: Subroutine does not return
  memset(auStack_108,0,0xe0);
}



int FUN_1806ca0a0(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  char cVar5;
  int8_t uVar6;
  uint64_t uVar7;
  byte *pbVar8;
  void *puVar9;
  void *puVar10;
  char *pcStackX_8;
  char *pcStackX_10;
  int32_t auStackX_18 [4];
  
  iVar2 = *(int *)(param_1 + 0x20);
  pcVar4 = *(code **)(param_1 + 0x30);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x18));
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  puVar10 = &unknown_var_1920_ptr;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar9 = &unknown_var_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar5 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar9,&pcStackX_8)
    ;
    if ((((cVar5 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) &&
       ((longlong *)param_2[4] != (longlong *)0x0)) {
      uVar7 = (**(code **)(*(longlong *)param_2[4] + 8))();
      pbVar8 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                 ((longlong *)param_2[6],auStackX_18);
      if (((*pbVar8 & 1) == 0) || (1 < iVar2 - 0x2cU)) {
        (*pcVar4)(param_2[6],uVar7);
      }
    }
  }
  FUN_1806d6f60(param_2);
  pcVar4 = *(code **)(param_1 + 0x50);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x38));
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar2 = *(int *)(*param_2 + 0x10);
    if (iVar2 == 0) {
      puVar9 = &unknown_var_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar2 - 1) * 0x18);
    }
    cVar5 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar9,&pcStackX_8)
    ;
    if (((cVar5 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      auStackX_18[0] = 0;
      FUN_1806d81c0(pcStackX_8,param_2[7],auStackX_18,0x180be0170);
      (*pcVar4)(param_2[6],auStackX_18);
    }
  }
  FUN_1806d6f60(param_2);
  iVar2 = *(int *)(param_1 + 0x60);
  pcVar4 = *(code **)(param_1 + 0x70);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x58));
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar9 = &unknown_var_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar5 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar9,&pcStackX_8)
    ;
    if (((cVar5 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      pcStackX_10 = pcStackX_8;
      uVar6 = strtoul(pcStackX_8,&pcStackX_10,10);
      pbVar8 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                 ((longlong *)param_2[6],auStackX_18);
      if (((*pbVar8 & 1) == 0) || (1 < iVar2 - 0x2cU)) {
        (*pcVar4)(param_2[6],uVar6);
      }
    }
  }
  FUN_1806d6f60(param_2);
  iVar2 = *(int *)(param_1 + 0x80);
  pcVar4 = *(code **)(param_1 + 0x90);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x78));
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar10 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar5 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar10,&pcStackX_8);
    if (((cVar5 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      pcStackX_10 = pcStackX_8;
      uVar6 = strtoul(pcStackX_8,&pcStackX_10,10);
      pbVar8 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                 ((longlong *)param_2[6],auStackX_18);
      if (((*pbVar8 & 1) == 0) || (1 < iVar2 - 0x2cU)) {
        (*pcVar4)(param_2[6],uVar6);
      }
    }
  }
  FUN_1806d6f60(param_2);
  return param_3 + 7;
}



int FUN_1806ca0c0(uint64_t param_1,uint64_t param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  longlong lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  char cVar13;
  int8_t uVar14;
  uint64_t uVar15;
  byte *pbVar16;
  void *puVar17;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  void *puVar18;
  longlong unaff_RDI;
  int32_t in_XMM0_Dc;
  int32_t in_XMM0_Dd;
  int32_t in_XMM1_Dc;
  int32_t in_XMM1_Dd;
  
  *(int *)(unaff_RBP + -0x38) = (int)param_1;
  *(int *)(unaff_RBP + -0x34) = (int)((ulonglong)param_1 >> 0x20);
  *(int32_t *)(unaff_RBP + -0x30) = in_XMM0_Dc;
  *(int32_t *)(unaff_RBP + -0x2c) = in_XMM0_Dd;
  *(int *)(unaff_RBP + -0x28) = (int)param_2;
  *(int *)(unaff_RBP + -0x24) = (int)((ulonglong)param_2 >> 0x20);
  *(int32_t *)(unaff_RBP + -0x20) = in_XMM1_Dc;
  *(int32_t *)(unaff_RBP + -0x1c) = in_XMM1_Dd;
  FUN_1806d7000();
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar18 = &unknown_var_1920_ptr;
  *(uint64_t *)(unaff_RBP + 0x30) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 == 0) {
      puVar17 = &unknown_var_1920_ptr;
    }
    else {
      puVar17 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar13 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                       ((longlong *)unaff_RBX[5],puVar17,unaff_RBP + 0x30);
    if ((((cVar13 != '\0') && (*(char **)(unaff_RBP + 0x30) != (char *)0x0)) &&
        (**(char **)(unaff_RBP + 0x30) != '\0')) && ((longlong *)unaff_RBX[4] != (longlong *)0x0)) {
      uVar15 = (**(code **)(*(longlong *)unaff_RBX[4] + 8))();
      pbVar16 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                  ((longlong *)unaff_RBX[6],unaff_RBP + 0x40);
      if (((*pbVar16 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x30) - 0x2cU)) {
        (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],uVar15);
      }
    }
  }
  FUN_1806d6f60();
  uVar5 = *(int32_t *)(unaff_RDI + 0x38);
  uVar6 = *(int32_t *)(unaff_RDI + 0x3c);
  uVar7 = *(int32_t *)(unaff_RDI + 0x40);
  uVar8 = *(int32_t *)(unaff_RDI + 0x44);
  uVar15 = *(uint64_t *)(unaff_RDI + 0x38);
  uVar9 = *(int32_t *)(unaff_RDI + 0x48);
  uVar10 = *(int32_t *)(unaff_RDI + 0x4c);
  uVar11 = *(int32_t *)(unaff_RDI + 0x50);
  uVar12 = *(int32_t *)(unaff_RDI + 0x54);
  *(int32_t *)(unaff_RBP + -0x38) = uVar5;
  *(int32_t *)(unaff_RBP + -0x34) = uVar6;
  *(int32_t *)(unaff_RBP + -0x30) = uVar7;
  *(int32_t *)(unaff_RBP + -0x2c) = uVar8;
  *(int32_t *)(unaff_RBP + -0x28) = uVar9;
  *(int32_t *)(unaff_RBP + -0x24) = uVar10;
  *(int32_t *)(unaff_RBP + -0x20) = uVar11;
  *(int32_t *)(unaff_RBP + -0x1c) = uVar12;
  FUN_1806d7000(uVar5,uVar15);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x30) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 == 0) {
      puVar17 = &unknown_var_1920_ptr;
    }
    else {
      puVar17 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar13 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                       ((longlong *)unaff_RBX[5],puVar17,unaff_RBP + 0x30);
    if (((cVar13 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x30), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      lVar4 = unaff_RBX[7];
      *(int32_t *)(unaff_RBP + 0x40) = 0;
      FUN_1806d81c0(pcVar3,lVar4,unaff_RBP + 0x40,0x180be0170);
      lVar4 = unaff_RBX[6];
      *(int8_t *)(unaff_RBP + 0x40) = *(int8_t *)(unaff_RBP + 0x40);
      (**(code **)(unaff_RBP + -0x20))(lVar4,unaff_RBP + 0x40);
    }
  }
  FUN_1806d6f60();
  uVar5 = *(int32_t *)(unaff_RDI + 0x58);
  uVar6 = *(int32_t *)(unaff_RDI + 0x5c);
  uVar7 = *(int32_t *)(unaff_RDI + 0x60);
  uVar8 = *(int32_t *)(unaff_RDI + 100);
  uVar15 = *(uint64_t *)(unaff_RDI + 0x58);
  uVar9 = *(int32_t *)(unaff_RDI + 0x68);
  uVar10 = *(int32_t *)(unaff_RDI + 0x6c);
  uVar11 = *(int32_t *)(unaff_RDI + 0x70);
  uVar12 = *(int32_t *)(unaff_RDI + 0x74);
  *(int32_t *)(unaff_RBP + -0x38) = uVar5;
  *(int32_t *)(unaff_RBP + -0x34) = uVar6;
  *(int32_t *)(unaff_RBP + -0x30) = uVar7;
  *(int32_t *)(unaff_RBP + -0x2c) = uVar8;
  *(int32_t *)(unaff_RBP + -0x28) = uVar9;
  *(int32_t *)(unaff_RBP + -0x24) = uVar10;
  *(int32_t *)(unaff_RBP + -0x20) = uVar11;
  *(int32_t *)(unaff_RBP + -0x1c) = uVar12;
  FUN_1806d7000(uVar5,uVar15);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x30) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 == 0) {
      puVar17 = &unknown_var_1920_ptr;
    }
    else {
      puVar17 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar13 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                       ((longlong *)unaff_RBX[5],puVar17,unaff_RBP + 0x30);
    if (((cVar13 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x30), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      *(char **)(unaff_RBP + 0x38) = pcVar3;
      uVar14 = strtoul(pcVar3,unaff_RBP + 0x38,10);
      pbVar16 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                  ((longlong *)unaff_RBX[6],unaff_RBP + 0x40);
      if (((*pbVar16 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x30) - 0x2cU)) {
        (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],uVar14);
      }
    }
  }
  FUN_1806d6f60();
  uVar5 = *(int32_t *)(unaff_RDI + 0x78);
  uVar6 = *(int32_t *)(unaff_RDI + 0x7c);
  uVar7 = *(int32_t *)(unaff_RDI + 0x80);
  uVar8 = *(int32_t *)(unaff_RDI + 0x84);
  uVar15 = *(uint64_t *)(unaff_RDI + 0x78);
  uVar9 = *(int32_t *)(unaff_RDI + 0x88);
  uVar10 = *(int32_t *)(unaff_RDI + 0x8c);
  uVar11 = *(int32_t *)(unaff_RDI + 0x90);
  uVar12 = *(int32_t *)(unaff_RDI + 0x94);
  *(int32_t *)(unaff_RBP + -0x38) = uVar5;
  *(int32_t *)(unaff_RBP + -0x34) = uVar6;
  *(int32_t *)(unaff_RBP + -0x30) = uVar7;
  *(int32_t *)(unaff_RBP + -0x2c) = uVar8;
  *(int32_t *)(unaff_RBP + -0x28) = uVar9;
  *(int32_t *)(unaff_RBP + -0x24) = uVar10;
  *(int32_t *)(unaff_RBP + -0x20) = uVar11;
  *(int32_t *)(unaff_RBP + -0x1c) = uVar12;
  FUN_1806d7000(uVar5,uVar15);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  lVar4 = unaff_RBX[9];
  *(uint64_t *)(unaff_RBP + 0x30) = 0;
  if ((char)lVar4 != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      puVar18 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar13 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                       ((longlong *)unaff_RBX[5],puVar18,unaff_RBP + 0x30);
    if (((cVar13 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x30), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      *(char **)(unaff_RBP + 0x38) = pcVar3;
      uVar14 = strtoul(pcVar3,unaff_RBP + 0x38,10);
      pbVar16 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                  ((longlong *)unaff_RBX[6],unaff_RBP + 0x40);
      if (((*pbVar16 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x30) - 0x2cU)) {
        (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],uVar14);
      }
    }
  }
  FUN_1806d6f60();
  return param_3 + 7;
}



int FUN_1806ca0e6(void)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  longlong lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  char cVar13;
  int8_t uVar14;
  char cVar15;
  uint64_t uVar16;
  byte *pbVar17;
  void *puVar18;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  void *puVar19;
  longlong unaff_RDI;
  uint64_t unaff_R12;
  int unaff_R15D;
  
  puVar19 = &unknown_var_1920_ptr;
  *(uint64_t *)(unaff_RBP + 0x30) = unaff_R12;
  cVar15 = (char)unaff_R12;
  if ((char)unaff_RBX[9] != cVar15) {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 == 0) {
      puVar18 = &unknown_var_1920_ptr;
    }
    else {
      puVar18 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar13 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                       ((longlong *)unaff_RBX[5],puVar18,unaff_RBP + 0x30);
    if ((((cVar13 != '\0') && (*(char **)(unaff_RBP + 0x30) != (char *)0x0)) &&
        (**(char **)(unaff_RBP + 0x30) != cVar15)) && ((longlong *)unaff_RBX[4] != (longlong *)0x0))
    {
      uVar16 = (**(code **)(*(longlong *)unaff_RBX[4] + 8))();
      pbVar17 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                  ((longlong *)unaff_RBX[6],unaff_RBP + 0x40);
      if (((*pbVar17 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x30) - 0x2cU)) {
        (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],uVar16);
      }
    }
  }
  FUN_1806d6f60();
  uVar5 = *(int32_t *)(unaff_RDI + 0x38);
  uVar6 = *(int32_t *)(unaff_RDI + 0x3c);
  uVar7 = *(int32_t *)(unaff_RDI + 0x40);
  uVar8 = *(int32_t *)(unaff_RDI + 0x44);
  uVar16 = *(uint64_t *)(unaff_RDI + 0x38);
  uVar9 = *(int32_t *)(unaff_RDI + 0x48);
  uVar10 = *(int32_t *)(unaff_RDI + 0x4c);
  uVar11 = *(int32_t *)(unaff_RDI + 0x50);
  uVar12 = *(int32_t *)(unaff_RDI + 0x54);
  *(int32_t *)(unaff_RBP + -0x38) = uVar5;
  *(int32_t *)(unaff_RBP + -0x34) = uVar6;
  *(int32_t *)(unaff_RBP + -0x30) = uVar7;
  *(int32_t *)(unaff_RBP + -0x2c) = uVar8;
  *(int32_t *)(unaff_RBP + -0x28) = uVar9;
  *(int32_t *)(unaff_RBP + -0x24) = uVar10;
  *(int32_t *)(unaff_RBP + -0x20) = uVar11;
  *(int32_t *)(unaff_RBP + -0x1c) = uVar12;
  FUN_1806d7000(uVar5,uVar16);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x30) = unaff_R12;
  if ((char)unaff_RBX[9] != cVar15) {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 == 0) {
      puVar18 = &unknown_var_1920_ptr;
    }
    else {
      puVar18 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar13 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                       ((longlong *)unaff_RBX[5],puVar18,unaff_RBP + 0x30);
    if (((cVar13 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x30), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != cVar15)) {
      lVar4 = unaff_RBX[7];
      *(int *)(unaff_RBP + 0x40) = (int)unaff_R12;
      FUN_1806d81c0(pcVar3,lVar4,unaff_RBP + 0x40,0x180be0170);
      lVar4 = unaff_RBX[6];
      *(int8_t *)(unaff_RBP + 0x40) = *(int8_t *)(unaff_RBP + 0x40);
      (**(code **)(unaff_RBP + -0x20))(lVar4,unaff_RBP + 0x40);
    }
  }
  FUN_1806d6f60();
  uVar5 = *(int32_t *)(unaff_RDI + 0x58);
  uVar6 = *(int32_t *)(unaff_RDI + 0x5c);
  uVar7 = *(int32_t *)(unaff_RDI + 0x60);
  uVar8 = *(int32_t *)(unaff_RDI + 100);
  uVar16 = *(uint64_t *)(unaff_RDI + 0x58);
  uVar9 = *(int32_t *)(unaff_RDI + 0x68);
  uVar10 = *(int32_t *)(unaff_RDI + 0x6c);
  uVar11 = *(int32_t *)(unaff_RDI + 0x70);
  uVar12 = *(int32_t *)(unaff_RDI + 0x74);
  *(int32_t *)(unaff_RBP + -0x38) = uVar5;
  *(int32_t *)(unaff_RBP + -0x34) = uVar6;
  *(int32_t *)(unaff_RBP + -0x30) = uVar7;
  *(int32_t *)(unaff_RBP + -0x2c) = uVar8;
  *(int32_t *)(unaff_RBP + -0x28) = uVar9;
  *(int32_t *)(unaff_RBP + -0x24) = uVar10;
  *(int32_t *)(unaff_RBP + -0x20) = uVar11;
  *(int32_t *)(unaff_RBP + -0x1c) = uVar12;
  FUN_1806d7000(uVar5,uVar16);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x30) = unaff_R12;
  if ((char)unaff_RBX[9] != cVar15) {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 == 0) {
      puVar18 = &unknown_var_1920_ptr;
    }
    else {
      puVar18 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar13 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                       ((longlong *)unaff_RBX[5],puVar18,unaff_RBP + 0x30);
    if (((cVar13 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x30), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != cVar15)) {
      *(char **)(unaff_RBP + 0x38) = pcVar3;
      uVar14 = strtoul(pcVar3,unaff_RBP + 0x38,10);
      pbVar17 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                  ((longlong *)unaff_RBX[6],unaff_RBP + 0x40);
      if (((*pbVar17 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x30) - 0x2cU)) {
        (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],uVar14);
      }
    }
  }
  FUN_1806d6f60();
  uVar5 = *(int32_t *)(unaff_RDI + 0x78);
  uVar6 = *(int32_t *)(unaff_RDI + 0x7c);
  uVar7 = *(int32_t *)(unaff_RDI + 0x80);
  uVar8 = *(int32_t *)(unaff_RDI + 0x84);
  uVar16 = *(uint64_t *)(unaff_RDI + 0x78);
  uVar9 = *(int32_t *)(unaff_RDI + 0x88);
  uVar10 = *(int32_t *)(unaff_RDI + 0x8c);
  uVar11 = *(int32_t *)(unaff_RDI + 0x90);
  uVar12 = *(int32_t *)(unaff_RDI + 0x94);
  *(int32_t *)(unaff_RBP + -0x38) = uVar5;
  *(int32_t *)(unaff_RBP + -0x34) = uVar6;
  *(int32_t *)(unaff_RBP + -0x30) = uVar7;
  *(int32_t *)(unaff_RBP + -0x2c) = uVar8;
  *(int32_t *)(unaff_RBP + -0x28) = uVar9;
  *(int32_t *)(unaff_RBP + -0x24) = uVar10;
  *(int32_t *)(unaff_RBP + -0x20) = uVar11;
  *(int32_t *)(unaff_RBP + -0x1c) = uVar12;
  FUN_1806d7000(uVar5,uVar16);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  lVar4 = unaff_RBX[9];
  *(uint64_t *)(unaff_RBP + 0x30) = unaff_R12;
  if ((char)lVar4 != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      puVar19 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar15 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                       ((longlong *)unaff_RBX[5],puVar19,unaff_RBP + 0x30);
    if (((cVar15 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x30), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      *(char **)(unaff_RBP + 0x38) = pcVar3;
      uVar14 = strtoul(pcVar3,unaff_RBP + 0x38,10);
      pbVar17 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                  ((longlong *)unaff_RBX[6],unaff_RBP + 0x40);
      if (((*pbVar17 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x30) - 0x2cU)) {
        (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],uVar14);
      }
    }
  }
  FUN_1806d6f60();
  return unaff_R15D + 7;
}



int FUN_1806ca30d(void)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  char cVar4;
  int8_t uVar5;
  int *in_RAX;
  byte *pbVar6;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_R12;
  int unaff_R15D;
  
  *in_RAX = *in_RAX + 1;
  lVar3 = unaff_RBX[9];
  *(uint64_t *)(unaff_RBP + 0x30) = unaff_R12;
  if ((char)lVar3 != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      unaff_RSI = *(uint64_t *)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],unaff_RSI,unaff_RBP + 0x30);
    if (((cVar4 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x30), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != '\0')) {
      *(char **)(unaff_RBP + 0x38) = pcVar2;
      uVar5 = strtoul(pcVar2,unaff_RBP + 0x38,10);
      pbVar6 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                 ((longlong *)unaff_RBX[6],unaff_RBP + 0x40);
      if (((*pbVar6 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x30) - 0x2cU)) {
        (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],uVar5);
      }
    }
  }
  FUN_1806d6f60();
  return unaff_R15D + 7;
}



int FUN_1806ca31e(void)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  int8_t uVar4;
  byte *pbVar5;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  int unaff_R15D;
  
  iVar1 = *(int *)(*unaff_RBX + 0x10);
  if (iVar1 != 0) {
    unaff_RSI = *(uint64_t *)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
  }
  cVar3 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                    ((longlong *)unaff_RBX[5],unaff_RSI,unaff_RBP + 0x30);
  if (((cVar3 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x30), pcVar2 != (char *)0x0)) &&
     (*pcVar2 != '\0')) {
    *(char **)(unaff_RBP + 0x38) = pcVar2;
    uVar4 = strtoul(pcVar2,unaff_RBP + 0x38,10);
    pbVar5 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                               ((longlong *)unaff_RBX[6],unaff_RBP + 0x40);
    if (((*pbVar5 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x30) - 0x2cU)) {
      (**(code **)(unaff_RBP + -0x20))(unaff_RBX[6],uVar4);
    }
  }
  FUN_1806d6f60();
  return unaff_R15D + 7;
}



int FUN_1806ca3c0(longlong param_1,longlong *param_2,int param_3)

{
  int32_t *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  void *puVar8;
  char *pcStackX_8;
  void *puStack_88;
  uint uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  void *apuStack_68 [2];
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0xd0));
  plVar7 = (longlong *)0x0;
  if ((short)((longlong *)param_2[6])[1] == 0xd) {
    plVar7 = (longlong *)param_2[6];
  }
  if (plVar7 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar7 + 0x1e8))();
    if (*(short *)(lVar6 + 8) == 0xc) goto LAB_1806ca4af;
  }
  uStack_30 = *(int32_t *)(param_1 + 0xe0);
  uStack_2c = *(int32_t *)(param_1 + 0xe4);
  uStack_28 = *(int32_t *)(param_1 + 0xe8);
  uStack_24 = *(int32_t *)(param_1 + 0xec);
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar2 = *(int *)(*param_2 + 0x10);
    if (iVar2 == 0) {
      puVar8 = &unknown_var_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar2 - 1) * 0x18);
    }
    cVar5 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar8,&pcStackX_8)
    ;
    if (((cVar5 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      FUN_1806c4d50(pcStackX_8,&puStack_88);
      apuStack_68[0] = puStack_88;
      uStack_58 = uStack_78;
      uStack_50 = uStack_70;
      uStack_54 = uStack_74;
      (*(code *)CONCAT44(uStack_24,uStack_28))(param_2[6],apuStack_68);
    }
  }
LAB_1806ca4af:
  FUN_1806d6f60(param_2);
  FUN_1806d56e0(param_2);
  lVar6 = *param_2;
  puStack_88 = &unknown_var_1904_ptr;
  uStack_78 = CONCAT31(uStack_78._1_3_,(char)param_2[9]);
  uVar3 = *(uint *)(lVar6 + 0x10);
  uStack_80 = uStack_80 & 0xffffff00;
  if (uVar3 < (*(uint *)(lVar6 + 0x14) & 0x7fffffff)) {
    lVar4 = *(longlong *)(lVar6 + 8);
    puVar1 = (int32_t *)(lVar4 + (ulonglong)uVar3 * 0x18);
    *puVar1 = 0x8094c9b0;
    puVar1[1] = 1;
    puVar1[2] = uStack_80;
    puVar1[3] = uStack_7c;
    *(ulonglong *)(lVar4 + 0x10 + (ulonglong)uVar3 * 0x18) = CONCAT44(uStack_74,uStack_78);
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
  }
  else {
    FUN_1806d5b60(lVar6,&puStack_88);
  }
  plVar7 = (longlong *)(**(code **)(*(longlong *)param_2[5] + 0x50))();
  if (param_2[6] != 0) {
    cVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,&unknown_var_9608_ptr,&pcStackX_8);
    if (cVar5 != '\0') {
      lVar6 = strstr(pcStackX_8,&unknown_var_8392_ptr);
      if (lVar6 != 0) {
        (**(code **)(*(longlong *)param_2[6] + 0x198))((longlong *)param_2[6],1,1);
      }
    }
  }
  FUN_1806c4a10(param_2,param_2[6],param_1 + 0xf0,0);
  (**(code **)(*plVar7 + 0x88))(plVar7);
  FUN_1806d6f60(param_2);
  return param_3 + 3;
}



int FUN_1806ca5c0(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  byte *pbVar4;
  char *pcVar5;
  void *puVar6;
  void *puVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  char *pcStackX_8;
  char *pcStackX_10;
  int32_t auStackX_18 [2];
  int32_t uStack_d8;
  int32_t uStack_d4;
  int32_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_80;
  int32_t uStack_7c;
  int iStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  
  uStack_80 = *(int32_t *)(param_1 + 0x130);
  uStack_7c = *(int32_t *)(param_1 + 0x134);
  iStack_78 = *(int *)(param_1 + 0x138);
  uStack_74 = *(int32_t *)(param_1 + 0x13c);
  uStack_70 = *(int32_t *)(param_1 + 0x140);
  uStack_6c = *(int32_t *)(param_1 + 0x144);
  uStack_68 = *(int32_t *)(param_1 + 0x148);
  uStack_64 = *(int32_t *)(param_1 + 0x14c);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x130));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar7 = &unknown_var_1920_ptr;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &unknown_var_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      FUN_1806c4d50(pcStackX_8,&uStack_c8);
      pbVar4 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                 ((longlong *)param_2[6],auStackX_18);
      if (((*pbVar4 & 1) == 0) || (1 < iStack_78 - 0x2cU)) {
        uStack_a8 = uStack_c8;
        uStack_a0 = uStack_c0;
        uStack_98 = uStack_b8;
        uStack_90 = uStack_b0;
        uStack_94 = uStack_b4;
        (*(code *)CONCAT44(uStack_64,uStack_68))(param_2[6],&uStack_a8);
      }
    }
  }
  FUN_1806d6f60(param_2);
  uStack_80 = *(int32_t *)(param_1 + 0x150);
  uStack_7c = *(int32_t *)(param_1 + 0x154);
  iStack_78 = *(int *)(param_1 + 0x158);
  uStack_74 = *(int32_t *)(param_1 + 0x15c);
  uStack_70 = *(int32_t *)(param_1 + 0x160);
  uStack_6c = *(int32_t *)(param_1 + 0x164);
  uStack_68 = *(int32_t *)(param_1 + 0x168);
  uStack_64 = *(int32_t *)(param_1 + 0x16c);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x150));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &unknown_var_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      pbVar4 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                 ((longlong *)param_2[6],auStackX_18);
      if (((*pbVar4 & 1) == 0) || (1 < iStack_78 - 0x2cU)) {
        (*(code *)CONCAT44(uStack_64,uStack_68))(param_2[6],uVar8);
      }
    }
  }
  FUN_1806d6f60(param_2);
  uStack_80 = *(int32_t *)(param_1 + 0x188);
  uStack_7c = *(int32_t *)(param_1 + 0x18c);
  iStack_78 = *(int *)(param_1 + 400);
  uStack_74 = *(int32_t *)(param_1 + 0x194);
  uStack_70 = *(int32_t *)(param_1 + 0x198);
  uStack_6c = *(int32_t *)(param_1 + 0x19c);
  uStack_68 = *(int32_t *)(param_1 + 0x1a0);
  uStack_64 = *(int32_t *)(param_1 + 0x1a4);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x188));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_10 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &unknown_var_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar6,&pcStackX_10);
    if (((cVar3 != '\0') && (pcStackX_10 != (char *)0x0)) && (*pcStackX_10 != '\0')) {
      pcStackX_8 = pcStackX_10;
      uVar8 = FUN_1806d80c0(pcStackX_10,&pcStackX_8);
      uVar9 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uVar10 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      pbVar4 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                 ((longlong *)param_2[6],auStackX_18);
      if (((*pbVar4 & 1) == 0) || (1 < iStack_78 - 0x2cU)) {
        uStack_d8 = uVar8;
        uStack_d4 = uVar9;
        uStack_d0 = uVar10;
        (*(code *)CONCAT44(uStack_64,uStack_68))(param_2[6],&uStack_d8);
      }
    }
  }
  FUN_1806d6f60(param_2);
  uStack_80 = *(int32_t *)(param_1 + 0x1c0);
  uStack_7c = *(int32_t *)(param_1 + 0x1c4);
  iStack_78 = *(int *)(param_1 + 0x1c8);
  uStack_74 = *(int32_t *)(param_1 + 0x1cc);
  uStack_70 = *(int32_t *)(param_1 + 0x1d0);
  uStack_6c = *(int32_t *)(param_1 + 0x1d4);
  uStack_68 = *(int32_t *)(param_1 + 0x1d8);
  uStack_64 = *(int32_t *)(param_1 + 0x1dc);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x1c0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &unknown_var_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      pbVar4 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                 ((longlong *)param_2[6],auStackX_18);
      if (((*pbVar4 & 1) == 0) || (1 < iStack_78 - 0x2cU)) {
        (*(code *)CONCAT44(uStack_64,uStack_68))(param_2[6],uVar8);
      }
    }
  }
  FUN_1806d6f60(param_2);
  uStack_80 = *(int32_t *)(param_1 + 0x1e0);
  uStack_7c = *(int32_t *)(param_1 + 0x1e4);
  iStack_78 = *(int *)(param_1 + 0x1e8);
  uStack_74 = *(int32_t *)(param_1 + 0x1ec);
  uStack_70 = *(int32_t *)(param_1 + 0x1f0);
  uStack_6c = *(int32_t *)(param_1 + 500);
  uStack_68 = *(int32_t *)(param_1 + 0x1f8);
  uStack_64 = *(int32_t *)(param_1 + 0x1fc);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x1e0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &unknown_var_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      pbVar4 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                 ((longlong *)param_2[6],auStackX_18);
      if (((*pbVar4 & 1) == 0) || (1 < iStack_78 - 0x2cU)) {
        (*(code *)CONCAT44(uStack_64,uStack_68))(param_2[6],uVar8);
      }
    }
  }
  FUN_1806d6f60(param_2);
  uStack_80 = *(int32_t *)(param_1 + 0x200);
  uStack_7c = *(int32_t *)(param_1 + 0x204);
  iStack_78 = *(int *)(param_1 + 0x208);
  uStack_74 = *(int32_t *)(param_1 + 0x20c);
  uStack_70 = *(int32_t *)(param_1 + 0x210);
  uStack_6c = *(int32_t *)(param_1 + 0x214);
  uStack_68 = *(int32_t *)(param_1 + 0x218);
  uStack_64 = *(int32_t *)(param_1 + 0x21c);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x200));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_10 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &unknown_var_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar6,&pcStackX_10);
    if (((cVar3 != '\0') && (pcStackX_10 != (char *)0x0)) && (*pcStackX_10 != '\0')) {
      pcStackX_8 = pcStackX_10;
      uVar8 = FUN_1806d80c0(pcStackX_10,&pcStackX_8);
      uVar9 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uVar10 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      pbVar4 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                 ((longlong *)param_2[6],auStackX_18);
      if (((*pbVar4 & 1) == 0) || (1 < iStack_78 - 0x2cU)) {
        uStack_d8 = uVar8;
        uStack_d4 = uVar9;
        uStack_d0 = uVar10;
        (*(code *)CONCAT44(uStack_64,uStack_68))(param_2[6],&uStack_d8);
      }
    }
  }
  FUN_1806d6f60(param_2);
  uStack_80 = *(int32_t *)(param_1 + 0x220);
  uStack_7c = *(int32_t *)(param_1 + 0x224);
  iStack_78 = *(int *)(param_1 + 0x228);
  uStack_74 = *(int32_t *)(param_1 + 0x22c);
  uStack_70 = *(int32_t *)(param_1 + 0x230);
  uStack_6c = *(int32_t *)(param_1 + 0x234);
  uStack_68 = *(int32_t *)(param_1 + 0x238);
  uStack_64 = *(int32_t *)(param_1 + 0x23c);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x220));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_10 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &unknown_var_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar6,&pcStackX_10);
    if (((cVar3 != '\0') && (pcStackX_10 != (char *)0x0)) && (*pcStackX_10 != '\0')) {
      pcStackX_8 = pcStackX_10;
      uVar8 = FUN_1806d80c0(pcStackX_10,&pcStackX_8);
      uVar9 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uVar10 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      pbVar4 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                 ((longlong *)param_2[6],auStackX_18);
      if (((*pbVar4 & 1) == 0) || (1 < iStack_78 - 0x2cU)) {
        uStack_d8 = uVar8;
        uStack_d4 = uVar9;
        uStack_d0 = uVar10;
        (*(code *)CONCAT44(uStack_64,uStack_68))(param_2[6],&uStack_d8);
      }
    }
  }
  FUN_1806d6f60(param_2);
  uStack_80 = *(int32_t *)(param_1 + 0x240);
  uStack_7c = *(int32_t *)(param_1 + 0x244);
  iStack_78 = *(int *)(param_1 + 0x248);
  uStack_74 = *(int32_t *)(param_1 + 0x24c);
  uStack_70 = *(int32_t *)(param_1 + 0x250);
  uStack_6c = *(int32_t *)(param_1 + 0x254);
  uStack_68 = *(int32_t *)(param_1 + 600);
  uStack_64 = *(int32_t *)(param_1 + 0x25c);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x240));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar7 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar7,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      pbVar4 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                 ((longlong *)param_2[6],auStackX_18);
      if (((*pbVar4 & 1) == 0) || (1 < iStack_78 - 0x2cU)) {
        (*(code *)CONCAT44(uStack_64,uStack_68))(param_2[6],uVar8);
      }
    }
  }
  FUN_1806d6f60(param_2);
  uStack_80 = *(int32_t *)(param_1 + 0x260);
  uStack_7c = *(int32_t *)(param_1 + 0x264);
  iStack_78 = *(int *)(param_1 + 0x268);
  uStack_74 = *(int32_t *)(param_1 + 0x26c);
  uStack_70 = *(int32_t *)(param_1 + 0x270);
  uStack_6c = *(int32_t *)(param_1 + 0x274);
  uStack_68 = *(int32_t *)(param_1 + 0x278);
  uStack_64 = *(int32_t *)(param_1 + 0x27c);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x260));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar3 = FUN_1806c4320(param_2,&pcStackX_8);
  if (cVar3 != '\0') {
    pbVar4 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                               ((longlong *)param_2[6],auStackX_18);
    if (((*pbVar4 & 1) == 0) || (1 < iStack_78 - 0x2cU)) {
      (*(code *)CONCAT44(uStack_64,uStack_68))(param_2[6],pcStackX_8._0_4_);
    }
  }
  FUN_1806d6f60(param_2);
  uStack_80 = *(int32_t *)(param_1 + 0x280);
  uStack_7c = *(int32_t *)(param_1 + 0x284);
  iStack_78 = *(int32_t *)(param_1 + 0x288);
  uStack_74 = *(int32_t *)(param_1 + 0x28c);
  uStack_70 = *(int32_t *)(param_1 + 0x290);
  uStack_6c = *(int32_t *)(param_1 + 0x294);
  uStack_68 = *(int32_t *)(param_1 + 0x298);
  uStack_64 = *(int32_t *)(param_1 + 0x29c);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x280));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcVar5 = (char *)FUN_1806d54b0(param_2);
  if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
    auStackX_18[0] = 0;
    FUN_1806d81c0(pcVar5,param_2[7],auStackX_18,0x180be01c0);
    (*(code *)CONCAT44(uStack_64,uStack_68))(param_2[6],auStackX_18);
  }
  FUN_1806d6f60(param_2);
  uStack_80 = *(int32_t *)(param_1 + 0x2a0);
  uStack_7c = *(int32_t *)(param_1 + 0x2a4);
  iStack_78 = *(int *)(param_1 + 0x2a8);
  uStack_74 = *(int32_t *)(param_1 + 0x2ac);
  uStack_70 = *(int32_t *)(param_1 + 0x2b0);
  uStack_6c = *(int32_t *)(param_1 + 0x2b4);
  uStack_68 = *(int32_t *)(param_1 + 0x2b8);
  uStack_64 = *(int32_t *)(param_1 + 700);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x2a0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar3 = FUN_1806c4320(param_2,&pcStackX_8);
  if (cVar3 != '\0') {
    pbVar4 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                               ((longlong *)param_2[6],auStackX_18);
    if (((*pbVar4 & 1) == 0) || (1 < iStack_78 - 0x2cU)) {
      (*(code *)CONCAT44(uStack_64,uStack_68))(param_2[6],pcStackX_8._0_4_);
    }
  }
  FUN_1806d6f60(param_2);
  uStack_80 = *(int32_t *)(param_1 + 0x2c0);
  uStack_7c = *(int32_t *)(param_1 + 0x2c4);
  iStack_78 = *(int *)(param_1 + 0x2c8);
  uStack_74 = *(int32_t *)(param_1 + 0x2cc);
  uStack_70 = *(int32_t *)(param_1 + 0x2d0);
  uStack_6c = *(int32_t *)(param_1 + 0x2d4);
  uStack_68 = *(int32_t *)(param_1 + 0x2d8);
  uStack_64 = *(int32_t *)(param_1 + 0x2dc);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x2c0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar3 = FUN_1806c4320(param_2,&pcStackX_8);
  if (cVar3 != '\0') {
    pbVar4 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                               ((longlong *)param_2[6],auStackX_18);
    if (((*pbVar4 & 1) == 0) || (1 < iStack_78 - 0x2cU)) {
      (*(code *)CONCAT44(uStack_64,uStack_68))(param_2[6],pcStackX_8._0_4_);
    }
  }
  FUN_1806d6f60(param_2);
  uStack_80 = *(int32_t *)(param_1 + 0x2e0);
  uStack_7c = *(int32_t *)(param_1 + 0x2e4);
  iStack_78 = *(int *)(param_1 + 0x2e8);
  uStack_74 = *(int32_t *)(param_1 + 0x2ec);
  uStack_70 = *(int32_t *)(param_1 + 0x2f0);
  uStack_6c = *(int32_t *)(param_1 + 0x2f4);
  uStack_68 = *(int32_t *)(param_1 + 0x2f8);
  uStack_64 = *(int32_t *)(param_1 + 0x2fc);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x2e0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar3 = FUN_1806c4320(param_2,&pcStackX_8);
  if (cVar3 != '\0') {
    pbVar4 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                               ((longlong *)param_2[6],auStackX_18);
    if (((*pbVar4 & 1) == 0) || (1 < iStack_78 - 0x2cU)) {
      (*(code *)CONCAT44(uStack_64,uStack_68))(param_2[6],pcStackX_8._0_4_);
    }
  }
  FUN_1806d6f60(param_2);
  return param_3 + 0xf;
}



int FUN_1806ca5d9(uint64_t param_1,longlong *param_2,int param_3)

{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  longlong lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  char cVar9;
  longlong in_RAX;
  byte *pbVar10;
  char *pcVar11;
  longlong in_RCX;
  void *puVar12;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  void *puVar13;
  uint64_t unaff_RDI;
  uint64_t unaff_R15;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t in_XMM0_Dc;
  int32_t in_XMM0_Dd;
  
  *(uint64_t *)(in_RAX + 0x20) = unaff_RSI;
  uVar14 = *(int32_t *)(in_RCX + 0x140);
  uVar15 = *(int32_t *)(in_RCX + 0x144);
  uVar16 = *(int32_t *)(in_RCX + 0x148);
  uVar5 = *(int32_t *)(in_RCX + 0x14c);
  uVar2 = *(uint64_t *)(in_RCX + 0x130);
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  *(int *)(unaff_RBP + -0x21) = (int)param_1;
  *(int *)(unaff_RBP + -0x1d) = (int)((ulonglong)param_1 >> 0x20);
  *(int32_t *)(unaff_RBP + -0x19) = in_XMM0_Dc;
  *(int32_t *)(unaff_RBP + -0x15) = in_XMM0_Dd;
  *(int32_t *)(unaff_RBP + -0x11) = uVar14;
  *(int32_t *)(unaff_RBP + -0xd) = uVar15;
  *(int32_t *)(unaff_RBP + -9) = uVar16;
  *(int32_t *)(unaff_RBP + -5) = uVar5;
  FUN_1806d7000(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  puVar13 = &unknown_var_1920_ptr;
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar12 = &unknown_var_1920_ptr;
    }
    else {
      puVar12 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar9 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar12,unaff_RBP + 0x67);
    if (((cVar9 != '\0') && (pcVar11 = *(char **)(unaff_RBP + 0x67), pcVar11 != (char *)0x0)) &&
       (*pcVar11 != '\0')) {
      FUN_1806c4d50(pcVar11,unaff_RBP + -0x69);
      pbVar10 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                  ((longlong *)param_2[6],unaff_RBP + 0x77);
      if (((*pbVar10 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
        lVar4 = param_2[6];
        *(uint64_t *)(unaff_RBP + -0x49) = *(uint64_t *)(unaff_RBP + -0x69);
        *(uint64_t *)(unaff_RBP + -0x41) = *(uint64_t *)(unaff_RBP + -0x61);
        *(int32_t *)(unaff_RBP + -0x39) = *(int32_t *)(unaff_RBP + -0x59);
        *(int32_t *)(unaff_RBP + -0x31) = *(int32_t *)(unaff_RBP + -0x51);
        *(int32_t *)(unaff_RBP + -0x35) = *(int32_t *)(unaff_RBP + -0x55);
        (**(code **)(unaff_RBP + -9))(lVar4,unaff_RBP + -0x49);
      }
    }
  }
  FUN_1806d6f60(param_2);
  uVar14 = *(int32_t *)(in_RCX + 0x154);
  uVar15 = *(int32_t *)(in_RCX + 0x158);
  uVar16 = *(int32_t *)(in_RCX + 0x15c);
  uVar2 = *(uint64_t *)(in_RCX + 0x150);
  uVar5 = *(int32_t *)(in_RCX + 0x160);
  uVar6 = *(int32_t *)(in_RCX + 0x164);
  uVar7 = *(int32_t *)(in_RCX + 0x168);
  uVar8 = *(int32_t *)(in_RCX + 0x16c);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(in_RCX + 0x150);
  *(int32_t *)(unaff_RBP + -0x1d) = uVar14;
  *(int32_t *)(unaff_RBP + -0x19) = uVar15;
  *(int32_t *)(unaff_RBP + -0x15) = uVar16;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  *(int32_t *)(unaff_RBP + -9) = uVar7;
  *(int32_t *)(unaff_RBP + -5) = uVar8;
  FUN_1806d7000(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar12 = &unknown_var_1920_ptr;
    }
    else {
      puVar12 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar9 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar12,unaff_RBP + 0x67);
    if (((cVar9 != '\0') && (pcVar11 = *(char **)(unaff_RBP + 0x67), pcVar11 != (char *)0x0)) &&
       (*pcVar11 != '\0')) {
      uVar14 = FUN_1806d80c0(pcVar11,unaff_RBP + 0x6f);
      pbVar10 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                  ((longlong *)param_2[6],unaff_RBP + 0x77);
      if (((*pbVar10 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
        (**(code **)(unaff_RBP + -9))(param_2[6],uVar14);
      }
    }
  }
  FUN_1806d6f60(param_2);
  uVar14 = *(int32_t *)(in_RCX + 0x18c);
  uVar15 = *(int32_t *)(in_RCX + 400);
  uVar16 = *(int32_t *)(in_RCX + 0x194);
  uVar2 = *(uint64_t *)(in_RCX + 0x188);
  uVar5 = *(int32_t *)(in_RCX + 0x198);
  uVar6 = *(int32_t *)(in_RCX + 0x19c);
  uVar7 = *(int32_t *)(in_RCX + 0x1a0);
  uVar8 = *(int32_t *)(in_RCX + 0x1a4);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(in_RCX + 0x188);
  *(int32_t *)(unaff_RBP + -0x1d) = uVar14;
  *(int32_t *)(unaff_RBP + -0x19) = uVar15;
  *(int32_t *)(unaff_RBP + -0x15) = uVar16;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  *(int32_t *)(unaff_RBP + -9) = uVar7;
  *(int32_t *)(unaff_RBP + -5) = uVar8;
  FUN_1806d7000(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = 0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar12 = &unknown_var_1920_ptr;
    }
    else {
      puVar12 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar9 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar12,unaff_RBP + 0x6f);
    if (((cVar9 != '\0') && (pcVar11 = *(char **)(unaff_RBP + 0x6f), pcVar11 != (char *)0x0)) &&
       (*pcVar11 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar11;
      uVar14 = FUN_1806d80c0(pcVar11,unaff_RBP + 0x67);
      uVar15 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar16 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      pbVar10 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                  ((longlong *)param_2[6],unaff_RBP + 0x77);
      if (((*pbVar10 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
        lVar4 = param_2[6];
        *(int32_t *)(unaff_RBP + -0x79) = uVar14;
        *(int32_t *)(unaff_RBP + -0x75) = uVar15;
        *(int32_t *)(unaff_RBP + -0x71) = uVar16;
        (**(code **)(unaff_RBP + -9))(lVar4,unaff_RBP + -0x79);
      }
    }
  }
  FUN_1806d6f60(param_2);
  uVar14 = *(int32_t *)(in_RCX + 0x1c4);
  uVar15 = *(int32_t *)(in_RCX + 0x1c8);
  uVar16 = *(int32_t *)(in_RCX + 0x1cc);
  uVar2 = *(uint64_t *)(in_RCX + 0x1c0);
  uVar5 = *(int32_t *)(in_RCX + 0x1d0);
  uVar6 = *(int32_t *)(in_RCX + 0x1d4);
  uVar7 = *(int32_t *)(in_RCX + 0x1d8);
  uVar8 = *(int32_t *)(in_RCX + 0x1dc);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(in_RCX + 0x1c0);
  *(int32_t *)(unaff_RBP + -0x1d) = uVar14;
  *(int32_t *)(unaff_RBP + -0x19) = uVar15;
  *(int32_t *)(unaff_RBP + -0x15) = uVar16;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  *(int32_t *)(unaff_RBP + -9) = uVar7;
  *(int32_t *)(unaff_RBP + -5) = uVar8;
  FUN_1806d7000(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar12 = &unknown_var_1920_ptr;
    }
    else {
      puVar12 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar9 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar12,unaff_RBP + 0x67);
    if (((cVar9 != '\0') && (pcVar11 = *(char **)(unaff_RBP + 0x67), pcVar11 != (char *)0x0)) &&
       (*pcVar11 != '\0')) {
      uVar14 = FUN_1806d80c0(pcVar11,unaff_RBP + 0x6f);
      pbVar10 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                  ((longlong *)param_2[6],unaff_RBP + 0x77);
      if (((*pbVar10 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
        (**(code **)(unaff_RBP + -9))(param_2[6],uVar14);
      }
    }
  }
  FUN_1806d6f60(param_2);
  uVar14 = *(int32_t *)(in_RCX + 0x1e4);
  uVar15 = *(int32_t *)(in_RCX + 0x1e8);
  uVar16 = *(int32_t *)(in_RCX + 0x1ec);
  uVar2 = *(uint64_t *)(in_RCX + 0x1e0);
  uVar5 = *(int32_t *)(in_RCX + 0x1f0);
  uVar6 = *(int32_t *)(in_RCX + 500);
  uVar7 = *(int32_t *)(in_RCX + 0x1f8);
  uVar8 = *(int32_t *)(in_RCX + 0x1fc);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(in_RCX + 0x1e0);
  *(int32_t *)(unaff_RBP + -0x1d) = uVar14;
  *(int32_t *)(unaff_RBP + -0x19) = uVar15;
  *(int32_t *)(unaff_RBP + -0x15) = uVar16;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  *(int32_t *)(unaff_RBP + -9) = uVar7;
  *(int32_t *)(unaff_RBP + -5) = uVar8;
  FUN_1806d7000(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar12 = &unknown_var_1920_ptr;
    }
    else {
      puVar12 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar9 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar12,unaff_RBP + 0x67);
    if (((cVar9 != '\0') && (pcVar11 = *(char **)(unaff_RBP + 0x67), pcVar11 != (char *)0x0)) &&
       (*pcVar11 != '\0')) {
      uVar14 = FUN_1806d80c0(pcVar11,unaff_RBP + 0x6f);
      pbVar10 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                  ((longlong *)param_2[6],unaff_RBP + 0x77);
      if (((*pbVar10 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
        (**(code **)(unaff_RBP + -9))(param_2[6],uVar14);
      }
    }
  }
  FUN_1806d6f60(param_2);
  uVar14 = *(int32_t *)(in_RCX + 0x204);
  uVar15 = *(int32_t *)(in_RCX + 0x208);
  uVar16 = *(int32_t *)(in_RCX + 0x20c);
  uVar2 = *(uint64_t *)(in_RCX + 0x200);
  uVar5 = *(int32_t *)(in_RCX + 0x210);
  uVar6 = *(int32_t *)(in_RCX + 0x214);
  uVar7 = *(int32_t *)(in_RCX + 0x218);
  uVar8 = *(int32_t *)(in_RCX + 0x21c);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(in_RCX + 0x200);
  *(int32_t *)(unaff_RBP + -0x1d) = uVar14;
  *(int32_t *)(unaff_RBP + -0x19) = uVar15;
  *(int32_t *)(unaff_RBP + -0x15) = uVar16;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  *(int32_t *)(unaff_RBP + -9) = uVar7;
  *(int32_t *)(unaff_RBP + -5) = uVar8;
  FUN_1806d7000(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = 0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar12 = &unknown_var_1920_ptr;
    }
    else {
      puVar12 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar9 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar12,unaff_RBP + 0x6f);
    if (((cVar9 != '\0') && (pcVar11 = *(char **)(unaff_RBP + 0x6f), pcVar11 != (char *)0x0)) &&
       (*pcVar11 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar11;
      uVar14 = FUN_1806d80c0(pcVar11,unaff_RBP + 0x67);
      uVar15 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar16 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      pbVar10 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                  ((longlong *)param_2[6],unaff_RBP + 0x77);
      if (((*pbVar10 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
        lVar4 = param_2[6];
        *(int32_t *)(unaff_RBP + -0x79) = uVar14;
        *(int32_t *)(unaff_RBP + -0x75) = uVar15;
        *(int32_t *)(unaff_RBP + -0x71) = uVar16;
        (**(code **)(unaff_RBP + -9))(lVar4,unaff_RBP + -0x79);
      }
    }
  }
  FUN_1806d6f60(param_2);
  uVar14 = *(int32_t *)(in_RCX + 0x224);
  uVar15 = *(int32_t *)(in_RCX + 0x228);
  uVar16 = *(int32_t *)(in_RCX + 0x22c);
  uVar2 = *(uint64_t *)(in_RCX + 0x220);
  uVar5 = *(int32_t *)(in_RCX + 0x230);
  uVar6 = *(int32_t *)(in_RCX + 0x234);
  uVar7 = *(int32_t *)(in_RCX + 0x238);
  uVar8 = *(int32_t *)(in_RCX + 0x23c);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(in_RCX + 0x220);
  *(int32_t *)(unaff_RBP + -0x1d) = uVar14;
  *(int32_t *)(unaff_RBP + -0x19) = uVar15;
  *(int32_t *)(unaff_RBP + -0x15) = uVar16;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  *(int32_t *)(unaff_RBP + -9) = uVar7;
  *(int32_t *)(unaff_RBP + -5) = uVar8;
  FUN_1806d7000(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = 0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar12 = &unknown_var_1920_ptr;
    }
    else {
      puVar12 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar9 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar12,unaff_RBP + 0x6f);
    if (((cVar9 != '\0') && (pcVar11 = *(char **)(unaff_RBP + 0x6f), pcVar11 != (char *)0x0)) &&
       (*pcVar11 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar11;
      uVar14 = FUN_1806d80c0(pcVar11,unaff_RBP + 0x67);
      uVar15 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar16 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      pbVar10 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                  ((longlong *)param_2[6],unaff_RBP + 0x77);
      if (((*pbVar10 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
        lVar4 = param_2[6];
        *(int32_t *)(unaff_RBP + -0x79) = uVar14;
        *(int32_t *)(unaff_RBP + -0x75) = uVar15;
        *(int32_t *)(unaff_RBP + -0x71) = uVar16;
        (**(code **)(unaff_RBP + -9))(lVar4,unaff_RBP + -0x79);
      }
    }
  }
  FUN_1806d6f60(param_2);
  uVar14 = *(int32_t *)(in_RCX + 0x244);
  uVar15 = *(int32_t *)(in_RCX + 0x248);
  uVar16 = *(int32_t *)(in_RCX + 0x24c);
  uVar2 = *(uint64_t *)(in_RCX + 0x240);
  uVar5 = *(int32_t *)(in_RCX + 0x250);
  uVar6 = *(int32_t *)(in_RCX + 0x254);
  uVar7 = *(int32_t *)(in_RCX + 600);
  uVar8 = *(int32_t *)(in_RCX + 0x25c);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(in_RCX + 0x240);
  *(int32_t *)(unaff_RBP + -0x1d) = uVar14;
  *(int32_t *)(unaff_RBP + -0x19) = uVar15;
  *(int32_t *)(unaff_RBP + -0x15) = uVar16;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  *(int32_t *)(unaff_RBP + -9) = uVar7;
  *(int32_t *)(unaff_RBP + -5) = uVar8;
  FUN_1806d7000(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar13 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar9 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar13,unaff_RBP + 0x67);
    if (((cVar9 != '\0') && (pcVar11 = *(char **)(unaff_RBP + 0x67), pcVar11 != (char *)0x0)) &&
       (*pcVar11 != '\0')) {
      uVar14 = FUN_1806d80c0(pcVar11,unaff_RBP + 0x6f);
      pbVar10 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                  ((longlong *)param_2[6],unaff_RBP + 0x77);
      if (((*pbVar10 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
        (**(code **)(unaff_RBP + -9))(param_2[6],uVar14);
      }
    }
  }
  FUN_1806d6f60(param_2);
  uVar14 = *(int32_t *)(in_RCX + 0x264);
  uVar15 = *(int32_t *)(in_RCX + 0x268);
  uVar16 = *(int32_t *)(in_RCX + 0x26c);
  uVar2 = *(uint64_t *)(in_RCX + 0x260);
  uVar5 = *(int32_t *)(in_RCX + 0x270);
  uVar6 = *(int32_t *)(in_RCX + 0x274);
  uVar7 = *(int32_t *)(in_RCX + 0x278);
  uVar8 = *(int32_t *)(in_RCX + 0x27c);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(in_RCX + 0x260);
  *(int32_t *)(unaff_RBP + -0x1d) = uVar14;
  *(int32_t *)(unaff_RBP + -0x19) = uVar15;
  *(int32_t *)(unaff_RBP + -0x15) = uVar16;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  *(int32_t *)(unaff_RBP + -9) = uVar7;
  *(int32_t *)(unaff_RBP + -5) = uVar8;
  FUN_1806d7000(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar9 = FUN_1806c4320(param_2,unaff_RBP + 0x67);
  if (cVar9 != '\0') {
    pbVar10 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                ((longlong *)param_2[6],unaff_RBP + 0x77);
    if (((*pbVar10 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))(param_2[6],*(int32_t *)(unaff_RBP + 0x67));
    }
  }
  FUN_1806d6f60(param_2);
  uVar14 = *(int32_t *)(in_RCX + 0x284);
  uVar15 = *(int32_t *)(in_RCX + 0x288);
  uVar16 = *(int32_t *)(in_RCX + 0x28c);
  uVar2 = *(uint64_t *)(in_RCX + 0x280);
  uVar5 = *(int32_t *)(in_RCX + 0x290);
  uVar6 = *(int32_t *)(in_RCX + 0x294);
  uVar7 = *(int32_t *)(in_RCX + 0x298);
  uVar8 = *(int32_t *)(in_RCX + 0x29c);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(in_RCX + 0x280);
  *(int32_t *)(unaff_RBP + -0x1d) = uVar14;
  *(int32_t *)(unaff_RBP + -0x19) = uVar15;
  *(int32_t *)(unaff_RBP + -0x15) = uVar16;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  *(int32_t *)(unaff_RBP + -9) = uVar7;
  *(int32_t *)(unaff_RBP + -5) = uVar8;
  FUN_1806d7000(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  pcVar11 = (char *)FUN_1806d54b0(param_2);
  if ((pcVar11 != (char *)0x0) && (*pcVar11 != '\0')) {
    lVar4 = param_2[7];
    *(int32_t *)(unaff_RBP + 0x77) = 0;
    FUN_1806d81c0(pcVar11,lVar4,unaff_RBP + 0x77,0x180be01c0);
    lVar4 = param_2[6];
    *(int8_t *)(unaff_RBP + 0x77) = *(int8_t *)(unaff_RBP + 0x77);
    (**(code **)(unaff_RBP + -9))(lVar4,unaff_RBP + 0x77);
  }
  FUN_1806d6f60(param_2);
  uVar14 = *(int32_t *)(in_RCX + 0x2a4);
  uVar15 = *(int32_t *)(in_RCX + 0x2a8);
  uVar16 = *(int32_t *)(in_RCX + 0x2ac);
  uVar2 = *(uint64_t *)(in_RCX + 0x2a0);
  uVar5 = *(int32_t *)(in_RCX + 0x2b0);
  uVar6 = *(int32_t *)(in_RCX + 0x2b4);
  uVar7 = *(int32_t *)(in_RCX + 0x2b8);
  uVar8 = *(int32_t *)(in_RCX + 700);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(in_RCX + 0x2a0);
  *(int32_t *)(unaff_RBP + -0x1d) = uVar14;
  *(int32_t *)(unaff_RBP + -0x19) = uVar15;
  *(int32_t *)(unaff_RBP + -0x15) = uVar16;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  *(int32_t *)(unaff_RBP + -9) = uVar7;
  *(int32_t *)(unaff_RBP + -5) = uVar8;
  FUN_1806d7000(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar9 = FUN_1806c4320(param_2,unaff_RBP + 0x67);
  if (cVar9 != '\0') {
    pbVar10 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                ((longlong *)param_2[6],unaff_RBP + 0x77);
    if (((*pbVar10 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))(param_2[6],*(int32_t *)(unaff_RBP + 0x67));
    }
  }
  FUN_1806d6f60(param_2);
  uVar14 = *(int32_t *)(in_RCX + 0x2c4);
  uVar15 = *(int32_t *)(in_RCX + 0x2c8);
  uVar16 = *(int32_t *)(in_RCX + 0x2cc);
  uVar2 = *(uint64_t *)(in_RCX + 0x2c0);
  uVar5 = *(int32_t *)(in_RCX + 0x2d0);
  uVar6 = *(int32_t *)(in_RCX + 0x2d4);
  uVar7 = *(int32_t *)(in_RCX + 0x2d8);
  uVar8 = *(int32_t *)(in_RCX + 0x2dc);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(in_RCX + 0x2c0);
  *(int32_t *)(unaff_RBP + -0x1d) = uVar14;
  *(int32_t *)(unaff_RBP + -0x19) = uVar15;
  *(int32_t *)(unaff_RBP + -0x15) = uVar16;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  *(int32_t *)(unaff_RBP + -9) = uVar7;
  *(int32_t *)(unaff_RBP + -5) = uVar8;
  FUN_1806d7000(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar9 = FUN_1806c4320(param_2,unaff_RBP + 0x67);
  if (cVar9 != '\0') {
    pbVar10 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                ((longlong *)param_2[6],unaff_RBP + 0x77);
    if (((*pbVar10 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))(param_2[6],*(int32_t *)(unaff_RBP + 0x67));
    }
  }
  FUN_1806d6f60(param_2);
  uVar14 = *(int32_t *)(in_RCX + 0x2e4);
  uVar15 = *(int32_t *)(in_RCX + 0x2e8);
  uVar16 = *(int32_t *)(in_RCX + 0x2ec);
  uVar2 = *(uint64_t *)(in_RCX + 0x2e0);
  uVar5 = *(int32_t *)(in_RCX + 0x2f0);
  uVar6 = *(int32_t *)(in_RCX + 0x2f4);
  uVar7 = *(int32_t *)(in_RCX + 0x2f8);
  uVar8 = *(int32_t *)(in_RCX + 0x2fc);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(in_RCX + 0x2e0);
  *(int32_t *)(unaff_RBP + -0x1d) = uVar14;
  *(int32_t *)(unaff_RBP + -0x19) = uVar15;
  *(int32_t *)(unaff_RBP + -0x15) = uVar16;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  *(int32_t *)(unaff_RBP + -9) = uVar7;
  *(int32_t *)(unaff_RBP + -5) = uVar8;
  FUN_1806d7000(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar9 = FUN_1806c4320(param_2,unaff_RBP + 0x67);
  if (cVar9 != '\0') {
    pbVar10 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                ((longlong *)param_2[6],unaff_RBP + 0x77);
    if (((*pbVar10 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))(param_2[6],*(int32_t *)(unaff_RBP + 0x67));
    }
  }
  FUN_1806d6f60(param_2);
  return param_3 + 0xf;
}



int FUN_1806ca700(uint64_t param_1,int32_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  longlong lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  char cVar10;
  char cVar11;
  byte *pbVar12;
  char *pcVar13;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  int unaff_R14D;
  uint64_t unaff_R15;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_R15;
  cVar11 = (char)unaff_R15;
  if (((((char)unaff_RBX[9] != cVar11) &&
       (cVar10 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                           ((longlong *)unaff_RBX[5],param_2,unaff_RBP + 0x67), cVar10 != '\0')) &&
      (pcVar13 = *(char **)(unaff_RBP + 0x67), pcVar13 != (char *)0x0)) && (*pcVar13 != cVar11)) {
    uVar14 = FUN_1806d80c0(pcVar13,unaff_RBP + 0x6f);
    pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                ((longlong *)unaff_RBX[6],unaff_RBP + 0x77);
    if (((*pbVar12 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))(unaff_RBX[6],uVar14);
    }
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x188);
  uVar15 = *(int32_t *)(unaff_RDI + 0x18c);
  uVar16 = *(int32_t *)(unaff_RDI + 400);
  uVar5 = *(int32_t *)(unaff_RDI + 0x194);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x188);
  uVar6 = *(int32_t *)(unaff_RDI + 0x198);
  uVar7 = *(int32_t *)(unaff_RDI + 0x19c);
  uVar8 = *(int32_t *)(unaff_RDI + 0x1a0);
  uVar9 = *(int32_t *)(unaff_RDI + 0x1a4);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  FUN_1806d7000(uVar14,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = unaff_R15;
  if ((((char)unaff_RBX[9] != cVar11) &&
      (cVar10 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar10 != '\0')) &&
     ((pcVar13 = *(char **)(unaff_RBP + 0x6f), pcVar13 != (char *)0x0 && (*pcVar13 != cVar11)))) {
    *(char **)(unaff_RBP + 0x67) = pcVar13;
    uVar14 = FUN_1806d80c0(pcVar13,unaff_RBP + 0x67);
    uVar15 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    uVar16 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                ((longlong *)unaff_RBX[6],unaff_RBP + 0x77);
    if (((*pbVar12 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      lVar4 = unaff_RBX[6];
      *(int32_t *)(unaff_RBP + -0x79) = uVar14;
      *(int32_t *)(unaff_RBP + -0x75) = uVar15;
      *(int32_t *)(unaff_RBP + -0x71) = uVar16;
      (**(code **)(unaff_RBP + -9))(lVar4,unaff_RBP + -0x79);
    }
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x1c0);
  uVar15 = *(int32_t *)(unaff_RDI + 0x1c4);
  uVar16 = *(int32_t *)(unaff_RDI + 0x1c8);
  uVar5 = *(int32_t *)(unaff_RDI + 0x1cc);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x1c0);
  uVar6 = *(int32_t *)(unaff_RDI + 0x1d0);
  uVar7 = *(int32_t *)(unaff_RDI + 0x1d4);
  uVar8 = *(int32_t *)(unaff_RDI + 0x1d8);
  uVar9 = *(int32_t *)(unaff_RDI + 0x1dc);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  FUN_1806d7000(uVar14,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_R15;
  if (((((char)unaff_RBX[9] != cVar11) &&
       (cVar10 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar10 != '\0')) &&
      (pcVar13 = *(char **)(unaff_RBP + 0x67), pcVar13 != (char *)0x0)) && (*pcVar13 != cVar11)) {
    uVar14 = FUN_1806d80c0(pcVar13,unaff_RBP + 0x6f);
    pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                ((longlong *)unaff_RBX[6],unaff_RBP + 0x77);
    if (((*pbVar12 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))(unaff_RBX[6],uVar14);
    }
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x1e0);
  uVar15 = *(int32_t *)(unaff_RDI + 0x1e4);
  uVar16 = *(int32_t *)(unaff_RDI + 0x1e8);
  uVar5 = *(int32_t *)(unaff_RDI + 0x1ec);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x1e0);
  uVar6 = *(int32_t *)(unaff_RDI + 0x1f0);
  uVar7 = *(int32_t *)(unaff_RDI + 500);
  uVar8 = *(int32_t *)(unaff_RDI + 0x1f8);
  uVar9 = *(int32_t *)(unaff_RDI + 0x1fc);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  FUN_1806d7000(uVar14,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_R15;
  if ((((char)unaff_RBX[9] != cVar11) &&
      (cVar10 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar10 != '\0')) &&
     ((pcVar13 = *(char **)(unaff_RBP + 0x67), pcVar13 != (char *)0x0 && (*pcVar13 != cVar11)))) {
    uVar14 = FUN_1806d80c0(pcVar13,unaff_RBP + 0x6f);
    pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                ((longlong *)unaff_RBX[6],unaff_RBP + 0x77);
    if (((*pbVar12 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))(unaff_RBX[6],uVar14);
    }
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x200);
  uVar15 = *(int32_t *)(unaff_RDI + 0x204);
  uVar16 = *(int32_t *)(unaff_RDI + 0x208);
  uVar5 = *(int32_t *)(unaff_RDI + 0x20c);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x200);
  uVar6 = *(int32_t *)(unaff_RDI + 0x210);
  uVar7 = *(int32_t *)(unaff_RDI + 0x214);
  uVar8 = *(int32_t *)(unaff_RDI + 0x218);
  uVar9 = *(int32_t *)(unaff_RDI + 0x21c);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  FUN_1806d7000(uVar14,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = unaff_R15;
  if (((((char)unaff_RBX[9] != cVar11) &&
       (cVar10 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar10 != '\0')) &&
      (pcVar13 = *(char **)(unaff_RBP + 0x6f), pcVar13 != (char *)0x0)) && (*pcVar13 != cVar11)) {
    *(char **)(unaff_RBP + 0x67) = pcVar13;
    uVar14 = FUN_1806d80c0(pcVar13,unaff_RBP + 0x67);
    uVar15 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    uVar16 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                ((longlong *)unaff_RBX[6],unaff_RBP + 0x77);
    if (((*pbVar12 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      lVar4 = unaff_RBX[6];
      *(int32_t *)(unaff_RBP + -0x79) = uVar14;
      *(int32_t *)(unaff_RBP + -0x75) = uVar15;
      *(int32_t *)(unaff_RBP + -0x71) = uVar16;
      (**(code **)(unaff_RBP + -9))(lVar4,unaff_RBP + -0x79);
    }
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x220);
  uVar15 = *(int32_t *)(unaff_RDI + 0x224);
  uVar16 = *(int32_t *)(unaff_RDI + 0x228);
  uVar5 = *(int32_t *)(unaff_RDI + 0x22c);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x220);
  uVar6 = *(int32_t *)(unaff_RDI + 0x230);
  uVar7 = *(int32_t *)(unaff_RDI + 0x234);
  uVar8 = *(int32_t *)(unaff_RDI + 0x238);
  uVar9 = *(int32_t *)(unaff_RDI + 0x23c);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  FUN_1806d7000(uVar14,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = unaff_R15;
  if ((((char)unaff_RBX[9] != cVar11) &&
      (cVar10 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar10 != '\0')) &&
     ((pcVar13 = *(char **)(unaff_RBP + 0x6f), pcVar13 != (char *)0x0 && (*pcVar13 != cVar11)))) {
    *(char **)(unaff_RBP + 0x67) = pcVar13;
    uVar14 = FUN_1806d80c0(pcVar13,unaff_RBP + 0x67);
    uVar15 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    uVar16 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                ((longlong *)unaff_RBX[6],unaff_RBP + 0x77);
    if (((*pbVar12 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      lVar4 = unaff_RBX[6];
      *(int32_t *)(unaff_RBP + -0x79) = uVar14;
      *(int32_t *)(unaff_RBP + -0x75) = uVar15;
      *(int32_t *)(unaff_RBP + -0x71) = uVar16;
      (**(code **)(unaff_RBP + -9))(lVar4,unaff_RBP + -0x79);
    }
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x240);
  uVar15 = *(int32_t *)(unaff_RDI + 0x244);
  uVar16 = *(int32_t *)(unaff_RDI + 0x248);
  uVar5 = *(int32_t *)(unaff_RDI + 0x24c);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x240);
  uVar6 = *(int32_t *)(unaff_RDI + 0x250);
  uVar7 = *(int32_t *)(unaff_RDI + 0x254);
  uVar8 = *(int32_t *)(unaff_RDI + 600);
  uVar9 = *(int32_t *)(unaff_RDI + 0x25c);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  FUN_1806d7000(uVar14,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_R15;
  if ((char)unaff_RBX[9] != cVar11) {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      unaff_RSI = *(uint64_t *)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar10 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                       ((longlong *)unaff_RBX[5],unaff_RSI,unaff_RBP + 0x67);
    if (((cVar10 != '\0') && (pcVar13 = *(char **)(unaff_RBP + 0x67), pcVar13 != (char *)0x0)) &&
       (*pcVar13 != cVar11)) {
      uVar14 = FUN_1806d80c0(pcVar13,unaff_RBP + 0x6f);
      pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                  ((longlong *)unaff_RBX[6],unaff_RBP + 0x77);
      if (((*pbVar12 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
        (**(code **)(unaff_RBP + -9))(unaff_RBX[6],uVar14);
      }
    }
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x260);
  uVar15 = *(int32_t *)(unaff_RDI + 0x264);
  uVar16 = *(int32_t *)(unaff_RDI + 0x268);
  uVar5 = *(int32_t *)(unaff_RDI + 0x26c);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x260);
  uVar6 = *(int32_t *)(unaff_RDI + 0x270);
  uVar7 = *(int32_t *)(unaff_RDI + 0x274);
  uVar8 = *(int32_t *)(unaff_RDI + 0x278);
  uVar9 = *(int32_t *)(unaff_RDI + 0x27c);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  uVar14 = FUN_1806d7000(uVar14,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar10 = FUN_1806c4320(uVar14,unaff_RBP + 0x67);
  if ((cVar10 != '\0') &&
     ((pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                   ((longlong *)unaff_RBX[6],unaff_RBP + 0x77), (*pbVar12 & 1) == 0
      || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)))) {
    (**(code **)(unaff_RBP + -9))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x280);
  uVar15 = *(int32_t *)(unaff_RDI + 0x284);
  uVar16 = *(int32_t *)(unaff_RDI + 0x288);
  uVar5 = *(int32_t *)(unaff_RDI + 0x28c);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x280);
  uVar6 = *(int32_t *)(unaff_RDI + 0x290);
  uVar7 = *(int32_t *)(unaff_RDI + 0x294);
  uVar8 = *(int32_t *)(unaff_RDI + 0x298);
  uVar9 = *(int32_t *)(unaff_RDI + 0x29c);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  FUN_1806d7000(uVar14,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  pcVar13 = (char *)FUN_1806d54b0();
  if ((pcVar13 != (char *)0x0) && (*pcVar13 != cVar11)) {
    lVar4 = unaff_RBX[7];
    *(int *)(unaff_RBP + 0x77) = (int)unaff_R15;
    FUN_1806d81c0(pcVar13,lVar4,unaff_RBP + 0x77,0x180be01c0);
    lVar4 = unaff_RBX[6];
    *(int8_t *)(unaff_RBP + 0x77) = *(int8_t *)(unaff_RBP + 0x77);
    (**(code **)(unaff_RBP + -9))(lVar4,unaff_RBP + 0x77);
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x2a0);
  uVar15 = *(int32_t *)(unaff_RDI + 0x2a4);
  uVar16 = *(int32_t *)(unaff_RDI + 0x2a8);
  uVar5 = *(int32_t *)(unaff_RDI + 0x2ac);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x2a0);
  uVar6 = *(int32_t *)(unaff_RDI + 0x2b0);
  uVar7 = *(int32_t *)(unaff_RDI + 0x2b4);
  uVar8 = *(int32_t *)(unaff_RDI + 0x2b8);
  uVar9 = *(int32_t *)(unaff_RDI + 700);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  uVar14 = FUN_1806d7000(uVar14,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar11 = FUN_1806c4320(uVar14,unaff_RBP + 0x67);
  if ((cVar11 != '\0') &&
     ((pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                   ((longlong *)unaff_RBX[6],unaff_RBP + 0x77), (*pbVar12 & 1) == 0
      || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)))) {
    (**(code **)(unaff_RBP + -9))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x2c0);
  uVar15 = *(int32_t *)(unaff_RDI + 0x2c4);
  uVar16 = *(int32_t *)(unaff_RDI + 0x2c8);
  uVar5 = *(int32_t *)(unaff_RDI + 0x2cc);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x2c0);
  uVar6 = *(int32_t *)(unaff_RDI + 0x2d0);
  uVar7 = *(int32_t *)(unaff_RDI + 0x2d4);
  uVar8 = *(int32_t *)(unaff_RDI + 0x2d8);
  uVar9 = *(int32_t *)(unaff_RDI + 0x2dc);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  uVar14 = FUN_1806d7000(uVar14,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar11 = FUN_1806c4320(uVar14,unaff_RBP + 0x67);
  if ((cVar11 != '\0') &&
     ((pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                   ((longlong *)unaff_RBX[6],unaff_RBP + 0x77), (*pbVar12 & 1) == 0
      || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)))) {
    (**(code **)(unaff_RBP + -9))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x2e0);
  uVar15 = *(int32_t *)(unaff_RDI + 0x2e4);
  uVar16 = *(int32_t *)(unaff_RDI + 0x2e8);
  uVar5 = *(int32_t *)(unaff_RDI + 0x2ec);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x2e0);
  uVar6 = *(int32_t *)(unaff_RDI + 0x2f0);
  uVar7 = *(int32_t *)(unaff_RDI + 0x2f4);
  uVar8 = *(int32_t *)(unaff_RDI + 0x2f8);
  uVar9 = *(int32_t *)(unaff_RDI + 0x2fc);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  uVar14 = FUN_1806d7000(uVar14,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar11 = FUN_1806c4320(uVar14,unaff_RBP + 0x67);
  if ((cVar11 != '\0') &&
     ((pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                   ((longlong *)unaff_RBX[6],unaff_RBP + 0x77), (*pbVar12 & 1) == 0
      || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)))) {
    (**(code **)(unaff_RBP + -9))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  FUN_1806d6f60();
  return unaff_R14D + 0xf;
}



int FUN_1806ca7bf(uint64_t param_1,int32_t param_2)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  int *piVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  char cVar10;
  char cVar11;
  byte *pbVar12;
  char *pcVar13;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  int unaff_R14D;
  uint64_t unaff_R15;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  
  *(uint64_t *)(unaff_RBP + 0x6f) = unaff_R15;
  cVar11 = (char)unaff_R15;
  if (((((char)unaff_RBX[9] != cVar11) &&
       (cVar10 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                           ((longlong *)unaff_RBX[5],param_2,unaff_RBP + 0x6f), cVar10 != '\0')) &&
      (pcVar13 = *(char **)(unaff_RBP + 0x6f), pcVar13 != (char *)0x0)) && (*pcVar13 != cVar11)) {
    *(char **)(unaff_RBP + 0x67) = pcVar13;
    uVar14 = FUN_1806d80c0(pcVar13,unaff_RBP + 0x67);
    uVar15 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    uVar16 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                ((longlong *)unaff_RBX[6],unaff_RBP + 0x77);
    if (((*pbVar12 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      lVar2 = unaff_RBX[6];
      *(int32_t *)(unaff_RBP + -0x79) = uVar14;
      *(int32_t *)(unaff_RBP + -0x75) = uVar15;
      *(int32_t *)(unaff_RBP + -0x71) = uVar16;
      (**(code **)(unaff_RBP + -9))(lVar2,unaff_RBP + -0x79);
    }
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x1c0);
  uVar15 = *(int32_t *)(unaff_RDI + 0x1c4);
  uVar16 = *(int32_t *)(unaff_RDI + 0x1c8);
  uVar5 = *(int32_t *)(unaff_RDI + 0x1cc);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x1c0);
  uVar6 = *(int32_t *)(unaff_RDI + 0x1d0);
  uVar7 = *(int32_t *)(unaff_RDI + 0x1d4);
  uVar8 = *(int32_t *)(unaff_RDI + 0x1d8);
  uVar9 = *(int32_t *)(unaff_RDI + 0x1dc);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  FUN_1806d7000(uVar14,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_R15;
  if ((((char)unaff_RBX[9] != cVar11) &&
      (cVar10 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar10 != '\0')) &&
     ((pcVar13 = *(char **)(unaff_RBP + 0x67), pcVar13 != (char *)0x0 && (*pcVar13 != cVar11)))) {
    uVar14 = FUN_1806d80c0(pcVar13,unaff_RBP + 0x6f);
    pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                ((longlong *)unaff_RBX[6],unaff_RBP + 0x77);
    if (((*pbVar12 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))(unaff_RBX[6],uVar14);
    }
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x1e0);
  uVar15 = *(int32_t *)(unaff_RDI + 0x1e4);
  uVar16 = *(int32_t *)(unaff_RDI + 0x1e8);
  uVar5 = *(int32_t *)(unaff_RDI + 0x1ec);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x1e0);
  uVar6 = *(int32_t *)(unaff_RDI + 0x1f0);
  uVar7 = *(int32_t *)(unaff_RDI + 500);
  uVar8 = *(int32_t *)(unaff_RDI + 0x1f8);
  uVar9 = *(int32_t *)(unaff_RDI + 0x1fc);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  FUN_1806d7000(uVar14,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_R15;
  if (((((char)unaff_RBX[9] != cVar11) &&
       (cVar10 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar10 != '\0')) &&
      (pcVar13 = *(char **)(unaff_RBP + 0x67), pcVar13 != (char *)0x0)) && (*pcVar13 != cVar11)) {
    uVar14 = FUN_1806d80c0(pcVar13,unaff_RBP + 0x6f);
    pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                ((longlong *)unaff_RBX[6],unaff_RBP + 0x77);
    if (((*pbVar12 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))(unaff_RBX[6],uVar14);
    }
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x200);
  uVar15 = *(int32_t *)(unaff_RDI + 0x204);
  uVar16 = *(int32_t *)(unaff_RDI + 0x208);
  uVar5 = *(int32_t *)(unaff_RDI + 0x20c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x200);
  uVar6 = *(int32_t *)(unaff_RDI + 0x210);
  uVar7 = *(int32_t *)(unaff_RDI + 0x214);
  uVar8 = *(int32_t *)(unaff_RDI + 0x218);
  uVar9 = *(int32_t *)(unaff_RDI + 0x21c);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  FUN_1806d7000(uVar14,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = unaff_R15;
  if ((((char)unaff_RBX[9] != cVar11) &&
      (cVar10 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar10 != '\0')) &&
     ((pcVar13 = *(char **)(unaff_RBP + 0x6f), pcVar13 != (char *)0x0 && (*pcVar13 != cVar11)))) {
    *(char **)(unaff_RBP + 0x67) = pcVar13;
    uVar14 = FUN_1806d80c0(pcVar13,unaff_RBP + 0x67);
    uVar15 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    uVar16 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                ((longlong *)unaff_RBX[6],unaff_RBP + 0x77);
    if (((*pbVar12 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      lVar2 = unaff_RBX[6];
      *(int32_t *)(unaff_RBP + -0x79) = uVar14;
      *(int32_t *)(unaff_RBP + -0x75) = uVar15;
      *(int32_t *)(unaff_RBP + -0x71) = uVar16;
      (**(code **)(unaff_RBP + -9))(lVar2,unaff_RBP + -0x79);
    }
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x220);
  uVar15 = *(int32_t *)(unaff_RDI + 0x224);
  uVar16 = *(int32_t *)(unaff_RDI + 0x228);
  uVar5 = *(int32_t *)(unaff_RDI + 0x22c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x220);
  uVar6 = *(int32_t *)(unaff_RDI + 0x230);
  uVar7 = *(int32_t *)(unaff_RDI + 0x234);
  uVar8 = *(int32_t *)(unaff_RDI + 0x238);
  uVar9 = *(int32_t *)(unaff_RDI + 0x23c);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  FUN_1806d7000(uVar14,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = unaff_R15;
  if (((((char)unaff_RBX[9] != cVar11) &&
       (cVar10 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar10 != '\0')) &&
      (pcVar13 = *(char **)(unaff_RBP + 0x6f), pcVar13 != (char *)0x0)) && (*pcVar13 != cVar11)) {
    *(char **)(unaff_RBP + 0x67) = pcVar13;
    uVar14 = FUN_1806d80c0(pcVar13,unaff_RBP + 0x67);
    uVar15 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    uVar16 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                ((longlong *)unaff_RBX[6],unaff_RBP + 0x77);
    if (((*pbVar12 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      lVar2 = unaff_RBX[6];
      *(int32_t *)(unaff_RBP + -0x79) = uVar14;
      *(int32_t *)(unaff_RBP + -0x75) = uVar15;
      *(int32_t *)(unaff_RBP + -0x71) = uVar16;
      (**(code **)(unaff_RBP + -9))(lVar2,unaff_RBP + -0x79);
    }
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x240);
  uVar15 = *(int32_t *)(unaff_RDI + 0x244);
  uVar16 = *(int32_t *)(unaff_RDI + 0x248);
  uVar5 = *(int32_t *)(unaff_RDI + 0x24c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x240);
  uVar6 = *(int32_t *)(unaff_RDI + 0x250);
  uVar7 = *(int32_t *)(unaff_RDI + 0x254);
  uVar8 = *(int32_t *)(unaff_RDI + 600);
  uVar9 = *(int32_t *)(unaff_RDI + 0x25c);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  FUN_1806d7000(uVar14,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_R15;
  if ((char)unaff_RBX[9] != cVar11) {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      unaff_RSI = *(uint64_t *)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar10 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                       ((longlong *)unaff_RBX[5],unaff_RSI,unaff_RBP + 0x67);
    if (((cVar10 != '\0') && (pcVar13 = *(char **)(unaff_RBP + 0x67), pcVar13 != (char *)0x0)) &&
       (*pcVar13 != cVar11)) {
      uVar14 = FUN_1806d80c0(pcVar13,unaff_RBP + 0x6f);
      pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                  ((longlong *)unaff_RBX[6],unaff_RBP + 0x77);
      if (((*pbVar12 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
        (**(code **)(unaff_RBP + -9))(unaff_RBX[6],uVar14);
      }
    }
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x260);
  uVar15 = *(int32_t *)(unaff_RDI + 0x264);
  uVar16 = *(int32_t *)(unaff_RDI + 0x268);
  uVar5 = *(int32_t *)(unaff_RDI + 0x26c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x260);
  uVar6 = *(int32_t *)(unaff_RDI + 0x270);
  uVar7 = *(int32_t *)(unaff_RDI + 0x274);
  uVar8 = *(int32_t *)(unaff_RDI + 0x278);
  uVar9 = *(int32_t *)(unaff_RDI + 0x27c);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  uVar14 = FUN_1806d7000(uVar14,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  cVar10 = FUN_1806c4320(uVar14,unaff_RBP + 0x67);
  if ((cVar10 != '\0') &&
     ((pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                   ((longlong *)unaff_RBX[6],unaff_RBP + 0x77), (*pbVar12 & 1) == 0
      || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)))) {
    (**(code **)(unaff_RBP + -9))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x280);
  uVar15 = *(int32_t *)(unaff_RDI + 0x284);
  uVar16 = *(int32_t *)(unaff_RDI + 0x288);
  uVar5 = *(int32_t *)(unaff_RDI + 0x28c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x280);
  uVar6 = *(int32_t *)(unaff_RDI + 0x290);
  uVar7 = *(int32_t *)(unaff_RDI + 0x294);
  uVar8 = *(int32_t *)(unaff_RDI + 0x298);
  uVar9 = *(int32_t *)(unaff_RDI + 0x29c);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  FUN_1806d7000(uVar14,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  pcVar13 = (char *)FUN_1806d54b0();
  if ((pcVar13 != (char *)0x0) && (*pcVar13 != cVar11)) {
    lVar2 = unaff_RBX[7];
    *(int *)(unaff_RBP + 0x77) = (int)unaff_R15;
    FUN_1806d81c0(pcVar13,lVar2,unaff_RBP + 0x77,0x180be01c0);
    lVar2 = unaff_RBX[6];
    *(int8_t *)(unaff_RBP + 0x77) = *(int8_t *)(unaff_RBP + 0x77);
    (**(code **)(unaff_RBP + -9))(lVar2,unaff_RBP + 0x77);
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x2a0);
  uVar15 = *(int32_t *)(unaff_RDI + 0x2a4);
  uVar16 = *(int32_t *)(unaff_RDI + 0x2a8);
  uVar5 = *(int32_t *)(unaff_RDI + 0x2ac);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x2a0);
  uVar6 = *(int32_t *)(unaff_RDI + 0x2b0);
  uVar7 = *(int32_t *)(unaff_RDI + 0x2b4);
  uVar8 = *(int32_t *)(unaff_RDI + 0x2b8);
  uVar9 = *(int32_t *)(unaff_RDI + 700);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  uVar14 = FUN_1806d7000(uVar14,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  cVar11 = FUN_1806c4320(uVar14,unaff_RBP + 0x67);
  if ((cVar11 != '\0') &&
     ((pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                   ((longlong *)unaff_RBX[6],unaff_RBP + 0x77), (*pbVar12 & 1) == 0
      || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)))) {
    (**(code **)(unaff_RBP + -9))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x2c0);
  uVar15 = *(int32_t *)(unaff_RDI + 0x2c4);
  uVar16 = *(int32_t *)(unaff_RDI + 0x2c8);
  uVar5 = *(int32_t *)(unaff_RDI + 0x2cc);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x2c0);
  uVar6 = *(int32_t *)(unaff_RDI + 0x2d0);
  uVar7 = *(int32_t *)(unaff_RDI + 0x2d4);
  uVar8 = *(int32_t *)(unaff_RDI + 0x2d8);
  uVar9 = *(int32_t *)(unaff_RDI + 0x2dc);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  uVar14 = FUN_1806d7000(uVar14,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  cVar11 = FUN_1806c4320(uVar14,unaff_RBP + 0x67);
  if ((cVar11 != '\0') &&
     ((pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                   ((longlong *)unaff_RBX[6],unaff_RBP + 0x77), (*pbVar12 & 1) == 0
      || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)))) {
    (**(code **)(unaff_RBP + -9))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  FUN_1806d6f60();
  uVar14 = *(int32_t *)(unaff_RDI + 0x2e0);
  uVar15 = *(int32_t *)(unaff_RDI + 0x2e4);
  uVar16 = *(int32_t *)(unaff_RDI + 0x2e8);
  uVar5 = *(int32_t *)(unaff_RDI + 0x2ec);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x2e0);
  uVar6 = *(int32_t *)(unaff_RDI + 0x2f0);
  uVar7 = *(int32_t *)(unaff_RDI + 0x2f4);
  uVar8 = *(int32_t *)(unaff_RDI + 0x2f8);
  uVar9 = *(int32_t *)(unaff_RDI + 0x2fc);
  *(int32_t *)(unaff_RBP + -0x21) = uVar14;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar15;
  *(int32_t *)(unaff_RBP + -0x19) = uVar16;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  uVar14 = FUN_1806d7000(uVar14,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  cVar11 = FUN_1806c4320(uVar14,unaff_RBP + 0x67);
  if ((cVar11 != '\0') &&
     ((pbVar12 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                   ((longlong *)unaff_RBX[6],unaff_RBP + 0x77), (*pbVar12 & 1) == 0
      || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)))) {
    (**(code **)(unaff_RBP + -9))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  FUN_1806d6f60();
  return unaff_R14D + 0xf;
}



int FUN_1806cac20(void)

{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  longlong lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  char cVar12;
  char cVar13;
  int *in_RAX;
  byte *pbVar14;
  char *pcVar15;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  int unaff_R14D;
  uint64_t unaff_R15;
  int32_t uVar16;
  
  *in_RAX = *in_RAX + 1;
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_R15;
  cVar13 = (char)unaff_R15;
  if ((char)unaff_RBX[9] != cVar13) {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      unaff_RSI = *(uint64_t *)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar12 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                       ((longlong *)unaff_RBX[5],unaff_RSI,unaff_RBP + 0x67);
    if (((cVar12 != '\0') && (pcVar15 = *(char **)(unaff_RBP + 0x67), pcVar15 != (char *)0x0)) &&
       (*pcVar15 != cVar13)) {
      uVar16 = FUN_1806d80c0(pcVar15,unaff_RBP + 0x6f);
      pbVar14 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                  ((longlong *)unaff_RBX[6],unaff_RBP + 0x77);
      if (((*pbVar14 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
        (**(code **)(unaff_RBP + -9))(unaff_RBX[6],uVar16);
      }
    }
  }
  FUN_1806d6f60();
  uVar16 = *(int32_t *)(unaff_RDI + 0x260);
  uVar5 = *(int32_t *)(unaff_RDI + 0x264);
  uVar6 = *(int32_t *)(unaff_RDI + 0x268);
  uVar7 = *(int32_t *)(unaff_RDI + 0x26c);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x260);
  uVar8 = *(int32_t *)(unaff_RDI + 0x270);
  uVar9 = *(int32_t *)(unaff_RDI + 0x274);
  uVar10 = *(int32_t *)(unaff_RDI + 0x278);
  uVar11 = *(int32_t *)(unaff_RDI + 0x27c);
  *(int32_t *)(unaff_RBP + -0x21) = uVar16;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar5;
  *(int32_t *)(unaff_RBP + -0x19) = uVar6;
  *(int32_t *)(unaff_RBP + -0x15) = uVar7;
  *(int32_t *)(unaff_RBP + -0x11) = uVar8;
  *(int32_t *)(unaff_RBP + -0xd) = uVar9;
  *(int32_t *)(unaff_RBP + -9) = uVar10;
  *(int32_t *)(unaff_RBP + -5) = uVar11;
  uVar16 = FUN_1806d7000(uVar16,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar12 = FUN_1806c4320(uVar16,unaff_RBP + 0x67);
  if (cVar12 != '\0') {
    pbVar14 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                ((longlong *)unaff_RBX[6],unaff_RBP + 0x77);
    if (((*pbVar14 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
    }
  }
  FUN_1806d6f60();
  uVar16 = *(int32_t *)(unaff_RDI + 0x280);
  uVar5 = *(int32_t *)(unaff_RDI + 0x284);
  uVar6 = *(int32_t *)(unaff_RDI + 0x288);
  uVar7 = *(int32_t *)(unaff_RDI + 0x28c);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x280);
  uVar8 = *(int32_t *)(unaff_RDI + 0x290);
  uVar9 = *(int32_t *)(unaff_RDI + 0x294);
  uVar10 = *(int32_t *)(unaff_RDI + 0x298);
  uVar11 = *(int32_t *)(unaff_RDI + 0x29c);
  *(int32_t *)(unaff_RBP + -0x21) = uVar16;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar5;
  *(int32_t *)(unaff_RBP + -0x19) = uVar6;
  *(int32_t *)(unaff_RBP + -0x15) = uVar7;
  *(int32_t *)(unaff_RBP + -0x11) = uVar8;
  *(int32_t *)(unaff_RBP + -0xd) = uVar9;
  *(int32_t *)(unaff_RBP + -9) = uVar10;
  *(int32_t *)(unaff_RBP + -5) = uVar11;
  FUN_1806d7000(uVar16,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  pcVar15 = (char *)FUN_1806d54b0();
  if ((pcVar15 != (char *)0x0) && (*pcVar15 != cVar13)) {
    lVar4 = unaff_RBX[7];
    *(int *)(unaff_RBP + 0x77) = (int)unaff_R15;
    FUN_1806d81c0(pcVar15,lVar4,unaff_RBP + 0x77,0x180be01c0);
    lVar4 = unaff_RBX[6];
    *(int8_t *)(unaff_RBP + 0x77) = *(int8_t *)(unaff_RBP + 0x77);
    (**(code **)(unaff_RBP + -9))(lVar4,unaff_RBP + 0x77);
  }
  FUN_1806d6f60();
  uVar16 = *(int32_t *)(unaff_RDI + 0x2a0);
  uVar5 = *(int32_t *)(unaff_RDI + 0x2a4);
  uVar6 = *(int32_t *)(unaff_RDI + 0x2a8);
  uVar7 = *(int32_t *)(unaff_RDI + 0x2ac);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x2a0);
  uVar8 = *(int32_t *)(unaff_RDI + 0x2b0);
  uVar9 = *(int32_t *)(unaff_RDI + 0x2b4);
  uVar10 = *(int32_t *)(unaff_RDI + 0x2b8);
  uVar11 = *(int32_t *)(unaff_RDI + 700);
  *(int32_t *)(unaff_RBP + -0x21) = uVar16;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar5;
  *(int32_t *)(unaff_RBP + -0x19) = uVar6;
  *(int32_t *)(unaff_RBP + -0x15) = uVar7;
  *(int32_t *)(unaff_RBP + -0x11) = uVar8;
  *(int32_t *)(unaff_RBP + -0xd) = uVar9;
  *(int32_t *)(unaff_RBP + -9) = uVar10;
  *(int32_t *)(unaff_RBP + -5) = uVar11;
  uVar16 = FUN_1806d7000(uVar16,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar13 = FUN_1806c4320(uVar16,unaff_RBP + 0x67);
  if (cVar13 != '\0') {
    pbVar14 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                ((longlong *)unaff_RBX[6],unaff_RBP + 0x77);
    if (((*pbVar14 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
    }
  }
  FUN_1806d6f60();
  uVar16 = *(int32_t *)(unaff_RDI + 0x2c0);
  uVar5 = *(int32_t *)(unaff_RDI + 0x2c4);
  uVar6 = *(int32_t *)(unaff_RDI + 0x2c8);
  uVar7 = *(int32_t *)(unaff_RDI + 0x2cc);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x2c0);
  uVar8 = *(int32_t *)(unaff_RDI + 0x2d0);
  uVar9 = *(int32_t *)(unaff_RDI + 0x2d4);
  uVar10 = *(int32_t *)(unaff_RDI + 0x2d8);
  uVar11 = *(int32_t *)(unaff_RDI + 0x2dc);
  *(int32_t *)(unaff_RBP + -0x21) = uVar16;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar5;
  *(int32_t *)(unaff_RBP + -0x19) = uVar6;
  *(int32_t *)(unaff_RBP + -0x15) = uVar7;
  *(int32_t *)(unaff_RBP + -0x11) = uVar8;
  *(int32_t *)(unaff_RBP + -0xd) = uVar9;
  *(int32_t *)(unaff_RBP + -9) = uVar10;
  *(int32_t *)(unaff_RBP + -5) = uVar11;
  uVar16 = FUN_1806d7000(uVar16,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar13 = FUN_1806c4320(uVar16,unaff_RBP + 0x67);
  if (cVar13 != '\0') {
    pbVar14 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                ((longlong *)unaff_RBX[6],unaff_RBP + 0x77);
    if (((*pbVar14 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
    }
  }
  FUN_1806d6f60();
  uVar16 = *(int32_t *)(unaff_RDI + 0x2e0);
  uVar5 = *(int32_t *)(unaff_RDI + 0x2e4);
  uVar6 = *(int32_t *)(unaff_RDI + 0x2e8);
  uVar7 = *(int32_t *)(unaff_RDI + 0x2ec);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x2e0);
  uVar8 = *(int32_t *)(unaff_RDI + 0x2f0);
  uVar9 = *(int32_t *)(unaff_RDI + 0x2f4);
  uVar10 = *(int32_t *)(unaff_RDI + 0x2f8);
  uVar11 = *(int32_t *)(unaff_RDI + 0x2fc);
  *(int32_t *)(unaff_RBP + -0x21) = uVar16;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar5;
  *(int32_t *)(unaff_RBP + -0x19) = uVar6;
  *(int32_t *)(unaff_RBP + -0x15) = uVar7;
  *(int32_t *)(unaff_RBP + -0x11) = uVar8;
  *(int32_t *)(unaff_RBP + -0xd) = uVar9;
  *(int32_t *)(unaff_RBP + -9) = uVar10;
  *(int32_t *)(unaff_RBP + -5) = uVar11;
  uVar16 = FUN_1806d7000(uVar16,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar13 = FUN_1806c4320(uVar16,unaff_RBP + 0x67);
  if (cVar13 != '\0') {
    pbVar14 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                ((longlong *)unaff_RBX[6],unaff_RBP + 0x77);
    if (((*pbVar14 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
    }
  }
  FUN_1806d6f60();
  return unaff_R14D + 0xf;
}



int FUN_1806cace5(int32_t param_1)

{
  uint64_t uVar1;
  int *piVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  char cVar10;
  int *in_RAX;
  byte *pbVar11;
  char *pcVar12;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  int unaff_R14D;
  int32_t unaff_R15D;
  int32_t uVar13;
  
  *in_RAX = *in_RAX + 1;
  cVar10 = FUN_1806c4320(param_1,unaff_RBP + 0x67);
  if (cVar10 != '\0') {
    pbVar11 = (byte *)(**(code **)(**(longlong **)(unaff_RBX + 0x30) + 0x1a8))
                                (*(longlong **)(unaff_RBX + 0x30),unaff_RBP + 0x77);
    if (((*pbVar11 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))
                (*(uint64_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBP + 0x67));
    }
  }
  FUN_1806d6f60();
  uVar13 = *(int32_t *)(unaff_RDI + 0x280);
  uVar3 = *(int32_t *)(unaff_RDI + 0x284);
  uVar4 = *(int32_t *)(unaff_RDI + 0x288);
  uVar5 = *(int32_t *)(unaff_RDI + 0x28c);
  uVar1 = *(uint64_t *)(unaff_RDI + 0x280);
  uVar6 = *(int32_t *)(unaff_RDI + 0x290);
  uVar7 = *(int32_t *)(unaff_RDI + 0x294);
  uVar8 = *(int32_t *)(unaff_RDI + 0x298);
  uVar9 = *(int32_t *)(unaff_RDI + 0x29c);
  *(int32_t *)(unaff_RBP + -0x21) = uVar13;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar3;
  *(int32_t *)(unaff_RBP + -0x19) = uVar4;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  FUN_1806d7000(uVar13,uVar1);
  piVar2 = *(int **)(unaff_RBX + 0x58);
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcVar12 = (char *)FUN_1806d54b0();
  if ((pcVar12 != (char *)0x0) && (*pcVar12 != (char)unaff_R15D)) {
    uVar1 = *(uint64_t *)(unaff_RBX + 0x38);
    *(int32_t *)(unaff_RBP + 0x77) = unaff_R15D;
    FUN_1806d81c0(pcVar12,uVar1,unaff_RBP + 0x77,0x180be01c0);
    uVar1 = *(uint64_t *)(unaff_RBX + 0x30);
    *(int8_t *)(unaff_RBP + 0x77) = *(int8_t *)(unaff_RBP + 0x77);
    (**(code **)(unaff_RBP + -9))(uVar1,unaff_RBP + 0x77);
  }
  FUN_1806d6f60();
  uVar13 = *(int32_t *)(unaff_RDI + 0x2a0);
  uVar3 = *(int32_t *)(unaff_RDI + 0x2a4);
  uVar4 = *(int32_t *)(unaff_RDI + 0x2a8);
  uVar5 = *(int32_t *)(unaff_RDI + 0x2ac);
  uVar1 = *(uint64_t *)(unaff_RDI + 0x2a0);
  uVar6 = *(int32_t *)(unaff_RDI + 0x2b0);
  uVar7 = *(int32_t *)(unaff_RDI + 0x2b4);
  uVar8 = *(int32_t *)(unaff_RDI + 0x2b8);
  uVar9 = *(int32_t *)(unaff_RDI + 700);
  *(int32_t *)(unaff_RBP + -0x21) = uVar13;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar3;
  *(int32_t *)(unaff_RBP + -0x19) = uVar4;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  uVar13 = FUN_1806d7000(uVar13,uVar1);
  piVar2 = *(int **)(unaff_RBX + 0x58);
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar10 = FUN_1806c4320(uVar13,unaff_RBP + 0x67);
  if (cVar10 != '\0') {
    pbVar11 = (byte *)(**(code **)(**(longlong **)(unaff_RBX + 0x30) + 0x1a8))
                                (*(longlong **)(unaff_RBX + 0x30),unaff_RBP + 0x77);
    if (((*pbVar11 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))
                (*(uint64_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBP + 0x67));
    }
  }
  FUN_1806d6f60();
  uVar13 = *(int32_t *)(unaff_RDI + 0x2c0);
  uVar3 = *(int32_t *)(unaff_RDI + 0x2c4);
  uVar4 = *(int32_t *)(unaff_RDI + 0x2c8);
  uVar5 = *(int32_t *)(unaff_RDI + 0x2cc);
  uVar1 = *(uint64_t *)(unaff_RDI + 0x2c0);
  uVar6 = *(int32_t *)(unaff_RDI + 0x2d0);
  uVar7 = *(int32_t *)(unaff_RDI + 0x2d4);
  uVar8 = *(int32_t *)(unaff_RDI + 0x2d8);
  uVar9 = *(int32_t *)(unaff_RDI + 0x2dc);
  *(int32_t *)(unaff_RBP + -0x21) = uVar13;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar3;
  *(int32_t *)(unaff_RBP + -0x19) = uVar4;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  uVar13 = FUN_1806d7000(uVar13,uVar1);
  piVar2 = *(int **)(unaff_RBX + 0x58);
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar10 = FUN_1806c4320(uVar13,unaff_RBP + 0x67);
  if (cVar10 != '\0') {
    pbVar11 = (byte *)(**(code **)(**(longlong **)(unaff_RBX + 0x30) + 0x1a8))
                                (*(longlong **)(unaff_RBX + 0x30),unaff_RBP + 0x77);
    if (((*pbVar11 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))
                (*(uint64_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBP + 0x67));
    }
  }
  FUN_1806d6f60();
  uVar13 = *(int32_t *)(unaff_RDI + 0x2e0);
  uVar3 = *(int32_t *)(unaff_RDI + 0x2e4);
  uVar4 = *(int32_t *)(unaff_RDI + 0x2e8);
  uVar5 = *(int32_t *)(unaff_RDI + 0x2ec);
  uVar1 = *(uint64_t *)(unaff_RDI + 0x2e0);
  uVar6 = *(int32_t *)(unaff_RDI + 0x2f0);
  uVar7 = *(int32_t *)(unaff_RDI + 0x2f4);
  uVar8 = *(int32_t *)(unaff_RDI + 0x2f8);
  uVar9 = *(int32_t *)(unaff_RDI + 0x2fc);
  *(int32_t *)(unaff_RBP + -0x21) = uVar13;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar3;
  *(int32_t *)(unaff_RBP + -0x19) = uVar4;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  uVar13 = FUN_1806d7000(uVar13,uVar1);
  piVar2 = *(int **)(unaff_RBX + 0x58);
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar10 = FUN_1806c4320(uVar13,unaff_RBP + 0x67);
  if (cVar10 != '\0') {
    pbVar11 = (byte *)(**(code **)(**(longlong **)(unaff_RBX + 0x30) + 0x1a8))
                                (*(longlong **)(unaff_RBX + 0x30),unaff_RBP + 0x77);
    if (((*pbVar11 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))
                (*(uint64_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBP + 0x67));
    }
  }
  FUN_1806d6f60();
  return unaff_R14D + 0xf;
}



int FUN_1806cadd9(int32_t param_1)

{
  uint64_t uVar1;
  int *piVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  char cVar10;
  int *in_RAX;
  byte *pbVar11;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  int unaff_R14D;
  int32_t uVar12;
  
  *in_RAX = *in_RAX + 1;
  cVar10 = FUN_1806c4320(param_1,unaff_RBP + 0x67);
  if (cVar10 != '\0') {
    pbVar11 = (byte *)(**(code **)(**(longlong **)(unaff_RBX + 0x30) + 0x1a8))
                                (*(longlong **)(unaff_RBX + 0x30),unaff_RBP + 0x77);
    if (((*pbVar11 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))
                (*(uint64_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBP + 0x67));
    }
  }
  FUN_1806d6f60();
  uVar12 = *(int32_t *)(unaff_RDI + 0x2c0);
  uVar3 = *(int32_t *)(unaff_RDI + 0x2c4);
  uVar4 = *(int32_t *)(unaff_RDI + 0x2c8);
  uVar5 = *(int32_t *)(unaff_RDI + 0x2cc);
  uVar1 = *(uint64_t *)(unaff_RDI + 0x2c0);
  uVar6 = *(int32_t *)(unaff_RDI + 0x2d0);
  uVar7 = *(int32_t *)(unaff_RDI + 0x2d4);
  uVar8 = *(int32_t *)(unaff_RDI + 0x2d8);
  uVar9 = *(int32_t *)(unaff_RDI + 0x2dc);
  *(int32_t *)(unaff_RBP + -0x21) = uVar12;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar3;
  *(int32_t *)(unaff_RBP + -0x19) = uVar4;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  uVar12 = FUN_1806d7000(uVar12,uVar1);
  piVar2 = *(int **)(unaff_RBX + 0x58);
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar10 = FUN_1806c4320(uVar12,unaff_RBP + 0x67);
  if (cVar10 != '\0') {
    pbVar11 = (byte *)(**(code **)(**(longlong **)(unaff_RBX + 0x30) + 0x1a8))
                                (*(longlong **)(unaff_RBX + 0x30),unaff_RBP + 0x77);
    if (((*pbVar11 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))
                (*(uint64_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBP + 0x67));
    }
  }
  FUN_1806d6f60();
  uVar12 = *(int32_t *)(unaff_RDI + 0x2e0);
  uVar3 = *(int32_t *)(unaff_RDI + 0x2e4);
  uVar4 = *(int32_t *)(unaff_RDI + 0x2e8);
  uVar5 = *(int32_t *)(unaff_RDI + 0x2ec);
  uVar1 = *(uint64_t *)(unaff_RDI + 0x2e0);
  uVar6 = *(int32_t *)(unaff_RDI + 0x2f0);
  uVar7 = *(int32_t *)(unaff_RDI + 0x2f4);
  uVar8 = *(int32_t *)(unaff_RDI + 0x2f8);
  uVar9 = *(int32_t *)(unaff_RDI + 0x2fc);
  *(int32_t *)(unaff_RBP + -0x21) = uVar12;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar3;
  *(int32_t *)(unaff_RBP + -0x19) = uVar4;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  *(int32_t *)(unaff_RBP + -9) = uVar8;
  *(int32_t *)(unaff_RBP + -5) = uVar9;
  uVar12 = FUN_1806d7000(uVar12,uVar1);
  piVar2 = *(int **)(unaff_RBX + 0x58);
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar10 = FUN_1806c4320(uVar12,unaff_RBP + 0x67);
  if (cVar10 != '\0') {
    pbVar11 = (byte *)(**(code **)(**(longlong **)(unaff_RBX + 0x30) + 0x1a8))
                                (*(longlong **)(unaff_RBX + 0x30),unaff_RBP + 0x77);
    if (((*pbVar11 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))
                (*(uint64_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBP + 0x67));
    }
  }
  FUN_1806d6f60();
  return unaff_R14D + 0xf;
}



int FUN_1806caecb(void)

{
  char cVar1;
  int *in_RAX;
  byte *pbVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int unaff_R14D;
  
  *in_RAX = *in_RAX + 1;
  cVar1 = FUN_1806c4320();
  if (cVar1 != '\0') {
    pbVar2 = (byte *)(**(code **)(**(longlong **)(unaff_RBX + 0x30) + 0x1a8))
                               (*(longlong **)(unaff_RBX + 0x30),unaff_RBP + 0x77);
    if (((*pbVar2 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x19) - 0x2cU)) {
      (**(code **)(unaff_RBP + -9))
                (*(uint64_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBP + 0x67));
    }
  }
  FUN_1806d6f60();
  return unaff_R14D + 0xf;
}



int FUN_1806caf30(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  byte *pbVar5;
  void *puVar6;
  void *puVar7;
  uint *puVar8;
  int iVar9;
  int32_t uVar10;
  char *pcStackX_8;
  int8_t auStackX_10 [8];
  uint auStackX_18 [2];
  int8_t auStack_78 [4];
  int iStack_74;
  int iStack_70;
  int32_t uStack_6c;
  uint64_t *puStack_68;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  
  iStack_70 = *(int32_t *)(param_1 + 0x318);
  uStack_6c = *(int32_t *)(param_1 + 0x31c);
  puStack_68 = *(uint64_t **)(param_1 + 800);
  uStack_60 = *(int32_t *)(param_1 + 0x328);
  uStack_5c = *(int32_t *)(param_1 + 0x32c);
  uStack_58 = *(int32_t *)(param_1 + 0x330);
  uStack_54 = *(int32_t *)(param_1 + 0x334);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x318));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  iVar9 = 0;
  puVar7 = &unknown_var_1920_ptr;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &unknown_var_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar10 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      pbVar5 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                 ((longlong *)param_2[6],auStackX_18);
      if (((*pbVar5 & 1) == 0) || (1 < (int)puStack_68 - 0x2cU)) {
        (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],uVar10);
      }
    }
  }
  FUN_1806d6f60(param_2);
  iStack_70 = *(int32_t *)(param_1 + 0x338);
  uStack_6c = *(int32_t *)(param_1 + 0x33c);
  puStack_68 = *(uint64_t **)(param_1 + 0x340);
  uStack_60 = *(int32_t *)(param_1 + 0x348);
  uStack_5c = *(int32_t *)(param_1 + 0x34c);
  uStack_58 = *(int32_t *)(param_1 + 0x350);
  uStack_54 = *(int32_t *)(param_1 + 0x354);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x338));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &unknown_var_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar10 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      pbVar5 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                 ((longlong *)param_2[6],auStackX_18);
      if (((*pbVar5 & 1) == 0) || (1 < (int)puStack_68 - 0x2cU)) {
        (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],uVar10);
      }
    }
  }
  FUN_1806d6f60(param_2);
  iStack_70 = *(int32_t *)(param_1 + 0x358);
  uStack_6c = *(int32_t *)(param_1 + 0x35c);
  puStack_68 = *(uint64_t **)(param_1 + 0x360);
  uStack_60 = *(int32_t *)(param_1 + 0x368);
  uStack_5c = *(int32_t *)(param_1 + 0x36c);
  uStack_58 = *(int32_t *)(param_1 + 0x370);
  uStack_54 = *(int32_t *)(param_1 + 0x374);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x358));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &unknown_var_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      auStackX_18[0] = 0;
      FUN_1806d81c0(pcStackX_8,param_2[7],auStackX_18,0x180be0250);
      (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],auStackX_18);
    }
  }
  FUN_1806d6f60(param_2);
  iStack_70 = *(int32_t *)(param_1 + 0x378);
  uStack_6c = *(int32_t *)(param_1 + 0x37c);
  puStack_68 = *(uint64_t **)(param_1 + 0x380);
  uStack_60 = *(int32_t *)(param_1 + 0x388);
  uStack_5c = *(int32_t *)(param_1 + 0x38c);
  uStack_58 = *(int32_t *)(param_1 + 0x390);
  uStack_54 = *(int32_t *)(param_1 + 0x394);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x378));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &unknown_var_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar10 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      pbVar5 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                 ((longlong *)param_2[6],auStackX_18);
      if (((*pbVar5 & 1) == 0) || (1 < (int)puStack_68 - 0x2cU)) {
        plVar3 = (longlong *)param_2[6];
        (**(code **)(*plVar3 + 0x1a8))(plVar3,auStackX_18);
        if ((auStackX_18[0] & 1) == 0) {
          (*(code *)CONCAT44(uStack_54,uStack_58))(plVar3,uVar10);
        }
      }
    }
  }
  FUN_1806d6f60(param_2);
  auStackX_18[0] = 0x3b;
  puVar8 = auStackX_18;
  if ((uint *)param_2[0xb] != (uint *)0x0) {
    puVar8 = (uint *)param_2[0xb];
  }
  if ((int *)param_2[0xc] != (int *)0x0) {
    iVar9 = *(int *)param_2[0xc];
  }
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x398));
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x3a8));
  iStack_74 = iVar9 + 0xd4;
  iStack_70._0_1_ = 1;
  auStack_78[0] = 1;
  puStack_68 = (uint64_t *)(param_1 + 0x398);
  FUN_1806c13d0(param_2,*puVar8,auStack_78);
  *puVar8 = *puVar8 + 1;
  FUN_1806d6f60(param_2);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x3b0));
  iStack_74 = iVar9 + 0xd8;
  iStack_70 = (uint)iStack_70._1_3_ << 8;
  FUN_1806c13d0(param_2,*puVar8,auStack_78);
  FUN_1806d6f60(param_2);
  FUN_1806d6f60(param_2);
  iStack_70 = *(int32_t *)(param_1 + 0x3c8);
  uStack_6c = *(int32_t *)(param_1 + 0x3cc);
  puStack_68 = *(uint64_t **)(param_1 + 0x3d0);
  uStack_60 = *(int32_t *)(param_1 + 0x3d8);
  uStack_5c = *(int32_t *)(param_1 + 0x3dc);
  uStack_58 = *(int32_t *)(param_1 + 0x3e0);
  uStack_54 = *(int32_t *)(param_1 + 0x3e4);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x3c8));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar9 = *(int *)(*param_2 + 0x10);
    if (iVar9 != 0) {
      puVar7 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar9 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar7,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar10 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      pbVar5 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                 ((longlong *)param_2[6],auStackX_18);
      if (((*pbVar5 & 1) == 0) || (1 < (int)puStack_68 - 0x2cU)) {
        (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],uVar10);
      }
    }
  }
  FUN_1806d6f60(param_2);
  return param_3 + 8;
}



int FUN_1806caf46(uint64_t param_1,longlong *param_2,int param_3)

{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  char *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  char cVar13;
  longlong in_RAX;
  byte *pbVar14;
  longlong in_RCX;
  void *puVar15;
  longlong unaff_RBP;
  void *puVar16;
  uint64_t unaff_RDI;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  int *piVar17;
  int iVar18;
  uint64_t unaff_R15;
  int32_t uVar19;
  int32_t in_XMM0_Dc;
  int32_t in_XMM0_Dd;
  
  *(uint64_t *)(in_RAX + 0x20) = unaff_RDI;
  uVar19 = *(int32_t *)(in_RCX + 0x328);
  uVar7 = *(int32_t *)(in_RCX + 0x32c);
  uVar8 = *(int32_t *)(in_RCX + 0x330);
  uVar9 = *(int32_t *)(in_RCX + 0x334);
  uVar2 = *(uint64_t *)(in_RCX + 0x318);
  *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(int *)(unaff_RBP + -0x50) = (int)param_1;
  *(int *)(unaff_RBP + -0x4c) = (int)((ulonglong)param_1 >> 0x20);
  *(int32_t *)(unaff_RBP + -0x48) = in_XMM0_Dc;
  *(int32_t *)(unaff_RBP + -0x44) = in_XMM0_Dd;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  *(int32_t *)(unaff_RBP + -0x40) = uVar19;
  *(int32_t *)(unaff_RBP + -0x3c) = uVar7;
  *(int32_t *)(unaff_RBP + -0x38) = uVar8;
  *(int32_t *)(unaff_RBP + -0x34) = uVar9;
  FUN_1806d7000(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  iVar18 = 0;
  puVar16 = &unknown_var_1920_ptr;
  *(uint64_t *)(unaff_RBP + 0x28) = 0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar15 = &unknown_var_1920_ptr;
    }
    else {
      puVar15 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar13 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                       ((longlong *)param_2[5],puVar15,unaff_RBP + 0x28);
    if (((cVar13 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x28), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar19 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x30);
      pbVar14 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                  ((longlong *)param_2[6],unaff_RBP + 0x38);
      if (((*pbVar14 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x48) - 0x2cU)) {
        (**(code **)(unaff_RBP + -0x38))(param_2[6],uVar19);
      }
    }
  }
  FUN_1806d6f60(param_2);
  uVar19 = *(int32_t *)(in_RCX + 0x33c);
  uVar7 = *(int32_t *)(in_RCX + 0x340);
  uVar8 = *(int32_t *)(in_RCX + 0x344);
  uVar2 = *(uint64_t *)(in_RCX + 0x338);
  uVar9 = *(int32_t *)(in_RCX + 0x348);
  uVar10 = *(int32_t *)(in_RCX + 0x34c);
  uVar11 = *(int32_t *)(in_RCX + 0x350);
  uVar12 = *(int32_t *)(in_RCX + 0x354);
  *(int32_t *)(unaff_RBP + -0x50) = *(int32_t *)(in_RCX + 0x338);
  *(int32_t *)(unaff_RBP + -0x4c) = uVar19;
  *(int32_t *)(unaff_RBP + -0x48) = uVar7;
  *(int32_t *)(unaff_RBP + -0x44) = uVar8;
  *(int32_t *)(unaff_RBP + -0x40) = uVar9;
  *(int32_t *)(unaff_RBP + -0x3c) = uVar10;
  *(int32_t *)(unaff_RBP + -0x38) = uVar11;
  *(int32_t *)(unaff_RBP + -0x34) = uVar12;
  FUN_1806d7000(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x28) = 0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar15 = &unknown_var_1920_ptr;
    }
    else {
      puVar15 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar13 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                       ((longlong *)param_2[5],puVar15,unaff_RBP + 0x28);
    if (((cVar13 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x28), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar19 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x30);
      pbVar14 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                  ((longlong *)param_2[6],unaff_RBP + 0x38);
      if (((*pbVar14 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x48) - 0x2cU)) {
        (**(code **)(unaff_RBP + -0x38))(param_2[6],uVar19);
      }
    }
  }
  FUN_1806d6f60(param_2);
  uVar19 = *(int32_t *)(in_RCX + 0x35c);
  uVar7 = *(int32_t *)(in_RCX + 0x360);
  uVar8 = *(int32_t *)(in_RCX + 0x364);
  uVar2 = *(uint64_t *)(in_RCX + 0x358);
  uVar9 = *(int32_t *)(in_RCX + 0x368);
  uVar10 = *(int32_t *)(in_RCX + 0x36c);
  uVar11 = *(int32_t *)(in_RCX + 0x370);
  uVar12 = *(int32_t *)(in_RCX + 0x374);
  *(int32_t *)(unaff_RBP + -0x50) = *(int32_t *)(in_RCX + 0x358);
  *(int32_t *)(unaff_RBP + -0x4c) = uVar19;
  *(int32_t *)(unaff_RBP + -0x48) = uVar7;
  *(int32_t *)(unaff_RBP + -0x44) = uVar8;
  *(int32_t *)(unaff_RBP + -0x40) = uVar9;
  *(int32_t *)(unaff_RBP + -0x3c) = uVar10;
  *(int32_t *)(unaff_RBP + -0x38) = uVar11;
  *(int32_t *)(unaff_RBP + -0x34) = uVar12;
  FUN_1806d7000(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x28) = 0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar15 = &unknown_var_1920_ptr;
    }
    else {
      puVar15 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar13 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                       ((longlong *)param_2[5],puVar15,unaff_RBP + 0x28);
    if (((cVar13 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x28), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      lVar5 = param_2[7];
      *(int32_t *)(unaff_RBP + 0x38) = 0;
      FUN_1806d81c0(pcVar4,lVar5,unaff_RBP + 0x38,0x180be0250);
      lVar5 = param_2[6];
      *(int8_t *)(unaff_RBP + 0x38) = *(int8_t *)(unaff_RBP + 0x38);
      (**(code **)(unaff_RBP + -0x38))(lVar5,unaff_RBP + 0x38);
    }
  }
  FUN_1806d6f60(param_2);
  uVar19 = *(int32_t *)(in_RCX + 0x37c);
  uVar7 = *(int32_t *)(in_RCX + 0x380);
  uVar8 = *(int32_t *)(in_RCX + 900);
  uVar2 = *(uint64_t *)(in_RCX + 0x378);
  uVar9 = *(int32_t *)(in_RCX + 0x388);
  uVar10 = *(int32_t *)(in_RCX + 0x38c);
  uVar11 = *(int32_t *)(in_RCX + 0x390);
  uVar12 = *(int32_t *)(in_RCX + 0x394);
  *(int32_t *)(unaff_RBP + -0x50) = *(int32_t *)(in_RCX + 0x378);
  *(int32_t *)(unaff_RBP + -0x4c) = uVar19;
  *(int32_t *)(unaff_RBP + -0x48) = uVar7;
  *(int32_t *)(unaff_RBP + -0x44) = uVar8;
  *(int32_t *)(unaff_RBP + -0x40) = uVar9;
  *(int32_t *)(unaff_RBP + -0x3c) = uVar10;
  *(int32_t *)(unaff_RBP + -0x38) = uVar11;
  *(int32_t *)(unaff_RBP + -0x34) = uVar12;
  FUN_1806d7000(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x28) = 0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar15 = &unknown_var_1920_ptr;
    }
    else {
      puVar15 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar13 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                       ((longlong *)param_2[5],puVar15,unaff_RBP + 0x28);
    if (((cVar13 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x28), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar19 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x30);
      pbVar14 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                  ((longlong *)param_2[6],unaff_RBP + 0x38);
      if (((*pbVar14 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x48) - 0x2cU)) {
        plVar6 = (longlong *)param_2[6];
        (**(code **)(*plVar6 + 0x1a8))(plVar6,unaff_RBP + 0x38);
        if ((*(byte *)(unaff_RBP + 0x38) & 1) == 0) {
          (**(code **)(unaff_RBP + -0x38))(plVar6,uVar19);
        }
      }
    }
  }
  FUN_1806d6f60(param_2);
  piVar3 = (int *)param_2[0xb];
  *(int32_t *)(unaff_RBP + 0x38) = 0x3b;
  piVar17 = (int *)(unaff_RBP + 0x38);
  if (piVar3 != (int *)0x0) {
    piVar17 = piVar3;
  }
  if ((int *)param_2[0xc] != (int *)0x0) {
    iVar18 = *(int *)param_2[0xc];
  }
  FUN_1806d7000(param_2,*(uint64_t *)(in_RCX + 0x398));
  FUN_1806d7000(param_2,*(uint64_t *)(in_RCX + 0x3a8));
  iVar1 = *piVar17;
  *(int *)(unaff_RBP + -0x54) = iVar18 + 0xd4;
  *(int8_t *)(unaff_RBP + -0x50) = 1;
  *(uint64_t **)(unaff_RBP + -0x48) = (uint64_t *)(in_RCX + 0x398);
  *(int8_t *)(unaff_RBP + -0x58) = 1;
  FUN_1806c13d0(param_2,iVar1,unaff_RBP + -0x58);
  *piVar17 = *piVar17 + 1;
  FUN_1806d6f60(param_2);
  FUN_1806d7000(param_2,*(uint64_t *)(in_RCX + 0x3b0));
  iVar1 = *piVar17;
  *(int *)(unaff_RBP + -0x54) = iVar18 + 0xd8;
  *(int8_t *)(unaff_RBP + -0x50) = 0;
  FUN_1806c13d0(param_2,iVar1,unaff_RBP + -0x58);
  FUN_1806d6f60(param_2);
  FUN_1806d6f60(param_2);
  uVar19 = *(int32_t *)(in_RCX + 0x3cc);
  uVar7 = *(int32_t *)(in_RCX + 0x3d0);
  uVar8 = *(int32_t *)(in_RCX + 0x3d4);
  uVar2 = *(uint64_t *)(in_RCX + 0x3c8);
  uVar9 = *(int32_t *)(in_RCX + 0x3d8);
  uVar10 = *(int32_t *)(in_RCX + 0x3dc);
  uVar11 = *(int32_t *)(in_RCX + 0x3e0);
  uVar12 = *(int32_t *)(in_RCX + 0x3e4);
  *(int32_t *)(unaff_RBP + -0x50) = *(int32_t *)(in_RCX + 0x3c8);
  *(int32_t *)(unaff_RBP + -0x4c) = uVar19;
  *(int32_t *)(unaff_RBP + -0x48) = uVar7;
  *(int32_t *)(unaff_RBP + -0x44) = uVar8;
  *(int32_t *)(unaff_RBP + -0x40) = uVar9;
  *(int32_t *)(unaff_RBP + -0x3c) = uVar10;
  *(int32_t *)(unaff_RBP + -0x38) = uVar11;
  *(int32_t *)(unaff_RBP + -0x34) = uVar12;
  FUN_1806d7000(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  lVar5 = param_2[9];
  *(uint64_t *)(unaff_RBP + 0x28) = 0;
  if ((char)lVar5 != '\0') {
    iVar18 = *(int *)(*param_2 + 0x10);
    if (iVar18 != 0) {
      puVar16 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar18 - 1) * 0x18);
    }
    cVar13 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                       ((longlong *)param_2[5],puVar16,unaff_RBP + 0x28);
    if (((cVar13 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x28), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar19 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x30);
      pbVar14 = (byte *)(**(code **)(*(longlong *)param_2[6] + 0x1a8))
                                  ((longlong *)param_2[6],unaff_RBP + 0x38);
      if (((*pbVar14 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x48) - 0x2cU)) {
        (**(code **)(unaff_RBP + -0x38))(param_2[6],uVar19);
      }
    }
  }
  FUN_1806d6f60(param_2);
  return param_3 + 8;
}



int FUN_1806cb344(void)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  char cVar4;
  int *in_RAX;
  byte *pbVar5;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  int unaff_R13D;
  int32_t uVar6;
  
  *in_RAX = *in_RAX + 1;
  lVar3 = unaff_RBX[9];
  *(uint64_t *)(unaff_RBP + 0x28) = 0;
  if ((char)lVar3 != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      unaff_RSI = *(uint64_t *)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],unaff_RSI,unaff_RBP + 0x28);
    if (((cVar4 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x28), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != '\0')) {
      uVar6 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x30);
      pbVar5 = (byte *)(**(code **)(*(longlong *)unaff_RBX[6] + 0x1a8))
                                 ((longlong *)unaff_RBX[6],unaff_RBP + 0x38);
      if (((*pbVar5 & 1) == 0) || (1 < *(int *)(unaff_RBP + -0x48) - 0x2cU)) {
        (**(code **)(unaff_RBP + -0x38))(unaff_RBX[6],uVar6);
      }
    }
  }
  FUN_1806d6f60();
  return unaff_R13D + 8;
}



int FUN_1806cb3f0(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint64_t uVar4;
  void *puVar5;
  void *puVar6;
  int32_t uVar7;
  char *pcStackX_8;
  int8_t auStackX_10 [8];
  int32_t auStackX_18 [2];
  uint64_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  
  uStack_40 = *(int32_t *)(param_1 + 0x58);
  uStack_3c = *(int32_t *)(param_1 + 0x5c);
  uStack_38 = *(int32_t *)(param_1 + 0x60);
  uStack_34 = *(int32_t *)(param_1 + 100);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x48));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar6 = &unknown_var_1920_ptr;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &unknown_var_1920_ptr;
    }
    else {
      puVar5 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      FUN_1806c4d50(pcStackX_8,&uStack_98);
      uStack_78 = uStack_98;
      uStack_70 = uStack_90;
      uStack_68 = uStack_88;
      uStack_60 = uStack_80;
      uStack_64 = uStack_84;
      (*(code *)CONCAT44(uStack_34,uStack_38))(param_2[6],&uStack_78);
    }
  }
  FUN_1806d6f60(param_2);
  uStack_40 = *(int32_t *)(param_1 + 0x78);
  uStack_3c = *(int32_t *)(param_1 + 0x7c);
  uStack_38 = *(int32_t *)(param_1 + 0x80);
  uStack_34 = *(int32_t *)(param_1 + 0x84);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x68));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uStack_90 = 0;
  uStack_98 = 0;
  cVar3 = FUN_1806c43a0(param_2,&uStack_98);
  if (cVar3 != '\0') {
    (*(code *)CONCAT44(uStack_34,uStack_38))(param_2[6],&uStack_98);
  }
  FUN_1806d6f60(param_2);
  uStack_40 = *(int32_t *)(param_1 + 0x98);
  uStack_3c = *(int32_t *)(param_1 + 0x9c);
  uStack_38 = *(int32_t *)(param_1 + 0xa0);
  uStack_34 = *(int32_t *)(param_1 + 0xa4);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x88));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uStack_90 = 0;
  uStack_98 = 0;
  cVar3 = FUN_1806c43a0(param_2,&uStack_98);
  if (cVar3 != '\0') {
    (*(code *)CONCAT44(uStack_34,uStack_38))(param_2[6],&uStack_98);
  }
  FUN_1806d6f60(param_2);
  FUN_1806d7080(param_2,&unknown_var_1560_ptr);
  FUN_1806d6f60(param_2);
  uStack_40 = *(int32_t *)(param_1 + 0xd8);
  uStack_3c = *(int32_t *)(param_1 + 0xdc);
  uStack_38 = *(int32_t *)(param_1 + 0xe0);
  uStack_34 = *(int32_t *)(param_1 + 0xe4);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 200));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &unknown_var_1920_ptr;
    }
    else {
      puVar5 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*(code *)CONCAT44(uStack_34,uStack_38))(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  uStack_40 = *(int32_t *)(param_1 + 0xf8);
  uStack_3c = *(int32_t *)(param_1 + 0xfc);
  uStack_38 = *(int32_t *)(param_1 + 0x100);
  uStack_34 = *(int32_t *)(param_1 + 0x104);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0xe8));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &unknown_var_1920_ptr;
    }
    else {
      puVar5 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*(code *)CONCAT44(uStack_34,uStack_38))(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  uStack_40 = *(int32_t *)(param_1 + 0x118);
  uStack_3c = *(int32_t *)(param_1 + 0x11c);
  uStack_38 = *(int32_t *)(param_1 + 0x120);
  uStack_34 = *(int32_t *)(param_1 + 0x124);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x108));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &unknown_var_1920_ptr;
    }
    else {
      puVar5 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*(code *)CONCAT44(uStack_34,uStack_38))(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  uStack_40 = *(int32_t *)(param_1 + 0x138);
  uStack_3c = *(int32_t *)(param_1 + 0x13c);
  uStack_38 = *(int32_t *)(param_1 + 0x140);
  uStack_34 = *(int32_t *)(param_1 + 0x144);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x128));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &unknown_var_1920_ptr;
    }
    else {
      puVar5 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar7 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*(code *)CONCAT44(uStack_34,uStack_38))(param_2[6],uVar7);
    }
  }
  FUN_1806d6f60(param_2);
  uStack_40 = *(int32_t *)(param_1 + 0x158);
  uStack_3c = *(int32_t *)(param_1 + 0x15c);
  uStack_38 = *(int32_t *)(param_1 + 0x160);
  uStack_34 = *(int32_t *)(param_1 + 0x164);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x148));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &unknown_var_1920_ptr;
    }
    else {
      puVar5 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      auStackX_18[0] = 0;
      FUN_1806d81c0(pcStackX_8,param_2[7],auStackX_18,0x180be0070);
      (*(code *)CONCAT44(uStack_34,uStack_38))(param_2[6],auStackX_18);
    }
  }
  FUN_1806d6f60(param_2);
  uStack_40 = *(int32_t *)(param_1 + 400);
  uStack_3c = *(int32_t *)(param_1 + 0x194);
  uStack_38 = *(int32_t *)(param_1 + 0x198);
  uStack_34 = *(int32_t *)(param_1 + 0x19c);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x180));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar6 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if ((((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) &&
       ((longlong *)param_2[4] != (longlong *)0x0)) {
      uVar4 = (**(code **)(*(longlong *)param_2[4] + 8))();
      (*(code *)CONCAT44(uStack_34,uStack_38))(param_2[6],uVar4);
    }
  }
  FUN_1806d6f60(param_2);
  return param_3 + 0x10;
}








