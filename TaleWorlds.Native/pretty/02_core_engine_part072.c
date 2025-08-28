#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part072.c - 1 个函数

// 函数: void FUN_180104cb0(longlong param_1,longlong param_2)
void FUN_180104cb0(longlong param_1,longlong param_2)

{
  void *puStack_30;
  longlong lStack_28;
  int iStack_20;
  uint64_t uStack_18;
  
  puStack_30 = (void *)0x180104cd3;
  FUN_1800aec40(param_1,param_2,&unknown_var_7832_ptr,param_1 + 0x4d0);
  puStack_30 = &unknown_var_3456_ptr;
  uStack_18 = 0;
  lStack_28 = 0;
  iStack_20 = 0;
  FUN_180628040(&puStack_30,&unknown_var_7208_ptr,&unknown_var_7856_ptr,*(int32_t *)(param_1 + 0x5b0),
                0xfffffffffffffffe);
  fwrite(lStack_28,1,(longlong)iStack_20,*(uint64_t *)(param_2 + 8));
  puStack_30 = &unknown_var_3456_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180104d00(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = 1;
  iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0xe0);
  iVar7 = 2;
  iVar4 = 4;
  iVar6 = 0;
  if (iVar5 < 4) {
    if (iVar5 == 3) {
      iVar4 = 3;
    }
    else {
      iVar4 = iVar7;
      if (iVar5 != 2) {
        if (iVar5 == 1) {
          iVar4 = 1;
        }
        else {
          iVar4 = 5;
          if (iVar5 == 0) {
            iVar4 = 0;
          }
        }
      }
    }
  }
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  else if (iVar4 == 1) {
    iVar2 = 1;
  }
  else if (iVar4 == 2) {
    iVar2 = 2;
  }
  else if (iVar4 == 3) {
    iVar2 = 3;
  }
  else {
    iVar2 = iVar5;
    if (iVar4 != 5) {
      iVar2 = 4;
    }
  }
  if (iVar5 == iVar2) {
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else if (iVar4 == 1) {
      iVar5 = 1;
    }
    else {
      iVar5 = iVar7;
      if (iVar4 != 2) {
        if (iVar4 == 3) {
          iVar5 = 3;
        }
        else {
          iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x150);
          if (iVar4 != 5) {
            iVar5 = 5;
          }
        }
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x150) != iVar5) goto LAB_1801054a3;
    if (((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) {
      iVar5 = 0;
    }
    else if ((iVar4 == 3) || (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x1c0), iVar4 != 5)) {
      iVar5 = 1;
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) != iVar5) goto LAB_1801054a3;
    if ((iVar4 == 0) || (iVar4 == 1)) {
      iVar5 = 0;
    }
    else if ((iVar4 == 2) || (iVar4 == 3)) {
      iVar5 = 1;
    }
    else {
      iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x230);
      if (iVar4 != 5) {
        iVar5 = iVar7;
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x230) != iVar5) goto LAB_1801054a3;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else if (iVar4 == 1) {
      iVar5 = 1;
    }
    else if (iVar4 == 2) {
      iVar5 = 2;
    }
    else if (iVar4 == 3) {
      iVar5 = 3;
    }
    else {
      iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x2a0);
      if (iVar4 != 5) {
        iVar5 = 4;
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x2a0) != iVar5) goto LAB_1801054a3;
    if (iVar4 == 0) {
      iVar5 = 1;
    }
    else {
      iVar5 = iVar7;
      if (iVar4 != 1) {
        if (iVar4 == 2) {
          iVar5 = 3;
        }
        else if (iVar4 == 3) {
          iVar5 = 4;
        }
        else {
          iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x310);
          if (iVar4 != 5) {
            iVar5 = 5;
          }
        }
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x310) != iVar5) goto LAB_1801054a3;
    if ((iVar4 == 0) || (iVar4 == 1)) {
      iVar5 = 0;
    }
    else if (iVar4 == 2) {
      iVar5 = 1;
    }
    else {
      iVar5 = iVar7;
      if ((iVar4 != 3) && (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x380), iVar4 != 5)) {
        iVar5 = 3;
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x380) != iVar5) goto LAB_1801054a3;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else if ((iVar4 == 1) || (iVar4 == 2)) {
      iVar5 = 1;
    }
    else {
      iVar5 = iVar7;
      if ((iVar4 != 3) && (iVar4 == 5)) {
        iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x3f0);
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x3f0) != iVar5) goto LAB_1801054a3;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else if ((iVar4 == 1) || (iVar4 == 2)) {
      iVar5 = 1;
    }
    else {
      iVar5 = iVar7;
      if ((iVar4 != 3) && (iVar4 == 5)) {
        iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x460);
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x460) != iVar5) goto LAB_1801054a3;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else if (iVar4 == 1) {
      iVar5 = 1;
    }
    else if (iVar4 == 2) {
      iVar5 = 3;
    }
    else if (iVar4 == 3) {
      iVar5 = 4;
    }
    else {
      iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x4d0);
      if (iVar4 != 5) {
        iVar5 = 5;
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x4d0) != iVar5) goto LAB_1801054a3;
    if ((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) ||
       ((iVar4 == 3 || (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x540), iVar4 != 5)))) {
      iVar5 = 0;
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x540) != iVar5) goto LAB_1801054a3;
    if ((iVar4 == 0) || (iVar4 == 1)) {
      iVar5 = 0;
    }
    else if (((iVar4 == 2) || (iVar4 == 3)) ||
            (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x5b0), iVar4 != 5)) {
      iVar5 = 1;
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x5b0) != iVar5) goto LAB_1801054a3;
    if ((iVar4 == 0) || (iVar4 == 1)) {
      iVar5 = 0;
    }
    else if (((iVar4 == 2) || (iVar4 == 3)) ||
            (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x620), iVar4 != 5)) {
      iVar5 = 1;
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x620) != iVar5) goto LAB_1801054a3;
    if ((iVar4 == 0) || (iVar4 == 1)) {
      iVar5 = 0;
    }
    else if (((iVar4 == 2) || (iVar4 == 3)) ||
            (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x690), iVar4 != 5)) {
      iVar5 = 1;
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x690) != iVar5) goto LAB_1801054a3;
    if ((iVar4 == 0) || (iVar4 == 1)) {
      iVar5 = 0;
    }
    else if (iVar4 == 2) {
      iVar5 = 1;
    }
    else {
      iVar5 = iVar7;
      if ((iVar4 != 3) && (iVar4 == 5)) {
        iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x700);
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x700) != iVar5) goto LAB_1801054a3;
    if ((iVar4 == 0) || (iVar4 == 1)) {
      iVar5 = 0;
    }
    else if (((iVar4 == 2) || (iVar4 == 3)) ||
            (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x770), iVar4 != 5)) {
      iVar5 = 1;
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x770) != iVar5) goto LAB_1801054a3;
    if (((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) {
      iVar5 = 0;
    }
    else if ((iVar4 == 3) || (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x7e0), iVar4 != 5)) {
      iVar5 = 1;
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x7e0) != iVar5) goto LAB_1801054a3;
    if ((iVar4 == 0) || (iVar4 == 1)) {
      iVar5 = 0;
    }
    else if (((iVar4 == 2) || (iVar4 == 3)) ||
            (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x850), iVar4 != 5)) {
      iVar5 = 1;
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x850) != iVar5) goto LAB_1801054a3;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else if (((iVar4 == 1) || (iVar4 == 2)) ||
            ((iVar4 == 3 || (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x8c0), iVar4 != 5)))) {
      iVar5 = 1;
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x8c0) != iVar5) goto LAB_1801054a3;
    if ((iVar4 == 0) || (iVar4 == 1)) {
      iVar5 = 0;
    }
    else if (((iVar4 == 2) || (iVar4 == 3)) ||
            (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x930), iVar4 != 5)) {
      iVar5 = 1;
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x930) != iVar5) goto LAB_1801054a3;
    if ((iVar4 == 0) || (iVar4 == 1)) {
      iVar5 = 0;
    }
    else if (((iVar4 == 2) || (iVar4 == 3)) ||
            (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x9a0), iVar4 != 5)) {
      iVar5 = 1;
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x9a0) != iVar5) goto LAB_1801054a3;
    if ((iVar4 == 0) || (iVar4 == 1)) {
      iVar5 = 0;
    }
    else if (((iVar4 == 2) || (iVar4 == 3)) ||
            (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0xa10), iVar4 != 5)) {
      iVar5 = 1;
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0xa10) != iVar5) goto LAB_1801054a3;
    if (((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) {
      iVar5 = 0;
    }
    else if ((iVar4 == 3) || (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0xa80), iVar4 != 5)) {
      iVar5 = 1;
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0xa80) != iVar5) goto LAB_1801054a3;
    if ((iVar4 == 0) || (iVar4 == 1)) {
      iVar5 = 0;
    }
    else if ((iVar4 == 2) || (iVar4 == 3)) {
      iVar5 = 1;
    }
    else {
      iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0xaf0);
      if (iVar4 != 5) {
        iVar5 = iVar7;
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0xaf0) != iVar5) goto LAB_1801054a3;
    if ((iVar4 == 0) || (iVar4 == 1)) {
      iVar5 = 0;
    }
    else if ((iVar4 == 2) || (iVar4 == 3)) {
      iVar5 = 1;
    }
    else {
      iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0xb60);
      if (iVar4 != 5) {
        iVar5 = iVar7;
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0xb60) != iVar5) goto LAB_1801054a3;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else if (iVar4 == 1) {
      iVar5 = 1;
    }
    else {
      iVar5 = iVar7;
      if (((iVar4 != 2) && (iVar4 != 3)) && (iVar4 == 5)) {
        iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0xbd0);
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0xbd0) != iVar5) goto LAB_1801054a3;
    if ((iVar4 == 0) || (iVar4 == 1)) {
      iVar5 = 1;
    }
    else {
      iVar5 = iVar7;
      if (((iVar4 != 2) && (iVar4 != 3)) && (iVar4 == 5)) {
        iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0xc40);
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0xc40) != iVar5) goto LAB_1801054a3;
    if ((iVar4 == 0) || (iVar4 == 1)) {
      iVar5 = 0;
    }
    else if (iVar4 == 2) {
      iVar5 = 1;
    }
    else {
      iVar5 = iVar7;
      if ((iVar4 != 3) && (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0xcb0), iVar4 != 5)) {
        iVar5 = 3;
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0xcb0) != iVar5) goto LAB_1801054a3;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else if ((((iVar4 == 1) || (iVar4 == 2)) || (iVar4 == 3)) ||
            (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0xd20), iVar4 != 5)) {
      iVar5 = 1;
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0xd20) != iVar5) goto LAB_1801054a3;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else if (iVar4 == 1) {
      iVar5 = 1;
    }
    else if (iVar4 == 2) {
      iVar5 = 2;
    }
    else if (iVar4 == 3) {
      iVar5 = 3;
    }
    else {
      iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0xd90);
      if (iVar4 != 5) {
        iVar5 = 4;
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0xd90) != iVar5) goto LAB_1801054a3;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else if (iVar4 == 1) {
      iVar5 = 1;
    }
    else {
      iVar5 = iVar7;
      if (iVar4 != 2) {
        if (iVar4 == 3) {
          iVar5 = 3;
        }
        else {
          iVar5 = 4;
          if (iVar4 == 5) {
            iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0xe00);
          }
        }
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0xe00) != iVar5) goto LAB_1801054a3;
    if ((iVar4 == 0) || (iVar4 == 1)) {
      iVar7 = 0;
    }
    else if (iVar4 == 2) {
      iVar7 = 1;
    }
    else if ((iVar4 != 3) && (iVar4 == 5)) {
      iVar7 = *(int *)(SYSTEM_STATE_MANAGER + 0xe70);
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0xe70) != iVar7) goto LAB_1801054a3;
    bVar1 = true;
  }
  else {
LAB_1801054a3:
    bVar1 = false;
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xcb0) != 0) {
    if (bVar1) {
      if ((iVar4 == 0) || (iVar4 == 1)) {
        iVar5 = 0;
      }
      else if (((iVar4 == 2) || (iVar4 == 3)) ||
              (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0xee0), iVar4 != 5)) {
        iVar5 = 1;
      }
      if (*(int *)(SYSTEM_STATE_MANAGER + 0xee0) == iVar5) {
        bVar1 = true;
        goto LAB_1801054f1;
      }
    }
    bVar1 = false;
  }
LAB_1801054f1:
  if (*(int *)(_DAT_180c8a9c8 + 0xd20) != 0) {
    if (bVar1) {
      if ((iVar4 == 0) || (iVar4 == 1)) {
        iVar5 = 0;
      }
      else if (((iVar4 == 2) || (iVar4 == 3)) ||
              (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0xf50), iVar4 != 5)) {
        iVar5 = 1;
      }
      if (*(int *)(SYSTEM_STATE_MANAGER + 0xf50) == iVar5) {
        bVar1 = true;
        goto LAB_180105536;
      }
    }
    bVar1 = false;
  }
LAB_180105536:
  if (*(int *)(_DAT_180c8a9c8 + 0xd90) != 0) {
    if (bVar1) {
      if ((iVar4 == 0) || (iVar4 == 1)) {
        iVar5 = 0;
      }
      else if (((iVar4 == 2) || (iVar4 == 3)) ||
              (iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0xfc0), iVar4 != 5)) {
        iVar5 = 1;
      }
      if (*(int *)(SYSTEM_STATE_MANAGER + 0xfc0) == iVar5) {
        bVar1 = true;
        goto LAB_18010557b;
      }
    }
    bVar1 = false;
  }
LAB_18010557b:
  if (*(int *)(_DAT_180c8a9c8 + 0xe00) != 0) {
    if (bVar1) {
      if (((iVar4 != 0) && (iVar4 != 1)) && ((iVar4 != 2 && ((iVar4 != 3 && (iVar4 == 5)))))) {
        iVar3 = *(int *)(SYSTEM_STATE_MANAGER + 0x1030);
      }
      if (*(int *)(SYSTEM_STATE_MANAGER + 0x1030) == iVar3) {
        bVar1 = true;
        goto LAB_1801055b6;
      }
    }
    bVar1 = false;
  }
LAB_1801055b6:
  if (!bVar1) {
    return 5;
  }
  if (*(int *)(_DAT_180c8a9c8 + 0xe70) != 0) {
    iVar5 = 0;
    if ((((iVar4 != 0) && (iVar5 = iVar6, iVar4 != 1)) && (iVar4 != 2)) &&
       ((iVar4 != 3 && (iVar4 == 5)))) {
      iVar5 = *(int *)(SYSTEM_STATE_MANAGER + 0x10a0);
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x10a0) != iVar5) {
      return 5;
    }
  }
  return iVar4;
}





