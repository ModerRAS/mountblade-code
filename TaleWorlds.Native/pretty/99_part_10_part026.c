#include "SystemDataAdvancedManager_definition.h"
#include "TaleWorlds.Native.Split.h"
// 99_part_10_part026.c - 34 个函数
// 函数: void function_6b50c0(int64_t param_1,uint64_t param_2)
void function_6b50c0(int64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  int8_t *puVar3;
  ushort uVar4;
  int8_t stack_special_x_9;
  uint64_t stack_special_x_10;
  if (param_2 != 0) {
    plVar1 = (int64_t *)(param_1 + 0x18);
    if (param_2 < 0x100) {
      uVar4 = 0x3fc3;
    }
    else if (param_2 < 0x10000) {
      uVar4 = 0x3fd3;
    }
    else {
      uVar4 = 0x3ff3;
      if (param_2 < 0x100000000) {
        uVar4 = 0x3fe3;
      }
    }
    lVar2 = *(int64_t *)(param_1 + 0x90);
    stack_special_x_10 = param_2;
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
    puVar3 = *(int8_t **)(lVar2 + 0x18);
    stack_special_x_9 = (int8_t)(uVar4 >> 8);
    *puVar3 = (char)uVar4;
    puVar3[1] = stack_special_x_9;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
    GameLogic_StateMachine(param_1 + 0x90,&processed_var_6600_ptr,&stack_special_x_10,uVar4 >> 4 & 3);
    if (*(uint *)(param_1 + 0x68) <= (uint)(*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38))) {
      function_6b5bb0(plVar1,*(uint64_t *)(param_1 + 0x38));
      *(uint64_t *)(param_1 + 0x40) = *(uint64_t *)(param_1 + 0x38);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  return;
}
// 函数: void function_6b50ce(int64_t param_1,uint64_t param_2)
void function_6b50ce(int64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  int8_t *puVar3;
  ushort uVar4;
  ushort local_var_40;
  uint64_t local_var_48;
  plVar1 = (int64_t *)(param_1 + 0x18);
  if (param_2 < 0x100) {
    uVar4 = 0x3fc3;
  }
  else if (param_2 < 0x10000) {
    uVar4 = 0x3fd3;
  }
  else {
    uVar4 = 0x3ff3;
    if (param_2 < 0x100000000) {
      uVar4 = 0x3fe3;
    }
  }
  lVar2 = *(int64_t *)(param_1 + 0x90);
  local_var_40 = uVar4;
  local_var_48 = param_2;
  SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
  puVar3 = *(int8_t **)(lVar2 + 0x18);
  *puVar3 = (char)uVar4;
  puVar3[1] = local_var_40._1_1_;
  *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
  GameLogic_StateMachine(param_1 + 0x90,&processed_var_6600_ptr,&local_buffer_00000048,uVar4 >> 4 & 3);
  if (*(uint *)(param_1 + 0x68) <= (uint)(*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38))) {
    function_6b5bb0(plVar1,*(uint64_t *)(param_1 + 0x38));
    *(uint64_t *)(param_1 + 0x40) = *(uint64_t *)(param_1 + 0x38);
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return;
}
// 函数: void function_6b518b(void)
void function_6b518b(void)
{
  int64_t *unaff_RSI;
  function_6b5bb0();
  unaff_RSI[5] = unaff_RSI[4];
  (**(code **)(*unaff_RSI + 0x18))();
  return;
}
// 函数: void function_6b51b0(int64_t param_1)
void function_6b51b0(int64_t param_1)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  plVar2 = *(int64_t **)(param_1 + -0x98);
  puVar1 = (uint64_t *)(param_1 + -0xa0);
  (**(code **)*puVar1)(puVar1,0);
// WARNING: Could not recover jumptable at 0x0001806b51e5. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*plVar2 + 0x10))(plVar2,puVar1);
  return;
}
// 函数: void function_6b51f0(int64_t *param_1)
void function_6b51f0(int64_t *param_1)
{
  int64_t *plVar1;
  plVar1 = (int64_t *)param_1[4];
  (**(code **)(*param_1 + 0x10))(param_1,0);
// WARNING: Could not recover jumptable at 0x0001806b521c. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  return;
}
// 函数: void function_6b5220(uint64_t *param_1)
void function_6b5220(uint64_t *param_1)
{
  int64_t *plVar1;
  plVar1 = (int64_t *)param_1[1];
  (**(code **)*param_1)(param_1,0);
// WARNING: Could not recover jumptable at 0x0001806b524b. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  return;
}
// 函数: void function_6b5250(int64_t param_1,int64_t *param_2)
void function_6b5250(int64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  uint uVar4;
  bool bVar5;
  lVar1 = *(int64_t *)(param_1 + 0x68);
  if (lVar1 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
  }
  uVar4 = *(uint *)(param_1 + 0x48);
  uVar3 = 0;
  bVar5 = uVar4 == 0;
  if (!bVar5) {
    do {
      if (*(int64_t **)(*(int64_t *)(param_1 + 0x40) + uVar3 * 8) == param_2) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
        *(uint64_t *)(*(int64_t *)(param_1 + 0x40) + uVar3 * 8) =
             *(uint64_t *)
              (*(int64_t *)(param_1 + 0x40) + (uint64_t)*(uint *)(param_1 + 0x48) * 8);
        uVar4 = *(uint *)(param_1 + 0x48);
        break;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while (uVar2 < uVar4);
    bVar5 = uVar4 == 0;
  }
  *(bool *)(param_1 + 0x70) = !bVar5;
  if (lVar1 == 0) {
    return;
  }
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
  return;
}
// 函数: void function_6b525a(int64_t param_1,int64_t *param_2)
void function_6b525a(int64_t param_1,int64_t *param_2)
{
  uint uVar1;
  uint64_t uVar2;
  int64_t unaff_RBX;
  uint uVar3;
  bool bVar4;
  if (unaff_RBX != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RBX + 8));
  }
  uVar3 = *(uint *)(param_1 + 0x48);
  uVar2 = 0;
  bVar4 = uVar3 == 0;
  if (!bVar4) {
    do {
      if (*(int64_t **)(*(int64_t *)(param_1 + 0x40) + uVar2 * 8) == param_2) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
        *(uint64_t *)(*(int64_t *)(param_1 + 0x40) + uVar2 * 8) =
             *(uint64_t *)
              (*(int64_t *)(param_1 + 0x40) + (uint64_t)*(uint *)(param_1 + 0x48) * 8);
        uVar3 = *(uint *)(param_1 + 0x48);
        break;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar1;
    } while (uVar1 < uVar3);
    bVar4 = uVar3 == 0;
  }
  *(bool *)(param_1 + 0x70) = !bVar4;
  if (unaff_RBX == 0) {
    return;
  }
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RBX + 8));
  return;
}
// 函数: void function_6b5287(int64_t param_1,uint64_t param_2,uint param_3)
void function_6b5287(int64_t param_1,uint64_t param_2,uint param_3)
{
  uint uVar1;
  uint64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t *unaff_R14;
  do {
    if (*(int64_t **)(param_1 + in_RAX * 8) == unaff_R14) {
      (**(code **)(*unaff_R14 + 0x10))();
      *(int *)(unaff_RSI + 0x48) = *(int *)(unaff_RSI + 0x48) + -1;
      *(uint64_t *)(*(int64_t *)(unaff_RSI + 0x40) + (in_RAX & 0xffffffff) * 8) =
           *(uint64_t *)
            (*(int64_t *)(unaff_RSI + 0x40) + (uint64_t)*(uint *)(unaff_RSI + 0x48) * 8);
      param_3 = *(uint *)(unaff_RSI + 0x48);
      break;
    }
    uVar1 = (int)in_RAX + 1;
    in_RAX = (uint64_t)uVar1;
  } while (uVar1 < param_3);
  *(bool *)(unaff_RSI + 0x70) = param_3 != 0;
  if (unaff_RBX == 0) {
    return;
  }
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RBX + 8));
  return;
}
// 函数: void function_6b52c8(void)
void function_6b52c8(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  bool in_ZF;
  *(bool *)(unaff_RSI + 0x70) = !in_ZF;
  if (unaff_RBX != 0) {
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RBX + 8));
    return;
  }
  return;
}
// 函数: void function_6b52dd(void)
void function_6b52dd(void)
{
  int64_t unaff_RBX;
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RBX + 8));
  return;
}
// 函数: void function_6b5300(int64_t param_1,int64_t *param_2)
void function_6b5300(int64_t param_1,int64_t *param_2)
{
  uint uVar1;
  uint64_t uVar2;
  uint uVar3;
  bool bVar4;
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x38));
  uVar3 = *(uint *)(param_1 + 0x130);
  uVar2 = 0;
  bVar4 = uVar3 == 0;
  if (!bVar4) {
    do {
      if (*(int64_t **)(*(int64_t *)(param_1 + 0x128) + uVar2 * 8) == param_2) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + -1;
        *(uint64_t *)(*(int64_t *)(param_1 + 0x128) + uVar2 * 8) =
             *(uint64_t *)
              (*(int64_t *)(param_1 + 0x128) + (uint64_t)*(uint *)(param_1 + 0x130) * 8);
        uVar3 = *(uint *)(param_1 + 0x130);
        break;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar1;
    } while (uVar1 < uVar3);
    bVar4 = uVar3 == 0;
  }
  *(bool *)(param_1 + 0x138) = !bVar4;
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x38));
  return;
}
// 函数: void function_6b532e(int64_t param_1,uint64_t param_2,uint param_3)
void function_6b532e(int64_t param_1,uint64_t param_2,uint param_3)
{
  uint uVar1;
  uint64_t in_RAX;
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  do {
    if (*(int64_t **)(param_1 + in_RAX * 8) == unaff_RSI) {
      (**(code **)(*unaff_RSI + 0x10))();
      *(int *)(unaff_RDI + 0x130) = *(int *)(unaff_RDI + 0x130) + -1;
      *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x128) + (in_RAX & 0xffffffff) * 8) =
           *(uint64_t *)
            (*(int64_t *)(unaff_RDI + 0x128) + (uint64_t)*(uint *)(unaff_RDI + 0x130) * 8);
      param_3 = *(uint *)(unaff_RDI + 0x130);
      break;
    }
    uVar1 = (int)in_RAX + 1;
    in_RAX = (uint64_t)uVar1;
  } while (uVar1 < param_3);
  *(bool *)(unaff_RDI + 0x138) = param_3 != 0;
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RDI + 0x38));
  return;
}
// 函数: void function_6b5377(void)
void function_6b5377(void)
{
  int64_t unaff_RDI;
  bool in_ZF;
  *(bool *)(unaff_RDI + 0x138) = !in_ZF;
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RDI + 0x38));
  return;
}
// 函数: void function_6b53a0(int64_t param_1,int64_t *param_2)
void function_6b53a0(int64_t param_1,int64_t *param_2)
{
  uint uVar1;
  uint64_t uVar2;
  uint uVar3;
  bool bVar4;
  uVar3 = *(uint *)(param_1 + 0x58);
  uVar2 = 0;
  bVar4 = uVar3 == 0;
  if (!bVar4) {
    do {
      if (*(int64_t **)(*(int64_t *)(param_1 + 0x50) + uVar2 * 8) == param_2) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
        *(uint64_t *)(*(int64_t *)(param_1 + 0x50) + uVar2 * 8) =
             *(uint64_t *)
              (*(int64_t *)(param_1 + 0x50) + (uint64_t)*(uint *)(param_1 + 0x58) * 8);
        uVar3 = *(uint *)(param_1 + 0x58);
        break;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar1;
    } while (uVar1 < uVar3);
    bVar4 = uVar3 == 0;
  }
  *(bool *)(param_1 + 0x80) = !bVar4;
  return;
}
// 函数: void function_6b53b8(int64_t param_1,int64_t *param_2,uint param_3)
void function_6b53b8(int64_t param_1,int64_t *param_2,uint param_3)
{
  uint uVar1;
  uint64_t in_RAX;
  int64_t unaff_RDI;
  do {
    if (*(int64_t **)(param_1 + in_RAX * 8) == param_2) {
      (**(code **)(*param_2 + 0x10))(param_2);
      *(int *)(unaff_RDI + 0x58) = *(int *)(unaff_RDI + 0x58) + -1;
      *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x50) + (in_RAX & 0xffffffff) * 8) =
           *(uint64_t *)
            (*(int64_t *)(unaff_RDI + 0x50) + (uint64_t)*(uint *)(unaff_RDI + 0x58) * 8);
      param_3 = *(uint *)(unaff_RDI + 0x58);
      break;
    }
    uVar1 = (int)in_RAX + 1;
    in_RAX = (uint64_t)uVar1;
  } while (uVar1 < param_3);
  *(bool *)(unaff_RDI + 0x80) = param_3 != 0;
  return;
}
// 函数: void function_6b53f8(void)
void function_6b53f8(void)
{
  int64_t unaff_RDI;
  bool in_ZF;
  *(bool *)(unaff_RDI + 0x80) = !in_ZF;
  return;
}
// 函数: void function_6b5410(int64_t param_1,int64_t *param_2)
void function_6b5410(int64_t param_1,int64_t *param_2)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  puVar1 = (uint64_t *)(param_1 + 0x40);
  if (puVar1 != (uint64_t *)0x0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
  }
  lVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*param_2 + 0x38))(param_2);
    if (lVar2 == param_1) {
      (**(code **)(*param_2 + 0x30))(param_2,0);
      uVar6 = *(uint *)(param_1 + 0x20);
      uVar5 = 0;
      if (uVar6 != 0) {
        do {
          if (*(int64_t **)(uVar5 * 8 + *(int64_t *)(param_1 + 0x18)) == param_2) {
            uVar7 = 0;
            if (*(int *)(param_1 + 0x38) != 0) {
              do {
                plVar3 = *(int64_t **)(*(int64_t *)(param_1 + 0x30) + uVar7 * 8);
                (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
                uVar6 = (int)uVar7 + 1;
                uVar7 = (uint64_t)uVar6;
              } while (uVar6 < *(uint *)(param_1 + 0x38));
              uVar6 = *(uint *)(param_1 + 0x20);
            }
            *(uint *)(param_1 + 0x20) = uVar6 - 1;
            *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + uVar5 * 8) =
                 *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + (uint64_t)(uVar6 - 1) * 8);
          }
          uVar6 = *(uint *)(param_1 + 0x20);
          uVar4 = (int)uVar5 + 1;
          uVar5 = (uint64_t)uVar4;
        } while (uVar4 < uVar6);
      }
    }
    else {
      plVar3 = (int64_t *)(**(code **)(*param_2 + 0x38))();
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
    }
  }
  if (puVar1 == (uint64_t *)0x0) {
    return;
  }
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
  return;
}
// 函数: void function_6b5416(int64_t param_1,int64_t *param_2)
void function_6b5416(int64_t param_1,int64_t *param_2)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  puVar1 = (uint64_t *)(param_1 + 0x40);
  if (puVar1 != (uint64_t *)0x0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
  }
  lVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*param_2 + 0x38))(param_2);
    if (lVar2 == param_1) {
      (**(code **)(*param_2 + 0x30))(param_2,0);
      uVar6 = *(uint *)(param_1 + 0x20);
      uVar5 = 0;
      if (uVar6 != 0) {
        do {
          if (*(int64_t **)(uVar5 * 8 + *(int64_t *)(param_1 + 0x18)) == param_2) {
            uVar7 = 0;
            if (*(int *)(param_1 + 0x38) != 0) {
              do {
                plVar3 = *(int64_t **)(*(int64_t *)(param_1 + 0x30) + uVar7 * 8);
                (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
                uVar6 = (int)uVar7 + 1;
                uVar7 = (uint64_t)uVar6;
              } while (uVar6 < *(uint *)(param_1 + 0x38));
              uVar6 = *(uint *)(param_1 + 0x20);
            }
            *(uint *)(param_1 + 0x20) = uVar6 - 1;
            *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + uVar5 * 8) =
                 *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + (uint64_t)(uVar6 - 1) * 8);
          }
          uVar6 = *(uint *)(param_1 + 0x20);
          uVar4 = (int)uVar5 + 1;
          uVar5 = (uint64_t)uVar4;
        } while (uVar4 < uVar6);
      }
    }
    else {
      plVar3 = (int64_t *)(**(code **)(*param_2 + 0x38))();
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
    }
  }
  if (puVar1 == (uint64_t *)0x0) {
    return;
  }
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
  return;
}
// 函数: void function_6b5475(uint64_t param_1,uint64_t param_2,int64_t param_3)
void function_6b5475(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  uint64_t *unaff_RBX;
  uint uVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  (**(code **)(param_3 + 0x30))();
  uVar3 = *(uint *)(unaff_RDI + 0x20);
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      if (*(int64_t *)(uVar2 * 8 + *(int64_t *)(unaff_RDI + 0x18)) == unaff_R14) {
        uVar4 = 0;
        if (*(int *)(unaff_RDI + 0x38) != 0) {
          do {
            (**(code **)(**(int64_t **)(*(int64_t *)(unaff_RDI + 0x30) + uVar4 * 8) + 0x10))();
            uVar3 = (int)uVar4 + 1;
            uVar4 = (uint64_t)uVar3;
          } while (uVar3 < *(uint *)(unaff_RDI + 0x38));
          uVar3 = *(uint *)(unaff_RDI + 0x20);
        }
        *(uint *)(unaff_RDI + 0x20) = uVar3 - 1;
        *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x18) + uVar2 * 8) =
             *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x18) + (uint64_t)(uVar3 - 1) * 8);
      }
      uVar3 = *(uint *)(unaff_RDI + 0x20);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar1;
    } while (uVar1 < uVar3);
  }
  if (unaff_RBX == (uint64_t *)0x0) {
    return;
  }
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*unaff_RBX);
  return;
}
// 函数: void function_6b5487(uint param_1)
void function_6b5487(uint param_1)
{
  uint64_t *unaff_RBX;
  uint64_t unaff_RBP;
  uint uVar1;
  uint64_t uVar2;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  do {
    if (*(int64_t *)(unaff_RBP * 8 + *(int64_t *)(unaff_RDI + 0x18)) == unaff_R14) {
      uVar2 = 0;
      if (*(int *)(unaff_RDI + 0x38) != 0) {
        do {
          (**(code **)(**(int64_t **)(*(int64_t *)(unaff_RDI + 0x30) + uVar2 * 8) + 0x10))();
          uVar1 = (int)uVar2 + 1;
          uVar2 = (uint64_t)uVar1;
        } while (uVar1 < *(uint *)(unaff_RDI + 0x38));
        param_1 = *(uint *)(unaff_RDI + 0x20);
      }
      *(uint *)(unaff_RDI + 0x20) = param_1 - 1;
      *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x18) + unaff_RBP * 8) =
           *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x18) + (uint64_t)(param_1 - 1) * 8);
    }
    param_1 = *(uint *)(unaff_RDI + 0x20);
    uVar1 = (int)unaff_RBP + 1;
    unaff_RBP = (uint64_t)uVar1;
  } while (uVar1 < param_1);
  if (unaff_RBX != (uint64_t *)0x0) {
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*unaff_RBX);
    return;
  }
  return;
}
// 函数: void function_6b5500(void)
void function_6b5500(void)
{
  uint64_t *unaff_RBX;
  if (unaff_RBX != (uint64_t *)0x0) {
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*unaff_RBX);
    return;
  }
  return;
}
// 函数: void function_6b5505(void)
void function_6b5505(void)
{
  uint64_t *unaff_RBX;
  if (unaff_RBX != (uint64_t *)0x0) {
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*unaff_RBX);
    return;
  }
  return;
}
// 函数: void function_6b5514(void)
void function_6b5514(void)
{
  uint64_t *unaff_RBX;
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*unaff_RBX);
  return;
}
// 函数: void function_6b5530(int64_t param_1,int64_t *param_2)
void function_6b5530(int64_t param_1,int64_t *param_2)
{
  uint64_t *puVar1;
  uint uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  puVar1 = (uint64_t *)(param_1 + 0x40);
  if (puVar1 != (uint64_t *)0x0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
  }
  uVar5 = 0;
  uVar3 = uVar5;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      (**(code **)(*param_2 + 0x10))
                (param_2,*(uint64_t *)(*(int64_t *)(param_1 + 0x18) + uVar3 * 8));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x20));
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  if (uVar2 != 0) {
    do {
      if (*(int64_t **)(uVar5 * 8 + *(int64_t *)(param_1 + 0x30)) == param_2) {
        *(uint *)(param_1 + 0x38) = uVar2 - 1;
        *(uint64_t *)(*(int64_t *)(param_1 + 0x30) + uVar5 * 8) =
             *(uint64_t *)(*(int64_t *)(param_1 + 0x30) + (uint64_t)(uVar2 - 1) * 8);
        uVar2 = *(uint *)(param_1 + 0x38);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
    } while (uVar4 < uVar2);
  }
  if (puVar1 == (uint64_t *)0x0) {
    return;
  }
// WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
}
// 函数: void SystemController(uint64_t *param_1,uint param_2)
void SystemController(uint64_t *param_1,uint param_2)
{
  uint uVar1;
  uint64_t uVar2;
  if ((uint)(*(int *)(param_1 + 4) - *(int *)(param_1 + 2)) <= param_2) {
    uVar1 = param_2 * 2;
    if (param_1[2] == 0) {
      uVar1 = param_2;
    }
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(int64_t **)*param_1 + 8))
                        (*(int64_t **)*param_1,uVar1,param_1[1],&processed_var_6528_ptr,0x7e);
    }
// WARNING: Subroutine does not return
    memset(uVar2,0xf,uVar1);
  }
  return;
}
// 函数: void function_6b5629(uint64_t *param_1,int param_2)
void function_6b5629(uint64_t *param_1,int param_2)
{
  int in_EAX;
  uint64_t uVar1;
  int64_t unaff_RBX;
  bool in_ZF;
  if (in_ZF) {
    in_EAX = param_2;
  }
  if (in_EAX == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int64_t **)*param_1 + 8))
                      (*(int64_t **)*param_1,in_EAX,*(uint64_t *)(unaff_RBX + 8),&processed_var_6528_ptr,
                       0x7e);
  }
// WARNING: Subroutine does not return
  memset(uVar1,0xf,in_EAX);
}
// 函数: void function_6b56bd(void)
void function_6b56bd(void)
{
  return;
}
// 函数: void function_6b56d0(uint64_t *param_1,uint param_2)
void function_6b56d0(uint64_t *param_1,uint param_2)
{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  if ((param_2 == 0) || ((param_2 & param_2 - 1) != 0)) {
    param_2 = param_2 >> 1 | param_2;
    param_2 = param_2 | param_2 >> 2;
    param_2 = param_2 | param_2 >> 4;
    param_2 = param_2 | param_2 >> 8;
    param_2 = (param_2 >> 0x10 | param_2) + 1;
  }
  iVar3 = (int)(int64_t)((float)param_2 * *(float *)(param_1 + 6));
  iVar2 = param_2 * 4 + iVar3 * 4;
  uVar1 = (**(code **)(**(int64_t **)*param_1 + 8))
                    (*(int64_t **)*param_1,iVar3 * 0x10 + iVar2 + (-iVar2 & 0xfU),&processed_var_6480_ptr,
                     &rendering_buffer_2848_ptr,0x174);
// WARNING: Subroutine does not return
  memset(uVar1,0xffffffff,param_2 * 4);
}
// 函数: void function_6b5870(uint64_t *param_1,uint param_2)
void function_6b5870(uint64_t *param_1,uint param_2)
{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  if ((param_2 == 0) || ((param_2 & param_2 - 1) != 0)) {
    param_2 = param_2 >> 1 | param_2;
    param_2 = param_2 | param_2 >> 2;
    param_2 = param_2 | param_2 >> 4;
    param_2 = param_2 | param_2 >> 8;
    param_2 = (param_2 >> 0x10 | param_2) + 1;
  }
  iVar3 = (int)(int64_t)((float)param_2 * *(float *)(param_1 + 7));
  iVar2 = param_2 * 4 + iVar3 * 4;
  iVar2 = iVar3 * 0x10 + iVar2 + (-iVar2 & 0xfU);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int64_t **)*param_1 + 8))
                      (*(int64_t **)*param_1,iVar2,param_1[1],&rendering_buffer_2848_ptr,0x174);
  }
// WARNING: Subroutine does not return
  memset(uVar1,0xffffffff,param_2 * 4);
}
// 函数: void function_6b5a10(uint64_t *param_1,uint param_2)
void function_6b5a10(uint64_t *param_1,uint param_2)
{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  if ((param_2 == 0) || ((param_2 & param_2 - 1) != 0)) {
    param_2 = param_2 >> 1 | param_2;
    param_2 = param_2 | param_2 >> 2;
    param_2 = param_2 | param_2 >> 4;
    param_2 = param_2 | param_2 >> 8;
    param_2 = (param_2 >> 0x10 | param_2) + 1;
  }
  iVar3 = (int)(int64_t)((float)param_2 * *(float *)(param_1 + 6));
  iVar2 = param_2 * 4 + iVar3 * 4;
  uVar1 = (**(code **)(**(int64_t **)*param_1 + 8))
                    (*(int64_t **)*param_1,iVar3 * 0x10 + iVar2 + (-iVar2 & 0xfU),&processed_var_6480_ptr,
                     &rendering_buffer_2848_ptr,0x174);
// WARNING: Subroutine does not return
  memset(uVar1,0xffffffff,param_2 * 4);
}
// 函数: void function_6b5bb0(int64_t param_1,uint64_t param_2,int32_t param_3)
void function_6b5bb0(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar2 = 0;
    uVar3 = (uint64_t)*(uint *)(param_1 + 0x48);
    do {
      plVar1 = *(int64_t **)(lVar2 + *(int64_t *)(param_1 + 0x40));
      (**(code **)(*plVar1 + 8))(plVar1,param_2,param_3);
      lVar2 = lVar2 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}
// 函数: void function_6b5bd0(void)
void function_6b5bd0(void)
{
  uint in_EAX;
  int64_t lVar1;
  int64_t unaff_RSI;
  uint64_t uVar2;
  lVar1 = 0;
  uVar2 = (uint64_t)in_EAX;
  do {
    (**(code **)(**(int64_t **)(lVar1 + *(int64_t *)(unaff_RSI + 0x40)) + 8))();
    lVar1 = lVar1 + 8;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}
// 函数: void function_6b5c08(void)
void function_6b5c08(void)
{
  return;
}