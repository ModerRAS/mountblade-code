#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part036.c - 2 个函数

// 函数: void FUN_1808bd674(void)
void FUN_1808bd674(void)

{
  return;
}



uint64_t FUN_1808bd690(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint64_t uVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    plVar16 = (longlong *)0x0;
    plVar10 = (longlong *)(*(longlong *)(param_1 + 8) + -0x60);
    if (*(longlong *)(param_1 + 8) == 0) {
      plVar10 = plVar16;
    }
    plVar14 = plVar16;
    if (plVar10 != (longlong *)0x0) {
      plVar14 = plVar10 + 0xc;
    }
LAB_1808bd6e0:
    do {
      if (plVar14 == (longlong *)(param_1 + 8)) goto LAB_1808bd87b;
      plVar10 = plVar14 + -0xb;
      if (plVar14 == (longlong *)0x0) {
        plVar10 = (longlong *)&system_data_0008;
      }
      lVar7 = (**(code **)*plVar10)();
      uVar2 = *(uint *)(lVar7 + 0x10);
      uVar3 = *(uint *)(lVar7 + 0x14);
      lVar6 = *(longlong *)(lVar7 + 0x10);
      uVar4 = *(uint *)(lVar7 + 0x18);
      uVar5 = *(uint *)(lVar7 + 0x1c);
      lVar7 = *(longlong *)(lVar7 + 0x18);
      if (plVar14 == (longlong *)(param_1 + 8)) break;
      lVar1 = *plVar14;
      plVar10 = (longlong *)(lVar1 + -0x60);
      if (lVar1 == 0) {
        plVar10 = plVar16;
      }
      plVar15 = plVar10 + 0xc;
      if (plVar10 == (longlong *)0x0) {
        plVar15 = plVar16;
      }
      *(longlong *)plVar14[1] = lVar1;
      *(longlong *)(*plVar14 + 8) = plVar14[1];
      plVar14[1] = (longlong)plVar14;
      *plVar14 = (longlong)plVar14;
      plVar10 = *(longlong **)(param_1 + 0x60);
      plVar13 = plVar16;
      if (plVar10 != (longlong *)0x0) {
        FUN_180768360(plVar10);
        plVar13 = plVar10;
      }
      if (((*(int *)(param_1 + 0x8c) != 0) && (*(int *)(param_1 + 0x70) != 0)) &&
         (iVar11 = *(int *)(*(longlong *)(param_1 + 0x68) +
                           (longlong)
                           (int)((uVar2 ^ uVar3 ^ uVar5 ^ uVar4) & *(int *)(param_1 + 0x70) - 1U) *
                           4), iVar11 != -1)) {
        do {
          plVar8 = (longlong *)((longlong)iVar11 * 0x20 + *(longlong *)(param_1 + 0x78));
          if ((*plVar8 == lVar6) && (plVar8[1] == lVar7)) {
            plVar12 = (longlong *)plVar8[3];
            if ((longlong *)plVar8[3] != (longlong *)0x0) goto LAB_1808bd830;
            break;
          }
          iVar11 = (int)plVar8[2];
        } while (iVar11 != -1);
      }
      plVar12 = plVar16;
      if (((*(int *)(param_1 + 0x5c) != 0) && (*(int *)(param_1 + 0x40) != 0)) &&
         (iVar11 = *(int *)(*(longlong *)(param_1 + 0x38) +
                           (longlong)
                           (int)((uVar2 ^ uVar3 ^ uVar5 ^ uVar4) & *(int *)(param_1 + 0x40) - 1U) *
                           4), iVar11 != -1)) {
        do {
          plVar8 = (longlong *)((longlong)iVar11 * 0x20 + *(longlong *)(param_1 + 0x48));
          if ((*plVar8 == lVar6) && (plVar8[1] == lVar7)) {
            plVar12 = (longlong *)plVar8[3];
            break;
          }
          iVar11 = (int)plVar8[2];
        } while (iVar11 != -1);
      }
LAB_1808bd830:
      if (plVar10 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(plVar13);
      }
      if (plVar12 == (longlong *)0x0) break;
      plVar14[0x4e] = (longlong)plVar12;
      lVar7 = (**(code **)plVar14[-0xb])(plVar14 + -0xb);
      plVar14 = plVar15;
      if (plVar12[10] == 0) {
        plVar12[10] = lVar7;
        goto LAB_1808bd6e0;
      }
    } while (plVar12[10] == lVar7);
    uVar9 = 0x1c;
  }
  else {
LAB_1808bd87b:
    uVar9 = 0;
  }
  return uVar9;
}



ulonglong FUN_1808bd910(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar9 = 0;
  uVar4 = uVar9;
  for (uVar6 = uVar9;
      ((-1 < (longlong)uVar6 && ((int)uVar4 < *(int *)((longlong)param_1 + 0xc))) &&
      (*(longlong *)(*param_1 + uVar6 * 8) == 0)); uVar6 = uVar6 + 1) {
    uVar4 = (ulonglong)((int)uVar4 + 1);
  }
  while( true ) {
    iVar2 = (int)uVar4;
    if (((iVar2 < 0) || (*(int *)((longlong)param_1 + 0xc) <= iVar2)) ||
       (lVar1 = *param_1, *(longlong *)(lVar1 + (longlong)iVar2 * 8) == 0)) break;
    uVar8 = (uint)uVar9 + 1;
    if (3 < *(int *)(*(longlong *)(lVar1 + (longlong)iVar2 * 8) + 0x2e4) - 1U) {
      uVar8 = (uint)uVar9;
    }
    uVar3 = iVar2 + 1;
    lVar5 = (longlong)(int)uVar3;
    for (plVar7 = (longlong *)(lVar1 + lVar5 * 8);
        ((uVar4 = (ulonglong)uVar3, -1 < lVar5 && ((int)uVar3 < *(int *)((longlong)param_1 + 0xc)))
        && (*plVar7 == 0)); plVar7 = plVar7 + 1) {
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 1;
    }
    uVar9 = (ulonglong)uVar8;
  }
  return uVar9;
}



int FUN_1808bd9b0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
  *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 1;
  *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
  *(int *)(param_1 + 0x548) = *(int *)(param_1 + 0x548) + 1;
  bVar1 = false;
  bVar2 = false;
  bVar6 = false;
  bVar5 = false;
  iVar3 = FUN_1808b6ab0(param_1 + 0x3c8,param_2,*(int32_t *)(param_1 + 0x548),param_3,param_4);
  if (iVar3 == 0) {
    iVar4 = 0x1c;
    iVar3 = iVar4;
    bVar2 = false;
    if (0 < *(int *)(param_1 + 0x98)) {
      if ((*(int *)(param_1 + 0x98) != 1) || (iVar3 = FUN_1808501b0(param_1 + 0x38), iVar3 == 0)) {
        iVar3 = 0;
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
      }
      if (iVar3 == 0) {
        bVar2 = true;
      }
    }
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    if (iVar3 == 0) {
      iVar3 = iVar4;
      if (0 < *(int *)(param_1 + 0x168)) {
        if ((*(int *)(param_1 + 0x168) != 1) || (iVar3 = FUN_18084f7f0(param_1 + 0x108), iVar3 == 0)
           ) {
          iVar3 = 0;
          *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
        }
        bVar5 = iVar3 == 0;
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      if (iVar3 == 0) {
        iVar3 = iVar4;
        if (0 < *(int *)(param_1 + 0x1d0)) {
          if ((*(int *)(param_1 + 0x1d0) != 1) ||
             (iVar3 = FUN_18084fcd0(param_1 + 0x170), iVar3 == 0)) {
            iVar3 = 0;
            *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + -1;
          }
          bVar6 = iVar3 == 0;
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        if (iVar3 == 0) {
          if (0 < *(int *)(param_1 + 0x238)) {
            if ((*(int *)(param_1 + 0x238) != 1) ||
               (iVar4 = FUN_180850690(param_1 + 0x1d8), iVar4 == 0)) {
              *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
              iVar4 = 0;
            }
            bVar1 = false;
            if (iVar4 == 0) {
              bVar1 = true;
            }
          }
          iVar3 = iVar4;
          if (iVar4 == 0) {
            iVar3 = 0;
          }
          if ((iVar3 == 0) && ((iVar3 = FUN_1808bd690(param_1), iVar3 == 0 || (iVar3 == 0)))) {
            iVar3 = 0;
          }
        }
      }
    }
  }
  if (!bVar1) {
    *(int32_t *)(param_1 + 0x238) = 0;
    FUN_18084f560(param_1 + 0x208);
  }
  if (!bVar5) {
    *(int32_t *)(param_1 + 0x168) = 0;
    FUN_18084f040(param_1 + 0x138);
  }
  if (!bVar6) {
    *(int32_t *)(param_1 + 0x1d0) = 0;
    FUN_18084f040(param_1 + 0x1a0);
  }
  if (!bVar2) {
    *(int32_t *)(param_1 + 0x98) = 0;
    FUN_18084f2d0(param_1 + 0x68);
  }
  return iVar3;
}



int FUN_1808bd9bd(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint64_t unaff_RBP;
  int iVar4;
  uint64_t unaff_RDI;
  longlong in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  bool bVar5;
  bool bVar6;
  uint64_t in_stack_00000070;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBP;
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
  *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 1;
  *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
  *(int *)(param_1 + 0x548) = *(int *)(param_1 + 0x548) + 1;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RDI;
  *(uint64_t *)(in_R11 + 0x20) = unaff_R12;
  bVar1 = false;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
  *(uint64_t *)(in_R11 + -0x48) = param_4;
  bVar2 = false;
  bVar6 = false;
  bVar5 = false;
  iVar3 = FUN_1808b6ab0(param_1 + 0x3c8,param_2,*(int32_t *)(param_1 + 0x548),param_3);
  if (iVar3 == 0) {
    iVar4 = 0x1c;
    iVar3 = iVar4;
    bVar2 = false;
    if (0 < *(int *)(param_1 + 0x98)) {
      if ((*(int *)(param_1 + 0x98) != 1) || (iVar3 = FUN_1808501b0(param_1 + 0x38), iVar3 == 0)) {
        iVar3 = 0;
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
      }
      if (iVar3 == 0) {
        bVar2 = true;
      }
    }
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    if (iVar3 == 0) {
      iVar3 = iVar4;
      if (0 < *(int *)(param_1 + 0x168)) {
        if ((*(int *)(param_1 + 0x168) != 1) || (iVar3 = FUN_18084f7f0(param_1 + 0x108), iVar3 == 0)
           ) {
          iVar3 = 0;
          *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
        }
        bVar5 = iVar3 == 0;
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      if (iVar3 == 0) {
        iVar3 = iVar4;
        if (0 < *(int *)(param_1 + 0x1d0)) {
          if ((*(int *)(param_1 + 0x1d0) != 1) ||
             (iVar3 = FUN_18084fcd0(param_1 + 0x170), iVar3 == 0)) {
            iVar3 = 0;
            *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + -1;
          }
          bVar6 = iVar3 == 0;
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        if (iVar3 == 0) {
          if (0 < *(int *)(param_1 + 0x238)) {
            if ((*(int *)(param_1 + 0x238) != 1) ||
               (iVar4 = FUN_180850690(param_1 + 0x1d8), iVar4 == 0)) {
              *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
              iVar4 = 0;
            }
            bVar1 = false;
            if (iVar4 == 0) {
              bVar1 = true;
            }
          }
          iVar3 = iVar4;
          if (iVar4 == 0) {
            iVar3 = 0;
          }
          if ((iVar3 == 0) &&
             ((iVar3 = FUN_1808bd690(in_stack_00000070), iVar3 == 0 || (iVar3 == 0)))) {
            iVar3 = 0;
          }
        }
      }
    }
  }
  if (!bVar1) {
    *(int32_t *)(param_1 + 0x238) = 0;
    FUN_18084f560(param_1 + 0x208);
  }
  if (!bVar5) {
    *(int32_t *)(param_1 + 0x168) = 0;
    FUN_18084f040(param_1 + 0x138);
  }
  if (!bVar6) {
    *(int32_t *)(param_1 + 0x1d0) = 0;
    FUN_18084f040(param_1 + 0x1a0);
  }
  if (!bVar2) {
    *(int32_t *)(param_1 + 0x98) = 0;
    FUN_18084f2d0(param_1 + 0x68);
  }
  return iVar3;
}



int FUN_1808bd9ea(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong in_RAX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int iVar4;
  uint64_t unaff_RDI;
  longlong in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  bool bVar5;
  bool bVar6;
  uint64_t in_stack_00000070;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RDI;
  *(uint64_t *)(in_R11 + 0x20) = unaff_R12;
  bVar1 = false;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
  *(uint64_t *)(in_R11 + -0x48) = param_4;
  bVar2 = false;
  bVar6 = false;
  bVar5 = false;
  iVar3 = FUN_1808b6ab0(param_1 + 0x3c8,param_2,*(int32_t *)(in_RAX + 0x548),param_3);
  if (iVar3 == 0) {
    iVar4 = 0x1c;
    iVar3 = iVar4;
    bVar2 = false;
    if (0 < *(int *)(unaff_RSI + 0x60)) {
      if ((*(int *)(unaff_RSI + 0x60) != 1) || (iVar3 = FUN_1808501b0(), iVar3 == 0)) {
        iVar3 = 0;
        *(int *)(unaff_RSI + 0x60) = *(int *)(unaff_RSI + 0x60) + -1;
      }
      if (iVar3 == 0) {
        bVar2 = true;
      }
    }
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    if (iVar3 == 0) {
      iVar3 = iVar4;
      if (0 < *(int *)(param_1 + 0x168)) {
        if ((*(int *)(param_1 + 0x168) != 1) || (iVar3 = FUN_18084f7f0(param_1 + 0x108), iVar3 == 0)
           ) {
          iVar3 = 0;
          *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
        }
        bVar5 = iVar3 == 0;
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      if (iVar3 == 0) {
        iVar3 = iVar4;
        if (0 < *(int *)(unaff_RBP + 0x60)) {
          if ((*(int *)(unaff_RBP + 0x60) != 1) || (iVar3 = FUN_18084fcd0(), iVar3 == 0)) {
            iVar3 = 0;
            *(int *)(unaff_RBP + 0x60) = *(int *)(unaff_RBP + 0x60) + -1;
          }
          bVar6 = iVar3 == 0;
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        if (iVar3 == 0) {
          if (0 < *(int *)(param_1 + 0x238)) {
            if ((*(int *)(param_1 + 0x238) != 1) ||
               (iVar4 = FUN_180850690(param_1 + 0x1d8), iVar4 == 0)) {
              *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
              iVar4 = 0;
            }
            bVar1 = false;
            if (iVar4 == 0) {
              bVar1 = true;
            }
          }
          iVar3 = iVar4;
          if (iVar4 == 0) {
            iVar3 = 0;
          }
          if ((iVar3 == 0) &&
             ((iVar3 = FUN_1808bd690(in_stack_00000070), iVar3 == 0 || (iVar3 == 0)))) {
            iVar3 = 0;
          }
        }
      }
    }
  }
  if (!bVar1) {
    *(int32_t *)(param_1 + 0x238) = 0;
    FUN_18084f560(param_1 + 0x208);
  }
  if (!bVar5) {
    *(int32_t *)(param_1 + 0x168) = 0;
    FUN_18084f040(param_1 + 0x138);
  }
  if (!bVar6) {
    *(int32_t *)(unaff_RBP + 0x60) = 0;
    FUN_18084f040(unaff_RBP + 0x30);
  }
  if (!bVar2) {
    *(int32_t *)(unaff_RSI + 0x60) = 0;
    FUN_18084f2d0(unaff_RSI + 0x30);
  }
  return iVar3;
}



int32_t FUN_1808bdb86(uint64_t param_1,int32_t param_2)

{
  int32_t unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char unaff_R13B;
  longlong unaff_R14;
  longlong unaff_R15;
  char cStack0000000000000030;
  char cStack0000000000000034;
  
  *(int32_t *)(unaff_R14 + 0x60) = param_2;
  FUN_18084f560(unaff_R14 + 0x30);
  if (cStack0000000000000030 == '\0') {
    *(int32_t *)(unaff_R15 + 0x60) = 0;
    FUN_18084f040(unaff_R15 + 0x30);
  }
  if (cStack0000000000000034 == '\0') {
    *(int32_t *)(unaff_RBP + 0x60) = 0;
    FUN_18084f040(unaff_RBP + 0x30);
  }
  if (unaff_R13B == '\0') {
    *(int32_t *)(unaff_RSI + 0x60) = 0;
    FUN_18084f2d0(unaff_RSI + 0x30);
  }
  return unaff_EBX;
}



int32_t FUN_1808bdba1(uint64_t param_1,int32_t param_2)

{
  int32_t unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char unaff_R13B;
  longlong unaff_R15;
  uint64_t in_stack_00000030;
  
  *(int32_t *)(unaff_R15 + 0x60) = param_2;
  FUN_18084f040(unaff_R15 + 0x30);
  if (in_stack_00000030._4_1_ == '\0') {
    *(int32_t *)(unaff_RBP + 0x60) = 0;
    FUN_18084f040(unaff_RBP + 0x30);
  }
  if (unaff_R13B == '\0') {
    *(int32_t *)(unaff_RSI + 0x60) = 0;
    FUN_18084f2d0(unaff_RSI + 0x30);
  }
  return unaff_EBX;
}



int32_t FUN_1808bdbba(void)

{
  int32_t unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char unaff_R13B;
  
  *(int32_t *)(unaff_RBP + 0x60) = 0;
  FUN_18084f040(unaff_RBP + 0x30);
  if (unaff_R13B == '\0') {
    *(int32_t *)(unaff_RSI + 0x60) = 0;
    FUN_18084f2d0(unaff_RSI + 0x30);
  }
  return unaff_EBX;
}



int32_t FUN_1808bdbd9(void)

{
  int32_t unaff_EBX;
  longlong unaff_RSI;
  
  *(int32_t *)(unaff_RSI + 0x60) = 0;
  FUN_18084f2d0(unaff_RSI + 0x30);
  return unaff_EBX;
}



uint64_t FUN_1808bdc00(longlong param_1,uint64_t param_2,longlong param_3,longlong *param_4)

{
  uint64_t uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *(int *)(param_1 + 0x548) = *(int *)(param_1 + 0x548) + 1;
  uVar1 = FUN_1808b7730(param_1 + 0x3c8,param_2,*(int32_t *)(param_1 + 0x548),param_3,param_4);
  if ((int)uVar1 == 0) {
    if (*param_4 != 0) {
      uVar1 = func_0x00018085eef0(*param_4,param_3);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      plVar4 = (longlong *)0x0;
      plVar5 = (longlong *)(*param_4 + 0x70);
      if (*param_4 == 0) {
        plVar5 = plVar4;
      }
      if (plVar5 == (longlong *)0x0) {
        return 0x1c;
      }
      plVar2 = (longlong *)*plVar5;
      if (plVar2 != plVar5) {
        do {
          plVar2 = (longlong *)*plVar2;
          uVar3 = (int)plVar4 + 1;
          plVar4 = (longlong *)(ulonglong)uVar3;
        } while (plVar2 != plVar5);
        if (uVar3 != 0) {
          return 0x1c;
        }
      }
      plVar5[1] = *(longlong *)(param_3 + 0x4a8);
      *plVar5 = param_3 + 0x4a0;
      *(longlong **)(param_3 + 0x4a8) = plVar5;
      *(longlong **)plVar5[1] = plVar5;
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_1808bdcc0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar2 = FUN_1808ba490(param_1 + 0x430);
  if (((int)uVar2 == 0) &&
     (uVar2 = FUN_1808c0ad0(param_1 + 0xa0,param_3 + 0x10,*param_2), (int)uVar2 == 0)) {
    lVar1 = *param_2;
    if (*(int *)(lVar1 + 0x30) == -1) {
      plVar5 = (longlong *)0x0;
      plVar6 = (longlong *)(lVar1 + 8);
      if (lVar1 == 0) {
        plVar6 = plVar5;
      }
      if (plVar6 == (longlong *)0x0) {
        return 0x1c;
      }
      plVar3 = (longlong *)*plVar6;
      if (plVar3 != plVar6) {
        do {
          plVar3 = (longlong *)*plVar3;
          uVar4 = (int)plVar5 + 1;
          plVar5 = (longlong *)(ulonglong)uVar4;
        } while (plVar3 != plVar6);
        if (uVar4 != 0) {
          return 0x1c;
        }
      }
      plVar6[1] = *(longlong *)(param_1 + 0x20);
      *plVar6 = param_1 + 0x18;
      *(longlong **)(param_1 + 0x20) = plVar6;
      *(longlong **)plVar6[1] = plVar6;
      uVar2 = FUN_1808674e0(*(uint64_t *)(param_1 + 0x7c0));
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1808bdd90(longlong param_1)

{
  longlong lVar1;
  uint64_t uVar2;
  uint64_t uStack_30;
  int aiStack_28 [2];
  longlong lStack_20;
  uint64_t uStack_18;
  int aiStack_10 [2];
  
  do {
    lVar1 = *(longlong *)(param_1 + 0x60);
    if (lVar1 != 0) {
      FUN_180768360(lVar1);
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
    if (*(int *)(param_1 + 0x5c) < 1) {
      return 0;
    }
    uStack_30 = 0xffffffffffffffff;
    aiStack_28[0] = -1;
    FUN_1808741f0(param_1 + 0x38,&uStack_30,aiStack_28);
    uStack_18 = 0xffffffffffffffff;
    aiStack_10[0] = -1;
    lStack_20 = *(longlong *)((longlong)aiStack_28[0] * 0x20 + 0x18 + *(longlong *)(param_1 + 0x48))
    ;
    FUN_1807d1650(lStack_20,&uStack_18,aiStack_10);
  } while ((*(char *)(param_1 + 0x780) != '\0') ||
          (uVar2 = FUN_1808b81c0(param_1 + 0x3c8,
                                 *(uint64_t *)
                                  (*(longlong *)(lStack_20 + 0x10) + 8 +
                                  (longlong)aiStack_10[0] * 0x10)), (int)uVar2 == 0));
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808bdeb0(longlong param_1)
void FUN_1808bdeb0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  int8_t auStack_478 [32];
  longlong *plStack_458;
  uint64_t uStack_450;
  int aiStack_448 [4];
  longlong alStack_438 [128];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_478;
  do {
    uStack_450 = 0xffffffffffffffff;
    aiStack_448[0] = -1;
    iVar6 = 0;
    lVar7 = 0;
    plStack_458 = (longlong *)(param_1 + 0x38);
    FUN_1808741f0((longlong *)(param_1 + 0x38),&uStack_450,aiStack_448);
    plVar1 = plStack_458;
    if (aiStack_448[0] != -1) {
      iVar3 = aiStack_448[0];
      iVar5 = (int)uStack_450;
      do {
        do {
          if (0x7f < lVar7) goto LAB_1808be067;
          lVar10 = (longlong)iVar3 * 0x20 + plVar1[2];
          uStack_450 = 0xffffffffffffffff;
          aiStack_448[0] = -1;
          plStack_458 = *(longlong **)(lVar10 + 0x18);
          FUN_1807d1650(plStack_458,&uStack_450,aiStack_448);
          if (aiStack_448[0] != -1) {
            iVar8 = aiStack_448[0];
            iVar4 = (int)uStack_450;
            do {
              do {
                if (0x7f < lVar7) goto LAB_1808be016;
                lVar9 = (longlong)iVar8 * 0x10 + plStack_458[2];
                lVar2 = *(longlong *)(lVar9 + 8);
                if ((*(uint *)(lVar2 + 0x2d8) >> 2 & 1) != 0) {
                  iVar6 = iVar6 + 1;
                  alStack_438[lVar7] = lVar2;
                  lVar7 = lVar7 + 1;
                }
              } while ((iVar8 != -1) && (iVar8 = *(int *)(lVar9 + 4), iVar8 != -1));
              iVar8 = iVar4 + 1;
              bVar11 = iVar4 != -1;
              iVar4 = 0;
              if (bVar11) {
                iVar4 = iVar8;
              }
              if (iVar4 != (int)plStack_458[1]) {
                lVar2 = (longlong)iVar4;
                do {
                  if (*(int *)(*plStack_458 + lVar2 * 4) != -1) {
                    iVar8 = *(int *)(*plStack_458 + (longlong)iVar4 * 4);
                    goto LAB_1808be00c;
                  }
                  iVar4 = iVar4 + 1;
                  lVar2 = lVar2 + 1;
                } while (lVar2 != (int)plStack_458[1]);
              }
              iVar8 = -1;
              iVar4 = iVar8;
LAB_1808be00c:
            } while (iVar8 != -1);
          }
LAB_1808be016:
        } while ((iVar3 != -1) && (iVar3 = *(int *)(lVar10 + 0x10), iVar3 != -1));
        iVar3 = iVar5 + 1;
        bVar11 = iVar5 != -1;
        iVar5 = 0;
        if (bVar11) {
          iVar5 = iVar3;
        }
        if (iVar5 != (int)plVar1[1]) {
          lVar10 = (longlong)iVar5;
          do {
            if (*(int *)(*plVar1 + lVar10 * 4) != -1) {
              iVar3 = *(int *)(*plVar1 + (longlong)iVar5 * 4);
              goto LAB_1808be05e;
            }
            iVar5 = iVar5 + 1;
            lVar10 = lVar10 + 1;
          } while (lVar10 != (int)plVar1[1]);
        }
        iVar5 = -1;
        iVar3 = -1;
LAB_1808be05e:
      } while (iVar3 != -1);
    }
LAB_1808be067:
    lVar7 = 0;
    if (0 < iVar6) {
      do {
        iVar3 = FUN_1808b81c0(param_1 + 0x3c8,alStack_438[lVar7]);
        if (iVar3 != 0) goto LAB_1808be09b;
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar6);
    }
  } while (iVar6 == 0x80);
LAB_1808be09b:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_478);
}






