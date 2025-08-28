#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part140.c - 11 个函数

// 函数: void FUN_180133b38(float param_1)
void FUN_180133b38(float param_1)

{
  ulonglong *puVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  float *pfVar6;
  char cVar7;
  uint uVar8;
  int8_t *puVar9;
  int32_t uVar11;
  longlong unaff_RBX;
  longlong unaff_RSI;
  ulonglong uVar12;
  longlong unaff_RDI;
  char cVar13;
  int32_t unaff_R12D;
  char unaff_R14B;
  char cVar14;
  int iVar15;
  ulonglong unaff_R15;
  float fVar16;
  float unaff_XMM6_Da;
  ulonglong uVar10;
  
  cVar13 = (char)unaff_R12D;
  if (param_1 == unaff_XMM6_Da) {
    *(char *)(unaff_RBX + 0x1cf8) = cVar13;
  }
  iVar15 = (int)unaff_R15;
  cVar14 = (char)unaff_R15;
  if ((((*(int *)(unaff_RBX + 0x1b2c) == iVar15) || (*(char *)(unaff_RBX + 0x1b3d) != cVar14)) &&
      (*(char *)(unaff_RBX + 0x1cf8) != cVar14)) &&
     ((*(float *)(unaff_RBX + 0x14c8) < unaff_XMM6_Da &&
      (unaff_XMM6_Da < *(float *)(unaff_RBX + 0x151c) ||
       unaff_XMM6_Da == *(float *)(unaff_RBX + 0x151c))))) {
    if ((*(float *)(unaff_RBX + 0x118) <= -256000.0 && *(float *)(unaff_RBX + 0x118) != -256000.0)
       || (cVar7 = cVar13,
          *(float *)(unaff_RBX + 0x11c) <= -256000.0 && *(float *)(unaff_RBX + 0x11c) != -256000.0))
    {
      cVar7 = '\0';
    }
    pfVar6 = (float *)(unaff_RBX + 0x3b4);
    if (pfVar6 == (float *)0x0) {
      pfVar6 = (float *)(unaff_RBX + 0x118);
    }
    if ((*pfVar6 <= -256000.0 && *pfVar6 != -256000.0) ||
       (cVar5 = cVar13, pfVar6[1] <= -256000.0 && pfVar6[1] != -256000.0)) {
      cVar5 = '\0';
    }
    if (cVar7 == cVar5) {
      unaff_R14B = cVar13;
    }
  }
  if ((unaff_RSI != 0) && ((*(byte *)(unaff_RSI + 0xc) & 4) == 0)) {
    if (*(int *)(unaff_RBX + 0x1cc0) == 3) {
      if (*(char *)(unaff_RBX + 0x135) == cVar14) {
        puVar9 = &stack0x000000a0;
        uVar11 = unaff_R12D;
LAB_180133c1e:
        pfVar6 = (float *)FUN_180131aa0(puVar9,uVar11,0,0);
        fVar2 = pfVar6[1];
        if ((*pfVar6 != unaff_XMM6_Da) || (fVar2 != unaff_XMM6_Da)) {
          fVar16 = *(float *)(unaff_RBX + 0xbc);
          if (*(float *)(unaff_RBX + 0xb8) <= *(float *)(unaff_RBX + 0xbc)) {
            fVar16 = *(float *)(unaff_RBX + 0xb8);
          }
          lVar3 = *(longlong *)(unaff_RSI + 0x3a0);
          fVar16 = (float)(int)(fVar16 * *(float *)(unaff_RBX + 0x18) * 800.0);
          *(float *)(lVar3 + 0x40) = *pfVar6 * fVar16 + *(float *)(lVar3 + 0x40);
          *(float *)(lVar3 + 0x44) = fVar2 * fVar16 + *(float *)(lVar3 + 0x44);
          *(char *)(unaff_RBX + 0x1d07) = cVar13;
          if (((*(uint *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0xc) & 0x100) == 0) &&
             (*(float *)(unaff_RBX + 0x2e04) <= unaff_XMM6_Da)) {
            *(int32_t *)(unaff_RBX + 0x2e04) = *(int32_t *)(unaff_RBX + 0x1c);
          }
        }
      }
    }
    else if (*(int *)(unaff_RBX + 0x1cc0) == 4) {
      uVar11 = 4;
      puVar9 = &stack0x000000a8;
      goto LAB_180133c1e;
    }
  }
  if (unaff_RDI == 0) goto LAB_180133d4a;
  lVar3 = *(longlong *)(unaff_RBX + 0x1c98);
  uVar12 = unaff_R15;
  if (lVar3 == 0) {
LAB_180133ce2:
    *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
    if (*(longlong *)(unaff_RDI + 0x3c0) != 0) {
      unaff_RDI = *(longlong *)(unaff_RDI + 0x3c0);
    }
    FUN_18012ed10(unaff_RDI);
    FUN_18012d2e0(unaff_RDI);
    if (*(int *)(unaff_RDI + 0x3c8) == iVar15) {
      func_0x000180131810(unaff_RDI,0);
    }
    if (*(int *)(unaff_RDI + 0x174) == 2) {
      *(int32_t *)(unaff_RBX + 0x1cfc) = unaff_R12D;
    }
    if ((*(ulonglong *)(unaff_RDI + 0x28) != uVar12) &&
       (*(code **)(unaff_RBX + 0x1578) != (code *)0x0)) {
      (**(code **)(unaff_RBX + 0x1578))();
    }
  }
  else if (unaff_RDI != *(longlong *)(lVar3 + 0x3a8)) {
    uVar12 = *(ulonglong *)(lVar3 + 0x28);
    goto LAB_180133ce2;
  }
  *(ulonglong *)(unaff_RBX + 0x1cd8) = unaff_R15;
LAB_180133d4a:
  if ((unaff_R14B != '\0') && (uVar12 = *(ulonglong *)(unaff_RBX + 0x1c98), uVar12 != 0)) {
    puVar1 = (ulonglong *)(uVar12 + 0x398);
    uVar10 = *puVar1;
    uVar4 = uVar12;
    while (((uVar10 != unaff_R15 && ((*(byte *)(uVar4 + 0x174) & 2) == 0)) &&
           ((*(uint *)(uVar4 + 0xc) & 0x15000000) == 0x1000000))) {
      uVar4 = *puVar1;
      puVar1 = (ulonglong *)(uVar4 + 0x398);
      uVar10 = *puVar1;
    }
    if (uVar4 != uVar12) {
      FUN_18012d2e0(uVar4);
      *(ulonglong *)(uVar4 + 0x3c0) = uVar12;
      uVar12 = *(ulonglong *)(unaff_RBX + 0x1c98);
    }
    *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
    if ((*(byte *)(uVar12 + 0x174) & 2) == 0) {
      uVar10 = unaff_R15 & 0xffffffff;
    }
    else {
      uVar8 = *(uint *)(unaff_RBX + 0x1cfc) ^ 1;
      uVar10 = (ulonglong)uVar8;
      if ((uVar8 == 1) && (*(ulonglong *)(uVar4 + 0x410) == unaff_R15)) {
        *(int *)(uVar12 + 0x3cc) = iVar15;
      }
    }
    func_0x000180131750(uVar10);
  }
  return;
}





// 函数: void FUN_180133cc4(void)
void FUN_180133cc4(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong unaff_RBX;
  ulonglong uVar6;
  longlong unaff_RDI;
  int32_t unaff_R12D;
  char unaff_R14B;
  ulonglong unaff_R15;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)(unaff_RBX + 0x1c98);
  uVar6 = unaff_R15;
  if (lVar2 != 0) {
    if (unaff_RDI == *(longlong *)(lVar2 + 0x3a8)) goto LAB_180133d43;
    uVar6 = *(ulonglong *)(lVar2 + 0x28);
  }
  *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
  if (*(longlong *)(unaff_RDI + 0x3c0) != 0) {
    unaff_RDI = *(longlong *)(unaff_RDI + 0x3c0);
  }
  FUN_18012ed10(unaff_RDI);
  FUN_18012d2e0(unaff_RDI);
  if (*(int *)(unaff_RDI + 0x3c8) == (int)unaff_R15) {
    func_0x000180131810(unaff_RDI,0);
  }
  if (*(int *)(unaff_RDI + 0x174) == 2) {
    *(int32_t *)(unaff_RBX + 0x1cfc) = unaff_R12D;
  }
  if ((*(ulonglong *)(unaff_RDI + 0x28) != uVar6) && (*(code **)(unaff_RBX + 0x1578) != (code *)0x0)
     ) {
    (**(code **)(unaff_RBX + 0x1578))();
  }
LAB_180133d43:
  *(ulonglong *)(unaff_RBX + 0x1cd8) = unaff_R15;
  if ((unaff_R14B != '\0') && (uVar6 = *(ulonglong *)(unaff_RBX + 0x1c98), uVar6 != 0)) {
    puVar1 = (ulonglong *)(uVar6 + 0x398);
    uVar5 = *puVar1;
    uVar3 = uVar6;
    while (((uVar5 != unaff_R15 && ((*(byte *)(uVar3 + 0x174) & 2) == 0)) &&
           ((*(uint *)(uVar3 + 0xc) & 0x15000000) == 0x1000000))) {
      uVar3 = *puVar1;
      puVar1 = (ulonglong *)(uVar3 + 0x398);
      uVar5 = *puVar1;
    }
    if (uVar3 != uVar6) {
      FUN_18012d2e0(uVar3);
      *(ulonglong *)(uVar3 + 0x3c0) = uVar6;
      uVar6 = *(ulonglong *)(unaff_RBX + 0x1c98);
    }
    *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
    if ((*(byte *)(uVar6 + 0x174) & 2) == 0) {
      uVar5 = unaff_R15 & 0xffffffff;
    }
    else {
      uVar4 = *(uint *)(unaff_RBX + 0x1cfc) ^ 1;
      uVar5 = (ulonglong)uVar4;
      if ((uVar4 == 1) && (*(ulonglong *)(uVar3 + 0x410) == unaff_R15)) {
        *(int *)(uVar6 + 0x3cc) = (int)unaff_R15;
      }
    }
    func_0x000180131750(uVar5);
  }
  return;
}





// 函数: void FUN_180133d58(void)
void FUN_180133d58(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong unaff_RBX;
  ulonglong uVar5;
  ulonglong unaff_R15;
  ulonglong uVar4;
  
  uVar5 = *(ulonglong *)(unaff_RBX + 0x1c98);
  if (uVar5 != 0) {
    puVar1 = (ulonglong *)(uVar5 + 0x398);
    uVar4 = *puVar1;
    uVar2 = uVar5;
    while (((uVar4 != unaff_R15 && ((*(byte *)(uVar2 + 0x174) & 2) == 0)) &&
           ((*(uint *)(uVar2 + 0xc) & 0x15000000) == 0x1000000))) {
      uVar2 = *puVar1;
      puVar1 = (ulonglong *)(uVar2 + 0x398);
      uVar4 = *puVar1;
    }
    if (uVar2 != uVar5) {
      FUN_18012d2e0(uVar2);
      *(ulonglong *)(uVar2 + 0x3c0) = uVar5;
      uVar5 = *(ulonglong *)(unaff_RBX + 0x1c98);
    }
    *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
    if ((*(byte *)(uVar5 + 0x174) & 2) == 0) {
      uVar4 = unaff_R15 & 0xffffffff;
    }
    else {
      uVar3 = *(uint *)(unaff_RBX + 0x1cfc) ^ 1;
      uVar4 = (ulonglong)uVar3;
      if ((uVar3 == 1) && (*(ulonglong *)(uVar2 + 0x410) == unaff_R15)) {
        *(int *)(uVar5 + 0x3cc) = (int)unaff_R15;
      }
    }
    func_0x000180131750(uVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180133e10(void)
void FUN_180133e10(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint64_t *puVar6;
  longlong lVar7;
  int iVar8;
  uint64_t uVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  char *pcVar15;
  uint64_t uStackX_8;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  lVar7 = _DAT_180c8a9b0;
  if (0.15 < *(float *)(_DAT_180c8a9b0 + 0x1cf0) || *(float *)(_DAT_180c8a9b0 + 0x1cf0) == 0.15) {
    if (*(longlong *)(_DAT_180c8a9b0 + 0x1ce8) == 0) {
      uVar9 = func_0x000180128b60(&UNK_180a06560);
      *(uint64_t *)(lVar7 + 0x1ce8) = uVar9;
    }
    lVar13 = **(longlong **)(lVar7 + 0x1c70);
    fVar1 = *(float *)(lVar13 + 0x10);
    fVar2 = *(float *)(lVar13 + 0x14);
    *(int32_t *)(lVar7 + 0x1be0) = 1;
    *(uint64_t *)(lVar7 + 0x1c28) = 0;
    *(uint64_t *)(lVar7 + 0x1c30) = 0;
    *(float *)(lVar7 + 0x1c18) = fVar1 * 0.2;
    *(float *)(lVar7 + 0x1c1c) = fVar2 * 0.2;
    *(int32_t *)(lVar7 + 0x1c20) = 0x7f7fffff;
    *(int32_t *)(lVar7 + 0x1c24) = 0x7f7fffff;
    fVar1 = *(float *)(lVar13 + 0x14);
    fVar2 = *(float *)(lVar13 + 0x10);
    fVar3 = *(float *)(lVar13 + 0xc);
    uStack_2c = 0x7f7fffff;
    uStack_38 = 1;
    fVar4 = *(float *)(lVar13 + 8);
    *(int32_t *)(lVar7 + 0x1bfc) = 0x3f000000;
    *(float *)(lVar7 + 0x1bf8) = fVar1 * 0.5 + fVar3;
    *(int32_t *)(lVar7 + 0x1c00) = 0x3f000000;
    *(int32_t *)(lVar7 + 0x1bd0) = 1;
    *(float *)(lVar7 + 0x1bf4) = fVar2 * 0.5 + fVar4;
    *(int8_t *)(lVar7 + 0x1c14) = 1;
    fVar1 = *(float *)(lVar7 + 0x162c);
    fVar2 = *(float *)(lVar7 + 0x1630);
    uStack_34 = *(int32_t *)(lVar7 + 0x162c);
    uStack_30 = *(int32_t *)(lVar7 + 0x1630);
    FUN_18013e000(lVar7 + 0x1b90,&uStack_38);
    *(float *)(lVar7 + 0x162c) = fVar1 + fVar1;
    *(float *)(lVar7 + 0x1630) = fVar2 + fVar2;
    FUN_1801299b0(&UNK_180a06560,0,0xc1347);
    iVar8 = *(int *)(lVar7 + 0x1ab0) + -1;
    lVar13 = (longlong)iVar8;
    if (-1 < iVar8) {
      do {
        puVar6 = *(uint64_t **)(*(longlong *)(lVar7 + 0x1ab8) + lVar13 * 8);
        if ((*(char *)((longlong)puVar6 + 0xaf) != '\0') && (puVar6 == (uint64_t *)puVar6[0x75]))
        {
          uVar5 = *(uint *)((longlong)puVar6 + 0xc);
          if ((uVar5 >> 0x13 & 1) == 0) {
            pcVar15 = (char *)*puVar6;
            pcVar10 = pcVar15;
            if (pcVar15 == (char *)0xffffffffffffffff) {
LAB_180134021:
              if ((uVar5 >> 0x1a & 1) == 0) {
                if ((uVar5 >> 10 & 1) != 0) {
                  iVar8 = strcmp(pcVar15,&UNK_180a063e8);
                  if (iVar8 == 0) {
                    pcVar15 = "(Main menu bar)";
                    goto LAB_180134065;
                  }
                }
                pcVar15 = "(Dock node)";
                if (puVar6[0x82] == 0) {
                  pcVar15 = "(Untitled)";
                }
              }
              else {
                pcVar15 = "(Popup)";
              }
            }
            else {
              while (*pcVar10 != '\0') {
                if (((*pcVar10 == '#') && (pcVar10[1] == '#')) ||
                   (pcVar10 = pcVar10 + 1, pcVar10 == (char *)0xffffffffffffffff)) break;
              }
              if (pcVar15 == pcVar10) goto LAB_180134021;
            }
LAB_180134065:
            uStackX_8 = 0;
            FUN_180119960(pcVar15,*(uint64_t **)(lVar7 + 0x1cd8) == puVar6,0,&uStackX_8);
          }
        }
        lVar13 = lVar13 + -1;
      } while (-1 < lVar13);
    }
    FUN_18012cfe0();
    lVar13 = _DAT_180c8a9b0;
    lVar11 = (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b90);
    lVar7 = *(longlong *)(_DAT_180c8a9b0 + 0x1b98);
    lVar12 = (longlong)*(int *)(lVar7 + -0xc + lVar11 * 0xc);
    uVar14 = (ulonglong)*(uint *)(&UNK_18098d188 + lVar12 * 0xc);
    if (*(int *)(&UNK_18098d180 + lVar12 * 0xc) == 4) {
      if (*(int *)(&UNK_18098d184 + lVar12 * 0xc) == 1) {
        *(int32_t *)(uVar14 + 0x1628 + _DAT_180c8a9b0) =
             *(int32_t *)(lVar7 + -8 + lVar11 * 0xc);
        *(int *)(lVar13 + 0x1b90) = *(int *)(lVar13 + 0x1b90) + -1;
        return;
      }
      if (*(int *)(&UNK_18098d184 + lVar12 * 0xc) == 2) {
        *(int32_t *)(uVar14 + 0x1628 + _DAT_180c8a9b0) =
             *(int32_t *)(lVar7 + -8 + lVar11 * 0xc);
        *(int32_t *)(uVar14 + 0x162c + lVar13) = *(int32_t *)(lVar7 + -4 + lVar11 * 0xc);
      }
    }
    *(int *)(lVar13 + 0x1b90) = *(int *)(lVar13 + 0x1b90) + -1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180133e3a(void)
void FUN_180133e3a(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint64_t *puVar6;
  longlong lVar7;
  int iVar8;
  uint64_t uVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong unaff_RDI;
  ulonglong uVar14;
  char *pcVar15;
  bool in_ZF;
  int32_t uVar16;
  int32_t uStack000000000000002c;
  uint64_t in_stack_00000060;
  
  if (in_ZF) {
    uVar9 = func_0x000180128b60(&UNK_180a06560);
    *(uint64_t *)(unaff_RDI + 0x1ce8) = uVar9;
  }
  lVar13 = **(longlong **)(unaff_RDI + 0x1c70);
  fVar1 = *(float *)(lVar13 + 0x10);
  fVar2 = *(float *)(lVar13 + 0x14);
  *(int32_t *)(unaff_RDI + 0x1be0) = 1;
  *(uint64_t *)(unaff_RDI + 0x1c28) = 0;
  *(uint64_t *)(unaff_RDI + 0x1c30) = 0;
  *(float *)(unaff_RDI + 0x1c18) = fVar1 * 0.2;
  *(float *)(unaff_RDI + 0x1c1c) = fVar2 * 0.2;
  *(int32_t *)(unaff_RDI + 0x1c20) = 0x7f7fffff;
  *(int32_t *)(unaff_RDI + 0x1c24) = 0x7f7fffff;
  fVar1 = *(float *)(lVar13 + 0x14);
  fVar2 = *(float *)(lVar13 + 0x10);
  fVar3 = *(float *)(lVar13 + 0xc);
  uStack000000000000002c = 0x7f7fffff;
  uVar16 = 1;
  fVar4 = *(float *)(lVar13 + 8);
  *(int32_t *)(unaff_RDI + 0x1bfc) = 0x3f000000;
  *(float *)(unaff_RDI + 0x1bf8) = fVar1 * 0.5 + fVar3;
  *(int32_t *)(unaff_RDI + 0x1c00) = 0x3f000000;
  *(int32_t *)(unaff_RDI + 0x1bd0) = 1;
  *(float *)(unaff_RDI + 0x1bf4) = fVar2 * 0.5 + fVar4;
  *(int8_t *)(unaff_RDI + 0x1c14) = 1;
  fVar1 = *(float *)(unaff_RDI + 0x162c);
  fVar2 = *(float *)(unaff_RDI + 0x1630);
  FUN_18013e000(unaff_RDI + 0x1b90,&stack0x00000020);
  *(float *)(unaff_RDI + 0x162c) = fVar1 + fVar1;
  *(float *)(unaff_RDI + 0x1630) = fVar2 + fVar2;
  FUN_1801299b0(&UNK_180a06560,0,0xc1347);
  iVar8 = *(int *)(unaff_RDI + 0x1ab0) + -1;
  lVar13 = (longlong)iVar8;
  if (-1 < iVar8) {
    do {
      puVar6 = *(uint64_t **)(*(longlong *)(unaff_RDI + 0x1ab8) + lVar13 * 8);
      if ((*(char *)((longlong)puVar6 + 0xaf) != '\0') && (puVar6 == (uint64_t *)puVar6[0x75])) {
        uVar5 = *(uint *)((longlong)puVar6 + 0xc);
        if ((uVar5 >> 0x13 & 1) == 0) {
          pcVar15 = (char *)*puVar6;
          pcVar10 = pcVar15;
          if (pcVar15 == (char *)0xffffffffffffffff) {
LAB_180134021:
            if ((uVar5 >> 0x1a & 1) == 0) {
              if ((uVar5 >> 10 & 1) != 0) {
                iVar8 = strcmp(pcVar15,&UNK_180a063e8);
                if (iVar8 == 0) {
                  pcVar15 = "(Main menu bar)";
                  goto LAB_180134065;
                }
              }
              pcVar15 = "(Dock node)";
              if (puVar6[0x82] == 0) {
                pcVar15 = "(Untitled)";
              }
            }
            else {
              pcVar15 = "(Popup)";
            }
          }
          else {
            while (*pcVar10 != '\0') {
              if (((*pcVar10 == '#') && (pcVar10[1] == '#')) ||
                 (pcVar10 = pcVar10 + 1, pcVar10 == (char *)0xffffffffffffffff)) break;
            }
            if (pcVar15 == pcVar10) goto LAB_180134021;
          }
LAB_180134065:
          in_stack_00000060 = 0;
          FUN_180119960(pcVar15,*(uint64_t **)(unaff_RDI + 0x1cd8) == puVar6,0,&stack0x00000060,
                        uVar16);
        }
      }
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
  }
  FUN_18012cfe0();
  lVar7 = _DAT_180c8a9b0;
  lVar11 = (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b90);
  lVar13 = *(longlong *)(_DAT_180c8a9b0 + 0x1b98);
  lVar12 = (longlong)*(int *)(lVar13 + -0xc + lVar11 * 0xc);
  uVar14 = (ulonglong)*(uint *)(&UNK_18098d188 + lVar12 * 0xc);
  if (*(int *)(&UNK_18098d180 + lVar12 * 0xc) == 4) {
    if (*(int *)(&UNK_18098d184 + lVar12 * 0xc) == 1) {
      *(int32_t *)(uVar14 + 0x1628 + _DAT_180c8a9b0) =
           *(int32_t *)(lVar13 + -8 + lVar11 * 0xc);
      *(int *)(lVar7 + 0x1b90) = *(int *)(lVar7 + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&UNK_18098d184 + lVar12 * 0xc) == 2) {
      *(int32_t *)(uVar14 + 0x1628 + _DAT_180c8a9b0) =
           *(int32_t *)(lVar13 + -8 + lVar11 * 0xc);
      *(int32_t *)(uVar14 + 0x162c + lVar7) = *(int32_t *)(lVar13 + -4 + lVar11 * 0xc);
    }
  }
  *(int *)(lVar7 + 0x1b90) = *(int *)(lVar7 + 0x1b90) + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180133e3f(void)
void FUN_180133e3f(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint64_t *puVar6;
  longlong lVar7;
  int iVar8;
  uint64_t uVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong unaff_RDI;
  ulonglong uVar14;
  char *pcVar15;
  bool in_ZF;
  int32_t uVar16;
  int32_t uStack000000000000002c;
  uint64_t in_stack_00000060;
  
  if (in_ZF) {
    uVar9 = func_0x000180128b60(&UNK_180a06560);
    *(uint64_t *)(unaff_RDI + 0x1ce8) = uVar9;
  }
  lVar13 = **(longlong **)(unaff_RDI + 0x1c70);
  fVar1 = *(float *)(lVar13 + 0x10);
  fVar2 = *(float *)(lVar13 + 0x14);
  *(int32_t *)(unaff_RDI + 0x1be0) = 1;
  *(uint64_t *)(unaff_RDI + 0x1c28) = 0;
  *(uint64_t *)(unaff_RDI + 0x1c30) = 0;
  *(float *)(unaff_RDI + 0x1c18) = fVar1 * 0.2;
  *(float *)(unaff_RDI + 0x1c1c) = fVar2 * 0.2;
  *(int32_t *)(unaff_RDI + 0x1c20) = 0x7f7fffff;
  *(int32_t *)(unaff_RDI + 0x1c24) = 0x7f7fffff;
  fVar1 = *(float *)(lVar13 + 0x14);
  fVar2 = *(float *)(lVar13 + 0x10);
  fVar3 = *(float *)(lVar13 + 0xc);
  uStack000000000000002c = 0x7f7fffff;
  uVar16 = 1;
  fVar4 = *(float *)(lVar13 + 8);
  *(int32_t *)(unaff_RDI + 0x1bfc) = 0x3f000000;
  *(float *)(unaff_RDI + 0x1bf8) = fVar1 * 0.5 + fVar3;
  *(int32_t *)(unaff_RDI + 0x1c00) = 0x3f000000;
  *(int32_t *)(unaff_RDI + 0x1bd0) = 1;
  *(float *)(unaff_RDI + 0x1bf4) = fVar2 * 0.5 + fVar4;
  *(int8_t *)(unaff_RDI + 0x1c14) = 1;
  fVar1 = *(float *)(unaff_RDI + 0x162c);
  fVar2 = *(float *)(unaff_RDI + 0x1630);
  FUN_18013e000(unaff_RDI + 0x1b90,&stack0x00000020);
  *(float *)(unaff_RDI + 0x162c) = fVar1 + fVar1;
  *(float *)(unaff_RDI + 0x1630) = fVar2 + fVar2;
  FUN_1801299b0(&UNK_180a06560,0,0xc1347);
  iVar8 = *(int *)(unaff_RDI + 0x1ab0) + -1;
  lVar13 = (longlong)iVar8;
  if (-1 < iVar8) {
    do {
      puVar6 = *(uint64_t **)(*(longlong *)(unaff_RDI + 0x1ab8) + lVar13 * 8);
      if ((*(char *)((longlong)puVar6 + 0xaf) != '\0') && (puVar6 == (uint64_t *)puVar6[0x75])) {
        uVar5 = *(uint *)((longlong)puVar6 + 0xc);
        if ((uVar5 >> 0x13 & 1) == 0) {
          pcVar15 = (char *)*puVar6;
          pcVar10 = pcVar15;
          if (pcVar15 == (char *)0xffffffffffffffff) {
LAB_180134021:
            if ((uVar5 >> 0x1a & 1) == 0) {
              if ((uVar5 >> 10 & 1) != 0) {
                iVar8 = strcmp(pcVar15,&UNK_180a063e8);
                if (iVar8 == 0) {
                  pcVar15 = "(Main menu bar)";
                  goto LAB_180134065;
                }
              }
              pcVar15 = "(Dock node)";
              if (puVar6[0x82] == 0) {
                pcVar15 = "(Untitled)";
              }
            }
            else {
              pcVar15 = "(Popup)";
            }
          }
          else {
            while (*pcVar10 != '\0') {
              if (((*pcVar10 == '#') && (pcVar10[1] == '#')) ||
                 (pcVar10 = pcVar10 + 1, pcVar10 == (char *)0xffffffffffffffff)) break;
            }
            if (pcVar15 == pcVar10) goto LAB_180134021;
          }
LAB_180134065:
          in_stack_00000060 = 0;
          FUN_180119960(pcVar15,*(uint64_t **)(unaff_RDI + 0x1cd8) == puVar6,0,&stack0x00000060,
                        uVar16);
        }
      }
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
  }
  FUN_18012cfe0();
  lVar7 = _DAT_180c8a9b0;
  lVar11 = (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b90);
  lVar13 = *(longlong *)(_DAT_180c8a9b0 + 0x1b98);
  lVar12 = (longlong)*(int *)(lVar13 + -0xc + lVar11 * 0xc);
  uVar14 = (ulonglong)*(uint *)(&UNK_18098d188 + lVar12 * 0xc);
  if (*(int *)(&UNK_18098d180 + lVar12 * 0xc) == 4) {
    if (*(int *)(&UNK_18098d184 + lVar12 * 0xc) == 1) {
      *(int32_t *)(uVar14 + 0x1628 + _DAT_180c8a9b0) =
           *(int32_t *)(lVar13 + -8 + lVar11 * 0xc);
      *(int *)(lVar7 + 0x1b90) = *(int *)(lVar7 + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&UNK_18098d184 + lVar12 * 0xc) == 2) {
      *(int32_t *)(uVar14 + 0x1628 + _DAT_180c8a9b0) =
           *(int32_t *)(lVar13 + -8 + lVar11 * 0xc);
      *(int32_t *)(uVar14 + 0x162c + lVar7) = *(int32_t *)(lVar13 + -4 + lVar11 * 0xc);
    }
  }
  *(int *)(lVar7 + 0x1b90) = *(int *)(lVar7 + 0x1b90) + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180133fb3(void)
void FUN_180133fb3(void)

{
  uint uVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar9;
  char *pcVar10;
  uint64_t in_stack_00000060;
  
  do {
    puVar2 = *(uint64_t **)(*(longlong *)(unaff_RDI + 0x1ab8) + unaff_RSI * 8);
    if ((*(char *)((longlong)puVar2 + 0xaf) != '\0') && (puVar2 == (uint64_t *)puVar2[0x75])) {
      uVar1 = *(uint *)((longlong)puVar2 + 0xc);
      if ((uVar1 >> 0x13 & 1) == 0) {
        pcVar10 = (char *)*puVar2;
        pcVar6 = pcVar10;
        if (pcVar10 == (char *)0xffffffffffffffff) {
LAB_180134021:
          if ((uVar1 >> 0x1a & 1) == 0) {
            if ((uVar1 >> 10 & 1) != 0) {
              iVar5 = strcmp(pcVar10,&UNK_180a063e8);
              if (iVar5 == 0) {
                pcVar10 = "(Main menu bar)";
                goto LAB_180134065;
              }
            }
            pcVar10 = "(Dock node)";
            if (puVar2[0x82] == 0) {
              pcVar10 = "(Untitled)";
            }
          }
          else {
            pcVar10 = "(Popup)";
          }
        }
        else {
          while (*pcVar6 != '\0') {
            if (((*pcVar6 == '#') && (pcVar6[1] == '#')) ||
               (pcVar6 = pcVar6 + 1, pcVar6 == (char *)0xffffffffffffffff)) break;
          }
          if (pcVar10 == pcVar6) goto LAB_180134021;
        }
LAB_180134065:
        in_stack_00000060 = 0;
        FUN_180119960(pcVar10,*(uint64_t **)(unaff_RDI + 0x1cd8) == puVar2,0,&stack0x00000060);
      }
    }
    unaff_RSI = unaff_RSI + -1;
    if (unaff_RSI < 0) {
      FUN_18012cfe0();
      lVar4 = _DAT_180c8a9b0;
      lVar7 = (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b90);
      lVar3 = *(longlong *)(_DAT_180c8a9b0 + 0x1b98);
      lVar8 = (longlong)*(int *)(lVar3 + -0xc + lVar7 * 0xc);
      uVar9 = (ulonglong)*(uint *)(&UNK_18098d188 + lVar8 * 0xc);
      if (*(int *)(&UNK_18098d180 + lVar8 * 0xc) == 4) {
        if (*(int *)(&UNK_18098d184 + lVar8 * 0xc) == 1) {
          *(int32_t *)(uVar9 + 0x1628 + _DAT_180c8a9b0) =
               *(int32_t *)(lVar3 + -8 + lVar7 * 0xc);
          *(int *)(lVar4 + 0x1b90) = *(int *)(lVar4 + 0x1b90) + -1;
          return;
        }
        if (*(int *)(&UNK_18098d184 + lVar8 * 0xc) == 2) {
          *(int32_t *)(uVar9 + 0x1628 + _DAT_180c8a9b0) =
               *(int32_t *)(lVar3 + -8 + lVar7 * 0xc);
          *(int32_t *)(uVar9 + 0x162c + lVar4) = *(int32_t *)(lVar3 + -4 + lVar7 * 0xc);
        }
      }
      *(int *)(lVar4 + 0x1b90) = *(int *)(lVar4 + 0x1b90) + -1;
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013409c(void)
void FUN_18013409c(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  FUN_18012cfe0();
  lVar2 = _DAT_180c8a9b0;
  lVar3 = (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b90);
  lVar1 = *(longlong *)(_DAT_180c8a9b0 + 0x1b98);
  lVar4 = (longlong)*(int *)(lVar1 + -0xc + lVar3 * 0xc);
  uVar5 = (ulonglong)*(uint *)(&UNK_18098d188 + lVar4 * 0xc);
  if (*(int *)(&UNK_18098d180 + lVar4 * 0xc) == 4) {
    if (*(int *)(&UNK_18098d184 + lVar4 * 0xc) == 1) {
      *(int32_t *)(uVar5 + 0x1628 + _DAT_180c8a9b0) = *(int32_t *)(lVar1 + -8 + lVar3 * 0xc);
      *(int *)(lVar2 + 0x1b90) = *(int *)(lVar2 + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&UNK_18098d184 + lVar4 * 0xc) == 2) {
      *(int32_t *)(uVar5 + 0x1628 + _DAT_180c8a9b0) = *(int32_t *)(lVar1 + -8 + lVar3 * 0xc);
      *(int32_t *)(uVar5 + 0x162c + lVar2) = *(int32_t *)(lVar1 + -4 + lVar3 * 0xc);
    }
  }
  *(int *)(lVar2 + 0x1b90) = *(int *)(lVar2 + 0x1b90) + -1;
  return;
}





// 函数: void FUN_1801340db(longlong param_1,longlong param_2,longlong param_3,longlong param_4)
void FUN_1801340db(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong in_RAX;
  longlong in_R10;
  
  iVar1 = *(int *)(in_RAX + 4 + in_R10 * 4);
  if (iVar1 == 1) {
    *(int32_t *)(param_4 + 0x1628 + param_1) = *(int32_t *)(param_3 + -8 + param_2 * 4);
    *(int *)(param_1 + 0x1b90) = *(int *)(param_1 + 0x1b90) + -1;
    return;
  }
  if (iVar1 == 2) {
    *(int32_t *)(param_4 + 0x1628 + param_1) = *(int32_t *)(param_3 + -8 + param_2 * 4);
    *(int32_t *)(param_4 + 0x162c + param_1) = *(int32_t *)(param_3 + -4 + param_2 * 4);
  }
  *(int *)(param_1 + 0x1b90) = *(int *)(param_1 + 0x1b90) + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180134130(void)
void FUN_180134130(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint64_t uVar5;
  float fVar6;
  
  lVar2 = _DAT_180c8a9b0;
  *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  lVar1 = *(longlong *)(lVar2 + 0x1af8);
  if ((*(char *)(lVar1 + 0xb4) == '\0') && (*(longlong *)(lVar1 + 0x210) != 0)) {
    func_0x00018012d640();
    FUN_180126d80();
    lVar4 = *(longlong *)(lVar1 + 0x210);
    uVar5 = 0;
    fVar6 = *(float *)(lVar1 + 0x104);
    if (*(float *)(lVar1 + 0x104) <= *(float *)(lVar4 + 0x20)) {
      fVar6 = *(float *)(lVar4 + 0x20);
    }
    iVar3 = *(int *)(lVar4 + 0xc) + 1;
    *(int *)(lVar4 + 0xc) = iVar3;
    *(float *)(lVar4 + 0x20) = fVar6;
    if (iVar3 < *(int *)(lVar4 + 0x10)) {
      fVar6 = (float)func_0x0001801342a0();
      *(float *)(lVar1 + 0x20c) = (fVar6 - *(float *)(lVar1 + 0x204)) + *(float *)(lVar2 + 0x166c);
      func_0x000180292160(*(uint64_t *)(lVar1 + 0x2e8),*(int32_t *)(lVar4 + 0xc));
    }
    else {
      *(int32_t *)(lVar1 + 0x20c) = 0;
      func_0x000180292160(*(uint64_t *)(lVar1 + 0x2e8),0);
      *(int32_t *)(lVar4 + 0x1c) = *(int32_t *)(lVar4 + 0x20);
      *(int *)(lVar4 + 0xc) = (int)uVar5;
    }
    *(float *)(lVar1 + 0x100) =
         (float)(int)(*(float *)(lVar1 + 0x204) + *(float *)(lVar1 + 0x40) +
                     *(float *)(lVar1 + 0x20c));
    *(int32_t *)(lVar1 + 0x104) = *(int32_t *)(lVar4 + 0x1c);
    *(uint64_t *)(lVar1 + 0x120) = uVar5;
    *(int *)(lVar1 + 0x128) = (int)uVar5;
    FUN_180134400();
    lVar1 = *(longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x210);
    func_0x00018012d470((*(float *)(((longlong)*(int *)(lVar1 + 0xc) + 1) * 0x1c +
                                   *(longlong *)(lVar1 + 0x38)) -
                        *(float *)((longlong)*(int *)(lVar1 + 0xc) * 0x1c +
                                  *(longlong *)(lVar1 + 0x38))) *
                        (*(float *)(lVar1 + 0x18) - *(float *)(lVar1 + 0x14)) * 0.65);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801342e0(int param_1,float param_2)
void FUN_1801342e0(int param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar4 = _DAT_180c8a9b0;
  while( true ) {
    lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x1af8) + 0x210);
    if (param_1 < 0) {
      param_1 = *(int *)(lVar1 + 0xc);
    }
    if (((*(uint *)(lVar1 + 4) & 4) == 0) && (param_1 < *(int *)(lVar1 + 0x10) + -1)) {
      bVar3 = true;
      iVar5 = param_1;
      if (param_1 < 0) {
        iVar5 = *(int *)(lVar1 + 0xc);
      }
      lVar2 = *(longlong *)(lVar1 + 0x38);
      lVar7 = ((longlong)iVar5 + 1) * 0x1c;
      lVar6 = (longlong)iVar5 * 0x1c;
      if (*(char *)(lVar1 + 9) == '\0') {
        fVar8 = *(float *)(lVar7 + lVar2) - *(float *)(lVar6 + lVar2);
      }
      else {
        fVar8 = *(float *)(lVar7 + 4 + lVar2) - *(float *)(lVar6 + 4 + lVar2);
      }
      fVar10 = *(float *)(lVar1 + 0x18);
      fVar8 = (fVar10 - *(float *)(lVar1 + 0x14)) * fVar8;
    }
    else {
      fVar10 = *(float *)(lVar1 + 0x18);
      bVar3 = false;
      fVar8 = 0.0;
    }
    if (((*(uint *)(lVar1 + 4) & 8) == 0) &&
       (fVar9 = fVar10 - (float)(*(int *)(lVar1 + 0x10) - param_1) * *(float *)(lVar4 + 0x1688),
       fVar9 <= param_2)) {
      param_2 = fVar9;
    }
    *(float *)((longlong)param_1 * 0x1c + *(longlong *)(lVar1 + 0x38)) =
         (param_2 - *(float *)(lVar1 + 0x14)) / (fVar10 - *(float *)(lVar1 + 0x14));
    if (!bVar3) break;
    param_1 = param_1 + 1;
    fVar10 = *(float *)(lVar4 + 0x1688);
    if (*(float *)(lVar4 + 0x1688) <= fVar8) {
      fVar10 = fVar8;
    }
    param_2 = param_2 + fVar10;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



