#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part116.c - 2 个函数

// 函数: void FUN_1801286d8(void)
void FUN_1801286d8(void)

{
  int iVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  longlong lVar7;
  char cVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong lVar9;
  float in_XMM5_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  
  lVar7 = _DAT_180c8a9b0;
  if ((*(char *)(unaff_RBX + 0x17d) == '\0') || ((*(uint *)(unaff_RBX + 0xc) & 0x800000) != 0)) {
    uVar3 = *(int32_t *)(unaff_RBP + -0x50);
    uVar4 = *(int32_t *)(unaff_RBP + -0x4c);
    uVar5 = *(int32_t *)(unaff_RBP + -0x48);
    uVar6 = *(int32_t *)(unaff_RBP + -0x44);
    lVar9 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
    *(uint64_t *)(lVar9 + 0x144) = 0;
    *(int32_t *)(lVar9 + 0x14c) = uVar3;
    *(int32_t *)(lVar9 + 0x150) = uVar4;
    *(int32_t *)(lVar9 + 0x154) = uVar5;
    *(int32_t *)(lVar9 + 0x158) = uVar6;
    lVar2 = *(longlong *)(lVar7 + 0x1af8);
    if (((*(float *)(lVar2 + 0x22c) <= unaff_XMM9_Da && unaff_XMM9_Da != *(float *)(lVar2 + 0x22c))
        && (((unaff_XMM7_Da < *(float *)(lVar2 + 0x234) &&
             (*(float *)(lVar2 + 0x228) <= in_XMM5_Da && in_XMM5_Da != *(float *)(lVar2 + 0x228)))
            && (unaff_XMM8_Da < *(float *)(lVar2 + 0x230))))) || (*(char *)(lVar7 + 0x2e38) != '\0')
       ) {
      cVar8 = FUN_180128040(unaff_RBP + -0x50,unaff_RBP + -0x48,1);
      if (cVar8 != '\0') {
        *(uint *)(lVar9 + 0x148) = *(uint *)(lVar9 + 0x148) | 1;
      }
    }
  }
  else {
    FUN_180124190(unaff_RBP + -0x50,*(int32_t *)(unaff_RBX + 0x88),0);
    if (*(int *)(unaff_RBX + 0x88) == *(int *)(_DAT_180c8a9b0 + 0x1ca0)) {
      FUN_1801230e0(unaff_RBP + -0x50,1);
    }
    if ((*(int *)(unaff_RBX + 0x174) == 0) && (unaff_RBX == *(longlong *)(unaff_RDI + 0x1c98))) {
      iVar1 = *(int *)(_DAT_180c8a9b0 + 0x1ca0);
      *(float *)(unaff_RBP + -0x48) = *(float *)(unaff_RBP + -0x48) + 2.0;
      *(float *)(unaff_RBP + -0x44) = *(float *)(unaff_RBP + -0x44) + 2.0;
      *(float *)(unaff_RBP + -0x50) = *(float *)(unaff_RBP + -0x50) - 2.0;
      *(float *)(unaff_RBP + -0x4c) = *(float *)(unaff_RBP + -0x4c) - 2.0;
      if (*(int *)(unaff_RDI + 0x1ca0) == iVar1) {
        FUN_1801230e0(unaff_RBP + -0x50,2);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_180128850(int32_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong lVar4;
  uint64_t uVar5;
  longlong lVar6;
  int8_t uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  
  lVar4 = _DAT_180c8a9b0;
  uStack_28 = 3;
  uStack_24 = *(int32_t *)(_DAT_180c8a9b0 + 0x16f8);
  uStack_20 = *(int32_t *)(_DAT_180c8a9b0 + 0x16fc);
  uStack_1c = *(int32_t *)(_DAT_180c8a9b0 + 0x1700);
  uStack_18 = *(int32_t *)(_DAT_180c8a9b0 + 0x1704);
  FUN_18013e100(_DAT_180c8a9b0 + 0x1b80,&uStack_28);
  *(int32_t *)(lVar4 + 0x16f8) = *(int32_t *)(lVar4 + 0x1738);
  *(int32_t *)(lVar4 + 0x16fc) = *(int32_t *)(lVar4 + 0x173c);
  *(int32_t *)(lVar4 + 0x1700) = *(int32_t *)(lVar4 + 0x1740);
  *(int32_t *)(lVar4 + 0x1704) = *(int32_t *)(lVar4 + 0x1744);
  FUN_18012d9c0(6,*(int32_t *)(lVar4 + 0x1664));
  FUN_18012d9c0(7,*(int32_t *)(lVar4 + 0x1668));
  FUN_18012da40(1,lVar4 + 0x165c);
  uVar7 = FUN_1801283f0(0,param_1,param_2);
  lVar6 = _DAT_180c8a9b0;
  lVar8 = (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b90);
  lVar4 = *(longlong *)(_DAT_180c8a9b0 + 0x1b98);
  lVar9 = (longlong)*(int *)(lVar4 + -0xc + lVar8 * 0xc);
  uVar10 = (ulonglong)*(uint *)(&UNK_18098d188 + lVar9 * 0xc);
  if (*(int *)(&UNK_18098d180 + lVar9 * 0xc) == 4) {
    if (*(int *)(&UNK_18098d184 + lVar9 * 0xc) == 1) {
      *(int32_t *)(uVar10 + 0x1628 + _DAT_180c8a9b0) = *(int32_t *)(lVar4 + -8 + lVar8 * 0xc);
    }
    else if (*(int *)(&UNK_18098d184 + lVar9 * 0xc) == 2) {
      *(int32_t *)(uVar10 + 0x1628 + _DAT_180c8a9b0) = *(int32_t *)(lVar4 + -8 + lVar8 * 0xc);
      *(int32_t *)(uVar10 + 0x162c + lVar6) = *(int32_t *)(lVar4 + -4 + lVar8 * 0xc);
    }
  }
  iVar3 = *(int *)(lVar6 + 0x1b90);
  *(int *)(lVar6 + 0x1b90) = iVar3 + -1;
  lVar4 = (longlong)iVar3 + -2;
  lVar8 = *(longlong *)(lVar6 + 0x1b98);
  lVar9 = (longlong)*(int *)(lVar8 + lVar4 * 0xc);
  uVar10 = (ulonglong)*(uint *)(&UNK_18098d188 + lVar9 * 0xc);
  if (*(int *)(&UNK_18098d180 + lVar9 * 0xc) == 4) {
    if (*(int *)(&UNK_18098d184 + lVar9 * 0xc) == 1) {
      *(int32_t *)(uVar10 + 0x1628 + lVar6) = *(int32_t *)(lVar8 + 4 + lVar4 * 0xc);
    }
    else if (*(int *)(&UNK_18098d184 + lVar9 * 0xc) == 2) {
      *(int32_t *)(uVar10 + 0x1628 + lVar6) = *(int32_t *)(lVar8 + 4 + lVar4 * 0xc);
      *(int32_t *)(uVar10 + 0x162c + lVar6) = *(int32_t *)(lVar8 + 8 + lVar4 * 0xc);
    }
  }
  iVar3 = *(int *)(lVar6 + 0x1b90);
  *(int *)(lVar6 + 0x1b90) = iVar3 + -1;
  lVar4 = (longlong)iVar3 + -2;
  lVar8 = *(longlong *)(lVar6 + 0x1b98);
  lVar9 = (longlong)*(int *)(lVar8 + lVar4 * 0xc);
  uVar10 = (ulonglong)*(uint *)(&UNK_18098d188 + lVar9 * 0xc);
  if (*(int *)(&UNK_18098d180 + lVar9 * 0xc) == 4) {
    if (*(int *)(&UNK_18098d184 + lVar9 * 0xc) == 1) {
      *(int32_t *)(uVar10 + 0x1628 + lVar6) = *(int32_t *)(lVar8 + 4 + lVar4 * 0xc);
    }
    else if (*(int *)(&UNK_18098d184 + lVar9 * 0xc) == 2) {
      *(int32_t *)(uVar10 + 0x1628 + lVar6) = *(int32_t *)(lVar8 + 4 + lVar4 * 0xc);
      *(int32_t *)(uVar10 + 0x162c + lVar6) = *(int32_t *)(lVar8 + 8 + lVar4 * 0xc);
    }
  }
  *(int *)(lVar6 + 0x1b90) = *(int *)(lVar6 + 0x1b90) + -1;
  puVar1 = (uint64_t *)
           (*(longlong *)(lVar6 + 0x1b88) + -0x10 + (longlong)*(int *)(lVar6 + 0x1b80) * 0x14);
  uVar5 = puVar1[1];
  puVar2 = (uint64_t *)
           (lVar6 + 0x16c8 +
           (longlong)
           *(int *)(*(longlong *)(lVar6 + 0x1b88) + -0x14 +
                   (longlong)*(int *)(lVar6 + 0x1b80) * 0x14) * 0x10);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  *(int *)(lVar6 + 0x1b80) = *(int *)(lVar6 + 0x1b80) + -1;
  return uVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180128bd0(uint64_t param_1,uint64_t param_2,ulonglong param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int iVar2;
  longlong lVar3;
  int8_t uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  uint64_t uStackX_20;
  
  lVar3 = _DAT_180c8a9b0;
  if (_DAT_180c8a9b0 != 0) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
  }
  lVar7 = func_0x000180120ce0(0x438,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
  uVar9 = 0;
  iVar11 = 0;
  uVar8 = uVar9;
  if (lVar7 != 0) {
    uVar8 = FUN_180123460(lVar7,lVar3,param_1);
  }
  uVar15 = (uint)param_3;
  *(uint *)(uVar8 + 0xc) = uVar15;
  FUN_180122160(lVar3 + 0x1ae0,*(int32_t *)(uVar8 + 8),uVar8);
  lVar14 = _DAT_180c8a9b0;
  lVar7 = **(longlong **)(_DAT_180c8a9b0 + 0x1c70);
  fVar16 = *(float *)(lVar7 + 0xc);
  *(float *)(uVar8 + 0x40) = *(float *)(lVar7 + 8) + 60.0;
  *(float *)(uVar8 + 0x44) = fVar16 + 60.0;
  uStackX_20 = param_2;
  if (((uVar15 >> 8 & 1) == 0) && (iVar12 = *(int *)(lVar14 + 0x2e28), iVar12 != 0)) {
    lVar14 = *(longlong *)(lVar14 + 0x2e30);
    piVar13 = (int *)(lVar14 + 8);
    uVar10 = uVar9;
    do {
      if (*piVar13 == *(int *)(uVar8 + 8)) {
        lVar14 = (longlong)(int)uVar10 * 0x38 + lVar14;
        if (lVar14 != 0) {
          *(int *)(uVar8 + 0x2e0) = (int)((lVar14 - *(longlong *)(lVar3 + 0x2e30)) / 0x38);
          *(uint *)(uVar8 + 0xe0) = *(uint *)(uVar8 + 0xe0) & 0xfffffffb;
          *(uint *)(uVar8 + 0xe4) = *(uint *)(uVar8 + 0xe4) & 0xfffffffb;
          *(uint *)(uVar8 + 0xe8) = *(uint *)(uVar8 + 0xe8) & 0xfffffffb;
          *(uint *)(uVar8 + 0xec) = *(uint *)(uVar8 + 0xec) & 0xfffffffb;
          if (*(int *)(lVar14 + 0x24) == 0) {
            uVar1 = *(uint64_t *)(lVar7 + 8);
          }
          else {
            *(int *)(uVar8 + 0x30) = *(int *)(lVar14 + 0x24);
            uVar1 = *(uint64_t *)(lVar14 + 0x1c);
          }
          *(uint64_t *)(uVar8 + 0x34) = uVar1;
          fVar16 = *(float *)(lVar14 + 0x10);
          *(float *)(uVar8 + 0x40) =
               (float)(int)(*(float *)(uVar8 + 0x34) + *(float *)(lVar14 + 0xc));
          *(float *)(uVar8 + 0x44) = (float)(int)(*(float *)(uVar8 + 0x38) + fVar16);
          *(int8_t *)(uVar8 + 0xb2) = *(int8_t *)(lVar14 + 0x32);
          fVar16 = *(float *)(lVar14 + 0x18);
          fVar17 = *(float *)(lVar14 + 0x14);
          if (1e-05 < fVar17 * fVar17 + fVar16 * fVar16) {
            uStackX_20 = CONCAT44((float)(int)fVar16,(float)(int)fVar17);
          }
          *(int32_t *)(uVar8 + 0x418) = *(int32_t *)(lVar14 + 0x28);
          *(int16_t *)(uVar8 + 0x430) = *(int16_t *)(lVar14 + 0x30);
        }
        break;
      }
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar9 = uVar9 + 1;
      piVar13 = piVar13 + 0xe;
    } while (uVar9 != (longlong)iVar12);
  }
  fVar17 = (float)(int)(float)uStackX_20;
  fVar16 = (float)(int)uStackX_20._4_4_;
  *(float *)(uVar8 + 0x58) = fVar17;
  *(float *)(uVar8 + 0x5c) = fVar16;
  *(float *)(uVar8 + 0x50) = fVar17;
  *(float *)(uVar8 + 0x54) = fVar16;
  *(float *)(uVar8 + 0x48) = fVar17;
  *(float *)(uVar8 + 0x4c) = fVar16;
  *(uint64_t *)(uVar8 + 0x118) = *(uint64_t *)(uVar8 + 0x40);
  if ((param_3 & 0x40) == 0) {
    if (fVar17 <= 0.0) {
      *(int32_t *)(uVar8 + 0xc4) = 2;
    }
    if (*(float *)(uVar8 + 0x4c) <= 0.0) {
      *(int32_t *)(uVar8 + 200) = 2;
    }
    if ((*(int *)(uVar8 + 0xc4) < 1) && (*(int *)(uVar8 + 200) < 1)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *(int8_t *)(uVar8 + 0xcc) = uVar4;
  }
  else {
    *(int32_t *)(uVar8 + 200) = 2;
    *(int32_t *)(uVar8 + 0xc4) = 2;
    *(int8_t *)(uVar8 + 0xcc) = 0;
  }
  piVar13 = (int *)(lVar3 + 0x1ab0);
  iVar6 = *piVar13;
  iVar2 = *(int *)(lVar3 + 0x1ab4);
  iVar12 = 8;
  if (iVar6 == iVar2) {
    iVar5 = iVar12;
    if (iVar2 != 0) {
      iVar5 = iVar2 / 2 + iVar2;
    }
    iVar2 = iVar6 + 1;
    if (iVar6 + 1 < iVar5) {
      iVar2 = iVar5;
    }
    FUN_18011dc70(piVar13,iVar2);
    iVar6 = *piVar13;
  }
  *(ulonglong *)(*(longlong *)(lVar3 + 0x1ab8) + (longlong)iVar6 * 8) = uVar8;
  *piVar13 = *piVar13 + 1;
  piVar13 = (int *)(lVar3 + 0x1aa0);
  iVar6 = *piVar13;
  if ((uVar15 >> 0xd & 1) == 0) {
    iVar2 = *(int *)(lVar3 + 0x1aa4);
    iVar11 = iVar6;
    if (iVar6 == iVar2) {
      if (iVar2 != 0) {
        iVar12 = iVar2 + iVar2 / 2;
      }
      iVar11 = iVar6 + 1;
      if (iVar6 + 1 < iVar12) {
        iVar11 = iVar12;
      }
      FUN_18011dc70(piVar13,iVar11);
      iVar11 = *piVar13;
    }
  }
  else {
    if (iVar6 != 0) {
      iVar11 = *(int *)(lVar3 + 0x1aa4);
      if (iVar6 == iVar11) {
        if (iVar11 != 0) {
          iVar12 = iVar11 + iVar11 / 2;
        }
        iVar11 = iVar6 + 1;
        if (iVar6 + 1 < iVar12) {
          iVar11 = iVar12;
        }
        FUN_18011dc70(piVar13,iVar11);
        iVar6 = *piVar13;
      }
      if (0 < iVar6) {
                    // WARNING: Subroutine does not return
        memmove(*(longlong *)(lVar3 + 0x1aa8) + 8,*(longlong *)(lVar3 + 0x1aa8),(longlong)iVar6 << 3
               );
      }
      **(ulonglong **)(lVar3 + 0x1aa8) = uVar8;
      goto LAB_180128faf;
    }
    if (*(int *)(lVar3 + 0x1aa4) == 0) {
      FUN_18011dc70(piVar13,8);
      iVar11 = *piVar13;
    }
  }
  *(ulonglong *)(*(longlong *)(lVar3 + 0x1aa8) + (longlong)iVar11 * 8) = uVar8;
LAB_180128faf:
  *piVar13 = *piVar13 + 1;
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180128fd0(uint64_t *param_1,longlong param_2,uint64_t param_3)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint64_t uStackX_8;
  uint64_t uStack_48;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  uint64_t uStack_30;
  
  lVar1 = _DAT_180c8a9b0;
  uStackX_8._0_4_ = (float)param_3;
  uStackX_8._4_4_ = (float)((ulonglong)param_3 >> 0x20);
  uStack_30._4_4_ = uStackX_8._4_4_;
  uStack_30._0_4_ = (float)uStackX_8;
  uVar2 = param_3;
  if (*(int *)(_DAT_180c8a9b0 + 0x1be0) != 0) {
    uStack_30._0_4_ = *(float *)(_DAT_180c8a9b0 + 0x1c18);
    uStack_30._4_4_ = *(float *)(_DAT_180c8a9b0 + 0x1c1c);
    fVar4 = *(float *)(_DAT_180c8a9b0 + 0x1c20);
    fVar5 = *(float *)(_DAT_180c8a9b0 + 0x1c24);
    if (((float)uStack_30 < 0.0) || (fVar4 < 0.0)) {
      uStack_30._0_4_ = *(float *)(param_2 + 0x50);
      uStackX_8 = CONCAT44(uStackX_8._4_4_,(float)uStack_30);
      uVar2 = uStackX_8;
    }
    else if ((float)uStack_30 <= (float)uStackX_8) {
      uStack_30._0_4_ = (float)uStackX_8;
      uVar2 = param_3;
      if (fVar4 < (float)uStackX_8) {
        uStackX_8 = CONCAT44(uStackX_8._4_4_,fVar4);
        uStack_30._0_4_ = fVar4;
        uVar2 = uStackX_8;
      }
    }
    else {
      uStackX_8 = CONCAT44(uStackX_8._4_4_,(float)uStack_30);
      uVar2 = uStackX_8;
    }
    uStackX_8 = uVar2;
    if ((uStack_30._4_4_ < 0.0) || (fVar5 < 0.0)) {
      uStack_30._4_4_ = *(float *)(param_2 + 0x54);
      uStackX_8 = CONCAT44(uStack_30._4_4_,(float)uStackX_8);
    }
    else if (uStack_30._4_4_ <= uStackX_8._4_4_) {
      uStack_30._4_4_ = uStackX_8._4_4_;
      if (fVar5 < uStackX_8._4_4_) {
        uStackX_8 = CONCAT44(fVar5,(float)uStackX_8);
        uStack_30._4_4_ = fVar5;
      }
    }
    else {
      uStackX_8 = CONCAT44(uStack_30._4_4_,(float)uStackX_8);
    }
    uVar2 = uStackX_8;
    if (*(code **)(_DAT_180c8a9b0 + 0x1c28) != (code *)0x0) {
      uStack_40 = *(int32_t *)(param_2 + 0x40);
      uStack_3c = *(int32_t *)(param_2 + 0x44);
      uStack_48 = *(uint64_t *)(_DAT_180c8a9b0 + 0x1c30);
      uStack_38 = *(int32_t *)(param_2 + 0x50);
      uStack_34 = *(int32_t *)(param_2 + 0x54);
      uStack_30 = uStackX_8;
      (**(code **)(_DAT_180c8a9b0 + 0x1c28))(&uStack_48);
      uVar2 = uStack_30;
    }
  }
  uStackX_8 = uVar2;
  if ((*(uint *)(param_2 + 0xc) & 0x1000040) == 0) {
    if ((*(longlong *)(param_2 + 0x410) == 0) ||
       (lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x410) + 0x70), lVar3 == 0)) {
      lVar3 = param_2;
    }
    fVar5 = *(float *)(lVar1 + 0x1640);
    if (*(float *)(lVar1 + 0x1640) <= uStack_30._4_4_) {
      fVar5 = uStack_30._4_4_;
    }
    fVar4 = *(float *)(lVar1 + 0x163c);
    if (*(float *)(lVar1 + 0x163c) <= (float)uStack_30) {
      fVar4 = (float)uStack_30;
    }
    if ((*(uint *)(lVar3 + 0xc) & 1) == 0) {
      fVar8 = *(float *)(_DAT_180c8a9b0 + 0x19fc) * *(float *)(lVar3 + 0x2d8) *
              *(float *)(lVar3 + 0x2dc) +
              *(float *)(_DAT_180c8a9b0 + 0x1660) + *(float *)(_DAT_180c8a9b0 + 0x1660);
    }
    else {
      fVar8 = 0.0;
    }
    if ((*(uint *)(lVar3 + 0xc) >> 10 & 1) == 0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = *(float *)(_DAT_180c8a9b0 + 0x19fc) * *(float *)(lVar3 + 0x2d8) *
              *(float *)(lVar3 + 0x2dc) + *(float *)(lVar3 + 0x184) +
              *(float *)(_DAT_180c8a9b0 + 0x1660) + *(float *)(_DAT_180c8a9b0 + 0x1660);
    }
    fVar7 = *(float *)(lVar1 + 0x1634) - 1.0;
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    fVar7 = fVar7 + fVar6 + fVar8;
    if (fVar5 < fVar7) {
      fVar5 = fVar7;
    }
  }
  else {
    fVar4 = (float)uStackX_8;
    fVar5 = (float)((ulonglong)uStackX_8 >> 0x20);
  }
  *param_1 = CONCAT44(fVar5,fVar4);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180129220(uint64_t *param_1,longlong param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStackX_c;
  float fStackX_10;
  float fStackX_14;
  
  lVar3 = _DAT_180c8a9b0;
  fVar6 = *(float *)(_DAT_180c8a9b0 + 0x163c);
  fStackX_c = *(float *)(_DAT_180c8a9b0 + 0x1640);
  if ((*(uint *)(param_2 + 0xc) & 0x14000000) != 0) {
    if (4.0 <= fVar6) {
      fVar6 = 4.0;
    }
    if (4.0 <= fStackX_c) {
      fStackX_c = 4.0;
    }
  }
  fVar4 = *(float *)(*(longlong *)(param_2 + 0x28) + 0x10);
  fVar5 = *(float *)(*(longlong *)(param_2 + 0x28) + 0x14);
  if (*(char *)(param_2 + 0xae) != '\0') {
    fVar4 = 3.4028235e+38;
    fVar5 = 3.4028235e+38;
  }
  iVar2 = *(int *)(param_2 + 0x3c);
  if ((-1 < iVar2) && (iVar2 < *(int *)(_DAT_180c8a9b0 + 0x1600))) {
    fVar4 = *(float *)(*(longlong *)(_DAT_180c8a9b0 + 0x1608) + 0x18 + (longlong)iVar2 * 0x24);
    fVar5 = *(float *)(*(longlong *)(_DAT_180c8a9b0 + 0x1608) + 0x1c + (longlong)iVar2 * 0x24);
  }
  fVar4 = fVar4 - (*(float *)(_DAT_180c8a9b0 + 0x16b4) + *(float *)(_DAT_180c8a9b0 + 0x16b4));
  fVar1 = param_3[1];
  if (fVar4 <= fVar6) {
    fVar4 = fVar6;
  }
  if (fStackX_c <= fVar1) {
    fVar5 = fVar5 - (*(float *)(_DAT_180c8a9b0 + 0x16b8) + *(float *)(_DAT_180c8a9b0 + 0x16b8));
    if (fVar5 <= fStackX_c) {
      fVar5 = fStackX_c;
    }
    fStackX_c = fVar5;
    if (fVar1 <= fVar5) {
      fStackX_c = fVar1;
    }
  }
  fVar5 = *param_3;
  if ((fVar6 <= fVar5) && (fVar6 = fVar4, fVar5 <= fVar4)) {
    fVar6 = fVar5;
  }
  FUN_180128fd0(&fStackX_10,fVar4,CONCAT44(fStackX_c,fVar6));
  if (((fStackX_10 < *param_3) && ((*(uint *)(param_2 + 0xc) & 8) == 0)) &&
     ((*(uint *)(param_2 + 0xc) >> 0xb & 1) != 0)) {
    fStackX_c = fStackX_c + *(float *)(lVar3 + 0x168c);
  }
  if ((param_3[1] <= fStackX_14) || ((*(byte *)(param_2 + 0xc) & 8) != 0)) {
    *param_1 = CONCAT44(fStackX_c,fVar6);
  }
  else {
    *param_1 = CONCAT44(fStackX_c,fVar6 + *(float *)(lVar3 + 0x168c));
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_1801293e0(float *param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = _DAT_180c8a9b0;
  fVar5 = *(float *)(param_2 + 0x94);
  *(uint64_t *)param_1 = *(uint64_t *)(param_2 + 0x8c);
  if (fVar5 < 3.4028235e+38) {
    *param_1 = fVar5 - (*(float *)(param_2 + 0x50) - *(float *)(param_2 + 0xa4)) *
                       *(float *)(param_2 + 0x9c);
  }
  fVar5 = *(float *)(param_2 + 0x98);
  if (3.4028235e+38 <= fVar5) {
    fVar5 = param_1[1];
  }
  else {
    fVar7 = *(float *)(param_2 + 0xa0);
    if (param_3 != '\0') {
      if ((fVar7 <= 0.0) &&
         (fVar5 < *(float *)(param_2 + 0x74) || fVar5 == *(float *)(param_2 + 0x74))) {
        fVar5 = 0.0;
      }
      if ((1.0 <= fVar7) &&
         ((*(float *)(param_2 + 100) - *(float *)(param_2 + 0x74)) + *(float *)(lVar2 + 0x1670) <=
          fVar5)) {
        fVar5 = *(float *)(param_2 + 100);
      }
    }
    if ((*(uint *)(param_2 + 0xc) & 1) == 0) {
      fVar6 = *(float *)(lVar2 + 0x19fc) * *(float *)(param_2 + 0x2d8) * *(float *)(param_2 + 0x2dc)
              + *(float *)(lVar2 + 0x1660) + *(float *)(lVar2 + 0x1660);
    }
    else {
      fVar6 = 0.0;
    }
    if ((*(uint *)(param_2 + 0xc) >> 10 & 1) == 0) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = *(float *)(lVar2 + 0x19fc) * *(float *)(param_2 + 0x2d8) * *(float *)(param_2 + 0x2dc)
              + *(float *)(param_2 + 0x184) +
              *(float *)(lVar2 + 0x1660) + *(float *)(lVar2 + 0x1660);
    }
    fVar5 = (fVar5 - (fVar3 + fVar6) * (1.0 - fVar7)) -
            (*(float *)(param_2 + 0x54) - *(float *)(param_2 + 0xa8)) * fVar7;
    param_1[1] = fVar5;
  }
  cVar1 = *(char *)(param_2 + 0xb2);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar7 = *param_1;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  param_1[1] = fVar5;
  *param_1 = fVar7;
  if ((cVar1 == '\0') && (*(char *)(param_2 + 0xb4) == '\0')) {
    fVar4 = *(float *)(param_2 + 0x60) - (*(float *)(param_2 + 0x50) - *(float *)(param_2 + 0xa4));
    fVar6 = *(float *)(param_2 + 0x54);
    fVar3 = *(float *)(param_2 + 0xa8);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (fVar7 <= fVar4) {
      fVar4 = fVar7;
    }
    *param_1 = fVar4;
    fVar7 = *(float *)(param_2 + 100) - (fVar6 - fVar3);
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    if (fVar5 <= fVar7) {
      fVar7 = fVar5;
    }
    param_1[1] = fVar7;
  }
  return param_1;
}



float * FUN_180129445(float *param_1,longlong param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong in_RAX;
  char in_R8B;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_XMM5_Da;
  
  if (in_R8B != '\0') {
    if ((in_XMM5_Da <= param_4) &&
       (param_3 < *(float *)(param_2 + 0x74) || param_3 == *(float *)(param_2 + 0x74))) {
      param_3 = 0.0;
    }
    if ((1.0 <= in_XMM5_Da) &&
       ((*(float *)(param_2 + 100) - *(float *)(param_2 + 0x74)) + *(float *)(in_RAX + 0x1670) <=
        param_3)) {
      param_3 = *(float *)(param_2 + 100);
    }
  }
  if ((*(uint *)(param_2 + 0xc) & 1) == 0) {
    fVar6 = *(float *)(in_RAX + 0x19fc) * *(float *)(param_2 + 0x2d8) * *(float *)(param_2 + 0x2dc)
            + *(float *)(in_RAX + 0x1660) + *(float *)(in_RAX + 0x1660);
  }
  else {
    fVar6 = 0.0;
  }
  if ((*(uint *)(param_2 + 0xc) >> 10 & 1) == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = *(float *)(in_RAX + 0x19fc) * *(float *)(param_2 + 0x2d8) * *(float *)(param_2 + 0x2dc)
            + *(float *)(param_2 + 0x184) +
            *(float *)(in_RAX + 0x1660) + *(float *)(in_RAX + 0x1660);
  }
  fVar6 = (param_3 - (fVar4 + fVar6) * (1.0 - in_XMM5_Da)) -
          (*(float *)(param_2 + 0x54) - *(float *)(param_2 + 0xa8)) * in_XMM5_Da;
  param_1[1] = fVar6;
  cVar3 = *(char *)(param_2 + 0xb2);
  if (fVar6 <= param_4) {
    fVar6 = param_4;
  }
  fVar4 = *param_1;
  if (*param_1 <= param_4) {
    fVar4 = param_4;
  }
  param_1[1] = fVar6;
  *param_1 = fVar4;
  if ((cVar3 == '\0') && (*(char *)(param_2 + 0xb4) == '\0')) {
    fVar5 = *(float *)(param_2 + 0x60) - (*(float *)(param_2 + 0x50) - *(float *)(param_2 + 0xa4));
    fVar1 = *(float *)(param_2 + 0x54);
    fVar2 = *(float *)(param_2 + 0xa8);
    if (fVar5 <= param_4) {
      fVar5 = param_4;
    }
    if (fVar4 <= fVar5) {
      fVar5 = fVar4;
    }
    *param_1 = fVar5;
    fVar4 = *(float *)(param_2 + 100) - (fVar1 - fVar2);
    if (fVar4 <= param_4) {
      fVar4 = param_4;
    }
    if (fVar6 <= fVar4) {
      fVar4 = fVar6;
    }
    param_1[1] = fVar4;
  }
  return param_1;
}



float * FUN_180129529(float *param_1,longlong param_2,uint64_t param_3,float param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  cVar3 = *(char *)(param_2 + 0xb2);
  fVar6 = param_1[1];
  if (param_1[1] <= param_4) {
    fVar6 = param_4;
  }
  fVar5 = *param_1;
  if (*param_1 <= param_4) {
    fVar5 = param_4;
  }
  param_1[1] = fVar6;
  *param_1 = fVar5;
  if ((cVar3 == '\0') && (*(char *)(param_2 + 0xb4) == '\0')) {
    fVar4 = *(float *)(param_2 + 0x60) - (*(float *)(param_2 + 0x50) - *(float *)(param_2 + 0xa4));
    fVar1 = *(float *)(param_2 + 0x54);
    fVar2 = *(float *)(param_2 + 0xa8);
    if (fVar4 <= param_4) {
      fVar4 = param_4;
    }
    if (fVar5 <= fVar4) {
      fVar4 = fVar5;
    }
    *param_1 = fVar4;
    fVar5 = *(float *)(param_2 + 100) - (fVar1 - fVar2);
    if (fVar5 <= param_4) {
      fVar5 = param_4;
    }
    if (fVar6 <= fVar5) {
      fVar5 = fVar6;
    }
    param_1[1] = fVar5;
  }
  return param_1;
}





// 函数: void FUN_1801295b0(longlong param_1,float *param_2,float *param_3,float *param_4,uint64_t *param_5
void FUN_1801295b0(longlong param_1,float *param_2,float *param_3,float *param_4,uint64_t *param_5
                  )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStackX_8;
  float fStackX_c;
  
  fVar2 = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x4c);
  fVar1 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x48);
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar4 = (*(float *)(param_1 + 0x40) - fVar5) * *param_3 + fVar5;
  fVar3 = (*(float *)(param_1 + 0x44) - fVar6) * param_3[1] + fVar6;
  fVar5 = ((fVar5 - fVar1) * *param_3 + fVar1) - fVar4;
  fVar6 = ((fVar6 - fVar2) * param_3[1] + fVar2) - fVar3;
  FUN_180128fd0(&fStackX_8,param_1,CONCAT44(fVar6,fVar5));
  *(ulonglong *)param_4 = CONCAT44(fVar3,fVar4);
  if (*param_3 == 0.0) {
    *param_4 = *param_4 - (fStackX_8 - fVar5);
  }
  if (param_3[1] == 0.0) {
    param_4[1] = param_4[1] - (fStackX_c - fVar6);
  }
  *param_5 = CONCAT44(fStackX_c,fStackX_8);
  return;
}



float * FUN_1801296e0(float *param_1,longlong param_2,int param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 0x40);
  fVar2 = *(float *)(param_2 + 0x44);
  fVar3 = fVar1 + *(float *)(param_2 + 0x48);
  fVar4 = fVar2 + *(float *)(param_2 + 0x4c);
  if (param_5 == 0.0) {
    fVar3 = fVar3 - 1.0;
    fVar4 = fVar4 - 1.0;
  }
  if (param_3 == 0) {
    *param_1 = fVar1 + param_4;
    param_1[1] = fVar2 - param_5;
    param_1[2] = fVar3 - param_4;
    param_1[3] = fVar2 + param_5;
    return param_1;
  }
  if (param_3 == 1) {
    param_1[1] = fVar2 + param_4;
    *param_1 = fVar3 - param_5;
    param_1[2] = fVar3 + param_5;
    param_1[3] = fVar4 - param_4;
    return param_1;
  }
  if (param_3 == 2) {
    *param_1 = fVar1 + param_4;
    param_1[1] = fVar4 - param_5;
    param_1[2] = fVar3 - param_4;
    param_1[3] = fVar4 + param_5;
    return param_1;
  }
  if (param_3 == 3) {
    param_1[1] = fVar2 + param_4;
    *param_1 = fVar1 - param_5;
    param_1[2] = fVar1 + param_5;
    param_1[3] = fVar4 - param_4;
    return param_1;
  }
  *param_1 = 3.4028235e+38;
  param_1[1] = 3.4028235e+38;
  param_1[2] = -3.4028235e+38;
  param_1[3] = -3.4028235e+38;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



