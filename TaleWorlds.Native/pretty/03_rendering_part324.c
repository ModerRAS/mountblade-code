#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part324.c - 23 个函数

// 函数: void FUN_1804396e1(void)
void FUN_1804396e1(void)

{
  int64_t lVar1;
  int32_t uVar2;
  int iVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000040;
  uint64_t in_stack_00000048;
  
  lVar1 = SYSTEM_STATE_MANAGER;
  iVar3 = (int)unaff_XMM6_Da;
  if (iVar3 < 5) {
    uStack0000000000000040 = in_stack_00000048;
    uVar6 = 0;
    uVar4 = 1;
    uVar5 = 4;
    uVar7 = 4;
    uVar8 = 2;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else if (iVar3 == 1) {
      uVar2 = 1;
    }
    else {
      uVar2 = uVar8;
      if (iVar3 != 2) {
        if (iVar3 == 3) {
          uVar2 = 3;
        }
        else {
          uVar2 = uVar7;
          if (iVar3 == 5) {
            uVar2 = *(int32_t *)(SYSTEM_STATE_MANAGER + 0xe0);
          }
        }
      }
    }
    FUN_18010e230(SYSTEM_STATE_MANAGER,uVar2);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else if (iVar3 == 1) {
      uVar2 = 1;
    }
    else {
      uVar2 = uVar8;
      if (iVar3 != 2) {
        if (iVar3 == 3) {
          uVar2 = 3;
        }
        else if (iVar3 == 5) {
          uVar2 = *(int32_t *)(lVar1 + 0x150);
        }
        else {
          uVar2 = 5;
        }
      }
    }
    FUN_18010e170(lVar1,uVar2);
    if (((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) {
      uVar2 = 0;
    }
    else if ((iVar3 == 3) || (iVar3 != 5)) {
      uVar2 = 1;
    }
    else {
      uVar2 = *(int32_t *)(lVar1 + 0x1c0);
    }
    FUN_18010e0b0(lVar1,uVar2);
    if ((iVar3 == 0) || (iVar3 == 1)) {
      uVar2 = 0;
    }
    else if ((iVar3 == 2) || (iVar3 == 3)) {
      uVar2 = 1;
    }
    else if (iVar3 == 5) {
      uVar2 = *(int32_t *)(lVar1 + 0x230);
    }
    else {
      uVar2 = 2;
    }
    FUN_18010e030(lVar1,uVar2);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else if (iVar3 == 1) {
      uVar2 = 1;
    }
    else if (iVar3 == 2) {
      uVar2 = 2;
    }
    else if (iVar3 == 3) {
      uVar2 = 3;
    }
    else {
      uVar2 = uVar7;
      if (iVar3 == 5) {
        uVar2 = *(int32_t *)(lVar1 + 0x2a0);
      }
    }
    FUN_18010dfb0(lVar1,uVar2);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else if (iVar3 == 1) {
      uVar2 = 2;
    }
    else if (iVar3 == 2) {
      uVar2 = 3;
    }
    else {
      uVar2 = uVar7;
      if (iVar3 != 3) {
        if (iVar3 == 5) {
          uVar2 = *(int32_t *)(lVar1 + 0x310);
        }
        else {
          uVar2 = 5;
        }
      }
    }
    FUN_18010def0(lVar1,uVar2);
    if ((iVar3 == 0) || (iVar3 == 1)) {
      uVar2 = 0;
    }
    else if (iVar3 == 2) {
      uVar2 = 1;
    }
    else if (iVar3 == 3) {
      uVar2 = 2;
    }
    else if (iVar3 == 5) {
      uVar2 = *(int32_t *)(lVar1 + 0x380);
    }
    else {
      uVar2 = 3;
    }
    FUN_18010e330(lVar1,uVar2);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else if ((iVar3 == 1) || (iVar3 == 2)) {
      uVar2 = 1;
    }
    else if ((iVar3 == 3) || (iVar3 != 5)) {
      uVar2 = 2;
    }
    else {
      uVar2 = *(int32_t *)(lVar1 + 0x3f0);
    }
    FUN_18010e2b0(lVar1,uVar2);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else if ((iVar3 == 1) || (iVar3 == 2)) {
      uVar2 = 1;
    }
    else if ((iVar3 == 3) || (iVar3 != 5)) {
      uVar2 = 2;
    }
    else {
      uVar2 = *(int32_t *)(lVar1 + 0x460);
    }
    FUN_18010de30(lVar1,uVar2);
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    else if (iVar3 == 1) {
      uVar5 = 1;
    }
    else if (iVar3 == 2) {
      uVar5 = 3;
    }
    else if ((iVar3 != 3) && (uVar5 = 5, iVar3 == 5)) {
      uVar5 = *(int32_t *)(lVar1 + 0x4d0);
    }
    FUN_18010e430(lVar1,uVar5);
    if ((((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) || ((iVar3 == 3 || (iVar3 != 5)))) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(int32_t *)(lVar1 + 0x540);
    }
    FUN_18010e3b0(lVar1,uVar5);
    if ((iVar3 == 0) || (iVar3 == 1)) {
      uVar5 = 0;
    }
    else if (((iVar3 == 2) || (iVar3 == 3)) || (iVar3 != 5)) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(int32_t *)(lVar1 + 0x5b0);
    }
    FUN_18010dd70(lVar1,uVar5);
    if ((iVar3 == 0) || (iVar3 == 1)) {
      uVar5 = 0;
    }
    else if (((iVar3 == 2) || (iVar3 == 3)) || (iVar3 != 5)) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(int32_t *)(lVar1 + 0x620);
    }
    FUN_18010dcf0(lVar1,uVar5);
    if ((iVar3 == 0) || (iVar3 == 1)) {
      uVar5 = 0;
    }
    else if (((iVar3 == 2) || (iVar3 == 3)) || (iVar3 != 5)) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(int32_t *)(lVar1 + 0x690);
    }
    FUN_18010dc70(lVar1,uVar5);
    if ((iVar3 == 0) || (iVar3 == 1)) {
      uVar5 = 0;
    }
    else if (iVar3 == 2) {
      uVar5 = 1;
    }
    else if ((iVar3 == 3) || (iVar3 != 5)) {
      uVar5 = 2;
    }
    else {
      uVar5 = *(int32_t *)(lVar1 + 0x700);
    }
    FUN_18010dbf0(lVar1,uVar5);
    if ((iVar3 == 0) || (iVar3 == 1)) {
      uVar5 = 0;
    }
    else if (((iVar3 == 2) || (iVar3 == 3)) || (iVar3 != 5)) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(int32_t *)(lVar1 + 0x770);
    }
    FUN_18010db70(lVar1,uVar5);
    if (((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) {
      uVar5 = 0;
    }
    else if ((iVar3 == 3) || (iVar3 != 5)) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(int32_t *)(lVar1 + 0x7e0);
    }
    FUN_18010daf0(lVar1,uVar5);
    if ((iVar3 == 0) || (iVar3 == 1)) {
      uVar5 = 0;
    }
    else if (((iVar3 == 2) || (iVar3 == 3)) || (iVar3 != 5)) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(int32_t *)(lVar1 + 0x850);
    }
    FUN_18010da70(lVar1,uVar5);
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    else if (((iVar3 == 1) || (iVar3 == 2)) || ((iVar3 == 3 || (iVar3 != 5)))) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(int32_t *)(lVar1 + 0x8c0);
    }
    FUN_18010d9f0(lVar1,uVar5);
    if ((iVar3 == 0) || (iVar3 == 1)) {
      uVar5 = 0;
    }
    else if (((iVar3 == 2) || (iVar3 == 3)) || (iVar3 != 5)) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(int32_t *)(lVar1 + 0x930);
    }
    FUN_18010d970(lVar1,uVar5);
    if ((iVar3 == 0) || (iVar3 == 1)) {
      uVar5 = 0;
    }
    else if (((iVar3 == 2) || (iVar3 == 3)) || (iVar3 != 5)) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(int32_t *)(lVar1 + 0x9a0);
    }
    FUN_18010d8f0(lVar1,uVar5);
    if ((iVar3 == 0) || (iVar3 == 1)) {
      uVar5 = 0;
    }
    else if (((iVar3 == 2) || (iVar3 == 3)) || (iVar3 != 5)) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(int32_t *)(lVar1 + 0xa10);
    }
    FUN_18010d870(lVar1,uVar5);
    if (((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) {
      uVar5 = 0;
    }
    else if ((iVar3 == 3) || (iVar3 != 5)) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(int32_t *)(lVar1 + 0xa80);
    }
    FUN_18010d7f0(lVar1,uVar5);
    if ((iVar3 == 0) || (iVar3 == 1)) {
      uVar5 = 0;
    }
    else if ((iVar3 == 2) || (iVar3 == 3)) {
      uVar5 = 1;
    }
    else {
      uVar5 = uVar8;
      if (iVar3 == 5) {
        uVar5 = *(int32_t *)(lVar1 + 0xaf0);
      }
    }
    FUN_18010d770(lVar1,uVar5);
    if ((iVar3 == 0) || (iVar3 == 1)) {
      uVar5 = 0;
    }
    else if ((iVar3 == 2) || (iVar3 == 3)) {
      uVar5 = 1;
    }
    else {
      uVar5 = uVar8;
      if (iVar3 == 5) {
        uVar5 = *(int32_t *)(lVar1 + 0xb60);
      }
    }
    FUN_18010d6f0(lVar1,uVar5);
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    else if (iVar3 == 1) {
      uVar5 = 1;
    }
    else {
      uVar5 = uVar8;
      if (((iVar3 != 2) && (iVar3 != 3)) && (iVar3 == 5)) {
        uVar5 = *(int32_t *)(lVar1 + 0xbd0);
      }
    }
    FUN_18010d670(lVar1,uVar5);
    if ((iVar3 == 0) || (iVar3 == 1)) {
      uVar5 = 1;
    }
    else {
      uVar5 = uVar8;
      if (((iVar3 != 2) && (iVar3 != 3)) && (iVar3 == 5)) {
        uVar5 = *(int32_t *)(lVar1 + 0xc40);
      }
    }
    FUN_18010d5f0(lVar1,uVar5);
    if ((iVar3 == 0) || (iVar3 == 1)) {
      uVar5 = 0;
    }
    else if (iVar3 == 2) {
      uVar5 = 1;
    }
    else {
      uVar5 = uVar8;
      if (iVar3 != 3) {
        if (iVar3 == 5) {
          uVar5 = *(int32_t *)(lVar1 + 0xcb0);
        }
        else {
          uVar5 = 3;
        }
      }
    }
    FUN_18010d570(lVar1,uVar5);
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    else if ((((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) || (iVar3 != 5)) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(int32_t *)(lVar1 + 0xd20);
    }
    FUN_18010d4f0(lVar1,uVar5);
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    else if (iVar3 == 1) {
      uVar5 = 1;
    }
    else {
      uVar5 = uVar8;
      if (iVar3 != 2) {
        if (iVar3 == 3) {
          uVar5 = 3;
        }
        else {
          uVar5 = uVar7;
          if (iVar3 == 5) {
            uVar5 = *(int32_t *)(lVar1 + 0xd90);
          }
        }
      }
    }
    FUN_18010d470(lVar1,uVar5);
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    else if (iVar3 == 1) {
      uVar5 = 1;
    }
    else {
      uVar5 = uVar8;
      if (iVar3 != 2) {
        if (iVar3 == 3) {
          uVar5 = 3;
        }
        else {
          uVar5 = uVar7;
          if (iVar3 == 5) {
            uVar5 = *(int32_t *)(lVar1 + 0xe00);
          }
        }
      }
    }
    FUN_18010d3b0(lVar1,uVar5);
    if ((iVar3 == 0) || (iVar3 == 1)) {
      uVar8 = 0;
    }
    else if (iVar3 == 2) {
      uVar8 = 1;
    }
    else if ((iVar3 != 3) && (iVar3 == 5)) {
      uVar8 = *(int32_t *)(lVar1 + 0xe70);
    }
    FUN_18010d2f0(lVar1,uVar8);
    if (*(int *)(render_system_data_memory + 0xcb0) != 0) {
      if ((iVar3 == 0) || (iVar3 == 1)) {
        uVar5 = 0;
      }
      else if (((iVar3 == 2) || (iVar3 == 3)) || (iVar3 != 5)) {
        uVar5 = 1;
      }
      else {
        uVar5 = *(int32_t *)(lVar1 + 0xee0);
      }
      FUN_18010d270(lVar1,uVar5);
    }
    if (*(int *)(render_system_data_memory + 0xd20) != 0) {
      if ((iVar3 == 0) || (iVar3 == 1)) {
        uVar5 = 0;
      }
      else if (((iVar3 == 2) || (iVar3 == 3)) || (iVar3 != 5)) {
        uVar5 = 1;
      }
      else {
        uVar5 = *(int32_t *)(lVar1 + 0xf50);
      }
      FUN_18010d1f0(lVar1,uVar5);
    }
    if (*(int *)(render_system_data_memory + 0xd90) != 0) {
      if ((iVar3 == 0) || (iVar3 == 1)) {
        uVar5 = 0;
      }
      else if (((iVar3 == 2) || (iVar3 == 3)) || (iVar3 != 5)) {
        uVar5 = 1;
      }
      else {
        uVar5 = *(int32_t *)(lVar1 + 0xfc0);
      }
      FUN_18010d170(lVar1,uVar5);
    }
    if (*(int *)(render_system_data_memory + 0xe00) != 0) {
      uVar5 = 1;
      if (((iVar3 != 0) && (iVar3 != 1)) &&
         ((uVar5 = uVar4, iVar3 != 2 && ((iVar3 != 3 && (iVar3 == 5)))))) {
        uVar5 = *(int32_t *)(lVar1 + 0x1030);
      }
      FUN_18010d0f0(lVar1,uVar5);
    }
    if (*(int *)(render_system_data_memory + 0xe70) != 0) {
      uVar5 = 0;
      if ((((iVar3 != 0) && (uVar5 = uVar6, iVar3 != 1)) && (iVar3 != 2)) &&
         ((iVar3 != 3 && (iVar3 == 5)))) {
        uVar5 = *(int32_t *)(lVar1 + 0x10a0);
      }
      FUN_18010d070(lVar1,uVar5);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804396f9(void)
void FUN_1804396f9(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  void *puVar5;
  int64_t unaff_RBP;
  float unaff_XMM6_Da;
  int in_stack_00000048;
  
  iVar3 = FUN_180438350();
  if ((float)iVar3 < unaff_XMM6_Da) {
    return;
  }
  iVar3 = FUN_180438350();
  if (unaff_XMM6_Da == (float)iVar3) {
    FUN_180171f10(*(uint64_t *)(system_main_module_state + 8),unaff_RBP + 0x20);
    FUN_18006b4c0(SYSTEM_STATE_MANAGER,*(int32_t *)(unaff_RBP + 0x20));
    in_stack_00000048 = *(int *)(unaff_RBP + 0x24);
  }
  else {
    uVar4 = FUN_1804386b0((int)unaff_XMM6_Da);
    lVar1 = SYSTEM_STATE_MANAGER;
    *(uint64_t *)(unaff_RBP + 0x20) = uVar4;
    FUN_18006b4c0(lVar1,(int)*(float *)(unaff_RBP + 0x20));
    in_stack_00000048 = (int)*(float *)(unaff_RBP + 0x24);
  }
  lVar1 = SYSTEM_STATE_MANAGER;
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1e20) != 0) &&
     (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1e28))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar5 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x1dd0) != (void *)0x0) {
        puVar5 = *(void **)(lVar1 + 0x1dd0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar5);
    }
    *(int32_t *)(lVar1 + 0x1dc0) = *(int32_t *)(lVar1 + 0x1e08);
    return;
  }
  *(int *)(lVar1 + 0x1dc0) = in_stack_00000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439760(void)
void FUN_180439760(void)

{
  int64_t lVar1;
  char cVar2;
  uint64_t uVar3;
  void *puVar4;
  int64_t unaff_RBP;
  float unaff_XMM6_Da;
  int in_stack_00000048;
  
  uVar3 = FUN_1804386b0((int)unaff_XMM6_Da);
  lVar1 = SYSTEM_STATE_MANAGER;
  *(uint64_t *)(unaff_RBP + 0x20) = uVar3;
  FUN_18006b4c0(lVar1,(int)*(float *)(unaff_RBP + 0x20));
  lVar1 = SYSTEM_STATE_MANAGER;
  in_stack_00000048 = (int)*(float *)(unaff_RBP + 0x24);
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1e20) != 0) &&
     (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1e28))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar4 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x1dd0) != (void *)0x0) {
        puVar4 = *(void **)(lVar1 + 0x1dd0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar4);
    }
    *(int32_t *)(lVar1 + 0x1dc0) = *(int32_t *)(lVar1 + 0x1e08);
    return;
  }
  *(int *)(lVar1 + 0x1dc0) = in_stack_00000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043979e(void)
void FUN_18043979e(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  void *puVar4;
  float unaff_XMM6_Da;
  float in_stack_00000048;
  
  iVar3 = FUN_180438940((int)unaff_XMM6_Da);
  lVar1 = SYSTEM_STATE_MANAGER;
  in_stack_00000048 = (float)iVar3;
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1e90) != 0) &&
     (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1e98))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar4 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x1e40) != (void *)0x0) {
        puVar4 = *(void **)(lVar1 + 0x1e40);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar4);
    }
    *(int32_t *)(lVar1 + 0x1e30) = *(int32_t *)(lVar1 + 0x1e78);
    return;
  }
  *(float *)(lVar1 + 0x1e30) = in_stack_00000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804397c2(uint64_t param_1,int32_t param_2)
void FUN_1804397c2(uint64_t param_1,int32_t param_2)

{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  uint64_t uStack0000000000000030;
  int32_t uStack0000000000000048;
  
  lVar1 = SYSTEM_STATE_MANAGER;
  uStack0000000000000030 = _uStack0000000000000048;
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x2130) != 0) &&
     (uStack0000000000000048 = param_2,
     cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x2138))(&stack0x00000048),
     param_2 = uStack0000000000000048, cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x20e0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x20e0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x20d0) = *(int32_t *)(lVar1 + 0x2118);
    return;
  }
  *(int32_t *)(lVar1 + 0x20d0) = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804397dd(void)
void FUN_1804397dd(void)

{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = SYSTEM_STATE_MANAGER;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1bf0) != 0) &&
     (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1bf8))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x1ba0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x1ba0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x1b90) = *(int32_t *)(lVar1 + 0x1bd8);
    return;
  }
  *(int *)(lVar1 + 0x1b90) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804397fc(void)
void FUN_1804397fc(void)

{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = SYSTEM_STATE_MANAGER;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1fe0) != 0) &&
     (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1fe8))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x1f90) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x1f90);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x1f80) = *(int32_t *)(lVar1 + 0x1fc8);
    return;
  }
  *(int *)(lVar1 + 0x1f80) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043981b(void)
void FUN_18043981b(void)

{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = SYSTEM_STATE_MANAGER;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x530) != 0) &&
     (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x538))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x4e0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x4e0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x4d0) = *(int32_t *)(lVar1 + 0x518);
    return;
  }
  *(int *)(lVar1 + 0x4d0) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043983a(void)
void FUN_18043983a(void)

{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = SYSTEM_STATE_MANAGER;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x5a0) != 0) &&
     (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x5a8))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x550) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x550);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x540) = *(int32_t *)(lVar1 + 0x588);
    return;
  }
  *(int *)(lVar1 + 0x540) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439859(void)
void FUN_180439859(void)

{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = SYSTEM_STATE_MANAGER;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0xd10) != 0) &&
     (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0xd18))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0xcc0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0xcc0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0xcb0) = *(int32_t *)(lVar1 + 0xcf8);
    return;
  }
  *(int *)(lVar1 + 0xcb0) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439878(void)
void FUN_180439878(void)

{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = SYSTEM_STATE_MANAGER;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0xca0) != 0) &&
     (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0xca8))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0xc50) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0xc50);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0xc40) = *(int32_t *)(lVar1 + 0xc88);
    return;
  }
  *(int *)(lVar1 + 0xc40) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439897(void)
void FUN_180439897(void)

{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = SYSTEM_STATE_MANAGER;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0xd80) != 0) &&
     (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0xd88))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0xd30) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0xd30);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0xd20) = *(int32_t *)(lVar1 + 0xd68);
    return;
  }
  *(int *)(lVar1 + 0xd20) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804398b6(void)
void FUN_1804398b6(void)

{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = SYSTEM_STATE_MANAGER;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x610) != 0) &&
     (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x618))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x5c0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x5c0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x5b0) = *(int32_t *)(lVar1 + 0x5f8);
    return;
  }
  *(int *)(lVar1 + 0x5b0) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804398d5(uint64_t param_1,int32_t param_2)
void FUN_1804398d5(uint64_t param_1,int32_t param_2)

{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  uint64_t uStack0000000000000030;
  int32_t uStack0000000000000048;
  
  lVar1 = SYSTEM_STATE_MANAGER;
  uStack0000000000000030 = _uStack0000000000000048;
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x20c0) != 0) &&
     (uStack0000000000000048 = param_2,
     cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x20c8))(&stack0x00000048),
     param_2 = uStack0000000000000048, cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x2070) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x2070);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x2060) = *(int32_t *)(lVar1 + 0x20a8);
    return;
  }
  *(int32_t *)(lVar1 + 0x2060) = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804398f0(uint64_t param_1,int32_t param_2)
void FUN_1804398f0(uint64_t param_1,int32_t param_2)

{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  uint64_t uStack0000000000000030;
  int32_t uStack0000000000000048;
  
  lVar1 = SYSTEM_STATE_MANAGER;
  uStack0000000000000030 = _uStack0000000000000048;
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1170) != 0) &&
     (uStack0000000000000048 = param_2,
     cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1178))(&stack0x00000048),
     param_2 = uStack0000000000000048, cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x1120) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x1120);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x1110) = *(int32_t *)(lVar1 + 0x1158);
    return;
  }
  *(int32_t *)(lVar1 + 0x1110) = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439904(void)
void FUN_180439904(void)

{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  int64_t unaff_RBP;
  int32_t unaff_XMM6_Da;
  
  lVar1 = SYSTEM_STATE_MANAGER;
  *(int32_t *)(unaff_RBP + 0x10) = unaff_XMM6_Da;
  if (*(int64_t *)(lVar1 + 0x11e0) != 0) {
    cVar2 = (**(code **)(lVar1 + 0x11e8))(unaff_RBP + 0x10);
    if (cVar2 == '\0') {
      if (system_debug_flag == '\0') {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(lVar1 + 0x1190) != (void *)0x0) {
          puVar3 = *(void **)(lVar1 + 0x1190);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar3);
      }
      *(int32_t *)(lVar1 + 0x1180) = *(int32_t *)(lVar1 + 0x11c8);
      return;
    }
    unaff_XMM6_Da = *(int32_t *)(unaff_RBP + 0x10);
  }
  *(int32_t *)(lVar1 + 0x1180) = unaff_XMM6_Da;
  return;
}





// 函数: void FUN_180439974(void)
void FUN_180439974(void)

{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x1180) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439991(void)
void FUN_180439991(void)

{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  int64_t unaff_RBP;
  int32_t unaff_XMM6_Da;
  
  lVar1 = SYSTEM_STATE_MANAGER;
  *(int32_t *)(unaff_RBP + 0x10) = unaff_XMM6_Da;
  if (*(int64_t *)(lVar1 + 0x1250) != 0) {
    cVar2 = (**(code **)(lVar1 + 0x1258))(unaff_RBP + 0x10);
    if (cVar2 == '\0') {
      if (system_debug_flag == '\0') {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(lVar1 + 0x1200) != (void *)0x0) {
          puVar3 = *(void **)(lVar1 + 0x1200);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar3);
      }
      *(int32_t *)(lVar1 + 0x11f0) = *(int32_t *)(lVar1 + 0x1238);
      return;
    }
    unaff_XMM6_Da = *(int32_t *)(unaff_RBP + 0x10);
  }
  *(int32_t *)(lVar1 + 0x11f0) = unaff_XMM6_Da;
  return;
}





// 函数: void FUN_180439a01(void)
void FUN_180439a01(void)

{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x11f0) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439a1e(void)
void FUN_180439a1e(void)

{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  int64_t unaff_RBP;
  int32_t unaff_XMM6_Da;
  
  lVar1 = SYSTEM_STATE_MANAGER;
  *(int32_t *)(unaff_RBP + 0x10) = unaff_XMM6_Da;
  if (*(int64_t *)(lVar1 + 0x12c0) != 0) {
    cVar2 = (**(code **)(lVar1 + 0x12c8))(unaff_RBP + 0x10);
    if (cVar2 == '\0') {
      if (system_debug_flag == '\0') {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(lVar1 + 0x1270) != (void *)0x0) {
          puVar3 = *(void **)(lVar1 + 0x1270);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar3);
      }
      *(int32_t *)(lVar1 + 0x1260) = *(int32_t *)(lVar1 + 0x12a8);
      return;
    }
    unaff_XMM6_Da = *(int32_t *)(unaff_RBP + 0x10);
  }
  *(int32_t *)(lVar1 + 0x1260) = unaff_XMM6_Da;
  return;
}





// 函数: void FUN_180439a8e(void)
void FUN_180439a8e(void)

{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x1260) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439aab(void)
void FUN_180439aab(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  int64_t unaff_RBP;
  float unaff_XMM6_Da;
  
  lVar2 = SYSTEM_STATE_MANAGER;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(int64_t *)(SYSTEM_STATE_MANAGER + 0x1b10);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x1b18))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (system_debug_flag == '\0') {
        puVar5 = &system_buffer_ptr;
        if (*(void **)(lVar2 + 0x1ac0) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x1ac0);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar5);
      }
      *(int32_t *)(lVar2 + 0x1ab0) = *(int32_t *)(lVar2 + 0x1af8);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x1ab0) = iVar4;
  return;
}





// 函数: void FUN_180439b1d(void)
void FUN_180439b1d(void)

{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x1ab0) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



