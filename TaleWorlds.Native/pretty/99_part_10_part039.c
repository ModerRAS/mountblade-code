#include "TaleWorlds.Native.Split.h"

// 99_part_10_part039.c - 19 个函数

// 函数: void FUN_1806c0b60(longlong *param_1,uint64_t *param_2)
void FUN_1806c0b60(longlong *param_1,uint64_t *param_2)

{
  int32_t *puVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  longlong lVar5;
  int *piVar6;
  char cVar7;
  ulonglong uVar8;
  int8_t uVar9;
  void *puVar10;
  longlong lVar11;
  int32_t uVar12;
  int32_t uVar13;
  char *pcStackX_8;
  char *pcStackX_10;
  uint64_t uStack_68;
  uint uStack_60;
  int32_t uStack_5c;
  int8_t uStack_58;
  undefined7 uStack_57;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  lVar11 = *param_1;
  uStack_38 = *(int32_t *)(param_2 + 2);
  uStack_34 = *(int32_t *)((longlong)param_2 + 0x14);
  uStack_30 = *(int32_t *)(param_2 + 3);
  uStack_2c = *(int32_t *)((longlong)param_2 + 0x1c);
  uVar4 = *param_2;
  if (*(int *)(lVar11 + 0x10) != 0) {
    uVar8 = (ulonglong)(*(int *)(lVar11 + 0x10) - 1);
    if (*(char *)(*(longlong *)(lVar11 + 8) + 8 + uVar8 * 0x18) == '\0') {
      cVar7 = (char)param_1[9];
      if (cVar7 != '\0') {
        cVar7 = (**(code **)(*(longlong *)param_1[5] + 0x18))
                          ((longlong *)param_1[5],
                           *(uint64_t *)(*(longlong *)(lVar11 + 8) + uVar8 * 0x18));
        lVar11 = *param_1;
        *(char *)(param_1 + 9) = cVar7;
      }
      *(char *)(*(longlong *)(lVar11 + 8) + 0x10 + (ulonglong)(*(int *)(lVar11 + 0x10) - 1) * 0x18)
           = cVar7;
      *(char *)(*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x18)
           = (char)param_1[9];
      lVar11 = *param_1;
    }
  }
  uStack_58 = (int8_t)param_1[9];
  uVar2 = *(uint *)(lVar11 + 0x10);
  uStack_60 = uStack_60 & 0xffffff00;
  uStack_68 = uVar4;
  if (uVar2 < (*(uint *)(lVar11 + 0x14) & 0x7fffffff)) {
    lVar5 = *(longlong *)(lVar11 + 8);
    uStack_68._0_4_ = (int32_t)uVar4;
    uStack_68._4_4_ = (int32_t)((ulonglong)uVar4 >> 0x20);
    puVar1 = (int32_t *)(lVar5 + (ulonglong)uVar2 * 0x18);
    *puVar1 = (int32_t)uStack_68;
    puVar1[1] = uStack_68._4_4_;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    *(ulonglong *)(lVar5 + 0x10 + (ulonglong)uVar2 * 0x18) = CONCAT71(uStack_57,uStack_58);
    *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + 1;
  }
  else {
    FUN_1806d5b60(lVar11,&uStack_68);
  }
  piVar6 = (int *)param_1[0xb];
  if (piVar6 != (int *)0x0) {
    *piVar6 = *piVar6 + 1;
  }
  pcStackX_10 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar3 = *(int *)(*param_1 + 0x10);
    if (iVar3 == 0) {
      puVar10 = &UNK_18094c9c0;
    }
    else {
      puVar10 = *(void **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar3 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(longlong *)param_1[5] + 0x10))
                      ((longlong *)param_1[5],puVar10,&pcStackX_10);
    if (((cVar7 != '\0') && (pcStackX_10 != (char *)0x0)) && (*pcStackX_10 != '\0')) {
      pcStackX_8 = pcStackX_10;
      uVar12 = FUN_1806d80c0(pcStackX_10,&pcStackX_8);
      uVar13 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uStack_60 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uStack_68 = CONCAT44(uVar13,uVar12);
      (*(code *)CONCAT44(uStack_2c,uStack_30))(param_1[6],&uStack_68);
    }
  }
  lVar11 = *param_1;
  if (*(int *)(lVar11 + 0x10) != 0) {
    uVar8 = (ulonglong)(*(int *)(lVar11 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar11 + 8) + 8 + uVar8 * 0x18) != '\0') &&
       (*(char *)(*(longlong *)(lVar11 + 8) + 0x10 + uVar8 * 0x18) != '\0')) {
      (**(code **)(*(longlong *)param_1[5] + 0x48))();
      lVar11 = *param_1;
    }
    *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + -1;
    lVar11 = *param_1;
  }
  *(int8_t *)(param_1 + 9) = 1;
  if (*(int *)(lVar11 + 0x10) != 0) {
    uVar9 = (int8_t)param_1[9];
    if (*(char *)(*(longlong *)(lVar11 + 8) + 0x10 + (ulonglong)(*(int *)(lVar11 + 0x10) - 1) * 0x18
                 ) == '\0') {
      uVar9 = 0;
    }
    *(int8_t *)(param_1 + 9) = uVar9;
  }
  return;
}






// 函数: void FUN_1806c0ca4(uint64_t param_1)
void FUN_1806c0ca4(uint64_t param_1)

{
  ulonglong uVar1;
  char cVar2;
  longlong *unaff_RBX;
  char unaff_DIL;
  longlong lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uStackX_20;
  int32_t uStackX_24;
  code *in_stack_00000058;
  uint64_t uStack0000000000000090;
  
  uStack0000000000000090 = param_1;
  uVar4 = FUN_1806d80c0(param_1,&stack0x00000090);
  uVar5 = FUN_1806d80c0(uStack0000000000000090,&stack0x00000090);
  FUN_1806d80c0(uStack0000000000000090,&stack0x00000090);
  uStackX_20 = uVar4;
  uStackX_24 = uVar5;
  (*in_stack_00000058)(unaff_RBX[6],&uStackX_20);
  lVar3 = *unaff_RBX;
  if (*(int *)(lVar3 + 0x10) != 0) {
    uVar1 = (ulonglong)(*(int *)(lVar3 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar3 + 8) + 8 + uVar1 * 0x18) != unaff_DIL) &&
       (*(char *)(*(longlong *)(lVar3 + 8) + 0x10 + uVar1 * 0x18) != unaff_DIL)) {
      (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
      lVar3 = *unaff_RBX;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    lVar3 = *unaff_RBX;
  }
  *(int8_t *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(longlong *)(lVar3 + 8) + 0x10 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18)
        == unaff_DIL) {
      cVar2 = unaff_DIL;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}






// 函数: void FUN_1806c0d1c(void)
void FUN_1806c0d1c(void)

{
  ulonglong uVar1;
  char cVar2;
  longlong *unaff_RBX;
  char unaff_DIL;
  longlong lVar3;
  
  lVar3 = *unaff_RBX;
  if (*(int *)(lVar3 + 0x10) != 0) {
    uVar1 = (ulonglong)(*(int *)(lVar3 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar3 + 8) + 8 + uVar1 * 0x18) != unaff_DIL) &&
       (*(char *)(*(longlong *)(lVar3 + 8) + 0x10 + uVar1 * 0x18) != unaff_DIL)) {
      (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
      lVar3 = *unaff_RBX;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    lVar3 = *unaff_RBX;
  }
  *(int8_t *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(longlong *)(lVar3 + 8) + 0x10 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18)
        == unaff_DIL) {
      cVar2 = unaff_DIL;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}






// 函数: void FUN_1806c0d90(longlong *param_1,uint64_t *param_2)
void FUN_1806c0d90(longlong *param_1,uint64_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  uint64_t *puVar4;
  longlong *plVar5;
  int32_t *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  void *puVar9;
  int8_t auStackX_8 [8];
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  uint64_t uStack_48;
  uint uStack_40;
  int32_t uStack_3c;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  
  lVar8 = *param_1;
  uStack_20 = *(int32_t *)(param_2 + 2);
  uStack_1c = *(int32_t *)((longlong)param_2 + 0x14);
  uStack_18 = *(int32_t *)(param_2 + 3);
  uStack_14 = *(int32_t *)((longlong)param_2 + 0x1c);
  uVar2 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar7 = (ulonglong)(*(int *)(lVar8 + 0x10) - 1);
    if (*(char *)(*(longlong *)(lVar8 + 8) + 8 + uVar7 * 0x10) == '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x18))
                ((longlong *)param_1[1],*(uint64_t *)(*(longlong *)(lVar8 + 8) + uVar7 * 0x10));
      *(int8_t *)
       (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
      lVar8 = *param_1;
    }
  }
  uStack_40 = uStack_40 & 0xffffff00;
  uStack_48 = uVar2;
  if (*(uint *)(lVar8 + 0x10) < (*(uint *)(lVar8 + 0x14) & 0x7fffffff)) {
    uStack_48._0_4_ = (int32_t)uVar2;
    uStack_48._4_4_ = (int32_t)((ulonglong)uVar2 >> 0x20);
    puVar6 = (int32_t *)(*(longlong *)(lVar8 + 8) + (ulonglong)*(uint *)(lVar8 + 0x10) * 0x10);
    *puVar6 = (int32_t)uStack_48;
    puVar6[1] = uStack_48._4_4_;
    puVar6[2] = uStack_40;
    puVar6[3] = uStack_3c;
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
  }
  else {
    FUN_1806d5a70(lVar8,&uStack_48);
  }
  piVar3 = (int *)param_1[5];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  puVar6 = (int32_t *)(*(code *)CONCAT44(uStack_1c,uStack_20))(&uStack_48,param_1[2]);
  uStack_58 = *puVar6;
  uStack_54 = puVar6[1];
  uStack_50 = puVar6[2];
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &UNK_18094c9c0;
  }
  else {
    puVar9 = *(void **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_1[3];
  plVar5 = (longlong *)param_1[1];
  FUN_1806d3290(puVar4,&uStack_58);
  auStackX_8[0] = 0;
  (**(code **)*puVar4)(puVar4,auStackX_8,1);
  (**(code **)(*plVar5 + 0x10))(plVar5,puVar9,puVar4[4]);
  puVar4[3] = 0;
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar8 + 8) + 8 + (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
      lVar8 = *param_1;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c0f20(longlong *param_1,uint64_t *param_2)
void FUN_1806c0f20(longlong *param_1,uint64_t *param_2)

{
  int32_t *puVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  longlong lVar5;
  int *piVar6;
  char cVar7;
  ulonglong uVar8;
  int8_t uVar9;
  void *puVar10;
  longlong lVar11;
  int32_t uVar12;
  char *pcStackX_8;
  int8_t auStackX_10 [8];
  uint64_t uStack_48;
  uint uStack_40;
  int32_t uStack_3c;
  int8_t uStack_38;
  undefined7 uStack_37;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  lVar11 = *param_1;
  uStack_18 = *(int32_t *)(param_2 + 2);
  uStack_14 = *(int32_t *)((longlong)param_2 + 0x14);
  uStack_10 = *(int32_t *)(param_2 + 3);
  uStack_c = *(int32_t *)((longlong)param_2 + 0x1c);
  uVar4 = *param_2;
  if (*(int *)(lVar11 + 0x10) != 0) {
    uVar8 = (ulonglong)(*(int *)(lVar11 + 0x10) - 1);
    if (*(char *)(*(longlong *)(lVar11 + 8) + 8 + uVar8 * 0x18) == '\0') {
      cVar7 = (char)param_1[9];
      if (cVar7 != '\0') {
        cVar7 = (**(code **)(*(longlong *)param_1[5] + 0x18))
                          ((longlong *)param_1[5],
                           *(uint64_t *)(*(longlong *)(lVar11 + 8) + uVar8 * 0x18));
        lVar11 = *param_1;
        *(char *)(param_1 + 9) = cVar7;
      }
      *(char *)(*(longlong *)(lVar11 + 8) + 0x10 + (ulonglong)(*(int *)(lVar11 + 0x10) - 1) * 0x18)
           = cVar7;
      *(char *)(*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x18)
           = (char)param_1[9];
      lVar11 = *param_1;
    }
  }
  uStack_38 = (int8_t)param_1[9];
  uVar2 = *(uint *)(lVar11 + 0x10);
  uStack_40 = uStack_40 & 0xffffff00;
  uStack_48 = uVar4;
  if (uVar2 < (*(uint *)(lVar11 + 0x14) & 0x7fffffff)) {
    lVar5 = *(longlong *)(lVar11 + 8);
    uStack_48._0_4_ = (int32_t)uVar4;
    uStack_48._4_4_ = (int32_t)((ulonglong)uVar4 >> 0x20);
    puVar1 = (int32_t *)(lVar5 + (ulonglong)uVar2 * 0x18);
    *puVar1 = (int32_t)uStack_48;
    puVar1[1] = uStack_48._4_4_;
    puVar1[2] = uStack_40;
    puVar1[3] = uStack_3c;
    *(ulonglong *)(lVar5 + 0x10 + (ulonglong)uVar2 * 0x18) = CONCAT71(uStack_37,uStack_38);
    *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + 1;
  }
  else {
    FUN_1806d5b60(lVar11,&uStack_48);
  }
  piVar6 = (int *)param_1[0xb];
  if (piVar6 != (int *)0x0) {
    *piVar6 = *piVar6 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar3 = *(int *)(*param_1 + 0x10);
    if (iVar3 == 0) {
      puVar10 = &UNK_18094c9c0;
    }
    else {
      puVar10 = *(void **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar3 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(longlong *)param_1[5] + 0x10))
                      ((longlong *)param_1[5],puVar10,&pcStackX_8);
    if (((cVar7 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar12 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*(code *)CONCAT44(uStack_c,uStack_10))(param_1[6],uVar12);
    }
  }
  lVar11 = *param_1;
  if (*(int *)(lVar11 + 0x10) != 0) {
    uVar8 = (ulonglong)(*(int *)(lVar11 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar11 + 8) + 8 + uVar8 * 0x18) != '\0') &&
       (*(char *)(*(longlong *)(lVar11 + 8) + 0x10 + uVar8 * 0x18) != '\0')) {
      (**(code **)(*(longlong *)param_1[5] + 0x48))();
      lVar11 = *param_1;
    }
    *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + -1;
    lVar11 = *param_1;
  }
  *(int8_t *)(param_1 + 9) = 1;
  if (*(int *)(lVar11 + 0x10) != 0) {
    uVar9 = (int8_t)param_1[9];
    if (*(char *)(*(longlong *)(lVar11 + 8) + 0x10 + (ulonglong)(*(int *)(lVar11 + 0x10) - 1) * 0x18
                 ) == '\0') {
      uVar9 = 0;
    }
    *(int8_t *)(param_1 + 9) = uVar9;
  }
  return;
}






// 函数: void FUN_1806c10d0(longlong *param_1,uint64_t *param_2)
void FUN_1806c10d0(longlong *param_1,uint64_t *param_2)

{
  int32_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  int *piVar4;
  uint64_t *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  void *puVar9;
  int32_t uVar10;
  int8_t auStackX_8 [8];
  uint64_t uStack_48;
  uint uStack_40;
  int32_t uStack_3c;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  
  lVar8 = *param_1;
  uStack_20 = *(int32_t *)(param_2 + 2);
  uStack_1c = *(int32_t *)((longlong)param_2 + 0x14);
  uStack_18 = *(int32_t *)(param_2 + 3);
  uStack_14 = *(int32_t *)((longlong)param_2 + 0x1c);
  uVar3 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar7 = (ulonglong)(*(int *)(lVar8 + 0x10) - 1);
    if (*(char *)(*(longlong *)(lVar8 + 8) + 8 + uVar7 * 0x10) == '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x18))
                ((longlong *)param_1[1],*(uint64_t *)(*(longlong *)(lVar8 + 8) + uVar7 * 0x10));
      *(int8_t *)
       (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
      lVar8 = *param_1;
    }
  }
  uStack_40 = uStack_40 & 0xffffff00;
  uStack_48 = uVar3;
  if (*(uint *)(lVar8 + 0x10) < (*(uint *)(lVar8 + 0x14) & 0x7fffffff)) {
    uStack_48._0_4_ = (int32_t)uVar3;
    uStack_48._4_4_ = (int32_t)((ulonglong)uVar3 >> 0x20);
    puVar1 = (int32_t *)(*(longlong *)(lVar8 + 8) + (ulonglong)*(uint *)(lVar8 + 0x10) * 0x10);
    *puVar1 = (int32_t)uStack_48;
    puVar1[1] = uStack_48._4_4_;
    puVar1[2] = uStack_40;
    puVar1[3] = uStack_3c;
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
  }
  else {
    FUN_1806d5a70(lVar8,&uStack_48);
  }
  piVar4 = (int *)param_1[5];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  uVar10 = (*(code *)CONCAT44(uStack_1c,uStack_20))(param_1[2]);
  iVar2 = *(int *)(*param_1 + 0x10);
  if (iVar2 == 0) {
    puVar9 = &UNK_18094c9c0;
  }
  else {
    puVar9 = *(void **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar2 - 1) * 0x10);
  }
  puVar5 = (uint64_t *)param_1[3];
  plVar6 = (longlong *)param_1[1];
  FUN_1806d3300(puVar5,uVar10);
  auStackX_8[0] = 0;
  (**(code **)*puVar5)(puVar5,auStackX_8,1);
  (**(code **)(*plVar6 + 0x10))(plVar6,puVar9,puVar5[4]);
  puVar5[3] = 0;
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar8 + 8) + 8 + (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
      lVar8 = *param_1;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c1230(longlong *param_1,longlong *param_2)
void FUN_1806c1230(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  uint64_t uVar7;
  void *puVar8;
  void *puStack_38;
  longlong lStack_30;
  longlong lStack_28;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  
  lStack_30 = *param_2;
  lStack_28 = param_2[1];
  uStack_20 = (int32_t)param_2[2];
  uStack_1c = *(int32_t *)((longlong)param_2 + 0x14);
  uStack_18 = (int32_t)param_2[3];
  uStack_14 = *(int32_t *)((longlong)param_2 + 0x1c);
  FUN_1806d7170((int)*param_2,*param_2);
  piVar2 = (int *)param_1[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  lVar6 = (*(code *)CONCAT44(uStack_1c,uStack_20))(param_1[2]);
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &UNK_18094c9c0;
  }
  else {
    puVar8 = *(void **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  plVar3 = (longlong *)param_1[4];
  plVar4 = (longlong *)param_1[1];
  if (*(short *)(lVar6 + 8) == 3) {
    cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,lVar6);
    if (cVar5 == '\0') {
      uVar7 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar7,0x20,&UNK_18094c7d0,0x32,&UNK_18094c770,puVar8);
    }
    lStack_28 = (**(code **)(*plVar3 + 0x68))(plVar3,lVar6);
    puStack_38 = &UNK_18094bee8;
  }
  else {
    if (*(short *)(lVar6 + 8) != 4) goto LAB_1806c1383;
    cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,lVar6);
    if (cVar5 == '\0') {
      uVar7 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar7,0x20,&UNK_18094c7d0,0x32,&UNK_18094c770,puVar8);
    }
    lStack_28 = (**(code **)(*plVar3 + 0x68))(plVar3,lVar6);
    puStack_38 = &UNK_18094bf00;
  }
  if (lStack_28 == 0) {
    lStack_28 = lVar6;
  }
  lStack_30 = lVar6;
  (**(code **)(*plVar4 + 8))(plVar4,puVar8,&puStack_38);
LAB_1806c1383:
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
      lVar6 = *param_1;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c123b(uint64_t param_1,uint64_t *param_2)
void FUN_1806c123b(uint64_t param_1,uint64_t *param_2)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  char cVar9;
  longlong in_RAX;
  longlong lVar10;
  uint64_t uVar11;
  longlong *in_RCX;
  void *puVar12;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t unaff_R14;
  uint64_t in_XMM0_Qb;
  void *in_stack_00000030;
  longlong in_stack_00000038;
  longlong in_stack_00000040;
  code *in_stack_00000048;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  uVar5 = *(int32_t *)(param_2 + 2);
  uVar6 = *(int32_t *)((longlong)param_2 + 0x14);
  uVar7 = *(int32_t *)(param_2 + 3);
  uVar8 = *(int32_t *)((longlong)param_2 + 0x1c);
  uVar11 = *param_2;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x30) = param_1;
  *(uint64_t *)(in_RAX + -0x28) = in_XMM0_Qb;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R14;
  *(int32_t *)(in_RAX + -0x20) = uVar5;
  *(int32_t *)(in_RAX + -0x1c) = uVar6;
  *(int32_t *)(in_RAX + -0x18) = uVar7;
  *(int32_t *)(in_RAX + -0x14) = uVar8;
  FUN_1806d7170(in_RCX,uVar11);
  piVar2 = (int *)in_RCX[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  lVar10 = (*in_stack_00000048)(in_RCX[2]);
  iVar1 = *(int *)(*in_RCX + 0x10);
  if (iVar1 == 0) {
    puVar12 = &UNK_18094c9c0;
  }
  else {
    puVar12 = *(void **)(*(longlong *)(*in_RCX + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  plVar3 = (longlong *)in_RCX[4];
  plVar4 = (longlong *)in_RCX[1];
  if (*(short *)(lVar10 + 8) == 3) {
    cVar9 = (**(code **)(*plVar3 + 0x20))(plVar3,lVar10);
    if (cVar9 == '\0') {
      uVar11 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar11,0x20,&UNK_18094c7d0,0x32,&UNK_18094c770);
    }
    in_stack_00000040 = (**(code **)(*plVar3 + 0x68))(plVar3,lVar10);
    in_stack_00000030 = &UNK_18094bee8;
  }
  else {
    if (*(short *)(lVar10 + 8) != 4) goto LAB_1806c1383;
    cVar9 = (**(code **)(*plVar3 + 0x20))(plVar3,lVar10);
    if (cVar9 == '\0') {
      uVar11 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar11,0x20,&UNK_18094c7d0,0x32,&UNK_18094c770);
    }
    in_stack_00000040 = (**(code **)(*plVar3 + 0x68))(plVar3,lVar10);
    in_stack_00000030 = &UNK_18094bf00;
  }
  if (in_stack_00000040 == 0) {
    in_stack_00000040 = lVar10;
  }
  in_stack_00000038 = lVar10;
  (**(code **)(*plVar4 + 8))(plVar4,puVar12,&stack0x00000030);
LAB_1806c1383:
  lVar10 = *in_RCX;
  if (*(int *)(lVar10 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar10 + 8) + 8 + (ulonglong)(*(int *)(lVar10 + 0x10) - 1) * 0x10)
        != '\0') {
      (**(code **)(*(longlong *)in_RCX[1] + 0x20))();
      lVar10 = *in_RCX;
    }
    *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c13a7(uint64_t param_1,longlong param_2)
void FUN_1806c13a7(uint64_t param_1,longlong param_2)

{
  int in_EAX;
  longlong *unaff_RBX;
  
  if (*(char *)(*(longlong *)(param_2 + 8) + 8 + (ulonglong)(in_EAX - 1) * 0x10) != '\0') {
    (**(code **)(*(longlong *)unaff_RBX[1] + 0x20))();
    param_2 = *unaff_RBX;
  }
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  return;
}






// 函数: void FUN_1806c13d0(longlong *param_1,uint64_t param_2,longlong param_3)
void FUN_1806c13d0(longlong *param_1,uint64_t param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int32_t uVar4;
  byte *pbVar5;
  void *puVar6;
  char *pcStackX_8;
  char *pcStackX_20;
  
  pcStackX_8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(void **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],puVar6,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      pcStackX_20 = pcStackX_8;
      uVar4 = strtoul(pcStackX_8,&pcStackX_20,10);
      pbVar5 = (byte *)(**(code **)(*(longlong *)param_1[6] + 0x1a8))
                                 ((longlong *)param_1[6],&pcStackX_8);
      if (((*pbVar5 & 1) == 0) || (1 < *(int *)(*(longlong *)(param_3 + 0x10) + 8) - 0x2cU)) {
        lVar2 = param_1[6];
        (**(code **)(*(longlong *)(param_3 + 0x10) + 0x28))(lVar2,&pcStackX_20,&pcStackX_8);
        if (*(char *)(param_3 + 8) != '\0') {
          (**(code **)(*(longlong *)(param_3 + 0x10) + 0x20))
                    (lVar2,uVar4,(ulonglong)pcStackX_8 & 0xffffffff);
          return;
        }
        (**(code **)(*(longlong *)(param_3 + 0x10) + 0x20))
                  (lVar2,(ulonglong)pcStackX_20 & 0xffffffff,uVar4);
      }
    }
  }
  return;
}






// 函数: void FUN_1806c1448(ulonglong param_1)
void FUN_1806c1448(ulonglong param_1)

{
  uint64_t uVar1;
  int32_t uVar2;
  byte *pbVar3;
  longlong unaff_RBX;
  longlong unaff_RDI;
  int32_t in_stack_00000030;
  ulonglong uStack0000000000000048;
  
  uStack0000000000000048 = param_1;
  uVar2 = strtoul(param_1,&stack0x00000048);
  pbVar3 = (byte *)(**(code **)(**(longlong **)(unaff_RBX + 0x30) + 0x1a8))
                             (*(longlong **)(unaff_RBX + 0x30),&stack0x00000030);
  if (((*pbVar3 & 1) == 0) || (1 < *(int *)(*(longlong *)(unaff_RDI + 0x10) + 8) - 0x2cU)) {
    uVar1 = *(uint64_t *)(unaff_RBX + 0x30);
    (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x28))(uVar1,&stack0x00000048,&stack0x00000030);
    if (*(char *)(unaff_RDI + 8) != '\0') {
      (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x20))(uVar1,uVar2,in_stack_00000030);
      return;
    }
    (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x20))
              (uVar1,uStack0000000000000048 & 0xffffffff,uVar2);
  }
  return;
}






// 函数: void FUN_1806c14c5(uint64_t param_1)
void FUN_1806c14c5(uint64_t param_1)

{
  longlong in_RAX;
  int32_t unaff_ESI;
  int32_t in_stack_00000048;
  
  (**(code **)(in_RAX + 0x20))(param_1,in_stack_00000048,unaff_ESI);
  return;
}






// 函数: void FUN_1806c14d4(void)
void FUN_1806c14d4(void)

{
  return;
}






// 函数: void FUN_1806c14e0(longlong *param_1,uint64_t param_2,longlong param_3)
void FUN_1806c14e0(longlong *param_1,uint64_t param_2,longlong param_3)

{
  int iVar1;
  uint64_t *puVar2;
  longlong *plVar3;
  uint uVar4;
  void *puVar5;
  uint auStackX_8 [2];
  uint auStackX_18 [4];
  
  (**(code **)(*(longlong *)(param_3 + 0x10) + 0x28))(param_1[2],auStackX_18,auStackX_8);
  uVar4 = auStackX_8[0];
  if (*(char *)(param_3 + 8) != '\0') {
    uVar4 = auStackX_18[0];
  }
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 == 0) {
    puVar5 = &UNK_18094c9c0;
  }
  else {
    puVar5 = *(void **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_1[3];
  plVar3 = (longlong *)param_1[1];
  FUN_1806c4e00(puVar2,&UNK_180a063a0,uVar4);
  auStackX_8[0] = auStackX_8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar5,puVar2[4]);
  puVar2[3] = 0;
  return;
}






// 函数: void FUN_1806c1590(longlong *param_1,uint64_t param_2,longlong param_3)
void FUN_1806c1590(longlong *param_1,uint64_t param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  void *puVar4;
  int32_t uVar5;
  char *pcStackX_8;
  int32_t auStackX_20 [2];
  
  pcStackX_8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],puVar4,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar5 = FUN_1806d80c0(pcStackX_8,auStackX_20);
      lVar2 = param_1[6];
      (**(code **)(*(longlong *)(param_3 + 0x10) + 0x28))(lVar2,auStackX_20,&pcStackX_8);
      if (*(char *)(param_3 + 8) != '\0') {
        (**(code **)(*(longlong *)(param_3 + 0x10) + 0x20))(lVar2,uVar5,pcStackX_8._0_4_);
        return;
      }
      (**(code **)(*(longlong *)(param_3 + 0x10) + 0x20))(lVar2,auStackX_20[0],uVar5);
    }
  }
  return;
}






// 函数: void FUN_1806c15fb(void)
void FUN_1806c15fb(void)

{
  uint64_t uVar1;
  longlong unaff_RBX;
  longlong unaff_RDI;
  int32_t uVar2;
  int32_t in_stack_00000040;
  int32_t in_stack_00000058;
  
  uVar2 = FUN_1806d80c0();
  uVar1 = *(uint64_t *)(unaff_RBX + 0x30);
  (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x28))(uVar1,&stack0x00000058,&stack0x00000040);
  if (*(char *)(unaff_RDI + 8) != '\0') {
    (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x20))(uVar1,uVar2,in_stack_00000040);
    return;
  }
  (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x20))(uVar1,in_stack_00000058,uVar2);
  return;
}






// 函数: void FUN_1806c1649(uint64_t param_1)
void FUN_1806c1649(uint64_t param_1)

{
  longlong in_RAX;
  int32_t in_stack_00000058;
  
  (**(code **)(in_RAX + 0x20))(param_1,in_stack_00000058);
  return;
}






// 函数: void FUN_1806c165a(void)
void FUN_1806c165a(void)

{
  return;
}






// 函数: void FUN_1806c1670(longlong *param_1,uint64_t param_2)
void FUN_1806c1670(longlong *param_1,uint64_t param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  longlong lVar4;
  int iVar5;
  void *puVar6;
  int32_t uVar7;
  int8_t auStackX_8 [8];
  longlong lStack_158;
  longlong *plStack_150;
  uint64_t uStack_148;
  uint64_t *puStack_140;
  longlong lStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  longlong lStack_120;
  longlong *plStack_118;
  uint64_t uStack_110;
  uint64_t *puStack_108;
  longlong lStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  int8_t auStack_e8 [160];
  uint64_t uStack_48;
  code *pcStack_38;
  
  lVar1 = *param_1;
  plVar2 = (longlong *)param_1[1];
  puVar3 = (uint64_t *)param_1[3];
  lVar4 = param_1[4];
  FUN_1806f4110(auStack_e8);
  uStack_130 = 0;
  uStack_128 = 0;
  lStack_158 = lVar1;
  plStack_150 = plVar2;
  uStack_148 = param_2;
  puStack_140 = puVar3;
  lStack_138 = lVar4;
  FUN_1806d01f0(auStack_e8,&lStack_158,0);
  uStack_f8 = 0;
  uStack_f0 = 0;
  lStack_120 = lVar1;
  plStack_118 = plVar2;
  uStack_110 = param_2;
  puStack_108 = puVar3;
  lStack_100 = lVar4;
  FUN_1806d7170(&lStack_120,uStack_48);
  uVar7 = (*pcStack_38)(param_2);
  if (*(int *)(lVar1 + 0x10) == 0) {
    puVar6 = &UNK_18094c9c0;
  }
  else {
    puVar6 = *(void **)
              (*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10);
  }
  FUN_1806d3300(puVar3,uVar7);
  auStackX_8[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_8,1);
  (**(code **)(*plVar2 + 0x10))(plVar2,puVar6,puVar3[4]);
  puVar3[3] = 0;
  iVar5 = *(int *)(lVar1 + 0x10);
  if (iVar5 != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(iVar5 - 1) * 0x10) != '\0') {
      (**(code **)(*plVar2 + 0x20))(plVar2);
      iVar5 = *(int *)(lVar1 + 0x10);
    }
    *(int *)(lVar1 + 0x10) = iVar5 + -1;
  }
  return;
}






