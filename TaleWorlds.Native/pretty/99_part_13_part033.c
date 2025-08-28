#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part033.c - 7 个函数

// 函数: void FUN_1808bbebc(void)
void FUN_1808bbebc(void)

{
  longlong *plVar1;
  int unaff_EDI;
  longlong in_stack_00000030;
  
  plVar1 = *(longlong **)(*(longlong *)(in_stack_00000030 + 0x10) + 8 + (longlong)unaff_EDI * 0x10);
  if (plVar1[0xc] != 0) {
    FUN_18088cae0();
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,0);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar1,&unknown_var_2688_ptr,0x1ee,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bbf98(void)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  longlong *unaff_RBP;
  
  iVar2 = FUN_180744cc0();
  if ((iVar2 == 0) && (iVar2 = FUN_180744e20(unaff_RBP + 2), iVar2 == 0)) {
    *(int32_t *)(unaff_RBP + 4) = 0xffffffff;
    *(int32_t *)((longlong)unaff_RBP + 0x24) = 0;
  }
  iVar2 = FUN_180744cc0();
  if ((iVar2 == 0) && (iVar2 = FUN_180744e20(unaff_RBP + 2), iVar2 == 0)) {
    *(int32_t *)(unaff_RBP + 4) = 0xffffffff;
    *(int32_t *)((longlong)unaff_RBP + 0x24) = 0;
  }
  FUN_180744e20(unaff_RBP + 2);
  uVar4 = *(uint *)((longlong)unaff_RBP + 0xc);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0) {
    if (0 < (int)unaff_RBP[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar4) && (*unaff_RBP != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBP,&unknown_var_8432_ptr,0x100);
    }
    *unaff_RBP = 0;
    uVar4 = 0;
    *(int32_t *)((longlong)unaff_RBP + 0xc) = 0;
  }
  *(int32_t *)(unaff_RBP + 1) = 0;
  uVar1 = -uVar4;
  if (-1 < (int)uVar4) {
    uVar1 = uVar4;
  }
  if ((0 < (int)uVar1) && (uVar3 = FUN_180747e10(), (int)uVar3 != 0)) {
    return uVar3;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bbfac(void)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  longlong *unaff_RBP;
  
  iVar2 = FUN_180744e20(unaff_RBP + 2);
  if (iVar2 == 0) {
    *(int32_t *)(unaff_RBP + 4) = 0xffffffff;
    *(int32_t *)((longlong)unaff_RBP + 0x24) = 0;
  }
  iVar2 = FUN_180744cc0();
  if ((iVar2 == 0) && (iVar2 = FUN_180744e20(unaff_RBP + 2), iVar2 == 0)) {
    *(int32_t *)(unaff_RBP + 4) = 0xffffffff;
    *(int32_t *)((longlong)unaff_RBP + 0x24) = 0;
  }
  FUN_180744e20(unaff_RBP + 2);
  uVar4 = *(uint *)((longlong)unaff_RBP + 0xc);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0) {
    if (0 < (int)unaff_RBP[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar4) && (*unaff_RBP != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBP,&unknown_var_8432_ptr,0x100);
    }
    *unaff_RBP = 0;
    uVar4 = 0;
    *(int32_t *)((longlong)unaff_RBP + 0xc) = 0;
  }
  *(int32_t *)(unaff_RBP + 1) = 0;
  uVar1 = -uVar4;
  if (-1 < (int)uVar4) {
    uVar1 = uVar4;
  }
  if ((0 < (int)uVar1) && (uVar3 = FUN_180747e10(), (int)uVar3 != 0)) {
    return uVar3;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bbffc(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  uint uVar5;
  int unaff_EBX;
  longlong *unaff_RBP;
  longlong unaff_R15;
  
  iVar3 = *(int *)(param_1 + (longlong)unaff_EBX * 4);
  if (iVar3 != -1) {
    plVar1 = *(longlong **)(*(longlong *)(unaff_R15 + 0x10) + 8 + (longlong)iVar3 * 0x10);
    if (plVar1[0xc] != 0) {
      FUN_18088cae0();
    }
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar1,&unknown_var_2688_ptr,0x1ee,1);
  }
  iVar3 = FUN_180744cc0();
  if ((iVar3 == 0) && (iVar3 = FUN_180744e20(unaff_RBP + 2), iVar3 == 0)) {
    *(int32_t *)(unaff_RBP + 4) = 0xffffffff;
    *(int32_t *)((longlong)unaff_RBP + 0x24) = 0;
  }
  iVar3 = FUN_180744cc0();
  if ((iVar3 == 0) && (iVar3 = FUN_180744e20(unaff_RBP + 2), iVar3 == 0)) {
    *(int32_t *)(unaff_RBP + 4) = 0xffffffff;
    *(int32_t *)((longlong)unaff_RBP + 0x24) = 0;
  }
  FUN_180744e20(unaff_RBP + 2);
  uVar5 = *(uint *)((longlong)unaff_RBP + 0xc);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (0 < (int)unaff_RBP[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar5) && (*unaff_RBP != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBP,&unknown_var_8432_ptr,0x100);
    }
    *unaff_RBP = 0;
    uVar5 = 0;
    *(int32_t *)((longlong)unaff_RBP + 0xc) = 0;
  }
  *(int32_t *)(unaff_RBP + 1) = 0;
  uVar2 = -uVar5;
  if (-1 < (int)uVar5) {
    uVar2 = uVar5;
  }
  if ((0 < (int)uVar2) && (uVar4 = FUN_180747e10(), (int)uVar4 != 0)) {
    return uVar4;
  }
  return 0;
}



uint64_t FUN_1808bc010(longlong param_1,uint64_t param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong lStackX_8;
  
  if (param_3 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(param_3 + 0x2dc);
  }
  lStackX_8 = FUN_180851c50(param_1 + 0x108,param_2,iVar1);
  if (lStackX_8 == 0) {
    if ((iVar1 != -1) &&
       (lStackX_8 = FUN_180851c50(param_1 + 0x108,param_2,0xffffffff), lStackX_8 != 0))
    goto LAB_1808bc0aa;
    uVar2 = FUN_180850b70(param_1 + 0x368,param_2,param_3,&lStackX_8);
    iVar1 = (int)uVar2;
  }
  else {
    if (iVar1 != -1) goto LAB_1808bc0bb;
LAB_1808bc0aa:
    uVar2 = func_0x000180852ad0(lStackX_8);
    iVar1 = (int)uVar2;
  }
  if (iVar1 != 0) {
    return uVar2;
  }
LAB_1808bc0bb:
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x4e4)) {
    plVar3 = *(longlong **)(param_1 + 0x4d8);
    do {
      if (*plVar3 == lStackX_8) {
        if (-1 < iVar1) {
          (*(longlong **)(param_1 + 0x4d8))[iVar1] = 0;
          *(int *)(param_1 + 0x4e0) = *(int *)(param_1 + 0x4e0) + -1;
        }
        break;
      }
      iVar1 = iVar1 + 1;
      plVar3 = plVar3 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x4e4));
  }
  *param_4 = lStackX_8;
  return 0;
}






// 函数: void FUN_1808bc120(longlong param_1,uint64_t param_2,longlong param_3)
void FUN_1808bc120(longlong param_1,uint64_t param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lStackX_8;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = *(int32_t *)(param_3 + 0x10);
  uStack_14 = *(int32_t *)(param_3 + 0x14);
  uStack_10 = *(int32_t *)(param_3 + 0x18);
  uStack_c = *(int32_t *)(param_3 + 0x1c);
  lStackX_8 = FUN_180851c50(param_1 + 0x108,&uStack_18,0xffffffff);
  if (lStackX_8 == 0) {
    iVar1 = FUN_180850b70(param_1 + 0x368,&uStack_18,0,&lStackX_8);
  }
  else {
    iVar1 = func_0x000180852ad0(lStackX_8);
  }
  if (iVar1 == 0) {
    if (0 < *(int *)(param_1 + 0x4e4)) {
      iVar1 = 0;
      plVar3 = *(longlong **)(param_1 + 0x4d8);
      do {
        if (*plVar3 == lStackX_8) {
          if (-1 < iVar1) {
            (*(longlong **)(param_1 + 0x4d8))[iVar1] = 0;
            *(int *)(param_1 + 0x4e0) = *(int *)(param_1 + 0x4e0) + -1;
          }
          break;
        }
        iVar1 = iVar1 + 1;
        plVar3 = plVar3 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x4e4));
    }
    *(longlong *)(param_1 + 0x7a0) = lStackX_8;
    iVar1 = *(int *)(param_3 + 0x50);
    if (*(int *)(param_3 + 0x50) == 0) {
      iVar1 = FUN_18073a840(*(uint64_t *)(param_1 + 0x4c0),0,&lStackX_8,0);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = (int)lStackX_8;
    }
    iVar2 = FUN_18073a200(*(uint64_t *)(param_1 + 0x4c0),&uStackX_18);
    if ((iVar2 == 0) && (iVar2 = FUN_18073c380(uStackX_18,0xfffffffd,&uStackX_20), iVar2 == 0)) {
      FUN_1807411a0(uStackX_20,0,0,iVar1);
    }
  }
  return;
}



uint64_t FUN_1808bc240(longlong param_1,uint64_t param_2,int param_3,longlong *param_4)

{
  int iVar1;
  uint64_t uVar2;
  longlong lStackX_8;
  
  lStackX_8 = FUN_180851c50(param_1 + 0x1d8);
  if ((lStackX_8 == 0) &&
     ((param_3 == -1 ||
      (lStackX_8 = FUN_180851c50(param_1 + 0x1d8,param_2,0xffffffff), lStackX_8 == 0)))) {
    uVar2 = FUN_1808c3220(param_1 + 0x3a8,param_2,param_3,&lStackX_8);
    iVar1 = (int)uVar2;
  }
  else {
    uVar2 = func_0x0001808c3dd0(lStackX_8);
    iVar1 = (int)uVar2;
  }
  if (iVar1 == 0) {
    *param_4 = lStackX_8;
    uVar2 = 0;
  }
  return uVar2;
}






// 函数: void FUN_1808bc2e0(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void FUN_1808bc2e0(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  uint64_t param_5)

{
  FUN_1808ba6e0(param_1 + 0x480,param_2,param_1,param_3,param_4,param_5);
  return;
}






// 函数: void FUN_1808bc320(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1808bc320(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,uint64_t param_6)

{
  FUN_1808ba950(param_1 + 0x458,param_2,param_3,param_1,param_4,param_5,param_6);
  return;
}



uint64_t FUN_1808bc3a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint64_t uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  uint64_t uStack_40;
  int aiStack_38 [4];
  
  uVar4 = FUN_1808e4b70(param_2,param_1 + 0x18);
  if ((int)uVar4 == 0) {
    uStack_40 = 0xffffffffffffffff;
    aiStack_38[0] = -1;
    FUN_1808741f0((longlong *)(param_1 + 0x38),&uStack_40,aiStack_38);
    if (aiStack_38[0] != -1) {
      iVar8 = aiStack_38[0];
      iVar9 = (int)uStack_40;
      do {
        do {
          lVar2 = *(longlong *)((longlong)iVar8 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x48));
          uVar4 = FUN_1808e5800(param_2,*(uint64_t *)(lVar2 + 0x50),*(int32_t *)(lVar2 + 0x30),
                                *(int32_t *)(lVar2 + 0x24));
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          iVar7 = 0;
          for (lVar5 = 0;
              ((-1 < lVar5 && (iVar7 < *(int *)(lVar2 + 0x34))) &&
              (*(longlong *)(*(longlong *)(lVar2 + 0x28) + lVar5 * 8) == 0)); lVar5 = lVar5 + 1) {
            iVar7 = iVar7 + 1;
          }
          while (((-1 < iVar7 && (iVar7 < *(int *)(lVar2 + 0x34))) &&
                 (*(longlong *)(*(longlong *)(lVar2 + 0x28) + (longlong)iVar7 * 8) != 0))) {
            uVar4 = FUN_1808e4690(param_2,*(uint64_t *)
                                           (*(longlong *)(lVar2 + 0x28) + (longlong)iVar7 * 8));
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            iVar7 = iVar7 + 1;
            for (lVar5 = (longlong)iVar7;
                ((-1 < lVar5 && (iVar7 < *(int *)(lVar2 + 0x34))) &&
                (*(longlong *)(*(longlong *)(lVar2 + 0x28) + lVar5 * 8) == 0)); lVar5 = lVar5 + 1) {
              iVar7 = iVar7 + 1;
            }
          }
          uVar4 = func_0x0001808e52d0(param_2,*(uint64_t *)(lVar2 + 0x50));
          if ((int)uVar4 != 0) {
            return uVar4;
          }
        } while ((iVar8 != -1) &&
                (iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x48)),
                iVar8 != -1));
        iVar8 = iVar9 + 1;
        bVar11 = iVar9 != -1;
        iVar9 = 0;
        if (bVar11) {
          iVar9 = iVar8;
        }
        if (iVar9 != *(int *)(param_1 + 0x40)) {
          lVar2 = *(longlong *)(param_1 + 0x38);
          lVar5 = (longlong)iVar9;
          do {
            if (*(int *)(lVar2 + lVar5 * 4) != -1) {
              iVar8 = *(int *)(lVar2 + (longlong)iVar9 * 4);
              goto LAB_1808bc52a;
            }
            iVar9 = iVar9 + 1;
            lVar5 = lVar5 + 1;
          } while (lVar5 != *(int *)(param_1 + 0x40));
        }
        iVar8 = -1;
        iVar9 = iVar8;
LAB_1808bc52a:
      } while (iVar8 != -1);
    }
    plVar10 = (longlong *)0x0;
    if (*(char *)(param_2 + 0x90) != '\0') {
      plVar1 = (longlong *)(param_1 + 0x520);
      plVar6 = (longlong *)(*plVar1 + -0x20);
      if (*plVar1 == 0) {
        plVar6 = plVar10;
      }
      plVar3 = plVar10;
      if (plVar6 != (longlong *)0x0) {
        plVar3 = plVar6 + 4;
      }
      while (plVar3 != plVar1) {
        plVar6 = plVar3 + -4;
        if (plVar3 == (longlong *)0x0) {
          plVar6 = plVar10;
        }
        uVar4 = FUN_1808e3fc0(param_2,plVar6);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        if (plVar3 == plVar1) break;
        plVar6 = (longlong *)(*plVar3 + -0x20);
        if (*plVar3 == 0) {
          plVar6 = plVar10;
        }
        plVar3 = plVar10;
        if (plVar6 != (longlong *)0x0) {
          plVar3 = plVar6 + 4;
        }
      }
    }
    plVar1 = (longlong *)(param_1 + 0x500);
    plVar6 = (longlong *)(*plVar1 + -0x20);
    if (*plVar1 == 0) {
      plVar6 = plVar10;
    }
    plVar3 = plVar10;
    if (plVar6 != (longlong *)0x0) {
      plVar3 = plVar6 + 4;
    }
    while (plVar3 != plVar1) {
      plVar6 = plVar3 + -4;
      if (plVar3 == (longlong *)0x0) {
        plVar6 = plVar10;
      }
      uVar4 = FUN_1808e3fc0(param_2,plVar6);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (plVar3 == plVar1) break;
      plVar6 = (longlong *)(*plVar3 + -0x20);
      if (*plVar3 == 0) {
        plVar6 = plVar10;
      }
      plVar3 = plVar10;
      if (plVar6 != (longlong *)0x0) {
        plVar3 = plVar6 + 4;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



uint64_t FUN_1808bc3c2(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint64_t uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong unaff_R13;
  longlong unaff_R14;
  bool bVar11;
  int iStack0000000000000028;
  int iStack0000000000000030;
  
  _iStack0000000000000028 = 0xffffffffffffffff;
  iStack0000000000000030 = -1;
  FUN_1808741f0((longlong *)(unaff_R13 + 0x38),&stack0x00000028,&stack0x00000030);
  if (iStack0000000000000030 != -1) {
    iVar8 = iStack0000000000000030;
    iVar9 = iStack0000000000000028;
    do {
      do {
        lVar2 = *(longlong *)((longlong)iVar8 * 0x20 + 0x18 + *(longlong *)(unaff_R13 + 0x48));
        uVar4 = FUN_1808e5800();
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        iVar6 = 0;
        for (lVar5 = 0;
            ((-1 < lVar5 && (iVar6 < *(int *)(lVar2 + 0x34))) &&
            (*(longlong *)(*(longlong *)(lVar2 + 0x28) + lVar5 * 8) == 0)); lVar5 = lVar5 + 1) {
          iVar6 = iVar6 + 1;
        }
        while (((-1 < iVar6 && (iVar6 < *(int *)(lVar2 + 0x34))) &&
               (*(longlong *)(*(longlong *)(lVar2 + 0x28) + (longlong)iVar6 * 8) != 0))) {
          uVar4 = FUN_1808e4690();
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          iVar6 = iVar6 + 1;
          for (lVar5 = (longlong)iVar6;
              ((-1 < lVar5 && (iVar6 < *(int *)(lVar2 + 0x34))) &&
              (*(longlong *)(*(longlong *)(lVar2 + 0x28) + lVar5 * 8) == 0)); lVar5 = lVar5 + 1) {
            iVar6 = iVar6 + 1;
          }
        }
        uVar4 = func_0x0001808e52d0();
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      } while ((iVar8 != -1) &&
              (iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x10 + *(longlong *)(unaff_R13 + 0x48)),
              iVar8 != -1));
      iVar8 = iVar9 + 1;
      bVar11 = iVar9 != -1;
      iVar9 = 0;
      if (bVar11) {
        iVar9 = iVar8;
      }
      if (iVar9 != *(int *)(unaff_R13 + 0x40)) {
        lVar2 = *(longlong *)(unaff_R13 + 0x38);
        lVar5 = (longlong)iVar9;
        do {
          if (*(int *)(lVar2 + lVar5 * 4) != -1) {
            iVar8 = *(int *)(lVar2 + (longlong)iVar9 * 4);
            goto LAB_1808bc52a;
          }
          iVar9 = iVar9 + 1;
          lVar5 = lVar5 + 1;
        } while (lVar5 != *(int *)(unaff_R13 + 0x40));
      }
      iVar8 = -1;
      iVar9 = iVar8;
LAB_1808bc52a:
    } while (iVar8 != -1);
  }
  plVar10 = (longlong *)0x0;
  if (*(char *)(unaff_R14 + 0x90) != '\0') {
    plVar1 = (longlong *)(unaff_R13 + 0x520);
    plVar7 = (longlong *)(*plVar1 + -0x20);
    if (*plVar1 == 0) {
      plVar7 = plVar10;
    }
    plVar3 = plVar10;
    if (plVar7 != (longlong *)0x0) {
      plVar3 = plVar7 + 4;
    }
    while (plVar3 != plVar1) {
      uVar4 = FUN_1808e3fc0();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (plVar3 == plVar1) break;
      plVar7 = (longlong *)(*plVar3 + -0x20);
      if (*plVar3 == 0) {
        plVar7 = plVar10;
      }
      plVar3 = plVar10;
      if (plVar7 != (longlong *)0x0) {
        plVar3 = plVar7 + 4;
      }
    }
  }
  plVar1 = (longlong *)(unaff_R13 + 0x500);
  plVar7 = (longlong *)(*plVar1 + -0x20);
  if (*plVar1 == 0) {
    plVar7 = plVar10;
  }
  plVar3 = plVar10;
  if (plVar7 != (longlong *)0x0) {
    plVar3 = plVar7 + 4;
  }
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    uVar4 = FUN_1808e3fc0();
    if ((int)uVar4 != 0) break;
    if (plVar3 == plVar1) {
      return 0;
    }
    plVar7 = (longlong *)(*plVar3 + -0x20);
    if (*plVar3 == 0) {
      plVar7 = plVar10;
    }
    plVar3 = plVar10;
    if (plVar7 != (longlong *)0x0) {
      plVar3 = plVar7 + 4;
    }
  }
  return uVar4;
}






// 函数: void FUN_1808bc640(void)
void FUN_1808bc640(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808bc650(longlong param_1,longlong param_2)
void FUN_1808bc650(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint64_t *puVar12;
  longlong *plVar13;
  int8_t auStack_68 [32];
  char acStack_48 [8];
  uint64_t uStack_40;
  uint64_t uStack_38;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  ulonglong uStack_20;
  
  uStack_20 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_68;
  plVar13 = (longlong *)0x0;
  plVar8 = (longlong *)(param_1 + 0x500);
  plVar10 = (longlong *)(*plVar8 + -0x20);
  if (*plVar8 == 0) {
    plVar10 = plVar13;
  }
  plVar1 = plVar13;
  if (plVar10 != (longlong *)0x0) {
    plVar1 = plVar10 + 4;
  }
  while (plVar1 != plVar8) {
    uStack_40 = 0;
    uStack_38 = 0;
    plVar10 = plVar1 + -4;
    if (plVar1 == (longlong *)0x0) {
      plVar10 = plVar13;
    }
    iVar3 = FUN_1808e42a0(param_2,plVar10,&uStack_40);
    if (iVar3 != 0) goto FUN_1808bc8f4;
    if (plVar1 == plVar8) break;
    plVar10 = (longlong *)(*plVar1 + -0x20);
    if (*plVar1 == 0) {
      plVar10 = plVar13;
    }
    plVar1 = plVar13;
    if (plVar10 != (longlong *)0x0) {
      plVar1 = plVar10 + 4;
    }
  }
  plVar8 = plVar13;
  plVar10 = plVar13;
  if (*(char *)(param_2 + 0x20) != '\0') {
    plVar1 = (longlong *)(param_1 + 0x520);
    plVar6 = (longlong *)(*plVar1 + -0x20);
    if (*plVar1 == 0) {
      plVar6 = plVar13;
    }
    plVar2 = plVar13;
    if (plVar6 != (longlong *)0x0) {
      plVar2 = plVar6 + 4;
    }
    while (plVar2 != plVar1) {
      plVar6 = plVar2 + 10;
      if (plVar2 == (longlong *)0x0) {
        plVar6 = (longlong *)0x70;
      }
      lVar7 = *plVar6;
      if (lVar7 == 0) {
        puVar12 = &uStack_40;
        uStack_40 = 0;
        uStack_38 = 0;
      }
      else {
        lVar7 = (*(code *)**(uint64_t **)(lVar7 + 8))(lVar7 + 8);
        puVar12 = (uint64_t *)&uStack_30;
        uStack_30 = *(int32_t *)(lVar7 + 0x10);
        uStack_2c = *(int32_t *)(lVar7 + 0x14);
        uStack_28 = *(int32_t *)(lVar7 + 0x18);
        uStack_24 = *(int32_t *)(lVar7 + 0x1c);
      }
      plVar6 = plVar2 + -4;
      if (plVar2 == (longlong *)0x0) {
        plVar6 = plVar13;
      }
      iVar3 = FUN_1808e42a0(param_2,plVar6,puVar12);
      if (iVar3 != 0) goto FUN_1808bc8f4;
      if (plVar2 == plVar1) break;
      plVar6 = (longlong *)(*plVar2 + -0x20);
      if (*plVar2 == 0) {
        plVar6 = plVar13;
      }
      plVar2 = plVar13;
      if (plVar6 != (longlong *)0x0) {
        plVar2 = plVar6 + 4;
      }
    }
  }
  for (; ((-1 < (longlong)plVar8 && ((int)plVar10 < *(int *)(param_1 + 0x53c))) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x530) + (longlong)plVar8 * 8) == 0));
      plVar8 = (longlong *)((longlong)plVar8 + 1)) {
    plVar10 = (longlong *)(ulonglong)((int)plVar10 + 1);
  }
  while (((iVar3 = (int)plVar10, -1 < iVar3 && (iVar3 < *(int *)(param_1 + 0x53c))) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x530) + (longlong)iVar3 * 8) != 0))) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x530) + (longlong)iVar3 * 8);
    iVar4 = FUN_1808e5ab0(param_2,*(uint64_t *)(lVar7 + 0x50),acStack_48);
    if (iVar4 != 0) break;
    plVar8 = plVar13;
    plVar10 = plVar13;
    if (acStack_48[0] != '\0') {
      for (; ((-1 < (longlong)plVar8 && ((int)plVar10 < *(int *)(lVar7 + 0x34))) &&
             (*(longlong *)(*(longlong *)(lVar7 + 0x28) + (longlong)plVar8 * 8) == 0));
          plVar8 = (longlong *)((longlong)plVar8 + 1)) {
        plVar10 = (longlong *)(ulonglong)((int)plVar10 + 1);
      }
      while (((iVar4 = (int)plVar10, -1 < iVar4 && (iVar4 < *(int *)(lVar7 + 0x34))) &&
             (*(longlong *)(*(longlong *)(lVar7 + 0x28) + (longlong)iVar4 * 8) != 0))) {
        iVar5 = func_0x0001808e4680(param_2,*(uint64_t *)
                                             (*(longlong *)(lVar7 + 0x28) + (longlong)iVar4 * 8));
        if (iVar5 != 0) goto FUN_1808bc8f4;
        uVar11 = iVar4 + 1;
        for (lVar9 = (longlong)(int)uVar11;
            ((plVar10 = (longlong *)(ulonglong)uVar11, -1 < lVar9 &&
             ((int)uVar11 < *(int *)(lVar7 + 0x34))) &&
            (*(longlong *)(*(longlong *)(lVar7 + 0x28) + lVar9 * 8) == 0)); lVar9 = lVar9 + 1) {
          uVar11 = uVar11 + 1;
        }
      }
      iVar4 = thunk_FUN_1808e52f0(param_2,*(uint64_t *)(lVar7 + 0x50));
      if (iVar4 != 0) break;
    }
    uVar11 = iVar3 + 1;
    for (lVar7 = (longlong)(int)uVar11;
        ((plVar10 = (longlong *)(ulonglong)uVar11, -1 < lVar7 &&
         ((int)uVar11 < *(int *)(param_1 + 0x53c))) &&
        (*(longlong *)(*(longlong *)(param_1 + 0x530) + lVar7 * 8) == 0)); lVar7 = lVar7 + 1) {
      uVar11 = uVar11 + 1;
    }
  }
FUN_1808bc8f4:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_68);
}






// 函数: void FUN_1808bc702(int32_t param_1)
void FUN_1808bc702(int32_t param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong unaff_RBP;
  longlong unaff_R14;
  int unaff_R15D;
  int32_t unaff_000000bc;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t uVar9;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  char acStackX_20 [8];
  ulonglong in_stack_00000048;
  
  if (*(char *)(unaff_R14 + 0x20) != (char)unaff_R15D) {
    plVar1 = (longlong *)(unaff_RBP + 0x520);
    lVar6 = *plVar1 + -0x20;
    if (*plVar1 == 0) {
      lVar6 = CONCAT44(unaff_000000bc,unaff_R15D);
    }
    if (lVar6 == 0) {
      plVar8 = (longlong *)CONCAT44(unaff_000000bc,unaff_R15D);
    }
    else {
      plVar8 = (longlong *)(lVar6 + 0x20);
    }
    while (plVar8 != plVar1) {
      plVar5 = plVar8 + 10;
      if (plVar8 == (longlong *)0x0) {
        plVar5 = (longlong *)0x70;
      }
      lVar6 = *plVar5;
      if (lVar6 != 0) {
        (*(code *)**(uint64_t **)(lVar6 + 8))(lVar6 + 8);
      }
      iVar2 = FUN_1808e42a0();
      if (iVar2 != 0) goto LAB_1808bc8ef;
      param_1 = extraout_XMM0_Da;
      if (plVar8 == plVar1) break;
      lVar6 = *plVar8 + -0x20;
      if (*plVar8 == 0) {
        lVar6 = CONCAT44(unaff_000000bc,unaff_R15D);
      }
      if (lVar6 == 0) {
        plVar8 = (longlong *)CONCAT44(unaff_000000bc,unaff_R15D);
      }
      else {
        plVar8 = (longlong *)(lVar6 + 0x20);
      }
    }
  }
  iVar2 = unaff_R15D;
  for (lVar6 = CONCAT44(unaff_000000bc,unaff_R15D);
      ((-1 < lVar6 && (iVar2 < *(int *)(unaff_RBP + 0x53c))) &&
      (*(longlong *)(*(longlong *)(unaff_RBP + 0x530) + lVar6 * 8) ==
       CONCAT44(unaff_000000bc,unaff_R15D))); lVar6 = lVar6 + 1) {
    iVar2 = iVar2 + 1;
  }
  while (((-1 < iVar2 && (iVar2 < *(int *)(unaff_RBP + 0x53c))) &&
         (*(longlong *)(*(longlong *)(unaff_RBP + 0x530) + (longlong)iVar2 * 8) !=
          CONCAT44(unaff_000000bc,unaff_R15D)))) {
    lVar6 = *(longlong *)(*(longlong *)(unaff_RBP + 0x530) + (longlong)iVar2 * 8);
    iVar3 = FUN_1808e5ab0(param_1,*(uint64_t *)(lVar6 + 0x50),acStackX_20);
    if (iVar3 != 0) break;
    param_1 = extraout_XMM0_Da_00;
    if (acStackX_20[0] != (char)unaff_R15D) {
      iVar3 = unaff_R15D;
      for (lVar7 = CONCAT44(unaff_000000bc,unaff_R15D);
          ((uVar9 = extraout_XMM0_Da_00, -1 < lVar7 && (iVar3 < *(int *)(lVar6 + 0x34))) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x28) + lVar7 * 8) ==
           CONCAT44(unaff_000000bc,unaff_R15D))); lVar7 = lVar7 + 1) {
        iVar3 = iVar3 + 1;
      }
      while (((-1 < iVar3 && (iVar3 < *(int *)(lVar6 + 0x34))) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x28) + (longlong)iVar3 * 8) !=
              CONCAT44(unaff_000000bc,unaff_R15D)))) {
        iVar4 = func_0x0001808e4680(uVar9,*(uint64_t *)
                                           (*(longlong *)(lVar6 + 0x28) + (longlong)iVar3 * 8));
        if (iVar4 != 0) goto LAB_1808bc8ef;
        iVar3 = iVar3 + 1;
        for (lVar7 = (longlong)iVar3;
            ((uVar9 = extraout_XMM0_Da_01, -1 < lVar7 && (iVar3 < *(int *)(lVar6 + 0x34))) &&
            (*(longlong *)(*(longlong *)(lVar6 + 0x28) + lVar7 * 8) ==
             CONCAT44(unaff_000000bc,unaff_R15D))); lVar7 = lVar7 + 1) {
          iVar3 = iVar3 + 1;
        }
      }
      iVar3 = thunk_FUN_1808e52f0(uVar9,*(uint64_t *)(lVar6 + 0x50));
      param_1 = extraout_XMM0_Da_02;
      if (iVar3 != 0) break;
    }
    iVar2 = iVar2 + 1;
    for (lVar6 = (longlong)iVar2;
        ((-1 < lVar6 && (iVar2 < *(int *)(unaff_RBP + 0x53c))) &&
        (*(longlong *)(*(longlong *)(unaff_RBP + 0x530) + lVar6 * 8) ==
         CONCAT44(unaff_000000bc,unaff_R15D))); lVar6 = lVar6 + 1) {
      iVar2 = iVar2 + 1;
    }
  }
LAB_1808bc8ef:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}






