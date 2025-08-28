#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part374_sub001.c - 20 个函数

#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part374.c - 20 个函数


// 函数: void FUN_18086bc6e(void)
void FUN_18086bc6e(void)

{
  uint64_t in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18086bc90(int64_t param_1,uint64_t *param_2)
void FUN_18086bc90(int64_t param_1,uint64_t *param_2)

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
  lVar3 = (**(code **)(*(int64_t *)*param_2 + 0x48))((int64_t *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x1b8);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x1b0));
        if (lVar1 == 0) {
LAB_18086bdfa:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(int64_t *)(param_1 + 0x1b0) + (int64_t)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(int64_t)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x1b8) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(int64_t *)*param_2 + 0x278))((int64_t *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            SystemStateProcessor(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x1b8);
          if (lVar4 == 0) goto LAB_18086bdfa;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(int64_t *)(lVar3 + -8 + *(int64_t *)(param_1 + 0x1b0)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086bdf2;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086bde1:
              *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x1b0)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x1b8);
            }
            else {
              lVar1 = *(int64_t *)(lVar3 + 8 + *(int64_t *)(param_1 + 0x1b0));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086bde1;
              }
            }
          }
LAB_18086bdf2:
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






// 函数: void FUN_18086bccf(void)
void FUN_18086bccf(void)

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
  iVar5 = *(int *)(unaff_RBP + 0x1b8);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x1b0));
      if (lVar1 == 0) {
LAB_18086bdfa:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(int64_t *)(unaff_RBP + 0x1b0) + (int64_t)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(int64_t)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x1b8) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x278))((int64_t *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          SystemStateProcessor(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x1b8);
        if (lVar3 == 0) goto LAB_18086bdfa;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(int64_t *)(lVar6 + -8 + *(int64_t *)(unaff_RBP + 0x1b0)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(int64_t *)(lVar6 + 8 + *(int64_t *)(unaff_RBP + 0x1b0));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086bdf2;
          }
          *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x1b0)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x1b8);
        }
LAB_18086bdf2:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_18086bcec(void)
void FUN_18086bcec(void)

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
    lVar1 = *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x1b0));
    if (lVar1 == 0) {
LAB_18086bdfa:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(int64_t *)(unaff_RBP + 0x1b0) + (int64_t)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(int64_t)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x1b8) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x278))((int64_t *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        SystemStateProcessor(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x1b8);
      if (lVar3 == 0) goto LAB_18086bdfa;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(int64_t *)(lVar4 + -8 + *(int64_t *)(unaff_RBP + 0x1b0)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086bdf2;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086bde1:
          *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x1b0)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x1b8);
        }
        else {
          lVar1 = *(int64_t *)(lVar4 + 8 + *(int64_t *)(unaff_RBP + 0x1b0));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086bde1;
          }
        }
      }
LAB_18086bdf2:
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






// 函数: void FUN_18086be5f(void)
void FUN_18086be5f(void)

{
  uint64_t in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_18086be6e(void)
void FUN_18086be6e(void)

{
  uint64_t in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18086be90(int64_t param_1,uint64_t *param_2)
void FUN_18086be90(int64_t param_1,uint64_t *param_2)

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
  lVar3 = (**(code **)(*(int64_t *)*param_2 + 0xd8))((int64_t *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x98);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x90));
        if (lVar1 == 0) {
LAB_18086bffa:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(int64_t *)(param_1 + 0x90) + (int64_t)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(int64_t)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x98) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(int64_t *)*param_2 + 0x310))((int64_t *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            SystemStateProcessor(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x98);
          if (lVar4 == 0) goto LAB_18086bffa;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(int64_t *)(lVar3 + -8 + *(int64_t *)(param_1 + 0x90)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086bff2;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086bfe1:
              *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x90)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x98);
            }
            else {
              lVar1 = *(int64_t *)(lVar3 + 8 + *(int64_t *)(param_1 + 0x90));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086bfe1;
              }
            }
          }
LAB_18086bff2:
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






// 函数: void FUN_18086bed2(void)
void FUN_18086bed2(void)

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
  iVar5 = *(int *)(unaff_RBP + 0x98);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x90));
      if (lVar1 == 0) {
LAB_18086bffa:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(int64_t *)(unaff_RBP + 0x90) + (int64_t)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(int64_t)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x98) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x310))((int64_t *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          SystemStateProcessor(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x98);
        if (lVar3 == 0) goto LAB_18086bffa;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(int64_t *)(lVar6 + -8 + *(int64_t *)(unaff_RBP + 0x90)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(int64_t *)(lVar6 + 8 + *(int64_t *)(unaff_RBP + 0x90));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086bff2;
          }
          *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x90)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x98);
        }
LAB_18086bff2:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_18086beef(void)
void FUN_18086beef(void)

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
    lVar1 = *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x90));
    if (lVar1 == 0) {
LAB_18086bffa:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(int64_t *)(unaff_RBP + 0x90) + (int64_t)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(int64_t)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x98) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x310))((int64_t *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        SystemStateProcessor(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x98);
      if (lVar3 == 0) goto LAB_18086bffa;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(int64_t *)(lVar4 + -8 + *(int64_t *)(unaff_RBP + 0x90)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086bff2;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086bfe1:
          *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x90)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x98);
        }
        else {
          lVar1 = *(int64_t *)(lVar4 + 8 + *(int64_t *)(unaff_RBP + 0x90));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086bfe1;
          }
        }
      }
LAB_18086bff2:
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






// 函数: void FUN_18086c05f(void)
void FUN_18086c05f(void)

{
  uint64_t in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_18086c06e(void)
void FUN_18086c06e(void)

{
  uint64_t in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18086c090(int64_t param_1,uint64_t *param_2)
void FUN_18086c090(int64_t param_1,uint64_t *param_2)

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
  lVar3 = (**(code **)(*(int64_t *)*param_2 + 0xb8))((int64_t *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x178);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x170));
        if (lVar1 == 0) {
LAB_18086c1fa:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(int64_t *)(param_1 + 0x170) + (int64_t)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(int64_t)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x178) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(int64_t *)*param_2 + 0x2b0))((int64_t *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            SystemStateProcessor(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x178);
          if (lVar4 == 0) goto LAB_18086c1fa;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(int64_t *)(lVar3 + -8 + *(int64_t *)(param_1 + 0x170)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086c1f2;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086c1e1:
              *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x170)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x178);
            }
            else {
              lVar1 = *(int64_t *)(lVar3 + 8 + *(int64_t *)(param_1 + 0x170));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086c1e1;
              }
            }
          }
LAB_18086c1f2:
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






// 函数: void FUN_18086c0d2(void)
void FUN_18086c0d2(void)

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
  iVar5 = *(int *)(unaff_RBP + 0x178);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x170));
      if (lVar1 == 0) {
LAB_18086c1fa:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(int64_t *)(unaff_RBP + 0x170) + (int64_t)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(int64_t)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x178) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x2b0))((int64_t *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          SystemStateProcessor(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x178);
        if (lVar3 == 0) goto LAB_18086c1fa;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(int64_t *)(lVar6 + -8 + *(int64_t *)(unaff_RBP + 0x170)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(int64_t *)(lVar6 + 8 + *(int64_t *)(unaff_RBP + 0x170));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086c1f2;
          }
          *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x170)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x178);
        }
LAB_18086c1f2:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_18086c0ef(void)
void FUN_18086c0ef(void)

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
    lVar1 = *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x170));
    if (lVar1 == 0) {
LAB_18086c1fa:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(int64_t *)(unaff_RBP + 0x170) + (int64_t)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(int64_t)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x178) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x2b0))((int64_t *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        SystemStateProcessor(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x178);
      if (lVar3 == 0) goto LAB_18086c1fa;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(int64_t *)(lVar4 + -8 + *(int64_t *)(unaff_RBP + 0x170)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086c1f2;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086c1e1:
          *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x170)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x178);
        }
        else {
          lVar1 = *(int64_t *)(lVar4 + 8 + *(int64_t *)(unaff_RBP + 0x170));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086c1e1;
          }
        }
      }
LAB_18086c1f2:
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






// 函数: void FUN_18086c25f(void)
void FUN_18086c25f(void)

{
  uint64_t in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_18086c26e(void)
void FUN_18086c26e(void)

{
  uint64_t in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18086c290(int64_t param_1,uint64_t *param_2)
void FUN_18086c290(int64_t param_1,uint64_t *param_2)

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
  lVar3 = (**(code **)(*(int64_t *)*param_2 + 0xe8))((int64_t *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x58);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x50));
        if (lVar1 == 0) {
LAB_18086c3e0:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(int64_t *)(param_1 + 0x50) + (int64_t)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(int64_t)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x58) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(int64_t *)*param_2 + 0x328))((int64_t *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            SystemStateProcessor(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x58);
          if (lVar4 == 0) goto LAB_18086c3e0;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(int64_t *)(lVar3 + -8 + *(int64_t *)(param_1 + 0x50)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086c3d8;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086c3cd:
              *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x50)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x58);
            }
            else {
              lVar1 = *(int64_t *)(lVar3 + 8 + *(int64_t *)(param_1 + 0x50));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086c3cd;
              }
            }
          }
LAB_18086c3d8:
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






// 函数: void FUN_18086c2d2(void)
void FUN_18086c2d2(void)

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
  iVar5 = *(int *)(unaff_RBP + 0x58);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x50));
      if (lVar1 == 0) {
LAB_18086c3e0:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(int64_t *)(unaff_RBP + 0x50) + (int64_t)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(int64_t)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x58) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x328))((int64_t *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          SystemStateProcessor(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x58);
        if (lVar3 == 0) goto LAB_18086c3e0;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(int64_t *)(lVar6 + -8 + *(int64_t *)(unaff_RBP + 0x50)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(int64_t *)(lVar6 + 8 + *(int64_t *)(unaff_RBP + 0x50));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086c3d8;
          }
          *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x50)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x58);
        }
LAB_18086c3d8:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_18086c2ec(void)
void FUN_18086c2ec(void)

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
    lVar1 = *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x50));
    if (lVar1 == 0) {
LAB_18086c3e0:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(int64_t *)(unaff_RBP + 0x50) + (int64_t)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(int64_t)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x58) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x328))((int64_t *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        SystemStateProcessor(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x58);
      if (lVar3 == 0) goto LAB_18086c3e0;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(int64_t *)(lVar4 + -8 + *(int64_t *)(unaff_RBP + 0x50)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086c3d8;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086c3cd:
          *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x50)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x58);
        }
        else {
          lVar1 = *(int64_t *)(lVar4 + 8 + *(int64_t *)(unaff_RBP + 0x50));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086c3cd;
          }
        }
      }
LAB_18086c3d8:
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






