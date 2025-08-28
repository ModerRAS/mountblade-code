/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part054_sub001.c - 20 个函数

#include "TaleWorlds.Native.Split.h"

// 05_networking_part054.c - 20 个函数


// 函数: void FUN_18086b48b(void)
void FUN_18086b48b(void)

{
  uint64_t in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18086b4b0(int64_t param_1,uint64_t *param_2)
void FUN_18086b4b0(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int8_t auStack_98 [32];
  uint64_t *puStack_78;
  int8_t auStack_70 [40];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  puStack_78 = param_2;
  lVar3 = (**(code **)(*(int64_t *)*param_2 + 0x28))((int64_t *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x198);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 400));
        if (lVar1 == 0) {
LAB_18086b61a:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(int64_t *)(param_1 + 400) + (int64_t)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(int64_t)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x198) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(int64_t *)*param_2 + 0x290))((int64_t *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            SystemController(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x198);
          if (lVar4 == 0) goto LAB_18086b61a;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(int64_t *)(lVar3 + -8 + *(int64_t *)(param_1 + 400)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086b612;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086b601:
              *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 400)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x198);
            }
            else {
              lVar1 = *(int64_t *)(lVar3 + 8 + *(int64_t *)(param_1 + 400));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086b601;
              }
            }
          }
LAB_18086b612:
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        }
        param_2 = puStack_78;
      } while (iVar5 < iVar6);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_98);
}






// 函数: void FUN_18086b4ef(void)
void FUN_18086b4ef(void)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int iVar4;
  int iVar5;
  uint64_t *unaff_R14;
  int64_t lVar6;
  uint64_t *puStackX_20;
  uint64_t in_stack_00000050;
  
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0x198);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 400));
      if (lVar1 == 0) {
LAB_18086b61a:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(int64_t *)(unaff_RBP + 400) + (int64_t)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(int64_t)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x198) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x290))((int64_t *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          SystemController(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x198);
        if (lVar3 == 0) goto LAB_18086b61a;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(int64_t *)(lVar6 + -8 + *(int64_t *)(unaff_RBP + 400)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(int64_t *)(lVar6 + 8 + *(int64_t *)(unaff_RBP + 400));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086b612;
          }
          *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 400)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x198);
        }
LAB_18086b612:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_18086b50c(void)
void FUN_18086b50c(void)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t *unaff_R14;
  int64_t lVar4;
  uint64_t *puStackX_20;
  uint64_t in_stack_00000050;
  
  lVar4 = 0;
  do {
    lVar1 = *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 400));
    if (lVar1 == 0) {
LAB_18086b61a:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(int64_t *)(unaff_RBP + 400) + (int64_t)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(int64_t)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x198) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x290))((int64_t *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        SystemController(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x198);
      if (lVar3 == 0) goto LAB_18086b61a;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(int64_t *)(lVar4 + -8 + *(int64_t *)(unaff_RBP + 400)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086b612;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086b601:
          *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 400)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x198);
        }
        else {
          lVar1 = *(int64_t *)(lVar4 + 8 + *(int64_t *)(unaff_RBP + 400));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086b601;
          }
        }
      }
LAB_18086b612:
      unaff_ESI = unaff_ESI + 1;
      lVar4 = lVar4 + 8;
    }
    unaff_R14 = puStackX_20;
    if (unaff_EDI <= unaff_ESI) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
    }
  } while( true );
}






// 函数: void FUN_18086b67f(void)
void FUN_18086b67f(void)

{
  uint64_t in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_18086b68e(void)
void FUN_18086b68e(void)

{
  uint64_t in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18086b6b0(int64_t param_1,uint64_t *param_2)
void FUN_18086b6b0(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int8_t auStack_98 [32];
  uint64_t *puStack_78;
  int8_t auStack_70 [40];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  puStack_78 = param_2;
  lVar3 = (**(code **)(*(int64_t *)*param_2 + 0x88))((int64_t *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x158);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x150));
        if (lVar1 == 0) {
LAB_18086b81a:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(int64_t *)(param_1 + 0x150) + (int64_t)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(int64_t)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x158) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(int64_t *)*param_2 + 0x2c0))((int64_t *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            SystemController(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x158);
          if (lVar4 == 0) goto LAB_18086b81a;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(int64_t *)(lVar3 + -8 + *(int64_t *)(param_1 + 0x150)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086b812;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086b801:
              *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x150)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x158);
            }
            else {
              lVar1 = *(int64_t *)(lVar3 + 8 + *(int64_t *)(param_1 + 0x150));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086b801;
              }
            }
          }
LAB_18086b812:
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        }
        param_2 = puStack_78;
      } while (iVar5 < iVar6);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_98);
}






// 函数: void FUN_18086b6f2(void)
void FUN_18086b6f2(void)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int iVar4;
  int iVar5;
  uint64_t *unaff_R14;
  int64_t lVar6;
  uint64_t *puStackX_20;
  uint64_t in_stack_00000050;
  
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0x158);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x150));
      if (lVar1 == 0) {
LAB_18086b81a:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(int64_t *)(unaff_RBP + 0x150) + (int64_t)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(int64_t)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x158) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x2c0))((int64_t *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          SystemController(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x158);
        if (lVar3 == 0) goto LAB_18086b81a;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(int64_t *)(lVar6 + -8 + *(int64_t *)(unaff_RBP + 0x150)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(int64_t *)(lVar6 + 8 + *(int64_t *)(unaff_RBP + 0x150));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086b812;
          }
          *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x150)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x158);
        }
LAB_18086b812:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_18086b70f(void)
void FUN_18086b70f(void)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t *unaff_R14;
  int64_t lVar4;
  uint64_t *puStackX_20;
  uint64_t in_stack_00000050;
  
  lVar4 = 0;
  do {
    lVar1 = *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x150));
    if (lVar1 == 0) {
LAB_18086b81a:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(int64_t *)(unaff_RBP + 0x150) + (int64_t)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(int64_t)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x158) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x2c0))((int64_t *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        SystemController(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x158);
      if (lVar3 == 0) goto LAB_18086b81a;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(int64_t *)(lVar4 + -8 + *(int64_t *)(unaff_RBP + 0x150)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086b812;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086b801:
          *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x150)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x158);
        }
        else {
          lVar1 = *(int64_t *)(lVar4 + 8 + *(int64_t *)(unaff_RBP + 0x150));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086b801;
          }
        }
      }
LAB_18086b812:
      unaff_ESI = unaff_ESI + 1;
      lVar4 = lVar4 + 8;
    }
    unaff_R14 = puStackX_20;
    if (unaff_EDI <= unaff_ESI) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
    }
  } while( true );
}






// 函数: void FUN_18086b87f(void)
void FUN_18086b87f(void)

{
  uint64_t in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_18086b88e(void)
void FUN_18086b88e(void)

{
  uint64_t in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18086b8b0(int64_t param_1,uint64_t *param_2)
void FUN_18086b8b0(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int8_t auStack_98 [32];
  uint64_t *puStack_78;
  int8_t auStack_70 [40];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  puStack_78 = param_2;
  lVar3 = (**(code **)(*(int64_t *)*param_2 + 0xf0))((int64_t *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x78);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x70));
        if (lVar1 == 0) {
LAB_18086ba00:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(int64_t *)(param_1 + 0x70) + (int64_t)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(int64_t)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x78) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(int64_t *)*param_2 + 800))((int64_t *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            SystemController(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x78);
          if (lVar4 == 0) goto LAB_18086ba00;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(int64_t *)(lVar3 + -8 + *(int64_t *)(param_1 + 0x70)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086b9f8;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086b9ed:
              *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x70)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x78);
            }
            else {
              lVar1 = *(int64_t *)(lVar3 + 8 + *(int64_t *)(param_1 + 0x70));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086b9ed;
              }
            }
          }
LAB_18086b9f8:
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        }
        param_2 = puStack_78;
      } while (iVar5 < iVar6);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_98);
}






// 函数: void FUN_18086b8f2(void)
void FUN_18086b8f2(void)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int iVar4;
  int iVar5;
  uint64_t *unaff_R14;
  int64_t lVar6;
  uint64_t *puStackX_20;
  uint64_t in_stack_00000050;
  
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0x78);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x70));
      if (lVar1 == 0) {
LAB_18086ba00:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(int64_t *)(unaff_RBP + 0x70) + (int64_t)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(int64_t)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x78) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 800))((int64_t *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          SystemController(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x78);
        if (lVar3 == 0) goto LAB_18086ba00;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(int64_t *)(lVar6 + -8 + *(int64_t *)(unaff_RBP + 0x70)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(int64_t *)(lVar6 + 8 + *(int64_t *)(unaff_RBP + 0x70));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086b9f8;
          }
          *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x70)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x78);
        }
LAB_18086b9f8:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_18086b90c(void)
void FUN_18086b90c(void)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t *unaff_R14;
  int64_t lVar4;
  uint64_t *puStackX_20;
  uint64_t in_stack_00000050;
  
  lVar4 = 0;
  do {
    lVar1 = *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x70));
    if (lVar1 == 0) {
LAB_18086ba00:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(int64_t *)(unaff_RBP + 0x70) + (int64_t)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(int64_t)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x78) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 800))((int64_t *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        SystemController(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x78);
      if (lVar3 == 0) goto LAB_18086ba00;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(int64_t *)(lVar4 + -8 + *(int64_t *)(unaff_RBP + 0x70)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086b9f8;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086b9ed:
          *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x70)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x78);
        }
        else {
          lVar1 = *(int64_t *)(lVar4 + 8 + *(int64_t *)(unaff_RBP + 0x70));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086b9ed;
          }
        }
      }
LAB_18086b9f8:
      unaff_ESI = unaff_ESI + 1;
      lVar4 = lVar4 + 8;
    }
    unaff_R14 = puStackX_20;
    if (unaff_EDI <= unaff_ESI) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
    }
  } while( true );
}






// 函数: void FUN_18086ba5c(void)
void FUN_18086ba5c(void)

{
  uint64_t in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_18086ba6b(void)
void FUN_18086ba6b(void)

{
  uint64_t in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18086ba90(int64_t param_1,uint64_t *param_2)
void FUN_18086ba90(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int8_t auStack_98 [32];
  uint64_t *puStack_78;
  int8_t auStack_70 [40];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  puStack_78 = param_2;
  lVar3 = (**(code **)(*(int64_t *)*param_2 + 0x40))((int64_t *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x1c8);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x1c0));
        if (lVar1 == 0) {
LAB_18086bbfa:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(int64_t *)(param_1 + 0x1c0) + (int64_t)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(int64_t)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x1c8) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(int64_t *)*param_2 + 0x270))((int64_t *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            SystemController(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x1c8);
          if (lVar4 == 0) goto LAB_18086bbfa;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(int64_t *)(lVar3 + -8 + *(int64_t *)(param_1 + 0x1c0)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086bbf2;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086bbe1:
              *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x1c0)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x1c8);
            }
            else {
              lVar1 = *(int64_t *)(lVar3 + 8 + *(int64_t *)(param_1 + 0x1c0));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086bbe1;
              }
            }
          }
LAB_18086bbf2:
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        }
        param_2 = puStack_78;
      } while (iVar5 < iVar6);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_98);
}






// 函数: void FUN_18086bacf(void)
void FUN_18086bacf(void)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int iVar4;
  int iVar5;
  uint64_t *unaff_R14;
  int64_t lVar6;
  uint64_t *puStackX_20;
  uint64_t in_stack_00000050;
  
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0x1c8);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x1c0));
      if (lVar1 == 0) {
LAB_18086bbfa:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(int64_t *)(unaff_RBP + 0x1c0) + (int64_t)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(int64_t)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x1c8) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x270))((int64_t *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          SystemController(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x1c8);
        if (lVar3 == 0) goto LAB_18086bbfa;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(int64_t *)(lVar6 + -8 + *(int64_t *)(unaff_RBP + 0x1c0)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(int64_t *)(lVar6 + 8 + *(int64_t *)(unaff_RBP + 0x1c0));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086bbf2;
          }
          *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x1c0)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x1c8);
        }
LAB_18086bbf2:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_18086baec(void)
void FUN_18086baec(void)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t *unaff_R14;
  int64_t lVar4;
  uint64_t *puStackX_20;
  uint64_t in_stack_00000050;
  
  lVar4 = 0;
  do {
    lVar1 = *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x1c0));
    if (lVar1 == 0) {
LAB_18086bbfa:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(int64_t *)(unaff_RBP + 0x1c0) + (int64_t)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(int64_t)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x1c8) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x270))((int64_t *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        SystemController(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x1c8);
      if (lVar3 == 0) goto LAB_18086bbfa;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(int64_t *)(lVar4 + -8 + *(int64_t *)(unaff_RBP + 0x1c0)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086bbf2;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086bbe1:
          *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x1c0)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x1c8);
        }
        else {
          lVar1 = *(int64_t *)(lVar4 + 8 + *(int64_t *)(unaff_RBP + 0x1c0));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086bbe1;
          }
        }
      }
LAB_18086bbf2:
      unaff_ESI = unaff_ESI + 1;
      lVar4 = lVar4 + 8;
    }
    unaff_R14 = puStackX_20;
    if (unaff_EDI <= unaff_ESI) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
    }
  } while( true );
}






