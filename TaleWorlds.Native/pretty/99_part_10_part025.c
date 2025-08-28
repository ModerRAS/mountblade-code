#include "SystemDataAdvancedManager_definition.h"
#include "TaleWorlds.Native.Split.h"
// 99_part_10_part025.c - 22 个函数
// 函数: void UtilitiesSystem_b42d0(int64_t param_1)
void UtilitiesSystem_b42d0(int64_t param_1)
{
  int32_t uVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t *puVar4;
  uint uVar5;
  uint64_t uVar6;
  char acStackX_8 [8];
  uint64_t stack_special_x_10;
  if (*(int *)(param_1 + 0xd4) != 0) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0xc0) != 0) {
      uVar3 = **(uint **)(param_1 + 0xb8);
      if (uVar3 == 0xffffffff) {
        do {
          uVar5 = (int)uVar6 + 1;
          uVar6 = (uint64_t)uVar5;
          if (uVar5 == *(uint *)(param_1 + 0xc4)) goto joined_r0x0001806b4323;
          uVar3 = (*(uint **)(param_1 + 0xb8))[uVar6];
        } while (uVar3 == 0xffffffff);
      }
LAB_1806b4340:
      do {
        do {
          uVar2 = *(uint64_t *)(*(int64_t *)(param_1 + 0xa8) + (uint64_t)uVar3 * 0x10);
          uVar1 = *(int32_t *)(*(int64_t *)(param_1 + 0xa8) + 8 + (uint64_t)uVar3 * 0x10);
          stack_special_x_10 = uVar2;
          puVar4 = (uint64_t *)UtilitiesSystem_b3de0(param_1 + 0x58,&stack_special_x_10,acStackX_8);
          if (acStackX_8[0] == '\0') {
            *puVar4 = uVar2;
            *(int32_t *)(puVar4 + 1) = uVar1;
          }
          uVar3 = *(uint *)(*(int64_t *)(param_1 + 0xb0) + (uint64_t)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
        do {
          uVar5 = (int)uVar6 + 1;
          uVar6 = (uint64_t)uVar5;
          if (uVar5 == *(uint *)(param_1 + 0xc4)) goto joined_r0x0001806b4323;
          uVar3 = *(uint *)(*(int64_t *)(param_1 + 0xb8) + uVar6 * 4);
        } while (uVar3 == 0xffffffff);
      } while( true );
    }
UtilitiesSystem_b43c2:
    if ((*(int *)(param_1 + 0xc4) != 0) && (*(int *)(param_1 + 0xd4) != 0)) {
// WARNING: Subroutine does not return
      memset(*(uint64_t *)(param_1 + 0xb8),0xffffffff,*(int *)(param_1 + 0xc4) * 4);
    }
  }
  return;
joined_r0x0001806b4323:
  if (uVar3 == 0xffffffff) goto UtilitiesSystem_b43c2;
  goto LAB_1806b4340;
}
// 函数: void UtilitiesSystem_b42e6(int64_t param_1)
void UtilitiesSystem_b42e6(int64_t param_1)
{
  int32_t uVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t *puVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t unaff_RDI;
  char local_buffer_50;
  uint64_t local_buffer_58;
  uVar6 = 0;
  if (*(int *)(param_1 + 0xc0) == 0) {
UtilitiesSystem_b43c2:
    if ((*(int *)(unaff_RDI + 0xc4) != 0) && (*(int *)(unaff_RDI + 0xd4) != 0)) {
// WARNING: Subroutine does not return
      memset(*(uint64_t *)(unaff_RDI + 0xb8),0xffffffff,*(int *)(unaff_RDI + 0xc4) * 4);
    }
    return;
  }
  uVar3 = **(uint **)(param_1 + 0xb8);
  if (uVar3 == 0xffffffff) {
    do {
      uVar5 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar5;
      if (uVar5 == *(uint *)(unaff_RDI + 0xc4)) goto joined_r0x0001806b4323;
      uVar3 = (*(uint **)(param_1 + 0xb8))[uVar6];
    } while (uVar3 == 0xffffffff);
  }
LAB_1806b4340:
  do {
    do {
      uVar2 = *(uint64_t *)(*(int64_t *)(unaff_RDI + 0xa8) + (uint64_t)uVar3 * 0x10);
      uVar1 = *(int32_t *)(*(int64_t *)(unaff_RDI + 0xa8) + 8 + (uint64_t)uVar3 * 0x10);
      local_buffer_58 = uVar2;
      puVar4 = (uint64_t *)UtilitiesSystem_b3de0(unaff_RDI + 0x58,&local_buffer_00000058,&local_buffer_00000050);
      if (local_buffer_50 == '\0') {
        *puVar4 = uVar2;
        *(int32_t *)(puVar4 + 1) = uVar1;
      }
      uVar3 = *(uint *)(*(int64_t *)(unaff_RDI + 0xb0) + (uint64_t)uVar3 * 4);
    } while (uVar3 != 0xffffffff);
    do {
      uVar5 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar5;
      if (uVar5 == *(uint *)(unaff_RDI + 0xc4)) goto joined_r0x0001806b4323;
      uVar3 = *(uint *)(*(int64_t *)(unaff_RDI + 0xb8) + uVar6 * 4);
    } while (uVar3 == 0xffffffff);
  } while( true );
joined_r0x0001806b4323:
  if (uVar3 == 0xffffffff) goto UtilitiesSystem_b43c2;
  goto LAB_1806b4340;
}
// 函数: void UtilitiesSystem_b4329(void)
void UtilitiesSystem_b4329(void)
{
  int32_t uVar1;
  uint64_t uVar2;
  uint in_EAX;
  uint64_t *puVar3;
  uint uVar4;
  uint64_t unaff_RBX;
  int64_t unaff_RDI;
  char local_buffer_50;
  uint64_t local_buffer_58;
  do {
    do {
      uVar2 = *(uint64_t *)(*(int64_t *)(unaff_RDI + 0xa8) + (uint64_t)in_EAX * 0x10);
      uVar1 = *(int32_t *)(*(int64_t *)(unaff_RDI + 0xa8) + 8 + (uint64_t)in_EAX * 0x10);
      local_buffer_58 = uVar2;
      puVar3 = (uint64_t *)UtilitiesSystem_b3de0(unaff_RDI + 0x58,&local_buffer_00000058,&local_buffer_00000050);
      if (local_buffer_50 == '\0') {
        *puVar3 = uVar2;
        *(int32_t *)(puVar3 + 1) = uVar1;
      }
      in_EAX = *(uint *)(*(int64_t *)(unaff_RDI + 0xb0) + (uint64_t)in_EAX * 4);
    } while (in_EAX != 0xffffffff);
    do {
      uVar4 = (int)unaff_RBX + 1;
      unaff_RBX = (uint64_t)uVar4;
      if (uVar4 == *(uint *)(unaff_RDI + 0xc4)) {
        if (in_EAX == 0xffffffff) {
          if ((*(int *)(unaff_RDI + 0xc4) != 0) && (*(int *)(unaff_RDI + 0xd4) != 0)) {
// WARNING: Subroutine does not return
            memset(*(uint64_t *)(unaff_RDI + 0xb8),0xffffffff,*(int *)(unaff_RDI + 0xc4) * 4);
          }
          return;
        }
        break;
      }
      in_EAX = *(uint *)(*(int64_t *)(unaff_RDI + 0xb8) + unaff_RBX * 4);
    } while (in_EAX == 0xffffffff);
  } while( true );
}
// 函数: void UtilitiesSystem_b43c2(void)
void UtilitiesSystem_b43c2(void)
{
  int64_t unaff_RDI;
  if ((*(int *)(unaff_RDI + 0xc4) != 0) && (*(int *)(unaff_RDI + 0xd4) != 0)) {
// WARNING: Subroutine does not return
    memset(*(uint64_t *)(unaff_RDI + 0xb8),0xffffffff,*(int *)(unaff_RDI + 0xc4) * 4);
  }
  return;
}
// 函数: void UtilitiesSystem_b43d5(void)
void UtilitiesSystem_b43d5(void)
{
  int in_EAX;
  int64_t unaff_RDI;
  if (*(int *)(unaff_RDI + 0xd4) != 0) {
// WARNING: Subroutine does not return
    memset(*(uint64_t *)(unaff_RDI + 0xb8),0xffffffff,in_EAX * 4);
  }
  return;
}
// 函数: void RenderingSystem_ShaderProcessor(int64_t *param_1)
void RenderingSystem_ShaderProcessor(int64_t *param_1)
{
  int64_t lVar1;
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
  }
  UtilitiesSystem_b5bb0(param_1,param_1[4],(int)param_1[5] - (int)param_1[4]);
  param_1[5] = param_1[4];
  (**(code **)(*param_1 + 0x18))(param_1);
  if (lVar1 != 0) {
// WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
  }
  return;
}
// 函数: void UtilitiesSystem_b44d0(int64_t *param_1)
void UtilitiesSystem_b44d0(int64_t *param_1)
{
  UtilitiesSystem_b5bb0(param_1,param_1[4],(int)param_1[5] - (int)param_1[4]);
  param_1[5] = param_1[4];
// WARNING: Could not recover jumptable at 0x0001806b44fd. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}
// 函数: void UtilitiesSystem_b4510(int64_t param_1)
void UtilitiesSystem_b4510(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  lVar2 = *(int64_t *)(param_1 + -0x50);
  plVar1 = (int64_t *)(param_1 + -0xb8);
  if (lVar2 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar2 + 8));
  }
  UtilitiesSystem_b5bb0(plVar1,*(uint64_t *)(param_1 + -0x98),
                *(int *)(param_1 + -0x90) - *(int *)(param_1 + -0x98));
  *(uint64_t *)(param_1 + -0x90) = *(uint64_t *)(param_1 + -0x98);
  (**(code **)(*plVar1 + 0x18))(plVar1);
  if (lVar2 != 0) {
// WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar2 + 8));
  }
  return;
}
// 函数: void UtilitiesSystem_b4580(int64_t param_1)
void UtilitiesSystem_b4580(int64_t param_1)
{
  int64_t *plVar1;
  plVar1 = (int64_t *)(param_1 + 8);
  UtilitiesSystem_b5bb0(plVar1,*(uint64_t *)(param_1 + 0x28),
                *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28));
  *(uint64_t *)(param_1 + 0x30) = *(uint64_t *)(param_1 + 0x28);
// WARNING: Could not recover jumptable at 0x0001806b45b1. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}
// 函数: void UtilitiesSystem_b45c0(int64_t param_1)
void UtilitiesSystem_b45c0(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  if (*(uint *)(param_1 + 0x20) != 0) {
    lVar2 = 0;
    uVar3 = (uint64_t)*(uint *)(param_1 + 0x20);
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVar2);
      (**(code **)(*(int64_t *)(lVar1 + 0x18) + 8))(lVar1 + 0x18);
      lVar2 = lVar2 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}
// 函数: void UtilitiesSystem_b45d0(void)
void UtilitiesSystem_b45d0(void)
{
  int64_t lVar1;
  uint in_EAX;
  int64_t lVar2;
  int64_t unaff_RSI;
  uint64_t uVar3;
  lVar2 = 0;
  uVar3 = (uint64_t)in_EAX;
  do {
    lVar1 = *(int64_t *)(*(int64_t *)(unaff_RSI + 0x18) + lVar2);
    (**(code **)(*(int64_t *)(lVar1 + 0x18) + 8))(lVar1 + 0x18);
    lVar2 = lVar2 + 8;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return;
}
// 函数: void UtilitiesSystem_b4607(void)
void UtilitiesSystem_b4607(void)
{
  return;
}
// 函数: void UtilitiesSystem_b4610(int64_t *param_1,uint64_t param_2)
void UtilitiesSystem_b4610(int64_t *param_1,uint64_t param_2)
{
  uint64_t astack_special_x_10 [3];
  astack_special_x_10[0] = param_2;
  (**(code **)(*param_1 + 0x50))(param_1,astack_special_x_10,1);
  return;
}
int16_t UtilitiesSystem_b4630(int64_t param_1,int64_t param_2,uint param_3)
{
  int32_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint uVar6;
  ushort *puVar7;
  ushort uVar8;
  ushort uVar9;
  bool bVar10;
  char acStackX_20 [8];
  char acStack_88 [8];
  ushort stack_array_80 [4];
  ushort local_var_78;
  int32_t local_var_76;
  int32_t local_var_6c;
  uint64_t local_var_68;
  uint64_t local_var_60;
  int32_t local_var_58;
  int32_t local_var_54;
  if (param_3 == 0) {
    return 0;
  }
  lVar4 = UtilitiesSystem_b41e0(param_1 + 0x58);
  if (lVar4 != 0) {
    return *(int16_t *)
            (*(int64_t *)(param_1 + 0x48) + 8 + (uint64_t)*(uint *)(lVar4 + 8) * 0x10);
  }
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x38));
  lVar4 = UtilitiesSystem_b41e0(param_1 + 0x98);
  if (lVar4 == 0) {
    uVar8 = *(ushort *)(param_1 + 0x50);
LAB_1806b46e0:
    do {
      bVar10 = false;
      uVar8 = uVar8 + 1;
      uVar9 = uVar8;
      if (param_3 == 0) break;
      do {
        if (bVar10) goto LAB_1806b46e0;
        if ((*(int *)(param_1 + 0x114) != 0) &&
           (uVar6 = (uint)uVar9 + ~((uint)uVar9 << 0xf), uVar6 = (uVar6 >> 10 ^ uVar6) * 9,
           uVar6 = uVar6 ^ uVar6 >> 6, uVar6 = ~(uVar6 << 0xb) + uVar6,
           uVar6 = *(uint *)(*(int64_t *)(param_1 + 0xf8) +
                            (uint64_t)((uVar6 >> 0x10 ^ uVar6) & *(int *)(param_1 + 0x104) - 1U) *
                            4), uVar6 != 0xffffffff)) {
          do {
            puVar7 = (ushort *)((uint64_t)uVar6 * 0x10 + *(int64_t *)(param_1 + 0xe8));
            if (*puVar7 == uVar9) {
              if (uVar6 != 0xffffffff) goto LAB_1806b477a;
              break;
            }
            uVar6 = *(uint *)(*(int64_t *)(param_1 + 0xf0) + (uint64_t)uVar6 * 4);
          } while (uVar6 != 0xffffffff);
        }
        puVar7 = (ushort *)0x0;
LAB_1806b477a:
        bVar10 = puVar7 != (ushort *)0x0;
        uVar9 = uVar9 + 1;
      } while ((ushort)(uVar9 - uVar8) < param_3);
    } while (puVar7 != (ushort *)0x0);
    local_var_6c = *(int32_t *)(param_1 + 0x130);
    local_var_78 = uVar8;
    if (param_3 != 0) {
      uVar3 = *(uint64_t *)
               (param_2 + (uint64_t)((uint)uVar8 + (uint)(ushort)-uVar8 & 0xffff) * 8);
      _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x38));
      stack_array_80[0] = uVar8;
      puVar7 = (ushort *)UtilitiesSystem_b3b20(param_1 + 0xd8,stack_array_80,acStackX_20);
      if (acStackX_20[0] == '\0') {
        *puVar7 = uVar8;
        *(uint64_t *)(puVar7 + 4) = uVar3;
      }
      uVar2 = *(int32_t *)(param_1 + 0x50);
      local_var_68 = uVar3;
      puVar5 = (uint64_t *)UtilitiesSystem_b3de0(param_1 + 0x98,&local_var_68,acStack_88);
      if (acStack_88[0] == '\0') {
        *puVar5 = uVar3;
        *(int32_t *)(puVar5 + 1) = uVar2;
      }
      local_var_76._0_3_ = CONCAT12(1,uVar8);
      local_var_58 = local_var_76;
      local_var_60 = uVar3;
      if (*(uint *)(param_1 + 0x50) < (*(uint *)(param_1 + 0x54) & 0x7fffffff)) {
        local_var_60._0_4_ = (int32_t)uVar3;
        local_var_60._4_4_ = (int32_t)((uint64_t)uVar3 >> 0x20);
        puVar1 = (int32_t *)
                 (*(int64_t *)(param_1 + 0x48) + (uint64_t)*(uint *)(param_1 + 0x50) * 0x10);
        *puVar1 = (int32_t)local_var_60;
        puVar1[1] = local_var_60._4_4_;
        puVar1[2] = local_var_76;
        puVar1[3] = local_var_54;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      }
      else {
        UtilitiesSystem_b4d20(param_1 + 0x40,&local_var_60);
      }
// WARNING: Subroutine does not return
      _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x38));
    }
  }
// WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x38));
}
// 函数: void UtilitiesSystem_b47b6(void)
void UtilitiesSystem_b47b6(void)
{
  int32_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int16_t *puVar4;
  uint64_t *puVar5;
  int64_t unaff_RBX;
  int16_t unaff_SI;
  char unaff_R12B;
  uint64_t *unaff_R15;
  char acStackX_20 [8];
  int16_t local_var_28;
  uint64_t local_var_30;
  uint64_t local_var_40;
  int32_t local_buffer_48;
  int32_t local_buffer_4c;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  char local_buffer_c8;
  uVar3 = *unaff_R15;
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RBX + 0x38));
  puVar4 = (int16_t *)UtilitiesSystem_b3b20(unaff_RBX + 0xd8,&local_buffer_00000028,&local_buffer_000000c8);
  if (local_buffer_c8 == unaff_R12B) {
    *puVar4 = unaff_SI;
    *(uint64_t *)(puVar4 + 4) = uVar3;
  }
  uVar2 = *(int32_t *)(unaff_RBX + 0x50);
  local_var_40 = uVar3;
  puVar5 = (uint64_t *)UtilitiesSystem_b3de0(unaff_RBX + 0x98,&local_buffer_00000040,acStackX_20);
  if (acStackX_20[0] == unaff_R12B) {
    *puVar5 = uVar3;
    *(int32_t *)(puVar5 + 1) = uVar2;
  }
  local_var_30._2_3_ = CONCAT12(1,unaff_SI);
  local_buffer_50 = local_var_30._2_4_;
  _local_buffer_48 = uVar3;
  if (*(uint *)(unaff_RBX + 0x50) < (*(uint *)(unaff_RBX + 0x54) & 0x7fffffff)) {
    local_buffer_48 = (int32_t)uVar3;
    local_buffer_4c = (int32_t)((uint64_t)uVar3 >> 0x20);
    puVar1 = (int32_t *)
             (*(int64_t *)(unaff_RBX + 0x48) + (uint64_t)*(uint *)(unaff_RBX + 0x50) * 0x10);
    *puVar1 = local_buffer_48;
    puVar1[1] = local_buffer_4c;
    puVar1[2] = local_var_30._2_4_;
    puVar1[3] = local_buffer_54;
    *(int *)(unaff_RBX + 0x50) = *(int *)(unaff_RBX + 0x50) + 1;
  }
  else {
    UtilitiesSystem_b4d20(unaff_RBX + 0x40,&local_buffer_00000048);
  }
// WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RBX + 0x38));
}
// 函数: void UtilitiesSystem_b4927(void)
void UtilitiesSystem_b4927(void)
{
  int64_t unaff_RBX;
// WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RBX + 0x38));
}
int UtilitiesSystem_b4950(int64_t *param_1,byte *param_2)
{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int64_t lVar5;
  int8_t *puVar6;
  char *pcVar7;
  uint64_t *puVar8;
  uint uVar9;
  byte *pbVar10;
  int64_t lVar11;
  int iVar12;
  int iVar13;
  int32_t stack_special_x_8;
  int32_t stack_special_x_10;
  byte *pbStackX_18;
  pbVar10 = &system_buffer_ptr;
  if (param_2 != (byte *)0x0) {
    pbVar10 = param_2;
  }
  if (*(int *)((int64_t)param_1 + 0xc4) != 0) {
    uVar9 = 0x1505;
    bVar2 = *pbVar10;
    pbVar1 = pbVar10;
    while (bVar2 != 0) {
      pbVar1 = pbVar1 + 1;
      uVar9 = uVar9 * 0x21 ^ (uint)bVar2;
      bVar2 = *pbVar1;
    }
    uVar9 = *(uint *)(param_1[0x15] +
                     (uint64_t)(*(int *)((int64_t)param_1 + 0xb4) - 1U & uVar9) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        pcVar7 = *(char **)(param_1[0x13] + (uint64_t)uVar9 * 0x10);
        lVar11 = (int64_t)pbVar10 - (int64_t)pcVar7;
        do {
          cVar3 = *pcVar7;
          cVar4 = pcVar7[lVar11];
          if (cVar3 != cVar4) break;
          pcVar7 = pcVar7 + 1;
        } while (cVar4 != '\0');
        if (cVar3 == cVar4) {
          if ((uVar9 != 0xffffffff) &&
             (lVar11 = (uint64_t)uVar9 * 0x10 + param_1[0x13], lVar11 != 0)) {
            return *(int *)(lVar11 + 8);
          }
          break;
        }
        uVar9 = *(uint *)(param_1[0x14] + (uint64_t)uVar9 * 4);
      } while (uVar9 != 0xffffffff);
    }
  }
  iVar12 = *(int *)((int64_t)param_1 + 0xc4) + 1;
  stack_special_x_10 = iVar12;
  pbStackX_18 = pbVar10;
  puVar8 = (uint64_t *)UtilitiesSystem_b3c70(param_1 + 0x10,&pbStackX_18,&stack_special_x_8);
  if ((char)stack_special_x_8 == '\0') {
    *puVar8 = pbVar10;
    *(int *)(puVar8 + 1) = iVar12;
  }
  lVar5 = param_1[0xf];
  SystemController(lVar5,(*(int *)(lVar5 + 0x18) - *(int *)(lVar5 + 0x10)) + 2);
  **(int16_t **)(lVar5 + 0x18) = 0x3ff1;
  lVar11 = -1;
  *(int64_t *)(lVar5 + 0x18) = *(int64_t *)(lVar5 + 0x18) + 2;
  do {
    lVar5 = lVar11 + 1;
    lVar11 = lVar11 + 1;
  } while (pbVar10[lVar5] != 0);
  lVar5 = param_1[0xf];
  iVar13 = (int)lVar11 + 1;
  stack_special_x_8 = iVar13;
  SystemController(lVar5,(*(int *)(lVar5 + 0x18) - *(int *)(lVar5 + 0x10)) + 4);
  puVar6 = *(int8_t **)(lVar5 + 0x18);
  puVar6[1] = stack_special_x_8._1_1_;
  puVar6[2] = stack_special_x_8._2_1_;
  puVar6[3] = stack_special_x_8._3_1_;
  *puVar6 = (char)iVar13;
  *(int64_t *)(lVar5 + 0x18) = *(int64_t *)(lVar5 + 0x18) + 4;
  lVar11 = param_1[0xf];
  if ((pbVar10 != (byte *)0x0) && (iVar13 != 0)) {
    SystemController(lVar11,(iVar13 - *(int *)(lVar11 + 0x10)) + *(int *)(lVar11 + 0x18));
// WARNING: Subroutine does not return
    memcpy((uint64_t)(uint)(*(int *)(lVar11 + 0x18) - *(int *)(lVar11 + 0x10)) +
           *(int64_t *)(lVar11 + 0x10),pbVar10,iVar13);
  }
  SystemController(lVar11,(*(int *)(lVar11 + 0x18) - *(int *)(lVar11 + 0x10)) + 4);
  puVar6 = *(int8_t **)(lVar11 + 0x18);
  puVar6[1] = stack_special_x_10._1_1_;
  puVar6[2] = stack_special_x_10._2_1_;
  puVar6[3] = stack_special_x_10._3_1_;
  *puVar6 = (char)iVar12;
  *(int64_t *)(lVar11 + 0x18) = *(int64_t *)(lVar11 + 0x18) + 4;
  if (*(uint *)(param_1 + 10) <= (uint)((int)param_1[5] - (int)param_1[4])) {
    UtilitiesSystem_b5bb0(param_1,param_1[4]);
    param_1[5] = param_1[4];
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar12;
}
int UtilitiesSystem_b4a0f(void)
{
  char *pcVar1;
  int64_t lVar2;
  int8_t *puVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  int unaff_R14D;
  int iVar6;
  int iVar7;
  char cStack0000000000000050;
  int8_t local_buffer_51;
  int8_t local_buffer_52;
  int8_t local_buffer_53;
  int iStack0000000000000058;
  iVar6 = unaff_R14D + 1;
  iStack0000000000000058 = iVar6;
  plVar4 = (int64_t *)UtilitiesSystem_b3c70(unaff_RDI + 0x10,&local_buffer_00000060,&local_buffer_00000050);
  if (cStack0000000000000050 == '\0') {
    *plVar4 = unaff_RSI;
    *(int *)(plVar4 + 1) = iVar6;
  }
  lVar2 = unaff_RDI[0xf];
  SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
  **(int16_t **)(lVar2 + 0x18) = 0x3ff1;
  lVar5 = -1;
  *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
  do {
    pcVar1 = (char *)(unaff_RSI + 1 + lVar5);
    lVar5 = lVar5 + 1;
  } while (*pcVar1 != '\0');
  lVar2 = unaff_RDI[0xf];
  iVar7 = (int)lVar5 + 1;
  _cStack0000000000000050 = iVar7;
  SystemController(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 4);
  puVar3 = *(int8_t **)(lVar2 + 0x18);
  puVar3[1] = local_buffer_51;
  puVar3[2] = local_buffer_52;
  puVar3[3] = local_buffer_53;
  *puVar3 = (char)iVar7;
  *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 4;
  lVar5 = unaff_RDI[0xf];
  if ((unaff_RSI != 0) && (iVar7 != 0)) {
    SystemController(lVar5,(iVar7 - *(int *)(lVar5 + 0x10)) + *(int *)(lVar5 + 0x18));
// WARNING: Subroutine does not return
    memcpy((uint64_t)(uint)(*(int *)(lVar5 + 0x18) - *(int *)(lVar5 + 0x10)) +
           *(int64_t *)(lVar5 + 0x10));
  }
  SystemController(lVar5,(*(int *)(lVar5 + 0x18) - *(int *)(lVar5 + 0x10)) + 4);
  puVar3 = *(int8_t **)(lVar5 + 0x18);
  puVar3[1] = iStack0000000000000058._1_1_;
  puVar3[2] = iStack0000000000000058._2_1_;
  puVar3[3] = iStack0000000000000058._3_1_;
  *puVar3 = (char)iVar6;
  *(int64_t *)(lVar5 + 0x18) = *(int64_t *)(lVar5 + 0x18) + 4;
  if (*(uint *)(unaff_RDI + 10) <= (uint)((int)unaff_RDI[5] - (int)unaff_RDI[4])) {
    UtilitiesSystem_b5bb0();
    unaff_RDI[5] = unaff_RDI[4];
    (**(code **)(*unaff_RDI + 0x18))();
  }
  return iVar6;
}
int32_t UtilitiesSystem_b4b61(void)
{
  int64_t *unaff_RDI;
  int32_t unaff_R14D;
  UtilitiesSystem_b5bb0();
  unaff_RDI[5] = unaff_RDI[4];
  (**(code **)(*unaff_RDI + 0x18))();
  return unaff_R14D;
}
// 函数: void UtilitiesSystem_b4bc0(int64_t param_1,int32_t *param_2)
void UtilitiesSystem_b4bc0(int64_t param_1,int32_t *param_2)
{
  uint64_t uVar1;
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x30));
  uVar1 = *(uint64_t *)(param_1 + 0x30);
  *param_2 = *(int32_t *)(param_1 + 0x48);
  *(uint64_t *)(param_2 + 2) = *(uint64_t *)(param_1 + 0x40);
// WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(uVar1);
}
uint64_t * UtilitiesSystem_b4c20(uint64_t *param_1,uint64_t *param_2)
{
  uint uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint uVar7;
  uint64_t *puVar8;
  puVar6 = (uint64_t *)0x0;
  uVar1 = *(uint *)((int64_t)param_1 + 0x14) & 0x7fffffff;
  if (uVar1 == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = uVar1 * 2;
    puVar2 = puVar6;
    if (uVar1 == 0) goto LAB_1806b4c88;
  }
  puVar2 = (uint64_t *)
           (**(code **)(**(int64_t **)*param_1 + 8))
                     (*(int64_t **)*param_1,(uint64_t)uVar7 << 3,&processed_var_6480_ptr,&processed_var_4272_ptr,
                      0x229);
LAB_1806b4c88:
  uVar3 = (uint64_t)*(uint *)(param_1 + 2);
  puVar4 = (uint64_t *)param_1[1];
  if (puVar2 < puVar2 + uVar3) {
    puVar8 = (uint64_t *)(uint64_t)*(uint *)(param_1 + 2);
    if (puVar2 + uVar3 < puVar2) {
      puVar8 = puVar6;
    }
    puVar5 = puVar2;
    if (puVar8 != (uint64_t *)0x0) {
      do {
        puVar6 = (uint64_t *)((int64_t)puVar6 + 1);
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (puVar6 < puVar8);
      uVar3 = (uint64_t)*(uint *)(param_1 + 2);
    }
  }
  puVar2[uVar3] = *param_2;
  if ((-1 < *(int *)((int64_t)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(**(int64_t **)*param_1 + 0x10))();
  }
  uVar1 = *(uint *)(param_1 + 2);
  param_1[1] = puVar2;
  *(uint *)((int64_t)param_1 + 0x14) = uVar7;
  *(uint *)(param_1 + 2) = uVar1 + 1;
  return puVar2 + uVar1;
}
uint64_t * UtilitiesSystem_b4d20(uint64_t *param_1,int32_t *param_2)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint uVar10;
  uint64_t uVar11;
  uVar6 = *(uint *)((int64_t)param_1 + 0x14) & 0x7fffffff;
  if (uVar6 == 0) {
    uVar10 = 1;
  }
  else {
    uVar10 = uVar6 * 2;
    if (uVar6 == 0) {
      puVar7 = (uint64_t *)0x0;
      goto LAB_1806b4d7f;
    }
  }
  puVar7 = (uint64_t *)
           (**(code **)(**(int64_t **)*param_1 + 8))
                     (*(int64_t **)*param_1,(uint64_t)uVar10 << 4,&processed_var_6480_ptr,&processed_var_4272_ptr,
                      0x229);
LAB_1806b4d7f:
  uVar11 = (uint64_t)*(uint *)(param_1 + 2);
  puVar9 = (uint64_t *)param_1[1];
  puVar8 = puVar7;
  if (puVar7 < puVar7 + uVar11 * 2) {
    do {
      uVar4 = *puVar9;
      uVar5 = puVar9[1];
      puVar9 = puVar9 + 2;
      *puVar8 = uVar4;
      puVar8[1] = uVar5;
      puVar8 = puVar8 + 2;
    } while (puVar8 < puVar7 + uVar11 * 2);
    uVar11 = (uint64_t)*(uint *)(param_1 + 2);
  }
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  puVar9 = puVar7 + uVar11 * 2;
  *(int32_t *)puVar9 = *param_2;
  *(int32_t *)((int64_t)puVar9 + 4) = uVar1;
  *(int32_t *)(puVar9 + 1) = uVar2;
  *(int32_t *)((int64_t)puVar9 + 0xc) = uVar3;
  if ((-1 < *(int *)((int64_t)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(**(int64_t **)*param_1 + 0x10))();
  }
  uVar6 = *(uint *)(param_1 + 2);
  *(uint *)((int64_t)param_1 + 0x14) = uVar10;
  param_1[1] = puVar7;
  *(uint *)(param_1 + 2) = uVar6 + 1;
  return puVar7 + (uint64_t)uVar6 * 2;
}
// 函数: void UtilitiesSystem_b4e10(int64_t *param_1,int64_t param_2,uint param_3)
void UtilitiesSystem_b4e10(int64_t *param_1,int64_t param_2,uint param_3)
{
  int64_t lVar1;
  uint uVar2;
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    (**(code **)(*param_1 + 0x18))(param_1);
    uVar2 = *(uint *)(param_1 + 10);
    if (uVar2 <= ((int)param_1[5] - (int)param_1[4]) + param_3) {
      (**(code **)(*param_1 + 8))(param_1);
      uVar2 = *(uint *)(param_1 + 10);
    }
    if (param_3 < uVar2) {
      SystemController(param_1 + 2,((int)param_1[5] - (int)param_1[4]) + param_3);
// WARNING: Subroutine does not return
      memcpy((uint64_t)(uint)((int)param_1[5] - (int)param_1[4]) + param_1[4],param_2,param_3);
    }
    UtilitiesSystem_b5bb0(param_1,param_2,param_3);
  }
  if (lVar1 != 0) {
// WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
  }
  return;
}
// 函数: void UtilitiesSystem_b4ed0(int64_t *param_1,int64_t param_2,uint param_3)
void UtilitiesSystem_b4ed0(int64_t *param_1,int64_t param_2,uint param_3)
{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  if ((param_2 == 0) || (param_3 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x18))();
  uVar1 = *(uint *)(param_1 + 10);
  if (uVar1 <= ((int)param_1[5] - (int)param_1[4]) + param_3) {
    (**(code **)(*param_1 + 8))(param_1);
    uVar1 = *(uint *)(param_1 + 10);
  }
  if (param_3 < uVar1) {
    SystemController(param_1 + 2,((int)param_1[5] - (int)param_1[4]) + param_3);
// WARNING: Subroutine does not return
    memcpy((uint64_t)(uint)((int)param_1[5] - (int)param_1[4]) + param_1[4],param_2,param_3);
  }
  if (*(uint *)(param_1 + 9) != 0) {
    lVar2 = 0;
    uVar3 = (uint64_t)*(uint *)(param_1 + 9);
    do {
      (**(code **)(**(int64_t **)(lVar2 + param_1[8]) + 8))
                (*(int64_t **)(lVar2 + param_1[8]),param_2,param_3);
      lVar2 = lVar2 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}
// 函数: void UtilitiesSystem_b4f80(int64_t param_1,uint64_t param_2,int32_t param_3)
void UtilitiesSystem_b4f80(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0xd8));
  if (*(uint *)(param_1 + 0x1d0) != 0) {
    lVar2 = 0;
    uVar3 = (uint64_t)*(uint *)(param_1 + 0x1d0);
    do {
      plVar1 = *(int64_t **)(lVar2 + *(int64_t *)(param_1 + 0x1c8));
      (**(code **)(*plVar1 + 8))(plVar1,param_2,param_3);
      lVar2 = lVar2 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0xd8));
  return;
}
// 函数: void UtilitiesSystem_b4faf(void)
void UtilitiesSystem_b4faf(void)
{
  uint in_EAX;
  int64_t lVar1;
  uint64_t uVar2;
  int64_t unaff_RDI;
  lVar1 = 0;
  uVar2 = (uint64_t)in_EAX;
  do {
    (**(code **)(**(int64_t **)(lVar1 + *(int64_t *)(unaff_RDI + 0x1c8)) + 8))();
    lVar1 = lVar1 + 8;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RDI + 0xd8));
  return;
}
// 函数: void UtilitiesSystem_b4feb(void)
void UtilitiesSystem_b4feb(void)
{
  int64_t unaff_RDI;
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RDI + 0xd8));
  return;
}
// 函数: void UtilitiesSystem_b5040(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void UtilitiesSystem_b5040(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,int64_t param_6)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  uint64_t local_var_18;
  param_1 = param_1 + 0x18;
  if (param_6 != 0) {
    uVar1 = UtilitiesSystem_b4950(param_1,param_3,param_3,param_4,param_6,param_2);
    uVar2 = UtilitiesSystem_b4950(param_1,param_4);
    local_var_28 = (int32_t)param_6;
    local_var_24 = (int32_t)((uint64_t)param_6 >> 0x20);
    local_var_18 = CONCAT44(param_5,uVar2);
    local_var_20 = param_2;
    local_var_1c = uVar1;
    UtilitiesSystem_b2330(param_1,&local_var_28);
  }
  return;
}