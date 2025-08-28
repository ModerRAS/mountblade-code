#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part015.c - 11 个函数

// 函数: void FUN_1803b2406(int64_t param_1)
void FUN_1803b2406(int64_t param_1)

{
  int *piVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int **ppiVar4;
  int64_t lVar5;
  int iVar6;
  int64_t lVar7;
  int iVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int *piStackX_20;
  int *in_stack_00000030;
  int64_t in_stack_00000038;
  
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    lVar7 = 0;
    iVar12 = 0;
    do {
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 0x18)) {
        do {
          lVar10 = *(int64_t *)(param_1 + 0x40);
          for (piVar1 = *(int **)(lVar10 + ((uint64_t)(int64_t)(iVar12 + iVar6) %
                                           (uint64_t)*(uint *)(param_1 + 0x48)) * 8);
              piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 4)) {
            if ((iVar8 == *piVar1) && (iVar6 == piVar1[1])) {
              lVar5 = *(int64_t *)(param_1 + 0x48);
              piStackX_20 = piVar1;
              ppiVar4 = &piStackX_20;
              goto LAB_1803b2492;
            }
          }
          lVar5 = *(int64_t *)(param_1 + 0x48);
          in_stack_00000030 = *(int **)(lVar10 + lVar5 * 8);
          ppiVar4 = &stack0x00000030;
          in_stack_00000038 = lVar10 + lVar5 * 8;
LAB_1803b2492:
          if ((*ppiVar4 != *(int **)(lVar10 + lVar5 * 8)) &&
             (plVar2 = *(int64_t **)(*ppiVar4 + 2), plVar2 != (int64_t *)0x0)) {
            (**(code **)(*plVar2 + 0x20))
                      (plVar2,*(int64_t *)(param_1 + 0x68),
                       (int64_t)iVar6 * 0x68 +
                       *(int64_t *)
                        (*(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x68) + 0x2908) + 0x40)
                        + lVar7));
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_1 + 0x18));
      }
      iVar8 = iVar8 + 1;
      iVar12 = iVar12 + 1000;
      lVar7 = lVar7 + 8;
    } while (iVar8 < *(int *)(param_1 + 0x14));
  }
  lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 0x68) + 0x2908);
  *(int32_t *)(lVar7 + 0x34) = 0x7f7fffff;
  *(int32_t *)(lVar7 + 0x38) = 0xff7fffff;
  if (0 < (int)*(uint *)(lVar7 + 0xc)) {
    lVar10 = 0;
    uVar11 = (uint64_t)*(uint *)(lVar7 + 0xc);
    do {
      if (0 < (int)*(uint *)(lVar7 + 0x10)) {
        lVar5 = 0;
        uVar9 = (uint64_t)*(uint *)(lVar7 + 0x10);
        fVar15 = *(float *)(lVar7 + 0x34);
        fVar16 = *(float *)(lVar7 + 0x38);
        do {
          lVar3 = *(int64_t *)(lVar10 + *(int64_t *)(lVar7 + 0x40));
          fVar13 = *(float *)(lVar5 + 0x14 + lVar3);
          if (fVar15 <= fVar13) {
            fVar13 = fVar15;
          }
          *(float *)(lVar7 + 0x34) = fVar13;
          fVar14 = *(float *)(lVar5 + 0x18 + lVar3);
          if (fVar14 <= fVar16) {
            fVar14 = fVar16;
          }
          *(float *)(lVar7 + 0x38) = fVar14;
          uVar9 = uVar9 - 1;
          lVar5 = lVar5 + 0x68;
          fVar15 = fVar13;
          fVar16 = fVar14;
        } while (uVar9 != 0);
      }
      lVar10 = lVar10 + 8;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}






// 函数: void FUN_1803b241e(void)
void FUN_1803b241e(void)

{
  int *piVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int **ppiVar4;
  int64_t lVar5;
  int iVar6;
  int64_t lVar7;
  int unaff_ESI;
  int64_t unaff_RDI;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int *piStackX_20;
  int *in_stack_00000030;
  int64_t in_stack_00000038;
  
  lVar7 = 0;
  iVar11 = 0;
  do {
    iVar6 = 0;
    if (0 < *(int *)(unaff_RDI + 0x18)) {
      do {
        lVar9 = *(int64_t *)(unaff_RDI + 0x40);
        for (piVar1 = *(int **)(lVar9 + ((uint64_t)(int64_t)(iVar11 + iVar6) %
                                        (uint64_t)*(uint *)(unaff_RDI + 0x48)) * 8);
            piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 4)) {
          if ((unaff_ESI == *piVar1) && (iVar6 == piVar1[1])) {
            lVar5 = *(int64_t *)(unaff_RDI + 0x48);
            piStackX_20 = piVar1;
            ppiVar4 = &piStackX_20;
            goto LAB_1803b2492;
          }
        }
        lVar5 = *(int64_t *)(unaff_RDI + 0x48);
        in_stack_00000030 = *(int **)(lVar9 + lVar5 * 8);
        ppiVar4 = &stack0x00000030;
        in_stack_00000038 = lVar9 + lVar5 * 8;
LAB_1803b2492:
        if ((*ppiVar4 != *(int **)(lVar9 + lVar5 * 8)) &&
           (plVar2 = *(int64_t **)(*ppiVar4 + 2), plVar2 != (int64_t *)0x0)) {
          (**(code **)(*plVar2 + 0x20))
                    (plVar2,*(int64_t *)(unaff_RDI + 0x68),
                     (int64_t)iVar6 * 0x68 +
                     *(int64_t *)
                      (*(int64_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x68) + 0x2908) + 0x40)
                      + lVar7));
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(unaff_RDI + 0x18));
    }
    unaff_ESI = unaff_ESI + 1;
    iVar11 = iVar11 + 1000;
    lVar7 = lVar7 + 8;
    if (*(int *)(unaff_RDI + 0x14) <= unaff_ESI) {
      lVar7 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x68) + 0x2908);
      *(int32_t *)(lVar7 + 0x34) = 0x7f7fffff;
      *(int32_t *)(lVar7 + 0x38) = 0xff7fffff;
      if (0 < (int)*(uint *)(lVar7 + 0xc)) {
        lVar9 = 0;
        uVar10 = (uint64_t)*(uint *)(lVar7 + 0xc);
        do {
          if (0 < (int)*(uint *)(lVar7 + 0x10)) {
            lVar5 = 0;
            uVar8 = (uint64_t)*(uint *)(lVar7 + 0x10);
            fVar14 = *(float *)(lVar7 + 0x34);
            fVar15 = *(float *)(lVar7 + 0x38);
            do {
              lVar3 = *(int64_t *)(lVar9 + *(int64_t *)(lVar7 + 0x40));
              fVar12 = *(float *)(lVar5 + 0x14 + lVar3);
              if (fVar14 <= fVar12) {
                fVar12 = fVar14;
              }
              *(float *)(lVar7 + 0x34) = fVar12;
              fVar13 = *(float *)(lVar5 + 0x18 + lVar3);
              if (fVar13 <= fVar15) {
                fVar13 = fVar15;
              }
              *(float *)(lVar7 + 0x38) = fVar13;
              uVar8 = uVar8 - 1;
              lVar5 = lVar5 + 0x68;
              fVar14 = fVar12;
              fVar15 = fVar13;
            } while (uVar8 != 0);
          }
          lVar9 = lVar9 + 8;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      return;
    }
  } while( true );
}






// 函数: void FUN_1803b24f0(void)
void FUN_1803b24f0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RDI;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar1 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x68) + 0x2908);
  *(int32_t *)(lVar1 + 0x34) = 0x7f7fffff;
  *(int32_t *)(lVar1 + 0x38) = 0xff7fffff;
  if (0 < (int)*(uint *)(lVar1 + 0xc)) {
    lVar5 = 0;
    uVar6 = (uint64_t)*(uint *)(lVar1 + 0xc);
    do {
      if (0 < (int)*(uint *)(lVar1 + 0x10)) {
        lVar3 = 0;
        uVar4 = (uint64_t)*(uint *)(lVar1 + 0x10);
        fVar9 = *(float *)(lVar1 + 0x34);
        fVar10 = *(float *)(lVar1 + 0x38);
        do {
          lVar2 = *(int64_t *)(lVar5 + *(int64_t *)(lVar1 + 0x40));
          fVar7 = *(float *)(lVar3 + 0x14 + lVar2);
          if (fVar9 <= fVar7) {
            fVar7 = fVar9;
          }
          *(float *)(lVar1 + 0x34) = fVar7;
          fVar8 = *(float *)(lVar3 + 0x18 + lVar2);
          if (fVar8 <= fVar10) {
            fVar8 = fVar10;
          }
          *(float *)(lVar1 + 0x38) = fVar8;
          uVar4 = uVar4 - 1;
          lVar3 = lVar3 + 0x68;
          fVar9 = fVar7;
          fVar10 = fVar8;
        } while (uVar4 != 0);
      }
      lVar5 = lVar5 + 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}






// 函数: void FUN_1803b251a(uint64_t param_1,int64_t param_2)
void FUN_1803b251a(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  uint in_EAX;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar4 = 0;
  uVar5 = (uint64_t)in_EAX;
  do {
    if (0 < (int)*(uint *)(param_2 + 0x10)) {
      lVar2 = 0;
      uVar3 = (uint64_t)*(uint *)(param_2 + 0x10);
      fVar8 = *(float *)(param_2 + 0x34);
      fVar9 = *(float *)(param_2 + 0x38);
      do {
        lVar1 = *(int64_t *)(lVar4 + *(int64_t *)(param_2 + 0x40));
        fVar6 = *(float *)(lVar2 + 0x14 + lVar1);
        if (fVar8 <= fVar6) {
          fVar6 = fVar8;
        }
        *(float *)(param_2 + 0x34) = fVar6;
        fVar7 = *(float *)(lVar2 + 0x18 + lVar1);
        if (fVar7 <= fVar9) {
          fVar7 = fVar9;
        }
        *(float *)(param_2 + 0x38) = fVar7;
        uVar3 = uVar3 - 1;
        lVar2 = lVar2 + 0x68;
        fVar8 = fVar6;
        fVar9 = fVar7;
      } while (uVar3 != 0);
    }
    lVar4 = lVar4 + 8;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  return;
}






// 函数: void FUN_1803b2582(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_1803b2582(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  uint64_t param_5,int64_t param_6,int64_t param_7)

{
  int64_t lVar1;
  int64_t *plVar2;
  int *in_RAX;
  int64_t lVar3;
  int64_t lVar4;
  int unaff_EBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  int64_t unaff_RDI;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int unaff_R14D;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int *piVar12;
  
code_r0x0001803b2582:
  lVar4 = *(int64_t *)(unaff_RDI + 0x48);
  plVar2 = (int64_t *)&stack0x00000020;
  param_5 = param_1;
  piVar12 = in_RAX;
  do {
    if ((*plVar2 != *(int64_t *)(param_3 + lVar4 * 8)) &&
       (plVar2 = *(int64_t **)(*plVar2 + 8), plVar2 != (int64_t *)0x0)) {
      lVar4 = *(int64_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x68) + 0x2908) + 0x40);
      (**(code **)(*plVar2 + 0x20))
                (plVar2,*(int64_t *)(unaff_RDI + 0x68),
                 (int64_t)unaff_EBX * 0x68 + *(int64_t *)(lVar4 + unaff_RBP),lVar4,piVar12);
    }
    unaff_EBX = unaff_EBX + 1;
    if (*(int *)(unaff_RDI + 0x18) <= unaff_EBX) {
      do {
        unaff_ESI = unaff_ESI + 1;
        unaff_R14D = unaff_R14D + 1000;
        unaff_RBP = unaff_RBP + 8;
        if (*(int *)(unaff_RDI + 0x14) <= unaff_ESI) {
          lVar4 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x68) + 0x2908);
          *(int32_t *)(lVar4 + 0x34) = 0x7f7fffff;
          *(int32_t *)(lVar4 + 0x38) = 0xff7fffff;
          if (0 < (int)*(uint *)(lVar4 + 0xc)) {
            lVar6 = 0;
            uVar7 = (uint64_t)*(uint *)(lVar4 + 0xc);
            do {
              if (0 < (int)*(uint *)(lVar4 + 0x10)) {
                lVar3 = 0;
                uVar5 = (uint64_t)*(uint *)(lVar4 + 0x10);
                fVar10 = *(float *)(lVar4 + 0x34);
                fVar11 = *(float *)(lVar4 + 0x38);
                do {
                  lVar1 = *(int64_t *)(lVar6 + *(int64_t *)(lVar4 + 0x40));
                  fVar8 = *(float *)(lVar3 + 0x14 + lVar1);
                  if (fVar10 <= fVar8) {
                    fVar8 = fVar10;
                  }
                  *(float *)(lVar4 + 0x34) = fVar8;
                  fVar9 = *(float *)(lVar3 + 0x18 + lVar1);
                  if (fVar9 <= fVar11) {
                    fVar9 = fVar11;
                  }
                  *(float *)(lVar4 + 0x38) = fVar9;
                  uVar5 = uVar5 - 1;
                  lVar3 = lVar3 + 0x68;
                  fVar10 = fVar8;
                  fVar11 = fVar9;
                } while (uVar5 != 0);
              }
              lVar6 = lVar6 + 8;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          return;
        }
        unaff_EBX = 0;
      } while (*(int *)(unaff_RDI + 0x18) < 1);
    }
    param_3 = *(int64_t *)(unaff_RDI + 0x40);
    uVar7 = (uint64_t)(int64_t)(unaff_R14D + unaff_EBX) % (uint64_t)*(uint *)(unaff_RDI + 0x48);
    param_1 = param_3 + uVar7 * 8;
    for (in_RAX = *(int **)(param_3 + uVar7 * 8); in_RAX != (int *)0x0;
        in_RAX = *(int **)(in_RAX + 4)) {
      if ((unaff_ESI == *in_RAX) && (unaff_EBX == in_RAX[1])) goto code_r0x0001803b2582;
    }
    lVar4 = *(int64_t *)(unaff_RDI + 0x48);
    param_6 = *(int64_t *)(param_3 + lVar4 * 8);
    plVar2 = &param_6;
    param_7 = param_3 + lVar4 * 8;
  } while( true );
}






// 函数: void FUN_1803b25a0(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_1803b25a0(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  int iVar8;
  uint64_t uVar9;
  int32_t uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  
  FUN_1803986d0(param_3 + 0x607e0);
  *(int32_t *)(param_2 + 0x40) = 0xff7fffff;
  *(int32_t *)(param_2 + 0x44) = 0xff7fffff;
  *(int32_t *)(param_2 + 0x48) = 0xff7fffff;
  *(int32_t *)(param_2 + 0x4c) = 0xff7fffff;
  *(int32_t *)(param_2 + 0x30) = 0x7f7fffff;
  *(int32_t *)(param_2 + 0x34) = 0x7f7fffff;
  *(int32_t *)(param_2 + 0x38) = 0x7f7fffff;
  *(int32_t *)(param_2 + 0x3c) = 0x7f7fffff;
  FUN_1801983b0(param_3);
  iVar8 = 0;
  fVar13 = 3.4028235e+38;
  fVar12 = -3.4028235e+38;
  *(uint64_t *)(param_3 + 0x3860) = 0;
  *(uint64_t *)(param_3 + 0x3868) = 0x7f7fffff00000000;
  if (0 < *(int *)(param_1 + 0x14)) {
    uVar6 = 0;
    do {
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 0x18)) {
        lVar1 = *(int64_t *)(param_1 + 0x40);
        lVar2 = *(int64_t *)(param_1 + 0x48);
        uVar9 = uVar6;
        do {
          uVar5 = uVar9 % (uint64_t)*(uint *)(param_1 + 0x48);
          for (uStack_28 = *(int **)(lVar1 + uVar5 * 8); uStack_28 != (int *)0x0;
              uStack_28 = *(int **)(uStack_28 + 4)) {
            if ((iVar8 == *uStack_28) && (iVar7 == uStack_28[1])) {
              puVar4 = &uStack_28;
              uStack_20 = lVar1 + uVar5 * 8;
              goto LAB_1803b2696;
            }
          }
          uStack_38 = *(uint64_t *)(lVar1 + lVar2 * 8);
          puVar4 = &uStack_38;
          uStack_30 = lVar1 + lVar2 * 8;
LAB_1803b2696:
          if ((*puVar4 != *(uint64_t *)(lVar1 + lVar2 * 8)) &&
             (lVar3 = *(int64_t *)(*puVar4 + 8), lVar3 != 0)) {
            if (*(float *)(lVar3 + 0x78) <= fVar13) {
              fVar13 = *(float *)(lVar3 + 0x78);
            }
            if (fVar12 <= *(float *)(lVar3 + 0x7c)) {
              fVar12 = *(float *)(lVar3 + 0x7c);
            }
          }
          iVar7 = iVar7 + 1;
          uVar9 = uVar9 + 1;
        } while (iVar7 < *(int *)(param_1 + 0x18));
      }
      iVar8 = iVar8 + 1;
      uVar6 = uVar6 + 1000;
    } while (iVar8 < *(int *)(param_1 + 0x14));
  }
  fVar11 = *(float *)(param_1 + 0x20) * 0.01;
  uStack_28 = (int *)CONCAT44(fVar11 + *(float *)(param_1 + 0x24),
                              *(float *)(param_1 + 0x20) + fVar11);
  uStack_38 = CONCAT44(fVar11,fVar11) ^ 0x8000000080000000;
  uStack_20 = CONCAT44(0x7f7fffff,fVar11 + fVar12);
  uStack_30 = CONCAT44(0x7f7fffff,fVar13 - fVar11);
  uVar10 = FUN_1802e4210(param_2,&uStack_38);
  FUN_1802e4210(uVar10,&uStack_28);
  return;
}






// 函数: void FUN_1803b261b(void)
void FUN_1803b261b(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int iVar6;
  int in_R9D;
  uint64_t uVar7;
  int64_t unaff_R14;
  int unaff_R15D;
  int32_t uVar8;
  float fVar9;
  float fVar10;
  float in_XMM4_Da;
  float in_XMM5_Da;
  int64_t lStack0000000000000028;
  int *piStack0000000000000030;
  int64_t lStack0000000000000038;
  
  uVar5 = 0;
  do {
    iVar6 = 0;
    if (0 < *(int *)(unaff_R14 + 0x18)) {
      lVar1 = *(int64_t *)(unaff_R14 + 0x40);
      uVar7 = uVar5;
      do {
        uVar4 = uVar7 % (uint64_t)*(uint *)(unaff_R14 + 0x48);
        for (piStack0000000000000030 = *(int **)(lVar1 + uVar4 * 8);
            piStack0000000000000030 != (int *)0x0;
            piStack0000000000000030 = *(int **)(piStack0000000000000030 + 4)) {
          if ((in_R9D == *piStack0000000000000030) && (iVar6 == piStack0000000000000030[1])) {
            plVar3 = (int64_t *)&stack0x00000030;
            lStack0000000000000038 = lVar1 + uVar4 * 8;
            goto LAB_1803b2696;
          }
        }
        plVar3 = (int64_t *)&stack0x00000020;
        lStack0000000000000028 = lVar1 + *(int64_t *)(unaff_R14 + 0x48) * 8;
LAB_1803b2696:
        if ((*plVar3 != *(int64_t *)(lVar1 + *(int64_t *)(unaff_R14 + 0x48) * 8)) &&
           (lVar2 = *(int64_t *)(*plVar3 + 8), lVar2 != 0)) {
          if (*(float *)(lVar2 + 0x78) <= in_XMM5_Da) {
            in_XMM5_Da = *(float *)(lVar2 + 0x78);
          }
          if (in_XMM4_Da <= *(float *)(lVar2 + 0x7c)) {
            in_XMM4_Da = *(float *)(lVar2 + 0x7c);
          }
        }
        iVar6 = iVar6 + 1;
        uVar7 = uVar7 + 1;
      } while (iVar6 < *(int *)(unaff_R14 + 0x18));
    }
    in_R9D = in_R9D + 1;
    uVar5 = uVar5 + 1000;
    if (unaff_R15D <= in_R9D) {
      fVar10 = *(float *)(unaff_R14 + 0x20) * 0.01;
      fVar9 = *(float *)(unaff_R14 + 0x20) + fVar10;
      piStack0000000000000030 = (int *)CONCAT44(fVar10 + *(float *)(unaff_R14 + 0x24),fVar9);
      lStack0000000000000038 = CONCAT44(0x7f7fffff,fVar10 + in_XMM4_Da);
      lStack0000000000000028 = CONCAT44(0x7f7fffff,in_XMM5_Da - fVar10);
      uVar8 = FUN_1802e4210(fVar10 + in_XMM4_Da,&stack0x00000020,fVar9,in_R9D,
                            CONCAT44(fVar10,fVar10) ^ 0x8000000080000000);
      FUN_1802e4210(uVar8,&stack0x00000030);
      return;
    }
  } while( true );
}






// 函数: void FUN_1803b26ef(void)
void FUN_1803b26ef(void)

{
  int64_t unaff_R14;
  int32_t uVar1;
  float fVar2;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float fStack0000000000000028;
  int32_t uStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  int32_t uStack000000000000003c;
  
  uStack000000000000003c = 0x7f7fffff;
  fVar2 = *(float *)(unaff_R14 + 0x20) * 0.01;
  uStack000000000000002c = 0x7f7fffff;
  fStack0000000000000030 = *(float *)(unaff_R14 + 0x20) + fVar2;
  fStack0000000000000034 = fVar2 + *(float *)(unaff_R14 + 0x24);
  fStack0000000000000028 = in_XMM5_Da - fVar2;
  fStack0000000000000038 = fVar2 + in_XMM4_Da;
  uVar1 = FUN_1802e4210(fStack0000000000000038,&stack0x00000020,fStack0000000000000030,fVar2,-fVar2)
  ;
  FUN_1802e4210(uVar1,&stack0x00000030);
  return;
}






// 函数: void FUN_1803b277d(int64_t param_1,uint64_t param_2,int param_3,int param_4)
void FUN_1803b277d(int64_t param_1,uint64_t param_2,int param_3,int param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int *in_RAX;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int unaff_EDI;
  uint64_t in_R10;
  int64_t in_R11;
  int64_t unaff_R14;
  int unaff_R15D;
  int32_t uVar4;
  float fVar5;
  float fVar6;
  float in_XMM4_Da;
  float in_XMM5_Da;
  int64_t lStack0000000000000028;
  int *piStack0000000000000030;
  int64_t lStack0000000000000038;
  
code_r0x0001803b277d:
  piStack0000000000000030 = in_RAX;
  plVar3 = (int64_t *)&stack0x00000030;
  lStack0000000000000038 = param_1;
  do {
    if ((*plVar3 != *(int64_t *)(in_R11 + unaff_RBX * 8)) &&
       (lVar1 = *(int64_t *)(*plVar3 + 8), lVar1 != 0)) {
      if (*(float *)(lVar1 + 0x78) <= in_XMM5_Da) {
        in_XMM5_Da = *(float *)(lVar1 + 0x78);
      }
      if (in_XMM4_Da <= *(float *)(lVar1 + 0x7c)) {
        in_XMM4_Da = *(float *)(lVar1 + 0x7c);
      }
    }
    param_3 = param_3 + 1;
    in_R10 = in_R10 + 1;
    if (unaff_EDI <= param_3) {
      do {
        param_4 = param_4 + 1;
        unaff_RBP = unaff_RBP + 1000;
        if (unaff_R15D <= param_4) {
          fVar6 = *(float *)(unaff_R14 + 0x20) * 0.01;
          fVar5 = *(float *)(unaff_R14 + 0x20) + fVar6;
          piStack0000000000000030 = (int *)CONCAT44(fVar6 + *(float *)(unaff_R14 + 0x24),fVar5);
          lStack0000000000000038 = CONCAT44(0x7f7fffff,fVar6 + in_XMM4_Da);
          lStack0000000000000028 = CONCAT44(0x7f7fffff,in_XMM5_Da - fVar6);
          uVar4 = FUN_1802e4210(fVar6 + in_XMM4_Da,&stack0x00000020,fVar5,param_4,
                                CONCAT44(fVar6,fVar6) ^ 0x8000000080000000);
          FUN_1802e4210(uVar4,&stack0x00000030);
          return;
        }
        param_3 = 0;
      } while (unaff_EDI < 1);
      unaff_RSI = (uint64_t)*(uint *)(unaff_R14 + 0x48);
      in_R11 = *(int64_t *)(unaff_R14 + 0x40);
      unaff_RBX = *(int64_t *)(unaff_R14 + 0x48);
      in_R10 = unaff_RBP;
    }
    uVar2 = in_R10 % unaff_RSI & 0xffffffff;
    param_1 = in_R11 + uVar2 * 8;
    for (in_RAX = *(int **)(in_R11 + uVar2 * 8); in_RAX != (int *)0x0;
        in_RAX = *(int **)(in_RAX + 4)) {
      if ((param_4 == *in_RAX) && (param_3 == in_RAX[1])) goto code_r0x0001803b277d;
    }
    plVar3 = (int64_t *)&stack0x00000020;
    lStack0000000000000028 = in_R11 + unaff_RBX * 8;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b27a0(int64_t param_1)
void FUN_1803b27a0(int64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int8_t *puVar6;
  int iVar7;
  int8_t auStack_258 [32];
  void *puStack_238;
  int8_t *puStack_230;
  uint uStack_228;
  uint64_t uStack_220;
  void **ppuStack_218;
  void *puStack_210;
  int64_t lStack_208;
  int iStack_200;
  int32_t uStack_1f8;
  uint64_t uStack_1f0;
  uint64_t uStack_1e8;
  uint64_t uStack_1e0;
  void *puStack_1d8;
  int8_t *puStack_1d0;
  int32_t uStack_1c8;
  int8_t auStack_1c0 [256];
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  int8_t uStack_98;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  code *pcStack_80;
  code *pcStack_78;
  int64_t alStack_70 [2];
  code *pcStack_60;
  code *pcStack_58;
  uint64_t uStack_28;
  
  uStack_1e0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_258;
  *(int8_t *)(param_1 + 0x1c42) = 1;
  LOCK();
  *(int8_t *)(param_1 + 0x1c40) = 0;
  UNLOCK();
  LOCK();
  *(int8_t *)(param_1 + 0x1c41) = 0;
  UNLOCK();
  SystemCore_NetworkHandler0(&puStack_210,*(int64_t *)(param_1 + 0x68) + 0x608f0);
  puStack_238 = &system_data_buffer_ptr;
  uStack_220 = 0;
  puStack_230 = (int8_t *)0x0;
  uStack_228 = 0;
  CoreMemoryPoolProcessor(&puStack_238,iStack_200);
  if (iStack_200 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_230,lStack_208,iStack_200 + 1);
  }
  if (lStack_208 != 0) {
    uStack_228 = 0;
    if (puStack_230 != (int8_t *)0x0) {
      *puStack_230 = 0;
    }
    uStack_220 = uStack_220 & 0xffffffff;
  }
  iVar7 = uStack_228 + 0xc;
  CoreMemoryPoolProcessor(&puStack_238,iVar7);
  puVar5 = (uint64_t *)(puStack_230 + uStack_228);
  *puVar5 = 0x6e6961727265742f;
  *(int32_t *)(puVar5 + 1) = 0x6e69622e;
  *(int8_t *)((int64_t)puVar5 + 0xc) = 0;
  uStack_228 = iVar7;
  uVar3 = FUN_18062bed0(&puStack_238);
  cVar2 = FUN_180624af0(&puStack_238);
  if (cVar2 == '\0') {
    LOCK();
    *(int8_t *)(param_1 + 0x1c41) = 0;
    UNLOCK();
    LOCK();
    *(int8_t *)(param_1 + 0x1c40) = 1;
    UNLOCK();
  }
  else {
    puStack_1d8 = &unknown_var_2008_ptr;
    puStack_1d0 = auStack_1c0;
    uStack_1c8 = 0;
    auStack_1c0[0] = 0;
    pcStack_80 = (code *)0x0;
    pcStack_78 = _guard_check_icall;
    ppuStack_218 = (void **)alStack_70;
    pcStack_60 = (code *)0x0;
    pcStack_58 = _guard_check_icall;
    uStack_a0 = 0xffffffffffffffff;
    uStack_b8 = 0xffffffffffffffff;
    uStack_c0 = 0xffffffffffffffff;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_98 = 0;
    puVar6 = &system_buffer_ptr;
    if (puStack_230 != (int8_t *)0x0) {
      puVar6 = puStack_230;
    }
    uStack_1f0 = param_1;
    uStack_1e8 = uVar3;
    FUN_1800693f0(&puStack_1d8,puVar6);
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b8 = uVar3;
    if (pcStack_80 != (code *)0x0) {
      (*pcStack_80)(&uStack_90,0,0);
    }
    pcStack_80 = (code *)&unknown_var_8896_ptr;
    pcStack_78 = FUN_1803ba0b0;
    uStack_90 = (int32_t)uStack_1f0;
    uStack_8c = uStack_1f0._4_4_;
    uStack_88 = (int32_t)uStack_1e8;
    uStack_84 = uStack_1e8._4_4_;
    if (pcStack_60 != (code *)0x0) {
      (*pcStack_60)(alStack_70,0,0);
    }
    pcStack_60 = (code *)&unknown_var_8640_ptr;
    pcStack_58 = (code *)&unknown_var_8608_ptr;
    lVar1 = *(int64_t *)(system_system_data_memory + 8);
    alStack_70[0] = param_1;
    lVar4 = FUN_18006d0b0(lVar1 + 200);
    if (lVar4 != 0) {
      FUN_18006d6c0(lVar4,&puStack_1d8);
    }
    iVar7 = _Cnd_signal(lVar1 + 0x330);
    if (iVar7 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar7);
    }
    ppuStack_218 = (void **)alStack_70;
    if (pcStack_60 != (code *)0x0) {
      (*pcStack_60)(alStack_70,0,0);
    }
    ppuStack_218 = (void **)&uStack_90;
    if (pcStack_80 != (code *)0x0) {
      (*pcStack_80)(&uStack_90,0,0);
    }
    ppuStack_218 = &puStack_1d8;
    puStack_1d8 = &system_state_ptr;
  }
  puStack_238 = &system_data_buffer_ptr;
  if (puStack_230 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  puStack_230 = (int8_t *)0x0;
  uStack_220 = uStack_220 & 0xffffffff00000000;
  puStack_238 = &system_state_ptr;
  puStack_210 = &system_data_buffer_ptr;
  if (lStack_208 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_208 = 0;
  uStack_1f8 = 0;
  puStack_210 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_258);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b2b80(int64_t param_1)
void FUN_1803b2b80(int64_t param_1)

{
  int8_t auStack_268 [32];
  uint64_t uStack_248;
  int64_t *plStack_240;
  int64_t *plStack_230;
  int64_t alStack_100 [2];
  void *puStack_f0;
  void *puStack_e8;
  uint64_t uStack_c0;
  int8_t auStack_a8 [112];
  uint64_t uStack_38;
  
  uStack_c0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_268;
  plStack_230 = alStack_100;
  puStack_f0 = &unknown_var_8544_ptr;
  puStack_e8 = &unknown_var_8528_ptr;
  plStack_240 = alStack_100;
  uStack_248 = 0xffffffffffffffff;
  alStack_100[0] = param_1;
  FUN_18015b810(param_1,0,*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x14),1);
                    // WARNING: Subroutine does not return
  memset(auStack_a8,0,0x6c);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




