#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part206.c - 5 个函数

// 函数: void FUN_1807897f7(longlong param_1)
void FUN_1807897f7(longlong param_1)

{
  uint64_t uVar1;
  float *pfVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong unaff_RDI;
  int iVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  
  uVar1 = *(uint64_t *)(param_1 + 0x60);
  FUN_180768360(uVar1);
  iVar4 = *(int *)(unaff_RBX + 0x18);
  pfVar2 = *(float **)(unaff_RBX + 0x20);
  if (unaff_ESI == 1) {
    if (unaff_RBP == 0) {
      iVar3 = 0;
      if (0 < iVar4 / 2) {
        lVar5 = 0;
        pfVar6 = pfVar2;
        do {
          iVar3 = iVar3 + 1;
          *pfVar6 = *(float *)(unaff_RDI +
                              (longlong)(*(int *)(lVar5 + *(longlong *)(unaff_RBX + 0x38)) * 2) * 4)
          ;
          pfVar6[1] = *(float *)(unaff_RDI + 4 +
                                (longlong)(*(int *)(lVar5 + *(longlong *)(unaff_RBX + 0x38)) * 2) *
                                4);
          iVar4 = *(int *)(unaff_RBX + 0x18);
          lVar5 = lVar5 + 4;
          pfVar6 = pfVar6 + 2;
        } while (iVar3 < iVar4 / 2);
      }
      goto LAB_180789990;
    }
  }
  else if (unaff_RBP == 0) {
    iVar3 = 0;
    if (0 < iVar4 / 2) {
      lVar5 = 0;
      pfVar6 = pfVar2;
      do {
        iVar3 = iVar3 + 1;
        *pfVar6 = *(float *)(unaff_RDI +
                            (longlong)
                            (*(int *)(lVar5 + *(longlong *)(unaff_RBX + 0x38)) * unaff_ESI * 2) * 4)
        ;
        pfVar6[1] = *(float *)(unaff_RDI +
                              (longlong)
                              ((*(int *)(lVar5 + *(longlong *)(unaff_RBX + 0x38)) * 2 + 1) *
                              unaff_ESI) * 4);
        iVar4 = *(int *)(unaff_RBX + 0x18);
        lVar5 = lVar5 + 4;
        pfVar6 = pfVar6 + 2;
      } while (iVar3 < iVar4 / 2);
    }
    goto LAB_180789990;
  }
  iVar3 = 0;
  if (0 < iVar4 / 2) {
    lVar5 = 0;
    pfVar6 = pfVar2;
    do {
      iVar3 = iVar3 + 1;
      iVar4 = *(int *)(lVar5 + *(longlong *)(unaff_RBX + 0x38));
      *pfVar6 = *(float *)(unaff_RDI + (longlong)(iVar4 * unaff_ESI * 2) * 4) *
                *(float *)(unaff_RBP + (longlong)(iVar4 * 2) * 4);
      iVar4 = *(int *)(lVar5 + *(longlong *)(unaff_RBX + 0x38)) * 2;
      pfVar6[1] = *(float *)(unaff_RDI + (longlong)((iVar4 + 1) * unaff_ESI) * 4) *
                  *(float *)(unaff_RBP + 4 + (longlong)iVar4 * 4);
      iVar4 = *(int *)(unaff_RBX + 0x18);
      lVar5 = lVar5 + 4;
      pfVar6 = pfVar6 + 2;
    } while (iVar3 < iVar4 / 2);
  }
LAB_180789990:
  (*(code *)*_DAT_180c108d0)(pfVar2,*(longlong *)(unaff_RBX + 0x30) + (longlong)iVar4 * 4,iVar4 / 2)
  ;
  (*(code *)_DAT_180c108d0[2])(pfVar2);
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar1);
}





// 函数: void FUN_1807899de(void)
void FUN_1807899de(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_180789a00(longlong param_1,uint64_t param_2,int32_t *param_3,longlong param_4,int param_5)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int32_t *puVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0x43;
  }
  lVar4 = (longlong)param_5;
  if (param_5 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x68);
    FUN_180768360(uVar1);
    (**(code **)(_DAT_180c108d0 + 0x18))
              (param_2,*(uint64_t *)(param_1 + 0x28),*(uint64_t *)(param_1 + 0x30),
               *(int32_t *)(param_1 + 0x18));
    iVar3 = *(int *)(param_1 + 0x18);
    iVar5 = 0;
    lVar11 = *(longlong *)(param_1 + 0x28);
    iVar6 = 0;
    iVar2 = iVar3 / 2;
    if (0 < iVar2) {
      lVar9 = 0;
      do {
        iVar2 = iVar2 + iVar6;
        iVar6 = iVar6 + 1;
        *(uint64_t *)(lVar11 + (longlong)iVar2 * 8) =
             *(uint64_t *)(lVar11 + (longlong)*(int *)(lVar9 + *(longlong *)(param_1 + 0x38)) * 8)
        ;
        iVar3 = *(int *)(param_1 + 0x18);
        iVar2 = iVar3 / 2;
        lVar9 = lVar9 + 4;
      } while (iVar6 < iVar2);
      lVar11 = *(longlong *)(param_1 + 0x28);
    }
    (**(code **)(_DAT_180c108d0 + 8))
              (lVar11 + (longlong)iVar3 * 4,*(longlong *)(param_1 + 0x30) + (longlong)iVar3 * 4,
               iVar3 / 2);
    if ((param_5 == 1) && (param_4 == 0)) {
      iVar3 = *(int *)(param_1 + 0x18);
      if (0 < iVar3) {
        puVar7 = param_3 + 2;
        do {
          puVar7[-2] = *(int32_t *)
                        (*(longlong *)(param_1 + 0x28) + (longlong)(iVar3 + iVar5) * 4);
          puVar7[-1] = *(int32_t *)
                        (*(longlong *)(param_1 + 0x28) + 4 +
                        (longlong)(*(int *)(param_1 + 0x18) + iVar5) * 4);
          *puVar7 = *(int32_t *)
                     (*(longlong *)(param_1 + 0x28) + 8 +
                     (longlong)(*(int *)(param_1 + 0x18) + iVar5) * 4);
          iVar3 = *(int *)(param_1 + 0x18) + iVar5;
          iVar5 = iVar5 + 4;
          puVar7[1] = *(int32_t *)(*(longlong *)(param_1 + 0x28) + 0xc + (longlong)iVar3 * 4);
          iVar3 = *(int *)(param_1 + 0x18);
          puVar7 = puVar7 + 4;
        } while (iVar5 < iVar3);
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x18);
      if (param_4 == 0) {
        if (0 < iVar3) {
          do {
            *param_3 = *(int32_t *)
                        (*(longlong *)(param_1 + 0x28) + (longlong)(iVar3 + iVar5) * 4);
            param_3[lVar4] =
                 *(int32_t *)
                  (*(longlong *)(param_1 + 0x28) + 4 +
                  (longlong)(*(int *)(param_1 + 0x18) + iVar5) * 4);
            param_3[param_5 * 2] =
                 *(int32_t *)
                  (*(longlong *)(param_1 + 0x28) + 8 +
                  (longlong)(*(int *)(param_1 + 0x18) + iVar5) * 4);
            iVar3 = *(int *)(param_1 + 0x18) + iVar5;
            iVar5 = iVar5 + 4;
            param_3[param_5 * 3] =
                 *(int32_t *)(*(longlong *)(param_1 + 0x28) + 0xc + (longlong)iVar3 * 4);
            param_3 = param_3 + param_5 * 4;
            iVar3 = *(int *)(param_1 + 0x18);
          } while (iVar5 < iVar3);
        }
      }
      else if (0 < iVar3) {
        pfVar10 = (float *)(param_3 + lVar4 * 2);
        pfVar8 = (float *)(param_4 + 8);
        do {
          pfVar10[lVar4 * -2] =
               *(float *)(*(longlong *)(param_1 + 0x28) +
                         (longlong)(*(int *)(param_1 + 0x18) + iVar5) * 4) * pfVar8[-2];
          pfVar10[-lVar4] =
               *(float *)(*(longlong *)(param_1 + 0x28) + 4 +
                         (longlong)(*(int *)(param_1 + 0x18) + iVar5) * 4) * pfVar8[-1];
          *pfVar10 = *(float *)(*(longlong *)(param_1 + 0x28) + 8 +
                               (longlong)(*(int *)(param_1 + 0x18) + iVar5) * 4) * *pfVar8;
          iVar3 = *(int *)(param_1 + 0x18) + iVar5;
          iVar5 = iVar5 + 4;
          pfVar10[lVar4] =
               *(float *)(*(longlong *)(param_1 + 0x28) + 0xc + (longlong)iVar3 * 4) * pfVar8[1];
          pfVar10 = pfVar10 + param_5 * 4;
          pfVar8 = pfVar8 + 4;
        } while (iVar5 < *(int *)(param_1 + 0x18));
      }
    }
                    // WARNING: Subroutine does not return
    FUN_180768400(uVar1);
  }
  return 0x1f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180789a48(longlong param_1)
void FUN_180789a48(longlong param_1)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int iVar4;
  int iVar5;
  int32_t *puVar6;
  float *pfVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  int32_t *unaff_R14;
  uint64_t uVar11;
  
  uVar1 = *(uint64_t *)(param_1 + 0x68);
  uVar11 = FUN_180768360(uVar1);
  (**(code **)(_DAT_180c108d0 + 0x18))
            (uVar11,*(uint64_t *)(unaff_RBX + 0x28),*(uint64_t *)(unaff_RBX + 0x30),
             *(int32_t *)(unaff_RBX + 0x18));
  iVar3 = *(int *)(unaff_RBX + 0x18);
  iVar4 = 0;
  lVar10 = *(longlong *)(unaff_RBX + 0x28);
  iVar5 = 0;
  iVar2 = iVar3 / 2;
  if (0 < iVar2) {
    lVar8 = 0;
    do {
      iVar2 = iVar2 + iVar5;
      iVar5 = iVar5 + 1;
      *(uint64_t *)(lVar10 + (longlong)iVar2 * 8) =
           *(uint64_t *)(lVar10 + (longlong)*(int *)(lVar8 + *(longlong *)(unaff_RBX + 0x38)) * 8)
      ;
      iVar3 = *(int *)(unaff_RBX + 0x18);
      iVar2 = iVar3 / 2;
      lVar8 = lVar8 + 4;
    } while (iVar5 < iVar2);
    lVar10 = *(longlong *)(unaff_RBX + 0x28);
  }
  (**(code **)(_DAT_180c108d0 + 8))
            (lVar10 + (longlong)iVar3 * 4,*(longlong *)(unaff_RBX + 0x30) + (longlong)iVar3 * 4,
             iVar3 / 2);
  iVar3 = (int)unaff_RSI;
  if ((iVar3 == 1) && (unaff_RBP == 0)) {
    iVar3 = *(int *)(unaff_RBX + 0x18);
    if (0 < iVar3) {
      puVar6 = unaff_R14 + 2;
      do {
        puVar6[-2] = *(int32_t *)
                      (*(longlong *)(unaff_RBX + 0x28) + (longlong)(iVar3 + iVar4) * 4);
        puVar6[-1] = *(int32_t *)
                      (*(longlong *)(unaff_RBX + 0x28) + 4 +
                      (longlong)(*(int *)(unaff_RBX + 0x18) + iVar4) * 4);
        *puVar6 = *(int32_t *)
                   (*(longlong *)(unaff_RBX + 0x28) + 8 +
                   (longlong)(*(int *)(unaff_RBX + 0x18) + iVar4) * 4);
        iVar3 = *(int *)(unaff_RBX + 0x18) + iVar4;
        iVar4 = iVar4 + 4;
        puVar6[1] = *(int32_t *)(*(longlong *)(unaff_RBX + 0x28) + 0xc + (longlong)iVar3 * 4);
        iVar3 = *(int *)(unaff_RBX + 0x18);
        puVar6 = puVar6 + 4;
      } while (iVar4 < iVar3);
    }
  }
  else {
    iVar2 = *(int *)(unaff_RBX + 0x18);
    if (unaff_RBP == 0) {
      if (0 < iVar2) {
        do {
          *unaff_R14 = *(int32_t *)
                        (*(longlong *)(unaff_RBX + 0x28) + (longlong)(iVar2 + iVar4) * 4);
          unaff_R14[unaff_RSI] =
               *(int32_t *)
                (*(longlong *)(unaff_RBX + 0x28) + 4 +
                (longlong)(*(int *)(unaff_RBX + 0x18) + iVar4) * 4);
          unaff_R14[iVar3 * 2] =
               *(int32_t *)
                (*(longlong *)(unaff_RBX + 0x28) + 8 +
                (longlong)(*(int *)(unaff_RBX + 0x18) + iVar4) * 4);
          iVar2 = *(int *)(unaff_RBX + 0x18) + iVar4;
          iVar4 = iVar4 + 4;
          unaff_R14[iVar3 * 3] =
               *(int32_t *)(*(longlong *)(unaff_RBX + 0x28) + 0xc + (longlong)iVar2 * 4);
          unaff_R14 = unaff_R14 + iVar3 * 4;
          iVar2 = *(int *)(unaff_RBX + 0x18);
        } while (iVar4 < iVar2);
      }
    }
    else if (0 < iVar2) {
      pfVar9 = (float *)(unaff_R14 + unaff_RSI * 2);
      pfVar7 = (float *)(unaff_RBP + 8);
      do {
        pfVar9[unaff_RSI * -2] =
             *(float *)(*(longlong *)(unaff_RBX + 0x28) +
                       (longlong)(*(int *)(unaff_RBX + 0x18) + iVar4) * 4) * pfVar7[-2];
        pfVar9[-unaff_RSI] =
             *(float *)(*(longlong *)(unaff_RBX + 0x28) + 4 +
                       (longlong)(*(int *)(unaff_RBX + 0x18) + iVar4) * 4) * pfVar7[-1];
        *pfVar9 = *(float *)(*(longlong *)(unaff_RBX + 0x28) + 8 +
                            (longlong)(*(int *)(unaff_RBX + 0x18) + iVar4) * 4) * *pfVar7;
        iVar2 = *(int *)(unaff_RBX + 0x18) + iVar4;
        iVar4 = iVar4 + 4;
        pfVar9[unaff_RSI] =
             *(float *)(*(longlong *)(unaff_RBX + 0x28) + 0xc + (longlong)iVar2 * 4) * pfVar7[1];
        pfVar9 = pfVar9 + iVar3 * 4;
        pfVar7 = pfVar7 + 4;
      } while (iVar4 < *(int *)(unaff_RBX + 0x18));
    }
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar1);
}





// 函数: void FUN_180789cd9(void)
void FUN_180789cd9(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180789cf0(longlong *param_1)
void FUN_180789cf0(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[8] != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[8],&UNK_18095ad40,0x94,1);
  }
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[9],&UNK_18095ad40,0x95,1);
  }
  if (param_1[10] != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[10],&UNK_18095ad40,0x96,1);
  }
  if (param_1[0xb] != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[0xb],&UNK_18095ad40,0x97,1);
  }
  *(int32_t *)(param_1 + 3) = 0;
  *(longlong *)param_1[1] = *param_1;
  *(longlong *)(*param_1 + 8) = param_1[1];
  lVar1 = param_1[0xd];
  param_1[1] = (longlong)param_1;
  *param_1 = (longlong)param_1;
  if ((lVar1 != 0) && (lVar1 != param_1[0xc])) {
    FUN_180768380(lVar1,0);
    param_1[0xd] = 0;
  }
  if (param_1[0xc] != 0) {
    FUN_180768380(param_1[0xc],0);
    param_1[0xc] = 0;
  }
  param_1[4] = 0;
  param_1[5] = 0;
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1,&UNK_18095ad40,0xab,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180789e60(uint64_t *param_1)

{
  uint64_t *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint64_t *puVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lStackX_8;
  
  if (param_1[1] == 0) {
    uVar10 = *(uint *)(param_1 + 4);
  }
  else {
    uVar10 = *(uint *)((longlong)param_1 + 0x24);
  }
  iVar2 = *(int *)((longlong)param_1 + 0x1c);
  uVar5 = ~(iVar2 - 1U);
  uVar12 = iVar2 + 0xa7U & uVar5;
  uVar8 = iVar2 + 0x37U & uVar5;
  uVar13 = iVar2 + -1 + uVar10 * 0x18 & uVar5;
  uVar5 = iVar2 + -1 + uVar10 * 8 & uVar5;
  lVar4 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                        uVar12 * uVar10 + iVar2 + uVar5 + uVar13 + uVar8,&UNK_18095adb0,0x24,
                        0x200000);
  if (lVar4 != 0) {
    uVar9 = 0;
    uVar3 = *(int *)((longlong)param_1 + 0x1c) - 1;
    plVar7 = (longlong *)((ulonglong)uVar3 + lVar4 & ~(ulonglong)uVar3);
    plVar7[3] = lVar4;
    plVar7[5] = (longlong)plVar7 + (ulonglong)uVar8;
    *(uint *)(plVar7 + 4) = uVar10;
    plVar7[6] = (ulonglong)uVar13 + (ulonglong)uVar8 + (longlong)plVar7;
    plVar7[1] = (longlong)plVar7;
    *plVar7 = (longlong)plVar7;
    plVar7[2] = 0;
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      param_1[1] = plVar7;
    }
    else {
      plVar7[1] = *(longlong *)(lVar4 + 8);
      *plVar7 = lVar4;
      *(longlong **)(lVar4 + 8) = plVar7;
      *(longlong **)plVar7[1] = plVar7;
    }
    if (uVar10 != 0) {
      lStackX_8 = 0;
      uVar14 = uVar9;
      do {
        puVar11 = (uint64_t *)
                  ((ulonglong)((int)uVar9 * uVar12) + (ulonglong)uVar5 + (ulonglong)uVar13 +
                   (ulonglong)uVar8 + (longlong)plVar7);
        *(uint64_t **)(lStackX_8 + plVar7[6]) = puVar11;
        plVar6 = (longlong *)(plVar7[5] + uVar14);
        plVar6[1] = param_1[7];
        *plVar6 = (longlong)(param_1 + 6);
        param_1[7] = plVar6;
        *(longlong **)plVar6[1] = plVar6;
        *(uint64_t **)(plVar7[5] + 0x10 + uVar14) = puVar11;
        puVar1 = puVar11 + 1;
        puVar11[2] = puVar1;
        *puVar1 = puVar1;
        puVar11[3] = 0;
        puVar1 = puVar11 + 4;
        puVar11[5] = puVar1;
        *puVar1 = puVar1;
        puVar11[6] = 0;
        puVar11[8] = 0;
        *(int32_t *)(puVar11 + 7) = 0;
        puVar11[10] = 0;
        *(int32_t *)(puVar11 + 9) = 0;
        puVar11[0x14] = 0;
        *(int32_t *)(puVar11 + 0x13) = 0;
        *puVar11 = 0;
        puVar11[0xb] = 0;
        puVar11[0xc] = 0;
        func_0x000180763630(puVar11,*param_1,0x3f800000);
        uVar3 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar3;
        lStackX_8 = lStackX_8 + 8;
        uVar14 = uVar14 + 0x18;
      } while (uVar3 < uVar10);
    }
    *(uint *)(param_1 + 2) = *(int *)(param_1 + 2) + uVar10;
    return 0;
  }
  return 0x26;
}



uint64_t FUN_180789f8f(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  longlong *plVar1;
  longlong unaff_RBX;
  uint unaff_EBP;
  uint unaff_ESI;
  uint64_t *unaff_RDI;
  longlong *plVar2;
  longlong in_R10;
  longlong unaff_R12;
  int unaff_R13D;
  longlong lVar3;
  longlong lStack0000000000000080;
  longlong in_stack_00000088;
  longlong lStack0000000000000090;
  
  lVar3 = in_R10;
  lStack0000000000000080 = param_1;
  lStack0000000000000090 = param_4;
  do {
    plVar2 = (longlong *)
             ((ulonglong)(unaff_EBP * unaff_R13D) + lStack0000000000000090 + param_2 + unaff_R12 +
             unaff_RBX);
    *(longlong **)(lStack0000000000000080 + *(longlong *)(unaff_RBX + 0x30)) = plVar2;
    plVar1 = (longlong *)(*(longlong *)(unaff_RBX + 0x28) + lVar3);
    plVar1[1] = unaff_RDI[7];
    *plVar1 = (longlong)(unaff_RDI + 6);
    unaff_RDI[7] = plVar1;
    *(longlong **)plVar1[1] = plVar1;
    *(longlong **)(*(longlong *)(unaff_RBX + 0x28) + 0x10 + lVar3) = plVar2;
    plVar1 = plVar2 + 1;
    plVar2[2] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
    plVar2[3] = in_R10;
    plVar1 = plVar2 + 4;
    plVar2[5] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
    plVar2[6] = in_R10;
    plVar2[8] = in_R10;
    *(int32_t *)(plVar2 + 7) = 0;
    plVar2[10] = in_R10;
    *(int32_t *)(plVar2 + 9) = 0;
    plVar2[0x14] = in_R10;
    *(int32_t *)(plVar2 + 0x13) = 0;
    *plVar2 = in_R10;
    plVar2[0xb] = in_R10;
    plVar2[0xc] = in_R10;
    func_0x000180763630(plVar2,*unaff_RDI,0x3f800000);
    unaff_EBP = unaff_EBP + 1;
    lStack0000000000000080 = lStack0000000000000080 + 8;
    lVar3 = lVar3 + 0x18;
    in_R10 = 0;
    param_2 = in_stack_00000088;
  } while (unaff_EBP < unaff_ESI);
  *(uint *)(unaff_RDI + 2) = *(int *)(unaff_RDI + 2) + unaff_ESI;
  return 0;
}



uint64_t FUN_18078a09f(void)

{
  int unaff_ESI;
  longlong unaff_RDI;
  
  *(int *)(unaff_RDI + 0x10) = *(int *)(unaff_RDI + 0x10) + unaff_ESI;
  return 0;
}



int FUN_18078a0c0(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  longlong *plVar8;
  int iVar9;
  
  iVar6 = (int)param_1[3];
  lVar1 = *param_1;
  iVar9 = 0x16;
  if (-1 < iVar6) {
    iVar9 = iVar6;
  }
  bVar5 = false;
  if (lVar1 == 0) {
    iVar6 = 0x43;
  }
  else if (param_2 == (longlong *)0x0) {
    iVar6 = 0x1f;
  }
  else {
    cVar7 = '\0';
    if (-1 < iVar6) {
      cVar7 = param_3;
    }
    if ((cVar7 != '\0') && (lVar1 != 0)) {
      func_0x000180743c20(lVar1,iVar9);
      bVar5 = true;
    }
    plVar2 = param_1 + 6;
    if ((((longlong *)*plVar2 != plVar2) || ((longlong *)param_1[7] != plVar2)) ||
       (iVar6 = FUN_180789e60(param_1), iVar6 == 0)) {
      plVar2 = (longlong *)*plVar2;
      *(longlong *)plVar2[1] = *plVar2;
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
      plVar2[1] = param_1[10];
      *plVar2 = (longlong)(param_1 + 9);
      param_1[10] = (longlong)plVar2;
      *(longlong **)plVar2[1] = plVar2;
      plVar8 = (longlong *)param_1[1];
      do {
        plVar3 = (longlong *)plVar8[5];
        if ((plVar3 <= plVar2) && (plVar2 < plVar3 + (longlong)(int)plVar8[4] * 3)) {
          iVar6 = (int)(((longlong)plVar2 - (longlong)plVar3) / 0x18);
          if (iVar6 != -1) {
            lVar4 = *(longlong *)(plVar8[6] + (longlong)iVar6 * 8);
            *param_2 = lVar4;
            if (lVar4 == 0) {
              iVar6 = 0x26;
            }
            else {
              plVar2[2] = lVar4;
              func_0x000180763630(*param_2,*param_1,0x3f800000);
              *(int *)((longlong)plVar8 + 0x24) = *(int *)((longlong)plVar8 + 0x24) + 1;
              *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
              iVar6 = 0;
            }
            goto LAB_18078a1be;
          }
          break;
        }
        plVar8 = (longlong *)*plVar8;
      } while (plVar8 != (longlong *)param_1[1]);
      iVar6 = 0x1e;
    }
  }
LAB_18078a1be:
  if ((bVar5) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar1,iVar9);
  }
  return iVar6;
}



int FUN_18078a0d9(uint64_t *param_1,longlong *param_2,char param_3,int param_4)

{
  uint64_t *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  longlong *plVar8;
  longlong unaff_RBP;
  
  bVar5 = false;
  if (unaff_RBP == 0) {
    iVar6 = 0x43;
  }
  else if (param_2 == (longlong *)0x0) {
    iVar6 = 0x1f;
  }
  else {
    cVar7 = '\0';
    if (-1 < param_4) {
      cVar7 = param_3;
    }
    if ((cVar7 != '\0') && (unaff_RBP != 0)) {
      func_0x000180743c20();
      bVar5 = true;
    }
    puVar1 = param_1 + 6;
    if ((((uint64_t *)*puVar1 != puVar1) || ((uint64_t *)param_1[7] != puVar1)) ||
       (iVar6 = FUN_180789e60(param_1), iVar6 == 0)) {
      plVar2 = (longlong *)*puVar1;
      *(longlong *)plVar2[1] = *plVar2;
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
      plVar2[1] = param_1[10];
      *plVar2 = (longlong)(param_1 + 9);
      param_1[10] = plVar2;
      *(longlong **)plVar2[1] = plVar2;
      plVar8 = (longlong *)param_1[1];
      do {
        plVar3 = (longlong *)plVar8[5];
        if ((plVar3 <= plVar2) && (plVar2 < plVar3 + (longlong)(int)plVar8[4] * 3)) {
          iVar6 = (int)(((longlong)plVar2 - (longlong)plVar3) / 0x18);
          if (iVar6 != -1) {
            lVar4 = *(longlong *)(plVar8[6] + (longlong)iVar6 * 8);
            *param_2 = lVar4;
            if (lVar4 == 0) {
              iVar6 = 0x26;
            }
            else {
              plVar2[2] = lVar4;
              func_0x000180763630(*param_2,*param_1,0x3f800000);
              *(int *)((longlong)plVar8 + 0x24) = *(int *)((longlong)plVar8 + 0x24) + 1;
              *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
              iVar6 = 0;
            }
            goto LAB_18078a1be;
          }
          break;
        }
        plVar8 = (longlong *)*plVar8;
      } while (plVar8 != (longlong *)param_1[1]);
      iVar6 = 0x1e;
    }
  }
LAB_18078a1be:
  if ((bVar5) && (unaff_RBP != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return iVar6;
}



int32_t FUN_18078a1d7(void)

{
  longlong unaff_RBP;
  int32_t unaff_EDI;
  
  if (unaff_RBP != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return unaff_EDI;
}



int32_t FUN_18078a1f2(uint64_t param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint64_t *unaff_RSI;
  int32_t unaff_EDI;
  char unaff_R12B;
  longlong *unaff_R15;
  
  iVar2 = (int)((param_3 - param_2) / 0x18);
  if (iVar2 == -1) {
    unaff_EDI = 0x1e;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(unaff_RBX + 0x30) + (longlong)iVar2 * 8);
    *unaff_R15 = lVar1;
    if (lVar1 == 0) {
      unaff_EDI = 0x26;
    }
    else {
      *(longlong *)(param_3 + 0x10) = lVar1;
      func_0x000180763630(*unaff_R15,*unaff_RSI,0x3f800000);
      *(int *)(unaff_RBX + 0x24) = *(int *)(unaff_RBX + 0x24) + 1;
      *(int *)((longlong)unaff_RSI + 0x14) = *(int *)((longlong)unaff_RSI + 0x14) + 1;
    }
  }
  if ((unaff_R12B != '\0') && (unaff_RBP != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return unaff_EDI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18078a260(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  uVar2 = 0;
  uVar5 = uVar2;
  uVar6 = uVar2;
  if (0 < (int)plVar1[4]) {
    do {
      uVar4 = (int)uVar5 + 1;
      plVar3 = (longlong *)(plVar1[5] + uVar6);
      *(longlong *)plVar3[1] = *plVar3;
      *(longlong *)(*plVar3 + 8) = plVar3[1];
      plVar3[1] = (longlong)plVar3;
      *plVar3 = (longlong)plVar3;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 0x18;
    } while ((int)uVar4 < (int)plVar1[4]);
  }
  if (plVar1 == *(longlong **)(param_1 + 8)) {
    plVar3 = (longlong *)*plVar1;
    if ((longlong *)*plVar1 == *(longlong **)(param_1 + 8)) {
      plVar3 = (longlong *)uVar2;
    }
    *(longlong **)(param_1 + 8) = plVar3;
  }
  *(longlong *)plVar1[1] = *plVar1;
  *(longlong *)(*plVar1 + 8) = plVar1[1];
  plVar1[1] = (longlong)plVar1;
  *plVar1 = (longlong)plVar1;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - (int)plVar1[4];
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar1[3],&UNK_18095adb0,0x70,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



