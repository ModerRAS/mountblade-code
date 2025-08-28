#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part261.c - 16 个函数

// 函数: void FUN_180816fb0(uint64_t param_1,uint64_t *param_2)
void FUN_180816fb0(uint64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t *plVar3;
  int iVar4;
  int *piVar5;
  
  lVar1 = param_2[4];
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    return;
  }
  iVar4 = 0;
  iVar2 = 0;
  if (0 < *(int *)(lVar1 + 8)) {
    plVar3 = (int64_t *)(lVar1 + 0x20);
    do {
      if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
        FUN_1807c41d0(param_1);
      }
      iVar2 = iVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (iVar2 < *(int *)(lVar1 + 8));
  }
  iVar2 = 0;
  if (0 < *(int *)(lVar1 + 0xc)) {
    piVar5 = (int *)(lVar1 + 0x220);
    plVar3 = (int64_t *)(lVar1 + 800);
    do {
      if (*plVar3 != 0) {
        (**(code **)(*(int64_t *)(&unknown_var_4256_ptr + (int64_t)*piVar5 * 8) + 0x10))(param_1);
      }
      iVar2 = iVar2 + 1;
      plVar3 = plVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < *(int *)(lVar1 + 0xc));
  }
  iVar2 = 0;
  if (0 < *(int *)(lVar1 + 0x10)) {
    piVar5 = (int *)(lVar1 + 0x520);
    plVar3 = (int64_t *)(lVar1 + 0x620);
    do {
      if (*plVar3 != 0) {
        (**(code **)(*(int64_t *)(&unknown_var_4216_ptr + (int64_t)*piVar5 * 8) + 0x18))(param_1);
      }
      iVar2 = iVar2 + 1;
      plVar3 = plVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < *(int *)(lVar1 + 0x10));
  }
  iVar2 = 0;
  if (0 < *(int *)(lVar1 + 0x14)) {
    piVar5 = (int *)(lVar1 + 0x820);
    plVar3 = (int64_t *)(lVar1 + 0x920);
    do {
      if (*plVar3 != 0) {
        (**(code **)(*(int64_t *)(&unknown_var_4232_ptr + (int64_t)*piVar5 * 8) + 0x18))(param_1);
      }
      iVar2 = iVar2 + 1;
      plVar3 = plVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < *(int *)(lVar1 + 0x14));
  }
  if (0 < *(int *)(lVar1 + 0x18)) {
    plVar3 = (int64_t *)(lVar1 + 0xb20);
    do {
      if (*plVar3 != 0) {
        FUN_18082e170(param_1);
      }
      if (*(int64_t *)(lVar1 + 0x1320) != 0) {
        FUN_18082d940(param_1,*(int64_t *)(lVar1 + 0x1320) + (int64_t)iVar4 * 0x48);
      }
      iVar4 = iVar4 + 1;
      plVar3 = plVar3 + 1;
    } while (iVar4 < *(int *)(lVar1 + 0x18));
  }
  if (*(int64_t *)(lVar1 + 0x1320) != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0(param_1);
  }
                    // WARNING: Subroutine does not return
  FUN_1807c41d0(param_1,lVar1);
}





// 函数: void FUN_180816fcc(void)
void FUN_180816fcc(void)

{
  int64_t unaff_RBX;
  int iVar1;
  int64_t *plVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  iVar1 = 0;
  if (0 < *(int *)(unaff_RBX + 8)) {
    plVar2 = (int64_t *)(unaff_RBX + 0x20);
    do {
      if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_1807c41d0();
      }
      iVar1 = iVar1 + 1;
      plVar2 = plVar2 + 1;
    } while (iVar1 < *(int *)(unaff_RBX + 8));
  }
  iVar1 = 0;
  if (0 < *(int *)(unaff_RBX + 0xc)) {
    piVar4 = (int *)(unaff_RBX + 0x220);
    plVar2 = (int64_t *)(unaff_RBX + 800);
    do {
      if (*plVar2 != 0) {
        (**(code **)(*(int64_t *)(&unknown_var_4256_ptr + (int64_t)*piVar4 * 8) + 0x10))();
      }
      iVar1 = iVar1 + 1;
      plVar2 = plVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar1 < *(int *)(unaff_RBX + 0xc));
  }
  iVar1 = 0;
  if (0 < *(int *)(unaff_RBX + 0x10)) {
    piVar4 = (int *)(unaff_RBX + 0x520);
    plVar2 = (int64_t *)(unaff_RBX + 0x620);
    do {
      if (*plVar2 != 0) {
        (**(code **)(*(int64_t *)(&unknown_var_4216_ptr + (int64_t)*piVar4 * 8) + 0x18))();
      }
      iVar1 = iVar1 + 1;
      plVar2 = plVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar1 < *(int *)(unaff_RBX + 0x10));
  }
  iVar1 = 0;
  if (0 < *(int *)(unaff_RBX + 0x14)) {
    piVar4 = (int *)(unaff_RBX + 0x820);
    plVar2 = (int64_t *)(unaff_RBX + 0x920);
    do {
      if (*plVar2 != 0) {
        (**(code **)(*(int64_t *)(&unknown_var_4232_ptr + (int64_t)*piVar4 * 8) + 0x18))();
      }
      iVar1 = iVar1 + 1;
      plVar2 = plVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar1 < *(int *)(unaff_RBX + 0x14));
  }
  if (0 < *(int *)(unaff_RBX + 0x18)) {
    plVar2 = (int64_t *)(unaff_RBX + 0xb20);
    do {
      if (*plVar2 != 0) {
        FUN_18082e170();
      }
      if (*(int64_t *)(unaff_RBX + 0x1320) != 0) {
        FUN_18082d940();
      }
      iVar3 = iVar3 + 1;
      plVar2 = plVar2 + 1;
    } while (iVar3 < *(int *)(unaff_RBX + 0x18));
  }
  if (*(int64_t *)(unaff_RBX + 0x1320) != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0();
  }
                    // WARNING: Subroutine does not return
  FUN_1807c41d0();
}





// 函数: void FUN_180816fda(void)
void FUN_180816fda(void)

{
  int64_t unaff_RBX;
  int unaff_ESI;
  int64_t *plVar1;
  int unaff_EDI;
  int iVar2;
  int *piVar3;
  
  if (unaff_EDI < *(int *)(unaff_RBX + 8)) {
    plVar1 = (int64_t *)(unaff_RBX + 0x20);
    do {
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_1807c41d0();
      }
      unaff_ESI = unaff_ESI + 1;
      plVar1 = plVar1 + 1;
    } while (unaff_ESI < *(int *)(unaff_RBX + 8));
  }
  if (unaff_EDI < *(int *)(unaff_RBX + 0xc)) {
    piVar3 = (int *)(unaff_RBX + 0x220);
    plVar1 = (int64_t *)(unaff_RBX + 800);
    iVar2 = unaff_EDI;
    do {
      if (*plVar1 != 0) {
        (**(code **)(*(int64_t *)(&unknown_var_4256_ptr + (int64_t)*piVar3 * 8) + 0x10))();
      }
      iVar2 = iVar2 + 1;
      plVar1 = plVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(unaff_RBX + 0xc));
  }
  if (unaff_EDI < *(int *)(unaff_RBX + 0x10)) {
    piVar3 = (int *)(unaff_RBX + 0x520);
    plVar1 = (int64_t *)(unaff_RBX + 0x620);
    iVar2 = unaff_EDI;
    do {
      if (*plVar1 != 0) {
        (**(code **)(*(int64_t *)(&unknown_var_4216_ptr + (int64_t)*piVar3 * 8) + 0x18))();
      }
      iVar2 = iVar2 + 1;
      plVar1 = plVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(unaff_RBX + 0x10));
  }
  if (unaff_EDI < *(int *)(unaff_RBX + 0x14)) {
    piVar3 = (int *)(unaff_RBX + 0x820);
    plVar1 = (int64_t *)(unaff_RBX + 0x920);
    iVar2 = unaff_EDI;
    do {
      if (*plVar1 != 0) {
        (**(code **)(*(int64_t *)(&unknown_var_4232_ptr + (int64_t)*piVar3 * 8) + 0x18))();
      }
      iVar2 = iVar2 + 1;
      plVar1 = plVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(unaff_RBX + 0x14));
  }
  if (unaff_EDI < *(int *)(unaff_RBX + 0x18)) {
    plVar1 = (int64_t *)(unaff_RBX + 0xb20);
    do {
      if (*plVar1 != 0) {
        FUN_18082e170();
      }
      if (*(int64_t *)(unaff_RBX + 0x1320) != 0) {
        FUN_18082d940();
      }
      unaff_EDI = unaff_EDI + 1;
      plVar1 = plVar1 + 1;
    } while (unaff_EDI < *(int *)(unaff_RBX + 0x18));
  }
  if (*(int64_t *)(unaff_RBX + 0x1320) != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0();
  }
                    // WARNING: Subroutine does not return
  FUN_1807c41d0();
}





// 函数: void FUN_1808170f1(void)
void FUN_1808170f1(void)

{
  int64_t unaff_RBX;
  int64_t *plVar1;
  int unaff_EDI;
  
  plVar1 = (int64_t *)(unaff_RBX + 0xb20);
  do {
    if (*plVar1 != 0) {
      FUN_18082e170();
    }
    if (*(int64_t *)(unaff_RBX + 0x1320) != 0) {
      FUN_18082d940();
    }
    unaff_EDI = unaff_EDI + 1;
    plVar1 = plVar1 + 1;
  } while (unaff_EDI < *(int *)(unaff_RBX + 0x18));
  if (*(int64_t *)(unaff_RBX + 0x1320) != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0();
  }
                    // WARNING: Subroutine does not return
  FUN_1807c41d0();
}





// 函数: void FUN_180817148(void)
void FUN_180817148(void)

{
                    // WARNING: Subroutine does not return
  FUN_1807c41d0();
}



uint64_t FUN_180817180(uint64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  lVar1 = FUN_1807c4170(param_1,1,0x1330);
  uVar2 = 0;
  param_2[4] = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0xffffff75;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808171d0(uint64_t param_1,int *param_2,int64_t param_3,uint64_t *param_4)
void FUN_1808171d0(uint64_t param_1,int *param_2,int64_t param_3,uint64_t *param_4)

{
  int8_t uVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int8_t auStack_88 [32];
  int8_t auStack_68 [32];
  int iStack_48;
  short sStack_44;
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_88;
  if (param_4 != (uint64_t *)0x0) {
    func_0x00018082d920(auStack_68,*param_4,*(int32_t *)(param_4 + 1));
    iVar3 = FUN_18082d7f0(auStack_68,8);
    piVar4 = &iStack_48;
    iStack_48 = 0;
    sStack_44 = 0;
    iVar5 = 6;
    do {
      uVar1 = FUN_18082d7f0(auStack_68,8);
      *(int8_t *)piVar4 = uVar1;
      piVar4 = (int *)((int64_t)piVar4 + 1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if ((iStack_48 == 0x62726f76) && (sStack_44 == 0x7369)) {
      if (iVar3 == 1) {
        if (((*(int *)((int64_t)param_4 + 0xc) != 0) && (param_2[2] == 0)) &&
           (piVar4 = *(int **)(param_2 + 8), piVar4 != (int *)0x0)) {
          iVar5 = FUN_18082d7f0(auStack_68,0x20);
          *param_2 = iVar5;
          if (iVar5 == 0) {
            iVar5 = FUN_18082d7f0(auStack_68,8);
            param_2[1] = iVar5;
            iVar5 = FUN_18082d7f0(auStack_68,0x20);
            param_2[2] = iVar5;
            iVar5 = FUN_18082d7f0(auStack_68,0x20);
            param_2[3] = iVar5;
            iVar5 = FUN_18082d7f0(auStack_68,0x20);
            param_2[4] = iVar5;
            iVar5 = FUN_18082d7f0(auStack_68,0x20);
            param_2[5] = iVar5;
            bVar2 = FUN_18082d7f0(auStack_68,4);
            *piVar4 = 1 << (bVar2 & 0x1f);
            bVar2 = FUN_18082d7f0(auStack_68,4);
            iVar5 = 1 << (bVar2 & 0x1f);
            piVar4[1] = iVar5;
            if ((((param_2[2] < 1) || (param_2[1] < 1)) ||
                ((*piVar4 < 0x40 || ((iVar5 < *piVar4 || (0x2000 < iVar5)))))) ||
               (iVar5 = FUN_18082d7f0(auStack_68,1), iVar5 != 1)) {
              FUN_180816fb0(param_1,param_2);
            }
          }
        }
      }
      else if (iVar3 == 3) {
        if (param_2[2] != 0) {
          FUN_1808178f0(param_1,param_3,auStack_68);
        }
      }
      else if (((iVar3 == 5) && (param_2[2] != 0)) && (*(int64_t *)(param_3 + 0x18) != 0)) {
        FUN_180817560(param_1,param_2,auStack_68);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (uint64_t)auStack_88);
}





// 函数: void FUN_18081720e(void)
void FUN_18081720e(void)

{
  int *piVar1;
  int8_t uVar2;
  byte bVar3;
  int iVar4;
  int32_t *puVar5;
  int *unaff_RSI;
  int iVar6;
  int64_t unaff_R12;
  int64_t unaff_R14;
  int8_t auStackX_20 [8];
  int in_stack_00000040;
  short sStack0000000000000044;
  uint64_t in_stack_00000048;
  
  func_0x00018082d920();
  iVar4 = FUN_18082d7f0(auStackX_20,8);
  puVar5 = &stack0x00000040;
  in_stack_00000040 = 0;
  sStack0000000000000044 = 0;
  iVar6 = 6;
  do {
    uVar2 = FUN_18082d7f0(auStackX_20,8);
    *(int8_t *)puVar5 = uVar2;
    puVar5 = (int32_t *)((int64_t)puVar5 + 1);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if ((in_stack_00000040 == 0x62726f76) && (sStack0000000000000044 == 0x7369)) {
    if (iVar4 == 1) {
      if (((*(int *)(unaff_R14 + 0xc) != 0) && (unaff_RSI[2] == 0)) &&
         (piVar1 = *(int **)(unaff_RSI + 8), piVar1 != (int *)0x0)) {
        iVar6 = FUN_18082d7f0(auStackX_20,0x20);
        *unaff_RSI = iVar6;
        if (iVar6 == 0) {
          iVar6 = FUN_18082d7f0(auStackX_20,8);
          unaff_RSI[1] = iVar6;
          iVar6 = FUN_18082d7f0(auStackX_20,0x20);
          unaff_RSI[2] = iVar6;
          iVar6 = FUN_18082d7f0(auStackX_20,0x20);
          unaff_RSI[3] = iVar6;
          iVar6 = FUN_18082d7f0(auStackX_20,0x20);
          unaff_RSI[4] = iVar6;
          iVar6 = FUN_18082d7f0(auStackX_20,0x20);
          unaff_RSI[5] = iVar6;
          bVar3 = FUN_18082d7f0(auStackX_20,4);
          *piVar1 = 1 << (bVar3 & 0x1f);
          bVar3 = FUN_18082d7f0(auStackX_20,4);
          iVar6 = 1 << (bVar3 & 0x1f);
          piVar1[1] = iVar6;
          if ((((unaff_RSI[2] < 1) || (unaff_RSI[1] < 1)) ||
              ((*piVar1 < 0x40 || ((iVar6 < *piVar1 || (0x2000 < iVar6)))))) ||
             (iVar6 = FUN_18082d7f0(auStackX_20,1), iVar6 != 1)) {
            FUN_180816fb0();
          }
        }
      }
    }
    else if (iVar4 == 3) {
      if (unaff_RSI[2] != 0) {
        FUN_1808178f0();
      }
    }
    else if (((iVar4 == 5) && (unaff_RSI[2] != 0)) && (*(int64_t *)(unaff_R12 + 0x18) != 0)) {
      FUN_180817560();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18081726f(void)
void FUN_18081726f(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_RSI;
  int64_t unaff_R12;
  int64_t unaff_R14;
  int8_t auStackX_20 [8];
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  
  if (in_stack_00000040._4_2_ == 0x7369) {
    if (unaff_EBP == 1) {
      if (((*(int *)(unaff_R14 + 0xc) != 0) && (unaff_RSI[2] == 0)) &&
         (piVar1 = *(int **)(unaff_RSI + 8), piVar1 != (int *)0x0)) {
        iVar3 = FUN_18082d7f0(auStackX_20,0x20);
        *unaff_RSI = iVar3;
        if (iVar3 == 0) {
          iVar3 = FUN_18082d7f0(auStackX_20,8);
          unaff_RSI[1] = iVar3;
          iVar3 = FUN_18082d7f0(auStackX_20,0x20);
          unaff_RSI[2] = iVar3;
          iVar3 = FUN_18082d7f0(auStackX_20,0x20);
          unaff_RSI[3] = iVar3;
          iVar3 = FUN_18082d7f0(auStackX_20,0x20);
          unaff_RSI[4] = iVar3;
          iVar3 = FUN_18082d7f0(auStackX_20,0x20);
          unaff_RSI[5] = iVar3;
          bVar2 = FUN_18082d7f0(auStackX_20,4);
          *piVar1 = 1 << (bVar2 & 0x1f);
          bVar2 = FUN_18082d7f0(auStackX_20,4);
          iVar3 = 1 << (bVar2 & 0x1f);
          piVar1[1] = iVar3;
          if ((((unaff_RSI[2] < 1) || (unaff_RSI[1] < 1)) ||
              ((*piVar1 < 0x40 || ((iVar3 < *piVar1 || (0x2000 < iVar3)))))) ||
             (iVar3 = FUN_18082d7f0(auStackX_20,1), iVar3 != 1)) {
            FUN_180816fb0();
          }
        }
      }
    }
    else if (unaff_EBP == 3) {
      if (unaff_RSI[2] != 0) {
        FUN_1808178f0();
      }
    }
    else if (((unaff_EBP == 5) && (unaff_RSI[2] != 0)) && (*(int64_t *)(unaff_R12 + 0x18) != 0)) {
      FUN_180817560();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180817430(uint64_t *param_1)
void FUN_180817430(uint64_t *param_1)

{
  int8_t uVar1;
  int iVar2;
  int *piVar3;
  int8_t auStack_58 [32];
  int8_t auStack_38 [32];
  int iStack_18;
  short sStack_14;
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
  if (param_1 != (uint64_t *)0x0) {
    func_0x00018082d920(auStack_38,*param_1,*(int32_t *)(param_1 + 1));
    if (*(int *)((int64_t)param_1 + 0xc) != 0) {
      iVar2 = FUN_18082d7f0(auStack_38,8);
      if (iVar2 == 1) {
        iStack_18 = 0;
        piVar3 = &iStack_18;
        sStack_14 = 0;
        iVar2 = 6;
        do {
          uVar1 = FUN_18082d7f0(auStack_38,8);
          *(int8_t *)piVar3 = uVar1;
          piVar3 = (int *)((int64_t)piVar3 + 1);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        if ((iStack_18 == 0x62726f76) && (sStack_14 == 0x7369)) {
                    // WARNING: Subroutine does not return
          FUN_1808fc050(uStack_10 ^ (uint64_t)auStack_58);
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (uint64_t)auStack_58);
}





// 函数: void FUN_180817482(void)
void FUN_180817482(void)

{
  int8_t uVar1;
  int in_EAX;
  int8_t *puVar2;
  int iVar3;
  int8_t auStackX_20 [8];
  int iStack0000000000000040;
  short sStack0000000000000044;
  uint64_t in_stack_00000048;
  
  puVar2 = (int8_t *)&stack0x00000040;
  sStack0000000000000044 = (short)in_EAX;
  iVar3 = in_EAX + 6;
  iStack0000000000000040 = in_EAX;
  do {
    uVar1 = FUN_18082d7f0(auStackX_20,8);
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if ((iStack0000000000000040 == 0x62726f76) && (sStack0000000000000044 == 0x7369)) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1808174cb(void)
void FUN_1808174cb(void)

{
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  
  if (in_stack_00000040._4_2_ == 0x7369) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180817510(uint64_t param_1,int8_t *param_2,int param_3)
void FUN_180817510(uint64_t param_1,int8_t *param_2,int param_3)

{
  int8_t uVar1;
  
  if (param_3 != 0) {
    do {
      uVar1 = FUN_18082d7f0(param_1,8);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



int FUN_180817560(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int32_t uVar6;
  int64_t lVar7;
  int iVar8;
  int64_t *plVar9;
  uint *puVar10;
  int *piVar11;
  int iVar12;
  int iStackX_10;
  
  lVar1 = *(int64_t *)(param_2 + 0x20);
  iStackX_10 = -0x85;
  if (lVar1 == 0) {
    return -0x81;
  }
  iVar2 = FUN_18082d7f0(param_3,8);
  *(int *)(lVar1 + 0x18) = iVar2 + 1;
  iVar3 = iStackX_10;
  if (0 < iVar2 + 1) {
    iVar12 = 0;
    plVar9 = (int64_t *)(lVar1 + 0xb20);
    iVar2 = 0;
    do {
      lVar7 = FUN_1807c4170(param_1,1,0x38);
      *plVar9 = lVar7;
      if (lVar7 == 0) goto LAB_1808178ba;
      iVar3 = FUN_18082f330(param_1,param_3,lVar7);
      if (iVar3 != 0) goto LAB_1808178c2;
      iVar2 = iVar2 + 1;
      plVar9 = plVar9 + 1;
    } while (iVar2 < *(int *)(lVar1 + 0x18));
    iVar2 = FUN_18082d7f0(param_3,6);
    iVar3 = iStackX_10;
    if (0 < iVar2 + 1) {
      iVar8 = 0;
      do {
        iVar4 = FUN_18082d7f0(param_3,0x10);
        if (iVar4 != 0) goto LAB_1808178c2;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar2 + 1);
      iVar2 = FUN_18082d7f0(param_3,6);
      *(int *)(lVar1 + 0x10) = iVar2 + 1;
      if (0 < iVar2 + 1) {
        iVar2 = 0;
        plVar9 = (int64_t *)(lVar1 + 0x620);
        puVar10 = (uint *)(lVar1 + 0x520);
        do {
          uVar5 = FUN_18082d7f0(param_3,0x10);
          *puVar10 = uVar5;
          if (uVar5 == 0) {
            iStackX_10 = -0x86;
            iVar3 = iStackX_10;
            goto LAB_1808178c2;
          }
          if (1 < uVar5) goto LAB_1808178c2;
          lVar7 = (**(code **)(*(int64_t *)(&unknown_var_4216_ptr + (int64_t)(int)uVar5 * 8) + 8))
                            (param_1,param_2,param_3);
          *plVar9 = lVar7;
          if (lVar7 == 0) goto LAB_1808178c2;
          iVar2 = iVar2 + 1;
          puVar10 = puVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (iVar2 < *(int *)(lVar1 + 0x10));
        iVar2 = FUN_18082d7f0(param_3,6);
        *(int *)(lVar1 + 0x14) = iVar2 + 1;
        if (0 < iVar2 + 1) {
          iVar2 = 0;
          plVar9 = (int64_t *)(lVar1 + 0x920);
          puVar10 = (uint *)(lVar1 + 0x820);
          do {
            uVar5 = FUN_18082d7f0(param_3,0x10);
            *puVar10 = uVar5;
            if (2 < uVar5) goto LAB_1808178c2;
            lVar7 = (**(code **)(*(int64_t *)(&unknown_var_4232_ptr + (int64_t)(int)uVar5 * 8) + 8))
                              (param_1,param_2,param_3);
            *plVar9 = lVar7;
            if (lVar7 == 0) goto LAB_1808178c2;
            iVar2 = iVar2 + 1;
            puVar10 = puVar10 + 1;
            plVar9 = plVar9 + 1;
          } while (iVar2 < *(int *)(lVar1 + 0x14));
          iVar2 = FUN_18082d7f0(param_3,6);
          *(int *)(lVar1 + 0xc) = iVar2 + 1;
          if (0 < iVar2 + 1) {
            iVar2 = 0;
            plVar9 = (int64_t *)(lVar1 + 800);
            piVar11 = (int *)(lVar1 + 0x220);
            do {
              iVar8 = FUN_18082d7f0(param_3,0x10);
              *piVar11 = iVar8;
              if (iVar8 != 0) goto LAB_1808178c2;
              lVar7 = FUN_18083d360(param_1,param_2,param_3);
              *plVar9 = lVar7;
              if (lVar7 == 0) goto LAB_1808178c2;
              iVar2 = iVar2 + 1;
              piVar11 = piVar11 + 1;
              plVar9 = plVar9 + 1;
            } while (iVar2 < *(int *)(lVar1 + 0xc));
            iVar2 = FUN_18082d7f0(param_3,6);
            *(int *)(lVar1 + 8) = iVar2 + 1;
            if (0 < iVar2 + 1) {
              plVar9 = (int64_t *)(lVar1 + 0x20);
              do {
                lVar7 = FUN_1807c4170(param_1,1,0x10);
                *plVar9 = lVar7;
                if (lVar7 == 0) goto LAB_1808178ba;
                uVar6 = FUN_18082d7f0(param_3,1);
                *(int32_t *)*plVar9 = uVar6;
                uVar6 = FUN_18082d7f0(param_3,0x10);
                *(int32_t *)(*plVar9 + 4) = uVar6;
                uVar6 = FUN_18082d7f0(param_3,0x10);
                *(int32_t *)(*plVar9 + 8) = uVar6;
                uVar6 = FUN_18082d7f0(param_3,8);
                *(int32_t *)(*plVar9 + 0xc) = uVar6;
                lVar7 = *plVar9;
                if ((((0 < *(int *)(lVar7 + 4)) || (0 < *(int *)(lVar7 + 8))) ||
                    (*(int *)(lVar1 + 0xc) <= *(int *)(lVar7 + 0xc))) || (*(int *)(lVar7 + 0xc) < 0)
                   ) goto LAB_1808178c2;
                iVar12 = iVar12 + 1;
                plVar9 = plVar9 + 1;
              } while (iVar12 < *(int *)(lVar1 + 8));
              iVar2 = FUN_18082d7f0(param_3,1);
              if (iVar2 == 1) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
LAB_1808178c2:
  iStackX_10 = iVar3;
  FUN_180816fb0(param_1,param_2);
  return iStackX_10;
LAB_1808178ba:
  iStackX_10 = -0x8b;
  iVar3 = iStackX_10;
  goto LAB_1808178c2;
}



uint64_t FUN_1808178f0(uint64_t param_1,int64_t *param_2,int64_t param_3)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar9;
  int64_t lStackX_20;
  uint64_t uVar8;
  
  uVar9 = 0xffffff7b;
  iVar1 = FUN_18082d7f0(param_3,0x20);
  uVar5 = 0;
  if ((-1 < iVar1) && (iVar1 <= *(int *)(param_3 + 0x18) + -8)) {
    lVar3 = FUN_1807c4170(param_1,iVar1 + 1,1);
    param_2[3] = lVar3;
    if (lVar3 != 0) {
      FUN_180817510(param_3,lVar3,iVar1);
      iVar1 = FUN_18082d7f0(param_3,0x20);
      if ((iVar1 < 0) ||
         (iVar2 = func_0x00018082d6f0(param_3), *(int *)(param_3 + 0x18) - iVar2 >> 2 < iVar1))
      goto LAB_180817a88;
      *(int *)(param_2 + 2) = iVar1;
      lVar3 = FUN_1807c4170(param_1,iVar1 + 1,8);
      *param_2 = lVar3;
      if (lVar3 != 0) {
        lVar3 = FUN_1807c4170(param_1,(int)param_2[2] + 1,4);
        param_2[1] = lVar3;
        if (lVar3 != 0) {
          if (0 < (int)param_2[2]) {
            lStackX_20 = 0;
            uVar6 = uVar5;
            uVar8 = uVar5;
            do {
              iVar1 = FUN_18082d7f0(param_3,0x20);
              if ((iVar1 < 0) ||
                 (iVar2 = func_0x00018082d6f0(param_3), *(int *)(param_3 + 0x18) - iVar2 < iVar1))
              goto LAB_180817a88;
              *(int *)(lStackX_20 + param_2[1]) = iVar1;
              uVar4 = FUN_1807c4170(param_1,iVar1 + 1,1);
              *(uint64_t *)(uVar6 + *param_2) = uVar4;
              if (*(int64_t *)(uVar6 + *param_2) == 0) goto LAB_180817a82;
              FUN_180817510(param_3,*(int64_t *)(uVar6 + *param_2),iVar1);
              lStackX_20 = lStackX_20 + 4;
              uVar7 = (int)uVar8 + 1;
              uVar8 = (uint64_t)uVar7;
              uVar6 = uVar6 + 8;
            } while ((int)uVar7 < (int)param_2[2]);
          }
          iVar1 = FUN_18082d7f0(param_3,1);
          if (iVar1 == 1) {
            return 0;
          }
          goto LAB_180817a88;
        }
      }
    }
LAB_180817a82:
    uVar9 = 0xffffff75;
  }
LAB_180817a88:
  if (param_2 != (int64_t *)0x0) {
    lVar3 = *param_2;
    if (lVar3 != 0) {
      uVar6 = uVar5;
      if (0 < (int)param_2[2]) {
        do {
          if (*(int64_t *)(uVar5 + lVar3) != 0) {
                    // WARNING: Subroutine does not return
            FUN_1807c41d0(param_1,*(int64_t *)(uVar5 + lVar3));
          }
          uVar7 = (int)uVar6 + 1;
          uVar5 = uVar5 + 8;
          uVar6 = (uint64_t)uVar7;
        } while ((int)uVar7 < (int)param_2[2]);
      }
                    // WARNING: Subroutine does not return
      FUN_1807c41d0(param_1,lVar3);
    }
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_1807c41d0(param_1);
    }
    if (param_2[3] != 0) {
                    // WARNING: Subroutine does not return
      FUN_1807c41d0(param_1);
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return uVar9;
}



uint64_t FUN_180817b30(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  
  if (param_2 == (int64_t *)0x0) {
    return 0;
  }
  FUN_180830310(param_1,param_2 + 0x51);
  FUN_180830440(param_1,param_2 + 0x42);
  FUN_18082f8b0(param_1,param_2 + 0x13);
  lVar1 = param_2[0xd];
  if ((lVar1 != 0) && ((int)param_2[8] != 0)) {
    iVar2 = 0;
    if (0 < (int)param_2[8]) {
      do {
        FUN_180816fb0(param_1,param_2[0xd] + (int64_t)iVar2 * 0x28);
        FUN_180816ee0(param_1,(int64_t)iVar2 * 0x20 + param_2[0xe]);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_2[8]);
      lVar1 = param_2[0xd];
    }
                    // WARNING: Subroutine does not return
    FUN_1807c41d0(param_1,lVar1);
  }
  if (param_2[10] != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0(param_1);
  }
  if (param_2[0xc] == 0) {
    if (param_2[0xb] != 0) {
                    // WARNING: Subroutine does not return
      FUN_1807c41d0(param_1);
    }
    if (param_2[9] == 0) {
      FUN_18082ff80(param_1,param_2 + 4);
      if ((*param_2 != 0) && ((code *)param_2[100] != (code *)0x0)) {
        (*(code *)param_2[100])();
      }
                    // WARNING: Subroutine does not return
      memset(param_2,0,0x330);
    }
                    // WARNING: Subroutine does not return
    FUN_1807c41d0(param_1);
  }
                    // WARNING: Subroutine does not return
  FUN_1807c41d0(param_1);
}





// 函数: void FUN_180817b83(void)
void FUN_180817b83(void)

{
  int in_EAX;
  int64_t unaff_RBX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < in_EAX) {
    do {
      FUN_180816fb0();
      FUN_180816ee0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_RBX + 0x40));
  }
                    // WARNING: Subroutine does not return
  FUN_1807c41d0();
}





// 函数: void FUN_180817b8e(void)
void FUN_180817b8e(void)

{
  int64_t unaff_RBX;
  int unaff_EBP;
  
  do {
    FUN_180816fb0();
    FUN_180816ee0();
    unaff_EBP = unaff_EBP + 1;
  } while (unaff_EBP < *(int *)(unaff_RBX + 0x40));
                    // WARNING: Subroutine does not return
  FUN_1807c41d0();
}





// 函数: void FUN_180817bda(void)
void FUN_180817bda(void)

{
                    // WARNING: Subroutine does not return
  FUN_1807c41d0();
}





// 函数: void FUN_180817bf3(void)
void FUN_180817bf3(void)

{
  int64_t *unaff_RBX;
  
  if (unaff_RBX[10] != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0();
  }
  if (unaff_RBX[0xc] != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0();
  }
  if (unaff_RBX[0xb] != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0();
  }
  if (unaff_RBX[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0();
  }
  FUN_18082ff80();
  if ((*unaff_RBX != 0) && ((code *)unaff_RBX[100] != (code *)0x0)) {
    (*(code *)unaff_RBX[100])();
  }
                    // WARNING: Subroutine does not return
  memset();
}





