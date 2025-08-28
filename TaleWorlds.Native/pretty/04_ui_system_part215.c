#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part215.c - 5 个函数

// 函数: void FUN_180790266(void)
void FUN_180790266(void)

{
  longlong unaff_RBP;
  longlong unaff_R14;
  
  FUN_180773410();
  if (unaff_R14 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x42a0) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18079027d(void)
void FUN_18079027d(void)

{
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



uint64_t FUN_1807902d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int aiStackX_8 [2];
  longlong *plStackX_18;
  
  uVar11 = 0;
  uVar7 = uVar11;
  uVar9 = uVar11;
  if (0 < *(int *)(param_1 + 0x694)) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x6a0) + 0x30 + uVar7);
      if (((lVar2 != 0) && (*(longlong **)(lVar2 + 0x40) == param_2)) &&
         (uVar5 = FUN_180748290(param_1,uVar9), (int)uVar5 != 0)) {
        return uVar5;
      }
      uVar8 = (int)uVar9 + 1;
      uVar7 = uVar7 + 0x38;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x694));
  }
  cVar4 = (**(code **)*param_2)(param_2);
  if (cVar4 == '\0') {
    if ((*(uint *)(param_2 + 0xb) & 4) != 0) {
      if ((int)param_2[0x27] != 0) {
        uVar7 = *(longlong *)(param_1 + 0x368) - 0x178;
        if (*(longlong *)(param_1 + 0x368) == 0) {
          uVar7 = uVar11;
        }
        while (uVar9 = uVar7, uVar9 != param_1 + 0x1f0U) {
          uVar7 = *(longlong *)(uVar9 + 0x178) - 0x178;
          if (*(longlong *)(uVar9 + 0x178) == 0) {
            uVar7 = uVar11;
          }
          if (*(longlong *)(uVar9 + 0x1d8) != 0) {
            plStackX_18 = (longlong *)0x0;
            func_0x000180756200(uVar9,&plStackX_18);
            if (plStackX_18 == param_2) {
              FUN_180758220(uVar9,0x53);
            }
          }
        }
      }
      (**(code **)(*param_2 + 0xc0))(param_2,aiStackX_8,0,0,0);
      if ((aiStackX_8[0] == 6) && (uVar5 = FUN_180743160(param_1,1), (int)uVar5 != 0)) {
        return uVar5;
      }
      cVar4 = (**(code **)*param_2)(param_2);
      if (cVar4 == '\0') {
        LOCK();
        *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) & 0xfffffffb;
        UNLOCK();
      }
    }
    return 0;
  }
  func_0x000180743c20(param_1,10);
  plVar1 = (longlong *)(param_1 + 0x121e0);
  plVar10 = (longlong *)*plVar1;
  if (plVar10 != plVar1) goto LAB_180790380;
  if (*(longlong **)(param_1 + 0x121e8) == plVar1) {
LAB_180790406:
                    // WARNING: Subroutine does not return
    FUN_180743d60(param_1,10);
  }
  do {
    while( true ) {
      do {
        if (plVar10 == plVar1) goto LAB_180790406;
LAB_180790380:
        plVar3 = plVar10 + 2;
        plVar10 = (longlong *)*plVar10;
        plVar3 = *(longlong **)(*plVar3 + 0x28);
      } while (plVar3 == (longlong *)0x0);
      if (plVar3 == param_2) goto LAB_1807903d6;
      puVar6 = (uint64_t *)plVar3[0x14];
      if (puVar6 == (uint64_t *)0x0) break;
      uVar7 = uVar11;
      if (0 < (int)plVar3[0x16]) {
        do {
          if ((longlong *)*puVar6 == param_2) goto LAB_1807903d6;
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 1;
        } while ((longlong)uVar7 < (longlong)(int)plVar3[0x16]);
      }
    }
  } while (plVar3[0x30] != param_2[0x30]);
LAB_1807903d6:
                    // WARNING: Subroutine does not return
  FUN_180743d60(param_1,10);
}



uint64_t FUN_18079033d(void)

{
  longlong *plVar1;
  char cVar2;
  uint64_t *in_RAX;
  longlong *plVar3;
  uint64_t uVar4;
  longlong *plVar5;
  longlong *unaff_RBX;
  longlong *plVar6;
  longlong unaff_RSI;
  longlong *plVar7;
  longlong *unaff_R12;
  char unaff_R15B;
  int in_stack_00000060;
  longlong *in_stack_00000070;
  
  cVar2 = (*(code *)*in_RAX)();
  if (cVar2 == '\0') {
    if ((*(uint *)(unaff_RBX + 0xb) & 4) != 0) {
      if (((int)unaff_RBX[0x27] != (int)unaff_R12) && (unaff_R15B == '\0')) {
        plVar6 = (longlong *)(*(longlong *)(unaff_RSI + 0x368) + -0x178);
        if (*(longlong *)(unaff_RSI + 0x368) == 0) {
          plVar6 = unaff_R12;
        }
        while (plVar7 = plVar6, plVar7 != (longlong *)(unaff_RSI + 0x1f0)) {
          plVar6 = (longlong *)(plVar7[0x2f] + -0x178);
          if (plVar7[0x2f] == 0) {
            plVar6 = unaff_R12;
          }
          if (((longlong *)plVar7[0x3b] != unaff_R12) &&
             (in_stack_00000070 = unaff_R12, func_0x000180756200(plVar7,&stack0x00000070),
             in_stack_00000070 == unaff_RBX)) {
            FUN_180758220(plVar7,0x53);
          }
        }
      }
      (**(code **)(*unaff_RBX + 0xc0))();
      if ((in_stack_00000060 == 6) && (uVar4 = FUN_180743160(), (int)uVar4 != 0)) {
        return uVar4;
      }
      cVar2 = (**(code **)*unaff_RBX)();
      if (cVar2 == '\0') {
        LOCK();
        *(uint *)(unaff_RBX + 0xb) = *(uint *)(unaff_RBX + 0xb) & 0xfffffffb;
        UNLOCK();
      }
    }
    return 0;
  }
  func_0x000180743c20();
  plVar6 = (longlong *)(unaff_RSI + 0x121e0);
  plVar7 = (longlong *)*plVar6;
  if (plVar7 != plVar6) goto LAB_180790380;
  if (*(longlong **)(unaff_RSI + 0x121e8) == plVar6) {
LAB_180790406:
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  do {
    while( true ) {
      do {
        if (plVar7 == plVar6) goto LAB_180790406;
LAB_180790380:
        plVar1 = plVar7 + 2;
        plVar7 = (longlong *)*plVar7;
        plVar1 = *(longlong **)(*plVar1 + 0x28);
      } while (plVar1 == (longlong *)0x0);
      if (plVar1 == unaff_RBX) goto LAB_1807903d6;
      plVar3 = (longlong *)plVar1[0x14];
      if (plVar3 == (longlong *)0x0) break;
      plVar5 = unaff_R12;
      if (0 < (int)plVar1[0x16]) {
        do {
          if ((longlong *)*plVar3 == unaff_RBX) goto LAB_1807903d6;
          plVar5 = (longlong *)((longlong)plVar5 + 1);
          plVar3 = plVar3 + 1;
        } while ((longlong)plVar5 < (longlong)(int)plVar1[0x16]);
      }
    }
  } while (plVar1[0x30] != unaff_RBX[0x30]);
LAB_1807903d6:
                    // WARNING: Subroutine does not return
  FUN_180743d60();
}





// 函数: void FUN_1807904e5(void)
void FUN_1807904e5(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180790500(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_3 == (longlong *)0x0) {
    return 0x1f;
  }
  if (param_1 != 0) {
    func_0x000180743c20(param_1,0x13);
  }
  plVar1 = (longlong *)(param_1 + 0x11768);
  plVar2 = (longlong *)*plVar1;
  do {
    if (plVar2 == plVar1) {
      iVar5 = 0;
      lVar4 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x70,&unknown_var_2272_ptr,0x5c,0);
      *param_3 = lVar4;
      if (lVar4 == 0) {
        iVar5 = 0x26;
      }
      else {
        iVar3 = FUN_180789470(lVar4,param_2,0);
        plVar2 = (longlong *)*param_3;
        if (iVar3 == 0) {
          lVar4 = *plVar1;
          *plVar2 = lVar4;
          plVar2[1] = (longlong)plVar1;
          *(longlong **)(lVar4 + 8) = plVar2;
          *(longlong **)plVar2[1] = plVar2;
        }
        else {
          FUN_180789cf0(plVar2);
          *param_3 = 0;
          iVar5 = iVar3;
        }
      }
LAB_1807905d8:
      if (param_1 == 0) {
        return iVar5;
      }
                    // WARNING: Subroutine does not return
      FUN_180743d60(param_1,0x13);
    }
    *param_3 = (longlong)plVar2;
    if ((int)plVar2[3] == param_2) {
      iVar5 = 0;
      goto LAB_1807905d8;
    }
    plVar2 = (longlong *)*plVar2;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180790523(uint64_t param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int unaff_EBP;
  int iVar5;
  longlong *unaff_RDI;
  longlong unaff_R14;
  
  if (unaff_R14 != 0) {
    func_0x000180743c20(param_1,0x13);
  }
  plVar1 = (longlong *)(unaff_R14 + 0x11768);
  plVar2 = (longlong *)*plVar1;
  do {
    if (plVar2 == plVar1) {
      iVar5 = 0;
      lVar4 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x70,&unknown_var_2272_ptr,0x5c,0);
      *unaff_RDI = lVar4;
      if (lVar4 == 0) {
        iVar5 = 0x26;
      }
      else {
        iVar3 = FUN_180789470(lVar4,unaff_EBP,0);
        plVar2 = (longlong *)*unaff_RDI;
        if (iVar3 == 0) {
          lVar4 = *plVar1;
          *plVar2 = lVar4;
          plVar2[1] = (longlong)plVar1;
          *(longlong **)(lVar4 + 8) = plVar2;
          *(longlong **)plVar2[1] = plVar2;
        }
        else {
          FUN_180789cf0(plVar2);
          *unaff_RDI = 0;
          iVar5 = iVar3;
        }
      }
LAB_1807905d8:
      if (unaff_R14 == 0) {
        return iVar5;
      }
                    // WARNING: Subroutine does not return
      FUN_180743d60();
    }
    *unaff_RDI = (longlong)plVar2;
    if ((int)plVar2[3] == unaff_EBP) {
      iVar5 = 0;
      goto LAB_1807905d8;
    }
    plVar2 = (longlong *)*plVar2;
  } while( true );
}





// 函数: void FUN_1807905e7(void)
void FUN_1807905e7(void)

{
                    // WARNING: Subroutine does not return
  FUN_180743d60();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180790610(longlong *param_1,uint64_t param_2,longlong param_3,longlong param_4,
             longlong param_5,int param_6)

{
  float *pfVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  longlong in_stack_00000008;
  
  if (((param_1 == (longlong *)0x0) || (param_3 == 0)) || (param_4 == 0)) {
    return 0x1f;
  }
  uVar2 = FUN_180790500(*(uint64_t *)(*param_1 + 0xa8),param_2,&stack0x00000008);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(int *)(in_stack_00000008 + 0x18) == 0) {
    return 0x43;
  }
  if (param_6 == 0) {
    return 0x1f;
  }
  uVar2 = *(uint64_t *)(in_stack_00000008 + 0x60);
  FUN_180768360(uVar2);
  iVar4 = *(int *)(in_stack_00000008 + 0x18);
  pfVar1 = *(float **)(in_stack_00000008 + 0x20);
  if (param_6 == 1) {
    if (param_5 == 0) {
      iVar3 = 0;
      if (0 < iVar4 / 2) {
        lVar5 = 0;
        pfVar6 = pfVar1;
        do {
          iVar3 = iVar3 + 1;
          *pfVar6 = *(float *)(param_3 +
                              (longlong)
                              (*(int *)(lVar5 + *(longlong *)(in_stack_00000008 + 0x38)) * 2) * 4);
          pfVar6[1] = *(float *)(param_3 + 4 +
                                (longlong)
                                (*(int *)(lVar5 + *(longlong *)(in_stack_00000008 + 0x38)) * 2) * 4)
          ;
          iVar4 = *(int *)(in_stack_00000008 + 0x18);
          lVar5 = lVar5 + 4;
          pfVar6 = pfVar6 + 2;
        } while (iVar3 < iVar4 / 2);
      }
      goto LAB_180789990;
    }
  }
  else if (param_5 == 0) {
    iVar3 = 0;
    if (0 < iVar4 / 2) {
      lVar5 = 0;
      pfVar6 = pfVar1;
      do {
        iVar3 = iVar3 + 1;
        *pfVar6 = *(float *)(param_3 +
                            (longlong)
                            (*(int *)(lVar5 + *(longlong *)(in_stack_00000008 + 0x38)) * param_6 * 2
                            ) * 4);
        pfVar6[1] = *(float *)(param_3 +
                              (longlong)
                              ((*(int *)(lVar5 + *(longlong *)(in_stack_00000008 + 0x38)) * 2 + 1) *
                              param_6) * 4);
        iVar4 = *(int *)(in_stack_00000008 + 0x18);
        lVar5 = lVar5 + 4;
        pfVar6 = pfVar6 + 2;
      } while (iVar3 < iVar4 / 2);
    }
    goto LAB_180789990;
  }
  iVar3 = 0;
  if (0 < iVar4 / 2) {
    lVar5 = 0;
    pfVar6 = pfVar1;
    do {
      iVar3 = iVar3 + 1;
      iVar4 = *(int *)(lVar5 + *(longlong *)(in_stack_00000008 + 0x38));
      *pfVar6 = *(float *)(param_3 + (longlong)(iVar4 * param_6 * 2) * 4) *
                *(float *)(param_5 + (longlong)(iVar4 * 2) * 4);
      iVar4 = *(int *)(lVar5 + *(longlong *)(in_stack_00000008 + 0x38)) * 2;
      pfVar6[1] = *(float *)(param_3 + (longlong)((iVar4 + 1) * param_6) * 4) *
                  *(float *)(param_5 + 4 + (longlong)iVar4 * 4);
      iVar4 = *(int *)(in_stack_00000008 + 0x18);
      lVar5 = lVar5 + 4;
      pfVar6 = pfVar6 + 2;
    } while (iVar3 < iVar4 / 2);
  }
LAB_180789990:
  (*(code *)*ui_system_config)
            (pfVar1,*(longlong *)(in_stack_00000008 + 0x30) + (longlong)iVar4 * 4,iVar4 / 2);
  (*(code *)ui_system_config[2])
            (pfVar1,param_4,*(uint64_t *)(in_stack_00000008 + 0x30),
             *(int32_t *)(in_stack_00000008 + 0x18));
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180790680(longlong *param_1,uint64_t param_2,longlong param_3,int32_t *param_4,
             longlong param_5,int param_6)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int32_t *puVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  longlong in_stack_00000008;
  
  if (((param_1 == (longlong *)0x0) || (param_4 == (int32_t *)0x0)) || (param_3 == 0)) {
    uVar2 = 0x1f;
  }
  else {
    uVar2 = FUN_180790500(*(uint64_t *)(*param_1 + 0xa8),param_2,&stack0x00000008);
    if ((int)uVar2 == 0) {
      if (*(int *)(in_stack_00000008 + 0x18) == 0) {
        return 0x43;
      }
      lVar4 = (longlong)param_6;
      if (param_6 != 0) {
        uVar2 = *(uint64_t *)(in_stack_00000008 + 0x68);
        FUN_180768360(uVar2);
        (**(code **)(ui_system_config + 0x18))
                  (param_3,*(uint64_t *)(in_stack_00000008 + 0x28),
                   *(uint64_t *)(in_stack_00000008 + 0x30),
                   *(int32_t *)(in_stack_00000008 + 0x18));
        iVar3 = *(int *)(in_stack_00000008 + 0x18);
        iVar5 = 0;
        lVar11 = *(longlong *)(in_stack_00000008 + 0x28);
        iVar6 = 0;
        iVar1 = iVar3 / 2;
        if (0 < iVar1) {
          lVar9 = 0;
          do {
            iVar1 = iVar1 + iVar6;
            iVar6 = iVar6 + 1;
            *(uint64_t *)(lVar11 + (longlong)iVar1 * 8) =
                 *(uint64_t *)
                  (lVar11 + (longlong)*(int *)(lVar9 + *(longlong *)(in_stack_00000008 + 0x38)) * 8)
            ;
            iVar3 = *(int *)(in_stack_00000008 + 0x18);
            iVar1 = iVar3 / 2;
            lVar9 = lVar9 + 4;
          } while (iVar6 < iVar1);
          lVar11 = *(longlong *)(in_stack_00000008 + 0x28);
        }
        (**(code **)(ui_system_config + 8))
                  (lVar11 + (longlong)iVar3 * 4,
                   *(longlong *)(in_stack_00000008 + 0x30) + (longlong)iVar3 * 4,iVar3 / 2);
        if ((param_6 == 1) && (param_5 == 0)) {
          iVar3 = *(int *)(in_stack_00000008 + 0x18);
          if (0 < iVar3) {
            puVar7 = param_4 + 2;
            do {
              puVar7[-2] = *(int32_t *)
                            (*(longlong *)(in_stack_00000008 + 0x28) + (longlong)(iVar3 + iVar5) * 4
                            );
              puVar7[-1] = *(int32_t *)
                            (*(longlong *)(in_stack_00000008 + 0x28) + 4 +
                            (longlong)(*(int *)(in_stack_00000008 + 0x18) + iVar5) * 4);
              *puVar7 = *(int32_t *)
                         (*(longlong *)(in_stack_00000008 + 0x28) + 8 +
                         (longlong)(*(int *)(in_stack_00000008 + 0x18) + iVar5) * 4);
              iVar3 = *(int *)(in_stack_00000008 + 0x18) + iVar5;
              iVar5 = iVar5 + 4;
              puVar7[1] = *(int32_t *)
                           (*(longlong *)(in_stack_00000008 + 0x28) + 0xc + (longlong)iVar3 * 4);
              iVar3 = *(int *)(in_stack_00000008 + 0x18);
              puVar7 = puVar7 + 4;
            } while (iVar5 < iVar3);
          }
        }
        else {
          iVar3 = *(int *)(in_stack_00000008 + 0x18);
          if (param_5 == 0) {
            if (0 < iVar3) {
              do {
                *param_4 = *(int32_t *)
                            (*(longlong *)(in_stack_00000008 + 0x28) + (longlong)(iVar3 + iVar5) * 4
                            );
                param_4[lVar4] =
                     *(int32_t *)
                      (*(longlong *)(in_stack_00000008 + 0x28) + 4 +
                      (longlong)(*(int *)(in_stack_00000008 + 0x18) + iVar5) * 4);
                param_4[param_6 * 2] =
                     *(int32_t *)
                      (*(longlong *)(in_stack_00000008 + 0x28) + 8 +
                      (longlong)(*(int *)(in_stack_00000008 + 0x18) + iVar5) * 4);
                iVar3 = *(int *)(in_stack_00000008 + 0x18) + iVar5;
                iVar5 = iVar5 + 4;
                param_4[param_6 * 3] =
                     *(int32_t *)
                      (*(longlong *)(in_stack_00000008 + 0x28) + 0xc + (longlong)iVar3 * 4);
                param_4 = param_4 + param_6 * 4;
                iVar3 = *(int *)(in_stack_00000008 + 0x18);
              } while (iVar5 < iVar3);
            }
          }
          else if (0 < iVar3) {
            pfVar10 = (float *)(param_4 + lVar4 * 2);
            pfVar8 = (float *)(param_5 + 8);
            do {
              pfVar10[lVar4 * -2] =
                   *(float *)(*(longlong *)(in_stack_00000008 + 0x28) +
                             (longlong)(*(int *)(in_stack_00000008 + 0x18) + iVar5) * 4) *
                   pfVar8[-2];
              pfVar10[-lVar4] =
                   *(float *)(*(longlong *)(in_stack_00000008 + 0x28) + 4 +
                             (longlong)(*(int *)(in_stack_00000008 + 0x18) + iVar5) * 4) *
                   pfVar8[-1];
              *pfVar10 = *(float *)(*(longlong *)(in_stack_00000008 + 0x28) + 8 +
                                   (longlong)(*(int *)(in_stack_00000008 + 0x18) + iVar5) * 4) *
                         *pfVar8;
              iVar3 = *(int *)(in_stack_00000008 + 0x18) + iVar5;
              iVar5 = iVar5 + 4;
              pfVar10[lVar4] =
                   *(float *)(*(longlong *)(in_stack_00000008 + 0x28) + 0xc + (longlong)iVar3 * 4) *
                   pfVar8[1];
              pfVar10 = pfVar10 + param_6 * 4;
              pfVar8 = pfVar8 + 4;
            } while (iVar5 < *(int *)(in_stack_00000008 + 0x18));
          }
        }
                    // WARNING: Subroutine does not return
        FUN_180768400(uVar2);
      }
      return 0x1f;
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807906f0(longlong param_1)

{
  float fVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int32_t uVar10;
  int32_t auStackX_8 [2];
  
  uVar6 = *(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x160 + (longlong)*(int *)(param_1 + 0x30) * 8);
  lVar4 = FUN_180791040();
  uVar8 = 0;
  puVar5 = (uint64_t *)
           FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x40,&unknown_var_2784_ptr,0x24c,0,0,1);
  if (puVar5 == (uint64_t *)0x0) {
    uVar6 = 0x26;
  }
  else {
    *puVar5 = &unknown_var_2584_ptr;
    *(int32_t *)(puVar5 + 2) = 0;
    *(int8_t *)((longlong)puVar5 + 0x14) = 1;
    puVar5[3] = 2;
    puVar5[4] = 0x3f800000;
    puVar5[5] = 0x3f800000;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[1] = uVar6;
    func_0x000180746360(uVar6,auStackX_8,0);
    *(int32_t *)(puVar5 + 2) = auStackX_8[0];
    *(uint64_t **)(param_1 + 8) = puVar5;
    uVar9 = uVar8;
    if (0 < *(int *)(lVar4 + 0x60)) {
      do {
        piVar2 = *(int **)(uVar9 + *(longlong *)(lVar4 + 0x68));
        iVar7 = (int)uVar8;
        if (*piVar2 == 0) {
          fVar1 = (float)piVar2[0xe];
          lVar3 = *(longlong *)(param_1 + 8);
          if (iVar7 == 1) {
            if (-80.0 < fVar1) {
              uVar10 = powf(0x41200000,fVar1 * 0.05);
            }
            else {
              uVar10 = 0;
            }
            *(int32_t *)(lVar3 + 0x28) = uVar10;
          }
          else {
            if (iVar7 != 2) {
              return 0x1f;
            }
            if (-80.0 < fVar1) {
              uVar10 = powf(0x41200000,fVar1 * 0.05);
              *(int32_t *)(lVar3 + 0x2c) = uVar10;
            }
            else {
              *(int32_t *)(lVar3 + 0x2c) = 0;
            }
          }
        }
        else if (*piVar2 == 2) {
          if (iVar7 != 3) {
            return 0x1f;
          }
          *(bool *)(*(longlong *)(param_1 + 8) + 0x14) = piVar2[0xc] != 0;
        }
        uVar8 = (ulonglong)(iVar7 + 1U);
        uVar9 = uVar9 + 8;
      } while ((int)(iVar7 + 1U) < *(int *)(lVar4 + 0x60));
    }
    uVar6 = 0;
  }
  return uVar6;
}



uint64_t FUN_18079075f(int32_t param_1)

{
  float fVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  ulonglong uVar5;
  uint64_t *unaff_RDI;
  longlong unaff_R14;
  int32_t uVar6;
  int32_t in_stack_00000090;
  
  *unaff_RDI = &unknown_var_2584_ptr;
  *(int *)(unaff_RDI + 2) = (int)unaff_RBX;
  *(int8_t *)((longlong)unaff_RDI + 0x14) = 1;
  unaff_RDI[3] = 2;
  unaff_RDI[4] = 0x3f800000;
  unaff_RDI[5] = 0x3f800000;
  unaff_RDI[6] = unaff_RBX;
  unaff_RDI[7] = unaff_RBX;
  unaff_RDI[1] = unaff_RSI;
  func_0x000180746360(param_1,&stack0x00000090,0);
  *(int32_t *)(unaff_RDI + 2) = in_stack_00000090;
  *(uint64_t **)(unaff_R14 + 8) = unaff_RDI;
  if ((int)unaff_RBX < *(int *)(unaff_RBP + 0x60)) {
    uVar5 = unaff_RBX & 0xffffffff;
    do {
      piVar2 = *(int **)(uVar5 + *(longlong *)(unaff_RBP + 0x68));
      iVar4 = (int)unaff_RBX;
      if (*piVar2 == 0) {
        fVar1 = (float)piVar2[0xe];
        lVar3 = *(longlong *)(unaff_R14 + 8);
        if (iVar4 == 1) {
          if (-80.0 < fVar1) {
            uVar6 = powf(0x41200000,fVar1 * 0.05);
          }
          else {
            uVar6 = 0;
          }
          *(int32_t *)(lVar3 + 0x28) = uVar6;
        }
        else {
          if (iVar4 != 2) {
            return 0x1f;
          }
          if (-80.0 < fVar1) {
            uVar6 = powf(0x41200000,fVar1 * 0.05);
            *(int32_t *)(lVar3 + 0x2c) = uVar6;
          }
          else {
            *(int32_t *)(lVar3 + 0x2c) = 0;
          }
        }
      }
      else if (*piVar2 == 2) {
        if (iVar4 != 3) {
          return 0x1f;
        }
        *(bool *)(*(longlong *)(unaff_R14 + 8) + 0x14) = piVar2[0xc] != 0;
      }
      unaff_RBX = (ulonglong)(iVar4 + 1U);
      uVar5 = uVar5 + 8;
    } while ((int)(iVar4 + 1U) < *(int *)(unaff_RBP + 0x60));
  }
  return 0;
}





// 函数: void FUN_180790891(void)
void FUN_180790891(void)

{
  return;
}



uint64_t FUN_1807908a6(void)

{
  return 0x1f;
}



uint64_t FUN_1807908ad(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



