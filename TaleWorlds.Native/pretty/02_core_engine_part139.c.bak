#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part139.c - 4 个函数

// 函数: void FUN_180133893(float param_1)
void FUN_180133893(float param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint8_t uVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  longlong in_RAX;
  longlong lVar8;
  float *pfVar9;
  uint uVar10;
  int8_t *puVar11;
  uint64_t uVar13;
  longlong unaff_RBX;
  ulonglong uVar14;
  longlong unaff_RDI;
  char cVar15;
  char unaff_R14B;
  int iVar16;
  ulonglong unaff_R15;
  float fVar17;
  float fVar18;
  float unaff_XMM6_Da;
  float fVar19;
  ulonglong uVar12;
  
  if (param_1 == unaff_XMM6_Da) {
    cVar15 = '\x01';
LAB_1801338a5:
    if ((*(char *)(unaff_RBX + 0x134) == (char)unaff_RDI) || (*(int *)(unaff_RBX + 0x3c) < 0))
    goto LAB_1801338ca;
    bVar5 = 1;
    cVar4 = func_0x0001801281d0();
    if ((cVar4 == '\0') || ((*(byte *)(unaff_RBX + 8) & bVar5) == 0)) goto LAB_1801338ca;
  }
  else {
    cVar15 = '\0';
    if (in_RAX == 0) goto LAB_1801338a5;
LAB_1801338ca:
    bVar5 = 0;
  }
  if (((cVar15 != '\0') || (bVar5 != 0)) &&
     ((lVar8 = *(longlong *)(unaff_RBX + 0x1c98), lVar8 != 0 ||
      (lVar8 = FUN_1801335f0(*(int *)(unaff_RBX + 0x1ab0) + -1,0x80000001,0xffffffff), lVar8 != 0)))
     ) {
    *(longlong *)(unaff_RBX + 0x1ce0) = lVar8;
    *(longlong *)(unaff_RBX + 0x1cd8) = lVar8;
    *(byte *)(unaff_RBX + 0x1cf8) = bVar5 ^ 1;
    *(uint *)(unaff_RBX + 0x1cc0) = (bVar5 ^ 1) + 3;
    *(ulonglong *)(unaff_RBX + 0x1cf0) = unaff_R15;
  }
  fVar19 = *(float *)(unaff_RBX + 0x18) + *(float *)(unaff_RBX + 0x1cf0);
  *(float *)(unaff_RBX + 0x1cf0) = fVar19;
  iVar16 = (int)unaff_R15;
  if ((*(longlong *)(unaff_RBX + 0x1cd8) != unaff_RDI) && (*(int *)(unaff_RBX + 0x1cc0) == 4)) {
    fVar19 = (fVar19 - 0.2) * 20.0;
    if (unaff_XMM6_Da <= fVar19) {
      if (1.0 <= fVar19) {
        fVar19 = 1.0;
      }
    }
    else {
      fVar19 = 0.0;
    }
    if (fVar19 <= *(float *)(unaff_RBX + 0x1cf4)) {
      fVar19 = *(float *)(unaff_RBX + 0x1cf4);
    }
    *(float *)(unaff_RBX + 0x1cf4) = fVar19;
    fVar18 = *(float *)(unaff_RBX + 0x14b8);
    if (unaff_XMM6_Da <= fVar18) {
      iVar7 = func_0x000180128180(fVar18,fVar18 - *(float *)(unaff_RBX + 0x18),
                                  *(int32_t *)(unaff_RBX + 0x90),
                                  *(float *)(unaff_RBX + 0x94) + *(float *)(unaff_RBX + 0x94));
      fVar18 = (float)iVar7;
    }
    else {
      fVar18 = 0.0;
    }
    fVar17 = *(float *)(unaff_RBX + 0x14bc);
    if (unaff_XMM6_Da <= fVar17) {
      iVar7 = func_0x000180128180(fVar17,fVar17 - *(float *)(unaff_RBX + 0x18),
                                  *(int32_t *)(unaff_RBX + 0x90),
                                  *(float *)(unaff_RBX + 0x94) + *(float *)(unaff_RBX + 0x94));
      fVar17 = (float)iVar7;
    }
    else {
      fVar17 = 0.0;
    }
    uVar3 = (uint8_t)(unaff_R15 >> 8);
    if ((int)CONCAT71(uVar3,unaff_XMM6_Da < fVar18) != (int)CONCAT71(uVar3,unaff_XMM6_Da < fVar17))
    {
      FUN_180133680();
      *(int32_t *)(unaff_RBX + 0x1cf4) = 0x3f800000;
      fVar19 = 1.0;
    }
    if (*(float *)(unaff_RBX + 0x344) <= unaff_XMM6_Da) {
      bVar5 = fVar19 < 1.0 & *(byte *)(unaff_RBX + 0x1cf8);
      *(byte *)(unaff_RBX + 0x1cf8) = bVar5;
      if ((bVar5 == 0) || (*(longlong *)(unaff_RBX + 0x1c98) == unaff_RDI)) {
        if (bVar5 == 0) {
          unaff_RDI = *(longlong *)(unaff_RBX + 0x1cd8);
        }
      }
      else {
        unaff_R14B = '\x01';
      }
      *(ulonglong *)(unaff_RBX + 0x1cd8) = unaff_R15;
    }
  }
  lVar8 = *(longlong *)(unaff_RBX + 0x1cd8);
  cVar15 = (char)unaff_R15;
  if ((lVar8 != 0) && (*(int *)(unaff_RBX + 0x1cc0) == 3)) {
    fVar19 = (*(float *)(unaff_RBX + 0x1cf0) - 0.2) * 20.0;
    if (unaff_XMM6_Da <= fVar19) {
      if (1.0 <= fVar19) {
        fVar19 = 1.0;
      }
    }
    else {
      fVar19 = 0.0;
    }
    if (fVar19 <= *(float *)(unaff_RBX + 0x1cf4)) {
      fVar19 = *(float *)(unaff_RBX + 0x1cf4);
    }
    *(float *)(unaff_RBX + 0x1cf4) = fVar19;
    if (*(int *)(unaff_RBX + 0x3c) < 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = func_0x0001801281d0(*(int *)(unaff_RBX + 0x3c),1);
    }
    if (cVar4 != '\0') {
      FUN_180133680();
      lVar8 = *(longlong *)(unaff_RBX + 0x1cd8);
    }
    if (*(char *)(unaff_RBX + 0x134) == cVar15) {
      unaff_RDI = lVar8;
    }
  }
  if ((unaff_XMM6_Da <= *(float *)(unaff_RBX + 0x14c8)) &&
     (*(float *)(unaff_RBX + 0x14c8) == unaff_XMM6_Da)) {
    *(int8_t *)(unaff_RBX + 0x1cf8) = 1;
  }
  if ((((*(int *)(unaff_RBX + 0x1b2c) == iVar16) || (*(char *)(unaff_RBX + 0x1b3d) != cVar15)) &&
      (*(char *)(unaff_RBX + 0x1cf8) != cVar15)) &&
     ((*(float *)(unaff_RBX + 0x14c8) < unaff_XMM6_Da &&
      (unaff_XMM6_Da < *(float *)(unaff_RBX + 0x151c) ||
       unaff_XMM6_Da == *(float *)(unaff_RBX + 0x151c))))) {
    if ((*(float *)(unaff_RBX + 0x118) <= -256000.0 && *(float *)(unaff_RBX + 0x118) != -256000.0)
       || (*(float *)(unaff_RBX + 0x11c) <= -256000.0 && *(float *)(unaff_RBX + 0x11c) != -256000.0)
       ) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x01';
    }
    pfVar9 = (float *)(unaff_RBX + 0x3b4);
    if (pfVar9 == (float *)0x0) {
      pfVar9 = (float *)(unaff_RBX + 0x118);
    }
    if ((*pfVar9 <= -256000.0 && *pfVar9 != -256000.0) ||
       (pfVar9[1] <= -256000.0 && pfVar9[1] != -256000.0)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    if (cVar4 == cVar6) {
      unaff_R14B = '\x01';
    }
  }
  if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0xc) & 4) == 0)) {
    if (*(int *)(unaff_RBX + 0x1cc0) == 3) {
      if (*(char *)(unaff_RBX + 0x135) == cVar15) {
        uVar13 = 1;
        puVar11 = &stack0x000000a0;
LAB_180133c1e:
        pfVar9 = (float *)FUN_180131aa0(puVar11,uVar13,0,0);
        fVar19 = pfVar9[1];
        if ((*pfVar9 != unaff_XMM6_Da) || (fVar19 != unaff_XMM6_Da)) {
          fVar18 = *(float *)(unaff_RBX + 0xbc);
          if (*(float *)(unaff_RBX + 0xb8) <= *(float *)(unaff_RBX + 0xbc)) {
            fVar18 = *(float *)(unaff_RBX + 0xb8);
          }
          lVar8 = *(longlong *)(lVar8 + 0x3a0);
          fVar18 = (float)(int)(fVar18 * *(float *)(unaff_RBX + 0x18) * 800.0);
          *(float *)(lVar8 + 0x40) = *pfVar9 * fVar18 + *(float *)(lVar8 + 0x40);
          *(float *)(lVar8 + 0x44) = fVar19 * fVar18 + *(float *)(lVar8 + 0x44);
          *(int8_t *)(unaff_RBX + 0x1d07) = 1;
          if (((*(uint *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0xc) & 0x100) == 0) &&
             (*(float *)(unaff_RBX + 0x2e04) <= unaff_XMM6_Da)) {
            *(int32_t *)(unaff_RBX + 0x2e04) = *(int32_t *)(unaff_RBX + 0x1c);
          }
        }
      }
    }
    else if (*(int *)(unaff_RBX + 0x1cc0) == 4) {
      uVar13 = 4;
      puVar11 = &stack0x000000a8;
      goto LAB_180133c1e;
    }
  }
  if (unaff_RDI == 0) goto LAB_180133d4a;
  lVar8 = *(longlong *)(unaff_RBX + 0x1c98);
  uVar14 = unaff_R15;
  if (lVar8 == 0) {
LAB_180133ce2:
    *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
    if (*(longlong *)(unaff_RDI + 0x3c0) != 0) {
      unaff_RDI = *(longlong *)(unaff_RDI + 0x3c0);
    }
    FUN_18012ed10(unaff_RDI);
    FUN_18012d2e0(unaff_RDI);
    if (*(int *)(unaff_RDI + 0x3c8) == iVar16) {
      func_0x000180131810(unaff_RDI,0);
    }
    if (*(int *)(unaff_RDI + 0x174) == 2) {
      *(int32_t *)(unaff_RBX + 0x1cfc) = 1;
    }
    if ((*(ulonglong *)(unaff_RDI + 0x28) != uVar14) &&
       (*(code **)(unaff_RBX + 0x1578) != (code *)0x0)) {
      (**(code **)(unaff_RBX + 0x1578))();
    }
  }
  else if (unaff_RDI != *(longlong *)(lVar8 + 0x3a8)) {
    uVar14 = *(ulonglong *)(lVar8 + 0x28);
    goto LAB_180133ce2;
  }
  *(ulonglong *)(unaff_RBX + 0x1cd8) = unaff_R15;
LAB_180133d4a:
  if ((unaff_R14B != '\0') && (uVar14 = *(ulonglong *)(unaff_RBX + 0x1c98), uVar14 != 0)) {
    puVar1 = (ulonglong *)(uVar14 + 0x398);
    uVar12 = *puVar1;
    uVar2 = uVar14;
    while (((uVar12 != unaff_R15 && ((*(byte *)(uVar2 + 0x174) & 2) == 0)) &&
           ((*(uint *)(uVar2 + 0xc) & 0x15000000) == 0x1000000))) {
      uVar2 = *puVar1;
      puVar1 = (ulonglong *)(uVar2 + 0x398);
      uVar12 = *puVar1;
    }
    if (uVar2 != uVar14) {
      FUN_18012d2e0(uVar2);
      *(ulonglong *)(uVar2 + 0x3c0) = uVar14;
      uVar14 = *(ulonglong *)(unaff_RBX + 0x1c98);
    }
    *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
    if ((*(byte *)(uVar14 + 0x174) & 2) == 0) {
      uVar12 = unaff_R15 & 0xffffffff;
    }
    else {
      uVar10 = *(uint *)(unaff_RBX + 0x1cfc) ^ 1;
      uVar12 = (ulonglong)uVar10;
      if ((uVar10 == 1) && (*(ulonglong *)(uVar2 + 0x410) == unaff_R15)) {
        *(int *)(uVar14 + 0x3cc) = iVar16;
      }
    }
    func_0x000180131750(uVar12);
  }
  return;
}





// 函数: void FUN_18013396e(void)
void FUN_18013396e(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint8_t uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  int8_t *puVar10;
  uint64_t uVar12;
  longlong unaff_RBX;
  longlong lVar13;
  ulonglong uVar14;
  longlong unaff_RDI;
  char unaff_R14B;
  char cVar15;
  ulonglong unaff_R15;
  float fVar16;
  float fVar17;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fVar18;
  float unaff_XMM8_Da;
  ulonglong uVar11;
  
  fVar18 = unaff_XMM7_Da * 20.0;
  if (unaff_XMM6_Da <= fVar18) {
    if (unaff_XMM8_Da <= fVar18) {
      fVar18 = unaff_XMM8_Da;
    }
  }
  else {
    fVar18 = 0.0;
  }
  if (fVar18 <= *(float *)(unaff_RBX + 0x1cf4)) {
    fVar18 = *(float *)(unaff_RBX + 0x1cf4);
  }
  *(float *)(unaff_RBX + 0x1cf4) = fVar18;
  fVar17 = *(float *)(unaff_RBX + 0x14b8);
  if (unaff_XMM6_Da <= fVar17) {
    iVar7 = func_0x000180128180(fVar17,fVar17 - *(float *)(unaff_RBX + 0x18),
                                *(int32_t *)(unaff_RBX + 0x90),
                                *(float *)(unaff_RBX + 0x94) + *(float *)(unaff_RBX + 0x94));
    fVar17 = (float)iVar7;
  }
  else {
    fVar17 = 0.0;
  }
  fVar16 = *(float *)(unaff_RBX + 0x14bc);
  if (unaff_XMM6_Da <= fVar16) {
    iVar7 = func_0x000180128180(fVar16,fVar16 - *(float *)(unaff_RBX + 0x18),
                                *(int32_t *)(unaff_RBX + 0x90),
                                *(float *)(unaff_RBX + 0x94) + *(float *)(unaff_RBX + 0x94));
    fVar16 = (float)iVar7;
  }
  else {
    fVar16 = 0.0;
  }
  iVar7 = (int)unaff_R15;
  uVar3 = (uint8_t)(unaff_R15 >> 8);
  if ((int)CONCAT71(uVar3,unaff_XMM6_Da < fVar17) != (int)CONCAT71(uVar3,unaff_XMM6_Da < fVar16)) {
    FUN_180133680();
    *(int32_t *)(unaff_RBX + 0x1cf4) = 0x3f800000;
    fVar18 = unaff_XMM8_Da;
  }
  if (*(float *)(unaff_RBX + 0x344) <= unaff_XMM6_Da) {
    bVar4 = fVar18 < unaff_XMM8_Da & *(byte *)(unaff_RBX + 0x1cf8);
    *(byte *)(unaff_RBX + 0x1cf8) = bVar4;
    if ((bVar4 == 0) || (*(longlong *)(unaff_RBX + 0x1c98) == unaff_RDI)) {
      if (bVar4 == 0) {
        unaff_RDI = *(longlong *)(unaff_RBX + 0x1cd8);
      }
    }
    else {
      unaff_R14B = '\x01';
    }
    *(ulonglong *)(unaff_RBX + 0x1cd8) = unaff_R15;
  }
  lVar13 = *(longlong *)(unaff_RBX + 0x1cd8);
  cVar15 = (char)unaff_R15;
  if ((lVar13 != 0) && (*(int *)(unaff_RBX + 0x1cc0) == 3)) {
    fVar18 = (*(float *)(unaff_RBX + 0x1cf0) - 0.2) * 20.0;
    if (unaff_XMM6_Da <= fVar18) {
      if (unaff_XMM8_Da <= fVar18) {
        fVar18 = unaff_XMM8_Da;
      }
    }
    else {
      fVar18 = 0.0;
    }
    if (fVar18 <= *(float *)(unaff_RBX + 0x1cf4)) {
      fVar18 = *(float *)(unaff_RBX + 0x1cf4);
    }
    *(float *)(unaff_RBX + 0x1cf4) = fVar18;
    if (*(int *)(unaff_RBX + 0x3c) < 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = func_0x0001801281d0(*(int *)(unaff_RBX + 0x3c),1);
    }
    if (cVar5 != '\0') {
      FUN_180133680();
      lVar13 = *(longlong *)(unaff_RBX + 0x1cd8);
    }
    if (*(char *)(unaff_RBX + 0x134) == cVar15) {
      unaff_RDI = lVar13;
    }
  }
  if ((unaff_XMM6_Da <= *(float *)(unaff_RBX + 0x14c8)) &&
     (*(float *)(unaff_RBX + 0x14c8) == unaff_XMM6_Da)) {
    *(int8_t *)(unaff_RBX + 0x1cf8) = 1;
  }
  if ((((*(int *)(unaff_RBX + 0x1b2c) == iVar7) || (*(char *)(unaff_RBX + 0x1b3d) != cVar15)) &&
      (*(char *)(unaff_RBX + 0x1cf8) != cVar15)) &&
     ((*(float *)(unaff_RBX + 0x14c8) < unaff_XMM6_Da &&
      (unaff_XMM6_Da < *(float *)(unaff_RBX + 0x151c) ||
       unaff_XMM6_Da == *(float *)(unaff_RBX + 0x151c))))) {
    if ((*(float *)(unaff_RBX + 0x118) <= -256000.0 && *(float *)(unaff_RBX + 0x118) != -256000.0)
       || (*(float *)(unaff_RBX + 0x11c) <= -256000.0 && *(float *)(unaff_RBX + 0x11c) != -256000.0)
       ) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    pfVar8 = (float *)(unaff_RBX + 0x3b4);
    if (pfVar8 == (float *)0x0) {
      pfVar8 = (float *)(unaff_RBX + 0x118);
    }
    if ((*pfVar8 <= -256000.0 && *pfVar8 != -256000.0) ||
       (pfVar8[1] <= -256000.0 && pfVar8[1] != -256000.0)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    if (cVar5 == cVar6) {
      unaff_R14B = '\x01';
    }
  }
  if ((lVar13 != 0) && ((*(byte *)(lVar13 + 0xc) & 4) == 0)) {
    if (*(int *)(unaff_RBX + 0x1cc0) == 3) {
      if (*(char *)(unaff_RBX + 0x135) == cVar15) {
        uVar12 = 1;
        puVar10 = &stack0x000000a0;
LAB_180133c1e:
        pfVar8 = (float *)FUN_180131aa0(puVar10,uVar12,0,0);
        fVar18 = pfVar8[1];
        if ((*pfVar8 != unaff_XMM6_Da) || (fVar18 != unaff_XMM6_Da)) {
          fVar17 = *(float *)(unaff_RBX + 0xbc);
          if (*(float *)(unaff_RBX + 0xb8) <= *(float *)(unaff_RBX + 0xbc)) {
            fVar17 = *(float *)(unaff_RBX + 0xb8);
          }
          lVar13 = *(longlong *)(lVar13 + 0x3a0);
          fVar17 = (float)(int)(fVar17 * *(float *)(unaff_RBX + 0x18) * 800.0);
          *(float *)(lVar13 + 0x40) = *pfVar8 * fVar17 + *(float *)(lVar13 + 0x40);
          *(float *)(lVar13 + 0x44) = fVar18 * fVar17 + *(float *)(lVar13 + 0x44);
          *(int8_t *)(unaff_RBX + 0x1d07) = 1;
          if (((*(uint *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0xc) & 0x100) == 0) &&
             (*(float *)(unaff_RBX + 0x2e04) <= unaff_XMM6_Da)) {
            *(int32_t *)(unaff_RBX + 0x2e04) = *(int32_t *)(unaff_RBX + 0x1c);
          }
        }
      }
    }
    else if (*(int *)(unaff_RBX + 0x1cc0) == 4) {
      uVar12 = 4;
      puVar10 = &stack0x000000a8;
      goto LAB_180133c1e;
    }
  }
  if (unaff_RDI == 0) goto LAB_180133d4a;
  lVar13 = *(longlong *)(unaff_RBX + 0x1c98);
  uVar14 = unaff_R15;
  if (lVar13 == 0) {
LAB_180133ce2:
    *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
    if (*(longlong *)(unaff_RDI + 0x3c0) != 0) {
      unaff_RDI = *(longlong *)(unaff_RDI + 0x3c0);
    }
    FUN_18012ed10(unaff_RDI);
    FUN_18012d2e0(unaff_RDI);
    if (*(int *)(unaff_RDI + 0x3c8) == iVar7) {
      func_0x000180131810(unaff_RDI,0);
    }
    if (*(int *)(unaff_RDI + 0x174) == 2) {
      *(int32_t *)(unaff_RBX + 0x1cfc) = 1;
    }
    if ((*(ulonglong *)(unaff_RDI + 0x28) != uVar14) &&
       (*(code **)(unaff_RBX + 0x1578) != (code *)0x0)) {
      (**(code **)(unaff_RBX + 0x1578))();
    }
  }
  else if (unaff_RDI != *(longlong *)(lVar13 + 0x3a8)) {
    uVar14 = *(ulonglong *)(lVar13 + 0x28);
    goto LAB_180133ce2;
  }
  *(ulonglong *)(unaff_RBX + 0x1cd8) = unaff_R15;
LAB_180133d4a:
  if ((unaff_R14B != '\0') && (uVar14 = *(ulonglong *)(unaff_RBX + 0x1c98), uVar14 != 0)) {
    puVar1 = (ulonglong *)(uVar14 + 0x398);
    uVar11 = *puVar1;
    uVar2 = uVar14;
    while (((uVar11 != unaff_R15 && ((*(byte *)(uVar2 + 0x174) & 2) == 0)) &&
           ((*(uint *)(uVar2 + 0xc) & 0x15000000) == 0x1000000))) {
      uVar2 = *puVar1;
      puVar1 = (ulonglong *)(uVar2 + 0x398);
      uVar11 = *puVar1;
    }
    if (uVar2 != uVar14) {
      FUN_18012d2e0(uVar2);
      *(ulonglong *)(uVar2 + 0x3c0) = uVar14;
      uVar14 = *(ulonglong *)(unaff_RBX + 0x1c98);
    }
    *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
    if ((*(byte *)(uVar14 + 0x174) & 2) == 0) {
      uVar11 = unaff_R15 & 0xffffffff;
    }
    else {
      uVar9 = *(uint *)(unaff_RBX + 0x1cfc) ^ 1;
      uVar11 = (ulonglong)uVar9;
      if ((uVar9 == 1) && (*(ulonglong *)(uVar2 + 0x410) == unaff_R15)) {
        *(int *)(uVar14 + 0x3cc) = iVar7;
      }
    }
    func_0x000180131750(uVar11);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180133a60)
// WARNING: Removing unreachable block (ram,0x000180133a69)



// 函数: void FUN_180133a2f(void)
void FUN_180133a2f(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  char cVar4;
  float *pfVar5;
  uint uVar6;
  int8_t *puVar7;
  uint64_t uVar9;
  longlong unaff_RBX;
  longlong lVar10;
  ulonglong uVar11;
  longlong unaff_RDI;
  char unaff_R14B;
  char cVar12;
  int iVar13;
  ulonglong unaff_R15;
  float fVar14;
  float fVar15;
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  ulonglong uVar8;
  
  FUN_180133680();
  *(int32_t *)(unaff_RBX + 0x1cf4) = 0x3f800000;
  if (*(float *)(unaff_RBX + 0x344) <= unaff_XMM6_Da) {
    *(int8_t *)(unaff_RBX + 0x1cf8) = 0;
    unaff_RDI = *(longlong *)(unaff_RBX + 0x1cd8);
    *(ulonglong *)(unaff_RBX + 0x1cd8) = unaff_R15;
  }
  lVar10 = *(longlong *)(unaff_RBX + 0x1cd8);
  cVar12 = (char)unaff_R15;
  if ((lVar10 != 0) && (*(int *)(unaff_RBX + 0x1cc0) == 3)) {
    fVar14 = (*(float *)(unaff_RBX + 0x1cf0) - 0.2) * 20.0;
    if (unaff_XMM6_Da <= fVar14) {
      if (unaff_XMM8_Da <= fVar14) {
        fVar14 = unaff_XMM8_Da;
      }
    }
    else {
      fVar14 = 0.0;
    }
    if (fVar14 <= *(float *)(unaff_RBX + 0x1cf4)) {
      fVar14 = *(float *)(unaff_RBX + 0x1cf4);
    }
    *(float *)(unaff_RBX + 0x1cf4) = fVar14;
    if (*(int *)(unaff_RBX + 0x3c) < 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = func_0x0001801281d0(*(int *)(unaff_RBX + 0x3c),1);
    }
    if (cVar3 != '\0') {
      FUN_180133680();
      lVar10 = *(longlong *)(unaff_RBX + 0x1cd8);
    }
    if (*(char *)(unaff_RBX + 0x134) == cVar12) {
      unaff_RDI = lVar10;
    }
  }
  if ((unaff_XMM6_Da <= *(float *)(unaff_RBX + 0x14c8)) &&
     (*(float *)(unaff_RBX + 0x14c8) == unaff_XMM6_Da)) {
    *(int8_t *)(unaff_RBX + 0x1cf8) = 1;
  }
  iVar13 = (int)unaff_R15;
  if ((((*(int *)(unaff_RBX + 0x1b2c) == iVar13) || (*(char *)(unaff_RBX + 0x1b3d) != cVar12)) &&
      (*(char *)(unaff_RBX + 0x1cf8) != cVar12)) &&
     ((*(float *)(unaff_RBX + 0x14c8) < unaff_XMM6_Da &&
      (unaff_XMM6_Da < *(float *)(unaff_RBX + 0x151c) ||
       unaff_XMM6_Da == *(float *)(unaff_RBX + 0x151c))))) {
    if ((*(float *)(unaff_RBX + 0x118) <= -256000.0 && *(float *)(unaff_RBX + 0x118) != -256000.0)
       || (*(float *)(unaff_RBX + 0x11c) <= -256000.0 && *(float *)(unaff_RBX + 0x11c) != -256000.0)
       ) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    pfVar5 = (float *)(unaff_RBX + 0x3b4);
    if (pfVar5 == (float *)0x0) {
      pfVar5 = (float *)(unaff_RBX + 0x118);
    }
    if ((*pfVar5 <= -256000.0 && *pfVar5 != -256000.0) ||
       (pfVar5[1] <= -256000.0 && pfVar5[1] != -256000.0)) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x01';
    }
    if (cVar3 == cVar4) {
      unaff_R14B = '\x01';
    }
  }
  if ((lVar10 != 0) && ((*(byte *)(lVar10 + 0xc) & 4) == 0)) {
    if (*(int *)(unaff_RBX + 0x1cc0) == 3) {
      if (*(char *)(unaff_RBX + 0x135) == cVar12) {
        uVar9 = 1;
        puVar7 = &stack0x000000a0;
LAB_180133c1e:
        pfVar5 = (float *)FUN_180131aa0(puVar7,uVar9,0,0);
        fVar14 = pfVar5[1];
        if ((*pfVar5 != unaff_XMM6_Da) || (fVar14 != unaff_XMM6_Da)) {
          fVar15 = *(float *)(unaff_RBX + 0xbc);
          if (*(float *)(unaff_RBX + 0xb8) <= *(float *)(unaff_RBX + 0xbc)) {
            fVar15 = *(float *)(unaff_RBX + 0xb8);
          }
          lVar10 = *(longlong *)(lVar10 + 0x3a0);
          fVar15 = (float)(int)(fVar15 * *(float *)(unaff_RBX + 0x18) * 800.0);
          *(float *)(lVar10 + 0x40) = *pfVar5 * fVar15 + *(float *)(lVar10 + 0x40);
          *(float *)(lVar10 + 0x44) = fVar14 * fVar15 + *(float *)(lVar10 + 0x44);
          *(int8_t *)(unaff_RBX + 0x1d07) = 1;
          if (((*(uint *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0xc) & 0x100) == 0) &&
             (*(float *)(unaff_RBX + 0x2e04) <= unaff_XMM6_Da)) {
            *(int32_t *)(unaff_RBX + 0x2e04) = *(int32_t *)(unaff_RBX + 0x1c);
          }
        }
      }
    }
    else if (*(int *)(unaff_RBX + 0x1cc0) == 4) {
      uVar9 = 4;
      puVar7 = &stack0x000000a8;
      goto LAB_180133c1e;
    }
  }
  if (unaff_RDI == 0) goto LAB_180133d4a;
  lVar10 = *(longlong *)(unaff_RBX + 0x1c98);
  uVar11 = unaff_R15;
  if (lVar10 == 0) {
LAB_180133ce2:
    *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
    if (*(longlong *)(unaff_RDI + 0x3c0) != 0) {
      unaff_RDI = *(longlong *)(unaff_RDI + 0x3c0);
    }
    FUN_18012ed10(unaff_RDI);
    FUN_18012d2e0(unaff_RDI);
    if (*(int *)(unaff_RDI + 0x3c8) == iVar13) {
      func_0x000180131810(unaff_RDI,0);
    }
    if (*(int *)(unaff_RDI + 0x174) == 2) {
      *(int32_t *)(unaff_RBX + 0x1cfc) = 1;
    }
    if ((*(ulonglong *)(unaff_RDI + 0x28) != uVar11) &&
       (*(code **)(unaff_RBX + 0x1578) != (code *)0x0)) {
      (**(code **)(unaff_RBX + 0x1578))();
    }
  }
  else if (unaff_RDI != *(longlong *)(lVar10 + 0x3a8)) {
    uVar11 = *(ulonglong *)(lVar10 + 0x28);
    goto LAB_180133ce2;
  }
  *(ulonglong *)(unaff_RBX + 0x1cd8) = unaff_R15;
LAB_180133d4a:
  if ((unaff_R14B != '\0') && (uVar11 = *(ulonglong *)(unaff_RBX + 0x1c98), uVar11 != 0)) {
    puVar1 = (ulonglong *)(uVar11 + 0x398);
    uVar8 = *puVar1;
    uVar2 = uVar11;
    while (((uVar8 != unaff_R15 && ((*(byte *)(uVar2 + 0x174) & 2) == 0)) &&
           ((*(uint *)(uVar2 + 0xc) & 0x15000000) == 0x1000000))) {
      uVar2 = *puVar1;
      puVar1 = (ulonglong *)(uVar2 + 0x398);
      uVar8 = *puVar1;
    }
    if (uVar2 != uVar11) {
      FUN_18012d2e0(uVar2);
      *(ulonglong *)(uVar2 + 0x3c0) = uVar11;
      uVar11 = *(ulonglong *)(unaff_RBX + 0x1c98);
    }
    *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
    if ((*(byte *)(uVar11 + 0x174) & 2) == 0) {
      uVar8 = unaff_R15 & 0xffffffff;
    }
    else {
      uVar6 = *(uint *)(unaff_RBX + 0x1cfc) ^ 1;
      uVar8 = (ulonglong)uVar6;
      if ((uVar6 == 1) && (*(ulonglong *)(uVar2 + 0x410) == unaff_R15)) {
        *(int *)(uVar11 + 0x3cc) = iVar13;
      }
    }
    func_0x000180131750(uVar8);
  }
  return;
}





// 函数: void FUN_180133a9b(void)
void FUN_180133a9b(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  char cVar5;
  float *pfVar6;
  uint uVar7;
  int8_t *puVar8;
  longlong unaff_RBX;
  longlong unaff_RSI;
  ulonglong uVar10;
  longlong unaff_RDI;
  char cVar11;
  uint unaff_R12D;
  char unaff_R14B;
  char cVar12;
  int iVar13;
  ulonglong unaff_R15;
  float fVar14;
  float fVar15;
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  ulonglong uVar9;
  
  cVar11 = (char)unaff_R12D;
  cVar12 = (char)unaff_R15;
  if (*(int *)(unaff_RBX + 0x1cc0) == 3) {
    fVar14 = (*(float *)(unaff_RBX + 0x1cf0) - 0.2) * 20.0;
    if (unaff_XMM6_Da <= fVar14) {
      if (unaff_XMM8_Da <= fVar14) {
        fVar14 = unaff_XMM8_Da;
      }
    }
    else {
      fVar14 = 0.0;
    }
    if (fVar14 <= *(float *)(unaff_RBX + 0x1cf4)) {
      fVar14 = *(float *)(unaff_RBX + 0x1cf4);
    }
    *(float *)(unaff_RBX + 0x1cf4) = fVar14;
    if (*(int *)(unaff_RBX + 0x3c) < 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = func_0x0001801281d0(*(int *)(unaff_RBX + 0x3c),unaff_R12D & 0xff);
    }
    if (cVar4 != '\0') {
      FUN_180133680();
      unaff_RSI = *(longlong *)(unaff_RBX + 0x1cd8);
    }
    if (*(char *)(unaff_RBX + 0x134) == cVar12) {
      unaff_RDI = unaff_RSI;
    }
  }
  if ((unaff_XMM6_Da <= *(float *)(unaff_RBX + 0x14c8)) &&
     (*(float *)(unaff_RBX + 0x14c8) == unaff_XMM6_Da)) {
    *(char *)(unaff_RBX + 0x1cf8) = cVar11;
  }
  iVar13 = (int)unaff_R15;
  if ((((*(int *)(unaff_RBX + 0x1b2c) == iVar13) || (*(char *)(unaff_RBX + 0x1b3d) != cVar12)) &&
      (*(char *)(unaff_RBX + 0x1cf8) != cVar12)) &&
     ((*(float *)(unaff_RBX + 0x14c8) < unaff_XMM6_Da &&
      (unaff_XMM6_Da < *(float *)(unaff_RBX + 0x151c) ||
       unaff_XMM6_Da == *(float *)(unaff_RBX + 0x151c))))) {
    if ((*(float *)(unaff_RBX + 0x118) <= -256000.0 && *(float *)(unaff_RBX + 0x118) != -256000.0)
       || (cVar4 = cVar11,
          *(float *)(unaff_RBX + 0x11c) <= -256000.0 && *(float *)(unaff_RBX + 0x11c) != -256000.0))
    {
      cVar4 = '\0';
    }
    pfVar6 = (float *)(unaff_RBX + 0x3b4);
    if (pfVar6 == (float *)0x0) {
      pfVar6 = (float *)(unaff_RBX + 0x118);
    }
    if ((*pfVar6 <= -256000.0 && *pfVar6 != -256000.0) ||
       (cVar5 = cVar11, pfVar6[1] <= -256000.0 && pfVar6[1] != -256000.0)) {
      cVar5 = '\0';
    }
    if (cVar4 == cVar5) {
      unaff_R14B = cVar11;
    }
  }
  if ((unaff_RSI != 0) && ((*(byte *)(unaff_RSI + 0xc) & 4) == 0)) {
    if (*(int *)(unaff_RBX + 0x1cc0) == 3) {
      if (*(char *)(unaff_RBX + 0x135) == cVar12) {
        puVar8 = &stack0x000000a0;
        uVar7 = unaff_R12D;
LAB_180133c1e:
        pfVar6 = (float *)FUN_180131aa0(puVar8,uVar7,0,0);
        fVar14 = pfVar6[1];
        if ((*pfVar6 != unaff_XMM6_Da) || (fVar14 != unaff_XMM6_Da)) {
          fVar15 = *(float *)(unaff_RBX + 0xbc);
          if (*(float *)(unaff_RBX + 0xb8) <= *(float *)(unaff_RBX + 0xbc)) {
            fVar15 = *(float *)(unaff_RBX + 0xb8);
          }
          lVar2 = *(longlong *)(unaff_RSI + 0x3a0);
          fVar15 = (float)(int)(fVar15 * *(float *)(unaff_RBX + 0x18) * 800.0);
          *(float *)(lVar2 + 0x40) = *pfVar6 * fVar15 + *(float *)(lVar2 + 0x40);
          *(float *)(lVar2 + 0x44) = fVar14 * fVar15 + *(float *)(lVar2 + 0x44);
          *(char *)(unaff_RBX + 0x1d07) = cVar11;
          if (((*(uint *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0xc) & 0x100) == 0) &&
             (*(float *)(unaff_RBX + 0x2e04) <= unaff_XMM6_Da)) {
            *(int32_t *)(unaff_RBX + 0x2e04) = *(int32_t *)(unaff_RBX + 0x1c);
          }
        }
      }
    }
    else if (*(int *)(unaff_RBX + 0x1cc0) == 4) {
      uVar7 = 4;
      puVar8 = &stack0x000000a8;
      goto LAB_180133c1e;
    }
  }
  if (unaff_RDI == 0) goto LAB_180133d4a;
  lVar2 = *(longlong *)(unaff_RBX + 0x1c98);
  uVar10 = unaff_R15;
  if (lVar2 == 0) {
LAB_180133ce2:
    *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
    if (*(longlong *)(unaff_RDI + 0x3c0) != 0) {
      unaff_RDI = *(longlong *)(unaff_RDI + 0x3c0);
    }
    FUN_18012ed10(unaff_RDI);
    FUN_18012d2e0(unaff_RDI);
    if (*(int *)(unaff_RDI + 0x3c8) == iVar13) {
      func_0x000180131810(unaff_RDI,0);
    }
    if (*(int *)(unaff_RDI + 0x174) == 2) {
      *(uint *)(unaff_RBX + 0x1cfc) = unaff_R12D;
    }
    if ((*(ulonglong *)(unaff_RDI + 0x28) != uVar10) &&
       (*(code **)(unaff_RBX + 0x1578) != (code *)0x0)) {
      (**(code **)(unaff_RBX + 0x1578))();
    }
  }
  else if (unaff_RDI != *(longlong *)(lVar2 + 0x3a8)) {
    uVar10 = *(ulonglong *)(lVar2 + 0x28);
    goto LAB_180133ce2;
  }
  *(ulonglong *)(unaff_RBX + 0x1cd8) = unaff_R15;
LAB_180133d4a:
  if ((unaff_R14B != '\0') && (uVar10 = *(ulonglong *)(unaff_RBX + 0x1c98), uVar10 != 0)) {
    puVar1 = (ulonglong *)(uVar10 + 0x398);
    uVar9 = *puVar1;
    uVar3 = uVar10;
    while (((uVar9 != unaff_R15 && ((*(byte *)(uVar3 + 0x174) & 2) == 0)) &&
           ((*(uint *)(uVar3 + 0xc) & 0x15000000) == 0x1000000))) {
      uVar3 = *puVar1;
      puVar1 = (ulonglong *)(uVar3 + 0x398);
      uVar9 = *puVar1;
    }
    if (uVar3 != uVar10) {
      FUN_18012d2e0(uVar3);
      *(ulonglong *)(uVar3 + 0x3c0) = uVar10;
      uVar10 = *(ulonglong *)(unaff_RBX + 0x1c98);
    }
    *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
    if ((*(byte *)(uVar10 + 0x174) & 2) == 0) {
      uVar9 = unaff_R15 & 0xffffffff;
    }
    else {
      uVar7 = *(uint *)(unaff_RBX + 0x1cfc) ^ 1;
      uVar9 = (ulonglong)uVar7;
      if ((uVar7 == 1) && (*(ulonglong *)(uVar3 + 0x410) == unaff_R15)) {
        *(int *)(uVar10 + 0x3cc) = iVar13;
      }
    }
    func_0x000180131750(uVar9);
  }
  return;
}





