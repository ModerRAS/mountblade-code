#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part380.c - 5 个函数
// 函数: void function_872f0b(int64_t param_1,uint param_2,uint param_3)
void function_872f0b(int64_t param_1,uint param_2,uint param_3)
{
  int64_t *plVar1;
  int iVar2;
  uint in_EAX;
  int64_t lVar3;
  int64_t lVar4;
  uint uVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t unaff_R14;
  uVar7 = (uint)unaff_R14;
  if ((int)((in_EAX ^ param_2) - param_2) < 0) {
    if (*(int *)(param_1 + 0x78) <= (int)uVar7) {
      if ((0 < (int)param_3) && (*(int64_t *)(param_1 + 0x70) != 0)) {
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x70),
                      &processed_var_8432_ptr,0x100,1);
      }
      *(int64_t *)(param_1 + 0x70) = unaff_R14;
      *(uint *)(param_1 + 0x7c) = uVar7;
      param_3 = uVar7;
      goto LAB_180872f61;
    }
  }
  else {
LAB_180872f61:
    iVar2 = *(int *)(param_1 + 0x78);
    if (iVar2 < 0) {
      if (iVar2 < 0) {
// WARNING: Subroutine does not return
        memset(*(int64_t *)(param_1 + 0x70) + (int64_t)iVar2 * 8,0,(uint64_t)(uint)-iVar2 << 3);
      }
    }
    *(uint *)(param_1 + 0x78) = uVar7;
    if (0 < (int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f))) {
      function_882f00(param_1 + 0x70,0);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x6c);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x68) <= (int)uVar7) {
      if ((0 < (int)uVar5) && (*(int64_t *)(param_1 + 0x60) != 0)) {
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x60),
                      &processed_var_8432_ptr,0x100,1);
      }
      *(int64_t *)(param_1 + 0x60) = unaff_R14;
      *(uint *)(param_1 + 0x6c) = uVar7;
      goto LAB_180872ff9;
    }
  }
  else {
LAB_180872ff9:
    uVar5 = *(uint *)(param_1 + 0x68);
    uVar6 = (uint64_t)uVar5;
    if ((int)uVar5 < 0) {
      lVar4 = (int64_t)(int)-uVar5;
      if (0 < lVar4) {
        lVar3 = (int64_t)(int)uVar5 * 0x30 + 0x2c + *(int64_t *)(param_1 + 0x60);
        do {
          *(int64_t *)(lVar3 + -0x2c) = unaff_R14;
          *(int64_t *)(lVar3 + -0x24) = unaff_R14;
          *(int64_t *)(lVar3 + -0x1c) = unaff_R14;
          *(int64_t *)(lVar3 + -0x14) = unaff_R14;
          *(int64_t *)(lVar3 + -0xc) = unaff_R14;
          *(int64_t *)(lVar3 + -4) = unaff_R14;
          lVar3 = lVar3 + 0x30;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    else if (0 < (int)uVar5) {
      lVar4 = *(int64_t *)(param_1 + 0x60) + 0x20;
      do {
        function_872480(lVar4);
        lVar4 = lVar4 + 0x30;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar5 = (int)*(uint *)(param_1 + 0x6c) >> 0x1f;
    *(uint *)(param_1 + 0x68) = uVar7;
    if (0 < (int)((*(uint *)(param_1 + 0x6c) ^ uVar5) - uVar5)) {
      function_883520(param_1 + 0x60,0);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x5c);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x58) <= (int)uVar7) {
      if ((0 < (int)uVar5) && (*(int64_t *)(param_1 + 0x50) != 0)) {
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x50),
                      &processed_var_8432_ptr,0x100,1);
      }
      *(int64_t *)(param_1 + 0x50) = unaff_R14;
      *(uint *)(param_1 + 0x5c) = uVar7;
      uVar5 = uVar7;
      goto LAB_1808730e3;
    }
  }
  else {
LAB_1808730e3:
    iVar2 = *(int *)(param_1 + 0x58);
    if (iVar2 < 0) {
      if (iVar2 < 0) {
// WARNING: Subroutine does not return
        memset(*(int64_t *)(param_1 + 0x50) + (int64_t)iVar2 * 0x18,0,
               (uint64_t)(uint)-iVar2 * 0x18);
      }
    }
    *(uint *)(param_1 + 0x58) = uVar7;
    if (0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
      function_8676f0(param_1 + 0x50,0);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x4c);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x48) <= (int)uVar7) {
      if ((0 < (int)uVar5) && (*(int64_t *)(param_1 + 0x40) != 0)) {
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x40),
                      &processed_var_8432_ptr,0x100,1);
      }
      *(int64_t *)(param_1 + 0x40) = unaff_R14;
      *(uint *)(param_1 + 0x4c) = uVar7;
      uVar5 = uVar7;
      goto LAB_18087317c;
    }
  }
  else {
LAB_18087317c:
    iVar2 = *(int *)(param_1 + 0x48);
    if (iVar2 < 0) {
// WARNING: Subroutine does not return
      memset(*(int64_t *)(param_1 + 0x40) + (int64_t)iVar2 * 4,0,(int64_t)-iVar2 << 2);
    }
    *(uint *)(param_1 + 0x48) = uVar7;
    if (0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
      SystemCore_Initializer(param_1 + 0x40,0);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x3c);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x38) <= (int)uVar7) {
      if ((0 < (int)uVar5) && (*(int64_t *)(param_1 + 0x30) != 0)) {
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x30),
                      &processed_var_8432_ptr,0x100,1);
      }
      *(int64_t *)(param_1 + 0x30) = unaff_R14;
      *(uint *)(param_1 + 0x3c) = uVar7;
      uVar5 = uVar7;
      goto LAB_18087320a;
    }
  }
  else {
LAB_18087320a:
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 < 0) {
// WARNING: Subroutine does not return
      memset((int64_t)iVar2 * 0x10 + *(int64_t *)(param_1 + 0x30),0,(int64_t)-iVar2 << 4);
    }
    *(uint *)(param_1 + 0x38) = uVar7;
    if (0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
      UltraHighFreq_StateController1(param_1 + 0x30,0);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x2c);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if ((int)uVar7 < *(int *)(param_1 + 0x28)) goto LAB_1808732e4;
    if ((0 < (int)uVar5) && (*(int64_t *)(param_1 + 0x20) != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x20),
                    &processed_var_8432_ptr,0x100,1);
    }
    *(int64_t *)(param_1 + 0x20) = unaff_R14;
    *(uint *)(param_1 + 0x2c) = uVar7;
    uVar5 = uVar7;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 < 0) {
    if (iVar2 < 0) {
// WARNING: Subroutine does not return
      memset((int64_t)iVar2 * 0x6c + *(int64_t *)(param_1 + 0x20),0,(uint64_t)(uint)-iVar2 * 0x6c
            );
    }
  }
  *(uint *)(param_1 + 0x28) = uVar7;
  if (0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
    function_882c70(param_1 + 0x20,0);
  }
LAB_1808732e4:
  uVar5 = *(uint *)(param_1 + 0x1c);
  plVar1 = (int64_t *)(param_1 + 0x10);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if ((int)uVar7 < *(int *)(param_1 + 0x18)) {
      return;
    }
    if ((0 < (int)uVar5) && (*plVar1 != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar1,&processed_var_8432_ptr,0x100,1);
    }
    *plVar1 = unaff_R14;
    *(uint *)(param_1 + 0x1c) = uVar7;
    uVar5 = uVar7;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 < 0) {
    if (iVar2 < 0) {
// WARNING: Subroutine does not return
      memset(*plVar1 + (int64_t)iVar2 * 0x28,0,(uint64_t)(uint)-iVar2 * 0x28);
    }
  }
  *(uint *)(param_1 + 0x18) = uVar7;
  if (0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
    function_882dd0(plVar1,0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_87304a(int64_t param_1)
void function_87304a(int64_t param_1)
{
  int64_t *plVar1;
  int iVar2;
  uint uVar3;
  int64_t unaff_RBX;
  int64_t lVar4;
  int64_t unaff_RBP;
  uint uVar5;
  int64_t unaff_R14;
  lVar4 = unaff_RBX + 0x20;
  do {
    function_872480(lVar4);
    lVar4 = lVar4 + 0x30;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  uVar3 = (int)*(uint *)(unaff_RBP + 0x6c) >> 0x1f;
  uVar5 = (uint)unaff_R14;
  *(uint *)(unaff_RBP + 0x68) = uVar5;
  if (0 < (int)((*(uint *)(unaff_RBP + 0x6c) ^ uVar3) - uVar3)) {
    function_883520(unaff_RBP + 0x60,0);
  }
  uVar3 = *(uint *)(unaff_RBP + 0x5c);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (*(int *)(unaff_RBP + 0x58) <= (int)uVar5) {
      if ((0 < (int)uVar3) && (*(int64_t *)(unaff_RBP + 0x50) != 0)) {
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBP + 0x50),
                      &processed_var_8432_ptr,0x100,1);
      }
      *(int64_t *)(unaff_RBP + 0x50) = unaff_R14;
      *(uint *)(unaff_RBP + 0x5c) = uVar5;
      uVar3 = uVar5;
      goto LAB_1808730e3;
    }
  }
  else {
LAB_1808730e3:
    iVar2 = *(int *)(unaff_RBP + 0x58);
    if (iVar2 < 0) {
      if (iVar2 < 0) {
// WARNING: Subroutine does not return
        memset(*(int64_t *)(unaff_RBP + 0x50) + (int64_t)iVar2 * 0x18,0,
               (uint64_t)(uint)-iVar2 * 0x18);
      }
    }
    *(uint *)(unaff_RBP + 0x58) = uVar5;
    if (0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
      function_8676f0(unaff_RBP + 0x50,0);
    }
  }
  uVar3 = *(uint *)(unaff_RBP + 0x4c);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (*(int *)(unaff_RBP + 0x48) <= (int)uVar5) {
      if ((0 < (int)uVar3) && (*(int64_t *)(unaff_RBP + 0x40) != 0)) {
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBP + 0x40),
                      &processed_var_8432_ptr,0x100,1);
      }
      *(int64_t *)(unaff_RBP + 0x40) = unaff_R14;
      *(uint *)(unaff_RBP + 0x4c) = uVar5;
      uVar3 = uVar5;
      goto LAB_18087317c;
    }
  }
  else {
LAB_18087317c:
    iVar2 = *(int *)(unaff_RBP + 0x48);
    if (iVar2 < 0) {
// WARNING: Subroutine does not return
      memset(*(int64_t *)(unaff_RBP + 0x40) + (int64_t)iVar2 * 4,0,(int64_t)-iVar2 << 2);
    }
    *(uint *)(unaff_RBP + 0x48) = uVar5;
    if (0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
      SystemCore_Initializer(unaff_RBP + 0x40,0);
    }
  }
  uVar3 = *(uint *)(unaff_RBP + 0x3c);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (*(int *)(unaff_RBP + 0x38) <= (int)uVar5) {
      if ((0 < (int)uVar3) && (*(int64_t *)(unaff_RBP + 0x30) != 0)) {
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBP + 0x30),
                      &processed_var_8432_ptr,0x100,1);
      }
      *(int64_t *)(unaff_RBP + 0x30) = unaff_R14;
      *(uint *)(unaff_RBP + 0x3c) = uVar5;
      uVar3 = uVar5;
      goto LAB_18087320a;
    }
  }
  else {
LAB_18087320a:
    iVar2 = *(int *)(unaff_RBP + 0x38);
    if (iVar2 < 0) {
// WARNING: Subroutine does not return
      memset((int64_t)iVar2 * 0x10 + *(int64_t *)(unaff_RBP + 0x30),0,(int64_t)-iVar2 << 4);
    }
    *(uint *)(unaff_RBP + 0x38) = uVar5;
    if (0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
      UltraHighFreq_StateController1(unaff_RBP + 0x30,0);
    }
  }
  uVar3 = *(uint *)(unaff_RBP + 0x2c);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if ((int)uVar5 < *(int *)(unaff_RBP + 0x28)) goto LAB_1808732e4;
    if ((0 < (int)uVar3) && (*(int64_t *)(unaff_RBP + 0x20) != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBP + 0x20),
                    &processed_var_8432_ptr,0x100,1);
    }
    *(int64_t *)(unaff_RBP + 0x20) = unaff_R14;
    *(uint *)(unaff_RBP + 0x2c) = uVar5;
    uVar3 = uVar5;
  }
  iVar2 = *(int *)(unaff_RBP + 0x28);
  if (iVar2 < 0) {
    if (iVar2 < 0) {
// WARNING: Subroutine does not return
      memset((int64_t)iVar2 * 0x6c + *(int64_t *)(unaff_RBP + 0x20),0,
             (uint64_t)(uint)-iVar2 * 0x6c);
    }
  }
  *(uint *)(unaff_RBP + 0x28) = uVar5;
  if (0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
    function_882c70(unaff_RBP + 0x20,0);
  }
LAB_1808732e4:
  uVar3 = *(uint *)(unaff_RBP + 0x1c);
  plVar1 = (int64_t *)(unaff_RBP + 0x10);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if ((int)uVar5 < *(int *)(unaff_RBP + 0x18)) {
      return;
    }
    if ((0 < (int)uVar3) && (*plVar1 != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar1,&processed_var_8432_ptr,0x100,1);
    }
    *plVar1 = unaff_R14;
    *(uint *)(unaff_RBP + 0x1c) = uVar5;
    uVar3 = uVar5;
  }
  iVar2 = *(int *)(unaff_RBP + 0x18);
  if (iVar2 < 0) {
    if (iVar2 < 0) {
// WARNING: Subroutine does not return
      memset(*plVar1 + (int64_t)iVar2 * 0x28,0,(uint64_t)(uint)-iVar2 * 0x28);
    }
  }
  *(uint *)(unaff_RBP + 0x18) = uVar5;
  if (0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
    function_882dd0(plVar1,0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_87306d(void)
void function_87306d(void)
{
  int64_t *plVar1;
  int iVar2;
  uint uVar3;
  int64_t unaff_RBP;
  uint uVar4;
  int64_t unaff_R14;
  uVar3 = (int)*(uint *)(unaff_RBP + 0x6c) >> 0x1f;
  uVar4 = (uint)unaff_R14;
  *(uint *)(unaff_RBP + 0x68) = uVar4;
  if (0 < (int)((*(uint *)(unaff_RBP + 0x6c) ^ uVar3) - uVar3)) {
    function_883520(unaff_RBP + 0x60,0);
  }
  uVar3 = *(uint *)(unaff_RBP + 0x5c);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (*(int *)(unaff_RBP + 0x58) <= (int)uVar4) {
      if ((0 < (int)uVar3) && (*(int64_t *)(unaff_RBP + 0x50) != 0)) {
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBP + 0x50),
                      &processed_var_8432_ptr,0x100,1);
      }
      *(int64_t *)(unaff_RBP + 0x50) = unaff_R14;
      *(uint *)(unaff_RBP + 0x5c) = uVar4;
      uVar3 = uVar4;
      goto LAB_1808730e3;
    }
  }
  else {
LAB_1808730e3:
    iVar2 = *(int *)(unaff_RBP + 0x58);
    if (iVar2 < 0) {
      if (iVar2 < 0) {
// WARNING: Subroutine does not return
        memset(*(int64_t *)(unaff_RBP + 0x50) + (int64_t)iVar2 * 0x18,0,
               (uint64_t)(uint)-iVar2 * 0x18);
      }
    }
    *(uint *)(unaff_RBP + 0x58) = uVar4;
    if (0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
      function_8676f0(unaff_RBP + 0x50,0);
    }
  }
  uVar3 = *(uint *)(unaff_RBP + 0x4c);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (*(int *)(unaff_RBP + 0x48) <= (int)uVar4) {
      if ((0 < (int)uVar3) && (*(int64_t *)(unaff_RBP + 0x40) != 0)) {
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBP + 0x40),
                      &processed_var_8432_ptr,0x100,1);
      }
      *(int64_t *)(unaff_RBP + 0x40) = unaff_R14;
      *(uint *)(unaff_RBP + 0x4c) = uVar4;
      uVar3 = uVar4;
      goto LAB_18087317c;
    }
  }
  else {
LAB_18087317c:
    iVar2 = *(int *)(unaff_RBP + 0x48);
    if (iVar2 < 0) {
// WARNING: Subroutine does not return
      memset(*(int64_t *)(unaff_RBP + 0x40) + (int64_t)iVar2 * 4,0,(int64_t)-iVar2 << 2);
    }
    *(uint *)(unaff_RBP + 0x48) = uVar4;
    if (0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
      SystemCore_Initializer(unaff_RBP + 0x40,0);
    }
  }
  uVar3 = *(uint *)(unaff_RBP + 0x3c);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (*(int *)(unaff_RBP + 0x38) <= (int)uVar4) {
      if ((0 < (int)uVar3) && (*(int64_t *)(unaff_RBP + 0x30) != 0)) {
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBP + 0x30),
                      &processed_var_8432_ptr,0x100,1);
      }
      *(int64_t *)(unaff_RBP + 0x30) = unaff_R14;
      *(uint *)(unaff_RBP + 0x3c) = uVar4;
      uVar3 = uVar4;
      goto LAB_18087320a;
    }
  }
  else {
LAB_18087320a:
    iVar2 = *(int *)(unaff_RBP + 0x38);
    if (iVar2 < 0) {
// WARNING: Subroutine does not return
      memset((int64_t)iVar2 * 0x10 + *(int64_t *)(unaff_RBP + 0x30),0,(int64_t)-iVar2 << 4);
    }
    *(uint *)(unaff_RBP + 0x38) = uVar4;
    if (0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
      UltraHighFreq_StateController1(unaff_RBP + 0x30,0);
    }
  }
  uVar3 = *(uint *)(unaff_RBP + 0x2c);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if ((int)uVar4 < *(int *)(unaff_RBP + 0x28)) goto LAB_1808732e4;
    if ((0 < (int)uVar3) && (*(int64_t *)(unaff_RBP + 0x20) != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBP + 0x20),
                    &processed_var_8432_ptr,0x100,1);
    }
    *(int64_t *)(unaff_RBP + 0x20) = unaff_R14;
    *(uint *)(unaff_RBP + 0x2c) = uVar4;
    uVar3 = uVar4;
  }
  iVar2 = *(int *)(unaff_RBP + 0x28);
  if (iVar2 < 0) {
    if (iVar2 < 0) {
// WARNING: Subroutine does not return
      memset((int64_t)iVar2 * 0x6c + *(int64_t *)(unaff_RBP + 0x20),0,
             (uint64_t)(uint)-iVar2 * 0x6c);
    }
  }
  *(uint *)(unaff_RBP + 0x28) = uVar4;
  if (0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
    function_882c70(unaff_RBP + 0x20,0);
  }
LAB_1808732e4:
  uVar3 = *(uint *)(unaff_RBP + 0x1c);
  plVar1 = (int64_t *)(unaff_RBP + 0x10);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if ((int)uVar4 < *(int *)(unaff_RBP + 0x18)) {
      return;
    }
    if ((0 < (int)uVar3) && (*plVar1 != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar1,&processed_var_8432_ptr,0x100,1);
    }
    *plVar1 = unaff_R14;
    *(uint *)(unaff_RBP + 0x1c) = uVar4;
    uVar3 = uVar4;
  }
  iVar2 = *(int *)(unaff_RBP + 0x18);
  if (iVar2 < 0) {
    if (iVar2 < 0) {
// WARNING: Subroutine does not return
      memset(*plVar1 + (int64_t)iVar2 * 0x28,0,(uint64_t)(uint)-iVar2 * 0x28);
    }
  }
  *(uint *)(unaff_RBP + 0x18) = uVar4;
  if (0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
    function_882dd0(plVar1,0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_87309b(uint64_t param_1,uint64_t param_2,int param_3)
void function_87309b(uint64_t param_1,uint64_t param_2,int param_3)
{
  int64_t *plVar1;
  int iVar2;
  uint uVar3;
  int64_t unaff_RBP;
  uint uVar4;
  int64_t unaff_R14;
  uVar4 = (uint)unaff_R14;
  if (*(int *)(unaff_RBP + 0x58) <= (int)uVar4) {
    if ((0 < param_3) && (*(int64_t *)(unaff_RBP + 0x50) != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBP + 0x50),
                    &processed_var_8432_ptr,0x100,1);
    }
    *(int64_t *)(unaff_RBP + 0x50) = unaff_R14;
    *(uint *)(unaff_RBP + 0x5c) = uVar4;
    iVar2 = *(int *)(unaff_RBP + 0x58);
    if (iVar2 < 0) {
      if (iVar2 < 0) {
// WARNING: Subroutine does not return
        memset(*(int64_t *)(unaff_RBP + 0x50) + (int64_t)iVar2 * 0x18,0,
               (uint64_t)(uint)-iVar2 * 0x18);
      }
    }
    *(uint *)(unaff_RBP + 0x58) = uVar4;
    if (0 < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
      function_8676f0(unaff_RBP + 0x50,0);
    }
  }
  uVar3 = *(uint *)(unaff_RBP + 0x4c);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (*(int *)(unaff_RBP + 0x48) <= (int)uVar4) {
      if ((0 < (int)uVar3) && (*(int64_t *)(unaff_RBP + 0x40) != 0)) {
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBP + 0x40),
                      &processed_var_8432_ptr,0x100,1);
      }
      *(int64_t *)(unaff_RBP + 0x40) = unaff_R14;
      *(uint *)(unaff_RBP + 0x4c) = uVar4;
      uVar3 = uVar4;
      goto LAB_18087317c;
    }
  }
  else {
LAB_18087317c:
    iVar2 = *(int *)(unaff_RBP + 0x48);
    if (iVar2 < 0) {
// WARNING: Subroutine does not return
      memset(*(int64_t *)(unaff_RBP + 0x40) + (int64_t)iVar2 * 4,0,(int64_t)-iVar2 << 2);
    }
    *(uint *)(unaff_RBP + 0x48) = uVar4;
    if (0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
      SystemCore_Initializer(unaff_RBP + 0x40,0);
    }
  }
  uVar3 = *(uint *)(unaff_RBP + 0x3c);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (*(int *)(unaff_RBP + 0x38) <= (int)uVar4) {
      if ((0 < (int)uVar3) && (*(int64_t *)(unaff_RBP + 0x30) != 0)) {
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBP + 0x30),
                      &processed_var_8432_ptr,0x100,1);
      }
      *(int64_t *)(unaff_RBP + 0x30) = unaff_R14;
      *(uint *)(unaff_RBP + 0x3c) = uVar4;
      uVar3 = uVar4;
      goto LAB_18087320a;
    }
  }
  else {
LAB_18087320a:
    iVar2 = *(int *)(unaff_RBP + 0x38);
    if (iVar2 < 0) {
// WARNING: Subroutine does not return
      memset((int64_t)iVar2 * 0x10 + *(int64_t *)(unaff_RBP + 0x30),0,(int64_t)-iVar2 << 4);
    }
    *(uint *)(unaff_RBP + 0x38) = uVar4;
    if (0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
      UltraHighFreq_StateController1(unaff_RBP + 0x30,0);
    }
  }
  uVar3 = *(uint *)(unaff_RBP + 0x2c);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if ((int)uVar4 < *(int *)(unaff_RBP + 0x28)) goto LAB_1808732e4;
    if ((0 < (int)uVar3) && (*(int64_t *)(unaff_RBP + 0x20) != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBP + 0x20),
                    &processed_var_8432_ptr,0x100,1);
    }
    *(int64_t *)(unaff_RBP + 0x20) = unaff_R14;
    *(uint *)(unaff_RBP + 0x2c) = uVar4;
    uVar3 = uVar4;
  }
  iVar2 = *(int *)(unaff_RBP + 0x28);
  if (iVar2 < 0) {
    if (iVar2 < 0) {
// WARNING: Subroutine does not return
      memset((int64_t)iVar2 * 0x6c + *(int64_t *)(unaff_RBP + 0x20),0,
             (uint64_t)(uint)-iVar2 * 0x6c);
    }
  }
  *(uint *)(unaff_RBP + 0x28) = uVar4;
  if (0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
    function_882c70(unaff_RBP + 0x20,0);
  }
LAB_1808732e4:
  uVar3 = *(uint *)(unaff_RBP + 0x1c);
  plVar1 = (int64_t *)(unaff_RBP + 0x10);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if ((int)uVar4 < *(int *)(unaff_RBP + 0x18)) {
      return;
    }
    if ((0 < (int)uVar3) && (*plVar1 != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar1,&processed_var_8432_ptr,0x100,1);
    }
    *plVar1 = unaff_R14;
    *(uint *)(unaff_RBP + 0x1c) = uVar4;
    uVar3 = uVar4;
  }
  iVar2 = *(int *)(unaff_RBP + 0x18);
  if (iVar2 < 0) {
    if (iVar2 < 0) {
// WARNING: Subroutine does not return
      memset(*plVar1 + (int64_t)iVar2 * 0x28,0,(uint64_t)(uint)-iVar2 * 0x28);
    }
  }
  *(uint *)(unaff_RBP + 0x18) = uVar4;
  if (0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
    function_882dd0(plVar1,0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8732fb(void)
void function_8732fb(void)
{
  int iVar1;
  int64_t *unaff_RBX;
  int in_R10D;
  uint uVar2;
  int64_t unaff_R14;
  uVar2 = (uint)unaff_R14;
  if ((int)unaff_RBX[1] <= (int)uVar2) {
    if ((0 < in_R10D) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = unaff_R14;
    *(uint *)((int64_t)unaff_RBX + 0xc) = uVar2;
    iVar1 = (int)unaff_RBX[1];
    if (iVar1 < 0) {
      if (iVar1 < 0) {
// WARNING: Subroutine does not return
        memset(*unaff_RBX + (int64_t)iVar1 * 0x28,0,(uint64_t)(uint)-iVar1 * 0x28);
      }
    }
    *(uint *)(unaff_RBX + 1) = uVar2;
    if (0 < (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f))) {
      function_882dd0();
    }
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x000180867723)
// WARNING: Removing unreachable block (ram,0x000180867737)
// WARNING: Removing unreachable block (ram,0x000180867771)
// WARNING: Removing unreachable block (ram,0x000180867779)
// WARNING: Removing unreachable block (ram,0x000180867781)
// WARNING: Removing unreachable block (ram,0x000180867790)
// WARNING: Removing unreachable block (ram,0x0001808677fa)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint function_8733a0(int64_t *param_1)
{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uVar3 = *(uint *)((int64_t)param_1 + 0xc);
  uVar2 = uVar3 ^ (int)uVar3 >> 0x1f;
  if ((int)(uVar2 - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return uVar2;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    if (iVar1 < 0) {
// WARNING: Subroutine does not return
      memset(*param_1 + (int64_t)iVar1 * 0x18,0,(uint64_t)(uint)-iVar1 * 0x18);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar3 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  if ((int)uVar3 < 1) {
    return uVar3;
  }
  if (0 < (int)param_1[1]) {
    return 0x1c;
  }
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = 0;
  *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  return 0;
}