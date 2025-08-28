#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part096.c - 5 个函数

// 函数: void FUN_18011a38c(void)
void FUN_18011a38c(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int32_t uVar7;
  int iVar8;
  uint64_t uVar9;
  char *pcVar10;
  longlong unaff_RBP;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong unaff_RDI;
  ulonglong uVar14;
  longlong in_R10;
  uint64_t unaff_R12;
  int unaff_R13D;
  longlong unaff_R15;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fVar21;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float fVar22;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  int32_t unaff_XMM15_Da;
  uint64_t in_stack_00000020;
  int32_t uVar24;
  double dVar23;
  float in_stack_00000040;
  float fStack0000000000000044;
  int32_t in_stack_00000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  int iStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  longlong in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  
  cVar5 = FUN_180128040(&stack0x00000040,&stack0x00000048,1);
  if (cVar5 != '\0') {
    *(uint *)(in_R10 + 0x148) = *(uint *)(in_R10 + 0x148) | 1;
  }
  cVar5 = (char)unaff_R13D;
  if (((((*(int *)(unaff_RDI + 0x1b18) == unaff_R13D) || (*(char *)(unaff_RDI + 0x1b1c) != cVar5))
       && (lVar12 = *(longlong *)(unaff_RDI + 0x1af8), *(longlong *)(unaff_RDI + 0x1b00) == lVar12))
      && (((*(int *)(unaff_RDI + 0x1b2c) == unaff_R13D || (*(char *)(unaff_RDI + 0x1b3d) != cVar5))
          && ((cVar6 = FUN_180128040(&stack0x00000070,&stack0x00000078), cVar6 != '\0' &&
              ((*(char *)(unaff_RDI + 0x1d07) == cVar5 &&
               (cVar6 = func_0x000180124000(lVar12,0), cVar6 != '\0')))))))) &&
     ((*(byte *)(lVar12 + 0x1a8) & 4) == 0)) {
    *(int *)(unaff_RDI + 0x1b18) = unaff_R13D;
    bVar4 = true;
    *(char *)(unaff_RDI + 0x1b1c) = cVar5;
  }
  else {
    bVar4 = false;
  }
  uVar24 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
  fVar22 = *(float *)(unaff_RBP + 0xd8);
  iVar1 = *(int *)(unaff_RBP + 0xc0);
  fVar16 = *(float *)(unaff_RBP + 0xe0);
  if ((fVar22 == unaff_XMM10_Da) || (fVar16 == unaff_XMM10_Da)) {
    fVar20 = -3.4028235e+38;
    fVar19 = unaff_XMM10_Da;
    if (0 < iVar1) {
      uVar9 = *(uint64_t *)(unaff_RBP + 0xb8);
      do {
        fVar15 = (float)func_0x00018011a9b0(uVar9,unaff_R13D);
        uVar24 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
        if (fVar15 <= fVar19) {
          fVar19 = fVar15;
        }
        if (fVar20 < fVar15) {
          fVar20 = fVar15;
        }
        unaff_R13D = unaff_R13D + 1;
        unaff_RDI = _DAT_180c8a9b0;
        unaff_R15 = in_stack_00000068;
      } while (unaff_R13D < iVar1);
    }
    if (fVar22 == unaff_XMM10_Da) {
      fVar22 = fVar19;
    }
    unaff_XMM8_Da = *(float *)(unaff_RBP + 0xa0);
    if (fVar16 == unaff_XMM10_Da) {
      fVar16 = fVar20;
    }
  }
  in_stack_00000040 = *(float *)(unaff_RDI + 0x1738);
  fStack0000000000000044 = *(float *)(unaff_RDI + 0x173c);
  in_stack_00000048 = *(int32_t *)(unaff_RDI + 0x1740);
  fStack000000000000004c = *(float *)(unaff_RDI + 0x1744) * *(float *)(unaff_RDI + 0x1628);
  uVar7 = func_0x000180121e20(&stack0x00000040);
  dVar23 = (double)CONCAT44(uVar24,*(int32_t *)(unaff_R15 + 0x1664));
  *(ulonglong *)(unaff_RBP + -0x78) = CONCAT44(unaff_XMM13_Da,unaff_XMM15_Da);
  FUN_180122960(CONCAT44(unaff_XMM13_Da,unaff_XMM15_Da),*(uint64_t *)(unaff_RBP + -0x70),uVar7,1,
                dVar23);
  lVar12 = _DAT_180c8a9b0;
  if (0 < iVar1) {
    iVar2 = *(int *)(unaff_RBP + 200);
    iStack0000000000000058 = -1;
    iVar11 = iVar1;
    if ((int)unaff_XMM11_Da < iVar1) {
      iVar11 = (int)unaff_XMM11_Da;
    }
    uVar13 = iVar11 - 1;
    uVar14 = (ulonglong)uVar13;
    if (bVar4) {
      fVar19 = (*(float *)(unaff_R15 + 0x118) - unaff_XMM8_Da) / (unaff_XMM14_Da - unaff_XMM8_Da);
      fVar20 = unaff_XMM7_Da;
      if ((unaff_XMM7_Da <= fVar19) && (fVar20 = fVar19, 0.9999 <= fVar19)) {
        fVar20 = 0.9999;
      }
      iVar11 = (int)((float)(iVar1 + -1) * fVar20);
      iStack0000000000000058 = iVar11;
      fVar20 = (float)func_0x00018011a9b0(*(uint64_t *)(unaff_RBP + 0xb8),
                                          (longlong)(iVar11 + iVar2) % (longlong)iVar1 & 0xffffffff)
      ;
      uVar9 = *(uint64_t *)(unaff_RBP + 0xb8);
      fVar19 = (float)func_0x00018011a9b0(uVar9,(longlong)(iVar11 + iVar2 + 1) % (longlong)iVar1 &
                                                0xffffffff);
      dVar23 = (double)fVar19;
      FUN_18012ea30(&unknown_var_2256_ptr,iVar11,(double)fVar20,iVar11 + 1,dVar23);
    }
    else {
      uVar9 = *(uint64_t *)(unaff_RBP + 0xb8);
    }
    fVar20 = unaff_XMM7_Da;
    if (fVar22 != fVar16) {
      fVar20 = 1.0 / (fVar16 - fVar22);
    }
    fVar16 = (float)func_0x00018011a9b0(uVar9,(longlong)iVar2 % (longlong)iVar1 & 0xffffffff);
    lVar12 = _DAT_180c8a9b0;
    fVar19 = (fVar16 - fVar22) * fVar20;
    fVar16 = unaff_XMM7_Da;
    if ((unaff_XMM7_Da <= fVar19) && (fVar16 = fVar19, 1.0 <= fVar19)) {
      fVar16 = 1.0;
    }
    fVar16 = 1.0 - fVar16;
    in_stack_00000040 = *(float *)(_DAT_180c8a9b0 + 0x1948);
    fStack0000000000000044 = *(float *)(_DAT_180c8a9b0 + 0x194c);
    in_stack_00000048 = *(int32_t *)(_DAT_180c8a9b0 + 0x1950);
    fVar19 = *(float *)(_DAT_180c8a9b0 + 0x1628);
    fStack000000000000004c = *(float *)(_DAT_180c8a9b0 + 0x1954) * fVar19;
    fStack000000000000005c = unaff_XMM7_Da;
    fStack0000000000000070 = (float)func_0x000180121e20(&stack0x00000040);
    in_stack_00000040 = *(float *)(lVar12 + 0x1958);
    fStack0000000000000044 = *(float *)(lVar12 + 0x195c);
    in_stack_00000048 = *(int32_t *)(lVar12 + 0x1960);
    fStack000000000000004c = *(float *)(lVar12 + 0x1964) * fVar19;
    fVar15 = (float)func_0x000180121e20(&stack0x00000040);
    fVar19 = fStack0000000000000070;
    iVar11 = iStack0000000000000058;
    if (0 < (int)uVar13) {
      fStack0000000000000050 = fStack0000000000000050 - fStack0000000000000054;
      *(float *)(unaff_RBP + 0xb0) = *(float *)(unaff_RBP + 0xb0) - *(float *)(unaff_RBP + 0xa0);
      fVar21 = unaff_XMM7_Da;
      do {
        uVar24 = (int32_t)((ulonglong)dVar23 >> 0x20);
        fVar17 = (float)(iVar1 + -1) * fVar21;
        fVar21 = fVar21 + 1.0 / (float)(int)uVar13;
        iVar8 = (int)(fVar17 + 0.5);
        fVar17 = (float)func_0x00018011a9b0(*(uint64_t *)(unaff_RBP + 0xb8),
                                            (longlong)(iVar8 + iVar2 + 1) % (longlong)iVar1 &
                                            0xffffffff);
        fVar18 = (fVar17 - fVar22) * fVar20;
        fVar17 = unaff_XMM7_Da;
        if ((unaff_XMM7_Da <= fVar18) && (fVar17 = fVar18, 1.0 <= fVar18)) {
          fVar17 = 1.0;
        }
        fStack0000000000000074 = fStack0000000000000050 * fVar16;
        dVar23 = (double)CONCAT44(uVar24,0x3f800000);
        fVar16 = 1.0 - fVar17;
        fStack0000000000000074 = fStack0000000000000074 + fStack0000000000000054;
        fVar17 = fVar19;
        if (iVar11 == iVar8) {
          fVar17 = fVar15;
        }
        fStack0000000000000070 =
             *(float *)(unaff_RBP + 0xb0) * fStack000000000000005c + *(float *)(unaff_RBP + 0xa0);
        fStack0000000000000044 = fStack0000000000000050 * fVar16 + fStack0000000000000054;
        in_stack_00000040 = *(float *)(unaff_RBP + 0xb0) * fVar21 + *(float *)(unaff_RBP + 0xa0);
        FUN_180293d20(*(uint64_t *)(*(longlong *)(unaff_RBP + -0x80) + 0x2e8),&stack0x00000070,
                      &stack0x00000040,fVar17,dVar23);
        uVar14 = uVar14 - 1;
        lVar12 = _DAT_180c8a9b0;
        unaff_R15 = in_stack_00000068;
        fStack000000000000005c = fVar21;
      } while (uVar14 != 0);
    }
    unaff_R12 = *(uint64_t *)(unaff_RBP + 0xa8);
    unaff_XMM15_Da = *(int32_t *)(unaff_RBP + -0x60);
    unaff_XMM13_Da = fStack0000000000000060;
  }
  pcVar3 = *(char **)(unaff_RBP + 0xd0);
  if (pcVar3 != (char *)0x0) {
    *(int32_t *)(unaff_RBP + 0xb0) = unaff_XMM15_Da;
    in_stack_00000068 = 0x3f000000;
    *(float *)(unaff_RBP + 0xb4) = unaff_XMM13_Da + *(float *)(unaff_R15 + 0x1660);
    pcVar10 = pcVar3;
    if (pcVar3 != (char *)0xffffffffffffffff) {
      while (*pcVar10 != '\0') {
        if (((*pcVar10 == '#') && (pcVar10[1] == '#')) ||
           (pcVar10 = pcVar10 + 1, pcVar10 == (char *)0xffffffffffffffff)) break;
      }
    }
    if (((int)pcVar10 != (int)pcVar3) &&
       (FUN_1801224c0(*(uint64_t *)(*(longlong *)(lVar12 + 0x1af8) + 0x2e8),unaff_RBP + 0xb0,
                      unaff_RBP + -0x70,pcVar3,pcVar10), *(char *)(lVar12 + 0x2e38) != '\0')) {
      FUN_18013c800(unaff_RBP + 0xb0,pcVar3,pcVar10);
    }
  }
  if (unaff_XMM7_Da < fStack0000000000000064) {
    FUN_180122320(CONCAT44(fStack0000000000000054,
                           *(float *)(unaff_RBP + -0x70) + *(float *)(unaff_R15 + 0x1674)),unaff_R12
                  ,0,1);
  }
  return;
}





// 函数: void FUN_18011a864(void)
void FUN_18011a864(void)

{
  char *pcVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char *unaff_RDI;
  longlong unaff_R15;
  float unaff_XMM7_Da;
  float unaff_XMM13_Da;
  int32_t unaff_XMM15_Da;
  uint64_t in_stack_00000060;
  uint64_t uStack0000000000000068;
  
  *(int32_t *)(unaff_RBP + 0xb0) = unaff_XMM15_Da;
  uStack0000000000000068 = 0x3f000000;
  *(float *)(unaff_RBP + 0xb4) = unaff_XMM13_Da + *(float *)(unaff_R15 + 0x1660);
  pcVar1 = unaff_RDI;
  if (unaff_RDI != (char *)0xffffffffffffffff) {
    while (*pcVar1 != '\0') {
      if (((*pcVar1 == '#') && (pcVar1[1] == '#')) ||
         (pcVar1 = pcVar1 + 1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  if ((int)pcVar1 != (int)unaff_RDI) {
    FUN_1801224c0(*(uint64_t *)(*(longlong *)(unaff_RSI + 0x1af8) + 0x2e8),unaff_RBP + 0xb0,
                  unaff_RBP + -0x70);
    if (*(char *)(unaff_RSI + 0x2e38) != '\0') {
      FUN_18013c800(unaff_RBP + 0xb0);
    }
  }
  if (unaff_XMM7_Da < in_stack_00000060._4_4_) {
    FUN_180122320(*(float *)(unaff_RBP + -0x70) + *(float *)(unaff_R15 + 0x1674));
  }
  return;
}





// 函数: void FUN_18011a916(void)
void FUN_18011a916(void)

{
  longlong unaff_RBP;
  longlong unaff_R15;
  
  FUN_180122320(*(float *)(unaff_RBP + -0x70) + *(float *)(unaff_R15 + 0x1674));
  return;
}





// 函数: void FUN_18011a996(void)
void FUN_18011a996(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18011a9a4(void)
void FUN_18011a9a4(void)

{
  char *pcVar1;
  longlong lVar2;
  char *pcVar3;
  longlong unaff_RBP;
  longlong unaff_R15;
  float unaff_XMM7_Da;
  float unaff_XMM13_Da;
  int32_t unaff_XMM15_Da;
  uint64_t in_stack_00000060;
  
  lVar2 = _DAT_180c8a9b0;
  pcVar1 = *(char **)(unaff_RBP + 0xd0);
  if (pcVar1 != (char *)0x0) {
    *(int32_t *)(unaff_RBP + 0xb0) = unaff_XMM15_Da;
    *(float *)(unaff_RBP + 0xb4) = unaff_XMM13_Da + *(float *)(unaff_R15 + 0x1660);
    pcVar3 = pcVar1;
    if (pcVar1 != (char *)0xffffffffffffffff) {
      while (*pcVar3 != '\0') {
        if (((*pcVar3 == '#') && (pcVar3[1] == '#')) ||
           (pcVar3 = pcVar3 + 1, pcVar3 == (char *)0xffffffffffffffff)) break;
      }
    }
    if ((int)pcVar3 != (int)pcVar1) {
      FUN_1801224c0(*(uint64_t *)(*(longlong *)(lVar2 + 0x1af8) + 0x2e8),unaff_RBP + 0xb0,
                    unaff_RBP + -0x70,pcVar1,pcVar3);
      if (*(char *)(lVar2 + 0x2e38) != '\0') {
        FUN_18013c800(unaff_RBP + 0xb0,pcVar1,pcVar3);
      }
    }
  }
  if (unaff_XMM7_Da < in_stack_00000060._4_4_) {
    FUN_180122320(*(float *)(unaff_RBP + -0x70) + *(float *)(unaff_R15 + 0x1674));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18011aad0(char *param_1,ulonglong param_2,char param_3,uint64_t param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  int32_t uVar7;
  ulonglong uVar8;
  char *pcVar9;
  float *pfVar10;
  float fVar11;
  float extraout_XMM0_Da;
  float fVar12;
  ulonglong uStackX_10;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  float fStack_7c;
  
  lVar5 = _DAT_180c8a9b0;
  uVar8 = *(ulonglong *)(_DAT_180c8a9b0 + 0x1af8);
  *(int8_t *)(uVar8 + 0xb1) = 1;
  lVar4 = *(longlong *)(lVar5 + 0x1af8);
  if (*(char *)(lVar4 + 0xb4) == '\0') {
    fVar1 = *(float *)(lVar4 + 0x100);
    fVar2 = *(float *)(lVar4 + 0x104);
    pcVar9 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*pcVar9 != '\0') {
        if (((*pcVar9 == '#') && (pcVar9[1] == '#')) ||
           (pcVar9 = pcVar9 + 1, pcVar9 == (char *)0xffffffffffffffff)) break;
      }
    }
    pfVar10 = *(float **)(lVar5 + 0x19f0);
    fVar12 = *(float *)(lVar5 + 0x19f8);
    uStackX_10 = param_2;
    if (param_1 == pcVar9) {
      fVar12 = 0.0;
    }
    else {
      FUN_180297340(pfVar10,&uStackX_10,fVar12,param_4,0xbf800000,param_1,pcVar9,0);
      fVar11 = (float)uStackX_10;
      if (0.0 < (float)uStackX_10) {
        fVar11 = (float)uStackX_10 - fVar12 / *pfVar10;
      }
      fVar12 = (float)(int)(fVar11 + 0.95);
    }
    if (*(int *)(lVar4 + 0x1a0) == 0) {
      uStack_88 = 0xd;
      *(float *)(lVar4 + 0x100) =
           (float)(int)(*(float *)(lVar5 + 0x166c) * 0.5) + *(float *)(lVar4 + 0x100);
      fVar1 = *(float *)(lVar5 + 0x166c);
      fVar2 = *(float *)(lVar5 + 0x1670);
      uStack_84 = *(int32_t *)(lVar5 + 0x166c);
      uStack_80 = *(int32_t *)(lVar5 + 0x1670);
      FUN_18013e000(lVar5 + 0x1b90,&uStack_88);
      *(float *)(lVar5 + 0x166c) = fVar1 + fVar1;
      *(float *)(lVar5 + 0x1670) = fVar2 + fVar2;
      uStackX_10 = (ulonglong)(uint)fVar12;
      bVar6 = FUN_180119960(param_1,0,0x1000,&uStackX_10);
      FUN_18012dad0(1);
      *(float *)(lVar4 + 0x100) =
           *(float *)(lVar4 + 0x100) - (float)(int)(*(float *)(lVar5 + 0x166c) * 0.5);
    }
    else {
      func_0x00018011aa50(lVar4 + 0x288);
      pfVar10 = (float *)func_0x00018012df80(&uStackX_10);
      fVar12 = *pfVar10 - extraout_XMM0_Da;
      uStackX_10 = (ulonglong)(uint)extraout_XMM0_Da;
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      bVar6 = FUN_180119960(param_1,0,0x3000,&uStackX_10);
      if (param_3 != '\0') {
        fVar11 = *(float *)(lVar5 + 0x19f8);
        fVar3 = *(float *)(lVar4 + 0x2a0);
        uStack_88 = *(int32_t *)(_DAT_180c8a9b0 + 0x16c8);
        uStack_84 = *(int32_t *)(_DAT_180c8a9b0 + 0x16cc);
        uStack_80 = *(int32_t *)(_DAT_180c8a9b0 + 0x16d0);
        fStack_7c = *(float *)(_DAT_180c8a9b0 + 0x16d4) * *(float *)(_DAT_180c8a9b0 + 0x1628);
        uVar7 = func_0x000180121e20(&uStack_88);
        FUN_180122f40(CONCAT44(fVar11 * 0.067 + fVar2,fVar12 + fVar3 + fVar11 * 0.4 + fVar1),uVar7,
                      fVar11 * 0.866);
      }
    }
    uVar8 = (ulonglong)bVar6;
  }
  else {
    uVar8 = uVar8 & 0xffffffffffffff00;
  }
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_18011ab18(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int8_t uVar4;
  int32_t uVar5;
  char *pcVar6;
  float *pfVar7;
  longlong unaff_RBX;
  char *unaff_RSI;
  longlong unaff_RDI;
  uint64_t in_R9;
  char unaff_R14B;
  float fVar8;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qa;
  float fVar10;
  int32_t in_stack_00000040;
  int32_t uStack0000000000000044;
  int32_t in_stack_00000048;
  float fStack000000000000004c;
  int32_t in_stack_00000080;
  int32_t in_stack_00000088;
  float in_stack_000000d8;
  int32_t uStack00000000000000dc;
  
  fVar1 = *(float *)(unaff_RDI + 0x100);
  fVar2 = *(float *)(unaff_RDI + 0x104);
  pcVar6 = unaff_RSI;
  if (unaff_RSI != (char *)0xffffffffffffffff) {
    while (*pcVar6 != '\0') {
      if (((*pcVar6 == '#') && (pcVar6[1] == '#')) ||
         (pcVar6 = pcVar6 + 1, pcVar6 == (char *)0xffffffffffffffff)) break;
    }
  }
  pfVar7 = *(float **)(unaff_RBX + 0x19f0);
  fVar10 = *(float *)(unaff_RBX + 0x19f8);
  if (unaff_RSI == pcVar6) {
    fVar10 = 0.0;
  }
  else {
    FUN_180297340(pfVar7,&stack0x000000d8,fVar10,in_R9,0xbf800000);
    fVar8 = in_stack_000000d8;
    if (0.0 < in_stack_000000d8) {
      fVar8 = in_stack_000000d8 - fVar10 / *pfVar7;
    }
    fVar10 = (float)(int)(fVar8 + 0.95);
  }
  if (*(int *)(unaff_RDI + 0x1a0) == 0) {
    in_stack_00000040 = 0xd;
    *(float *)(unaff_RDI + 0x100) =
         (float)(int)(*(float *)(unaff_RBX + 0x166c) * 0.5) + *(float *)(unaff_RDI + 0x100);
    fVar1 = *(float *)(unaff_RBX + 0x166c);
    fVar2 = *(float *)(unaff_RBX + 0x1670);
    uStack0000000000000044 = *(int32_t *)(unaff_RBX + 0x166c);
    in_stack_00000048 = *(int32_t *)(unaff_RBX + 0x1670);
    uVar9 = FUN_18013e000(unaff_RBX + 0x1b90,&stack0x00000040);
    *(float *)(unaff_RBX + 0x166c) = fVar1 + fVar1;
    *(float *)(unaff_RBX + 0x1670) = fVar2 + fVar2;
    uStack00000000000000dc = 0;
    in_stack_000000d8 = fVar10;
    uVar4 = FUN_180119960(uVar9,0,0x1000,&stack0x000000d8);
    FUN_18012dad0(1);
    *(float *)(unaff_RDI + 0x100) =
         *(float *)(unaff_RDI + 0x100) - (float)(int)(*(float *)(unaff_RBX + 0x166c) * 0.5);
  }
  else {
    func_0x00018011aa50(unaff_RDI + 0x288);
    pfVar7 = (float *)func_0x00018012df80(&stack0x000000d8);
    in_stack_000000d8 = (float)extraout_XMM0_Qa;
    fVar10 = *pfVar7 - in_stack_000000d8;
    uStack00000000000000dc = 0;
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    uVar4 = FUN_180119960(extraout_XMM0_Qa,0,0x3000,&stack0x000000d8);
    if (unaff_R14B != '\0') {
      fVar8 = *(float *)(unaff_RBX + 0x19f8);
      fVar3 = *(float *)(unaff_RDI + 0x2a0);
      in_stack_00000040 = *(int32_t *)(_DAT_180c8a9b0 + 0x16c8);
      uStack0000000000000044 = *(int32_t *)(_DAT_180c8a9b0 + 0x16cc);
      in_stack_00000048 = *(int32_t *)(_DAT_180c8a9b0 + 0x16d0);
      fStack000000000000004c =
           *(float *)(_DAT_180c8a9b0 + 0x16d4) * *(float *)(_DAT_180c8a9b0 + 0x1628);
      uVar5 = func_0x000180121e20(&stack0x00000040);
      FUN_180122f40(CONCAT44(fVar8 * 0.067 + fVar2,fVar10 + fVar3 + fVar8 * 0.4 + fVar1),uVar5,
                    fVar8 * 0.866);
    }
  }
  return uVar4;
}



int8_t FUN_18011ac1e(void)

{
  float fVar1;
  float fVar2;
  int8_t uVar3;
  longlong unaff_RBX;
  longlong unaff_RDI;
  uint64_t uVar4;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t in_stack_000000d8;
  int32_t uStack00000000000000dc;
  
  uStack0000000000000040 = 0xd;
  *(float *)(unaff_RDI + 0x100) =
       (float)(int)(*(float *)(unaff_RBX + 0x166c) * 0.5) + *(float *)(unaff_RDI + 0x100);
  fVar1 = *(float *)(unaff_RBX + 0x166c);
  fVar2 = *(float *)(unaff_RBX + 0x1670);
  uStack0000000000000044 = *(int32_t *)(unaff_RBX + 0x166c);
  uStack0000000000000048 = *(int32_t *)(unaff_RBX + 0x1670);
  uVar4 = FUN_18013e000(unaff_RBX + 0x1b90,&stack0x00000040);
  *(float *)(unaff_RBX + 0x166c) = fVar1 + fVar1;
  *(float *)(unaff_RBX + 0x1670) = fVar2 + fVar2;
  uStack00000000000000dc = 0;
  uVar3 = FUN_180119960(uVar4,0,0x1000,&stack0x000000d8);
  FUN_18012dad0(1);
  *(float *)(unaff_RDI + 0x100) =
       *(float *)(unaff_RDI + 0x100) - (float)(int)(*(float *)(unaff_RBX + 0x166c) * 0.5);
  return uVar3;
}





