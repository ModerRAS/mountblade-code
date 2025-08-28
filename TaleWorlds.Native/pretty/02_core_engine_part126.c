#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part126.c - 5 个函数

// 函数: void FUN_18012c305(void)
void FUN_18012c305(void)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  int8_t *puVar5;
  longlong lVar6;
  char cVar7;
  int32_t uVar8;
  longlong in_RAX;
  uint64_t uVar9;
  int32_t *puVar10;
  longlong lVar11;
  float *pfVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  int8_t uVar15;
  float *unaff_RBP;
  longlong unaff_RSI;
  int32_t uVar16;
  uint64_t unaff_RDI;
  float *unaff_R12;
  char unaff_R14B;
  uint unaff_R15D;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_XMM11_Da;
  float unaff_XMM13_Da;
  uint64_t in_stack_00000020;
  int32_t uVar22;
  longlong in_stack_00000040;
  int32_t in_stack_00000050;
  float in_stack_00000078;
  
  uVar22 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
  *(float *)(in_RAX + 0x278) =
       ((*(float *)(in_RAX + 0x40) - *(float *)(in_RAX + 0x8c)) - *(float *)(in_RAX + 0x70)) +
       (*(float *)(in_RAX + 0x48) - *(float *)(in_RAX + 0xa4));
  fVar19 = *(float *)(in_stack_00000040 + 0x6c);
  if (fVar19 == unaff_XMM13_Da) {
    fVar19 = *(float *)(in_stack_00000040 + 0x4c) - *(float *)(in_stack_00000040 + 0xa8);
  }
  *(float *)(in_stack_00000040 + 0x27c) =
       ((*(float *)(in_stack_00000040 + 0x44) - *(float *)(in_stack_00000040 + 0x90)) -
       *(float *)(in_stack_00000040 + 0x74)) + fVar19;
  *(float *)(in_stack_00000040 + 0x204) =
       *(float *)(in_stack_00000040 + 0x70) - *(float *)(in_stack_00000040 + 0x8c);
  uVar16 = (int32_t)unaff_RDI;
  *(int32_t *)(in_stack_00000040 + 0x208) = uVar16;
  *(int32_t *)(in_stack_00000040 + 0x20c) = uVar16;
  func_0x00018010e7a0(in_stack_00000040);
  func_0x00018010e760(in_stack_00000040);
  uVar9 = func_0x00018004ba20(unaff_RBP + -0x18,
                              *(float *)(in_stack_00000040 + 0x20c) +
                              *(float *)(in_stack_00000040 + 0x204));
  puVar10 = (int32_t *)func_0x00018011fbf0(unaff_RBP + -0xe,in_stack_00000040 + 0x40,uVar9);
  uVar8 = puVar10[1];
  *(int32_t *)(in_stack_00000040 + 0x110) = *puVar10;
  *(int32_t *)(in_stack_00000040 + 0x114) = uVar8;
  *(uint64_t *)(in_stack_00000040 + 0x100) = *(uint64_t *)(in_stack_00000040 + 0x110);
  *(uint64_t *)(in_stack_00000040 + 0x108) = *(uint64_t *)(in_stack_00000040 + 0x110);
  *(uint64_t *)(in_stack_00000040 + 0x118) = *(uint64_t *)(in_stack_00000040 + 0x110);
  puVar10 = (int32_t *)func_0x00018004ba20(unaff_RBP + -0x18);
  uVar8 = puVar10[1];
  *(int32_t *)(in_stack_00000040 + 300) = *puVar10;
  *(int32_t *)(in_stack_00000040 + 0x130) = uVar8;
  *(uint64_t *)(in_stack_00000040 + 0x120) = *(uint64_t *)(in_stack_00000040 + 300);
  *(int32_t *)(in_stack_00000040 + 0x134) = uVar16;
  *(int32_t *)(in_stack_00000040 + 0x128) = uVar16;
  *(int8_t *)(in_stack_00000040 + 0x17c) = 0;
  fVar19 = (float)func_0x0001801293c0(in_stack_00000040);
  *(bool *)(in_stack_00000040 + 0x17d) = unaff_XMM13_Da < fVar19;
  *(int32_t *)(in_stack_00000040 + 0x174) = *(int32_t *)(in_stack_00000040 + 0x178);
  *(int32_t *)(in_stack_00000040 + 0x178) = uVar16;
  *(int8_t *)(in_stack_00000040 + 0x17e) = 0;
  *(float *)(in_stack_00000040 + 0x138) = *(float *)(in_stack_00000040 + 0x104) - 9999.0;
  FUN_18013e200(in_stack_00000040 + 0x188,0);
  lVar4 = *(longlong *)(unaff_RBP + 8);
  *(int32_t *)(in_stack_00000040 + 0x1a0) = 1;
  if (lVar4 == 0) {
    uVar8 = 1;
  }
  else {
    uVar8 = *(int32_t *)(lVar4 + 0x1a0);
  }
  *(int32_t *)(in_stack_00000040 + 0x1a4) = uVar8;
  uVar8 = uVar16;
  if (lVar4 != 0) {
    uVar8 = *(int32_t *)(lVar4 + 0x1a8);
  }
  *(int32_t *)(in_stack_00000040 + 0x1a8) = uVar8;
  *(int32_t *)(in_stack_00000040 + 0x1ac) = *(int32_t *)(in_stack_00000040 + 0x284);
  *(int32_t *)(in_stack_00000040 + 0x1b0) = 0xbf800000;
  FUN_18013e340(in_stack_00000040 + 0x1b8,0);
  FUN_18013e2f0(in_stack_00000040 + 0x1c8,0);
  FUN_18013e2f0(in_stack_00000040 + 0x1d8,0);
  *(uint64_t *)(in_stack_00000040 + 0x210) = unaff_RDI;
  *(int32_t *)(in_stack_00000040 + 0x13c) = uVar16;
  *(int32_t *)(in_stack_00000040 + 0x140) = uVar16;
  *(longlong *)(in_stack_00000040 + 0x198) = in_stack_00000040 + 0x2b8;
  FUN_18013db40(in_stack_00000040 + 0x1e8,0);
  func_0x00018011a9d0(in_stack_00000040 + 0x288,3);
  if ((unaff_RBP[0x16] != 0.0) && (*(int *)(in_stack_00000040 + 0x1a8) != *(int *)(lVar4 + 0x1a8)))
  {
    *(int *)(in_stack_00000040 + 0x1a8) = *(int *)(lVar4 + 0x1a8);
    FUN_18011d940(in_stack_00000040 + 0x1b8,in_stack_00000040 + 0x1a8);
  }
  if (0 < *(int *)(in_stack_00000040 + 0xc4)) {
    *(int *)(in_stack_00000040 + 0xc4) = *(int *)(in_stack_00000040 + 0xc4) + -1;
  }
  if (0 < *(int *)(in_stack_00000040 + 200)) {
    *(int *)(in_stack_00000040 + 200) = *(int *)(in_stack_00000040 + 200) + -1;
  }
  if (unaff_R14B != '\0') {
    FUN_18012d2e0(in_stack_00000040);
    func_0x000180131810(in_stack_00000040,0);
  }
  puVar5 = *(int8_t **)(unaff_RBP + 10);
  if ((((puVar5 != (int8_t *)0x0) &&
       (lVar6 = *(longlong *)(in_stack_00000040 + 0x28), *(char *)(lVar6 + 0x48) != '\0')) &&
      (lVar11 = func_0x00018012fae0(), lVar6 != lVar11)) &&
     (((*(byte *)(in_stack_00000040 + 0x432) & 1) == 0 ||
      ((*(byte *)(in_stack_00000040 + 0x432) & 2) != 0)))) {
    *(int8_t *)(lVar6 + 0x48) = 0;
    *(int8_t *)(unaff_RSI + 0x1cf8) = 0;
    *puVar5 = 0;
  }
  if (((unaff_R15D & 1) == 0) && ((*(byte *)(in_stack_00000040 + 0x432) & 1) == 0)) {
    uVar3 = *(uint *)(in_stack_00000040 + 0x1a8);
    *(uint *)(in_stack_00000040 + 0x1a8) = uVar3 | 0x10;
    *(int32_t *)(in_stack_00000040 + 0x16c) = 1;
    *(int32_t *)(in_stack_00000040 + 0x170) = 2;
    if ((unaff_R15D & 0x20) == 0) {
      uVar8 = FUN_180123c00(in_stack_00000040,&UNK_180a064b0,0);
      cVar7 = FUN_180110000(uVar8,in_stack_00000040 + 0x40,0);
      if (cVar7 != '\0') {
        *(int8_t *)(in_stack_00000040 + 0xb3) = 1;
      }
    }
    if (*(longlong *)(unaff_RBP + 10) != 0) {
      fVar19 = *(float *)(unaff_RSI + 0x19f8) * unaff_XMM11_Da;
      uVar9 = func_0x00018004ba20(unaff_RBP + -0x18,
                                  ((*(float *)(in_stack_00000040 + 0x48) +
                                   *(float *)(in_stack_00000040 + 0x40)) -
                                  *(float *)(unaff_RSI + 0x165c)) - fVar19,
                                  *(float *)(in_stack_00000040 + 0x44) +
                                  *(float *)(unaff_RSI + 0x1660) + fVar19);
      uVar8 = FUN_180123c00(in_stack_00000040,&UNK_180a064d0,0);
      cVar7 = FUN_18010fd40(uVar8,uVar9);
      if (cVar7 != '\0') {
        **(int8_t **)(unaff_RBP + 10) = 0;
      }
    }
    *(int32_t *)(in_stack_00000040 + 0x16c) = 0;
    *(int32_t *)(in_stack_00000040 + 0x170) = 1;
    *(uint *)(in_stack_00000040 + 0x1a8) = uVar3;
    fVar19 = unaff_XMM13_Da;
    if ((unaff_R15D & 0x100000) != 0) {
      uVar9 = CONCAT44(uVar22,0xbf800000);
      pfVar12 = (float *)FUN_180127c60(unaff_RBP + -0x18,&DAT_1809fdf28,0,0,uVar9);
      uVar22 = (int32_t)((ulonglong)uVar9 >> 0x20);
      fVar19 = *pfVar12;
    }
    uVar9 = func_0x00018004ba20(unaff_RBP + -0x18);
    uVar13 = FUN_180127c60(unaff_RBP + -0xe,*(uint64_t *)(unaff_RBP + 0x1e),0,1,
                           CONCAT44(uVar22,0xbf800000));
    func_0x00018011fbf0(&stack0x00000050,uVar13,uVar9);
    fVar1 = unaff_RBP[-2];
    fVar18 = unaff_RBP[-1];
    fVar2 = *unaff_RBP;
    fVar20 = unaff_RBP[1];
    unaff_RBP[-0x1c] = fVar1;
    unaff_RBP[-0x1b] = fVar18;
    unaff_RBP[-0x1a] = fVar2;
    unaff_RBP[-0x19] = fVar20;
    if ((unaff_R15D & 0x20) == 0) {
      fVar17 = *(float *)(unaff_RSI + 0x165c);
      fVar21 = fVar17 + *(float *)(unaff_RSI + 0x19f8) + *(float *)(unaff_RSI + 0x1674);
    }
    else {
      fVar21 = *(float *)(unaff_RSI + 0x165c);
      fVar17 = fVar21;
    }
    lVar6 = *(longlong *)(unaff_RBP + 10);
    if (lVar6 != 0) {
      fVar17 = fVar17 + *(float *)(unaff_RSI + 0x19f8) + *(float *)(unaff_RSI + 0x1674);
    }
    if (unaff_XMM13_Da < *(float *)(unaff_RSI + 0x1644)) {
      fVar17 = (float)func_0x00018013e9f0();
      fVar20 = unaff_RBP[-0x19];
      fVar2 = unaff_RBP[-0x1a];
      fVar18 = unaff_RBP[-0x1b];
      fVar1 = unaff_RBP[-0x1c];
    }
    unaff_RBP[-7] = fVar18;
    unaff_RBP[-5] = fVar20;
    unaff_RBP[-0x1c] = fVar1 + fVar21;
    unaff_RBP[-0x1a] = fVar2 - fVar17;
    unaff_RBP[-8] = fVar1 + fVar21;
    unaff_RBP[-6] = fVar2 - fVar17;
    if (lVar6 == 0) {
      fVar18 = *(float *)(unaff_RSI + 0x165c);
    }
    else {
      fVar18 = (float)func_0x00018010e5a0(unaff_RBP + -2);
      fVar18 = fVar18 - 3.0;
    }
    unaff_RBP[-6] =
         (*(float *)(in_stack_00000040 + 0x48) + *(float *)(in_stack_00000040 + 0x40)) - fVar18;
    FUN_180122890(unaff_RBP + -0x1c,unaff_RBP + -0x1a,*(uint64_t *)(unaff_RBP + 0x1e),0,
                  &stack0x00000050);
    if ((unaff_R15D & 0x100000) == 0) {
      unaff_RDI = 0;
    }
    else {
      uVar9 = func_0x00018004ba20(unaff_RBP + -0x14,2.0 - fVar19);
      func_0x00018010e590(unaff_RBP + -0x1c);
      func_0x00018013e900();
      uVar13 = func_0x00018004ba20(unaff_RBP + 0x18);
      func_0x00018011fbf0(unaff_RBP + -0x18,uVar13,uVar9);
      func_0x00018004ba20(unaff_RBP + -0xe);
      func_0x00018004ba20(unaff_RBP + -0x14);
      uVar9 = func_0x00018011fbf0(unaff_RBP + 0x18,unaff_RBP + -0x1a,unaff_RBP + -0xe);
      uVar13 = func_0x00018011fbf0(unaff_RBP + 0x1c,unaff_RBP + -0x18,unaff_RBP + -0xe);
      unaff_RDI = 0;
      FUN_180122890(uVar13,uVar9,&DAT_1809fdf28,0,0);
    }
  }
  *(short *)(in_stack_00000040 + 0x26a) = (short)unaff_RDI;
  *(short *)(in_stack_00000040 + 0x268) = (short)unaff_RDI;
  puVar14 = (uint64_t *)func_0x00018010e720(in_stack_00000040,unaff_RBP + 0x20);
  uVar9 = puVar14[1];
  *(uint64_t *)(in_stack_00000040 + 0x238) = *puVar14;
  *(uint64_t *)(in_stack_00000040 + 0x240) = uVar9;
  if ((*(byte *)(in_stack_00000040 + 0x432) & 1) != 0) {
    fVar19 = (float)func_0x00018010e760();
    *(float *)(in_stack_00000040 + 0x23c) = fVar19 + *(float *)(in_stack_00000040 + 0x23c);
  }
  func_0x00018010e690(in_stack_00000040 + 0x238,in_stack_00000040 + 0x228);
  *(float *)(in_stack_00000040 + 0x248) = unaff_RBP[-2] + *(float *)(in_stack_00000040 + 0x7c);
  if ((unaff_R15D & 0x401) == 1) {
    unaff_R12 = (float *)(in_stack_00000040 + 0x7c);
  }
  fVar19 = *unaff_R12;
  fVar18 = (float)func_0x00018010e7a0();
  *(float *)(in_stack_00000040 + 0x24c) = fVar18 + unaff_RBP[1] + fVar19;
  *(float *)(in_stack_00000040 + 0x250) =
       ((*(float *)(in_stack_00000040 + 0x48) + *(float *)(in_stack_00000040 + 0x40)) -
       *(float *)(in_stack_00000040 + 0xa4)) - *(float *)(in_stack_00000040 + 0x7c);
  *(float *)(in_stack_00000040 + 0x254) =
       ((*(float *)(in_stack_00000040 + 0x4c) + *(float *)(in_stack_00000040 + 0x44)) -
       *(float *)(in_stack_00000040 + 0xa8)) - *(float *)(in_stack_00000040 + 0x7c);
  fVar19 = (float)func_0x00018013e900();
  *(float *)(in_stack_00000040 + 600) =
       (float)(int)(fVar19 + *(float *)(in_stack_00000040 + 0x248) + unaff_XMM11_Da);
  *(float *)(in_stack_00000040 + 0x25c) =
       (float)(int)(*(float *)(in_stack_00000040 + 0x24c) + unaff_XMM11_Da);
  fVar19 = *(float *)(in_stack_00000040 + 0x250);
  fVar18 = (float)func_0x00018013e900();
  *(float *)(in_stack_00000040 + 0x260) = (float)(int)((fVar19 + unaff_XMM11_Da) - fVar18);
  *(float *)(in_stack_00000040 + 0x264) =
       (float)(int)(*(float *)(in_stack_00000040 + 0x254) + unaff_XMM11_Da);
  if ((*(byte *)(unaff_RSI + 8) & 0x40) != 0) {
    if ((*(int *)(unaff_RSI + 0x1b2c) == *(int *)(in_stack_00000040 + 0x84)) &&
       (((*(char *)(unaff_RSI + 0xc1) == '\0' || (*(char *)(unaff_RSI + 0x135) != '\0')) &&
        ((*(uint *)(*(longlong *)(in_stack_00000040 + 0x3a0) + 0xc) & 0x200004) == 0)))) {
      FUN_18013ba30();
    }
    if ((((*(char *)(unaff_RSI + 0x1dd0) != '\0') && ((unaff_R15D >> 0x15 & 1) == 0)) &&
        ((*(longlong *)(unaff_RSI + 0x1b78) == 0 ||
         (*(longlong *)(*(longlong *)(unaff_RSI + 0x1b78) + 0x3a0) != in_stack_00000040)))) &&
       ((in_stack_00000040 == *(longlong *)(in_stack_00000040 + 0x3a0) &&
        ((*(uint *)(in_stack_00000040 + 0xc) & 0x20000000) == 0)))) {
      FUN_18013baf0();
    }
  }
  if ((*(byte *)(in_stack_00000040 + 0x432) & 1) == 0) {
    *(int32_t *)(in_stack_00000040 + 0x144) = *(int32_t *)(in_stack_00000040 + 0x84);
    cVar7 = FUN_180128040(unaff_RBP + -2);
    fVar19 = unaff_RBP[-0x10];
    *(uint *)(in_stack_00000040 + 0x148) = (uint)(cVar7 != '\0');
    uVar9 = *(uint64_t *)unaff_RBP;
    *(uint64_t *)(in_stack_00000040 + 0x14c) = *(uint64_t *)(unaff_RBP + -2);
    *(uint64_t *)(in_stack_00000040 + 0x154) = uVar9;
  }
  else {
    fVar19 = unaff_RBP[-0x10];
    *(int32_t *)(in_stack_00000040 + 0x144) = *(int32_t *)(in_stack_00000040 + 8);
    *(int32_t *)(in_stack_00000040 + 0x148) = *(int32_t *)(in_stack_00000040 + 0x41c);
    *(uint64_t *)(in_stack_00000040 + 0x14c) = *(uint64_t *)(in_stack_00000040 + 0x420);
    *(uint64_t *)(in_stack_00000040 + 0x154) = *(uint64_t *)(in_stack_00000040 + 0x428);
  }
  fVar18 = in_stack_00000078;
  if ((unaff_R15D >> 0x1d & 1) == 0) {
    FUN_180126d10(in_stack_00000040 + 600,in_stack_00000040 + 0x260,1);
  }
  if (fVar18 != fVar19) {
    *(int8_t *)(in_stack_00000040 + 0xb1) = 0;
  }
  *(short *)(in_stack_00000040 + 0xb8) = *(short *)(in_stack_00000040 + 0xb8) + 1;
  FUN_18011ff20(unaff_RSI + 0x1bd0);
  if (((*(byte *)(in_stack_00000040 + 0x432) & 1) != 0) &&
     ((*(byte *)(in_stack_00000040 + 0x432) & 2) == 0)) {
    *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
  }
  if ((unaff_R15D >> 0x18 & 1) != 0) {
    if (((((unaff_R15D & 0x40) == 0) && (*(int *)(in_stack_00000040 + 0xc4) < 1)) &&
        (*(int *)(in_stack_00000040 + 200) < 1)) &&
       ((*(float *)(in_stack_00000040 + 0x240) < *(float *)(in_stack_00000040 + 0x238) ||
         *(float *)(in_stack_00000040 + 0x240) == *(float *)(in_stack_00000040 + 0x238) ||
        (*(float *)(in_stack_00000040 + 0x244) < *(float *)(in_stack_00000040 + 0x23c) ||
         *(float *)(in_stack_00000040 + 0x244) == *(float *)(in_stack_00000040 + 0x23c))))) {
      *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
    }
    if ((lVar4 != 0) && ((*(char *)(lVar4 + 0xb2) != '\0' || (*(char *)(lVar4 + 0xb6) != '\0')))) {
      *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
    }
  }
  if (*(float *)(unaff_RSI + 0x1628) <= unaff_XMM13_Da) {
    *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
  }
  if ((*(int *)(in_stack_00000040 + 0xd8) < 1) && (*(int *)(in_stack_00000040 + 0xdc) < 1)) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\x01';
  }
  *(char *)(in_stack_00000040 + 0xb6) = cVar7;
  if ((((*(char *)(in_stack_00000040 + 0xb2) == '\0') &&
       (*(char *)(in_stack_00000040 + 0xaf) != '\0')) && (cVar7 == '\0')) ||
     (((0 < *(int *)(in_stack_00000040 + 0xc4) || (0 < *(int *)(in_stack_00000040 + 200))) ||
      (0 < *(int *)(in_stack_00000040 + 0xdc))))) {
    uVar15 = 0;
  }
  else {
    uVar15 = 1;
  }
  *(int8_t *)(in_stack_00000040 + 0xb4) = uVar15;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x24) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18012cb2c(void)
void FUN_18012cb2c(void)

{
  uint64_t uVar1;
  char cVar2;
  int8_t uVar3;
  int iVar4;
  uint64_t *unaff_RBP;
  longlong unaff_RSI;
  float *unaff_R12;
  longlong unaff_R13;
  uint unaff_R15D;
  float fVar5;
  float fVar6;
  float unaff_XMM11_Da;
  float unaff_XMM13_Da;
  longlong in_stack_00000040;
  int in_stack_00000078;
  
  fVar5 = (float)func_0x00018010e760();
  *(float *)(in_stack_00000040 + 0x23c) = fVar5 + *(float *)(in_stack_00000040 + 0x23c);
  func_0x00018010e690(in_stack_00000040 + 0x238,in_stack_00000040 + 0x228);
  *(float *)(in_stack_00000040 + 0x248) =
       *(float *)(unaff_RBP + -1) + *(float *)(in_stack_00000040 + 0x7c);
  if ((unaff_R15D & 0x401) == 1) {
    unaff_R12 = (float *)(in_stack_00000040 + 0x7c);
  }
  fVar5 = *unaff_R12;
  fVar6 = (float)func_0x00018010e7a0();
  *(float *)(in_stack_00000040 + 0x24c) = fVar6 + *(float *)((longlong)unaff_RBP + 4) + fVar5;
  *(float *)(in_stack_00000040 + 0x250) =
       ((*(float *)(in_stack_00000040 + 0x48) + *(float *)(in_stack_00000040 + 0x40)) -
       *(float *)(in_stack_00000040 + 0xa4)) - *(float *)(in_stack_00000040 + 0x7c);
  *(float *)(in_stack_00000040 + 0x254) =
       ((*(float *)(in_stack_00000040 + 0x4c) + *(float *)(in_stack_00000040 + 0x44)) -
       *(float *)(in_stack_00000040 + 0xa8)) - *(float *)(in_stack_00000040 + 0x7c);
  fVar5 = (float)func_0x00018013e900();
  *(float *)(in_stack_00000040 + 600) =
       (float)(int)(fVar5 + *(float *)(in_stack_00000040 + 0x248) + unaff_XMM11_Da);
  *(float *)(in_stack_00000040 + 0x25c) =
       (float)(int)(*(float *)(in_stack_00000040 + 0x24c) + unaff_XMM11_Da);
  fVar5 = *(float *)(in_stack_00000040 + 0x250);
  fVar6 = (float)func_0x00018013e900();
  *(float *)(in_stack_00000040 + 0x260) = (float)(int)((fVar5 + unaff_XMM11_Da) - fVar6);
  *(float *)(in_stack_00000040 + 0x264) =
       (float)(int)(*(float *)(in_stack_00000040 + 0x254) + unaff_XMM11_Da);
  if ((*(byte *)(unaff_RSI + 8) & 0x40) != 0) {
    if ((*(int *)(unaff_RSI + 0x1b2c) == *(int *)(in_stack_00000040 + 0x84)) &&
       (((*(char *)(unaff_RSI + 0xc1) == '\0' || (*(char *)(unaff_RSI + 0x135) != '\0')) &&
        ((*(uint *)(*(longlong *)(in_stack_00000040 + 0x3a0) + 0xc) & 0x200004) == 0)))) {
      FUN_18013ba30();
    }
    if ((((*(char *)(unaff_RSI + 0x1dd0) != '\0') && ((unaff_R15D >> 0x15 & 1) == 0)) &&
        ((*(longlong *)(unaff_RSI + 0x1b78) == 0 ||
         (*(longlong *)(*(longlong *)(unaff_RSI + 0x1b78) + 0x3a0) != in_stack_00000040)))) &&
       ((in_stack_00000040 == *(longlong *)(in_stack_00000040 + 0x3a0) &&
        ((*(uint *)(in_stack_00000040 + 0xc) & 0x20000000) == 0)))) {
      FUN_18013baf0();
    }
  }
  if ((*(byte *)(in_stack_00000040 + 0x432) & 1) == 0) {
    *(int32_t *)(in_stack_00000040 + 0x144) = *(int32_t *)(in_stack_00000040 + 0x84);
    cVar2 = FUN_180128040(unaff_RBP + -1);
    iVar4 = *(int *)(unaff_RBP + -8);
    *(uint *)(in_stack_00000040 + 0x148) = (uint)(cVar2 != '\0');
    uVar1 = *unaff_RBP;
    *(uint64_t *)(in_stack_00000040 + 0x14c) = unaff_RBP[-1];
    *(uint64_t *)(in_stack_00000040 + 0x154) = uVar1;
  }
  else {
    iVar4 = *(int *)(unaff_RBP + -8);
    *(int32_t *)(in_stack_00000040 + 0x144) = *(int32_t *)(in_stack_00000040 + 8);
    *(int32_t *)(in_stack_00000040 + 0x148) = *(int32_t *)(in_stack_00000040 + 0x41c);
    *(uint64_t *)(in_stack_00000040 + 0x14c) = *(uint64_t *)(in_stack_00000040 + 0x420);
    *(uint64_t *)(in_stack_00000040 + 0x154) = *(uint64_t *)(in_stack_00000040 + 0x428);
  }
  if ((unaff_R15D >> 0x1d & 1) == 0) {
    FUN_180126d10(in_stack_00000040 + 600,in_stack_00000040 + 0x260,1);
  }
  if (in_stack_00000078 != iVar4) {
    *(int8_t *)(in_stack_00000040 + 0xb1) = 0;
  }
  *(short *)(in_stack_00000040 + 0xb8) = *(short *)(in_stack_00000040 + 0xb8) + 1;
  FUN_18011ff20(unaff_RSI + 0x1bd0);
  if (((*(byte *)(in_stack_00000040 + 0x432) & 1) != 0) &&
     ((*(byte *)(in_stack_00000040 + 0x432) & 2) == 0)) {
    *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
  }
  if ((unaff_R15D >> 0x18 & 1) != 0) {
    if (((((unaff_R15D & 0x40) == 0) && (*(int *)(in_stack_00000040 + 0xc4) < 1)) &&
        (*(int *)(in_stack_00000040 + 200) < 1)) &&
       ((*(float *)(in_stack_00000040 + 0x240) < *(float *)(in_stack_00000040 + 0x238) ||
         *(float *)(in_stack_00000040 + 0x240) == *(float *)(in_stack_00000040 + 0x238) ||
        (*(float *)(in_stack_00000040 + 0x244) < *(float *)(in_stack_00000040 + 0x23c) ||
         *(float *)(in_stack_00000040 + 0x244) == *(float *)(in_stack_00000040 + 0x23c))))) {
      *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
    }
    if ((unaff_R13 != 0) &&
       ((*(char *)(unaff_R13 + 0xb2) != '\0' || (*(char *)(unaff_R13 + 0xb6) != '\0')))) {
      *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
    }
  }
  if (*(float *)(unaff_RSI + 0x1628) <= unaff_XMM13_Da) {
    *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
  }
  if ((*(int *)(in_stack_00000040 + 0xd8) < 1) && (*(int *)(in_stack_00000040 + 0xdc) < 1)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  *(char *)(in_stack_00000040 + 0xb6) = cVar2;
  if ((((*(char *)(in_stack_00000040 + 0xb2) == '\0') &&
       (*(char *)(in_stack_00000040 + 0xaf) != '\0')) && (cVar2 == '\0')) ||
     (((0 < *(int *)(in_stack_00000040 + 0xc4) || (0 < *(int *)(in_stack_00000040 + 200))) ||
      (0 < *(int *)(in_stack_00000040 + 0xdc))))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(int8_t *)(in_stack_00000040 + 0xb4) = uVar3;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x12] ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18012ccf4(longlong param_1)
void FUN_18012ccf4(longlong param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  char cVar4;
  int8_t uVar5;
  int iVar6;
  int32_t *unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R13;
  uint unaff_R15D;
  float unaff_XMM13_Da;
  longlong in_stack_00000040;
  int in_stack_00000078;
  
  if ((*(int *)(unaff_RSI + 0x1b2c) == *(int *)(param_1 + 0x84)) &&
     (((*(char *)(unaff_RSI + 0xc1) == '\0' || (*(char *)(unaff_RSI + 0x135) != '\0')) &&
      ((*(uint *)(*(longlong *)(param_1 + 0x3a0) + 0xc) & 0x200004) == 0)))) {
    FUN_18013ba30();
    param_1 = in_stack_00000040;
  }
  if ((((*(char *)(unaff_RSI + 0x1dd0) != '\0') && ((unaff_R15D >> 0x15 & 1) == 0)) &&
      ((*(longlong *)(unaff_RSI + 0x1b78) == 0 ||
       (*(longlong *)(*(longlong *)(unaff_RSI + 0x1b78) + 0x3a0) != param_1)))) &&
     ((param_1 == *(longlong *)(param_1 + 0x3a0) && ((*(uint *)(param_1 + 0xc) & 0x20000000) == 0)))
     ) {
    FUN_18013baf0();
    param_1 = in_stack_00000040;
  }
  if ((*(byte *)(param_1 + 0x432) & 1) == 0) {
    *(int32_t *)(param_1 + 0x144) = *(int32_t *)(param_1 + 0x84);
    cVar4 = FUN_180128040(unaff_RBP + -2);
    iVar6 = unaff_RBP[-0x10];
    *(uint *)(in_stack_00000040 + 0x148) = (uint)(cVar4 != '\0');
    uVar1 = unaff_RBP[-1];
    uVar2 = *unaff_RBP;
    uVar3 = unaff_RBP[1];
    *(int32_t *)(in_stack_00000040 + 0x14c) = unaff_RBP[-2];
    *(int32_t *)(in_stack_00000040 + 0x150) = uVar1;
    *(int32_t *)(in_stack_00000040 + 0x154) = uVar2;
    *(int32_t *)(in_stack_00000040 + 0x158) = uVar3;
  }
  else {
    iVar6 = unaff_RBP[-0x10];
    *(int32_t *)(param_1 + 0x144) = *(int32_t *)(param_1 + 8);
    *(int32_t *)(in_stack_00000040 + 0x148) = *(int32_t *)(in_stack_00000040 + 0x41c);
    *(int32_t *)(in_stack_00000040 + 0x14c) = *(int32_t *)(in_stack_00000040 + 0x420);
    *(int32_t *)(in_stack_00000040 + 0x150) = *(int32_t *)(in_stack_00000040 + 0x424);
    *(int32_t *)(in_stack_00000040 + 0x154) = *(int32_t *)(in_stack_00000040 + 0x428);
    *(int32_t *)(in_stack_00000040 + 0x158) = *(int32_t *)(in_stack_00000040 + 0x42c);
  }
  if ((unaff_R15D >> 0x1d & 1) == 0) {
    FUN_180126d10(in_stack_00000040 + 600,in_stack_00000040 + 0x260,1);
  }
  if (in_stack_00000078 != iVar6) {
    *(int8_t *)(in_stack_00000040 + 0xb1) = 0;
  }
  *(short *)(in_stack_00000040 + 0xb8) = *(short *)(in_stack_00000040 + 0xb8) + 1;
  FUN_18011ff20(unaff_RSI + 0x1bd0);
  if (((*(byte *)(in_stack_00000040 + 0x432) & 1) != 0) &&
     ((*(byte *)(in_stack_00000040 + 0x432) & 2) == 0)) {
    *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
  }
  if ((unaff_R15D >> 0x18 & 1) != 0) {
    if (((((unaff_R15D & 0x40) == 0) && (*(int *)(in_stack_00000040 + 0xc4) < 1)) &&
        (*(int *)(in_stack_00000040 + 200) < 1)) &&
       ((*(float *)(in_stack_00000040 + 0x240) < *(float *)(in_stack_00000040 + 0x238) ||
         *(float *)(in_stack_00000040 + 0x240) == *(float *)(in_stack_00000040 + 0x238) ||
        (*(float *)(in_stack_00000040 + 0x244) < *(float *)(in_stack_00000040 + 0x23c) ||
         *(float *)(in_stack_00000040 + 0x244) == *(float *)(in_stack_00000040 + 0x23c))))) {
      *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
    }
    if ((unaff_R13 != 0) &&
       ((*(char *)(unaff_R13 + 0xb2) != '\0' || (*(char *)(unaff_R13 + 0xb6) != '\0')))) {
      *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
    }
  }
  if (*(float *)(unaff_RSI + 0x1628) <= unaff_XMM13_Da) {
    *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
  }
  if ((*(int *)(in_stack_00000040 + 0xd8) < 1) && (*(int *)(in_stack_00000040 + 0xdc) < 1)) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\x01';
  }
  *(char *)(in_stack_00000040 + 0xb6) = cVar4;
  if ((((*(char *)(in_stack_00000040 + 0xb2) == '\0') &&
       (*(char *)(in_stack_00000040 + 0xaf) != '\0')) && (cVar4 == '\0')) ||
     (((0 < *(int *)(in_stack_00000040 + 0xc4) || (0 < *(int *)(in_stack_00000040 + 200))) ||
      (0 < *(int *)(in_stack_00000040 + 0xdc))))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(int8_t *)(in_stack_00000040 + 0xb4) = uVar5;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x24) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18012ce2e(void)
void FUN_18012ce2e(void)

{
  char cVar1;
  int8_t uVar2;
  int unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int unaff_EDI;
  longlong unaff_R13;
  uint unaff_R15D;
  float unaff_XMM13_Da;
  longlong in_stack_00000040;
  
  FUN_180126d10(in_stack_00000040 + 600,in_stack_00000040 + 0x260,1);
  if (unaff_EDI != unaff_EBX) {
    *(int8_t *)(in_stack_00000040 + 0xb1) = 0;
  }
  *(short *)(in_stack_00000040 + 0xb8) = *(short *)(in_stack_00000040 + 0xb8) + 1;
  FUN_18011ff20(unaff_RSI + 0x1bd0);
  if (((*(byte *)(in_stack_00000040 + 0x432) & 1) != 0) &&
     ((*(byte *)(in_stack_00000040 + 0x432) & 2) == 0)) {
    *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
  }
  if ((unaff_R15D >> 0x18 & 1) != 0) {
    if (((((unaff_R15D & 0x40) == 0) && (*(int *)(in_stack_00000040 + 0xc4) < 1)) &&
        (*(int *)(in_stack_00000040 + 200) < 1)) &&
       ((*(float *)(in_stack_00000040 + 0x240) < *(float *)(in_stack_00000040 + 0x238) ||
         *(float *)(in_stack_00000040 + 0x240) == *(float *)(in_stack_00000040 + 0x238) ||
        (*(float *)(in_stack_00000040 + 0x244) < *(float *)(in_stack_00000040 + 0x23c) ||
         *(float *)(in_stack_00000040 + 0x244) == *(float *)(in_stack_00000040 + 0x23c))))) {
      *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
    }
    if ((unaff_R13 != 0) &&
       ((*(char *)(unaff_R13 + 0xb2) != '\0' || (*(char *)(unaff_R13 + 0xb6) != '\0')))) {
      *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
    }
  }
  if (*(float *)(unaff_RSI + 0x1628) <= unaff_XMM13_Da) {
    *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
  }
  if ((*(int *)(in_stack_00000040 + 0xd8) < 1) && (*(int *)(in_stack_00000040 + 0xdc) < 1)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  *(char *)(in_stack_00000040 + 0xb6) = cVar1;
  if (((((*(char *)(in_stack_00000040 + 0xb2) == '\0') &&
        (*(char *)(in_stack_00000040 + 0xaf) != '\0')) && (cVar1 == '\0')) ||
      ((0 < *(int *)(in_stack_00000040 + 0xc4) || (0 < *(int *)(in_stack_00000040 + 200))))) ||
     (0 < *(int *)(in_stack_00000040 + 0xdc))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(int8_t *)(in_stack_00000040 + 0xb4) = uVar2;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x90) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18012ce5d(void)
void FUN_18012ce5d(void)

{
  char cVar1;
  int8_t uVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R13;
  uint unaff_R15D;
  float unaff_XMM13_Da;
  longlong in_stack_00000040;
  
  *(int8_t *)(in_stack_00000040 + 0xb1) = 0;
  *(short *)(in_stack_00000040 + 0xb8) = *(short *)(in_stack_00000040 + 0xb8) + 1;
  FUN_18011ff20(unaff_RSI + 0x1bd0);
  if (((*(byte *)(in_stack_00000040 + 0x432) & 1) != 0) &&
     ((*(byte *)(in_stack_00000040 + 0x432) & 2) == 0)) {
    *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
  }
  if ((unaff_R15D >> 0x18 & 1) != 0) {
    if (((((unaff_R15D & 0x40) == 0) && (*(int *)(in_stack_00000040 + 0xc4) < 1)) &&
        (*(int *)(in_stack_00000040 + 200) < 1)) &&
       ((*(float *)(in_stack_00000040 + 0x240) < *(float *)(in_stack_00000040 + 0x238) ||
         *(float *)(in_stack_00000040 + 0x240) == *(float *)(in_stack_00000040 + 0x238) ||
        (*(float *)(in_stack_00000040 + 0x244) < *(float *)(in_stack_00000040 + 0x23c) ||
         *(float *)(in_stack_00000040 + 0x244) == *(float *)(in_stack_00000040 + 0x23c))))) {
      *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
    }
    if ((unaff_R13 != 0) &&
       ((*(char *)(unaff_R13 + 0xb2) != '\0' || (*(char *)(unaff_R13 + 0xb6) != '\0')))) {
      *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
    }
  }
  if (*(float *)(unaff_RSI + 0x1628) <= unaff_XMM13_Da) {
    *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
  }
  if ((*(int *)(in_stack_00000040 + 0xd8) < 1) && (*(int *)(in_stack_00000040 + 0xdc) < 1)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  *(char *)(in_stack_00000040 + 0xb6) = cVar1;
  if (((((*(char *)(in_stack_00000040 + 0xb2) == '\0') &&
        (*(char *)(in_stack_00000040 + 0xaf) != '\0')) && (cVar1 == '\0')) ||
      ((0 < *(int *)(in_stack_00000040 + 0xc4) || (0 < *(int *)(in_stack_00000040 + 200))))) ||
     (0 < *(int *)(in_stack_00000040 + 0xdc))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(int8_t *)(in_stack_00000040 + 0xb4) = uVar2;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x90) ^ (ulonglong)&stack0x00000000);
}





