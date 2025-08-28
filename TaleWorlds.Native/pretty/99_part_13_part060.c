#include "SystemDataAdvancedController_definition.h"
/* 函数别名定义: MemoryCacheController */
#define MemoryCacheController MemoryCacheController
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_13_part060.c - 7 个函数
// 函数: void NetworkProtocol_cff60(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void NetworkProtocol_cff60(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  int param_5,uint64_t param_6,int32_t param_7)
{
  int iVar1;
  int64_t lVar2;
  int32_t *puVar3;
  int8_t stack_array_f8 [32];
  uint local_var_d8;
  uint local_var_d0;
  uint local_var_c8;
  uint local_var_c0;
  uint local_var_b8;
  uint local_var_b0;
  uint local_var_a8;
  uint local_var_a0;
  uint local_var_98;
  uint local_var_90;
  int32_t local_var_88;
  uint local_var_84;
  uint local_var_80;
  uint local_var_7c;
  int iStack_78;
  int iStack_74;
  int32_t stack_array_70 [2];
  int8_t stack_array_68 [40];
  uint64_t local_var_40;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  iVar1 = SystemDataFlowProcessor(param_1,5);
  if (((iVar1 == 0) && (iVar1 = SystemDataFlowProcessor(param_1,6), iVar1 == 0)) &&
     (iVar1 = SystemDataFlowProcessor(param_1,7), iVar1 == 0)) {
    stack_array_70[0] = 0x3f800000;
    *(int32_t *)(param_1 + 0x1d8) = param_7;
    iVar1 = SystemCore_3ca90(*(uint64_t *)(param_1 + 0xf0),stack_array_70);
    if (iVar1 == 0) {
      iStack_74 = -1;
      iStack_78 = iVar1;
      NetworkProtocol_56c80(*(int64_t *)(param_1 + 0x170) + 200,*(int64_t *)(param_1 + 0x218) + 0x10,
                    &iStack_78);
      if (iStack_74 == -1) {
        local_var_d8 = param_5;
        iVar1 = NetworkProtocol_ce6a0(param_1,param_2,param_3,param_4);
      }
      else {
        puVar3 = (int32_t *)
                 (*(int64_t *)(*(int64_t *)(param_1 + 0x218) + 0xd8) + (int64_t)iStack_74 * 0x14)
        ;
        local_var_88 = *puVar3;
        local_var_84 = puVar3[1];
        local_var_80 = puVar3[2];
        local_var_7c = puVar3[3];
        *(int *)(*(int64_t *)(param_1 + 0x1a0) + 0x1c) = iStack_74;
        lVar2 = (**(code **)(**(int64_t **)(param_1 + 0x178) + 0x128))
                          (*(int64_t **)(param_1 + 0x178),&local_var_88,
                           CONCAT71((int7)(int3)((uint)iStack_74 >> 8),1));
        if (lVar2 == 0) {
          local_var_90 = local_var_7c >> 0x18;
          local_var_b0 = local_var_80 >> 0x18;
          local_var_98 = local_var_7c >> 0x10 & 0xff;
          local_var_a0 = local_var_7c >> 8 & 0xff;
          local_var_a8 = local_var_7c & 0xff;
          local_var_b8 = local_var_80 >> 0x10 & 0xff;
          local_var_c0 = local_var_80 >> 8 & 0xff;
          local_var_d0 = local_var_84 >> 0x10;
          local_var_c8 = local_var_80 & 0xff;
          local_var_d8 = local_var_84 & 0xffff;
// WARNING: Subroutine does not return
          SystemDataValidator(stack_array_68,0x27,&processed_var_8960_ptr,local_var_88);
        }
        local_var_d0 = 0;
        local_var_d8 = iStack_78;
        iVar1 = NetworkProtocol_ce5b0(param_1,lVar2,param_2,param_3);
      }
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x1d8) == 0) {
          *(int8_t *)(param_1 + 0x1dd) = 1;
        }
        else {
          puVar3 = (int32_t *)MemoryCacheController0();
          local_var_d8 = 0;
          NetworkProtocol_ce830(param_1,param_3,param_3,*puVar3);
        }
      }
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_f8);
}
// 函数: void NetworkProtocol_d001f(void)
void NetworkProtocol_d001f(void)
{
  int32_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_R13;
  int32_t extraout_XMM0_Da;
  int32_t local_buffer_70;
  uint local_buffer_74;
  int32_t local_buffer_78;
  int32_t local_buffer_7c;
  int iStack0000000000000084;
  uint64_t local_buffer_b8;
  iStack0000000000000084 = -1;
  NetworkProtocol_56c80();
  if (iStack0000000000000084 == -1) {
    iVar2 = NetworkProtocol_ce6a0();
  }
  else {
    puVar1 = (int32_t *)
             (*(int64_t *)(*(int64_t *)(unaff_R13 + 0x218) + 0xd8) +
             (int64_t)iStack0000000000000084 * 0x14);
    local_buffer_70 = *puVar1;
    local_buffer_74 = puVar1[1];
    local_buffer_78 = puVar1[2];
    local_buffer_7c = puVar1[3];
    *(int *)(*(int64_t *)(unaff_R13 + 0x1a0) + 0x1c) = iStack0000000000000084;
    lVar3 = (**(code **)(**(int64_t **)(unaff_R13 + 0x178) + 0x128))
                      (*(int64_t **)(unaff_R13 + 0x178),&local_buffer_00000070,
                       CONCAT71((int7)(int3)((uint)iStack0000000000000084 >> 8),1));
    if (lVar3 == 0) {
// WARNING: Subroutine does not return
      SystemDataValidator(&local_buffer_00000090,0x27,&processed_var_8960_ptr,local_buffer_70,
                    local_buffer_74 & 0xffff);
    }
    iVar2 = NetworkProtocol_ce5b0(extraout_XMM0_Da,lVar3);
  }
  if (iVar2 == 0) {
    if (*(int *)(unaff_R13 + 0x1d8) == 0) {
      *(int8_t *)(unaff_R13 + 0x1dd) = 1;
    }
    else {
      MemoryCacheController0();
      NetworkProtocol_ce830();
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_b8 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_d0087(uint64_t param_1,int64_t param_2,int32_t param_3)
void NetworkProtocol_d0087(uint64_t param_1,int64_t param_2,int32_t param_3)
{
  int32_t *puVar1;
  int iVar2;
  int64_t in_RAX;
  int64_t lVar3;
  int64_t unaff_R13;
  int32_t extraout_XMM0_Da;
  int32_t local_buffer_70;
  uint local_buffer_74;
  int32_t local_buffer_78;
  int32_t local_buffer_7c;
  int32_t local_buffer_80;
  uint64_t local_buffer_b8;
  puVar1 = (int32_t *)(*(int64_t *)(in_RAX + 0xd8) + param_2 * 4);
  local_buffer_70 = *puVar1;
  local_buffer_74 = puVar1[1];
  local_buffer_78 = puVar1[2];
  local_buffer_7c = puVar1[3];
  *(int32_t *)(*(int64_t *)(unaff_R13 + 0x1a0) + 0x1c) = param_3;
  lVar3 = (**(code **)(**(int64_t **)(unaff_R13 + 0x178) + 0x128))
                    (*(int64_t **)(unaff_R13 + 0x178),&local_buffer_00000070,1);
  if (lVar3 != 0) {
    iVar2 = NetworkProtocol_ce5b0(extraout_XMM0_Da,lVar3);
    if (iVar2 == 0) {
      if (*(int *)(unaff_R13 + 0x1d8) == 0) {
        *(int8_t *)(unaff_R13 + 0x1dd) = 1;
      }
      else {
        MemoryCacheController0();
        NetworkProtocol_ce830();
      }
    }
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_buffer_b8 ^ (uint64_t)&local_buffer_00000000);
  }
// WARNING: Subroutine does not return
  SystemDataValidator(&local_buffer_00000090,0x27,&processed_var_8960_ptr,local_buffer_70,
                local_buffer_74 & 0xffff);
}
// 函数: void NetworkProtocol_d0128(void)
void NetworkProtocol_d0128(void)
{
  uint local_var_28;
  uint local_var_30;
  uint64_t local_buffer_70;
  byte local_buffer_78;
  local_var_30 = (uint)local_buffer_78;
  local_var_28 = (uint)local_buffer_70._6_2_;
// WARNING: Subroutine does not return
  SystemDataValidator();
}
// 函数: void NetworkProtocol_d0180(void)
void NetworkProtocol_d0180(void)
{
  int iVar1;
  int64_t unaff_R13;
  uint64_t local_buffer_b8;
  iVar1 = NetworkProtocol_ce5b0();
  if (iVar1 == 0) {
    if (*(int *)(unaff_R13 + 0x1d8) == 0) {
      *(int8_t *)(unaff_R13 + 0x1dd) = 1;
    }
    else {
      MemoryCacheController0();
      NetworkProtocol_ce830();
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_b8 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_d01ae(void)
void NetworkProtocol_d01ae(void)
{
  int64_t unaff_R13;
  uint64_t local_buffer_b8;
  if (*(int *)(unaff_R13 + 0x1d8) == 0) {
    *(int8_t *)(unaff_R13 + 0x1dd) = 1;
  }
  else {
    MemoryCacheController0();
    NetworkProtocol_ce830();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_b8 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_d01ec(void)
void NetworkProtocol_d01ec(void)
{
  uint64_t local_buffer_b8;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_b8 ^ (uint64_t)&local_buffer_00000000);
}