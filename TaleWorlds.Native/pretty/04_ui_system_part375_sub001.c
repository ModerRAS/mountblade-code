#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part375_sub001.c - 20 个函数
#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part375.c - 20 个函数
// 函数: void function_86c44b(void)
void function_86c44b(void)
{
  uint64_t local_buffer_50;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_86c470(int64_t param_1,uint64_t *param_2)
void function_86c470(int64_t param_1,uint64_t *param_2)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int8_t stack_array_98 [32];
  uint64_t *plocal_var_78;
  int8_t stack_array_70 [40];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  plocal_var_78 = param_2;
  lVar3 = (**(code **)(*(int64_t *)*param_2 + 0x80))((int64_t *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x168);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x160));
        if (lVar1 == 0) {
LAB_18086c5da:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(int64_t *)(param_1 + 0x160) + (int64_t)iVar5 * 8;
// WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(int64_t)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x168) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(int64_t *)*param_2 + 0x2b8))((int64_t *)*param_2,lVar1,1);
          if (lVar4 == 0) {
// WARNING: Subroutine does not return
            SystemStateProcessor(lVar1,stack_array_70);
          }
          iVar6 = *(int *)(param_1 + 0x168);
          if (lVar4 == 0) goto LAB_18086c5da;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(int64_t *)(lVar3 + -8 + *(int64_t *)(param_1 + 0x160)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086c5d2;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086c5c1:
              *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x160)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x168);
            }
            else {
              lVar1 = *(int64_t *)(lVar3 + 8 + *(int64_t *)(param_1 + 0x160));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086c5c1;
              }
            }
          }
LAB_18086c5d2:
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        }
        param_2 = plocal_var_78;
      } while (iVar5 < iVar6);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_98);
}
// 函数: void function_86c4b2(void)
void function_86c4b2(void)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int iVar4;
  int iVar5;
  uint64_t *unaff_R14;
  int64_t lVar6;
  uint64_t *pstack_special_x_20;
  uint64_t local_buffer_50;
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0x168);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x160));
      if (lVar1 == 0) {
LAB_18086c5da:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(int64_t *)(unaff_RBP + 0x160) + (int64_t)iVar4 * 8;
// WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(int64_t)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x168) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x2b8))((int64_t *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
// WARNING: Subroutine does not return
          SystemStateProcessor(lVar1,&local_buffer_00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x168);
        if (lVar3 == 0) goto LAB_18086c5da;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(int64_t *)(lVar6 + -8 + *(int64_t *)(unaff_RBP + 0x160)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(int64_t *)(lVar6 + 8 + *(int64_t *)(unaff_RBP + 0x160));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086c5d2;
          }
          *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x160)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x168);
        }
LAB_18086c5d2:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = pstack_special_x_20;
    } while (iVar4 < iVar5);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_86c4cf(void)
void function_86c4cf(void)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t *unaff_R14;
  int64_t lVar4;
  uint64_t *pstack_special_x_20;
  uint64_t local_buffer_50;
  lVar4 = 0;
  do {
    lVar1 = *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x160));
    if (lVar1 == 0) {
LAB_18086c5da:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(int64_t *)(unaff_RBP + 0x160) + (int64_t)unaff_ESI * 8;
// WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(int64_t)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x168) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x2b8))((int64_t *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
// WARNING: Subroutine does not return
        SystemStateProcessor(lVar1,&local_buffer_00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x168);
      if (lVar3 == 0) goto LAB_18086c5da;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(int64_t *)(lVar4 + -8 + *(int64_t *)(unaff_RBP + 0x160)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086c5d2;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086c5c1:
          *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x160)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x168);
        }
        else {
          lVar1 = *(int64_t *)(lVar4 + 8 + *(int64_t *)(unaff_RBP + 0x160));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086c5c1;
          }
        }
      }
LAB_18086c5d2:
      unaff_ESI = unaff_ESI + 1;
      lVar4 = lVar4 + 8;
    }
    unaff_R14 = pstack_special_x_20;
    if (unaff_EDI <= unaff_ESI) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
    }
  } while( true );
}
// 函数: void function_86c63f(void)
void function_86c63f(void)
{
  uint64_t local_buffer_50;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_86c64e(void)
void function_86c64e(void)
{
  uint64_t local_buffer_50;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_86c670(int64_t param_1,uint64_t *param_2)
void function_86c670(int64_t param_1,uint64_t *param_2)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int8_t stack_array_98 [32];
  uint64_t *plocal_var_78;
  int8_t stack_array_70 [40];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  plocal_var_78 = param_2;
  lVar3 = (**(code **)(*(int64_t *)*param_2 + 0xd0))((int64_t *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0xa8);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0xa0));
        if (lVar1 == 0) {
LAB_18086c7da:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(int64_t *)(param_1 + 0xa0) + (int64_t)iVar5 * 8;
// WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(int64_t)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0xa8) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(int64_t *)*param_2 + 0x308))((int64_t *)*param_2,lVar1,1);
          if (lVar4 == 0) {
// WARNING: Subroutine does not return
            SystemStateProcessor(lVar1,stack_array_70);
          }
          iVar6 = *(int *)(param_1 + 0xa8);
          if (lVar4 == 0) goto LAB_18086c7da;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(int64_t *)(lVar3 + -8 + *(int64_t *)(param_1 + 0xa0)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086c7d2;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086c7c1:
              *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0xa0)) = lVar4;
              iVar6 = *(int *)(param_1 + 0xa8);
            }
            else {
              lVar1 = *(int64_t *)(lVar3 + 8 + *(int64_t *)(param_1 + 0xa0));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086c7c1;
              }
            }
          }
LAB_18086c7d2:
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        }
        param_2 = plocal_var_78;
      } while (iVar5 < iVar6);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_98);
}
// 函数: void function_86c6b2(void)
void function_86c6b2(void)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int iVar4;
  int iVar5;
  uint64_t *unaff_R14;
  int64_t lVar6;
  uint64_t *pstack_special_x_20;
  uint64_t local_buffer_50;
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0xa8);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0xa0));
      if (lVar1 == 0) {
LAB_18086c7da:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(int64_t *)(unaff_RBP + 0xa0) + (int64_t)iVar4 * 8;
// WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(int64_t)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0xa8) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x308))((int64_t *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
// WARNING: Subroutine does not return
          SystemStateProcessor(lVar1,&local_buffer_00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0xa8);
        if (lVar3 == 0) goto LAB_18086c7da;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(int64_t *)(lVar6 + -8 + *(int64_t *)(unaff_RBP + 0xa0)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(int64_t *)(lVar6 + 8 + *(int64_t *)(unaff_RBP + 0xa0));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086c7d2;
          }
          *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0xa0)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0xa8);
        }
LAB_18086c7d2:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = pstack_special_x_20;
    } while (iVar4 < iVar5);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_86c6cf(void)
void function_86c6cf(void)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t *unaff_R14;
  int64_t lVar4;
  uint64_t *pstack_special_x_20;
  uint64_t local_buffer_50;
  lVar4 = 0;
  do {
    lVar1 = *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0xa0));
    if (lVar1 == 0) {
LAB_18086c7da:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(int64_t *)(unaff_RBP + 0xa0) + (int64_t)unaff_ESI * 8;
// WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(int64_t)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0xa8) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x308))((int64_t *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
// WARNING: Subroutine does not return
        SystemStateProcessor(lVar1,&local_buffer_00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0xa8);
      if (lVar3 == 0) goto LAB_18086c7da;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(int64_t *)(lVar4 + -8 + *(int64_t *)(unaff_RBP + 0xa0)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086c7d2;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086c7c1:
          *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0xa0)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0xa8);
        }
        else {
          lVar1 = *(int64_t *)(lVar4 + 8 + *(int64_t *)(unaff_RBP + 0xa0));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086c7c1;
          }
        }
      }
LAB_18086c7d2:
      unaff_ESI = unaff_ESI + 1;
      lVar4 = lVar4 + 8;
    }
    unaff_R14 = pstack_special_x_20;
    if (unaff_EDI <= unaff_ESI) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
    }
  } while( true );
}
// 函数: void function_86c83f(void)
void function_86c83f(void)
{
  uint64_t local_buffer_50;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_86c84e(void)
void function_86c84e(void)
{
  uint64_t local_buffer_50;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_86c870(int64_t param_1,uint64_t *param_2)
void function_86c870(int64_t param_1,uint64_t *param_2)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int8_t stack_array_98 [32];
  uint64_t *plocal_var_78;
  int8_t stack_array_70 [40];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  plocal_var_78 = param_2;
  lVar3 = (**(code **)(*(int64_t *)*param_2 + 200))((int64_t *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0xb8);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0xb0));
        if (lVar1 == 0) {
LAB_18086c9da:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(int64_t *)(param_1 + 0xb0) + (int64_t)iVar5 * 8;
// WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(int64_t)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0xb8) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(int64_t *)*param_2 + 0x300))((int64_t *)*param_2,lVar1,1);
          if (lVar4 == 0) {
// WARNING: Subroutine does not return
            SystemStateProcessor(lVar1,stack_array_70);
          }
          iVar6 = *(int *)(param_1 + 0xb8);
          if (lVar4 == 0) goto LAB_18086c9da;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(int64_t *)(lVar3 + -8 + *(int64_t *)(param_1 + 0xb0)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086c9d2;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086c9c1:
              *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0xb0)) = lVar4;
              iVar6 = *(int *)(param_1 + 0xb8);
            }
            else {
              lVar1 = *(int64_t *)(lVar3 + 8 + *(int64_t *)(param_1 + 0xb0));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086c9c1;
              }
            }
          }
LAB_18086c9d2:
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        }
        param_2 = plocal_var_78;
      } while (iVar5 < iVar6);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_98);
}
// 函数: void function_86c8b2(void)
void function_86c8b2(void)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int iVar4;
  int iVar5;
  uint64_t *unaff_R14;
  int64_t lVar6;
  uint64_t *pstack_special_x_20;
  uint64_t local_buffer_50;
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0xb8);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0xb0));
      if (lVar1 == 0) {
LAB_18086c9da:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(int64_t *)(unaff_RBP + 0xb0) + (int64_t)iVar4 * 8;
// WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(int64_t)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0xb8) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x300))((int64_t *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
// WARNING: Subroutine does not return
          SystemStateProcessor(lVar1,&local_buffer_00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0xb8);
        if (lVar3 == 0) goto LAB_18086c9da;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(int64_t *)(lVar6 + -8 + *(int64_t *)(unaff_RBP + 0xb0)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(int64_t *)(lVar6 + 8 + *(int64_t *)(unaff_RBP + 0xb0));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086c9d2;
          }
          *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0xb0)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0xb8);
        }
LAB_18086c9d2:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = pstack_special_x_20;
    } while (iVar4 < iVar5);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_86c8cf(void)
void function_86c8cf(void)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t *unaff_R14;
  int64_t lVar4;
  uint64_t *pstack_special_x_20;
  uint64_t local_buffer_50;
  lVar4 = 0;
  do {
    lVar1 = *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0xb0));
    if (lVar1 == 0) {
LAB_18086c9da:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(int64_t *)(unaff_RBP + 0xb0) + (int64_t)unaff_ESI * 8;
// WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(int64_t)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0xb8) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x300))((int64_t *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
// WARNING: Subroutine does not return
        SystemStateProcessor(lVar1,&local_buffer_00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0xb8);
      if (lVar3 == 0) goto LAB_18086c9da;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(int64_t *)(lVar4 + -8 + *(int64_t *)(unaff_RBP + 0xb0)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086c9d2;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086c9c1:
          *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0xb0)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0xb8);
        }
        else {
          lVar1 = *(int64_t *)(lVar4 + 8 + *(int64_t *)(unaff_RBP + 0xb0));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086c9c1;
          }
        }
      }
LAB_18086c9d2:
      unaff_ESI = unaff_ESI + 1;
      lVar4 = lVar4 + 8;
    }
    unaff_R14 = pstack_special_x_20;
    if (unaff_EDI <= unaff_ESI) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
    }
  } while( true );
}
// 函数: void function_86ca3f(void)
void function_86ca3f(void)
{
  uint64_t local_buffer_50;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_86ca4e(void)
void function_86ca4e(void)
{
  uint64_t local_buffer_50;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_86ca70(int64_t param_1,uint64_t *param_2)
void function_86ca70(int64_t param_1,uint64_t *param_2)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int8_t stack_array_98 [32];
  uint64_t *plocal_var_78;
  int8_t stack_array_70 [40];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  plocal_var_78 = param_2;
  lVar3 = (**(code **)(*(int64_t *)*param_2 + 0x98))((int64_t *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x128);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x120));
        if (lVar1 == 0) {
LAB_18086cbda:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(int64_t *)(param_1 + 0x120) + (int64_t)iVar5 * 8;
// WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(int64_t)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x128) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(int64_t *)*param_2 + 0x2d0))((int64_t *)*param_2,lVar1,1);
          if (lVar4 == 0) {
// WARNING: Subroutine does not return
            SystemStateProcessor(lVar1,stack_array_70);
          }
          iVar6 = *(int *)(param_1 + 0x128);
          if (lVar4 == 0) goto LAB_18086cbda;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(int64_t *)(lVar3 + -8 + *(int64_t *)(param_1 + 0x120)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_18086cbd2;
            }
            if (iVar5 == iVar6 + -1) {
LAB_18086cbc1:
              *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x120)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x128);
            }
            else {
              lVar1 = *(int64_t *)(lVar3 + 8 + *(int64_t *)(param_1 + 0x120));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_18086cbc1;
              }
            }
          }
LAB_18086cbd2:
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        }
        param_2 = plocal_var_78;
      } while (iVar5 < iVar6);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_98);
}
// 函数: void function_86cab2(void)
void function_86cab2(void)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int iVar4;
  int iVar5;
  uint64_t *unaff_R14;
  int64_t lVar6;
  uint64_t *pstack_special_x_20;
  uint64_t local_buffer_50;
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0x128);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x120));
      if (lVar1 == 0) {
LAB_18086cbda:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(int64_t *)(unaff_RBP + 0x120) + (int64_t)iVar4 * 8;
// WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(int64_t)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x128) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x2d0))((int64_t *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
// WARNING: Subroutine does not return
          SystemStateProcessor(lVar1,&local_buffer_00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x128);
        if (lVar3 == 0) goto LAB_18086cbda;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(int64_t *)(lVar6 + -8 + *(int64_t *)(unaff_RBP + 0x120)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(int64_t *)(lVar6 + 8 + *(int64_t *)(unaff_RBP + 0x120));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_18086cbd2;
          }
          *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x120)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x128);
        }
LAB_18086cbd2:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = pstack_special_x_20;
    } while (iVar4 < iVar5);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_86cacf(void)
void function_86cacf(void)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t *unaff_R14;
  int64_t lVar4;
  uint64_t *pstack_special_x_20;
  uint64_t local_buffer_50;
  lVar4 = 0;
  do {
    lVar1 = *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x120));
    if (lVar1 == 0) {
LAB_18086cbda:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(int64_t *)(unaff_RBP + 0x120) + (int64_t)unaff_ESI * 8;
// WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(int64_t)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x128) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x2d0))((int64_t *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
// WARNING: Subroutine does not return
        SystemStateProcessor(lVar1,&local_buffer_00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x128);
      if (lVar3 == 0) goto LAB_18086cbda;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(int64_t *)(lVar4 + -8 + *(int64_t *)(unaff_RBP + 0x120)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_18086cbd2;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_18086cbc1:
          *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x120)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x128);
        }
        else {
          lVar1 = *(int64_t *)(lVar4 + 8 + *(int64_t *)(unaff_RBP + 0x120));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_18086cbc1;
          }
        }
      }
LAB_18086cbd2:
      unaff_ESI = unaff_ESI + 1;
      lVar4 = lVar4 + 8;
    }
    unaff_R14 = pstack_special_x_20;
    if (unaff_EDI <= unaff_ESI) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
    }
  } while( true );
}