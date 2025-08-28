#include "TaleWorlds.Native.Split.h"

// 03_rendering_part622_sub002.c - 1 个函数

// 函数: void FUN_1806133ea(longlong param_1,uint param_2,uint64_t param_3,float param_4)
void FUN_1806133ea(longlong param_1,uint param_2,uint64_t param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  longlong unaff_RBP;
  int iVar13;
  longlong *plVar14;
  longlong in_R11;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar15;
  float fVar16;
  
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  piVar9 = *(int **)(unaff_RBP + 0x7f);
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  piVar10 = *(int **)(unaff_RBP + 0x77);
  *(uint64_t *)(unaff_RBP + -0x49) = param_3;
  *piVar9 = 0;
  *piVar10 = 0;
  *(uint64_t *)(unaff_RBP + 0x57) = param_3;
  *(uint64_t *)(unaff_RBP + -0x21) = 0;
  *(uint64_t *)(unaff_RBP + -0x41) = 0;
  FUN_1804ff330(param_1 + 0x98d230,unaff_RBP + -0x49,param_4,unaff_RBP + -0x41);
  plVar14 = *(longlong **)(unaff_RBP + -0x41);
  if (plVar14 == (longlong *)0x0) {
    return;
  }
  fVar1 = *(float *)(unaff_RBP + 0x5b);
  fVar2 = *(float *)(unaff_RBP + -0x19);
  fVar3 = *(float *)(unaff_RBP + -0x1d);
  fVar4 = *(float *)(unaff_RBP + -0x21);
  iVar6 = *(int *)(unaff_RBP + -0x31);
  iVar13 = *(int *)(unaff_RBP + -0x35);
  iVar12 = *(int *)(unaff_RBP + -0x39);
  iVar7 = *(int *)(unaff_RBP + -0x25);
  iVar8 = *(int *)(unaff_RBP + -0x29);
  fVar5 = *(float *)(unaff_RBP + 0x57);
LAB_1806134a0:
  lVar11 = *plVar14;
  if ((((-1 < *(int *)(lVar11 + 0x980)) && ((*(uint *)(lVar11 + 0x56c) & 0x800) != 0)) &&
      (*(int *)(lVar11 + 0x568) == 1)) &&
     (fVar15 = fVar5 - *(float *)(*(longlong *)(lVar11 + 0x20) + 0xc),
     fVar16 = fVar1 - *(float *)(*(longlong *)(lVar11 + 0x20) + 0x10),
     fVar15 * fVar15 + fVar16 * fVar16 <= param_4 * param_4)) {
    if (((&UNK_1809f89f0)[param_2 & 7] &
        *(byte *)((longlong)
                  ((*(int *)(param_1 + 0x87b770) >> 3) * *(int *)(lVar11 + 0x980) +
                  ((int)param_2 >> 3)) + *(longlong *)(param_1 + 0x87b768))) == 0) {
      *piVar10 = *piVar10 + 1;
    }
    else {
      *piVar9 = *piVar9 + 1;
    }
  }
  plVar14 = (longlong *)plVar14[3];
  while (plVar14 == (longlong *)0x0) {
    if (iVar12 == iVar8) {
      if (iVar13 == iVar7) break;
      iVar13 = iVar13 + 1;
      *(int *)(unaff_RBP + -0x35) = iVar13;
      iVar12 = iVar6;
    }
    else {
      iVar12 = iVar12 + 1;
    }
    *(int *)(unaff_RBP + -0x39) = iVar12;
    plVar14 = *(longlong **)
               ((longlong)
                ((int)((ulonglong)*(uint64_t *)(unaff_RBP + -0x39) >> 0x20) *
                 *(int *)(param_1 + 0x98d238) + iVar12) * 9 + *(longlong *)(param_1 + 0x98d248));
  }
  do {
    if ((plVar14 == (longlong *)0x0) ||
       (fVar15 = fVar4 - *(float *)(plVar14 + 1),
       fVar16 = fVar3 - *(float *)((longlong)plVar14 + 0xc),
       fVar15 * fVar15 + fVar16 * fVar16 <= fVar2)) break;
    plVar14 = (longlong *)plVar14[3];
    while (plVar14 == (longlong *)0x0) {
      if (iVar12 == iVar8) {
        if (iVar13 == iVar7) break;
        iVar13 = iVar13 + 1;
        *(int *)(unaff_RBP + -0x35) = iVar13;
        iVar12 = iVar6;
      }
      else {
        iVar12 = iVar12 + 1;
      }
      *(int *)(unaff_RBP + -0x39) = iVar12;
      plVar14 = *(longlong **)
                 ((longlong)
                  ((int)((ulonglong)*(uint64_t *)(unaff_RBP + -0x39) >> 0x20) *
                   *(int *)(param_1 + 0x98d238) + iVar12) * 9 + *(longlong *)(param_1 + 0x98d248));
    }
  } while( true );
  if (plVar14 == (longlong *)0x0) {
    return;
  }
  goto LAB_1806134a0;
}






