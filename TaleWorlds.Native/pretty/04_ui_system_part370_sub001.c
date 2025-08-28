#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part370_sub001.c - 20 个函数

#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part370.c - 20 个函数


// 函数: void FUN_180869cee(void)
void FUN_180869cee(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180869d10(longlong param_1,uint64_t *param_2)
void FUN_180869d10(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int8_t auStack_98 [32];
  uint64_t *puStack_78;
  int8_t auStack_70 [40];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  puStack_78 = param_2;
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0xe0))((longlong *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x88);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x80));
        if (lVar1 == 0) {
LAB_180869e7a:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(longlong *)(param_1 + 0x80) + (longlong)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(longlong)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x88) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(longlong *)*param_2 + 0x318))((longlong *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18084b240(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x88);
          if (lVar4 == 0) goto LAB_180869e7a;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(longlong *)(lVar3 + -8 + *(longlong *)(param_1 + 0x80)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_180869e72;
            }
            if (iVar5 == iVar6 + -1) {
LAB_180869e61:
              *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x80)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x88);
            }
            else {
              lVar1 = *(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0x80));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_180869e61;
              }
            }
          }
LAB_180869e72:
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        }
        param_2 = puStack_78;
      } while (iVar5 < iVar6);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_98);
}






// 函数: void FUN_180869d52(void)
void FUN_180869d52(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int iVar4;
  int iVar5;
  uint64_t *unaff_R14;
  longlong lVar6;
  uint64_t *puStackX_20;
  ulonglong in_stack_00000050;
  
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0x88);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x80));
      if (lVar1 == 0) {
LAB_180869e7a:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(longlong *)(unaff_RBP + 0x80) + (longlong)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(longlong)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x88) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x318))((longlong *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x88);
        if (lVar3 == 0) goto LAB_180869e7a;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(longlong *)(lVar6 + -8 + *(longlong *)(unaff_RBP + 0x80)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(longlong *)(lVar6 + 8 + *(longlong *)(unaff_RBP + 0x80));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_180869e72;
          }
          *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x80)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x88);
        }
LAB_180869e72:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_180869d6f(void)
void FUN_180869d6f(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t *unaff_R14;
  longlong lVar4;
  uint64_t *puStackX_20;
  ulonglong in_stack_00000050;
  
  lVar4 = 0;
  do {
    lVar1 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x80));
    if (lVar1 == 0) {
LAB_180869e7a:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(longlong *)(unaff_RBP + 0x80) + (longlong)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(longlong)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x88) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x318))((longlong *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18084b240(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x88);
      if (lVar3 == 0) goto LAB_180869e7a;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(longlong *)(lVar4 + -8 + *(longlong *)(unaff_RBP + 0x80)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_180869e72;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_180869e61:
          *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x80)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x88);
        }
        else {
          lVar1 = *(longlong *)(lVar4 + 8 + *(longlong *)(unaff_RBP + 0x80));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_180869e61;
          }
        }
      }
LAB_180869e72:
      unaff_ESI = unaff_ESI + 1;
      lVar4 = lVar4 + 8;
    }
    unaff_R14 = puStackX_20;
    if (unaff_EDI <= unaff_ESI) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}






// 函数: void FUN_180869edf(void)
void FUN_180869edf(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_180869eee(void)
void FUN_180869eee(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180869f10(longlong param_1,uint64_t *param_2)
void FUN_180869f10(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int8_t auStack_98 [32];
  uint64_t *puStack_78;
  int8_t auStack_70 [40];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  puStack_78 = param_2;
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0xa0))((longlong *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x118);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x110));
        if (lVar1 == 0) {
LAB_18086a07a:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(longlong *)(param_1 + 0x110) + (longlong)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(longlong)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x118) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(longlong *)*param_2 + 0x2d8))((longlong *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18084b240(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x118);
          if (lVar4 == 0) goto LAB_18086a07a;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(longlong *)(lVar3 + -8 + *(longlong *)(param_1 + 0x110)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086a072;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086a061:
              *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x110)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x118);
            }
            else {
              lVar1 = *(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0x110));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086a061;
              }
            }
          }
LAB_18086a072:
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        }
        param_2 = puStack_78;
      } while (iVar5 < iVar6);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_98);
}






// 函数: void FUN_180869f52(void)
void FUN_180869f52(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int iVar4;
  int iVar5;
  uint64_t *unaff_R14;
  longlong lVar6;
  uint64_t *puStackX_20;
  ulonglong in_stack_00000050;
  
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0x118);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x110));
      if (lVar1 == 0) {
LAB_18086a07a:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(longlong *)(unaff_RBP + 0x110) + (longlong)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(longlong)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x118) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x2d8))((longlong *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x118);
        if (lVar3 == 0) goto LAB_18086a07a;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(longlong *)(lVar6 + -8 + *(longlong *)(unaff_RBP + 0x110)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(longlong *)(lVar6 + 8 + *(longlong *)(unaff_RBP + 0x110));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086a072;
          }
          *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x110)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x118);
        }
LAB_18086a072:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_180869f6f(void)
void FUN_180869f6f(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t *unaff_R14;
  longlong lVar4;
  uint64_t *puStackX_20;
  ulonglong in_stack_00000050;
  
  lVar4 = 0;
  do {
    lVar1 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x110));
    if (lVar1 == 0) {
LAB_18086a07a:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(longlong *)(unaff_RBP + 0x110) + (longlong)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(longlong)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x118) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x2d8))((longlong *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18084b240(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x118);
      if (lVar3 == 0) goto LAB_18086a07a;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(longlong *)(lVar4 + -8 + *(longlong *)(unaff_RBP + 0x110)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086a072;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086a061:
          *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x110)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x118);
        }
        else {
          lVar1 = *(longlong *)(lVar4 + 8 + *(longlong *)(unaff_RBP + 0x110));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086a061;
          }
        }
      }
LAB_18086a072:
      unaff_ESI = unaff_ESI + 1;
      lVar4 = lVar4 + 8;
    }
    unaff_R14 = puStackX_20;
    if (unaff_EDI <= unaff_ESI) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}






// 函数: void FUN_18086a0df(void)
void FUN_18086a0df(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18086a0ee(void)
void FUN_18086a0ee(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18086a110(longlong param_1,uint64_t *param_2)
void FUN_18086a110(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int8_t auStack_98 [32];
  uint64_t *puStack_78;
  int8_t auStack_70 [40];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  puStack_78 = param_2;
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0x68))((longlong *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x188);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x180));
        if (lVar1 == 0) {
LAB_18086a27a:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(longlong *)(param_1 + 0x180) + (longlong)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(longlong)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x188) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(longlong *)*param_2 + 0x298))((longlong *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18084b240(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x188);
          if (lVar4 == 0) goto LAB_18086a27a;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(longlong *)(lVar3 + -8 + *(longlong *)(param_1 + 0x180)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086a272;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086a261:
              *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x180)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x188);
            }
            else {
              lVar1 = *(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0x180));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086a261;
              }
            }
          }
LAB_18086a272:
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        }
        param_2 = puStack_78;
      } while (iVar5 < iVar6);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_98);
}






// 函数: void FUN_18086a14f(void)
void FUN_18086a14f(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int iVar4;
  int iVar5;
  uint64_t *unaff_R14;
  longlong lVar6;
  uint64_t *puStackX_20;
  ulonglong in_stack_00000050;
  
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0x188);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x180));
      if (lVar1 == 0) {
LAB_18086a27a:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(longlong *)(unaff_RBP + 0x180) + (longlong)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(longlong)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x188) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x298))((longlong *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x188);
        if (lVar3 == 0) goto LAB_18086a27a;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(longlong *)(lVar6 + -8 + *(longlong *)(unaff_RBP + 0x180)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(longlong *)(lVar6 + 8 + *(longlong *)(unaff_RBP + 0x180));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086a272;
          }
          *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x180)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x188);
        }
LAB_18086a272:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18086a16c(void)
void FUN_18086a16c(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t *unaff_R14;
  longlong lVar4;
  uint64_t *puStackX_20;
  ulonglong in_stack_00000050;
  
  lVar4 = 0;
  do {
    lVar1 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x180));
    if (lVar1 == 0) {
LAB_18086a27a:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(longlong *)(unaff_RBP + 0x180) + (longlong)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(longlong)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x188) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x298))((longlong *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18084b240(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x188);
      if (lVar3 == 0) goto LAB_18086a27a;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(longlong *)(lVar4 + -8 + *(longlong *)(unaff_RBP + 0x180)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086a272;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086a261:
          *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x180)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x188);
        }
        else {
          lVar1 = *(longlong *)(lVar4 + 8 + *(longlong *)(unaff_RBP + 0x180));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086a261;
          }
        }
      }
LAB_18086a272:
      unaff_ESI = unaff_ESI + 1;
      lVar4 = lVar4 + 8;
    }
    unaff_R14 = puStackX_20;
    if (unaff_EDI <= unaff_ESI) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}






// 函数: void FUN_18086a2df(void)
void FUN_18086a2df(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18086a2ee(void)
void FUN_18086a2ee(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18086a310(longlong param_1,uint64_t *param_2)
void FUN_18086a310(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int8_t auStack_98 [32];
  uint64_t *puStack_78;
  int8_t auStack_70 [40];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  puStack_78 = param_2;
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0x38))((longlong *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x1d8);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x1d0));
        if (lVar1 == 0) {
LAB_18086a47a:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(longlong *)(param_1 + 0x1d0) + (longlong)iVar5 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(longlong)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x1d8) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(longlong *)*param_2 + 0x268))((longlong *)*param_2,lVar1,1);
          if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18084b240(lVar1,auStack_70);
          }
          iVar6 = *(int *)(param_1 + 0x1d8);
          if (lVar4 == 0) goto LAB_18086a47a;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(longlong *)(lVar3 + -8 + *(longlong *)(param_1 + 0x1d0)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086a472;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086a461:
              *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x1d0)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x1d8);
            }
            else {
              lVar1 = *(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0x1d0));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086a461;
              }
            }
          }
LAB_18086a472:
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        }
        param_2 = puStack_78;
      } while (iVar5 < iVar6);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_98);
}






// 函数: void FUN_18086a34f(void)
void FUN_18086a34f(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int iVar4;
  int iVar5;
  uint64_t *unaff_R14;
  longlong lVar6;
  uint64_t *puStackX_20;
  ulonglong in_stack_00000050;
  
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0x1d8);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x1d0));
      if (lVar1 == 0) {
LAB_18086a47a:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(longlong *)(unaff_RBP + 0x1d0) + (longlong)iVar4 * 8;
                    // WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(longlong)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x1d8) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x268))((longlong *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(lVar1,&stack0x00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x1d8);
        if (lVar3 == 0) goto LAB_18086a47a;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(longlong *)(lVar6 + -8 + *(longlong *)(unaff_RBP + 0x1d0)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(longlong *)(lVar6 + 8 + *(longlong *)(unaff_RBP + 0x1d0));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086a472;
          }
          *(longlong *)(lVar6 + *(longlong *)(unaff_RBP + 0x1d0)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x1d8);
        }
LAB_18086a472:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = puStackX_20;
    } while (iVar4 < iVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18086a36c(void)
void FUN_18086a36c(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t *unaff_R14;
  longlong lVar4;
  uint64_t *puStackX_20;
  ulonglong in_stack_00000050;
  
  lVar4 = 0;
  do {
    lVar1 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x1d0));
    if (lVar1 == 0) {
LAB_18086a47a:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(longlong *)(unaff_RBP + 0x1d0) + (longlong)unaff_ESI * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(longlong)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x1d8) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(longlong *)*unaff_R14 + 0x268))((longlong *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18084b240(lVar1,&stack0x00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x1d8);
      if (lVar3 == 0) goto LAB_18086a47a;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(longlong *)(lVar4 + -8 + *(longlong *)(unaff_RBP + 0x1d0)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086a472;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086a461:
          *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x1d0)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x1d8);
        }
        else {
          lVar1 = *(longlong *)(lVar4 + 8 + *(longlong *)(unaff_RBP + 0x1d0));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086a461;
          }
        }
      }
LAB_18086a472:
      unaff_ESI = unaff_ESI + 1;
      lVar4 = lVar4 + 8;
    }
    unaff_R14 = puStackX_20;
    if (unaff_EDI <= unaff_ESI) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}






