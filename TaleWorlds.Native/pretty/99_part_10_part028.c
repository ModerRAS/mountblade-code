#include "SystemDataAdvancedManager_definition.h"
#include "TaleWorlds.Native.Split.h"
// 99_part_10_part028.c - 9 个函数
// 函数: void UtilitiesSystem_b5f8b(int64_t param_1)
void UtilitiesSystem_b5f8b(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int8_t *puVar3;
  byte bVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t unaff_RBX;
  int64_t lVar8;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t in_R11;
  int8_t uVar9;
  int8_t unaff_R13B;
  uint64_t unaff_R14;
  byte bVar10;
  int unaff_R15D;
  uint64_t uVar11;
  int32_t local_buffer_28;
  int32_t local_buffer_2c;
  uint64_t local_var_30;
  int8_t local_buffer_80;
  byte bStack0000000000000081;
  uint64_t local_buffer_88;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x30) = unaff_RDI;
  uVar5 = _getCurrentCounterValue_Time_shdfnd_physx__SA_KXZ();
  lVar1 = *(int64_t *)(param_1 + -0x48);
  lVar8 = lVar1;
  if (lVar1 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
    lVar8 = *(int64_t *)(param_1 + -0x48);
  }
  local_var_30._4_4_ = local_var_30._4_4_ & 0xffff0000;
  _local_buffer_28 = unaff_R14;
  if (lVar8 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar8 + 8));
  }
  if ((((*(int *)(param_1 + -0x28) == unaff_R15D) && (*(uint64_t *)(param_1 + -0x30) == unaff_R14))
      && (*(char *)(param_1 + -0x24) == '\0')) && (*(char *)(param_1 + -0x23) == '\0')) {
    uVar9 = 3;
    uVar11 = 3;
    uVar7 = uVar5;
    if (*(int64_t *)(param_1 + -0x20) != 0) {
      uVar6 = uVar5 - *(int64_t *)(param_1 + -0x20);
      uVar7 = uVar6;
      if (uVar6 < 0x100) {
        uVar9 = 0;
        uVar11 = 0;
      }
      else if (uVar6 < 0x10000) {
        uVar9 = 1;
        uVar11 = 1;
      }
      else {
        uVar7 = uVar5;
        if (uVar6 < 0x100000000) {
          uVar9 = 2;
          uVar11 = 2;
          uVar7 = uVar6;
        }
      }
    }
    *(uint64_t *)(param_1 + -0x20) = uVar5;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(int8_t **)(lVar2 + 0x18) = 3;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(int8_t **)(lVar2 + 0x18) = uVar9;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
    puVar3 = *(int8_t **)(lVar2 + 0x18);
    *puVar3 = unaff_R13B;
    puVar3[1] = local_buffer_88._1_1_;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
    GameLogic_StateMachine(param_1 + -0x38,&processed_var_6648_ptr,&local_buffer_00000020,uVar11,uVar7);
  }
  else {
    bVar10 = 3;
    local_buffer_80 = 1;
    *(int32_t *)(param_1 + -0x30) = local_buffer_28;
    *(int32_t *)(param_1 + -0x2c) = local_buffer_2c;
    *(int *)(param_1 + -0x28) = unaff_R15D;
    *(uint *)(param_1 + -0x24) = local_var_30._4_4_;
    if (*(int64_t *)(param_1 + -0x20) != 0) {
      uVar7 = uVar5 - *(int64_t *)(param_1 + -0x20);
      if (uVar7 < 0x100) {
        bVar10 = 0;
      }
      else if (uVar7 < 0x10000) {
        bVar10 = 1;
      }
      else if (uVar7 < 0x100000000) {
        bVar10 = 2;
      }
      else {
        bVar10 = 3;
      }
    }
    if (unaff_R14 < 0x100) {
      bVar4 = 0;
    }
    else if (unaff_R14 < 0x10000) {
      bVar4 = 4;
    }
    else {
      bVar4 = 0xc;
      if (unaff_R14 < 0x100000000) {
        bVar4 = 8;
      }
    }
    *(uint64_t *)(param_1 + -0x20) = uVar5;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    bStack0000000000000081 = bVar10 | bVar4;
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(int8_t **)(lVar2 + 0x18) = 1;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(byte **)(lVar2 + 0x18) = bVar10 | bVar4;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
    puVar3 = *(int8_t **)(lVar2 + 0x18);
    *puVar3 = unaff_R13B;
    puVar3[1] = local_buffer_88._1_1_;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
    UtilitiesSystem_b2670(&local_buffer_00000028,param_1 + -0x38,&local_buffer_00000080);
  }
  if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90))) {
    RenderingSystem_ShaderProcessor(param_1 + -0xb0);
  }
  if (lVar8 == 0) {
    if (lVar1 == 0) {
      return;
    }
// WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
  }
// WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar8 + 8));
}
// 函数: void UtilitiesSystem_b5f8f(int64_t param_1)
void UtilitiesSystem_b5f8f(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int8_t *puVar3;
  byte bVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t in_R11;
  int8_t uVar9;
  int8_t unaff_R13B;
  uint64_t unaff_R14;
  byte bVar10;
  int unaff_R15D;
  uint64_t uVar11;
  int32_t local_buffer_28;
  int32_t local_buffer_2c;
  uint64_t local_var_30;
  int8_t local_buffer_80;
  byte bStack0000000000000081;
  uint64_t local_buffer_88;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x30) = unaff_RDI;
  uVar5 = _getCurrentCounterValue_Time_shdfnd_physx__SA_KXZ();
  lVar1 = *(int64_t *)(param_1 + -0x48);
  lVar8 = lVar1;
  if (lVar1 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
    lVar8 = *(int64_t *)(param_1 + -0x48);
  }
  local_var_30._4_4_ = local_var_30._4_4_ & 0xffff0000;
  _local_buffer_28 = unaff_R14;
  if (lVar8 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar8 + 8));
  }
  if ((((*(int *)(param_1 + -0x28) == unaff_R15D) && (*(uint64_t *)(param_1 + -0x30) == unaff_R14))
      && (*(char *)(param_1 + -0x24) == '\0')) && (*(char *)(param_1 + -0x23) == '\0')) {
    uVar9 = 3;
    uVar11 = 3;
    uVar7 = uVar5;
    if (*(int64_t *)(param_1 + -0x20) != 0) {
      uVar6 = uVar5 - *(int64_t *)(param_1 + -0x20);
      uVar7 = uVar6;
      if (uVar6 < 0x100) {
        uVar9 = 0;
        uVar11 = 0;
      }
      else if (uVar6 < 0x10000) {
        uVar9 = 1;
        uVar11 = 1;
      }
      else {
        uVar7 = uVar5;
        if (uVar6 < 0x100000000) {
          uVar9 = 2;
          uVar11 = 2;
          uVar7 = uVar6;
        }
      }
    }
    *(uint64_t *)(param_1 + -0x20) = uVar5;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(int8_t **)(lVar2 + 0x18) = 3;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(int8_t **)(lVar2 + 0x18) = uVar9;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
    puVar3 = *(int8_t **)(lVar2 + 0x18);
    *puVar3 = unaff_R13B;
    puVar3[1] = local_buffer_88._1_1_;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
    GameLogic_StateMachine(param_1 + -0x38,&processed_var_6648_ptr,&local_buffer_00000020,uVar11,uVar7);
  }
  else {
    bVar10 = 3;
    local_buffer_80 = 1;
    *(int32_t *)(param_1 + -0x30) = local_buffer_28;
    *(int32_t *)(param_1 + -0x2c) = local_buffer_2c;
    *(int *)(param_1 + -0x28) = unaff_R15D;
    *(uint *)(param_1 + -0x24) = local_var_30._4_4_;
    if (*(int64_t *)(param_1 + -0x20) != 0) {
      uVar7 = uVar5 - *(int64_t *)(param_1 + -0x20);
      if (uVar7 < 0x100) {
        bVar10 = 0;
      }
      else if (uVar7 < 0x10000) {
        bVar10 = 1;
      }
      else if (uVar7 < 0x100000000) {
        bVar10 = 2;
      }
      else {
        bVar10 = 3;
      }
    }
    if (unaff_R14 < 0x100) {
      bVar4 = 0;
    }
    else if (unaff_R14 < 0x10000) {
      bVar4 = 4;
    }
    else {
      bVar4 = 0xc;
      if (unaff_R14 < 0x100000000) {
        bVar4 = 8;
      }
    }
    *(uint64_t *)(param_1 + -0x20) = uVar5;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    bStack0000000000000081 = bVar10 | bVar4;
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(int8_t **)(lVar2 + 0x18) = 1;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(byte **)(lVar2 + 0x18) = bVar10 | bVar4;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
    puVar3 = *(int8_t **)(lVar2 + 0x18);
    *puVar3 = unaff_R13B;
    puVar3[1] = local_buffer_88._1_1_;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
    UtilitiesSystem_b2670(&local_buffer_00000028,param_1 + -0x38,&local_buffer_00000080);
  }
  if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90))) {
    RenderingSystem_ShaderProcessor(param_1 + -0xb0);
  }
  if (lVar8 == 0) {
    if (lVar1 == 0) {
      return;
    }
// WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
  }
// WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar8 + 8));
}
// 函数: void UtilitiesSystem_b6020(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void UtilitiesSystem_b6020(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int8_t *puVar2;
  uint64_t in_RAX;
  uint64_t uVar3;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int8_t uVar4;
  int8_t unaff_R13B;
  uint64_t uVar5;
  uint64_t local_buffer_88;
  uVar4 = 3;
  uVar5 = 3;
  if (param_1 != 0) {
    uVar3 = in_RAX - param_1;
    in_RAX = uVar3;
    if (uVar3 < 0x100) {
      uVar4 = 0;
      uVar5 = 0;
    }
    else if (uVar3 < 0x10000) {
      uVar4 = 1;
      uVar5 = 1;
    }
    else {
      in_RAX = unaff_RSI;
      if (uVar3 < 0x100000000) {
        uVar4 = 2;
        uVar5 = 2;
        in_RAX = uVar3;
      }
    }
  }
  *(uint64_t *)(unaff_RBP + 0x90) = unaff_RSI;
  lVar1 = *(int64_t *)(unaff_RBP + 0x78);
  SystemController(lVar1,(*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x10)) + 1,param_3,param_4,in_RAX);
  **(int8_t **)(lVar1 + 0x18) = 3;
  *(int64_t *)(lVar1 + 0x18) = *(int64_t *)(lVar1 + 0x18) + 1;
  lVar1 = *(int64_t *)(unaff_RBP + 0x78);
  SystemController(lVar1,(*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x10)) + 1);
  **(int8_t **)(lVar1 + 0x18) = uVar4;
  *(int64_t *)(lVar1 + 0x18) = *(int64_t *)(lVar1 + 0x18) + 1;
  lVar1 = *(int64_t *)(unaff_RBP + 0x78);
  SystemController(lVar1,(*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x10)) + 2);
  puVar2 = *(int8_t **)(lVar1 + 0x18);
  *puVar2 = unaff_R13B;
  puVar2[1] = local_buffer_88._1_1_;
  *(int64_t *)(lVar1 + 0x18) = *(int64_t *)(lVar1 + 0x18) + 2;
  GameLogic_StateMachine(unaff_RBP + 0x78,&processed_var_6648_ptr,&local_buffer_00000020,uVar5);
  if (*(uint *)(unaff_RBP + 0x50) <= (uint)(*(int *)(unaff_RBP + 0x28) - *(int *)(unaff_RBP + 0x20))
     ) {
    RenderingSystem_ShaderProcessor();
  }
  if (unaff_RBX == 0) {
    if (unaff_RDI == 0) {
      return;
    }
// WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RDI + 8));
  }
// WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RBX + 8));
}
// 函数: void UtilitiesSystem_b6109(void)
void UtilitiesSystem_b6109(void)
{
  int64_t lVar1;
  int8_t *puVar2;
  byte bVar3;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int8_t unaff_R13B;
  uint64_t unaff_R14;
  byte bVar4;
  int32_t local_buffer_28;
  int32_t local_buffer_2c;
  int32_t local_buffer_30;
  int32_t local_buffer_34;
  uint64_t local_buffer_38;
  int8_t local_buffer_80;
  byte bStack0000000000000081;
  uint64_t local_buffer_88;
  bVar4 = 3;
  local_buffer_80 = 1;
  *(int32_t *)(unaff_RBP + 0x80) = local_buffer_28;
  *(int32_t *)(unaff_RBP + 0x84) = local_buffer_2c;
  *(int32_t *)(unaff_RBP + 0x88) = local_buffer_30;
  *(int32_t *)(unaff_RBP + 0x8c) = local_buffer_34;
  local_buffer_38 = unaff_RSI;
  if (*(int64_t *)(unaff_RBP + 0x90) != 0) {
    local_buffer_38 = unaff_RSI - *(int64_t *)(unaff_RBP + 0x90);
    if (local_buffer_38 < 0x100) {
      bVar4 = 0;
    }
    else if (local_buffer_38 < 0x10000) {
      bVar4 = 1;
    }
    else if (local_buffer_38 < 0x100000000) {
      bVar4 = 2;
    }
    else {
      bVar4 = 3;
      local_buffer_38 = unaff_RSI;
    }
  }
  if (unaff_R14 < 0x100) {
    bVar3 = 0;
  }
  else if (unaff_R14 < 0x10000) {
    bVar3 = 4;
  }
  else {
    bVar3 = 0xc;
    if (unaff_R14 < 0x100000000) {
      bVar3 = 8;
    }
  }
  *(uint64_t *)(unaff_RBP + 0x90) = unaff_RSI;
  lVar1 = *(int64_t *)(unaff_RBP + 0x78);
  bStack0000000000000081 = bVar4 | bVar3;
  SystemController(lVar1,(*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x10)) + 1);
  **(int8_t **)(lVar1 + 0x18) = 1;
  *(int64_t *)(lVar1 + 0x18) = *(int64_t *)(lVar1 + 0x18) + 1;
  lVar1 = *(int64_t *)(unaff_RBP + 0x78);
  SystemController(lVar1,(*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x10)) + 1);
  **(byte **)(lVar1 + 0x18) = bVar4 | bVar3;
  *(int64_t *)(lVar1 + 0x18) = *(int64_t *)(lVar1 + 0x18) + 1;
  lVar1 = *(int64_t *)(unaff_RBP + 0x78);
  SystemController(lVar1,(*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x10)) + 2);
  puVar2 = *(int8_t **)(lVar1 + 0x18);
  *puVar2 = unaff_R13B;
  puVar2[1] = local_buffer_88._1_1_;
  *(int64_t *)(lVar1 + 0x18) = *(int64_t *)(lVar1 + 0x18) + 2;
  UtilitiesSystem_b2670(&local_buffer_00000028,unaff_RBP + 0x78,&local_buffer_00000080);
  if (*(uint *)(unaff_RBP + 0x50) <= (uint)(*(int *)(unaff_RBP + 0x28) - *(int *)(unaff_RBP + 0x20))
     ) {
    RenderingSystem_ShaderProcessor();
  }
  if (unaff_RBX != 0) {
// WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RBX + 8));
  }
  if (unaff_RDI != 0) {
// WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RDI + 8));
  }
  return;
}
// 函数: void UtilitiesSystem_b624d(void)
void UtilitiesSystem_b624d(void)
{
  int64_t unaff_RBX;
// WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RBX + 8));
}
// 函数: void UtilitiesSystem_b6263(void)
void UtilitiesSystem_b6263(void)
{
  int64_t unaff_RDI;
// WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RDI + 8));
}
// 函数: void UtilitiesSystem_b6271(void)
void UtilitiesSystem_b6271(void)
{
  return;
}
// 函数: void UtilitiesSystem_b6280(int64_t param_1,int16_t param_2,uint64_t param_3)
void UtilitiesSystem_b6280(int64_t param_1,int16_t param_2,uint64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int8_t *puVar3;
  byte bVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int8_t uVar9;
  byte bVar10;
  uint64_t uVar11;
  int8_t stack_special_x_8;
  byte bStackX_9;
  int16_t stack_special_x_a;
  int16_t stack_special_x_10;
  uint64_t stack_special_x_20;
  uint64_t local_var_58;
  int iStack_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  if (*(char *)(param_1 + 0x128) != '\0') {
    stack_special_x_10 = param_2;
    iVar5 = _getId_ThreadImpl_shdfnd_physx__SA_KXZ();
    uVar6 = _getCurrentCounterValue_Time_shdfnd_physx__SA_KXZ();
    lVar1 = *(int64_t *)(param_1 + -0x48);
    lVar8 = lVar1;
    if (lVar1 != 0) {
      _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
      lVar8 = *(int64_t *)(param_1 + -0x48);
    }
    local_var_4c = CONCAT22(local_var_4c._2_2_,2);
    local_var_58 = param_3;
    iStack_50 = iVar5;
    if (lVar8 != 0) {
      _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar8 + 8));
    }
    if ((((*(int *)(param_1 + -0x28) == iVar5) && (*(uint64_t *)(param_1 + -0x30) == param_3)) &&
        (*(char *)(param_1 + -0x24) == '\x02')) && (*(char *)(param_1 + -0x23) == '\0')) {
      uVar9 = 3;
      uVar11 = 3;
      stack_special_x_20 = uVar6;
      if (*(int64_t *)(param_1 + -0x20) != 0) {
        uVar7 = uVar6 - *(int64_t *)(param_1 + -0x20);
        stack_special_x_20 = uVar7;
        if (uVar7 < 0x100) {
          uVar9 = 0;
          uVar11 = 0;
        }
        else if (uVar7 < 0x10000) {
          uVar9 = 1;
          uVar11 = 1;
        }
        else {
          stack_special_x_20 = uVar6;
          if (uVar7 < 0x100000000) {
            uVar9 = 2;
            uVar11 = 2;
            stack_special_x_20 = uVar7;
          }
        }
      }
      *(uint64_t *)(param_1 + -0x20) = uVar6;
      lVar2 = *(int64_t *)(param_1 + -0x38);
      SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
      **(int8_t **)(lVar2 + 0x18) = 4;
      *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
      lVar2 = *(int64_t *)(param_1 + -0x38);
      SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
      **(int8_t **)(lVar2 + 0x18) = uVar9;
      *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
      lVar2 = *(int64_t *)(param_1 + -0x38);
      SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
      puVar3 = *(int8_t **)(lVar2 + 0x18);
      *puVar3 = (char)param_2;
      puVar3[1] = stack_special_x_10._1_1_;
      *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
      GameLogic_StateMachine(param_1 + -0x38,&processed_var_6648_ptr,&stack_special_x_20,uVar11);
    }
    else {
      bVar10 = 3;
      stack_special_x_8 = 2;
      *(int32_t *)(param_1 + -0x30) = (int32_t)local_var_58;
      *(int32_t *)(param_1 + -0x2c) = local_var_58._4_4_;
      *(int *)(param_1 + -0x28) = iStack_50;
      *(int32_t *)(param_1 + -0x24) = local_var_4c;
      local_var_48 = uVar6;
      if (*(int64_t *)(param_1 + -0x20) != 0) {
        local_var_48 = uVar6 - *(int64_t *)(param_1 + -0x20);
        if (local_var_48 < 0x100) {
          bVar10 = 0;
        }
        else if (local_var_48 < 0x10000) {
          bVar10 = 1;
        }
        else if (local_var_48 < 0x100000000) {
          bVar10 = 2;
        }
        else {
          bVar10 = 3;
          local_var_48 = uVar6;
        }
      }
      if (param_3 < 0x100) {
        bVar4 = 0;
      }
      else if (param_3 < 0x10000) {
        bVar4 = 4;
      }
      else {
        bVar4 = 0xc;
        if (param_3 < 0x100000000) {
          bVar4 = 8;
        }
      }
      *(uint64_t *)(param_1 + -0x20) = uVar6;
      lVar2 = *(int64_t *)(param_1 + -0x38);
      bStackX_9 = bVar10 | bVar4;
      stack_special_x_a = param_2;
      SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
      **(int8_t **)(lVar2 + 0x18) = 2;
      *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
      lVar2 = *(int64_t *)(param_1 + -0x38);
      SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
      **(byte **)(lVar2 + 0x18) = bVar10 | bVar4;
      *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
      lVar2 = *(int64_t *)(param_1 + -0x38);
      SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
      puVar3 = *(int8_t **)(lVar2 + 0x18);
      *puVar3 = (char)param_2;
      puVar3[1] = stack_special_x_10._1_1_;
      *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
      UtilitiesSystem_b2670(&local_var_58,param_1 + -0x38,&stack_special_x_8);
    }
    if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90)))
    {
      RenderingSystem_ShaderProcessor(param_1 + -0xb0);
    }
    if (lVar8 != 0) {
// WARNING: Subroutine does not return
      _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar8 + 8));
    }
    if (lVar1 != 0) {
// WARNING: Subroutine does not return
      _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
    }
  }
  return;
}
// 函数: void UtilitiesSystem_b62a6(int64_t param_1)
void UtilitiesSystem_b62a6(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int8_t *puVar3;
  byte bVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t unaff_RBX;
  int64_t lVar8;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t in_R11;
  int8_t uVar9;
  int8_t unaff_R13B;
  uint64_t unaff_R14;
  byte bVar10;
  uint64_t unaff_R15;
  uint64_t uVar11;
  uint64_t local_var_28;
  int8_t local_buffer_80;
  byte bStack0000000000000081;
  uint64_t local_buffer_88;
  uint64_t local_buffer_98;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  iVar5 = _getId_ThreadImpl_shdfnd_physx__SA_KXZ();
  uVar6 = _getCurrentCounterValue_Time_shdfnd_physx__SA_KXZ();
  lVar1 = *(int64_t *)(param_1 + -0x48);
  lVar8 = lVar1;
  if (lVar1 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
    lVar8 = *(int64_t *)(param_1 + -0x48);
  }
  local_var_28._4_4_ = CONCAT22(local_var_28._6_2_,2);
  if (lVar8 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar8 + 8));
  }
  if ((((*(int *)(param_1 + -0x28) == iVar5) && (*(uint64_t *)(param_1 + -0x30) == unaff_R14)) &&
      (*(char *)(param_1 + -0x24) == '\x02')) && (*(char *)(param_1 + -0x23) == '\0')) {
    uVar9 = 3;
    uVar11 = 3;
    local_buffer_98 = uVar6;
    if (*(int64_t *)(param_1 + -0x20) != 0) {
      uVar7 = uVar6 - *(int64_t *)(param_1 + -0x20);
      local_buffer_98 = uVar7;
      if (uVar7 < 0x100) {
        uVar9 = 0;
        uVar11 = 0;
      }
      else if (uVar7 < 0x10000) {
        uVar9 = 1;
        uVar11 = 1;
      }
      else {
        local_buffer_98 = uVar6;
        if (uVar7 < 0x100000000) {
          uVar9 = 2;
          uVar11 = 2;
          local_buffer_98 = uVar7;
        }
      }
    }
    *(uint64_t *)(param_1 + -0x20) = uVar6;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(int8_t **)(lVar2 + 0x18) = 4;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(int8_t **)(lVar2 + 0x18) = uVar9;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
    puVar3 = *(int8_t **)(lVar2 + 0x18);
    *puVar3 = unaff_R13B;
    puVar3[1] = local_buffer_88._1_1_;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
    GameLogic_StateMachine(param_1 + -0x38,&processed_var_6648_ptr,&local_buffer_00000098,uVar11);
  }
  else {
    bVar10 = 3;
    local_buffer_80 = 2;
    *(int *)(param_1 + -0x30) = (int)unaff_R14;
    *(int *)(param_1 + -0x2c) = (int)(unaff_R14 >> 0x20);
    *(int *)(param_1 + -0x28) = iVar5;
    *(int32_t *)(param_1 + -0x24) = local_var_28._4_4_;
    if (*(int64_t *)(param_1 + -0x20) != 0) {
      uVar7 = uVar6 - *(int64_t *)(param_1 + -0x20);
      if (uVar7 < 0x100) {
        bVar10 = 0;
      }
      else if (uVar7 < 0x10000) {
        bVar10 = 1;
      }
      else if (uVar7 < 0x100000000) {
        bVar10 = 2;
      }
      else {
        bVar10 = 3;
      }
    }
    if (unaff_R14 < 0x100) {
      bVar4 = 0;
    }
    else if (unaff_R14 < 0x10000) {
      bVar4 = 4;
    }
    else {
      bVar4 = 0xc;
      if (unaff_R14 < 0x100000000) {
        bVar4 = 8;
      }
    }
    *(uint64_t *)(param_1 + -0x20) = uVar6;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    bStack0000000000000081 = bVar10 | bVar4;
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(int8_t **)(lVar2 + 0x18) = 2;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(byte **)(lVar2 + 0x18) = bVar10 | bVar4;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
    puVar3 = *(int8_t **)(lVar2 + 0x18);
    *puVar3 = unaff_R13B;
    puVar3[1] = local_buffer_88._1_1_;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
    UtilitiesSystem_b2670(&local_buffer_00000020,param_1 + -0x38,&local_buffer_00000080);
  }
  if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90))) {
    RenderingSystem_ShaderProcessor(param_1 + -0xb0);
  }
  if (lVar8 == 0) {
    if (lVar1 == 0) {
      return;
    }
// WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
  }
// WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar8 + 8));
}