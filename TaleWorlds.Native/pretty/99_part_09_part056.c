#include "TaleWorlds.Native.Split.h"

// $fun 的语义化别名
#define $alias_name $fun


// 99_part_09_part056.c - 7 个函数

// 函数: void FUN_1805d98c0(int32_t *param_1)
void FUN_1805d98c0(int32_t *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int *piVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int32_t auStackX_8 [2];
  int32_t auStackX_10 [2];
  int64_t lStackX_18;
  int64_t lStackX_20;
  uint64_t in_stack_ffffffffffffff78;
  int32_t uVar15;
  uint64_t in_stack_ffffffffffffff80;
  int32_t uVar16;
  uint64_t in_stack_ffffffffffffff88;
  uint uVar17;
  uint64_t auStack_58 [3];
  
  uVar16 = (int32_t)((uint64_t)in_stack_ffffffffffffff80 >> 0x20);
  uVar15 = (int32_t)((uint64_t)in_stack_ffffffffffffff78 >> 0x20);
  uVar17 = (uint)((uint64_t)in_stack_ffffffffffffff88 >> 0x20);
  plVar1 = *(int64_t **)(param_1 + 8);
  lVar2 = *plVar1;
  lVar14 = *(int64_t *)(lVar2 + 0x9d8);
  lStackX_20 = *(int64_t *)(lVar2 + 0x8d8);
  if (lVar14 != 0) {
    piVar10 = (int *)plVar1[0x422];
    if ((plVar1[0x423] - (int64_t)piVar10 >> 2 != 0) &&
       (lVar3 = *(int64_t *)(lStackX_20 + 0x18),
       *(int64_t *)(lVar3 + 0x2ee8) - *(int64_t *)(lVar3 + 12000) >> 3 != 0)) {
      for (; piVar10 != (int *)plVar1[0x423]; piVar10 = piVar10 + 1) {
        if (*piVar10 == *(int *)(lVar14 + 0x130)) {
          lVar12 = lVar3 + 0x2a68;
          lVar13 = *(int64_t *)(lVar2 + 0x20) + 0xc;
          iVar7 = FUN_1803965f0(lVar12);
          lVar8 = (int64_t)iVar7;
          FUN_18038de80(lVar12,iVar7);
          *(int32_t *)(lVar14 + 0x40 + lVar8 * 4) = *(int32_t *)(lVar3 + 0x2fc0 + lVar8 * 4);
          auStackX_10[0] = 0x4b18967f;
          lStackX_18 = 0;
          auStackX_8[0] = 0;
          FUN_1803963e0(lVar12,lVar14,plVar1 + 0x422,&lStackX_18,auStackX_10,iVar7,
                        CONCAT44(uVar15,*(int32_t *)(lVar14 + 0x130)),lVar13,
                        (uint64_t)uVar17 << 0x20,auStackX_8);
          uVar16 = (int32_t)((uint64_t)lVar13 >> 0x20);
          *(int32_t *)(lVar3 + 0x2fe0 + lVar8 * 4) = 0;
          lVar14 = lStackX_18;
          break;
        }
      }
    }
  }
  lVar3 = lStackX_20;
  auStack_58[0] = *(uint64_t *)(param_1 + 0x18);
  lVar8 = SystemCore_ErrorHandler(param_1 + 0x12);
  puVar11 = (uint64_t *)(param_1 + 0x46);
  if (*(char *)(param_1 + 0x44f) == '\0') {
    *(uint64_t *)(param_1 + 0x448) = *(uint64_t *)(param_1 + 0x446);
    *(int8_t *)(param_1 + 0x44f) = 1;
  }
  cVar5 = '\0';
  param_1[0x44e] = 0;
  if ((lVar14 != 0) && (lVar8 != 0)) {
    cVar5 = FUN_180393610(*(int64_t *)(lVar3 + 0x18) + 0x2a68,lVar14,lVar8,
                          *(int64_t *)(lVar2 + 0x20) + 0xc,auStack_58,
                          *(int32_t *)(*(int64_t *)(lVar2 + 0x20) + 0x1d0),puVar11,
                          CONCAT44(uVar16,0x49742400),*(int64_t *)(param_1 + 8) + 0x2110,
                          (int64_t)param_1 + 0x1147,0x3f800000);
    param_1[0x450] = 0;
    param_1[0x45e] = 0;
  }
  if (*(char *)(param_1 + 0x44f) == '\0') {
    iVar7 = (int)(*(int64_t *)(param_1 + 0x448) - *(int64_t *)(param_1 + 0x446) >> 5);
  }
  else {
    iVar7 = param_1[0x44e];
  }
  bVar4 = 1 < iVar7;
  cVar6 = *(char *)(param_1 + 0x451);
  if ((bool)*(char *)(param_1 + 0x451) != bVar4) {
    *(bool *)(param_1 + 0x451) = bVar4;
    param_1[0x45e] = 0;
    *(int8_t *)((int64_t)param_1 + 0x1145) = 0;
    cVar6 = bVar4;
  }
  *param_1 = 0;
  if (cVar5 != '\0') {
    if (*(char *)(param_1 + 0x44f) == '\0') {
      iVar7 = (int)(*(int64_t *)(param_1 + 0x448) - *(int64_t *)(param_1 + 0x446) >> 5);
    }
    else {
      iVar7 = param_1[0x44e];
    }
    if (iVar7 < 2) {
      *(int8_t *)((int64_t)param_1 + 0x1145) = 1;
    }
    FUN_1805da2b0(param_1);
    FUN_1805d9c90(param_1);
    cVar6 = *(char *)(param_1 + 0x451);
  }
  if (cVar6 != '\0') {
    if (*(char *)(param_1 + 0x44f) == '\0') {
      puVar11 = *(uint64_t **)(param_1 + 0x446);
    }
    uVar9 = puVar11[(int64_t)(int)param_1[0x450] * 4];
    goto LAB_1805d9c6a;
  }
  if (*(char *)((int64_t)param_1 + 0x1147) == '\0') {
LAB_1805d9c26:
    if (*(char *)((int64_t)param_1 + 0x1145) == '\0') {
      return;
    }
    cVar5 = *(char *)(param_1 + 0x44f);
    if (cVar5 == '\0') {
      iVar7 = (int)(*(int64_t *)(param_1 + 0x448) - *(int64_t *)(param_1 + 0x446) >> 5);
    }
    else {
      iVar7 = param_1[0x44e];
    }
    if (iVar7 != 1) {
      return;
    }
  }
  else {
    cVar5 = *(char *)(param_1 + 0x44f);
    if (cVar5 == '\0') {
      iVar7 = (int)(*(int64_t *)(param_1 + 0x448) - *(int64_t *)(param_1 + 0x446) >> 5);
    }
    else {
      iVar7 = param_1[0x44e];
    }
    if (iVar7 != 1) goto LAB_1805d9c26;
  }
  if (cVar5 == '\0') {
    puVar11 = *(uint64_t **)(param_1 + 0x446);
  }
  uVar9 = *puVar11;
LAB_1805d9c6a:
  *(uint64_t *)(param_1 + 0xf) = uVar9;
  param_1[10] = param_1[10] & 0xfffffd0f;
  return;
}






// 函数: void FUN_1805d98d4(void)
void FUN_1805d98d4(void)

{
  int64_t lVar1;
  int *piVar2;
  int64_t lVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int64_t *in_RAX;
  int64_t lVar8;
  uint64_t uVar9;
  int *piVar10;
  uint64_t *puVar11;
  uint64_t unaff_RBP;
  int64_t lVar12;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  int32_t *unaff_R14;
  uint64_t unaff_R15;
  int64_t lVar13;
  uint64_t in_stack_00000060;
  int32_t in_stack_000000c0;
  int32_t in_stack_000000c8;
  int64_t in_stack_000000d0;
  int64_t lStack00000000000000d8;
  
  *(uint64_t *)(in_R11 + -0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R13;
  lVar1 = *in_RAX;
  *(uint64_t *)(in_R11 + -0x40) = unaff_R15;
  lVar13 = *(int64_t *)(lVar1 + 0x9d8);
  lStack00000000000000d8 = *(int64_t *)(lVar1 + 0x8d8);
  if (lVar13 != 0) {
    *(uint64_t *)(in_R11 + -0x30) = unaff_R12;
    piVar2 = (int *)in_RAX[0x423];
    piVar10 = (int *)in_RAX[0x422];
    if ((int64_t)piVar2 - (int64_t)piVar10 >> 2 != 0) {
      *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
      lVar3 = *(int64_t *)(lStack00000000000000d8 + 0x18);
      if (*(int64_t *)(lVar3 + 0x2ee8) - *(int64_t *)(lVar3 + 12000) >> 3 != 0) {
        for (; piVar10 != piVar2; piVar10 = piVar10 + 1) {
          if (*piVar10 == *(int *)(lVar13 + 0x130)) {
            lVar12 = lVar3 + 0x2a68;
            iVar7 = FUN_1803965f0(lVar12);
            lVar8 = (int64_t)iVar7;
            FUN_18038de80(lVar12,iVar7);
            *(int32_t *)(lVar13 + 0x40 + lVar8 * 4) = *(int32_t *)(lVar3 + 0x2fc0 + lVar8 * 4)
            ;
            in_stack_000000c8 = 0x4b18967f;
            in_stack_000000d0 = 0;
            in_stack_000000c0 = 0;
            FUN_1803963e0(lVar12,lVar13,in_RAX + 0x422,&stack0x000000d0,&stack0x000000c8);
            *(int32_t *)(lVar3 + 0x2fe0 + lVar8 * 4) = 0;
            lVar13 = in_stack_000000d0;
            break;
          }
        }
      }
    }
  }
  lVar3 = lStack00000000000000d8;
  in_stack_00000060 = *(uint64_t *)(unaff_R14 + 0x18);
  lVar8 = SystemCore_ErrorHandler(unaff_R14 + 0x12);
  puVar11 = (uint64_t *)(unaff_R14 + 0x46);
  if (*(char *)(unaff_R14 + 0x44f) == '\0') {
    *(uint64_t *)(unaff_R14 + 0x448) = *(uint64_t *)(unaff_R14 + 0x446);
    *(int8_t *)(unaff_R14 + 0x44f) = 1;
  }
  cVar5 = '\0';
  unaff_R14[0x44e] = 0;
  if ((lVar13 != 0) && (lVar8 != 0)) {
    cVar5 = FUN_180393610(*(int64_t *)(lVar3 + 0x18) + 0x2a68,lVar13,lVar8,
                          *(int64_t *)(lVar1 + 0x20) + 0xc,&stack0x00000060);
    unaff_R14[0x450] = 0;
    unaff_R14[0x45e] = 0;
  }
  if (*(char *)(unaff_R14 + 0x44f) == '\0') {
    iVar7 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
  }
  else {
    iVar7 = unaff_R14[0x44e];
  }
  bVar4 = 1 < iVar7;
  cVar6 = *(char *)(unaff_R14 + 0x451);
  if ((bool)*(char *)(unaff_R14 + 0x451) != bVar4) {
    *(bool *)(unaff_R14 + 0x451) = bVar4;
    unaff_R14[0x45e] = 0;
    *(int8_t *)((int64_t)unaff_R14 + 0x1145) = 0;
    cVar6 = bVar4;
  }
  *unaff_R14 = 0;
  if (cVar5 != '\0') {
    if (*(char *)(unaff_R14 + 0x44f) == '\0') {
      iVar7 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar7 = unaff_R14[0x44e];
    }
    if (iVar7 < 2) {
      *(int8_t *)((int64_t)unaff_R14 + 0x1145) = 1;
    }
    FUN_1805da2b0();
    FUN_1805d9c90();
    cVar6 = *(char *)(unaff_R14 + 0x451);
  }
  if (cVar6 != '\0') {
    if (*(char *)(unaff_R14 + 0x44f) == '\0') {
      puVar11 = *(uint64_t **)(unaff_R14 + 0x446);
    }
    uVar9 = puVar11[(int64_t)(int)unaff_R14[0x450] * 4];
    goto LAB_1805d9c6a;
  }
  if (*(char *)((int64_t)unaff_R14 + 0x1147) == '\0') {
LAB_1805d9c26:
    if (*(char *)((int64_t)unaff_R14 + 0x1145) == '\0') {
      return;
    }
    cVar5 = *(char *)(unaff_R14 + 0x44f);
    if (cVar5 == '\0') {
      iVar7 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar7 = unaff_R14[0x44e];
    }
    if (iVar7 != 1) {
      return;
    }
  }
  else {
    cVar5 = *(char *)(unaff_R14 + 0x44f);
    if (cVar5 == '\0') {
      iVar7 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar7 = unaff_R14[0x44e];
    }
    if (iVar7 != 1) goto LAB_1805d9c26;
  }
  if (cVar5 == '\0') {
    puVar11 = *(uint64_t **)(unaff_R14 + 0x446);
  }
  uVar9 = *puVar11;
LAB_1805d9c6a:
  *(uint64_t *)(unaff_R14 + 0xf) = uVar9;
  unaff_R14[10] = unaff_R14[10] & 0xfffffd0f;
  return;
}






// 函数: void FUN_1805d98da(void)
void FUN_1805d98da(void)

{
  int64_t lVar1;
  int *piVar2;
  int64_t lVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int64_t *in_RAX;
  int64_t lVar8;
  uint64_t uVar9;
  int *piVar10;
  uint64_t *puVar11;
  uint64_t unaff_RBP;
  int64_t lVar12;
  int32_t uVar13;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  int32_t *unaff_R14;
  uint64_t unaff_R15;
  int64_t lVar14;
  uint64_t in_stack_00000060;
  int32_t in_stack_000000c0;
  int32_t in_stack_000000c8;
  int64_t in_stack_000000d0;
  int64_t lStack00000000000000d8;
  
  *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R13;
  lVar1 = *in_RAX;
  *(uint64_t *)(in_R11 + -0x40) = unaff_R15;
  lVar14 = *(int64_t *)(lVar1 + 0x9d8);
  lStack00000000000000d8 = *(int64_t *)(lVar1 + 0x8d8);
  uVar13 = (int32_t)unaff_RSI;
  if (lVar14 != 0) {
    *(uint64_t *)(in_R11 + -0x30) = unaff_R12;
    piVar2 = (int *)in_RAX[0x423];
    piVar10 = (int *)in_RAX[0x422];
    if ((int64_t)piVar2 - (int64_t)piVar10 >> 2 != 0) {
      *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
      lVar3 = *(int64_t *)(lStack00000000000000d8 + 0x18);
      if (*(int64_t *)(lVar3 + 0x2ee8) - *(int64_t *)(lVar3 + 12000) >> 3 != 0) {
        for (; piVar10 != piVar2; piVar10 = piVar10 + 1) {
          if (*piVar10 == *(int *)(lVar14 + 0x130)) {
            lVar12 = lVar3 + 0x2a68;
            iVar7 = FUN_1803965f0(lVar12);
            lVar8 = (int64_t)iVar7;
            FUN_18038de80(lVar12,iVar7);
            *(int32_t *)(lVar14 + 0x40 + lVar8 * 4) = *(int32_t *)(lVar3 + 0x2fc0 + lVar8 * 4)
            ;
            in_stack_000000c8 = 0x4b18967f;
            in_stack_000000c0 = uVar13;
            in_stack_000000d0 = unaff_RSI;
            FUN_1803963e0(lVar12,lVar14,in_RAX + 0x422,&stack0x000000d0,&stack0x000000c8);
            *(int32_t *)(lVar3 + 0x2fe0 + lVar8 * 4) = uVar13;
            lVar14 = in_stack_000000d0;
            break;
          }
        }
      }
    }
  }
  lVar3 = lStack00000000000000d8;
  in_stack_00000060 = *(uint64_t *)(unaff_R14 + 0x18);
  lVar8 = SystemCore_ErrorHandler(unaff_R14 + 0x12);
  puVar11 = (uint64_t *)(unaff_R14 + 0x46);
  if (*(char *)(unaff_R14 + 0x44f) == '\0') {
    *(uint64_t *)(unaff_R14 + 0x448) = *(uint64_t *)(unaff_R14 + 0x446);
    *(int8_t *)(unaff_R14 + 0x44f) = 1;
  }
  cVar5 = '\0';
  unaff_R14[0x44e] = uVar13;
  if ((lVar14 != 0) && (lVar8 != 0)) {
    cVar5 = FUN_180393610(*(int64_t *)(lVar3 + 0x18) + 0x2a68,lVar14,lVar8,
                          *(int64_t *)(lVar1 + 0x20) + 0xc,&stack0x00000060);
    unaff_R14[0x450] = uVar13;
    unaff_R14[0x45e] = uVar13;
  }
  if (*(char *)(unaff_R14 + 0x44f) == '\0') {
    iVar7 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
  }
  else {
    iVar7 = unaff_R14[0x44e];
  }
  bVar4 = 1 < iVar7;
  cVar6 = *(char *)(unaff_R14 + 0x451);
  if ((bool)*(char *)(unaff_R14 + 0x451) != bVar4) {
    *(bool *)(unaff_R14 + 0x451) = bVar4;
    unaff_R14[0x45e] = uVar13;
    *(int8_t *)((int64_t)unaff_R14 + 0x1145) = 0;
    cVar6 = bVar4;
  }
  *unaff_R14 = uVar13;
  if (cVar5 != '\0') {
    if (*(char *)(unaff_R14 + 0x44f) == '\0') {
      iVar7 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar7 = unaff_R14[0x44e];
    }
    if (iVar7 < 2) {
      *(int8_t *)((int64_t)unaff_R14 + 0x1145) = 1;
    }
    FUN_1805da2b0();
    FUN_1805d9c90();
    cVar6 = *(char *)(unaff_R14 + 0x451);
  }
  if (cVar6 != '\0') {
    if (*(char *)(unaff_R14 + 0x44f) == '\0') {
      puVar11 = *(uint64_t **)(unaff_R14 + 0x446);
    }
    uVar9 = puVar11[(int64_t)(int)unaff_R14[0x450] * 4];
    goto LAB_1805d9c6a;
  }
  if (*(char *)((int64_t)unaff_R14 + 0x1147) == '\0') {
LAB_1805d9c26:
    if (*(char *)((int64_t)unaff_R14 + 0x1145) == '\0') {
      return;
    }
    cVar5 = *(char *)(unaff_R14 + 0x44f);
    if (cVar5 == '\0') {
      iVar7 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar7 = unaff_R14[0x44e];
    }
    if (iVar7 != 1) {
      return;
    }
  }
  else {
    cVar5 = *(char *)(unaff_R14 + 0x44f);
    if (cVar5 == '\0') {
      iVar7 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar7 = unaff_R14[0x44e];
    }
    if (iVar7 != 1) goto LAB_1805d9c26;
  }
  if (cVar5 == '\0') {
    puVar11 = *(uint64_t **)(unaff_R14 + 0x446);
  }
  uVar9 = *puVar11;
LAB_1805d9c6a:
  *(uint64_t *)(unaff_R14 + 0xf) = uVar9;
  unaff_R14[10] = unaff_R14[10] & 0xfffffd0f;
  return;
}






// 函数: void FUN_1805d9908(void)
void FUN_1805d9908(void)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int64_t in_RAX;
  int64_t lVar6;
  uint64_t uVar7;
  int *piVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  uint64_t unaff_RBP;
  int64_t lVar11;
  int32_t uVar12;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R11;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  int32_t *unaff_R14;
  int64_t unaff_R15;
  uint64_t in_stack_00000060;
  int32_t in_stack_000000c0;
  int32_t in_stack_000000c8;
  int64_t in_stack_000000d8;
  
  *(uint64_t *)(in_R11 + -0x30) = unaff_R12;
  piVar1 = *(int **)(in_RAX + 0x2118);
  piVar8 = *(int **)(in_RAX + 0x2110);
  uVar12 = (int32_t)unaff_RSI;
  if ((int64_t)piVar1 - (int64_t)piVar8 >> 2 != 0) {
    *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
    lVar6 = *(int64_t *)(unaff_RDI + 0x18);
    if (*(int64_t *)(lVar6 + 0x2ee8) - *(int64_t *)(lVar6 + 12000) >> 3 != 0) {
      for (; piVar8 != piVar1; piVar8 = piVar8 + 1) {
        if (*piVar8 == *(int *)(unaff_R15 + 0x130)) {
          lVar11 = lVar6 + 0x2a68;
          iVar5 = FUN_1803965f0(lVar11);
          lVar9 = (int64_t)iVar5;
          FUN_18038de80(lVar11,iVar5);
          *(int32_t *)(unaff_R15 + 0x40 + lVar9 * 4) =
               *(int32_t *)(lVar6 + 0x2fc0 + lVar9 * 4);
          in_stack_000000c8 = 0x4b18967f;
          in_stack_000000c0 = uVar12;
          FUN_1803963e0(lVar11);
          *(int32_t *)(lVar6 + 0x2fe0 + lVar9 * 4) = uVar12;
          unaff_RDI = in_stack_000000d8;
          unaff_R15 = unaff_RSI;
          break;
        }
      }
    }
  }
  in_stack_00000060 = *(uint64_t *)(unaff_R14 + 0x18);
  lVar6 = SystemCore_ErrorHandler(unaff_R14 + 0x12);
  puVar10 = (uint64_t *)(unaff_R14 + 0x46);
  if (*(char *)(unaff_R14 + 0x44f) == '\0') {
    *(uint64_t *)(unaff_R14 + 0x448) = *(uint64_t *)(unaff_R14 + 0x446);
    *(int8_t *)(unaff_R14 + 0x44f) = 1;
  }
  cVar3 = '\0';
  unaff_R14[0x44e] = uVar12;
  if ((unaff_R15 != 0) && (lVar6 != 0)) {
    cVar3 = FUN_180393610(*(int64_t *)(unaff_RDI + 0x18) + 0x2a68,unaff_R15,lVar6,
                          *(int64_t *)(unaff_R13 + 0x20) + 0xc,&stack0x00000060);
    unaff_R14[0x450] = uVar12;
    unaff_R14[0x45e] = uVar12;
  }
  if (*(char *)(unaff_R14 + 0x44f) == '\0') {
    iVar5 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
  }
  else {
    iVar5 = unaff_R14[0x44e];
  }
  bVar2 = 1 < iVar5;
  cVar4 = *(char *)(unaff_R14 + 0x451);
  if ((bool)*(char *)(unaff_R14 + 0x451) != bVar2) {
    *(bool *)(unaff_R14 + 0x451) = bVar2;
    unaff_R14[0x45e] = uVar12;
    *(int8_t *)((int64_t)unaff_R14 + 0x1145) = 0;
    cVar4 = bVar2;
  }
  *unaff_R14 = uVar12;
  if (cVar3 != '\0') {
    if (*(char *)(unaff_R14 + 0x44f) == '\0') {
      iVar5 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar5 = unaff_R14[0x44e];
    }
    if (iVar5 < 2) {
      *(int8_t *)((int64_t)unaff_R14 + 0x1145) = 1;
    }
    FUN_1805da2b0();
    FUN_1805d9c90();
    cVar4 = *(char *)(unaff_R14 + 0x451);
  }
  if (cVar4 != '\0') {
    if (*(char *)(unaff_R14 + 0x44f) == '\0') {
      puVar10 = *(uint64_t **)(unaff_R14 + 0x446);
    }
    uVar7 = puVar10[(int64_t)(int)unaff_R14[0x450] * 4];
    goto LAB_1805d9c6a;
  }
  if (*(char *)((int64_t)unaff_R14 + 0x1147) == '\0') {
LAB_1805d9c26:
    if (*(char *)((int64_t)unaff_R14 + 0x1145) == '\0') {
      return;
    }
    cVar3 = *(char *)(unaff_R14 + 0x44f);
    if (cVar3 == '\0') {
      iVar5 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar5 = unaff_R14[0x44e];
    }
    if (iVar5 != 1) {
      return;
    }
  }
  else {
    cVar3 = *(char *)(unaff_R14 + 0x44f);
    if (cVar3 == '\0') {
      iVar5 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar5 = unaff_R14[0x44e];
    }
    if (iVar5 != 1) goto LAB_1805d9c26;
  }
  if (cVar3 == '\0') {
    puVar10 = *(uint64_t **)(unaff_R14 + 0x446);
  }
  uVar7 = *puVar10;
LAB_1805d9c6a:
  *(uint64_t *)(unaff_R14 + 0xf) = uVar7;
  unaff_R14[10] = unaff_R14[10] & 0xfffffd0f;
  return;
}






// 函数: void FUN_1805d992f(int *param_1,int *param_2)
void FUN_1805d992f(int *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint64_t unaff_RBP;
  int64_t lVar9;
  int32_t uVar10;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R11;
  int64_t unaff_R13;
  int32_t *unaff_R14;
  int64_t unaff_R15;
  uint64_t in_stack_00000060;
  int32_t in_stack_000000c0;
  int32_t in_stack_000000c8;
  int64_t in_stack_000000d8;
  
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  lVar5 = *(int64_t *)(unaff_RDI + 0x18);
  uVar10 = (int32_t)unaff_RSI;
  if ((*(int64_t *)(lVar5 + 0x2ee8) - *(int64_t *)(lVar5 + 12000) >> 3 != 0) &&
     (param_1 != param_2)) {
    do {
      if (*param_1 == *(int *)(unaff_R15 + 0x130)) {
        lVar9 = lVar5 + 0x2a68;
        iVar4 = FUN_1803965f0(lVar9);
        lVar7 = (int64_t)iVar4;
        FUN_18038de80(lVar9,iVar4);
        *(int32_t *)(unaff_R15 + 0x40 + lVar7 * 4) = *(int32_t *)(lVar5 + 0x2fc0 + lVar7 * 4);
        in_stack_000000c8 = 0x4b18967f;
        in_stack_000000c0 = uVar10;
        FUN_1803963e0(lVar9);
        *(int32_t *)(lVar5 + 0x2fe0 + lVar7 * 4) = uVar10;
        unaff_RDI = in_stack_000000d8;
        unaff_R15 = unaff_RSI;
        break;
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  in_stack_00000060 = *(uint64_t *)(unaff_R14 + 0x18);
  lVar5 = SystemCore_ErrorHandler(unaff_R14 + 0x12);
  puVar8 = (uint64_t *)(unaff_R14 + 0x46);
  if (*(char *)(unaff_R14 + 0x44f) == '\0') {
    *(uint64_t *)(unaff_R14 + 0x448) = *(uint64_t *)(unaff_R14 + 0x446);
    *(int8_t *)(unaff_R14 + 0x44f) = 1;
  }
  cVar2 = '\0';
  unaff_R14[0x44e] = uVar10;
  if ((unaff_R15 != 0) && (lVar5 != 0)) {
    cVar2 = FUN_180393610(*(int64_t *)(unaff_RDI + 0x18) + 0x2a68,unaff_R15,lVar5,
                          *(int64_t *)(unaff_R13 + 0x20) + 0xc,&stack0x00000060);
    unaff_R14[0x450] = uVar10;
    unaff_R14[0x45e] = uVar10;
  }
  if (*(char *)(unaff_R14 + 0x44f) == '\0') {
    iVar4 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
  }
  else {
    iVar4 = unaff_R14[0x44e];
  }
  bVar1 = 1 < iVar4;
  cVar3 = *(char *)(unaff_R14 + 0x451);
  if ((bool)*(char *)(unaff_R14 + 0x451) != bVar1) {
    *(bool *)(unaff_R14 + 0x451) = bVar1;
    unaff_R14[0x45e] = uVar10;
    *(int8_t *)((int64_t)unaff_R14 + 0x1145) = 0;
    cVar3 = bVar1;
  }
  *unaff_R14 = uVar10;
  if (cVar2 != '\0') {
    if (*(char *)(unaff_R14 + 0x44f) == '\0') {
      iVar4 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar4 = unaff_R14[0x44e];
    }
    if (iVar4 < 2) {
      *(int8_t *)((int64_t)unaff_R14 + 0x1145) = 1;
    }
    FUN_1805da2b0();
    FUN_1805d9c90();
    cVar3 = *(char *)(unaff_R14 + 0x451);
  }
  if (cVar3 != '\0') {
    if (*(char *)(unaff_R14 + 0x44f) == '\0') {
      puVar8 = *(uint64_t **)(unaff_R14 + 0x446);
    }
    uVar6 = puVar8[(int64_t)(int)unaff_R14[0x450] * 4];
    goto LAB_1805d9c6a;
  }
  if (*(char *)((int64_t)unaff_R14 + 0x1147) == '\0') {
LAB_1805d9c26:
    if (*(char *)((int64_t)unaff_R14 + 0x1145) == '\0') {
      return;
    }
    cVar2 = *(char *)(unaff_R14 + 0x44f);
    if (cVar2 == '\0') {
      iVar4 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar4 = unaff_R14[0x44e];
    }
    if (iVar4 != 1) {
      return;
    }
  }
  else {
    cVar2 = *(char *)(unaff_R14 + 0x44f);
    if (cVar2 == '\0') {
      iVar4 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar4 = unaff_R14[0x44e];
    }
    if (iVar4 != 1) goto LAB_1805d9c26;
  }
  if (cVar2 == '\0') {
    puVar8 = *(uint64_t **)(unaff_R14 + 0x446);
  }
  uVar6 = *puVar8;
LAB_1805d9c6a:
  *(uint64_t *)(unaff_R14 + 0xf) = uVar6;
  unaff_R14[10] = unaff_R14[10] & 0xfffffd0f;
  return;
}






// 函数: void FUN_1805d9a2b(void)
void FUN_1805d9a2b(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int iVar6;
  uint64_t *puVar7;
  int32_t unaff_ESI;
  int64_t unaff_RDI;
  int64_t unaff_R13;
  int32_t *unaff_R14;
  int64_t unaff_R15;
  uint64_t uStack0000000000000060;
  
  uStack0000000000000060 = *(uint64_t *)(unaff_R14 + 0x18);
  lVar4 = SystemCore_ErrorHandler(unaff_R14 + 0x12);
  puVar7 = (uint64_t *)(unaff_R14 + 0x46);
  if (*(char *)(unaff_R14 + 0x44f) == '\0') {
    *(uint64_t *)(unaff_R14 + 0x448) = *(uint64_t *)(unaff_R14 + 0x446);
    *(int8_t *)(unaff_R14 + 0x44f) = 1;
  }
  cVar2 = '\0';
  unaff_R14[0x44e] = unaff_ESI;
  if ((unaff_R15 != 0) && (lVar4 != 0)) {
    cVar2 = FUN_180393610(*(int64_t *)(unaff_RDI + 0x18) + 0x2a68,
                          *(int32_t *)(*(int64_t *)(unaff_R13 + 0x20) + 0x1d0),lVar4,
                          *(int64_t *)(unaff_R13 + 0x20) + 0xc,&stack0x00000060);
    unaff_R14[0x450] = unaff_ESI;
    unaff_R14[0x45e] = unaff_ESI;
  }
  if (*(char *)(unaff_R14 + 0x44f) == '\0') {
    iVar6 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
  }
  else {
    iVar6 = unaff_R14[0x44e];
  }
  bVar1 = 1 < iVar6;
  cVar3 = *(char *)(unaff_R14 + 0x451);
  if ((bool)*(char *)(unaff_R14 + 0x451) != bVar1) {
    *(bool *)(unaff_R14 + 0x451) = bVar1;
    unaff_R14[0x45e] = unaff_ESI;
    *(int8_t *)((int64_t)unaff_R14 + 0x1145) = 0;
    cVar3 = bVar1;
  }
  *unaff_R14 = unaff_ESI;
  if (cVar2 != '\0') {
    if (*(char *)(unaff_R14 + 0x44f) == '\0') {
      iVar6 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar6 = unaff_R14[0x44e];
    }
    if (iVar6 < 2) {
      *(int8_t *)((int64_t)unaff_R14 + 0x1145) = 1;
    }
    FUN_1805da2b0();
    FUN_1805d9c90();
    cVar3 = *(char *)(unaff_R14 + 0x451);
  }
  if (cVar3 != '\0') {
    if (*(char *)(unaff_R14 + 0x44f) == '\0') {
      puVar7 = *(uint64_t **)(unaff_R14 + 0x446);
    }
    uVar5 = puVar7[(int64_t)(int)unaff_R14[0x450] * 4];
    goto LAB_1805d9c6a;
  }
  if (*(char *)((int64_t)unaff_R14 + 0x1147) == '\0') {
LAB_1805d9c26:
    if (*(char *)((int64_t)unaff_R14 + 0x1145) == '\0') {
      return;
    }
    cVar2 = *(char *)(unaff_R14 + 0x44f);
    if (cVar2 == '\0') {
      iVar6 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar6 = unaff_R14[0x44e];
    }
    if (iVar6 != 1) {
      return;
    }
  }
  else {
    cVar2 = *(char *)(unaff_R14 + 0x44f);
    if (cVar2 == '\0') {
      iVar6 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar6 = unaff_R14[0x44e];
    }
    if (iVar6 != 1) goto LAB_1805d9c26;
  }
  if (cVar2 == '\0') {
    puVar7 = *(uint64_t **)(unaff_R14 + 0x446);
  }
  uVar5 = *puVar7;
LAB_1805d9c6a:
  *(uint64_t *)(unaff_R14 + 0xf) = uVar5;
  unaff_R14[10] = unaff_R14[10] & 0xfffffd0f;
  return;
}






// 函数: void FUN_1805d9a33(void)
void FUN_1805d9a33(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int iVar6;
  uint64_t *puVar7;
  int32_t unaff_ESI;
  int64_t unaff_RDI;
  int64_t unaff_R13;
  int32_t *unaff_R14;
  int64_t unaff_R15;
  uint64_t uStack0000000000000060;
  
  uStack0000000000000060 = *(uint64_t *)(unaff_R14 + 0x18);
  lVar4 = SystemCore_ErrorHandler(unaff_R14 + 0x12);
  puVar7 = (uint64_t *)(unaff_R14 + 0x46);
  if (*(char *)(unaff_R14 + 0x44f) == '\0') {
    *(uint64_t *)(unaff_R14 + 0x448) = *(uint64_t *)(unaff_R14 + 0x446);
    *(int8_t *)(unaff_R14 + 0x44f) = 1;
  }
  cVar2 = '\0';
  unaff_R14[0x44e] = unaff_ESI;
  if ((unaff_R15 != 0) && (lVar4 != 0)) {
    cVar2 = FUN_180393610(*(int64_t *)(unaff_RDI + 0x18) + 0x2a68,
                          *(int32_t *)(*(int64_t *)(unaff_R13 + 0x20) + 0x1d0),lVar4,
                          *(int64_t *)(unaff_R13 + 0x20) + 0xc,&stack0x00000060);
    unaff_R14[0x450] = unaff_ESI;
    unaff_R14[0x45e] = unaff_ESI;
  }
  if (*(char *)(unaff_R14 + 0x44f) == '\0') {
    iVar6 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
  }
  else {
    iVar6 = unaff_R14[0x44e];
  }
  bVar1 = 1 < iVar6;
  cVar3 = *(char *)(unaff_R14 + 0x451);
  if ((bool)*(char *)(unaff_R14 + 0x451) != bVar1) {
    *(bool *)(unaff_R14 + 0x451) = bVar1;
    unaff_R14[0x45e] = unaff_ESI;
    *(int8_t *)((int64_t)unaff_R14 + 0x1145) = 0;
    cVar3 = bVar1;
  }
  *unaff_R14 = unaff_ESI;
  if (cVar2 != '\0') {
    if (*(char *)(unaff_R14 + 0x44f) == '\0') {
      iVar6 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar6 = unaff_R14[0x44e];
    }
    if (iVar6 < 2) {
      *(int8_t *)((int64_t)unaff_R14 + 0x1145) = 1;
    }
    FUN_1805da2b0();
    FUN_1805d9c90();
    cVar3 = *(char *)(unaff_R14 + 0x451);
  }
  if (cVar3 != '\0') {
    if (*(char *)(unaff_R14 + 0x44f) == '\0') {
      puVar7 = *(uint64_t **)(unaff_R14 + 0x446);
    }
    uVar5 = puVar7[(int64_t)(int)unaff_R14[0x450] * 4];
    goto LAB_1805d9c6a;
  }
  if (*(char *)((int64_t)unaff_R14 + 0x1147) == '\0') {
LAB_1805d9c26:
    if (*(char *)((int64_t)unaff_R14 + 0x1145) == '\0') {
      return;
    }
    cVar2 = *(char *)(unaff_R14 + 0x44f);
    if (cVar2 == '\0') {
      iVar6 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar6 = unaff_R14[0x44e];
    }
    if (iVar6 != 1) {
      return;
    }
  }
  else {
    cVar2 = *(char *)(unaff_R14 + 0x44f);
    if (cVar2 == '\0') {
      iVar6 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar6 = unaff_R14[0x44e];
    }
    if (iVar6 != 1) goto LAB_1805d9c26;
  }
  if (cVar2 == '\0') {
    puVar7 = *(uint64_t **)(unaff_R14 + 0x446);
  }
  uVar5 = *puVar7;
LAB_1805d9c6a:
  *(uint64_t *)(unaff_R14 + 0xf) = uVar5;
  unaff_R14[10] = unaff_R14[10] & 0xfffffd0f;
  return;
}






