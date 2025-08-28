#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part263.c - 4 个函数

// 函数: void FUN_18022a40f(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)
void FUN_18022a40f(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  longlong lVar5;
  longlong unaff_RSI;
  ulonglong unaff_R14;
  
  lVar3 = SUB168(SEXT816(param_4) * SEXT816(*(longlong *)(unaff_RSI + 8) - param_3),8);
  uVar4 = (lVar3 >> 4) - (lVar3 >> 0x3f);
  if (uVar4 < unaff_R14) {
    FUN_18022a590();
    uVar2 = FUN_18022a540(uVar4 * 0x60 + unaff_RBX);
    *(uint64_t *)(unaff_RSI + 8) = uVar2;
  }
  else {
    lVar1 = FUN_18022a590();
    lVar3 = *(longlong *)(unaff_RSI + 8);
    for (lVar5 = lVar1; lVar5 != lVar3; lVar5 = lVar5 + 0x60) {
      FUN_18040d990(lVar5);
    }
    *(longlong *)(unaff_RSI + 8) = lVar1;
  }
  return;
}



longlong FUN_18022a540(longlong param_1,longlong param_2,longlong param_3)

{
  if (param_1 != param_2) {
    do {
      FUN_18040d890(param_3,param_1);
      param_1 = param_1 + 0x60;
      param_3 = param_3 + 0x60;
    } while (param_1 != param_2);
  }
  return param_3;
}



uint64_t * FUN_18022a590(longlong param_1,longlong param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  lVar10 = (param_2 - param_1) / 6 + (param_2 - param_1 >> 0x3f);
  lVar10 = (lVar10 >> 4) - (lVar10 >> 0x3f);
  if (0 < lVar10) {
    param_1 = param_1 - (longlong)param_3;
    do {
      lVar4 = *(longlong *)(param_1 + 0x58 + (longlong)param_3);
      lVar5 = param_3[0xb];
      uVar3 = *(uint *)(lVar4 + 0x10);
      uVar11 = (ulonglong)uVar3;
      if (*(longlong *)(lVar4 + 8) != 0) {
        FUN_1806277c0(lVar5,uVar11);
      }
      if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(lVar5 + 8),*(uint64_t *)(lVar4 + 8),uVar11);
      }
      *(int32_t *)(lVar5 + 0x10) = 0;
      if (*(longlong *)(lVar5 + 8) != 0) {
        *(int8_t *)(uVar11 + *(longlong *)(lVar5 + 8)) = 0;
      }
      *(int32_t *)(lVar5 + 0x1c) = *(int32_t *)(lVar4 + 0x1c);
      uVar3 = *(uint *)(lVar4 + 0x30);
      uVar11 = (ulonglong)uVar3;
      if (*(longlong *)(lVar4 + 0x28) != 0) {
        FUN_1806277c0(lVar5 + 0x20,uVar11);
      }
      if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(lVar5 + 0x28),*(uint64_t *)(lVar4 + 0x28),uVar11);
      }
      *(int32_t *)(lVar5 + 0x30) = 0;
      if (*(longlong *)(lVar5 + 0x28) != 0) {
        *(int8_t *)(uVar11 + *(longlong *)(lVar5 + 0x28)) = 0;
      }
      *(int32_t *)(lVar5 + 0x3c) = *(int32_t *)(lVar4 + 0x3c);
      uVar3 = *(uint *)(lVar4 + 0x50);
      uVar11 = (ulonglong)uVar3;
      if (*(longlong *)(lVar4 + 0x48) != 0) {
        FUN_1806277c0(lVar5 + 0x40,uVar11);
      }
      if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(lVar5 + 0x48),*(uint64_t *)(lVar4 + 0x48),uVar11);
      }
      *(int32_t *)(lVar5 + 0x50) = 0;
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        *(int8_t *)(uVar11 + *(longlong *)(lVar5 + 0x48)) = 0;
      }
      lVar10 = lVar10 + -1;
      *(int32_t *)(lVar5 + 0x5c) = *(int32_t *)(lVar4 + 0x5c);
      uVar9 = ((uint64_t *)(param_1 + (longlong)param_3))[1];
      *param_3 = *(uint64_t *)(param_1 + (longlong)param_3);
      param_3[1] = uVar9;
      puVar1 = (uint64_t *)(param_1 + 0x10 + (longlong)param_3);
      uVar9 = puVar1[1];
      param_3[2] = *puVar1;
      param_3[3] = uVar9;
      puVar1 = (uint64_t *)(param_1 + 0x20 + (longlong)param_3);
      uVar9 = puVar1[1];
      param_3[4] = *puVar1;
      param_3[5] = uVar9;
      puVar1 = (uint64_t *)(param_1 + 0x30 + (longlong)param_3);
      uVar9 = puVar1[1];
      param_3[6] = *puVar1;
      param_3[7] = uVar9;
      puVar2 = (int32_t *)(param_1 + 0x40 + (longlong)param_3);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      *(int32_t *)(param_3 + 8) = *puVar2;
      *(int32_t *)((longlong)param_3 + 0x44) = uVar6;
      *(int32_t *)(param_3 + 9) = uVar7;
      *(int32_t *)((longlong)param_3 + 0x4c) = uVar8;
      puVar2 = (int32_t *)(param_1 + 0x50 + (longlong)param_3);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      *(int32_t *)(param_3 + 10) = *puVar2;
      *(int32_t *)((longlong)param_3 + 0x54) = uVar6;
      *(int32_t *)(param_3 + 0xb) = uVar7;
      *(int32_t *)((longlong)param_3 + 0x5c) = uVar8;
      param_3[0xb] = lVar5;
      param_3 = param_3 + 0xc;
    } while (0 < lVar10);
  }
  return param_3;
}



uint64_t * FUN_18022a5ca(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  ulonglong uVar10;
  longlong unaff_R12;
  uint64_t *unaff_R14;
  longlong unaff_R15;
  
  param_3 = unaff_R12 - param_3;
  while( true ) {
    lVar4 = *(longlong *)(param_3 + 0x58 + (longlong)unaff_R14);
    lVar5 = unaff_R14[0xb];
    uVar3 = *(uint *)(lVar4 + 0x10);
    uVar10 = (ulonglong)uVar3;
    if (*(longlong *)(lVar4 + 8) != 0) {
      FUN_1806277c0(lVar5,uVar10);
    }
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(uint64_t *)(lVar5 + 8),*(uint64_t *)(lVar4 + 8),uVar10);
    }
    *(int32_t *)(lVar5 + 0x10) = 0;
    if (*(longlong *)(lVar5 + 8) != 0) {
      *(int8_t *)(uVar10 + *(longlong *)(lVar5 + 8)) = 0;
    }
    *(int32_t *)(lVar5 + 0x1c) = *(int32_t *)(lVar4 + 0x1c);
    uVar3 = *(uint *)(lVar4 + 0x30);
    uVar10 = (ulonglong)uVar3;
    if (*(longlong *)(lVar4 + 0x28) != 0) {
      FUN_1806277c0(lVar5 + 0x20,uVar10);
    }
    if (uVar3 != 0) break;
    *(int32_t *)(lVar5 + 0x30) = 0;
    if (*(longlong *)(lVar5 + 0x28) != 0) {
      *(int8_t *)(uVar10 + *(longlong *)(lVar5 + 0x28)) = 0;
    }
    *(int32_t *)(lVar5 + 0x3c) = *(int32_t *)(lVar4 + 0x3c);
    uVar3 = *(uint *)(lVar4 + 0x50);
    uVar10 = (ulonglong)uVar3;
    if (*(longlong *)(lVar4 + 0x48) != 0) {
      FUN_1806277c0(lVar5 + 0x40,uVar10);
    }
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(uint64_t *)(lVar5 + 0x48),*(uint64_t *)(lVar4 + 0x48),uVar10);
    }
    *(int32_t *)(lVar5 + 0x50) = 0;
    if (*(longlong *)(lVar5 + 0x48) != 0) {
      *(int8_t *)(uVar10 + *(longlong *)(lVar5 + 0x48)) = 0;
    }
    unaff_R15 = unaff_R15 + -1;
    *(int32_t *)(lVar5 + 0x5c) = *(int32_t *)(lVar4 + 0x5c);
    uVar9 = ((uint64_t *)(param_3 + (longlong)unaff_R14))[1];
    *unaff_R14 = *(uint64_t *)(param_3 + (longlong)unaff_R14);
    unaff_R14[1] = uVar9;
    puVar1 = (uint64_t *)(param_3 + 0x10 + (longlong)unaff_R14);
    uVar9 = puVar1[1];
    unaff_R14[2] = *puVar1;
    unaff_R14[3] = uVar9;
    puVar1 = (uint64_t *)(param_3 + 0x20 + (longlong)unaff_R14);
    uVar9 = puVar1[1];
    unaff_R14[4] = *puVar1;
    unaff_R14[5] = uVar9;
    puVar1 = (uint64_t *)(param_3 + 0x30 + (longlong)unaff_R14);
    uVar9 = puVar1[1];
    unaff_R14[6] = *puVar1;
    unaff_R14[7] = uVar9;
    puVar2 = (int32_t *)(param_3 + 0x40 + (longlong)unaff_R14);
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    *(int32_t *)(unaff_R14 + 8) = *puVar2;
    *(int32_t *)((longlong)unaff_R14 + 0x44) = uVar6;
    *(int32_t *)(unaff_R14 + 9) = uVar7;
    *(int32_t *)((longlong)unaff_R14 + 0x4c) = uVar8;
    puVar2 = (int32_t *)(param_3 + 0x50 + (longlong)unaff_R14);
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    *(int32_t *)(unaff_R14 + 10) = *puVar2;
    *(int32_t *)((longlong)unaff_R14 + 0x54) = uVar6;
    *(int32_t *)(unaff_R14 + 0xb) = uVar7;
    *(int32_t *)((longlong)unaff_R14 + 0x5c) = uVar8;
    unaff_R14[0xb] = lVar5;
    unaff_R14 = unaff_R14 + 0xc;
    if (unaff_R15 < 1) {
      return unaff_R14;
    }
  }
                    // WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(lVar5 + 0x28),*(uint64_t *)(lVar4 + 0x28),uVar10);
}





// 函数: void FUN_18022a70e(void)
void FUN_18022a70e(void)

{
  return;
}



uint64_t * FUN_18022a720(uint64_t *param_1,uint64_t *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  
  lVar1 = param_1[0xb];
  lVar2 = param_2[0xb];
  FUN_180627be0(lVar1,lVar2);
  FUN_180627be0(lVar1 + 0x20,lVar2 + 0x20);
  FUN_180627be0(lVar1 + 0x40,lVar2 + 0x40);
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar3 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  uVar3 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar3;
  param_1[0xb] = lVar1;
  return param_1;
}



uint64_t *
FUN_18022a810(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_8584_ptr;
  param_1[2] = &unknown_var_720_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0xc0,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



longlong FUN_18022a890(longlong param_1,char param_2,longlong param_3)

{
  uint64_t *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  float fVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  char cVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  
  cVar15 = '\0';
  uVar14 = *(ulonglong *)((longlong)param_2 * 0x1b0 + 0xe0 + *(longlong *)(param_3 + 0x140)) &
           *(ulonglong *)(param_1 + 0x800);
  if (uVar14 != 0) {
    do {
      if ((uVar14 & 1) != 0) {
        uVar13 = (ulonglong)cVar15;
        cVar7 = *(char *)(uVar13 + 0x100 + param_3);
        if (*(char *)(param_1 + 0x1042) == '\0') {
          puVar1 = (uint64_t *)(uVar13 * 0x1b0 + 0x80 + *(longlong *)(param_3 + 0x140));
          puVar10 = &uStack_98;
          uStack_98 = *puVar1;
          uStack_90 = puVar1[1];
        }
        else {
          puVar1 = (uint64_t *)(param_1 + (uVar13 + 0xc2) * 0x10);
          puVar10 = &uStack_a8;
          uStack_a8 = *puVar1;
          uStack_a0 = puVar1[1];
        }
        fStack_d8 = (float)*puVar10;
        fStack_d4 = (float)((ulonglong)*puVar10 >> 0x20);
        fStack_d0 = (float)puVar10[1];
        if (cVar7 < '\0') {
          puVar10 = (uint64_t *)(param_1 + (uVar13 + 0x82) * 0x10);
          uVar9 = puVar10[1];
          puVar1 = (uint64_t *)(param_1 + uVar13 * 0x10);
          *puVar1 = *puVar10;
          puVar1[1] = uVar9;
          fStack_d8 = (*(float *)(param_1 + 0x1020) - *(float *)(param_1 + 0x1030)) + fStack_d8;
          fStack_d4 = (*(float *)(param_1 + 0x1024) - *(float *)(param_1 + 0x1034)) + fStack_d4;
          fStack_d0 = (*(float *)(param_1 + 0x1028) - *(float *)(param_1 + 0x1038)) + fStack_d0;
        }
        else {
          pfVar2 = (float *)(param_1 + (uVar13 + 0x82) * 0x10);
          fVar3 = *pfVar2;
          fVar4 = pfVar2[1];
          fVar5 = pfVar2[2];
          fVar6 = pfVar2[3];
          lVar11 = (longlong)cVar7;
          lVar12 = lVar11 + 0x40;
          pfVar2 = (float *)(param_1 + lVar11 * 0x10);
          fVar17 = *pfVar2;
          fVar18 = pfVar2[1];
          fVar19 = pfVar2[2];
          fVar8 = pfVar2[3];
          pfVar2 = (float *)(param_1 + uVar13 * 0x10);
          *pfVar2 = fVar8 * fVar6 * -1.0 + fVar19 * fVar5 * -1.0 + (fVar3 * fVar17 - fVar18 * fVar4)
          ;
          pfVar2[1] = fVar19 * fVar6 * 1.0 + fVar17 * fVar4 * 1.0 + (fVar3 * fVar18 - fVar8 * fVar5)
          ;
          pfVar2[2] = fVar8 * fVar4 * 1.0 + fVar17 * fVar5 * 1.0 + (fVar3 * fVar19 - fVar18 * fVar6)
          ;
          pfVar2[3] = fVar18 * fVar5 * 1.0 + fVar17 * fVar6 * 1.0 + (fVar3 * fVar8 - fVar19 * fVar4)
          ;
          fVar3 = *(float *)(param_1 + 0xc + lVar11 * 0x10);
          fVar4 = *(float *)(param_1 + 4 + lVar11 * 0x10);
          fVar5 = *(float *)(param_1 + 8 + lVar11 * 0x10);
          fVar6 = *(float *)(param_1 + lVar11 * 0x10);
          fVar18 = fStack_d0 * fVar5 - fStack_d4 * fVar3;
          fVar19 = fStack_d8 * fVar3 - fVar4 * fStack_d0;
          fVar18 = fVar18 + fVar18;
          fVar17 = fVar4 * fStack_d4 - fStack_d8 * fVar5;
          fVar19 = fVar19 + fVar19;
          fVar17 = fVar17 + fVar17;
          fStack_d8 = (fVar17 * fVar5 - fVar19 * fVar3) + fStack_d8 + fVar6 * fVar18 +
                      *(float *)(param_1 + lVar12 * 0x10);
          fStack_d4 = (fVar18 * fVar3 - fVar17 * fVar4) + fVar6 * fVar19 + fStack_d4 +
                      *(float *)(param_1 + 4 + lVar12 * 0x10);
          fStack_d0 = (fVar19 * fVar4 - fVar18 * fVar5) + fVar6 * fVar17 + fStack_d0 +
                      *(float *)(param_1 + 8 + lVar12 * 0x10);
        }
        pfVar2 = (float *)(param_1 + (uVar13 + 0x40) * 0x10);
        *pfVar2 = fStack_d8;
        pfVar2[1] = fStack_d4;
        pfVar2[2] = fStack_d0;
        pfVar2[3] = 3.4028235e+38;
        *(ulonglong *)(param_1 + 0x800) = *(ulonglong *)(param_1 + 0x800) & ~(1L << (uVar13 & 0x3f))
        ;
      }
      cVar15 = cVar15 + '\x01';
      bVar16 = 1 < uVar14;
      uVar14 = uVar14 >> 1;
    } while (bVar16);
  }
  return param_1 + (longlong)param_2 * 0x10;
}



longlong FUN_18022a8cd(void)

{
  uint64_t *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  float fVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar13;
  longlong in_R9;
  ulonglong in_R10;
  char in_R11B;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStackX_8;
  uint64_t uStack0000000000000030;
  uint64_t uStack0000000000000038;
  uint64_t uStack0000000000000040;
  uint64_t uStack0000000000000048;
  
  do {
    if ((in_R10 & 1) != 0) {
      uVar13 = (ulonglong)in_R11B;
      cVar7 = *(char *)(uVar13 + 0x100 + unaff_RBX);
      if (*(char *)(in_R9 + 0x1042) == '\0') {
        puVar1 = (uint64_t *)(uVar13 * 0x1b0 + 0x80 + *(longlong *)(unaff_RBX + 0x140));
        puVar10 = &stack0x00000040;
        uStack0000000000000040 = *puVar1;
        uStack0000000000000048 = puVar1[1];
      }
      else {
        puVar1 = (uint64_t *)(in_R9 + (uVar13 + 0xc2) * 0x10);
        puVar10 = &stack0x00000030;
        uStack0000000000000030 = *puVar1;
        uStack0000000000000038 = puVar1[1];
      }
      fVar16 = (float)*puVar10;
      fVar15 = (float)((ulonglong)*puVar10 >> 0x20);
      fStackX_8 = (float)puVar10[1];
      if (cVar7 < '\0') {
        puVar10 = (uint64_t *)(in_R9 + (uVar13 + 0x82) * 0x10);
        uVar9 = puVar10[1];
        puVar1 = (uint64_t *)(in_R9 + uVar13 * 0x10);
        *puVar1 = *puVar10;
        puVar1[1] = uVar9;
        fVar16 = (*(float *)(in_R9 + 0x1020) - *(float *)(in_R9 + 0x1030)) + fVar16;
        fVar15 = (*(float *)(in_R9 + 0x1024) - *(float *)(in_R9 + 0x1034)) + fVar15;
        fStackX_8 = (*(float *)(in_R9 + 0x1028) - *(float *)(in_R9 + 0x1038)) + fStackX_8;
      }
      else {
        pfVar2 = (float *)(in_R9 + (uVar13 + 0x82) * 0x10);
        fVar3 = *pfVar2;
        fVar4 = pfVar2[1];
        fVar5 = pfVar2[2];
        fVar6 = pfVar2[3];
        lVar11 = (longlong)cVar7;
        lVar12 = lVar11 + 0x40;
        pfVar2 = (float *)(in_R9 + lVar11 * 0x10);
        fVar17 = *pfVar2;
        fVar18 = pfVar2[1];
        fVar19 = pfVar2[2];
        fVar8 = pfVar2[3];
        pfVar2 = (float *)(in_R9 + uVar13 * 0x10);
        *pfVar2 = fVar8 * fVar6 * -1.0 + fVar19 * fVar5 * -1.0 + (fVar3 * fVar17 - fVar18 * fVar4);
        pfVar2[1] = fVar19 * fVar6 * 1.0 + fVar17 * fVar4 * 1.0 + (fVar3 * fVar18 - fVar8 * fVar5);
        pfVar2[2] = fVar8 * fVar4 * 1.0 + fVar17 * fVar5 * 1.0 + (fVar3 * fVar19 - fVar18 * fVar6);
        pfVar2[3] = fVar18 * fVar5 * 1.0 + fVar17 * fVar6 * 1.0 + (fVar3 * fVar8 - fVar19 * fVar4);
        fVar3 = *(float *)(in_R9 + 0xc + lVar11 * 0x10);
        fVar4 = *(float *)(in_R9 + 4 + lVar11 * 0x10);
        fVar5 = *(float *)(in_R9 + 8 + lVar11 * 0x10);
        fVar6 = *(float *)(in_R9 + lVar11 * 0x10);
        fVar18 = fStackX_8 * fVar5 - fVar15 * fVar3;
        fVar19 = fVar16 * fVar3 - fVar4 * fStackX_8;
        fVar18 = fVar18 + fVar18;
        fVar17 = fVar4 * fVar15 - fVar16 * fVar5;
        fVar19 = fVar19 + fVar19;
        fVar17 = fVar17 + fVar17;
        fVar16 = (fVar17 * fVar5 - fVar19 * fVar3) + fVar16 + fVar6 * fVar18 +
                 *(float *)(in_R9 + lVar12 * 0x10);
        fVar15 = (fVar18 * fVar3 - fVar17 * fVar4) + fVar6 * fVar19 + fVar15 +
                 *(float *)(in_R9 + 4 + lVar12 * 0x10);
        fStackX_8 = (fVar19 * fVar4 - fVar18 * fVar5) + fVar6 * fVar17 + fStackX_8 +
                    *(float *)(in_R9 + 8 + lVar12 * 0x10);
      }
      pfVar2 = (float *)(in_R9 + (uVar13 + 0x40) * 0x10);
      *pfVar2 = fVar16;
      pfVar2[1] = fVar15;
      pfVar2[2] = fStackX_8;
      pfVar2[3] = 3.4028235e+38;
      *(ulonglong *)(in_R9 + 0x800) = *(ulonglong *)(in_R9 + 0x800) & ~(1L << (uVar13 & 0x3f));
    }
    in_R11B = in_R11B + '\x01';
    bVar14 = 1 < in_R10;
    in_R10 = in_R10 >> 1;
  } while (bVar14);
  return in_R9 + unaff_RBP * 0x10;
}



longlong FUN_18022ac3f(void)

{
  longlong unaff_RBP;
  longlong in_R9;
  
  return in_R9 + unaff_RBP * 0x10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18022ac60(longlong param_1,float *param_2,char param_3,longlong param_4)
void FUN_18022ac60(longlong param_1,float *param_2,char param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  int8_t auVar3 [16];
  int8_t auVar4 [16];
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int8_t auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int8_t auStack_f8 [32];
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  ulonglong uStack_b8;
  
  uStack_b8 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  uStack_d8 = 0x3f8000003f800000;
  uStack_d0 = 0x3f8000003f800000;
  uStack_c8 = 0xbf800000bf800000;
  uStack_c0 = 0xbf800000bf800000;
  lVar1 = (longlong)param_3 + 0x82;
  auVar18 = *(int8_t (*) [16])(param_1 + lVar1 * 0x10);
  fVar14 = auVar18._8_4_ * 0.0;
  fVar15 = auVar18._12_4_ * 0.0;
  fVar17 = fVar15 + auVar18._4_4_ * 0.0;
  fVar16 = fVar14 + auVar18._0_4_ * 1.0 + fVar17;
  auVar5._4_4_ = fVar17;
  auVar5._0_4_ = fVar16;
  auVar5._8_4_ = fVar14 + fVar14;
  auVar5._12_4_ = fVar15 + fVar15;
  uVar7 = movmskps((int)lVar1 * 2,auVar5);
  uVar8 = (ulonglong)(uVar7 & 1);
  fVar14 = *(float *)(&uStack_d8 + uVar8 * 2) * auVar18._0_4_;
  fVar15 = *(float *)((longlong)&uStack_d8 + uVar8 * 0x10 + 4) * auVar18._4_4_;
  fVar17 = *(float *)(&uStack_d0 + uVar8 * 2) * auVar18._8_4_;
  fVar24 = *(float *)((longlong)&uStack_d0 + uVar8 * 0x10 + 4) * auVar18._12_4_;
  if (0.9995 < ABS(fVar16)) {
    fVar14 = fVar14 * 0.7 + 0.3;
    fVar15 = fVar15 * 0.7 + 0.0;
    fVar16 = fVar17 * 0.7 + 0.0;
    fVar17 = fVar24 * 0.7 + 0.0;
    fVar24 = fVar17 * fVar17 + fVar14 * fVar14;
    fVar9 = fVar16 * fVar16 + fVar15 * fVar15;
    fVar13 = fVar24 + fVar15 * fVar15 + fVar16 * fVar16;
    fVar19 = fVar9 + fVar14 * fVar14 + fVar17 * fVar17;
    auVar4._4_4_ = fVar24 + fVar9 + 1.1754944e-38;
    auVar4._0_4_ = fVar9 + fVar24 + 1.1754944e-38;
    auVar4._8_4_ = fVar13 + 1.1754944e-38;
    auVar4._12_4_ = fVar19 + 1.1754944e-38;
    auVar18 = rsqrtps(auVar18,auVar4);
    fVar10 = auVar18._0_4_;
    fVar11 = auVar18._4_4_;
    fVar25 = auVar18._8_4_;
    fVar12 = auVar18._12_4_;
    fVar14 = fVar14 * (3.0 - fVar10 * fVar10 * (fVar9 + fVar24)) * fVar10 * 0.5;
    fVar15 = fVar15 * (3.0 - fVar11 * fVar11 * (fVar24 + fVar9)) * fVar11 * 0.5;
    fVar16 = fVar16 * (3.0 - fVar25 * fVar25 * fVar13) * fVar25 * 0.5;
    fVar17 = fVar17 * (3.0 - fVar12 * fVar12 * fVar19) * fVar12 * 0.5;
  }
  else {
    fVar16 = (float)acosf();
    fVar9 = (float)sinf();
    fVar10 = (float)sinf(fVar16 - fVar16 * 0.7);
    fVar10 = fVar10 * (1.0 / fVar9);
    fVar11 = (float)sinf(fVar16 * 0.7);
    fVar11 = fVar11 * (1.0 / fVar9);
    fVar14 = fVar10 * 1.0 + fVar11 * fVar14;
    fVar15 = fVar10 * 0.0 + fVar11 * fVar15;
    fVar16 = fVar10 * 0.0 + fVar11 * fVar17;
    fVar17 = fVar10 * 0.0 + fVar11 * fVar24;
  }
  *param_2 = fVar14;
  param_2[1] = fVar15;
  param_2[2] = fVar16;
  param_2[3] = fVar17;
  for (cVar2 = *(char *)((longlong)param_3 + 0x100 + param_4); -1 < cVar2;
      cVar2 = *(char *)((longlong)cVar2 + 0x100 + param_4)) {
    uStack_d8 = 0x3f8000003f800000;
    uStack_d0 = 0x3f8000003f800000;
    uStack_c8 = 0xbf800000bf800000;
    uStack_c0 = 0xbf800000bf800000;
    lVar1 = (longlong)cVar2 + 0x82;
    auVar18 = *(int8_t (*) [16])(param_1 + lVar1 * 0x10);
    fVar24 = auVar18._8_4_ * 0.0;
    fVar9 = auVar18._12_4_ * 0.0;
    fVar11 = fVar9 + auVar18._4_4_ * 0.0;
    fVar10 = fVar24 + auVar18._0_4_ * 1.0 + fVar11;
    auVar6._4_4_ = fVar11;
    auVar6._0_4_ = fVar10;
    auVar6._8_4_ = fVar24 + fVar24;
    auVar6._12_4_ = fVar9 + fVar9;
    uVar7 = movmskps((int)lVar1 * 2,auVar6);
    uVar8 = (ulonglong)(uVar7 & 1);
    fVar24 = *(float *)(&uStack_d8 + uVar8 * 2) * auVar18._0_4_;
    fVar9 = *(float *)((longlong)&uStack_d8 + uVar8 * 0x10 + 4) * auVar18._4_4_;
    fVar11 = *(float *)(&uStack_d0 + uVar8 * 2) * auVar18._8_4_;
    fVar25 = *(float *)((longlong)&uStack_d0 + uVar8 * 0x10 + 4) * auVar18._12_4_;
    if (0.9995 < ABS(fVar10)) {
      fVar20 = fVar24 * 0.7 + 0.3;
      fVar21 = fVar9 * 0.7 + 0.0;
      fVar22 = fVar11 * 0.7 + 0.0;
      fVar23 = fVar25 * 0.7 + 0.0;
      fVar24 = fVar23 * fVar23 + fVar20 * fVar20;
      fVar9 = fVar22 * fVar22 + fVar21 * fVar21;
      fVar13 = fVar24 + fVar21 * fVar21 + fVar22 * fVar22;
      fVar19 = fVar9 + fVar20 * fVar20 + fVar23 * fVar23;
      auVar3._4_4_ = fVar24 + fVar9 + 1.1754944e-38;
      auVar3._0_4_ = fVar9 + fVar24 + 1.1754944e-38;
      auVar3._8_4_ = fVar13 + 1.1754944e-38;
      auVar3._12_4_ = fVar19 + 1.1754944e-38;
      auVar18 = rsqrtps(auVar18,auVar3);
      fVar10 = auVar18._0_4_;
      fVar11 = auVar18._4_4_;
      fVar25 = auVar18._8_4_;
      fVar12 = auVar18._12_4_;
      fVar20 = fVar20 * (3.0 - fVar10 * fVar10 * (fVar9 + fVar24)) * fVar10 * 0.5;
      fVar21 = fVar21 * (3.0 - fVar11 * fVar11 * (fVar24 + fVar9)) * fVar11 * 0.5;
      fVar22 = fVar22 * (3.0 - fVar25 * fVar25 * fVar13) * fVar25 * 0.5;
      fVar23 = fVar23 * (3.0 - fVar12 * fVar12 * fVar19) * fVar12 * 0.5;
    }
    else {
      fVar10 = (float)acosf();
      fVar12 = (float)sinf();
      fVar13 = (float)sinf(fVar10 - fVar10 * 0.7);
      fVar13 = fVar13 * (1.0 / fVar12);
      fVar10 = (float)sinf(fVar10 * 0.7);
      fVar10 = fVar10 * (1.0 / fVar12);
      fVar20 = fVar13 * 1.0 + fVar10 * fVar24;
      fVar21 = fVar13 * 0.0 + fVar10 * fVar9;
      fVar22 = fVar13 * 0.0 + fVar10 * fVar11;
      fVar23 = fVar13 * 0.0 + fVar10 * fVar25;
    }
    fVar11 = fVar23 * fVar15;
    fVar25 = fVar21 * fVar16;
    fVar12 = fVar23 * fVar17;
    fVar24 = fVar22 * fVar16;
    fVar9 = fVar22 * fVar15;
    fVar10 = fVar21 * fVar15;
    fVar15 = fVar22 * fVar17 * 1.0 + fVar20 * fVar15 * 1.0 + (fVar14 * fVar21 - fVar23 * fVar16);
    fVar16 = fVar11 * 1.0 + fVar20 * fVar16 * 1.0 + (fVar14 * fVar22 - fVar21 * fVar17);
    fVar17 = fVar25 * 1.0 + fVar20 * fVar17 * 1.0 + (fVar14 * fVar23 - fVar9);
    fVar14 = fVar12 * -1.0 + fVar24 * -1.0 + (fVar14 * fVar20 - fVar10);
    *param_2 = fVar14;
    param_2[1] = fVar15;
    param_2[2] = fVar16;
    param_2[3] = fVar17;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b8 ^ (ulonglong)auStack_f8);
}





// 函数: void FUN_18022ae2d(void)
void FUN_18022ae2d(void)

{
  longlong lVar1;
  int8_t auVar2 [16];
  int8_t auVar3 [16];
  char in_AL;
  uint uVar4;
  ulonglong uVar5;
  float *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int8_t auVar12 [16];
  float fVar13;
  uint in_XMM5_Da;
  float unaff_XMM6_Da;
  float fVar14;
  float unaff_XMM6_Db;
  float fVar15;
  float unaff_XMM6_Dc;
  float fVar16;
  float unaff_XMM6_Dd;
  float fVar17;
  float unaff_XMM7_Da;
  float fVar18;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float afStackX_20 [2];
  ulonglong in_stack_00000040;
  
  do {
    lVar1 = (longlong)in_AL + 0x82;
    auVar12 = *(int8_t (*) [16])(unaff_RSI + lVar1 * 0x10);
    fVar8 = auVar12._8_4_ * 0.0;
    fVar9 = auVar12._12_4_ * 0.0;
    fVar11 = fVar9 + auVar12._4_4_ * 0.0;
    fVar10 = fVar8 + auVar12._0_4_ * 1.0 + fVar11;
    auVar3._4_4_ = fVar11;
    auVar3._0_4_ = fVar10;
    auVar3._8_4_ = fVar8 + fVar8;
    auVar3._12_4_ = fVar9 + fVar9;
    uVar4 = movmskps((int)lVar1 * 2,auVar3);
    uVar5 = (ulonglong)(uVar4 & 1);
    fVar8 = afStackX_20[uVar5 * 4] * auVar12._0_4_;
    fVar9 = afStackX_20[uVar5 * 4 + 1] * auVar12._4_4_;
    fVar11 = *(float *)(&stack0x00000028 + uVar5 * 0x10) * auVar12._8_4_;
    fVar18 = *(float *)(&stack0x0000002c + uVar5 * 0x10) * auVar12._12_4_;
    if (unaff_XMM7_Da < (float)((uint)fVar10 & in_XMM5_Da)) {
      fVar14 = fVar8 * 0.7 + 0.3;
      fVar15 = fVar9 * 0.7 + 0.0;
      fVar16 = fVar11 * 0.7 + 0.0;
      fVar17 = fVar18 * 0.7 + 0.0;
      fVar8 = fVar17 * fVar17 + fVar14 * fVar14;
      fVar9 = fVar16 * fVar16 + fVar15 * fVar15;
      fVar7 = fVar8 + fVar15 * fVar15 + fVar16 * fVar16;
      fVar13 = fVar9 + fVar14 * fVar14 + fVar17 * fVar17;
      auVar2._4_4_ = fVar8 + fVar9 + 1.1754944e-38;
      auVar2._0_4_ = fVar9 + fVar8 + 1.1754944e-38;
      auVar2._8_4_ = fVar7 + 1.1754944e-38;
      auVar2._12_4_ = fVar13 + 1.1754944e-38;
      auVar12 = rsqrtps(auVar12,auVar2);
      fVar10 = auVar12._0_4_;
      fVar11 = auVar12._4_4_;
      fVar18 = auVar12._8_4_;
      fVar6 = auVar12._12_4_;
      fVar14 = fVar14 * (3.0 - fVar10 * fVar10 * (fVar9 + fVar8)) * fVar10 * 0.5;
      fVar15 = fVar15 * (3.0 - fVar11 * fVar11 * (fVar8 + fVar9)) * fVar11 * 0.5;
      fVar16 = fVar16 * (3.0 - fVar18 * fVar18 * fVar7) * fVar18 * 0.5;
      fVar17 = fVar17 * (3.0 - fVar6 * fVar6 * fVar13) * fVar6 * 0.5;
    }
    else {
      fVar10 = (float)acosf();
      fVar6 = (float)sinf();
      fVar7 = (float)sinf(fVar10 - fVar10 * unaff_XMM13_Da);
      fVar7 = fVar7 * (unaff_XMM12_Da / fVar6);
      fVar10 = (float)sinf(fVar10 * unaff_XMM13_Da);
      in_XMM5_Da = 0x7fffffff;
      unaff_XMM7_Da = 0.9995;
      fVar10 = fVar10 * (unaff_XMM12_Da / fVar6);
      fVar14 = fVar7 * 1.0 + fVar10 * fVar8;
      fVar15 = fVar7 * 0.0 + fVar10 * fVar9;
      fVar16 = fVar7 * 0.0 + fVar10 * fVar11;
      fVar17 = fVar7 * 0.0 + fVar10 * fVar18;
    }
    fVar11 = fVar17 * unaff_XMM6_Db;
    fVar18 = fVar15 * unaff_XMM6_Dc;
    fVar6 = fVar17 * unaff_XMM6_Dd;
    fVar8 = fVar16 * unaff_XMM6_Dc;
    fVar9 = fVar16 * unaff_XMM6_Db;
    fVar10 = fVar15 * unaff_XMM6_Db;
    unaff_XMM6_Db =
         fVar16 * unaff_XMM6_Dd * 1.0 + fVar14 * unaff_XMM6_Db * 1.0 +
         (unaff_XMM6_Da * fVar15 - fVar17 * unaff_XMM6_Dc);
    unaff_XMM6_Dc =
         fVar11 * 1.0 + fVar14 * unaff_XMM6_Dc * 1.0 +
         (unaff_XMM6_Da * fVar16 - fVar15 * unaff_XMM6_Dd);
    unaff_XMM6_Dd = fVar18 * 1.0 + fVar14 * unaff_XMM6_Dd * 1.0 + (unaff_XMM6_Da * fVar17 - fVar9);
    unaff_XMM6_Da = fVar6 * -1.0 + fVar8 * -1.0 + (unaff_XMM6_Da * fVar14 - fVar10);
    *unaff_RBX = unaff_XMM6_Da;
    unaff_RBX[1] = unaff_XMM6_Db;
    unaff_RBX[2] = unaff_XMM6_Dc;
    unaff_RBX[3] = unaff_XMM6_Dd;
    in_AL = *(char *)((longlong)in_AL + 0x100 + unaff_RBP);
  } while (-1 < in_AL);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000040 ^ (ulonglong)&stack0x00000000);
}





