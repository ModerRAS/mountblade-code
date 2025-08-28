#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part316.c - 9 个函数

// 函数: void FUN_18083bf1f(void)
void FUN_18083bf1f(void)

{
  ulonglong in_stack_00000230;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000230 ^ (ulonglong)&stack0x00000000);
}



int32_t * FUN_18083bf50(uint64_t param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int32_t uVar5;
  int iVar6;
  int iVar7;
  int32_t *puVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  uint uVar17;
  int iStackX_10;
  int iStackX_20;
  
  lVar1 = param_2 + 8;
  piVar2 = *(int **)(param_3 + 0x410);
  lVar3 = *(longlong *)(*(longlong *)(**(longlong **)(param_2 + 0x50) + 0x20) + 0x1320);
  iVar4 = FUN_18082d7f0(lVar1,1);
  if (iVar4 == 1) {
    puVar8 = (int32_t *)FUN_180831260(param_1,param_2,*(int *)(param_3 + 0x400) << 2);
    iVar4 = 0;
    for (uVar11 = *(int *)(param_3 + 0x408) - 1; uVar11 != 0; uVar11 = uVar11 >> 1) {
      iVar4 = iVar4 + 1;
    }
    uVar5 = FUN_18082d7f0(lVar1,iVar4);
    *puVar8 = uVar5;
    iVar4 = 0;
    for (uVar11 = *(int *)(param_3 + 0x408) - 1; uVar11 != 0; uVar11 = uVar11 >> 1) {
      iVar4 = iVar4 + 1;
    }
    uVar5 = FUN_18082d7f0(lVar1,iVar4);
    puVar8[1] = uVar5;
    iStackX_20 = 0;
    iStackX_10 = 2;
    piVar15 = piVar2;
    if (0 < *piVar2) {
      do {
        lVar16 = (longlong)piVar15[1];
        iVar6 = 0;
        iVar4 = piVar2[lVar16 + 0x20];
        bVar10 = (byte)piVar2[lVar16 + 0x30];
        if ((piVar2[lVar16 + 0x30] != 0) &&
           (iVar6 = FUN_18082e7c0((longlong)piVar2[lVar16 + 0x40] * 0x48 + lVar3,lVar1), iVar6 == -1
           )) goto LAB_18083c297;
        if (0 < iVar4) {
          lVar14 = 0;
          do {
            uVar9 = (ulonglong)iVar6;
            iVar6 = iVar6 >> (bVar10 & 0x1f);
            if (piVar2[(uVar9 & (longlong)(1 << (bVar10 & 0x1f)) - 1U) + lVar16 * 8 + 0x50] < 0) {
              puVar8[lVar14 + iStackX_10] = 0;
            }
            else {
              iVar7 = FUN_18082e7c0(lVar3 + (longlong)
                                            piVar2[(uVar9 & (longlong)(1 << (bVar10 & 0x1f)) - 1U) +
                                                   lVar16 * 8 + 0x50] * 0x48,lVar1);
              puVar8[lVar14 + iStackX_10] = iVar7;
              if (iVar7 == -1) goto LAB_18083c297;
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 < iVar4);
        }
        iStackX_10 = iStackX_10 + iVar4;
        iStackX_20 = iStackX_20 + 1;
        piVar15 = piVar15 + 1;
      } while (iStackX_20 < *piVar2);
    }
    iVar4 = 2;
    if (2 < *(int *)(param_3 + 0x400)) {
      piVar15 = (int *)(param_3 + 0x304);
      do {
        uVar17 = (puVar8[piVar15[-0x3f]] & 0x7fff) - (puVar8[*piVar15] & 0x7fff);
        iVar7 = (int)(((uVar17 ^ (int)uVar17 >> 0x1f) - ((int)uVar17 >> 0x1f)) *
                     (*(int *)((longlong)piVar2 + (0x48 - param_3) + (longlong)piVar15) -
                     piVar2[(longlong)*piVar15 + 0xd1])) /
                (piVar2[(longlong)piVar15[-0x3f] + 0xd1] - piVar2[(longlong)*piVar15 + 0xd1]);
        uVar11 = *(uint *)((longlong)piVar15 + (longlong)puVar8 + (-0x2fc - param_3));
        iVar6 = -iVar7;
        if (-1 < (int)uVar17) {
          iVar6 = iVar7;
        }
        uVar17 = (puVar8[*piVar15] & 0x7fff) + iVar6;
        if (uVar11 == 0) {
          *(uint *)((longlong)piVar15 + (longlong)puVar8 + (-0x2fc - param_3)) = uVar17 | 0x8000;
        }
        else {
          uVar13 = *(int *)(param_3 + 0x408) - uVar17;
          uVar12 = uVar17;
          if ((int)uVar13 < (int)uVar17) {
            uVar12 = uVar13;
          }
          if ((int)uVar11 < (int)(uVar12 * 2)) {
            if ((uVar11 & 1) == 0) {
              iVar6 = (int)uVar11 >> 1;
            }
            else {
              iVar6 = -((int)(uVar11 + 1) >> 1);
            }
          }
          else if ((int)uVar17 < (int)uVar13) {
            iVar6 = uVar11 - uVar17;
          }
          else {
            iVar6 = (uVar13 - uVar11) + -1;
          }
          *(uint *)((longlong)piVar15 + (longlong)puVar8 + (-0x2fc - param_3)) = iVar6 + uVar17;
          puVar8[*piVar15] = puVar8[*piVar15] & 0x7fff;
          puVar8[piVar15[-0x3f]] = puVar8[piVar15[-0x3f]] & 0x7fff;
        }
        iVar4 = iVar4 + 1;
        piVar15 = piVar15 + 1;
      } while (iVar4 < *(int *)(param_3 + 0x400));
    }
  }
  else {
LAB_18083c297:
    puVar8 = (int32_t *)0x0;
  }
  return puVar8;
}



uint64_t FUN_18083c2c0(longlong param_1,longlong param_2,int *param_3,longlong param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  longlong lVar14;
  
  iVar2 = *(int *)(*(longlong *)(**(longlong **)(param_1 + 0x50) + 0x20) +
                  (longlong)*(int *)(param_1 + 0x2c) * 4) / 2;
  lVar14 = (longlong)iVar2;
  if (param_3 == (int *)0x0) {
                    // WARNING: Subroutine does not return
    memset(param_4,0,lVar14 * 4);
  }
  iVar10 = 1;
  iVar11 = 0;
  lVar8 = *(longlong *)(param_2 + 0x410);
  iVar12 = *(int *)(lVar8 + 0x340) * *param_3;
  if (1 < *(int *)(param_2 + 0x400)) {
    piVar13 = (int *)(param_2 + 4);
    iVar7 = iVar11;
    do {
      lVar5 = (longlong)*piVar13;
      if ((param_3[lVar5] & 0x7fffU) == param_3[lVar5]) {
        iVar11 = *(int *)(lVar8 + 0x344 + lVar5 * 4);
        iVar9 = (param_3[lVar5] & 0x7fffU) * *(int *)(lVar8 + 0x340);
        FUN_18083c500(iVar2,iVar7,iVar11,iVar12,iVar9,param_4);
        iVar12 = iVar9;
        iVar7 = iVar11;
      }
      iVar10 = iVar10 + 1;
      piVar13 = piVar13 + 1;
    } while (iVar10 < *(int *)(param_2 + 0x400));
  }
  if ((iVar11 < iVar2) && (0xf < (uint)(iVar2 - iVar11))) {
    lVar8 = (longlong)iVar11;
    fVar1 = *(float *)(&UNK_180981620 + (longlong)iVar12 * 4);
    uVar4 = iVar2 - iVar11 & 0x8000000f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
    }
    pfVar3 = (float *)(param_4 + 0x20 + lVar8 * 4);
    do {
      iVar11 = iVar11 + 0x10;
      lVar8 = lVar8 + 0x10;
      pfVar3[-8] = pfVar3[-8] * fVar1;
      pfVar3[-7] = pfVar3[-7] * fVar1;
      pfVar3[-6] = pfVar3[-6] * fVar1;
      pfVar3[-5] = pfVar3[-5] * fVar1;
      pfVar3[-4] = fVar1 * pfVar3[-4];
      pfVar3[-3] = fVar1 * pfVar3[-3];
      pfVar3[-2] = fVar1 * pfVar3[-2];
      pfVar3[-1] = fVar1 * pfVar3[-1];
      *pfVar3 = *pfVar3 * fVar1;
      pfVar3[1] = pfVar3[1] * fVar1;
      pfVar3[2] = pfVar3[2] * fVar1;
      pfVar3[3] = pfVar3[3] * fVar1;
      pfVar3[4] = pfVar3[4] * fVar1;
      pfVar3[5] = pfVar3[5] * fVar1;
      pfVar3[6] = pfVar3[6] * fVar1;
      pfVar3[7] = pfVar3[7] * fVar1;
      pfVar3 = pfVar3 + 0x10;
    } while (lVar8 < (int)(iVar2 - uVar4));
  }
  lVar8 = (longlong)iVar11;
  if (lVar8 < lVar14) {
    if (3 < lVar14 - lVar8) {
      fVar1 = *(float *)(&UNK_180981620 + (longlong)iVar12 * 4);
      lVar6 = ((lVar14 - lVar8) - 4U >> 2) + 1;
      lVar5 = lVar8 * 4;
      lVar8 = lVar8 + lVar6 * 4;
      pfVar3 = (float *)(param_4 + 8 + lVar5);
      do {
        pfVar3[-2] = pfVar3[-2] * fVar1;
        pfVar3[-1] = pfVar3[-1] * fVar1;
        *pfVar3 = *pfVar3 * fVar1;
        pfVar3[1] = pfVar3[1] * fVar1;
        lVar6 = lVar6 + -1;
        pfVar3 = pfVar3 + 4;
      } while (lVar6 != 0);
    }
    if (lVar8 < lVar14) {
      fVar1 = *(float *)(&UNK_180981620 + (longlong)iVar12 * 4);
      do {
        *(float *)(param_4 + lVar8 * 4) = fVar1 * *(float *)(param_4 + lVar8 * 4);
        lVar8 = lVar8 + 1;
      } while (lVar8 < lVar14);
    }
  }
  return 1;
}



uint64_t FUN_18083c2f7(uint64_t param_1,uint64_t param_2,int *param_3)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong unaff_RSI;
  int iVar10;
  int iVar11;
  longlong unaff_R13;
  int *piVar12;
  int iVar13;
  ulonglong unaff_R15;
  int *in_stack_00000070;
  
  iVar9 = 1;
  iVar10 = 0;
  lVar7 = *(longlong *)(unaff_R13 + 0x410);
  iVar11 = *(int *)(lVar7 + 0x340) * *param_3;
  iVar13 = (int)unaff_R15;
  if (1 < *(int *)(unaff_R13 + 0x400)) {
    piVar12 = (int *)(unaff_R13 + 4);
    iVar6 = iVar10;
    do {
      lVar4 = (longlong)*piVar12;
      if ((param_3[lVar4] & 0x7fffU) == param_3[lVar4]) {
        iVar10 = *(int *)(lVar7 + 0x344 + lVar4 * 4);
        iVar8 = (param_3[lVar4] & 0x7fffU) * *(int *)(lVar7 + 0x340);
        FUN_18083c500(unaff_R15 & 0xffffffff,iVar6,iVar10,iVar11,iVar8);
        param_3 = in_stack_00000070;
        iVar11 = iVar8;
        iVar6 = iVar10;
      }
      iVar9 = iVar9 + 1;
      piVar12 = piVar12 + 1;
    } while (iVar9 < *(int *)(unaff_R13 + 0x400));
  }
  if ((iVar10 < iVar13) && (0xf < (uint)(iVar13 - iVar10))) {
    lVar7 = (longlong)iVar10;
    fVar1 = *(float *)(&UNK_180981620 + (longlong)iVar11 * 4);
    uVar3 = iVar13 - iVar10 & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    pfVar2 = (float *)(unaff_RSI + 0x20 + lVar7 * 4);
    do {
      iVar10 = iVar10 + 0x10;
      lVar7 = lVar7 + 0x10;
      pfVar2[-8] = pfVar2[-8] * fVar1;
      pfVar2[-7] = pfVar2[-7] * fVar1;
      pfVar2[-6] = pfVar2[-6] * fVar1;
      pfVar2[-5] = pfVar2[-5] * fVar1;
      pfVar2[-4] = fVar1 * pfVar2[-4];
      pfVar2[-3] = fVar1 * pfVar2[-3];
      pfVar2[-2] = fVar1 * pfVar2[-2];
      pfVar2[-1] = fVar1 * pfVar2[-1];
      *pfVar2 = *pfVar2 * fVar1;
      pfVar2[1] = pfVar2[1] * fVar1;
      pfVar2[2] = pfVar2[2] * fVar1;
      pfVar2[3] = pfVar2[3] * fVar1;
      pfVar2[4] = pfVar2[4] * fVar1;
      pfVar2[5] = pfVar2[5] * fVar1;
      pfVar2[6] = pfVar2[6] * fVar1;
      pfVar2[7] = pfVar2[7] * fVar1;
      pfVar2 = pfVar2 + 0x10;
    } while (lVar7 < (int)(iVar13 - uVar3));
  }
  lVar7 = (longlong)iVar10;
  if (lVar7 < (longlong)unaff_R15) {
    if (3 < (longlong)(unaff_R15 - lVar7)) {
      fVar1 = *(float *)(&UNK_180981620 + (longlong)iVar11 * 4);
      lVar5 = ((unaff_R15 - lVar7) - 4 >> 2) + 1;
      lVar4 = lVar7 * 4;
      lVar7 = lVar7 + lVar5 * 4;
      pfVar2 = (float *)(unaff_RSI + 8 + lVar4);
      do {
        pfVar2[-2] = pfVar2[-2] * fVar1;
        pfVar2[-1] = pfVar2[-1] * fVar1;
        *pfVar2 = *pfVar2 * fVar1;
        pfVar2[1] = pfVar2[1] * fVar1;
        lVar5 = lVar5 + -1;
        pfVar2 = pfVar2 + 4;
      } while (lVar5 != 0);
    }
    if (lVar7 < (longlong)unaff_R15) {
      fVar1 = *(float *)(&UNK_180981620 + (longlong)iVar11 * 4);
      do {
        *(float *)(unaff_RSI + lVar7 * 4) = fVar1 * *(float *)(unaff_RSI + lVar7 * 4);
        lVar7 = lVar7 + 1;
      } while (lVar7 < (longlong)unaff_R15);
    }
  }
  return 1;
}



uint64_t FUN_18083c32b(uint64_t param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  float fVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int unaff_EBP;
  longlong unaff_RSI;
  uint unaff_EDI;
  int iVar7;
  longlong unaff_R12;
  longlong unaff_R13;
  int *piVar8;
  int iVar9;
  ulonglong unaff_R15;
  longlong in_stack_00000070;
  
  piVar8 = (int *)(unaff_R13 + 4);
  do {
    lVar4 = (longlong)*piVar8;
    uVar6 = *(uint *)(param_3 + lVar4 * 4) & 0x7fff;
    iVar9 = (int)unaff_R15;
    if (uVar6 == *(uint *)(param_3 + lVar4 * 4)) {
      unaff_EDI = *(uint *)(unaff_R12 + 0x344 + lVar4 * 4);
      uVar6 = uVar6 * *(int *)(unaff_R12 + 0x340);
      FUN_18083c500(unaff_R15 & 0xffffffff,param_2,unaff_EDI,param_4,uVar6);
      param_2 = (ulonglong)unaff_EDI;
      param_4 = (ulonglong)uVar6;
      param_3 = in_stack_00000070;
    }
    unaff_EBP = unaff_EBP + 1;
    piVar8 = piVar8 + 1;
  } while (unaff_EBP < *(int *)(unaff_R13 + 0x400));
  iVar7 = (int)param_4;
  if (((int)unaff_EDI < iVar9) && (0xf < iVar9 - unaff_EDI)) {
    lVar4 = (longlong)(int)unaff_EDI;
    fVar2 = *(float *)(&UNK_180981620 + (longlong)iVar7 * 4);
    uVar6 = iVar9 - unaff_EDI & 0x8000000f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
    }
    pfVar3 = (float *)(unaff_RSI + 0x20 + lVar4 * 4);
    do {
      unaff_EDI = unaff_EDI + 0x10;
      lVar4 = lVar4 + 0x10;
      pfVar3[-8] = pfVar3[-8] * fVar2;
      pfVar3[-7] = pfVar3[-7] * fVar2;
      pfVar3[-6] = pfVar3[-6] * fVar2;
      pfVar3[-5] = pfVar3[-5] * fVar2;
      pfVar3[-4] = fVar2 * pfVar3[-4];
      pfVar3[-3] = fVar2 * pfVar3[-3];
      pfVar3[-2] = fVar2 * pfVar3[-2];
      pfVar3[-1] = fVar2 * pfVar3[-1];
      *pfVar3 = *pfVar3 * fVar2;
      pfVar3[1] = pfVar3[1] * fVar2;
      pfVar3[2] = pfVar3[2] * fVar2;
      pfVar3[3] = pfVar3[3] * fVar2;
      pfVar3[4] = pfVar3[4] * fVar2;
      pfVar3[5] = pfVar3[5] * fVar2;
      pfVar3[6] = pfVar3[6] * fVar2;
      pfVar3[7] = pfVar3[7] * fVar2;
      pfVar3 = pfVar3 + 0x10;
    } while (lVar4 < (int)(iVar9 - uVar6));
  }
  lVar4 = (longlong)(int)unaff_EDI;
  if (lVar4 < (longlong)unaff_R15) {
    if (3 < (longlong)(unaff_R15 - lVar4)) {
      fVar2 = *(float *)(&UNK_180981620 + (longlong)iVar7 * 4);
      lVar5 = ((unaff_R15 - lVar4) - 4 >> 2) + 1;
      lVar1 = lVar4 * 4;
      lVar4 = lVar4 + lVar5 * 4;
      pfVar3 = (float *)(unaff_RSI + 8 + lVar1);
      do {
        pfVar3[-2] = pfVar3[-2] * fVar2;
        pfVar3[-1] = pfVar3[-1] * fVar2;
        *pfVar3 = *pfVar3 * fVar2;
        pfVar3[1] = pfVar3[1] * fVar2;
        lVar5 = lVar5 + -1;
        pfVar3 = pfVar3 + 4;
      } while (lVar5 != 0);
    }
    if (lVar4 < (longlong)unaff_R15) {
      fVar2 = *(float *)(&UNK_180981620 + (longlong)iVar7 * 4);
      do {
        *(float *)(unaff_RSI + lVar4 * 4) = fVar2 * *(float *)(unaff_RSI + lVar4 * 4);
        lVar4 = lVar4 + 1;
      } while (lVar4 < (longlong)unaff_R15);
    }
  }
  return 1;
}



uint64_t FUN_18083c39b(void)

{
  longlong lVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RSI;
  int unaff_EDI;
  int in_R9D;
  int iVar7;
  longlong unaff_R15;
  
  iVar7 = (int)unaff_R15;
  if ((unaff_EDI < iVar7) && (0xf < (uint)(iVar7 - unaff_EDI))) {
    lVar6 = (longlong)unaff_EDI;
    fVar2 = *(float *)(&UNK_180981620 + (longlong)in_R9D * 4);
    uVar4 = iVar7 - unaff_EDI & 0x8000000f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
    }
    pfVar3 = (float *)(unaff_RSI + 0x20 + lVar6 * 4);
    do {
      unaff_EDI = unaff_EDI + 0x10;
      lVar6 = lVar6 + 0x10;
      pfVar3[-8] = pfVar3[-8] * fVar2;
      pfVar3[-7] = pfVar3[-7] * fVar2;
      pfVar3[-6] = pfVar3[-6] * fVar2;
      pfVar3[-5] = pfVar3[-5] * fVar2;
      pfVar3[-4] = fVar2 * pfVar3[-4];
      pfVar3[-3] = fVar2 * pfVar3[-3];
      pfVar3[-2] = fVar2 * pfVar3[-2];
      pfVar3[-1] = fVar2 * pfVar3[-1];
      *pfVar3 = *pfVar3 * fVar2;
      pfVar3[1] = pfVar3[1] * fVar2;
      pfVar3[2] = pfVar3[2] * fVar2;
      pfVar3[3] = pfVar3[3] * fVar2;
      pfVar3[4] = pfVar3[4] * fVar2;
      pfVar3[5] = pfVar3[5] * fVar2;
      pfVar3[6] = pfVar3[6] * fVar2;
      pfVar3[7] = pfVar3[7] * fVar2;
      pfVar3 = pfVar3 + 0x10;
    } while (lVar6 < (int)(iVar7 - uVar4));
  }
  lVar6 = (longlong)unaff_EDI;
  if (lVar6 < unaff_R15) {
    if (3 < unaff_R15 - lVar6) {
      fVar2 = *(float *)(&UNK_180981620 + (longlong)in_R9D * 4);
      lVar5 = ((unaff_R15 - lVar6) - 4U >> 2) + 1;
      lVar1 = lVar6 * 4;
      lVar6 = lVar6 + lVar5 * 4;
      pfVar3 = (float *)(unaff_RSI + 8 + lVar1);
      do {
        pfVar3[-2] = pfVar3[-2] * fVar2;
        pfVar3[-1] = pfVar3[-1] * fVar2;
        *pfVar3 = *pfVar3 * fVar2;
        pfVar3[1] = pfVar3[1] * fVar2;
        lVar5 = lVar5 + -1;
        pfVar3 = pfVar3 + 4;
      } while (lVar5 != 0);
    }
    if (lVar6 < unaff_R15) {
      fVar2 = *(float *)(&UNK_180981620 + (longlong)in_R9D * 4);
      do {
        *(float *)(unaff_RSI + lVar6 * 4) = fVar2 * *(float *)(unaff_RSI + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while (lVar6 < unaff_R15);
    }
  }
  return 1;
}



uint64_t FUN_18083c3b6(uint param_1,uint64_t param_2,uint64_t param_3,int param_4)

{
  longlong lVar1;
  float fVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RSI;
  int unaff_EDI;
  longlong in_R10;
  longlong unaff_R15;
  
  if (0xf < param_1) {
    lVar5 = (longlong)unaff_EDI;
    fVar2 = *(float *)(in_R10 + (longlong)param_4 * 4);
    param_1 = param_1 & 0x8000000f;
    if ((int)param_1 < 0) {
      param_1 = (param_1 - 1 | 0xfffffff0) + 1;
    }
    pfVar3 = (float *)(unaff_RSI + 0x20 + lVar5 * 4);
    do {
      unaff_EDI = unaff_EDI + 0x10;
      lVar5 = lVar5 + 0x10;
      pfVar3[-8] = pfVar3[-8] * fVar2;
      pfVar3[-7] = pfVar3[-7] * fVar2;
      pfVar3[-6] = pfVar3[-6] * fVar2;
      pfVar3[-5] = pfVar3[-5] * fVar2;
      pfVar3[-4] = fVar2 * pfVar3[-4];
      pfVar3[-3] = fVar2 * pfVar3[-3];
      pfVar3[-2] = fVar2 * pfVar3[-2];
      pfVar3[-1] = fVar2 * pfVar3[-1];
      *pfVar3 = *pfVar3 * fVar2;
      pfVar3[1] = pfVar3[1] * fVar2;
      pfVar3[2] = pfVar3[2] * fVar2;
      pfVar3[3] = pfVar3[3] * fVar2;
      pfVar3[4] = pfVar3[4] * fVar2;
      pfVar3[5] = pfVar3[5] * fVar2;
      pfVar3[6] = pfVar3[6] * fVar2;
      pfVar3[7] = pfVar3[7] * fVar2;
      pfVar3 = pfVar3 + 0x10;
    } while (lVar5 < (int)((int)unaff_R15 - param_1));
  }
  lVar5 = (longlong)unaff_EDI;
  if (lVar5 < unaff_R15) {
    if (3 < unaff_R15 - lVar5) {
      fVar2 = *(float *)(in_R10 + (longlong)param_4 * 4);
      lVar4 = ((unaff_R15 - lVar5) - 4U >> 2) + 1;
      lVar1 = lVar5 * 4;
      lVar5 = lVar5 + lVar4 * 4;
      pfVar3 = (float *)(unaff_RSI + 8 + lVar1);
      do {
        pfVar3[-2] = pfVar3[-2] * fVar2;
        pfVar3[-1] = pfVar3[-1] * fVar2;
        *pfVar3 = *pfVar3 * fVar2;
        pfVar3[1] = pfVar3[1] * fVar2;
        lVar4 = lVar4 + -1;
        pfVar3 = pfVar3 + 4;
      } while (lVar4 != 0);
    }
    if (lVar5 < unaff_R15) {
      fVar2 = *(float *)(in_R10 + (longlong)param_4 * 4);
      do {
        *(float *)(unaff_RSI + lVar5 * 4) = fVar2 * *(float *)(unaff_RSI + lVar5 * 4);
        lVar5 = lVar5 + 1;
      } while (lVar5 < unaff_R15);
    }
  }
  return 1;
}



uint64_t FUN_18083c43c(uint64_t param_1,longlong param_2,uint64_t param_3,int param_4)

{
  longlong lVar1;
  float fVar2;
  float *pfVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong in_R10;
  longlong unaff_R15;
  
  if (3 < unaff_R15 - param_2) {
    fVar2 = *(float *)(in_R10 + (longlong)param_4 * 4);
    lVar4 = ((unaff_R15 - param_2) - 4U >> 2) + 1;
    lVar1 = param_2 * 4;
    param_2 = param_2 + lVar4 * 4;
    pfVar3 = (float *)(unaff_RSI + 8 + lVar1);
    do {
      pfVar3[-2] = pfVar3[-2] * fVar2;
      pfVar3[-1] = pfVar3[-1] * fVar2;
      *pfVar3 = *pfVar3 * fVar2;
      pfVar3[1] = pfVar3[1] * fVar2;
      lVar4 = lVar4 + -1;
      pfVar3 = pfVar3 + 4;
    } while (lVar4 != 0);
  }
  if (param_2 < unaff_R15) {
    fVar2 = *(float *)(in_R10 + (longlong)param_4 * 4);
    do {
      *(float *)(unaff_RSI + param_2 * 4) = fVar2 * *(float *)(unaff_RSI + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_2 < unaff_R15);
  }
  return 1;
}





// 函数: void FUN_18083c500(int param_1,int param_2,int param_3,uint param_4,int param_5,longlong param_6)
void FUN_18083c500(int param_1,int param_2,int param_3,uint param_4,int param_5,longlong param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  float *pfVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  
  uVar11 = (ulonglong)(int)param_4;
  uVar17 = param_5 - param_4;
  uVar7 = (int)uVar17 >> 0x1f;
  iVar9 = param_3 - param_2;
  iVar1 = (int)uVar17 / iVar9;
  lVar14 = (longlong)iVar1;
  iVar15 = 0;
  uVar2 = uVar17 - (int)uVar17 % iVar9;
  iVar13 = (uVar7 & 0xfffffffe) + 1 + iVar1;
  uVar8 = (int)uVar2 >> 0x1f;
  iVar23 = ((uVar17 ^ uVar7) - uVar7) - ((uVar2 ^ uVar8) - uVar8);
  if (param_1 <= param_3) {
    param_3 = param_1;
  }
  if (param_2 < param_3) {
    *(float *)(param_6 + (longlong)param_2 * 4) =
         *(float *)(&UNK_180981620 + uVar11 * 4) * *(float *)(param_6 + (longlong)param_2 * 4);
  }
  lVar19 = (longlong)param_3;
  lVar18 = (longlong)(param_2 + 1);
  if (lVar18 < lVar19) {
    if (3 < lVar19 - lVar18) {
      lVar21 = (longlong)iVar13;
      pfVar16 = (float *)(param_6 + (lVar18 + 2) * 4);
      lVar20 = ((lVar19 - lVar18) - 4U >> 2) + 1;
      lVar18 = lVar18 + lVar20 * 4;
      uVar12 = uVar11;
      do {
        iVar15 = iVar15 + iVar23;
        lVar4 = lVar21;
        if (iVar15 < iVar9) {
          lVar4 = lVar14;
        }
        iVar22 = iVar13;
        if (iVar15 < iVar9) {
          iVar22 = iVar1;
        }
        iVar3 = iVar15 - iVar9;
        if (iVar15 < iVar9) {
          iVar3 = iVar15;
        }
        iVar3 = iVar3 + iVar23;
        pfVar16[-2] = *(float *)(&UNK_180981620 + (lVar4 + uVar11) * 4) * pfVar16[-2];
        lVar6 = lVar14;
        iVar10 = iVar1;
        if (iVar9 <= iVar3) {
          iVar3 = iVar3 - iVar9;
          lVar6 = lVar21;
          iVar10 = iVar13;
        }
        lVar6 = lVar6 + lVar4 + uVar11;
        iVar3 = iVar3 + iVar23;
        lVar4 = lVar21;
        if (iVar3 < iVar9) {
          lVar4 = lVar14;
        }
        lVar4 = lVar4 + lVar6;
        iVar5 = iVar13;
        if (iVar3 < iVar9) {
          iVar5 = iVar1;
        }
        pfVar16[-1] = *(float *)(&UNK_180981620 + lVar6 * 4) * pfVar16[-1];
        iVar15 = iVar3 - iVar9;
        if (iVar3 < iVar9) {
          iVar15 = iVar3;
        }
        iVar15 = iVar15 + iVar23;
        *pfVar16 = *(float *)(&UNK_180981620 + lVar4 * 4) * *pfVar16;
        iVar3 = iVar1;
        if (iVar9 <= iVar15) {
          iVar15 = iVar15 - iVar9;
          iVar3 = iVar13;
        }
        param_4 = iVar3 + iVar5 + iVar10 + iVar22 + (int)uVar12;
        uVar12 = (ulonglong)param_4;
        uVar11 = iVar3 + lVar4;
        pfVar16[1] = *(float *)(&UNK_180981620 + uVar11 * 4) * pfVar16[1];
        pfVar16 = pfVar16 + 4;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    if (lVar18 < lVar19) {
      lVar14 = (longlong)(int)param_4;
      do {
        iVar22 = iVar15 + iVar23;
        iVar15 = iVar13;
        if (iVar22 < iVar9) {
          iVar15 = iVar1;
        }
        lVar14 = lVar14 + iVar15;
        *(float *)(param_6 + lVar18 * 4) =
             *(float *)(&UNK_180981620 + lVar14 * 4) * *(float *)(param_6 + lVar18 * 4);
        lVar18 = lVar18 + 1;
        iVar15 = iVar22 - iVar9;
        if (iVar22 < iVar9) {
          iVar15 = iVar22;
        }
      } while (lVar18 < lVar19);
    }
  }
  return;
}





// 函数: void FUN_18083c5c3(longlong param_1,longlong param_2,int param_3)
void FUN_18083c5c3(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int unaff_EBX;
  int unaff_EBP;
  int iVar4;
  int unaff_ESI;
  int iVar5;
  longlong unaff_RDI;
  longlong lVar6;
  float *pfVar7;
  longlong in_R10;
  longlong lVar8;
  longlong in_R11;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int unaff_R15D;
  longlong lStackX_10;
  longlong in_stack_00000078;
  
  lVar10 = (longlong)unaff_ESI;
  pfVar7 = (float *)(param_1 + (in_R10 + 2) * 4);
  lVar9 = (in_R11 - 4U >> 2) + 1;
  lVar8 = in_R10 + lVar9 * 4;
  do {
    param_3 = param_3 + unaff_R15D;
    lVar6 = lVar10;
    if (param_3 < unaff_EBX) {
      lVar6 = unaff_RDI;
    }
    iVar5 = (int)unaff_RDI;
    iVar11 = unaff_ESI;
    if (param_3 < unaff_EBX) {
      iVar11 = iVar5;
    }
    iVar1 = param_3 - unaff_EBX;
    if (param_3 < unaff_EBX) {
      iVar1 = param_3;
    }
    iVar1 = iVar1 + unaff_R15D;
    pfVar7[-2] = *(float *)(&UNK_180981620 + (lVar6 + param_2) * 4) * pfVar7[-2];
    lVar3 = unaff_RDI;
    iVar4 = iVar5;
    if (unaff_EBX <= iVar1) {
      iVar1 = iVar1 - unaff_EBX;
      lVar3 = lVar10;
      iVar4 = unaff_ESI;
    }
    lVar3 = lVar3 + lVar6 + param_2;
    iVar1 = iVar1 + unaff_R15D;
    param_2 = lVar10;
    if (iVar1 < unaff_EBX) {
      param_2 = unaff_RDI;
    }
    param_2 = param_2 + lVar3;
    iVar2 = unaff_ESI;
    if (iVar1 < unaff_EBX) {
      iVar2 = iVar5;
    }
    pfVar7[-1] = *(float *)(&UNK_180981620 + lVar3 * 4) * pfVar7[-1];
    param_3 = iVar1 - unaff_EBX;
    if (iVar1 < unaff_EBX) {
      param_3 = iVar1;
    }
    param_3 = param_3 + unaff_R15D;
    *pfVar7 = *(float *)(&UNK_180981620 + param_2 * 4) * *pfVar7;
    iVar1 = iVar5;
    if (unaff_EBX <= param_3) {
      param_3 = param_3 - unaff_EBX;
      iVar1 = unaff_ESI;
    }
    unaff_EBP = iVar1 + iVar2 + iVar4 + iVar11 + unaff_EBP;
    param_2 = iVar1 + param_2;
    pfVar7[1] = *(float *)(&UNK_180981620 + param_2 * 4) * pfVar7[1];
    pfVar7 = pfVar7 + 4;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  if (lVar8 < lStackX_10) {
    lVar9 = (longlong)unaff_EBP;
    do {
      iVar11 = param_3 + unaff_R15D;
      iVar1 = unaff_ESI;
      if (iVar11 < unaff_EBX) {
        iVar1 = iVar5;
      }
      lVar9 = lVar9 + iVar1;
      *(float *)(in_stack_00000078 + lVar8 * 4) =
           *(float *)(&UNK_180981620 + lVar9 * 4) * *(float *)(in_stack_00000078 + lVar8 * 4);
      lVar8 = lVar8 + 1;
      param_3 = iVar11 - unaff_EBX;
      if (iVar11 < unaff_EBX) {
        param_3 = iVar11;
      }
    } while (lVar8 < lStackX_10);
  }
  return;
}





// 函数: void FUN_18083c6e2(uint64_t param_1,uint64_t param_2,int param_3)
void FUN_18083c6e2(uint64_t param_1,uint64_t param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  longlong lVar3;
  longlong in_R10;
  longlong in_R11;
  longlong unaff_R12;
  int unaff_R15D;
  longlong in_stack_00000078;
  
  if (in_R10 < in_R11) {
    lVar3 = (longlong)unaff_EBP;
    do {
      iVar2 = param_3 + unaff_R15D;
      iVar1 = unaff_ESI;
      if (iVar2 < unaff_EBX) {
        iVar1 = unaff_EDI;
      }
      lVar3 = lVar3 + iVar1;
      *(float *)(in_stack_00000078 + in_R10 * 4) =
           *(float *)(unaff_R12 + lVar3 * 4) * *(float *)(in_stack_00000078 + in_R10 * 4);
      in_R10 = in_R10 + 1;
      param_3 = iVar2 - unaff_EBX;
      if (iVar2 < unaff_EBX) {
        param_3 = iVar2;
      }
    } while (in_R10 < in_R11);
  }
  return;
}





// 函数: void FUN_18083c740(uint64_t param_1,longlong param_2)
void FUN_18083c740(uint64_t param_1,longlong param_2)

{
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    memset(param_2,0,0x714);
  }
  return;
}





// 函数: void FUN_18083c780(uint64_t param_1,longlong param_2)
void FUN_18083c780(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    lVar1 = 0;
    do {
      if (*(longlong *)(lVar1 + *(longlong *)(param_2 + 0x20)) != 0) {
                    // WARNING: Subroutine does not return
        FUN_1807c41d0(param_1);
      }
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (iVar2 < *(int *)(param_2 + 8));
  }
                    // WARNING: Subroutine does not return
  FUN_1807c41d0(param_1,*(uint64_t *)(param_2 + 0x20));
}





// 函数: void FUN_18083c794(uint64_t param_1,longlong param_2)
void FUN_18083c794(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    lVar1 = 0;
    do {
      if (*(longlong *)(lVar1 + *(longlong *)(param_2 + 0x20)) != 0) {
                    // WARNING: Subroutine does not return
        FUN_1807c41d0(param_1);
      }
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (iVar2 < *(int *)(param_2 + 8));
  }
                    // WARNING: Subroutine does not return
  FUN_1807c41d0(param_1,*(uint64_t *)(param_2 + 0x20));
}





// 函数: void FUN_18083c7ad(void)
void FUN_18083c7ad(void)

{
  longlong unaff_RBX;
  uint unaff_EBP;
  ulonglong uVar1;
  int unaff_EDI;
  
  uVar1 = (ulonglong)unaff_EBP;
  do {
    if (*(longlong *)(uVar1 + *(longlong *)(unaff_RBX + 0x20)) != 0) {
                    // WARNING: Subroutine does not return
      FUN_1807c41d0();
    }
    unaff_EDI = unaff_EDI + 1;
    uVar1 = uVar1 + 8;
  } while (unaff_EDI < *(int *)(unaff_RBX + 8));
                    // WARNING: Subroutine does not return
  FUN_1807c41d0();
}





// 函数: void FUN_18083c7e5(void)
void FUN_18083c7e5(void)

{
                    // WARNING: Subroutine does not return
  FUN_1807c41d0();
}





