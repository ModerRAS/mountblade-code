#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part002.c - 10 个函数

// 函数: void FUN_1804dd680(longlong *param_1,int param_2,int param_3)
void FUN_1804dd680(longlong *param_1,int param_2,int param_3)

{
  int32_t uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  ulonglong uVar18;
  
  uVar18 = (ulonglong)param_2;
  uVar10 = uVar18;
  if (param_2 < param_3) {
    do {
      lVar5 = *param_1;
      iVar17 = (int)uVar10;
      if (iVar17 < *(int *)(lVar5 + 0x614)) {
        uVar10 = (longlong)*(int *)(lVar5 + 0x660) & uVar18;
        lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x640) + (longlong)(iVar17 >> 10) * 8);
        if (((*(int *)(lVar6 + uVar10 * 0xc) != -1) &&
            (puVar11 = (uint *)(lVar6 + uVar10 * 0xc + 8), puVar11 != (uint *)0x0)) &&
           (uVar2 = *puVar11, (int)uVar2 < *(int *)(lVar5 + 0x2c3c))) {
          piVar15 = (int *)((longlong)(int)(uVar2 & *(uint *)(lVar5 + 0x2c88)) * 0x68 +
                           *(longlong *)
                            (*(longlong *)(lVar5 + 0x2c68) + (longlong)((int)uVar2 >> 10) * 8));
          if ((*piVar15 != -1) && (piVar16 = piVar15 + 2, piVar16 != (int *)0x0)) {
            uVar3 = *(uint *)(lVar5 + 0x418);
            lVar13 = (longlong)(int)uVar3;
            uVar4 = piVar15[4];
            lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x3f8) + (longlong)((int)uVar2 >> 10) * 8);
            if (uVar4 == 0xffffffff) {
              if (*(char *)(lVar6 + 8 + (longlong)(int)(uVar3 & uVar2) * 0xc) != '\0') {
                cVar8 = FUN_1804de880(lVar13,lVar5,piVar15[5],*(int32_t *)param_1[1]);
                if (cVar8 == '\0') {
                  FUN_1804dfdb0(piVar16,lVar5);
                }
                else {
                  FUN_1804de580();
                }
              }
            }
            else if ((*(char *)(lVar6 + 8 + (longlong)(int)(uVar3 & uVar2) * 0xc) != '\0') ||
                    (lVar13 = (longlong)(int)(uVar3 & uVar4) * 3,
                    *(char *)(*(longlong *)
                               (*(longlong *)(lVar5 + 0x3f8) + (longlong)((int)uVar4 >> 10) * 8) + 8
                             + (longlong)(int)(uVar3 & uVar4) * 0xc) != '\0')) {
              lVar6 = *(longlong *)
                       (*(longlong *)(lVar5 + 0x2c68) + (longlong)((int)uVar4 >> 10) * 8);
              lVar14 = (longlong)(int)(uVar4 & *(uint *)(lVar5 + 0x2c88)) * 0x68;
              cVar8 = FUN_1804de880(lVar13,lVar5,piVar15[5],*(int32_t *)param_1[1]);
              if (cVar8 == '\0') {
                FUN_1804dfdb0(piVar16,lVar5);
              }
              else {
                FUN_1804de580();
              }
              lVar13 = 0;
              lVar5 = *param_1;
              uVar1 = *(int32_t *)param_1[1];
              iVar9 = (int)(*(longlong *)(lVar14 + 0x28 + lVar6) -
                            *(longlong *)(lVar14 + 0x20 + lVar6) >> 2);
              if (0 < iVar9) {
                do {
                  uVar2 = *(uint *)(*(longlong *)(lVar14 + 0x20 + lVar6) + lVar13 * 4);
                  if (uVar2 != 0xffffffff) {
                    lVar12 = (longlong)(int)(*(uint *)(lVar5 + 0x2b18) & uVar2) * 0xd8;
                    lVar7 = *(longlong *)
                             (*(longlong *)(lVar5 + 11000) + (longlong)((int)uVar2 >> 10) * 8);
                    uVar2 = *(uint *)(lVar7 + 0x1c + lVar12);
                    if (uVar2 != 0xffffffff) {
                      uVar3 = *(uint *)(lVar7 + 0x18 + lVar12);
                      FUN_1801bcce0(*(uint64_t *)
                                     (*(longlong *)
                                       (*(longlong *)(lVar5 + 0x698) +
                                       (longlong)((int)uVar2 >> 10) * 8) + 8 +
                                     (longlong)(int)(*(uint *)(lVar5 + 0x6b8) & uVar2) * 0x30),
                                    *(longlong *)
                                     (*(longlong *)(lVar5 + 0x488) +
                                     (longlong)((int)uVar3 >> 10) * 8) +
                                    ((longlong)(int)(*(uint *)(lVar5 + 0x4a8) & uVar3) * 9 + 1) * 8,
                                    lVar5 + 0x28,uVar1);
                    }
                  }
                  lVar13 = lVar13 + 1;
                } while (lVar13 < iVar9);
              }
            }
          }
        }
      }
      uVar18 = uVar18 + 1;
      uVar10 = (ulonglong)(iVar17 + 1U);
    } while ((int)(iVar17 + 1U) < param_3);
  }
  return;
}






// 函数: void FUN_1804dd69f(uint64_t param_1,uint64_t param_2,int param_3)
void FUN_1804dd69f(uint64_t param_1,uint64_t param_2,int param_3)

{
  int32_t uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong in_RAX;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  longlong lVar14;
  uint64_t unaff_RDI;
  int *piVar15;
  int *piVar16;
  longlong *unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  int iVar17;
  ulonglong unaff_R15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int in_stack_00000070;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  *(uint64_t *)(in_RAX + 0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R14;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  uVar10 = unaff_R15;
  do {
    lVar5 = *unaff_R12;
    iVar17 = (int)uVar10;
    if (iVar17 < *(int *)(lVar5 + 0x614)) {
      uVar10 = (longlong)*(int *)(lVar5 + 0x660) & unaff_R15;
      lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x640) + (longlong)(iVar17 >> 10) * 8);
      param_3 = in_stack_00000070;
      if (((*(int *)(lVar6 + uVar10 * 0xc) != -1) &&
          (puVar11 = (uint *)(lVar6 + uVar10 * 0xc + 8), puVar11 != (uint *)0x0)) &&
         (uVar2 = *puVar11, (int)uVar2 < *(int *)(lVar5 + 0x2c3c))) {
        piVar15 = (int *)((longlong)(int)(uVar2 & *(uint *)(lVar5 + 0x2c88)) * 0x68 +
                         *(longlong *)
                          (*(longlong *)(lVar5 + 0x2c68) + (longlong)((int)uVar2 >> 10) * 8));
        if ((*piVar15 != -1) && (piVar16 = piVar15 + 2, piVar16 != (int *)0x0)) {
          uVar3 = *(uint *)(lVar5 + 0x418);
          lVar13 = (longlong)(int)uVar3;
          uVar4 = piVar15[4];
          lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x3f8) + (longlong)((int)uVar2 >> 10) * 8);
          if (uVar4 == 0xffffffff) {
            if (*(char *)(lVar6 + 8 + (longlong)(int)(uVar3 & uVar2) * 0xc) != '\0') {
              cVar8 = FUN_1804de880(lVar13,lVar5,piVar15[5],*(int32_t *)unaff_R12[1]);
              if (cVar8 == '\0') {
                FUN_1804dfdb0(piVar16,lVar5);
              }
              else {
                FUN_1804de580();
              }
            }
          }
          else if ((*(char *)(lVar6 + 8 + (longlong)(int)(uVar3 & uVar2) * 0xc) != '\0') ||
                  (lVar13 = (longlong)(int)(uVar3 & uVar4) * 3,
                  *(char *)(*(longlong *)
                             (*(longlong *)(lVar5 + 0x3f8) + (longlong)((int)uVar4 >> 10) * 8) + 8 +
                           (longlong)(int)(uVar3 & uVar4) * 0xc) != '\0')) {
            lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x2c68) + (longlong)((int)uVar4 >> 10) * 8);
            lVar14 = (longlong)(int)(uVar4 & *(uint *)(lVar5 + 0x2c88)) * 0x68;
            cVar8 = FUN_1804de880(lVar13,lVar5,piVar15[5],*(int32_t *)unaff_R12[1]);
            if (cVar8 == '\0') {
              FUN_1804dfdb0(piVar16,lVar5);
            }
            else {
              FUN_1804de580();
            }
            lVar13 = 0;
            lVar5 = *unaff_R12;
            uVar1 = *(int32_t *)unaff_R12[1];
            iVar9 = (int)(*(longlong *)(lVar14 + 0x28 + lVar6) -
                          *(longlong *)(lVar14 + 0x20 + lVar6) >> 2);
            if (0 < iVar9) {
              do {
                uVar2 = *(uint *)(*(longlong *)(lVar14 + 0x20 + lVar6) + lVar13 * 4);
                if (uVar2 != 0xffffffff) {
                  lVar12 = (longlong)(int)(*(uint *)(lVar5 + 0x2b18) & uVar2) * 0xd8;
                  lVar7 = *(longlong *)
                           (*(longlong *)(lVar5 + 11000) + (longlong)((int)uVar2 >> 10) * 8);
                  uVar2 = *(uint *)(lVar7 + 0x1c + lVar12);
                  if (uVar2 != 0xffffffff) {
                    uVar3 = *(uint *)(lVar7 + 0x18 + lVar12);
                    FUN_1801bcce0(*(uint64_t *)
                                   (*(longlong *)
                                     (*(longlong *)(lVar5 + 0x698) +
                                     (longlong)((int)uVar2 >> 10) * 8) + 8 +
                                   (longlong)(int)(*(uint *)(lVar5 + 0x6b8) & uVar2) * 0x30),
                                  *(longlong *)
                                   (*(longlong *)(lVar5 + 0x488) + (longlong)((int)uVar3 >> 10) * 8)
                                  + ((longlong)(int)(*(uint *)(lVar5 + 0x4a8) & uVar3) * 9 + 1) * 8,
                                  lVar5 + 0x28,uVar1);
                  }
                }
                lVar13 = lVar13 + 1;
              } while (lVar13 < iVar9);
            }
          }
        }
      }
    }
    uVar10 = (ulonglong)(iVar17 + 1U);
    unaff_R15 = unaff_R15 + 1;
  } while ((int)(iVar17 + 1U) < param_3);
  return;
}






// 函数: void FUN_1804dd91c(void)
void FUN_1804dd91c(void)

{
  return;
}






// 函数: void FUN_1804dd930(longlong *param_1,int param_2,int param_3)
void FUN_1804dd930(longlong *param_1,int param_2,int param_3)

{
  int32_t uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  ulonglong uVar18;
  
  uVar18 = (ulonglong)param_2;
  uVar10 = uVar18;
  if (param_2 < param_3) {
    do {
      lVar5 = *param_1;
      iVar17 = (int)uVar10;
      if (iVar17 < *(int *)(lVar5 + 0x614)) {
        uVar10 = (longlong)*(int *)(lVar5 + 0x660) & uVar18;
        lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x640) + (longlong)(iVar17 >> 10) * 8);
        if (((*(int *)(lVar6 + uVar10 * 0xc) != -1) &&
            (puVar11 = (uint *)(lVar6 + uVar10 * 0xc + 8), puVar11 != (uint *)0x0)) &&
           (uVar2 = *puVar11, (int)uVar2 < *(int *)(lVar5 + 0x2c3c))) {
          piVar15 = (int *)((longlong)(int)(uVar2 & *(uint *)(lVar5 + 0x2c88)) * 0x68 +
                           *(longlong *)
                            (*(longlong *)(lVar5 + 0x2c68) + (longlong)((int)uVar2 >> 10) * 8));
          if ((*piVar15 != -1) && (piVar16 = piVar15 + 2, piVar16 != (int *)0x0)) {
            uVar3 = *(uint *)(lVar5 + 0x418);
            lVar13 = (longlong)(int)uVar3;
            uVar4 = piVar15[4];
            lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x3f8) + (longlong)((int)uVar2 >> 10) * 8);
            if (uVar4 == 0xffffffff) {
              if (*(char *)(lVar6 + 8 + (longlong)(int)(uVar3 & uVar2) * 0xc) != '\0') {
                cVar8 = FUN_1804de930(lVar13,lVar5,piVar15[5],*(int32_t *)param_1[1]);
                if (cVar8 == '\0') {
                  FUN_1804dfdb0(piVar16,lVar5);
                }
                else {
                  FUN_1804de580();
                }
              }
            }
            else if ((*(char *)(lVar6 + 8 + (longlong)(int)(uVar3 & uVar2) * 0xc) != '\0') ||
                    (lVar13 = (longlong)(int)(uVar3 & uVar4) * 3,
                    *(char *)(*(longlong *)
                               (*(longlong *)(lVar5 + 0x3f8) + (longlong)((int)uVar4 >> 10) * 8) + 8
                             + (longlong)(int)(uVar3 & uVar4) * 0xc) != '\0')) {
              lVar6 = *(longlong *)
                       (*(longlong *)(lVar5 + 0x2c68) + (longlong)((int)uVar4 >> 10) * 8);
              lVar14 = (longlong)(int)(uVar4 & *(uint *)(lVar5 + 0x2c88)) * 0x68;
              cVar8 = FUN_1804de930(lVar13,lVar5,piVar15[5],*(int32_t *)param_1[1]);
              if (cVar8 == '\0') {
                FUN_1804dfdb0(piVar16,lVar5);
              }
              else {
                FUN_1804de580();
              }
              lVar13 = 0;
              lVar5 = *param_1;
              uVar1 = *(int32_t *)param_1[1];
              iVar9 = (int)(*(longlong *)(lVar14 + 0x28 + lVar6) -
                            *(longlong *)(lVar14 + 0x20 + lVar6) >> 2);
              if (0 < iVar9) {
                do {
                  uVar2 = *(uint *)(*(longlong *)(lVar14 + 0x20 + lVar6) + lVar13 * 4);
                  if (uVar2 != 0xffffffff) {
                    lVar12 = (longlong)(int)(*(uint *)(lVar5 + 0x2b18) & uVar2) * 0xd8;
                    lVar7 = *(longlong *)
                             (*(longlong *)(lVar5 + 11000) + (longlong)((int)uVar2 >> 10) * 8);
                    uVar2 = *(uint *)(lVar7 + 0x1c + lVar12);
                    if (uVar2 != 0xffffffff) {
                      uVar3 = *(uint *)(lVar7 + 0x18 + lVar12);
                      FUN_1801bcdd0(*(uint64_t *)
                                     (*(longlong *)
                                       (*(longlong *)(lVar5 + 0x698) +
                                       (longlong)((int)uVar2 >> 10) * 8) + 8 +
                                     (longlong)(int)(*(uint *)(lVar5 + 0x6b8) & uVar2) * 0x30),
                                    *(longlong *)
                                     (*(longlong *)(lVar5 + 0x488) +
                                     (longlong)((int)uVar3 >> 10) * 8) +
                                    ((longlong)(int)(*(uint *)(lVar5 + 0x4a8) & uVar3) * 9 + 1) * 8,
                                    lVar5 + 0x28,uVar1);
                    }
                  }
                  lVar13 = lVar13 + 1;
                } while (lVar13 < iVar9);
              }
            }
          }
        }
      }
      uVar18 = uVar18 + 1;
      uVar10 = (ulonglong)(iVar17 + 1U);
    } while ((int)(iVar17 + 1U) < param_3);
  }
  return;
}






// 函数: void FUN_1804dd94f(uint64_t param_1,uint64_t param_2,int param_3)
void FUN_1804dd94f(uint64_t param_1,uint64_t param_2,int param_3)

{
  int32_t uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong in_RAX;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  longlong lVar14;
  uint64_t unaff_RDI;
  int *piVar15;
  int *piVar16;
  longlong *unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  int iVar17;
  ulonglong unaff_R15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int in_stack_00000070;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  *(uint64_t *)(in_RAX + 0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R14;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  uVar10 = unaff_R15;
  do {
    lVar5 = *unaff_R12;
    iVar17 = (int)uVar10;
    if (iVar17 < *(int *)(lVar5 + 0x614)) {
      uVar10 = (longlong)*(int *)(lVar5 + 0x660) & unaff_R15;
      lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x640) + (longlong)(iVar17 >> 10) * 8);
      param_3 = in_stack_00000070;
      if (((*(int *)(lVar6 + uVar10 * 0xc) != -1) &&
          (puVar11 = (uint *)(lVar6 + uVar10 * 0xc + 8), puVar11 != (uint *)0x0)) &&
         (uVar2 = *puVar11, (int)uVar2 < *(int *)(lVar5 + 0x2c3c))) {
        piVar15 = (int *)((longlong)(int)(uVar2 & *(uint *)(lVar5 + 0x2c88)) * 0x68 +
                         *(longlong *)
                          (*(longlong *)(lVar5 + 0x2c68) + (longlong)((int)uVar2 >> 10) * 8));
        if ((*piVar15 != -1) && (piVar16 = piVar15 + 2, piVar16 != (int *)0x0)) {
          uVar3 = *(uint *)(lVar5 + 0x418);
          lVar13 = (longlong)(int)uVar3;
          uVar4 = piVar15[4];
          lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x3f8) + (longlong)((int)uVar2 >> 10) * 8);
          if (uVar4 == 0xffffffff) {
            if (*(char *)(lVar6 + 8 + (longlong)(int)(uVar3 & uVar2) * 0xc) != '\0') {
              cVar8 = FUN_1804de930(lVar13,lVar5,piVar15[5],*(int32_t *)unaff_R12[1]);
              if (cVar8 == '\0') {
                FUN_1804dfdb0(piVar16,lVar5);
              }
              else {
                FUN_1804de580();
              }
            }
          }
          else if ((*(char *)(lVar6 + 8 + (longlong)(int)(uVar3 & uVar2) * 0xc) != '\0') ||
                  (lVar13 = (longlong)(int)(uVar3 & uVar4) * 3,
                  *(char *)(*(longlong *)
                             (*(longlong *)(lVar5 + 0x3f8) + (longlong)((int)uVar4 >> 10) * 8) + 8 +
                           (longlong)(int)(uVar3 & uVar4) * 0xc) != '\0')) {
            lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x2c68) + (longlong)((int)uVar4 >> 10) * 8);
            lVar14 = (longlong)(int)(uVar4 & *(uint *)(lVar5 + 0x2c88)) * 0x68;
            cVar8 = FUN_1804de930(lVar13,lVar5,piVar15[5],*(int32_t *)unaff_R12[1]);
            if (cVar8 == '\0') {
              FUN_1804dfdb0(piVar16,lVar5);
            }
            else {
              FUN_1804de580();
            }
            lVar13 = 0;
            lVar5 = *unaff_R12;
            uVar1 = *(int32_t *)unaff_R12[1];
            iVar9 = (int)(*(longlong *)(lVar14 + 0x28 + lVar6) -
                          *(longlong *)(lVar14 + 0x20 + lVar6) >> 2);
            if (0 < iVar9) {
              do {
                uVar2 = *(uint *)(*(longlong *)(lVar14 + 0x20 + lVar6) + lVar13 * 4);
                if (uVar2 != 0xffffffff) {
                  lVar12 = (longlong)(int)(*(uint *)(lVar5 + 0x2b18) & uVar2) * 0xd8;
                  lVar7 = *(longlong *)
                           (*(longlong *)(lVar5 + 11000) + (longlong)((int)uVar2 >> 10) * 8);
                  uVar2 = *(uint *)(lVar7 + 0x1c + lVar12);
                  if (uVar2 != 0xffffffff) {
                    uVar3 = *(uint *)(lVar7 + 0x18 + lVar12);
                    FUN_1801bcdd0(*(uint64_t *)
                                   (*(longlong *)
                                     (*(longlong *)(lVar5 + 0x698) +
                                     (longlong)((int)uVar2 >> 10) * 8) + 8 +
                                   (longlong)(int)(*(uint *)(lVar5 + 0x6b8) & uVar2) * 0x30),
                                  *(longlong *)
                                   (*(longlong *)(lVar5 + 0x488) + (longlong)((int)uVar3 >> 10) * 8)
                                  + ((longlong)(int)(*(uint *)(lVar5 + 0x4a8) & uVar3) * 9 + 1) * 8,
                                  lVar5 + 0x28,uVar1);
                  }
                }
                lVar13 = lVar13 + 1;
              } while (lVar13 < iVar9);
            }
          }
        }
      }
    }
    uVar10 = (ulonglong)(iVar17 + 1U);
    unaff_R15 = unaff_R15 + 1;
  } while ((int)(iVar17 + 1U) < param_3);
  return;
}






// 函数: void FUN_1804ddbcc(void)
void FUN_1804ddbcc(void)

{
  return;
}






// 函数: void FUN_1804ddbe0(longlong *param_1,int param_2,int param_3)
void FUN_1804ddbe0(longlong *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int *piVar11;
  int *piVar12;
  longlong lVar13;
  
  uVar10 = (ulonglong)param_2;
  uVar6 = uVar10;
  if (param_2 < param_3) {
    do {
      lVar4 = *param_1;
      iVar9 = (int)uVar6;
      if (iVar9 < *(int *)(lVar4 + 0x614)) {
        uVar6 = (longlong)*(int *)(lVar4 + 0x660) & uVar10;
        lVar13 = *(longlong *)(*(longlong *)(lVar4 + 0x640) + (longlong)(iVar9 >> 10) * 8);
        if (((*(int *)(lVar13 + uVar6 * 0xc) != -1) &&
            (puVar7 = (uint *)(lVar13 + uVar6 * 0xc + 8), puVar7 != (uint *)0x0)) &&
           (uVar1 = *puVar7, (int)uVar1 < *(int *)(lVar4 + 0x2c3c))) {
          piVar11 = (int *)((longlong)(int)(*(uint *)(lVar4 + 0x2c88) & uVar1) * 0x68 +
                           *(longlong *)
                            (*(longlong *)(lVar4 + 0x2c68) + (longlong)((int)uVar1 >> 10) * 8));
          if ((*piVar11 != -1) && (piVar12 = piVar11 + 2, piVar12 != (int *)0x0)) {
            uVar2 = *(uint *)(lVar4 + 0x418);
            lVar8 = (longlong)(int)uVar2;
            uVar3 = piVar11[4];
            lVar13 = *(longlong *)(*(longlong *)(lVar4 + 0x3f8) + (longlong)((int)uVar1 >> 10) * 8);
            if (uVar3 == 0xffffffff) {
              if (*(char *)(lVar13 + 8 + (longlong)(int)(uVar2 & uVar1) * 0xc) != '\0') {
                cVar5 = FUN_1804de9e0(lVar8,lVar4,piVar11[5]);
                if (cVar5 == '\0') {
                  FUN_1804dfdb0(piVar12,lVar4);
                }
                else {
                  FUN_1804de580();
                }
              }
            }
            else if ((*(char *)(lVar13 + 8 + (longlong)(int)(uVar2 & uVar1) * 0xc) != '\0') ||
                    (lVar8 = (longlong)(int)(uVar2 & uVar3) * 3,
                    *(char *)(*(longlong *)
                               (*(longlong *)(lVar4 + 0x3f8) + (longlong)((int)uVar3 >> 10) * 8) + 8
                             + (longlong)(int)(uVar2 & uVar3) * 0xc) != '\0')) {
              lVar13 = (longlong)(int)(*(uint *)(lVar4 + 0x2c88) & uVar3) * 0x68 +
                       *(longlong *)
                        (*(longlong *)(lVar4 + 0x2c68) + (longlong)((int)uVar3 >> 10) * 8);
              cVar5 = FUN_1804de9e0(lVar8,lVar4,piVar11[5]);
              if (cVar5 == '\0') {
                FUN_1804dfdb0(piVar12,lVar4);
                FUN_1804de580(lVar13 + 8,*param_1);
              }
              else {
                FUN_1804de580();
                FUN_1804de580(lVar13 + 8,*param_1);
              }
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
      uVar6 = (ulonglong)(iVar9 + 1U);
    } while ((int)(iVar9 + 1U) < param_3);
  }
  return;
}






// 函数: void FUN_1804ddbfc(void)
void FUN_1804ddbfc(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  ulonglong unaff_RSI;
  int *piVar10;
  int *piVar11;
  int unaff_R13D;
  longlong lVar12;
  longlong *unaff_R15;
  
  uVar6 = unaff_RSI;
  do {
    lVar4 = *unaff_R15;
    iVar9 = (int)uVar6;
    if (iVar9 < *(int *)(lVar4 + 0x614)) {
      uVar6 = (longlong)*(int *)(lVar4 + 0x660) & unaff_RSI;
      lVar12 = *(longlong *)(*(longlong *)(lVar4 + 0x640) + (longlong)(iVar9 >> 10) * 8);
      if (((*(int *)(lVar12 + uVar6 * 0xc) != -1) &&
          (puVar7 = (uint *)(lVar12 + uVar6 * 0xc + 8), puVar7 != (uint *)0x0)) &&
         (uVar1 = *puVar7, (int)uVar1 < *(int *)(lVar4 + 0x2c3c))) {
        piVar10 = (int *)((longlong)(int)(*(uint *)(lVar4 + 0x2c88) & uVar1) * 0x68 +
                         *(longlong *)
                          (*(longlong *)(lVar4 + 0x2c68) + (longlong)((int)uVar1 >> 10) * 8));
        if ((*piVar10 != -1) && (piVar11 = piVar10 + 2, piVar11 != (int *)0x0)) {
          uVar2 = *(uint *)(lVar4 + 0x418);
          lVar8 = (longlong)(int)uVar2;
          uVar3 = piVar10[4];
          lVar12 = *(longlong *)(*(longlong *)(lVar4 + 0x3f8) + (longlong)((int)uVar1 >> 10) * 8);
          if (uVar3 == 0xffffffff) {
            if (*(char *)(lVar12 + 8 + (longlong)(int)(uVar2 & uVar1) * 0xc) != '\0') {
              cVar5 = FUN_1804de9e0(lVar8,lVar4,piVar10[5]);
              if (cVar5 == '\0') {
                FUN_1804dfdb0(piVar11,lVar4);
              }
              else {
                FUN_1804de580();
              }
            }
          }
          else if ((*(char *)(lVar12 + 8 + (longlong)(int)(uVar2 & uVar1) * 0xc) != '\0') ||
                  (lVar8 = (longlong)(int)(uVar2 & uVar3) * 3,
                  *(char *)(*(longlong *)
                             (*(longlong *)(lVar4 + 0x3f8) + (longlong)((int)uVar3 >> 10) * 8) + 8 +
                           (longlong)(int)(uVar2 & uVar3) * 0xc) != '\0')) {
            lVar12 = (longlong)(int)(*(uint *)(lVar4 + 0x2c88) & uVar3) * 0x68 +
                     *(longlong *)(*(longlong *)(lVar4 + 0x2c68) + (longlong)((int)uVar3 >> 10) * 8)
            ;
            cVar5 = FUN_1804de9e0(lVar8,lVar4,piVar10[5]);
            if (cVar5 == '\0') {
              FUN_1804dfdb0(piVar11,lVar4);
              FUN_1804de580(lVar12 + 8,*unaff_R15);
            }
            else {
              FUN_1804de580();
              FUN_1804de580(lVar12 + 8,*unaff_R15);
            }
          }
        }
      }
    }
    uVar6 = (ulonglong)(iVar9 + 1U);
    unaff_RSI = unaff_RSI + 1;
  } while ((int)(iVar9 + 1U) < unaff_R13D);
  return;
}






// 函数: void FUN_1804ddd91(void)
void FUN_1804ddd91(void)

{
  return;
}



uint64_t * FUN_1804ddda0(uint64_t *param_1,uint64_t *param_2)

{
  longlong *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  uVar2 = *(int32_t *)((longlong)param_2 + 0x24);
  uVar3 = *(int32_t *)(param_2 + 5);
  uVar4 = *(int32_t *)((longlong)param_2 + 0x2c);
  *(int32_t *)(param_1 + 4) = *(int32_t *)(param_2 + 4);
  *(int32_t *)((longlong)param_1 + 0x24) = uVar2;
  *(int32_t *)(param_1 + 5) = uVar3;
  *(int32_t *)((longlong)param_1 + 0x2c) = uVar4;
  uVar2 = *(int32_t *)((longlong)param_2 + 0x34);
  uVar3 = *(int32_t *)(param_2 + 7);
  uVar4 = *(int32_t *)((longlong)param_2 + 0x3c);
  *(int32_t *)(param_1 + 6) = *(int32_t *)(param_2 + 6);
  *(int32_t *)((longlong)param_1 + 0x34) = uVar2;
  *(int32_t *)(param_1 + 7) = uVar3;
  *(int32_t *)((longlong)param_1 + 0x3c) = uVar4;
  plVar1 = (longlong *)param_2[8];
  param_1[8] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (longlong *)param_2[9];
  param_1[9] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  *(int8_t *)(param_1 + 10) = *(int8_t *)(param_2 + 10);
  *(int32_t *)((longlong)param_1 + 0x54) = *(int32_t *)((longlong)param_2 + 0x54);
  *(int32_t *)(param_1 + 0xb) = *(int32_t *)(param_2 + 0xb);
  *(int32_t *)((longlong)param_1 + 0x5c) = *(int32_t *)((longlong)param_2 + 0x5c);
  *(int32_t *)(param_1 + 0xc) = *(int32_t *)(param_2 + 0xc);
  *(int8_t *)((longlong)param_1 + 100) = *(int8_t *)((longlong)param_2 + 100);
  return param_1;
}



int32_t * FUN_1804dde40(int32_t *param_1,int32_t *param_2)

{
  longlong *plVar1;
  uint64_t uVar2;
  
  *param_1 = *param_2;
  *(int8_t *)(param_1 + 1) = *(int8_t *)(param_2 + 1);
  *(int8_t *)((longlong)param_1 + 5) = *(int8_t *)((longlong)param_2 + 5);
  plVar1 = *(longlong **)(param_2 + 2);
  *(longlong **)(param_1 + 2) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = *(longlong **)(param_2 + 4);
  *(longlong **)(param_1 + 4) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  param_1[6] = param_2[6];
  uVar2 = *(uint64_t *)(param_2 + 9);
  *(uint64_t *)(param_1 + 7) = *(uint64_t *)(param_2 + 7);
  *(uint64_t *)(param_1 + 9) = uVar2;
  uVar2 = *(uint64_t *)(param_2 + 0xd);
  *(uint64_t *)(param_1 + 0xb) = *(uint64_t *)(param_2 + 0xb);
  *(uint64_t *)(param_1 + 0xd) = uVar2;
  uVar2 = *(uint64_t *)(param_2 + 0x11);
  *(uint64_t *)(param_1 + 0xf) = *(uint64_t *)(param_2 + 0xf);
  *(uint64_t *)(param_1 + 0x11) = uVar2;
  uVar2 = *(uint64_t *)(param_2 + 0x15);
  *(uint64_t *)(param_1 + 0x13) = *(uint64_t *)(param_2 + 0x13);
  *(uint64_t *)(param_1 + 0x15) = uVar2;
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  return param_1;
}



int32_t * FUN_1804ddee0(int32_t *param_1,int32_t *param_2)

{
  longlong *plVar1;
  
  *param_1 = *param_2;
  plVar1 = *(longlong **)(param_2 + 2);
  *(longlong **)(param_1 + 2) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = *(longlong **)(param_2 + 4);
  *(longlong **)(param_1 + 4) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = *(longlong **)(param_2 + 6);
  *(longlong **)(param_1 + 6) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ddf60(longlong param_1,longlong param_2)
void FUN_1804ddf60(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,param_2 * 8 + 8,8,*(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
  memset(uVar1,0,param_2 * 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




