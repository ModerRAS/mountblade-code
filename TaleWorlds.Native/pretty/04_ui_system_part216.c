#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part216.c - 10 个函数

// 函数: void FUN_1807908c0(longlong param_1)
void FUN_1807908c0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_1 + 8);
  cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
  plVar3 = (longlong *)0x0;
  if (cVar2 != '\0') {
    plVar3 = plVar1;
  }
  FUN_180790ee0(plVar1);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar1,&unknown_var_2784_ptr,0x27f,1);
}



uint64_t FUN_180790930(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 8);
  cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
  plVar3 = (longlong *)0x0;
  if (cVar2 != '\0') {
    plVar3 = plVar1;
  }
  if (plVar1[7] != 0) {
    iVar4 = 0;
    if (0 < (int)plVar1[3]) {
      do {
        iVar5 = 0;
        if (0 < *(int *)((longlong)plVar1 + 0x1c)) {
          do {
            (**(code **)(**(longlong **)
                           (plVar1[7] +
                           (longlong)(*(int *)((longlong)plVar1 + 0x1c) * iVar4 + iVar5) * 8) + 0x28
                        ))();
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)((longlong)plVar1 + 0x1c));
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)plVar1[3]);
    }
    *(int32_t *)(plVar1 + 6) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  return 0;
}



uint64_t FUN_180790936(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 8);
  cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
  plVar3 = (longlong *)0x0;
  if (cVar2 != '\0') {
    plVar3 = plVar1;
  }
  if (plVar1[7] != 0) {
    iVar4 = 0;
    if (0 < (int)plVar1[3]) {
      do {
        iVar5 = 0;
        if (0 < *(int *)((longlong)plVar1 + 0x1c)) {
          do {
            (**(code **)(**(longlong **)
                           (plVar1[7] +
                           (longlong)(*(int *)((longlong)plVar1 + 0x1c) * iVar4 + iVar5) * 8) + 0x28
                        ))();
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)((longlong)plVar1 + 0x1c));
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)plVar1[3]);
    }
    *(int32_t *)(plVar1 + 6) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  return 0;
}



uint64_t FUN_180790957(void)

{
  longlong *unaff_RBX;
  int iVar1;
  int iVar2;
  longlong unaff_RDI;
  
  iVar1 = 0;
  if (0 < *(int *)(unaff_RDI + 0x18)) {
    do {
      iVar2 = 0;
      if (0 < *(int *)(unaff_RDI + 0x1c)) {
        do {
          (**(code **)(**(longlong **)
                         (*(longlong *)(unaff_RDI + 0x38) +
                         (longlong)(*(int *)(unaff_RDI + 0x1c) * iVar1 + iVar2) * 8) + 0x28))();
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(unaff_RDI + 0x1c));
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_RDI + 0x18));
  }
  *(int32_t *)(unaff_RDI + 0x30) = 0;
  if (unaff_RBX != (longlong *)0x0) {
    (**(code **)(*unaff_RBX + 0x20))();
  }
  return 0;
}



uint64_t FUN_180790963(void)

{
  longlong *unaff_RBX;
  int unaff_EBP;
  int iVar1;
  longlong unaff_RDI;
  
  do {
    iVar1 = 0;
    if (0 < *(int *)(unaff_RDI + 0x1c)) {
      do {
        (**(code **)(**(longlong **)
                       (*(longlong *)(unaff_RDI + 0x38) +
                       (longlong)(*(int *)(unaff_RDI + 0x1c) * unaff_EBP + iVar1) * 8) + 0x28))();
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(unaff_RDI + 0x1c));
    }
    unaff_EBP = unaff_EBP + 1;
  } while (unaff_EBP < *(int *)(unaff_RDI + 0x18));
  *(int32_t *)(unaff_RDI + 0x30) = 0;
  if (unaff_RBX != (longlong *)0x0) {
    (**(code **)(*unaff_RBX + 0x20))();
  }
  return 0;
}



uint64_t FUN_18079099c(void)

{
  longlong *unaff_RBX;
  longlong unaff_RDI;
  
  *(int32_t *)(unaff_RDI + 0x30) = 0;
  if (unaff_RBX != (longlong *)0x0) {
    (**(code **)(*unaff_RBX + 0x20))();
  }
  return 0;
}



uint64_t FUN_1807909a8(void)

{
  longlong *unaff_RBX;
  
  if (unaff_RBX != (longlong *)0x0) {
    (**(code **)(*unaff_RBX + 0x20))();
  }
  return 0;
}



uint64_t FUN_1807909b2(void)

{
  longlong *unaff_RBX;
  
  (**(code **)(*unaff_RBX + 0x20))();
  return 0;
}



int FUN_1807909d0(longlong param_1,int param_2,longlong param_3,longlong param_4,int param_5,
                 int param_6)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int32_t uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  float fVar8;
  
  plVar2 = *(longlong **)(param_1 + 8);
  if (param_6 == 1) {
    if (param_4 != 0) {
      **(int32_t **)(param_4 + 8) = (int)plVar2[3];
      switch((int)plVar2[3]) {
      case 1:
        uVar4 = 2;
        break;
      case 2:
        uVar4 = 3;
        break;
      default:
        uVar4 = 1;
        break;
      case 4:
        uVar4 = 4;
        break;
      case 5:
        uVar4 = 5;
        break;
      case 6:
        uVar4 = 6;
        break;
      case 8:
        uVar4 = 7;
        break;
      case 0xc:
        uVar4 = 8;
      }
      *(int32_t *)(param_4 + 0x20) = uVar4;
    }
    if (param_3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = **(int **)(param_3 + 8);
    }
    if (param_5 == 0) {
      fVar8 = *(float *)(plVar2 + 4);
      *(int32_t *)(plVar2 + 6) = *(int32_t *)((longlong)plVar2 + 0x34);
    }
    else {
      iVar1 = (int)plVar2[6];
      iVar5 = iVar1;
      if (param_2 < iVar1) {
        iVar5 = param_2;
      }
      *(int *)(plVar2 + 6) = iVar1 - iVar5;
      if (iVar1 - iVar5 == 0) {
        return 0xb;
      }
      fVar8 = *(float *)(plVar2 + 4);
      if (0.0 < fVar8) {
        return 0;
      }
      if (*(float *)(plVar2 + 5) <= 0.0) {
        return 0xb;
      }
    }
    if (((fVar8 <= 0.0) && (*(float *)(plVar2 + 5) <= 0.0)) && ((int)plVar2[3] == iVar6)) {
      if ((*(float *)((longlong)plVar2 + 0x24) <= 0.0) &&
         (*(float *)((longlong)plVar2 + 0x2c) <= 0.0)) {
        return 0xb;
      }
      if ((*(float *)((longlong)plVar2 + 0x24) == 1.0) &&
         (*(float *)((longlong)plVar2 + 0x2c) == 1.0)) {
        return 6;
      }
    }
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
    plVar7 = (longlong *)0x0;
    if (cVar3 != '\0') {
      plVar7 = plVar2;
    }
    iVar6 = FUN_180791770(plVar2,**(uint64_t **)(param_3 + 0x18),**(uint64_t **)(param_4 + 0x18)
                          ,**(int32_t **)(param_3 + 8));
    if (iVar6 != 0) {
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x20))(plVar7);
        return iVar6;
      }
      return iVar6;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180790ba0(longlong param_1,int param_2,short *param_3,ulonglong param_4)

{
  longlong *plVar1;
  uint64_t uVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint auStackX_10 [2];
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (param_2 == 0) {
    plVar6 = (longlong *)0x0;
    uVar2 = *(uint64_t *)(_DAT_180be12f0 + 0x160 + (longlong)*(int *)(param_1 + 0x30) * 8);
    FUN_180743e10(uVar2);
    cVar3 = (**(code **)(*plVar1 + 0x18))(plVar1);
    plVar5 = plVar6;
    if (cVar3 != '\0') {
      plVar5 = plVar1;
    }
    FUN_180790ee0(plVar1);
    if (param_3 != (short *)0x0) {
      func_0x000180746360(uVar2,auStackX_10,0);
      if ((auStackX_10[0] != 0) && ((auStackX_10[0] & auStackX_10[0] - 1) == 0)) {
        uVar4 = FUN_180791210(plVar1,param_3 + 1,2,(longlong)*param_3,
                              (int)(((param_4 & 0xffffffff) - 2) /
                                   (ulonglong)((longlong)*param_3 * 2)));
        plVar6 = (longlong *)(ulonglong)uVar4;
      }
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    FUN_180743e50(uVar2);
    return plVar6;
  }
  return (longlong *)0x1f;
}



longlong * FUN_180790bc7(longlong param_1)

{
  uint64_t uVar1;
  char cVar2;
  uint uVar3;
  longlong in_RAX;
  longlong *plVar4;
  longlong *plVar5;
  longlong *unaff_R14;
  longlong unaff_R15;
  uint in_stack_00000058;
  
  plVar5 = (longlong *)0x0;
  uVar1 = *(uint64_t *)(in_RAX + 0x160 + param_1 * 8);
  FUN_180743e10(uVar1);
  cVar2 = (**(code **)(*unaff_R14 + 0x18))();
  plVar4 = plVar5;
  if (cVar2 != '\0') {
    plVar4 = unaff_R14;
  }
  FUN_180790ee0();
  if (unaff_R15 != 0) {
    func_0x000180746360(uVar1,&stack0x00000058,0);
    if ((in_stack_00000058 != 0) && ((in_stack_00000058 & in_stack_00000058 - 1) == 0)) {
      uVar3 = FUN_180791210();
      plVar5 = (longlong *)(ulonglong)uVar3;
    }
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  FUN_180743e50(uVar1);
  return plVar5;
}



uint64_t FUN_180790c7f(void)

{
  return 0x1f;
}



uint64_t FUN_180790cd0(longlong param_1,int param_2,float param_3)

{
  longlong lVar1;
  int32_t uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (param_2 == 1) {
    if (param_3 <= -80.0) {
      *(int32_t *)(lVar1 + 0x28) = 0;
      return 0;
    }
    uVar2 = powf(0x41200000,param_3 * 0.05);
    *(int32_t *)(lVar1 + 0x28) = uVar2;
    return 0;
  }
  if (param_2 != 2) {
    return 0x1f;
  }
  if (param_3 <= -80.0) {
    *(int32_t *)(lVar1 + 0x2c) = 0;
    return 0;
  }
  uVar2 = powf(0x41200000,param_3 * 0.05);
  *(int32_t *)(lVar1 + 0x2c) = uVar2;
  return 0;
}



uint64_t FUN_180790d70(longlong param_1,int param_2,float *param_3,longlong param_4)

{
  float fVar1;
  
  if (param_2 == 1) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 8) + 0x28);
    if (fVar1 <= 0.0) {
      fVar1 = -80.0;
      goto LAB_180790dde;
    }
  }
  else {
    if (param_2 != 2) {
      return 0x1f;
    }
    fVar1 = *(float *)(*(longlong *)(param_1 + 8) + 0x2c);
    if (fVar1 <= 0.0) {
      fVar1 = -80.0;
      goto LAB_180790dde;
    }
  }
  fVar1 = (float)log10f(fVar1);
  fVar1 = fVar1 * 20.0;
LAB_180790dde:
  *param_3 = fVar1;
  if (param_4 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390(param_4,0x20,&unknown_var_4372_ptr,(double)fVar1);
  }
  return 0;
}



uint64_t * FUN_180790e40(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_2392_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x48);
  }
  return param_1;
}



uint64_t * FUN_180790e70(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_2392_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x88);
  }
  return param_1;
}



uint64_t * FUN_180790ea0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_2392_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0xb0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180790ee0(longlong *param_1)
void FUN_180790ee0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar3 = param_1[7];
  if (lVar3 == 0) {
    iVar4 = (**(code **)(*param_1 + 8))(param_1);
    if (iVar4 == 0) {
      *(int32_t *)((longlong)param_1 + 0x1c) = 0;
    }
    return;
  }
  iVar4 = 0;
  if (0 < (int)param_1[3]) {
    do {
      iVar1 = *(int *)((longlong)param_1 + 0x1c);
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          plVar2 = *(longlong **)(param_1[7] + (longlong)(iVar1 * iVar4 + iVar5) * 8);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x20))();
            plVar2 = *(longlong **)
                      (param_1[7] +
                      (longlong)(iVar4 * *(int *)((longlong)param_1 + 0x1c) + iVar5) * 8);
            (**(code **)(*plVar2 + 0x38))(plVar2,0);
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar2,&unknown_var_2784_ptr,0x165,1);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[3]);
    lVar3 = param_1[7];
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),lVar3,&unknown_var_2784_ptr,0x16a,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180790ef6(longlong param_1,uint64_t param_2)
void FUN_180790ef6(longlong param_1,uint64_t param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong unaff_RSI;
  int iVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      iVar1 = *(int *)(unaff_RSI + 0x1c);
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          plVar2 = *(longlong **)
                    (*(longlong *)(unaff_RSI + 0x38) + (longlong)(iVar1 * iVar3 + iVar4) * 8);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x20))();
            plVar2 = *(longlong **)
                      (*(longlong *)(unaff_RSI + 0x38) +
                      (longlong)(iVar3 * *(int *)(unaff_RSI + 0x1c) + iVar4) * 8);
            (**(code **)(*plVar2 + 0x38))(plVar2,0);
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar2,&unknown_var_2784_ptr,0x165,1);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(unaff_RSI + 0x18));
    param_2 = *(uint64_t *)(unaff_RSI + 0x38);
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2,&unknown_var_2784_ptr,0x16a,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180790f06(void)
void FUN_180790f06(void)

{
  int iVar1;
  longlong *plVar2;
  int unaff_EBP;
  longlong unaff_RSI;
  int iVar3;
  
  do {
    iVar1 = *(int *)(unaff_RSI + 0x1c);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        plVar2 = *(longlong **)
                  (*(longlong *)(unaff_RSI + 0x38) + (longlong)(iVar1 * unaff_EBP + iVar3) * 8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))();
          plVar2 = *(longlong **)
                    (*(longlong *)(unaff_RSI + 0x38) +
                    (longlong)(unaff_EBP * *(int *)(unaff_RSI + 0x1c) + iVar3) * 8);
          (**(code **)(*plVar2 + 0x38))(plVar2,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar2,&unknown_var_2784_ptr,0x165,1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    unaff_EBP = unaff_EBP + 1;
  } while (unaff_EBP < *(int *)(unaff_RSI + 0x18));
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(unaff_RSI + 0x38),
                &unknown_var_2784_ptr,0x16a,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180790fa7(uint64_t param_1,uint64_t param_2)
void FUN_180790fa7(uint64_t param_1,uint64_t param_2)

{
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2,&unknown_var_2784_ptr,0x16a,1);
}





// 函数: void FUN_180790fd9(void)
void FUN_180790fd9(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  iVar1 = (**(code **)(*unaff_RSI + 8))();
  if (iVar1 == 0) {
    *(int32_t *)((longlong)unaff_RSI + 0x1c) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180790ff0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_180741df0(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x40),
                  &unknown_var_2784_ptr,0x9b);
    *(uint64_t *)(param_1 + 0x40) = 0;
  }
  return 0;
}





// 函数: void FUN_180791040(void)
void FUN_180791040(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c108f4,0,0x5c);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180791210(uint64_t *param_1,longlong param_2,int param_3,int param_4,int param_5)
void FUN_180791210(uint64_t *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint64_t *puVar6;
  int iVar7;
  uint64_t *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint64_t *puVar11;
  uint uVar12;
  uint64_t *puVar13;
  int *piVar14;
  int8_t auStack_108 [32];
  int iStack_e8;
  int32_t uStack_e0;
  int iStack_d8;
  int iStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint uStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  ulonglong uStack_90;
  longlong lStack_88;
  int aiStack_80 [4];
  uint64_t uStack_70;
  int iStack_68;
  uint64_t uStack_64;
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  iStack_a0 = param_4;
  iStack_9c = param_3;
  lStack_88 = param_2;
  if ((((param_1[1] == 0) || (param_4 < 1)) || (param_5 < 1)) || (param_2 == 0)) goto FUN_1807915fb;
  *(int *)(param_1 + 3) = param_4;
  *(int *)((longlong)param_1 + 0x34) = param_5;
  if (param_3 == 1) {
    uVar10 = 8;
LAB_1807912bc:
    uStack_90 = uVar10 >> 3;
  }
  else {
    if (param_3 == 2) {
      uVar10 = 0x10;
      goto LAB_1807912bc;
    }
    if (param_3 == 3) {
      uVar10 = 0x18;
      goto LAB_1807912bc;
    }
    if ((param_3 == 4) || (param_3 == 5)) {
      uVar10 = 0x20;
      goto LAB_1807912bc;
    }
    uStack_90 = CONCAT44(uStack_90._4_4_,1);
  }
  iVar2 = (**(code **)*param_1)(param_1);
  if (iVar2 == 0x29) {
    puVar11 = (uint64_t *)0x0;
    aiStack_80[0] = *(int *)(param_1 + 2);
    iVar2 = *(int *)(param_1[1] + 0x11664) + -1;
    iStack_a4 = aiStack_80[0] << 4;
    aiStack_80[3] = aiStack_80[0] * 4;
    iStack_68 = iStack_a4;
    puVar8 = puVar11;
    iVar7 = param_5;
    if (iVar2 == 0) {
      aiStack_80[1] = 3;
      aiStack_80[2] = 0;
      uStack_70 = 3;
      uStack_64 = 0;
    }
    else {
      aiStack_80[1] = 7;
      aiStack_80[2] = 0;
      uStack_70 = 0x100000006;
      uStack_64 = 0x100000000;
    }
    do {
      iVar4 = (int)puVar8;
      iVar9 = 0;
      if (aiStack_80[(longlong)iVar4 * 3 + 1] != 0) {
        iVar9 = iVar7 - aiStack_80[(longlong)iVar4 * 3] * aiStack_80[(longlong)iVar4 * 3 + 1];
      }
      uVar12 = iVar4 + 1;
      *(uint *)((longlong)param_1 + 0x1c) = uVar12;
    } while (((int)uVar12 < 4) &&
            (puVar8 = (uint64_t *)(ulonglong)uVar12, iVar7 = iVar9, 0 < iVar9));
    iStack_e8 = 0;
    iStack_98 = iVar2;
    lVar5 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(int *)(param_1 + 3) * uVar12 * 8
                          ,&unknown_var_2784_ptr,0x11f);
    param_1[7] = lVar5;
    if ((lVar5 != 0) && (puVar8 = puVar11, 0 < *(int *)(param_1 + 3))) {
      do {
        uStack_a8 = 0;
        iVar7 = (int)puVar8;
        if (0 < *(int *)((longlong)param_1 + 0x1c)) {
          piVar14 = aiStack_80;
          puVar8 = puVar11;
          puVar13 = puVar11;
          do {
            iVar9 = (int)puVar8;
            if (iVar9 < iVar2) {
              iVar2 = iVar9;
            }
            puVar8 = puVar11;
            if ((iVar2 == 0) || (piVar14[2] == 0)) {
              iStack_e8 = 0;
              puVar6 = (uint64_t *)
                       FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x88,&unknown_var_2784_ptr,
                                     0x12d);
              if (puVar6 != (uint64_t *)0x0) {
                *puVar6 = &unknown_var_2456_ptr;
                puVar8 = puVar6;
              }
            }
            else {
              iStack_e8 = 0;
              puVar6 = (uint64_t *)
                       FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0xb0,&unknown_var_2784_ptr,
                                     0x132);
              if (puVar6 != (uint64_t *)0x0) {
                puVar8 = puVar6 + 0x12;
                *puVar6 = &unknown_var_2520_ptr;
                *(int32_t *)(puVar6 + 0x11) = 0;
                puVar6[0x13] = puVar8;
                *puVar8 = puVar8;
                puVar6[0x14] = 0;
                puVar8 = puVar6;
              }
            }
            *(uint64_t **)
             (param_1[7] + (longlong)(*(int *)((longlong)param_1 + 0x1c) * iVar7 + iVar9) * 8) =
                 puVar8;
            puVar8 = *(uint64_t **)
                      (param_1[7] +
                      (longlong)(*(int *)((longlong)param_1 + 0x1c) * iVar7 + iVar9) * 8);
            if (puVar8 == (uint64_t *)0x0) goto FUN_1807915fb;
            iStack_d8 = piVar14[2];
            uStack_b0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_c8 = 0;
            uStack_e0 = 0;
            iStack_d0 = iVar2;
            if (iVar9 < *(int *)((longlong)param_1 + 0x1c) + -1) {
              iVar2 = *piVar14;
              iVar4 = piVar14[1];
              iStack_e8 = iVar4;
              iVar3 = (**(code **)*puVar8)(puVar8,param_1[1],iVar2);
              if (iVar3 != 0) goto FUN_1807915fb;
              iStack_e8 = iVar4 * iVar2;
              plVar1 = *(longlong **)
                        (param_1[7] +
                        (longlong)(*(int *)((longlong)param_1 + 0x1c) * iVar7 + iVar9) * 8);
              iVar3 = (**(code **)(*plVar1 + 8))
                                (plVar1,(int)((*(int *)(param_1 + 3) * uStack_a8 + iVar7) *
                                             (int)uStack_90) + lStack_88,iStack_9c,iStack_a0);
              if (iVar3 != 0) goto FUN_1807915fb;
            }
            else {
              iVar3 = param_5 - (int)puVar13;
              iVar2 = *piVar14;
              iStack_e8 = (iVar3 + -1) / iVar2 + 1;
              iVar4 = (**(code **)*puVar8)(puVar8,param_1[1],iVar2,iStack_a4);
              if (iVar4 != 0) goto FUN_1807915fb;
              plVar1 = *(longlong **)
                        (param_1[7] +
                        (longlong)(*(int *)((longlong)param_1 + 0x1c) * iVar7 + iVar9) * 8);
              iStack_e8 = iVar3;
              iVar4 = (**(code **)(*plVar1 + 8))
                                (plVar1,(int)((*(int *)(param_1 + 3) * uStack_a8 + iVar7) *
                                             (int)uStack_90) + lStack_88,iStack_9c,iStack_a0);
              if (iVar4 != 0) goto FUN_1807915fb;
              iVar4 = piVar14[1];
            }
            puVar8 = (uint64_t *)(ulonglong)(iVar9 + 1U);
            piVar14 = piVar14 + 3;
            uStack_a8 = uStack_a8 + iVar4 * iVar2;
            puVar13 = (uint64_t *)(ulonglong)uStack_a8;
            iVar2 = iStack_98;
          } while ((int)(iVar9 + 1U) < *(int *)((longlong)param_1 + 0x1c));
        }
        puVar8 = (uint64_t *)(ulonglong)(iVar7 + 1U);
      } while ((int)(iVar7 + 1U) < *(int *)(param_1 + 3));
    }
  }
FUN_1807915fb:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180791277(int param_1)
void FUN_180791277(int param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *unaff_RBX;
  int iVar8;
  int unaff_ESI;
  int iVar9;
  uint64_t *puVar10;
  int iVar11;
  uint uVar12;
  uint64_t *puVar13;
  int iVar14;
  int *piVar15;
  uint uStack0000000000000060;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  int iStack0000000000000078;
  longlong in_stack_00000080;
  int iStack0000000000000088;
  uint64_t uStack000000000000008c;
  int32_t uStack0000000000000094;
  uint64_t in_stack_00000098;
  int32_t uStack00000000000000a0;
  uint64_t uStack00000000000000a4;
  ulonglong in_stack_000000b0;
  int in_stack_00000130;
  
  if (param_1 == 1) {
    iStack0000000000000078 = 1;
  }
  else if (param_1 == 2) {
    iStack0000000000000078 = 2;
  }
  else if (param_1 == 3) {
    iStack0000000000000078 = 3;
  }
  else if ((param_1 == 4) || (param_1 == 5)) {
    iStack0000000000000078 = 4;
  }
  else {
    iStack0000000000000078 = 1;
  }
  iVar2 = (**(code **)*unaff_RBX)();
  if (iVar2 == 0x29) {
    puVar10 = (uint64_t *)0x0;
    iStack0000000000000088 = *(int *)(unaff_RBX + 2);
    iVar8 = *(int *)(unaff_RBX[1] + 0x11664) + -1;
    iVar2 = iStack0000000000000088 << 4;
    uStack0000000000000094 = iStack0000000000000088 * 4;
    uStack00000000000000a0 = iVar2;
    puVar7 = puVar10;
    if (iVar8 == 0) {
      uStack000000000000008c = 3;
      in_stack_00000098 = 3;
      uStack00000000000000a4 = 0;
    }
    else {
      uStack000000000000008c = 7;
      in_stack_00000098 = 0x100000006;
      uStack00000000000000a4 = 0x100000000;
    }
    do {
      iVar11 = (int)puVar7;
      iVar14 = 0;
      if (*(int *)((longlong)&stack0x00000088 + (longlong)iVar11 * 0xc + 4) != 0) {
        iVar14 = unaff_ESI -
                 *(int *)((longlong)&stack0x00000088 + (longlong)iVar11 * 0xc) *
                 *(int *)((longlong)&stack0x00000088 + (longlong)iVar11 * 0xc + 4);
      }
      unaff_ESI = iVar14;
      uVar12 = iVar11 + 1;
      *(uint *)((longlong)unaff_RBX + 0x1c) = uVar12;
    } while (((int)uVar12 < 4) && (puVar7 = (uint64_t *)(ulonglong)uVar12, 0 < unaff_ESI));
    lVar5 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                          *(int *)(unaff_RBX + 3) * uVar12 * 8,&unknown_var_2784_ptr,0x11f,0);
    unaff_RBX[7] = lVar5;
    if ((lVar5 != 0) && (puVar7 = puVar10, 0 < *(int *)(unaff_RBX + 3))) {
      do {
        uStack0000000000000060 = 0;
        iVar14 = (int)puVar7;
        if (0 < *(int *)((longlong)unaff_RBX + 0x1c)) {
          piVar15 = &stack0x00000088;
          puVar7 = puVar10;
          puVar13 = puVar10;
          do {
            iVar9 = (int)puVar7;
            iVar11 = iVar8;
            if (iVar9 < iVar8) {
              iVar11 = iVar9;
            }
            puVar7 = puVar10;
            if ((iVar11 == 0) || (piVar15[2] == 0)) {
              puVar6 = (uint64_t *)
                       FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x88,&unknown_var_2784_ptr,
                                     0x12d,0);
              if (puVar6 != (uint64_t *)0x0) {
                *puVar6 = &unknown_var_2456_ptr;
                puVar7 = puVar6;
              }
            }
            else {
              puVar6 = (uint64_t *)
                       FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0xb0,&unknown_var_2784_ptr,
                                     0x132,0);
              if (puVar6 != (uint64_t *)0x0) {
                puVar7 = puVar6 + 0x12;
                *puVar6 = &unknown_var_2520_ptr;
                *(int32_t *)(puVar6 + 0x11) = 0;
                puVar6[0x13] = puVar7;
                *puVar7 = puVar7;
                puVar6[0x14] = 0;
                puVar7 = puVar6;
              }
            }
            *(uint64_t **)
             (unaff_RBX[7] + (longlong)(*(int *)((longlong)unaff_RBX + 0x1c) * iVar14 + iVar9) * 8)
                 = puVar7;
            puVar7 = *(uint64_t **)
                      (unaff_RBX[7] +
                      (longlong)(*(int *)((longlong)unaff_RBX + 0x1c) * iVar14 + iVar9) * 8);
            if (puVar7 == (uint64_t *)0x0) goto LAB_1807915cb;
            if (iVar9 < *(int *)((longlong)unaff_RBX + 0x1c) + -1) {
              iVar11 = *piVar15;
              iVar4 = piVar15[1];
              iVar3 = (**(code **)*puVar7)(puVar7,unaff_RBX[1],iVar11,iVar2,iVar4);
              if ((iVar3 != 0) ||
                 (plVar1 = *(longlong **)
                            (unaff_RBX[7] +
                            (longlong)(*(int *)((longlong)unaff_RBX + 0x1c) * iVar14 + iVar9) * 8),
                 iVar3 = (**(code **)(*plVar1 + 8))
                                   (plVar1,(int)((*(int *)(unaff_RBX + 3) * uStack0000000000000060 +
                                                 iVar14) * iStack0000000000000078) +
                                           in_stack_00000080,uStack000000000000006c,
                                    uStack0000000000000068,iVar4 * iVar11), iVar3 != 0))
              goto LAB_1807915cb;
            }
            else {
              iVar3 = in_stack_00000130 - (int)puVar13;
              iVar11 = *piVar15;
              iVar4 = (**(code **)*puVar7)
                                (puVar7,unaff_RBX[1],iVar11,iVar2,(iVar3 + -1) / iVar11 + 1);
              if ((iVar4 != 0) ||
                 (plVar1 = *(longlong **)
                            (unaff_RBX[7] +
                            (longlong)(*(int *)((longlong)unaff_RBX + 0x1c) * iVar14 + iVar9) * 8),
                 iVar4 = (**(code **)(*plVar1 + 8))
                                   (plVar1,(int)((*(int *)(unaff_RBX + 3) * uStack0000000000000060 +
                                                 iVar14) * iStack0000000000000078) +
                                           in_stack_00000080,uStack000000000000006c,
                                    uStack0000000000000068,iVar3), iVar4 != 0)) goto LAB_1807915cb;
              iVar4 = piVar15[1];
            }
            puVar7 = (uint64_t *)(ulonglong)(iVar9 + 1U);
            piVar15 = piVar15 + 3;
            uStack0000000000000060 = uStack0000000000000060 + iVar4 * iVar11;
            puVar13 = (uint64_t *)(ulonglong)uStack0000000000000060;
          } while ((int)(iVar9 + 1U) < *(int *)((longlong)unaff_RBX + 0x1c));
        }
        puVar7 = (uint64_t *)(ulonglong)(iVar14 + 1U);
      } while ((int)(iVar14 + 1U) < *(int *)(unaff_RBX + 3));
    }
  }
LAB_1807915cb:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000b0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1807915fb(void)
void FUN_1807915fb(void)

{
  ulonglong in_stack_000000b0;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000b0 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



