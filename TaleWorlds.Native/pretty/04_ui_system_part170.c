#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 04_ui_system_part170.c - 11 个函数
// 函数: void function_76a70d(void)
void function_76a70d(void)
{
  int64_t *unaff_RBX;
  *(int64_t *)unaff_RBX[1] = *unaff_RBX;
  *(int64_t *)(*unaff_RBX + 8) = unaff_RBX[1];
  unaff_RBX[1] = (int64_t)unaff_RBX;
  *unaff_RBX = (int64_t)unaff_RBX;
  *(int8_t *)(unaff_RBX + 0x2d) = 0;
  function_767ad0(unaff_RBX + 3);
  if (*(char *)((int64_t)unaff_RBX + 0x1a4) == '\0') {
    *(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x40) = 0;
  }
  if (unaff_RBX[0x33] != 0) {
    SystemCore_DataHandler(unaff_RBX[0x33],0);
  }
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}
uint64_t function_76a7bc(void)
{
  return 0;
}
uint64_t function_76a800(int64_t param_1)
{
  uint64_t *puVar1;
  if (*(char *)(param_1 + 0x168) == '\0') {
    return 0;
  }
  SystemStateManager(*(uint64_t *)(param_1 + 0x198));
  puVar1 = *(uint64_t **)(param_1 + 0x170);
  *(uint64_t **)(param_1 + 0x188) = puVar1;
  while( true ) {
    if (puVar1 == (uint64_t *)(param_1 + 0x170)) {
// WARNING: Subroutine does not return
      SystemConfigManager(*(uint64_t *)(param_1 + 0x198));
    }
    *(uint64_t *)(param_1 + 400) = *puVar1;
    if ((*(uint *)((int64_t)puVar1 + 0x18c) & 0x20) != 0) break;
    puVar1 = *(uint64_t **)(param_1 + 400);
    *(uint64_t **)(param_1 + 0x188) = puVar1;
  }
// WARNING: Subroutine does not return
  SystemConfigManager(*(uint64_t *)(param_1 + 0x198));
}
// 函数: void function_76a81f(void)
void function_76a81f(void)
{
  uint64_t *puVar1;
  int64_t unaff_R14;
  SystemStateManager();
  puVar1 = *(uint64_t **)(unaff_R14 + 0x170);
  *(uint64_t **)(unaff_R14 + 0x188) = puVar1;
  while( true ) {
    if (puVar1 == (uint64_t *)(unaff_R14 + 0x170)) {
// WARNING: Subroutine does not return
      SystemConfigManager(*(uint64_t *)(unaff_R14 + 0x198));
    }
    *(uint64_t *)(unaff_R14 + 400) = *puVar1;
    if ((*(uint *)((int64_t)puVar1 + 0x18c) & 0x20) != 0) break;
    puVar1 = *(uint64_t **)(unaff_R14 + 400);
    *(uint64_t **)(unaff_R14 + 0x188) = puVar1;
  }
// WARNING: Subroutine does not return
  SystemConfigManager(*(uint64_t *)(unaff_R14 + 0x198));
}
// 函数: void function_76a844(uint64_t param_1,uint64_t *param_2)
void function_76a844(uint64_t param_1,uint64_t *param_2)
{
  uint64_t *unaff_R12;
  int64_t unaff_R14;
  do {
    *(uint64_t *)(unaff_R14 + 400) = *param_2;
    if ((*(uint *)((int64_t)param_2 + 0x18c) & 0x20) != 0) {
// WARNING: Subroutine does not return
      SystemConfigManager(*(uint64_t *)(unaff_R14 + 0x198));
    }
    param_2 = *(uint64_t **)(unaff_R14 + 400);
    *(uint64_t **)(unaff_R14 + 0x188) = param_2;
  } while (param_2 != unaff_R12);
// WARNING: Subroutine does not return
  SystemConfigManager(*(uint64_t *)(unaff_R14 + 0x198));
}
// 函数: void function_76abb4(void)
void function_76abb4(void)
{
  int64_t unaff_R14;
// WARNING: Subroutine does not return
  SystemConfigManager(*(uint64_t *)(unaff_R14 + 0x198));
}
uint64_t function_76abc5(void)
{
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_76abd0(int param_1)
{
  if (param_1 != 0) {
    SystemStateManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x118));
    *(int32_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 4) = 1;
    return 0;
  }
  *(int32_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 4) = 0;
// WARNING: Subroutine does not return
  SystemConfigManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x118));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_76ac40(int param_1,int64_t *param_2)
void function_76ac40(int param_1,int64_t *param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int iVar4;
  int64_t lVar5;
  int8_t stack_array_188 [32];
  int32_t local_var_168;
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  lVar5 = *(int64_t *)((int64_t)param_1 * 8 + 0x180c0c728);
  plVar2 = (int64_t *)((int64_t)param_1 * 8 + 0x180c0c728);
  if (lVar5 != 0) {
    *param_2 = lVar5;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_188);
  }
  uVar3 = *(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x128);
  SystemStateManager(uVar3);
  if (*plVar2 == 0) {
    local_var_168 = 0x200000;
    lVar5 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x178,&ui_system_data_1824_ptr);
    if (lVar5 == 0) {
// WARNING: Subroutine does not return
      SystemConfigManager(uVar3);
    }
    Function_9ac7c927(lVar5);
    lVar1 = lVar5 + 0x150;
    *(int64_t *)(lVar5 + 0x158) = lVar1;
    *(int64_t *)lVar1 = lVar1;
    *(uint64_t *)(lVar5 + 0x160) = 0;
    *(uint64_t *)(lVar5 + 0x168) = 0;
    *(int *)(lVar5 + 0x170) = param_1;
    iVar4 = SystemCore_DataProcessor((uint64_t *)(lVar5 + 0x168),0);
    if (iVar4 == 0) {
// WARNING: Subroutine does not return
      SystemValidationProcessor(stack_array_138,0x100,&ui_system_data_1784_ptr,*(int32_t *)(lVar5 + 0x170));
    }
    if (iVar4 != 0) {
// WARNING: Subroutine does not return
      SystemConfigManager(uVar3);
    }
    *plVar2 = lVar5;
  }
// WARNING: Subroutine does not return
  SystemConfigManager(uVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_76ade0(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  if (*(int64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x128) == 0) {
    return 0;
  }
  SystemStateManager();
  plVar3 = (int64_t *)0x180c0c728;
  lVar2 = 5;
  do {
    lVar1 = *plVar3;
    if (lVar1 != 0) {
      function_767ad0(lVar1);
      *(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x130 + (int64_t)*(int *)(lVar1 + 0x170) * 8) = 0;
      if (*(int64_t *)(lVar1 + 0x168) != 0) {
        SystemCore_DataHandler(*(int64_t *)(lVar1 + 0x168),0);
      }
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&ui_system_data_1824_ptr,0x91,1);
    }
    plVar3 = plVar3 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
// WARNING: Subroutine does not return
  SystemConfigManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x128));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_76adfb(void)
void function_76adfb(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  SystemStateManager();
  plVar3 = (int64_t *)0x180c0c728;
  lVar2 = 5;
  do {
    lVar1 = *plVar3;
    if (lVar1 != 0) {
      function_767ad0(lVar1);
      *(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x130 + (int64_t)*(int *)(lVar1 + 0x170) * 8) = 0;
      if (*(int64_t *)(lVar1 + 0x168) != 0) {
        SystemCore_DataHandler(*(int64_t *)(lVar1 + 0x168),0);
      }
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&ui_system_data_1824_ptr,0x91,1);
    }
    plVar3 = plVar3 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
// WARNING: Subroutine does not return
  SystemConfigManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x128));
}
uint64_t function_76aece(void)
{
  return 0;
}
// 函数: void function_76aee0(int64_t param_1)
void function_76aee0(int64_t param_1)
{
  int64_t *plVar1;
  SystemStateManager(*(uint64_t *)(param_1 + 0x168));
  plVar1 = *(int64_t **)(param_1 + 0x150);
  if (plVar1 != (int64_t *)(param_1 + 0x150)) {
    *(int64_t *)plVar1[1] = *plVar1;
    *(int64_t *)(*plVar1 + 8) = plVar1[1];
    plVar1[1] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
  }
// WARNING: Subroutine does not return
  SystemConfigManager(*(uint64_t *)(param_1 + 0x168));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_76af64(void)
{
  uint *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int in_EAX;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int unaff_EBX;
  int64_t unaff_RBP;
  char cVar8;
  int64_t unaff_R12;
  cVar8 = (char)unaff_R12;
  if (in_EAX == 1) {
    if ((*(uint *)(*(int64_t *)(unaff_RBP + 0x28) + 0x2c) & 0x10000800) == 0) {
      unaff_EBX = function_78e180();
      lVar5 = **(int64_t **)(*(int64_t *)(unaff_RBP + 0x28) + 0x108);
      if (lVar5 != 0) {
// WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar5,&ui_system_data_1824_ptr,0xcd,1);
      }
    }
    else {
      unaff_EBX = function_78e180();
    }
    if (unaff_EBX == 0) {
      lVar5 = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0x108);
      if (*(char *)(lVar5 + 0x118) != cVar8) {
        *(uint64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 200) = *(uint64_t *)(lVar5 + 0xa0);
      }
    }
  }
  else if (*(int *)(*(int64_t *)(unaff_RBP + 0x28) + 0x110) == 7) {
    lVar5 = *(int64_t *)(unaff_RBP + 0x28);
    while ((*(uint *)(lVar5 + 0x58) & 0x440) == 0) {
      UIComponent_EventHandler();
    }
    if ((*(uint *)(lVar5 + 0x58) & 0x40) == 0) {
      lVar2 = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0x108);
      unaff_EBX = (**(code **)(**(int64_t **)(lVar5 + 0x178) + 0xd0))
                            (*(int64_t **)(lVar5 + 0x178),*(int32_t *)(lVar2 + 0x11c),
                             *(int32_t *)(lVar2 + 0x120),1);
      lVar2 = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0xd8);
      if (lVar2 != 0) {
        Function_571d7c62(lVar2,8);
      }
      puVar1 = (uint *)(*(int64_t *)(lVar5 + 0x178) + 0x3c);
      *puVar1 = *puVar1 & 0xffffbfff;
      if (unaff_EBX == 0) {
        plVar3 = *(int64_t **)(lVar5 + 0x178);
        if (plVar3[0x18] != unaff_R12) {
          (**(code **)(*plVar3 + 0x50))(plVar3,*(uint *)((int64_t)plVar3 + 0x3c) >> 5 & 0xffffff01)
          ;
        }
      }
      else if (unaff_EBX == 0x1e) {
        unaff_EBX = (int)unaff_R12;
      }
      if ((lVar2 != 0) && (lVar2 != 0)) {
// WARNING: Subroutine does not return
        SystemMemoryProcessor(lVar2,8);
      }
    }
    else {
      lVar2 = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0xd8);
      if (lVar2 != 0) {
        Function_571d7c62(lVar2,8);
      }
      puVar1 = (uint *)(*(int64_t *)(lVar5 + 0x178) + 0x3c);
      *puVar1 = *puVar1 & 0xffffbfff;
      if ((lVar2 != 0) && (lVar2 != 0)) {
// WARNING: Subroutine does not return
        SystemMemoryProcessor(lVar2,8);
      }
    }
  }
  else if (*(int *)(*(int64_t *)(unaff_RBP + 0x28) + 0x110) == 5) {
    lVar5 = *(int64_t *)(unaff_RBP + 0x28);
    unaff_EBX = function_752b60(lVar5,*(int32_t *)(lVar5 + 0xc0));
    if ((unaff_EBX == 0) && (unaff_EBX = function_774090(lVar5,0,2), unaff_EBX == 0)) {
      unaff_EBX = function_773eb0(lVar5);
    }
  }
  *(int *)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0x108) + 0x124) = unaff_EBX;
  lVar5 = *(int64_t *)(unaff_RBP + 0x28);
  if (*(int64_t *)(lVar5 + 0xb8) != 0) {
    *(int8_t *)(*(int64_t *)(lVar5 + 0xb8) + 0x5c) = 1;
    lVar5 = *(int64_t *)(unaff_RBP + 0x28);
  }
  *(int8_t *)(lVar5 + 0x5c) = 1;
  *(uint *)(*(int64_t *)(unaff_RBP + 0x28) + 0x110) = -(uint)(unaff_EBX != 0) & 2;
  puVar7 = *(uint64_t **)(unaff_RBP + 0x28);
  if (puVar7[0x17] != unaff_R12) {
    *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0xb8) + 0x110) =
         *(int32_t *)(puVar7 + 0x22);
    puVar7 = *(uint64_t **)(unaff_RBP + 0x28);
  }
  if (puVar7[0x15] == unaff_R12) {
    cVar4 = (**(code **)*puVar7)();
    if (cVar4 != '\0') {
      lVar5 = *(int64_t *)(unaff_RBP + 0x28);
      if ((*(int *)(lVar5 + 0xb0) != 1) || (**(int64_t **)(lVar5 + 0xa0) == unaff_R12))
      goto LAB_18076b2a9;
      *(int32_t *)(**(int64_t **)(*(int64_t *)(unaff_RBP + 0x28) + 0xa0) + 0x110) =
           *(int32_t *)(lVar5 + 0x110);
    }
  }
  else {
    *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0xa8) + 0x110) =
         *(int32_t *)(puVar7 + 0x22);
  }
  lVar5 = *(int64_t *)(unaff_RBP + 0x28);
LAB_18076b2a9:
  if ((*(char *)(*(int64_t *)(lVar5 + 0x108) + 0x118) != cVar8) &&
     (*(int64_t *)(*(int64_t *)(lVar5 + 0x108) + 0x80) != unaff_R12)) {
    uVar6 = function_743cc0();
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    (**(code **)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0x108) + 0x80))
              (*(int64_t *)(unaff_RBP + 0x28),unaff_EBX);
    uVar6 = function_743da0();
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    lVar5 = *(int64_t *)(unaff_RBP + 0x28);
  }
  *(char *)(lVar5 + 0x5c) = cVar8;
  lVar5 = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0xb8);
  if (lVar5 != 0) {
    *(char *)(lVar5 + 0x5c) = cVar8;
  }
  return 0;
}
uint64_t function_76b0f6(int64_t *param_1,int64_t param_2)
{
  uint *puVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  iVar4 = (**(code **)(*param_1 + 0xd0))
                    (param_1,*(int32_t *)(param_2 + 0x11c),*(int32_t *)(param_2 + 0x120));
  lVar5 = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0xd8);
  if (lVar5 != 0) {
    Function_571d7c62(lVar5,8);
  }
  puVar1 = (uint *)(*(int64_t *)(unaff_RDI + 0x178) + 0x3c);
  *puVar1 = *puVar1 & 0xffffbfff;
  if (iVar4 == 0) {
    plVar2 = *(int64_t **)(unaff_RDI + 0x178);
    if (plVar2[0x18] != unaff_R12) {
      (**(code **)(*plVar2 + 0x50))(plVar2,*(uint *)((int64_t)plVar2 + 0x3c) >> 5 & 0xffffff01);
    }
  }
  else if (iVar4 == 0x1e) {
    iVar4 = (int)unaff_R12;
  }
  if ((lVar5 != 0) && (lVar5 != 0)) {
// WARNING: Subroutine does not return
    SystemMemoryProcessor(lVar5,8);
  }
  *(int *)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0x108) + 0x124) = iVar4;
  lVar5 = *(int64_t *)(unaff_RBP + 0x28);
  if (*(int64_t *)(lVar5 + 0xb8) != 0) {
    *(int8_t *)(*(int64_t *)(lVar5 + 0xb8) + 0x5c) = 1;
    lVar5 = *(int64_t *)(unaff_RBP + 0x28);
  }
  *(int8_t *)(lVar5 + 0x5c) = 1;
  *(uint *)(*(int64_t *)(unaff_RBP + 0x28) + 0x110) = -(uint)(iVar4 != 0) & 2;
  puVar7 = *(uint64_t **)(unaff_RBP + 0x28);
  if (puVar7[0x17] != unaff_R12) {
    *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0xb8) + 0x110) =
         *(int32_t *)(puVar7 + 0x22);
    puVar7 = *(uint64_t **)(unaff_RBP + 0x28);
  }
  if (puVar7[0x15] == unaff_R12) {
    cVar3 = (**(code **)*puVar7)();
    if (cVar3 != '\0') {
      lVar5 = *(int64_t *)(unaff_RBP + 0x28);
      if ((*(int *)(lVar5 + 0xb0) != 1) || (**(int64_t **)(lVar5 + 0xa0) == unaff_R12))
      goto LAB_18076b2a9;
      *(int32_t *)(**(int64_t **)(*(int64_t *)(unaff_RBP + 0x28) + 0xa0) + 0x110) =
           *(int32_t *)(lVar5 + 0x110);
    }
  }
  else {
    *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0xa8) + 0x110) =
         *(int32_t *)(puVar7 + 0x22);
  }
  lVar5 = *(int64_t *)(unaff_RBP + 0x28);
LAB_18076b2a9:
  cVar3 = (char)unaff_R12;
  if ((*(char *)(*(int64_t *)(lVar5 + 0x108) + 0x118) != cVar3) &&
     (*(int64_t *)(*(int64_t *)(lVar5 + 0x108) + 0x80) != unaff_R12)) {
    uVar6 = function_743cc0();
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    (**(code **)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0x108) + 0x80))
              (*(int64_t *)(unaff_RBP + 0x28),iVar4);
    uVar6 = function_743da0();
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    lVar5 = *(int64_t *)(unaff_RBP + 0x28);
  }
  *(char *)(lVar5 + 0x5c) = cVar3;
  lVar5 = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0xb8);
  if (lVar5 != 0) {
    *(char *)(lVar5 + 0x5c) = cVar3;
  }
  return 0;
}
uint64_t function_76b181(void)
{
  char cVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_R12;
  if (unaff_RSI != 0) {
// WARNING: Subroutine does not return
    SystemMemoryProcessor();
  }
  *(int *)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0x108) + 0x124) = unaff_EBX;
  lVar2 = *(int64_t *)(unaff_RBP + 0x28);
  if (*(int64_t *)(lVar2 + 0xb8) != 0) {
    *(int8_t *)(*(int64_t *)(lVar2 + 0xb8) + 0x5c) = 1;
    lVar2 = *(int64_t *)(unaff_RBP + 0x28);
  }
  *(int8_t *)(lVar2 + 0x5c) = 1;
  *(uint *)(*(int64_t *)(unaff_RBP + 0x28) + 0x110) = -(uint)(unaff_EBX != 0) & 2;
  puVar4 = *(uint64_t **)(unaff_RBP + 0x28);
  if (puVar4[0x17] != unaff_R12) {
    *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0xb8) + 0x110) =
         *(int32_t *)(puVar4 + 0x22);
    puVar4 = *(uint64_t **)(unaff_RBP + 0x28);
  }
  if (puVar4[0x15] == unaff_R12) {
    cVar1 = (**(code **)*puVar4)();
    if (cVar1 != '\0') {
      lVar2 = *(int64_t *)(unaff_RBP + 0x28);
      if ((*(int *)(lVar2 + 0xb0) != 1) || (**(int64_t **)(lVar2 + 0xa0) == unaff_R12))
      goto LAB_18076b2a9;
      *(int32_t *)(**(int64_t **)(*(int64_t *)(unaff_RBP + 0x28) + 0xa0) + 0x110) =
           *(int32_t *)(lVar2 + 0x110);
    }
  }
  else {
    *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0xa8) + 0x110) =
         *(int32_t *)(puVar4 + 0x22);
  }
  lVar2 = *(int64_t *)(unaff_RBP + 0x28);
LAB_18076b2a9:
  cVar1 = (char)unaff_R12;
  if ((*(char *)(*(int64_t *)(lVar2 + 0x108) + 0x118) != cVar1) &&
     (*(int64_t *)(*(int64_t *)(lVar2 + 0x108) + 0x80) != unaff_R12)) {
    uVar3 = function_743cc0();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    (**(code **)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0x108) + 0x80))
              (*(int64_t *)(unaff_RBP + 0x28),unaff_EBX);
    uVar3 = function_743da0();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    lVar2 = *(int64_t *)(unaff_RBP + 0x28);
  }
  *(char *)(lVar2 + 0x5c) = cVar1;
  lVar2 = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0xb8);
  if (lVar2 != 0) {
    *(char *)(lVar2 + 0x5c) = cVar1;
  }
  return 0;
}
uint64_t function_76b200(int64_t param_1)
{
  char cVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_R12;
  *(int8_t *)(param_1 + 0x5c) = 1;
  *(int8_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0x5c) = 1;
  *(uint *)(*(int64_t *)(unaff_RBP + 0x28) + 0x110) = -(uint)(unaff_EBX != 0) & 2;
  puVar3 = *(uint64_t **)(unaff_RBP + 0x28);
  if (puVar3[0x17] != unaff_R12) {
    *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0xb8) + 0x110) =
         *(int32_t *)(puVar3 + 0x22);
    puVar3 = *(uint64_t **)(unaff_RBP + 0x28);
  }
  if (puVar3[0x15] == unaff_R12) {
    cVar1 = (**(code **)*puVar3)();
    if (cVar1 != '\0') {
      lVar4 = *(int64_t *)(unaff_RBP + 0x28);
      if ((*(int *)(lVar4 + 0xb0) != 1) || (**(int64_t **)(lVar4 + 0xa0) == unaff_R12))
      goto LAB_18076b2a9;
      *(int32_t *)(**(int64_t **)(*(int64_t *)(unaff_RBP + 0x28) + 0xa0) + 0x110) =
           *(int32_t *)(lVar4 + 0x110);
    }
  }
  else {
    *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0xa8) + 0x110) =
         *(int32_t *)(puVar3 + 0x22);
  }
  lVar4 = *(int64_t *)(unaff_RBP + 0x28);
LAB_18076b2a9:
  cVar1 = (char)unaff_R12;
  if ((*(char *)(*(int64_t *)(lVar4 + 0x108) + 0x118) != cVar1) &&
     (*(int64_t *)(*(int64_t *)(lVar4 + 0x108) + 0x80) != unaff_R12)) {
    uVar2 = function_743cc0();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    (**(code **)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0x108) + 0x80))
              (*(int64_t *)(unaff_RBP + 0x28),unaff_EBX);
    uVar2 = function_743da0();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    lVar4 = *(int64_t *)(unaff_RBP + 0x28);
  }
  *(char *)(lVar4 + 0x5c) = cVar1;
  lVar4 = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x28) + 0xb8);
  if (lVar4 != 0) {
    *(char *)(lVar4 + 0x5c) = cVar1;
  }
  return 0;
}
// 函数: void SystemValidationProcessor(void)
void SystemValidationProcessor(void)
{
  function_76b930();
  return;
}
char * function_76b3b0(char *param_1,uint64_t param_2,int param_3)
{
  char cVar1;
  char *pcVar2;
  cVar1 = *param_1;
  pcVar2 = param_1;
  for (; (cVar1 != '\0' && (param_3 != 0)); param_3 = param_3 + -1) {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  Function_30e71e27();
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_76b520(char *param_1)
{
  char cVar1;
  int64_t lVar2;
  int iVar3;
  char *pcVar4;
  cVar1 = *param_1;
  pcVar4 = param_1;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  iVar3 = (int)pcVar4 - (int)param_1;
  lVar2 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar3 + 1,&ui_system_data_1936_ptr,0x16a,0,0,1
                       );
  if (lVar2 != 0) {
    Function_30e71e27(lVar2,param_1,iVar3 + 1);
  }
  return lVar2;
}
int64_t function_76b5b0(int64_t param_1,int param_2,byte *param_3)
{
  byte bVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  bVar1 = *param_3;
  uVar5 = 0;
  uVar4 = 0;
  if (bVar1 != 0) {
    uVar2 = uVar5;
    do {
      uVar4 = (uint)uVar5;
      if (param_2 + -2 <= (int)uVar4) break;
      param_3 = param_3 + 1;
      uVar3 = uVar2 + 1;
      if (bVar1 < 0x80) {
        *(byte *)(uVar2 + param_1) = bVar1;
      }
      else {
        *(byte *)(uVar2 + param_1) = bVar1 >> 6 | 0xc0;
        *(byte *)(uVar3 + param_1) = bVar1 & 0x3f | 0x80;
        uVar4 = uVar4 + 1;
        uVar3 = uVar2 + 2;
      }
      bVar1 = *param_3;
      uVar4 = uVar4 + 1;
      uVar5 = (uint64_t)uVar4;
      uVar2 = uVar3;
    } while (bVar1 != 0);
  }
  *(int8_t *)((int)uVar4 + param_1) = 0;
  return param_1;
}
// 函数: void function_76b5c2(uint64_t param_1,int param_2,byte *param_3)
void function_76b5c2(uint64_t param_1,int param_2,byte *param_3)
{
  byte in_AL;
  uint64_t uVar1;
  uint64_t uVar2;
  uint in_R10D;
  int64_t in_R11;
  uVar1 = (uint64_t)in_R10D;
  do {
    if (param_2 + -2 <= (int)in_R10D) break;
    param_3 = param_3 + 1;
    uVar2 = uVar1 + 1;
    if (in_AL < 0x80) {
      *(byte *)(uVar1 + in_R11) = in_AL;
    }
    else {
      *(byte *)(uVar1 + in_R11) = in_AL >> 6 | 0xc0;
      *(byte *)(uVar2 + in_R11) = in_AL & 0x3f | 0x80;
      in_R10D = in_R10D + 1;
      uVar2 = uVar1 + 2;
    }
    in_AL = *param_3;
    in_R10D = in_R10D + 1;
    uVar1 = uVar2;
  } while (in_AL != 0);
  *(int8_t *)((int)in_R10D + in_R11) = 0;
  return;
}
// 函数: void function_76b613(void)
void function_76b613(void)
{
  int in_R10D;
  int64_t in_R11;
  *(int8_t *)(in_R10D + in_R11) = 0;
  return;
}
int SystemCore_Optimizer(char *param_1,char *param_2,int param_3)
{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  iVar4 = 0;
  do {
    cVar3 = *param_1;
    param_1 = param_1 + 1;
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    cVar2 = cVar3 + ' ';
    if (0x19 < (byte)(cVar3 + 0xbfU)) {
      cVar2 = cVar3;
    }
    cVar3 = cVar1 + ' ';
    if (0x19 < (byte)(cVar1 + 0xbfU)) {
      cVar3 = cVar1;
    }
    iVar4 = iVar4 + 1;
  } while (((cVar2 != '\0') && (cVar2 == cVar3)) && (iVar4 < param_3));
  return (int)cVar2 - (int)cVar3;
}
char * UtilitiesSystem_DataValidator(char *param_1,char *param_2)
{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  cVar1 = *param_2;
  pcVar5 = param_2;
  while (cVar1 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  iVar4 = (int)pcVar5 - (int)param_2;
  if (iVar4 != 0) {
    cVar1 = *param_1;
    pcVar5 = param_1;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar3 = (int)pcVar5 - (int)param_1;
    if (iVar4 <= iVar3) {
      do {
        iVar3 = iVar3 + -1;
        iVar2 = memcmp(param_1,param_2,(int64_t)iVar4);
        if (iVar2 == 0) {
          return param_1;
        }
        param_1 = param_1 + 1;
      } while (iVar4 <= iVar3);
    }
    return (char *)0x0;
  }
  return param_1;
}
int64_t function_76b802(char *param_1)
{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int64_t unaff_RSI;
  int unaff_EDI;
  bool in_ZF;
  pcVar3 = param_1;
  if (!in_ZF) {
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
  }
  iVar2 = (int)pcVar3 - (int)param_1;
  while( true ) {
    if (iVar2 < unaff_EDI) {
      return 0;
    }
    iVar2 = iVar2 + -1;
    iVar1 = memcmp(unaff_RSI);
    if (iVar1 == 0) break;
    unaff_RSI = unaff_RSI + 1;
  }
  return unaff_RSI;
}
// 函数: void function_76b867(void)
void function_76b867(void)
{
  return;
}
uint64_t function_76b930(int8_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint uVar1;
  uint64_t *puVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  iVar3 = (int)param_2;
  uVar4 = (uint64_t)iVar3;
  if (iVar3 < 1) {
    uVar5 = 0;
  }
  else {
    *param_1 = 0;
    puVar2 = (uint64_t *)Function_6d5908f9();
    uVar1 = __stdio_common_vsprintf(*puVar2 | 2,param_1,uVar4,param_3,0,param_4);
    if ((int)uVar1 < 0) {
      uVar1 = 0xffffffff;
    }
    uVar5 = uVar4;
    if ((-1 < (int)uVar1) && (uVar5 = param_2 & 0xffffffff, (int)uVar1 < iVar3)) {
      uVar5 = (uint64_t)uVar1;
    }
    param_1[uVar4 - 1] = 0;
    uVar5 = uVar5 & 0xffffffff;
  }
  return uVar5;
}
uint64_t function_76b955(int8_t *param_1)
{
  uint uVar1;
  uint64_t *puVar2;
  uint64_t unaff_RBX;
  uint64_t uVar3;
  int64_t unaff_RDI;
  *param_1 = 0;
  puVar2 = (uint64_t *)Function_6d5908f9();
  uVar1 = __stdio_common_vsprintf(*puVar2 | 2);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  uVar3 = unaff_RBX;
  if ((-1 < (int)uVar1) && (uVar3 = unaff_RBX & 0xffffffff, (int)uVar1 < (int)unaff_RBX)) {
    uVar3 = (uint64_t)uVar1;
  }
  *(int8_t *)((unaff_RBX - 1) + unaff_RDI) = 0;
  return uVar3 & 0xffffffff;
}
uint64_t function_76b9aa(void)
{
  return 0;
}