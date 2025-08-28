#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 05_networking_part041.c - 8 个函数
// 函数: void NetworkProtocol_629a0(int64_t param_1,uint64_t param_2,char param_3)
void NetworkProtocol_629a0(int64_t param_1,uint64_t param_2,char param_3)
{
  uint uVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int8_t stack_array_e8 [32];
  uint local_var_c8;
  uint local_var_c0;
  uint local_var_b8;
  uint local_var_b0;
  uint local_var_a8;
  uint local_var_a0;
  uint local_var_98;
  uint local_var_90;
  uint local_var_88;
  uint local_var_80;
  int32_t local_var_78;
  ushort local_var_74;
  ushort local_var_72;
  byte bStack_70;
  byte bStack_6f;
  byte bStack_6e;
  byte bStack_6d;
  byte bStack_6c;
  byte bStack_6b;
  byte bStack_6a;
  byte bStack_69;
  int8_t stack_array_68 [40];
  uint64_t local_var_40;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  plVar3 = (int64_t *)NetworkProtocol_5fea0();
  if (plVar3 != (int64_t *)0x0) {
    *(uint *)((int64_t)plVar3 + 0x1c) = *(uint *)((int64_t)plVar3 + 0x1c) & 0xfffffffa;
    (**(code **)(*(int64_t *)plVar3[2] + 0x30))((int64_t *)plVar3[2],&local_var_78);
    lVar4 = (**(code **)(**(int64_t **)(param_1 + 0x458) + 0x128))
                      (*(int64_t **)(param_1 + 0x458),&local_var_78,1);
    if (lVar4 == 0) {
      local_var_80 = (uint)bStack_69;
      local_var_88 = (uint)bStack_6a;
      local_var_90 = (uint)bStack_6b;
      local_var_98 = (uint)bStack_6c;
      local_var_a0 = (uint)bStack_6d;
      local_var_a8 = (uint)bStack_6e;
      local_var_b0 = (uint)bStack_6f;
      local_var_b8 = (uint)bStack_70;
      local_var_c0 = (uint)local_var_72;
      local_var_c8 = (uint)local_var_74;
// WARNING: Subroutine does not return
      SystemDataValidator(stack_array_68,0x27,&processed_var_8960_ptr,local_var_78);
    }
    if (*(int *)(lVar4 + 0xd0) == 0) {
      uVar1 = *(uint *)((int64_t)plVar3 + 0x1c);
      (**(code **)(*(int64_t *)plVar3[2] + 0x30))((int64_t *)plVar3[2],&local_var_78);
      iVar2 = NetworkProtocol_caa20(param_1 + 0x378 + (uint64_t)(~(uVar1 >> 1) & 1) * 0x80,&local_var_78);
      if (iVar2 == 0) {
        local_var_c8 = CONCAT31(local_var_c8._1_3_,1);
        *(int64_t *)plVar3[1] = *plVar3;
        *(int64_t *)(*plVar3 + 8) = plVar3[1];
        plVar3[1] = (int64_t)plVar3;
        *plVar3 = (int64_t)plVar3;
        *(int64_t **)plVar3[1] = plVar3;
        *(int64_t *)(*plVar3 + 8) = plVar3[1];
        plVar3[1] = (int64_t)plVar3;
        *plVar3 = (int64_t)plVar3;
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar3,&rendering_buffer_2624_ptr,0x8a4);
      }
    }
    else if (param_3 != '\0') {
      plVar3[4] = 0;
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_e8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_629e9(int64_t *param_1)
void NetworkProtocol_629e9(int64_t *param_1)
{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  char unaff_R13B;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  int32_t local_buffer_70;
  int16_t local_buffer_74;
  int8_t local_buffer_78;
  uint64_t local_buffer_a8;
  (**(code **)(*param_1 + 0x30))();
  lVar3 = (**(code **)(**(int64_t **)(unaff_R15 + 0x458) + 0x128))
                    (*(int64_t **)(unaff_R15 + 0x458),&local_buffer_00000070,1);
  if (lVar3 == 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(&local_buffer_00000080,0x27,&processed_var_8960_ptr,local_buffer_70,local_buffer_74
                 );
  }
  if (*(int *)(lVar3 + 0xd0) == 0) {
    uVar1 = *(uint *)((int64_t)unaff_R14 + 0x1c);
    (**(code **)(*(int64_t *)unaff_R14[2] + 0x30))((int64_t *)unaff_R14[2],&local_buffer_00000070);
    iVar2 = NetworkProtocol_caa20(unaff_R15 + 0x378 + (uint64_t)(~(uVar1 >> 1) & 1) * 0x80,&local_buffer_00000070
                         );
    if (iVar2 == 0) {
      *(int64_t *)unaff_R14[1] = *unaff_R14;
      *(int64_t *)(*unaff_R14 + 8) = unaff_R14[1];
      unaff_R14[1] = (int64_t)unaff_R14;
      *unaff_R14 = (int64_t)unaff_R14;
      *(int64_t **)unaff_R14[1] = unaff_R14;
      *(int64_t *)(*unaff_R14 + 8) = unaff_R14[1];
      unaff_R14[1] = (int64_t)unaff_R14;
      *unaff_R14 = (int64_t)unaff_R14;
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
    }
  }
  else if (unaff_R13B != '\0') {
    unaff_R14[4] = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_a8 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_629f1(int64_t *param_1)
void NetworkProtocol_629f1(int64_t *param_1)
{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  char unaff_R13B;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  int32_t local_buffer_70;
  int16_t local_buffer_74;
  int8_t local_buffer_78;
  uint64_t local_buffer_a8;
  (**(code **)(*param_1 + 0x30))();
  lVar3 = (**(code **)(**(int64_t **)(unaff_R15 + 0x458) + 0x128))
                    (*(int64_t **)(unaff_R15 + 0x458),&local_buffer_00000070,1);
  if (lVar3 == 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(&local_buffer_00000080,0x27,&processed_var_8960_ptr,local_buffer_70,local_buffer_74
                 );
  }
  if (*(int *)(lVar3 + 0xd0) == 0) {
    uVar1 = *(uint *)((int64_t)unaff_R14 + 0x1c);
    (**(code **)(*(int64_t *)unaff_R14[2] + 0x30))((int64_t *)unaff_R14[2],&local_buffer_00000070);
    iVar2 = NetworkProtocol_caa20(unaff_R15 + 0x378 + (uint64_t)(~(uVar1 >> 1) & 1) * 0x80,&local_buffer_00000070
                         );
    if (iVar2 == 0) {
      *(int64_t *)unaff_R14[1] = *unaff_R14;
      *(int64_t *)(*unaff_R14 + 8) = unaff_R14[1];
      unaff_R14[1] = (int64_t)unaff_R14;
      *unaff_R14 = (int64_t)unaff_R14;
      *(int64_t **)unaff_R14[1] = unaff_R14;
      *(int64_t *)(*unaff_R14 + 8) = unaff_R14[1];
      unaff_R14[1] = (int64_t)unaff_R14;
      *unaff_R14 = (int64_t)unaff_R14;
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
    }
  }
  else if (unaff_R13B != '\0') {
    unaff_R14[4] = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_a8 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_62a7d(void)
void NetworkProtocol_62a7d(void)
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
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_62ad1(void)
void NetworkProtocol_62ad1(void)
{
  uint uVar1;
  int iVar2;
  int64_t unaff_R12;
  char unaff_R13B;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  uint64_t local_buffer_a8;
  if (*(int *)(unaff_R12 + 0xd0) == 0) {
    uVar1 = *(uint *)((int64_t)unaff_R14 + 0x1c);
    (**(code **)(*(int64_t *)unaff_R14[2] + 0x30))((int64_t *)unaff_R14[2],&local_buffer_00000070);
    iVar2 = NetworkProtocol_caa20(unaff_R15 + 0x378 + (uint64_t)(~(uVar1 >> 1) & 1) * 0x80,&local_buffer_00000070
                         );
    if (iVar2 == 0) {
      *(int64_t *)unaff_R14[1] = *unaff_R14;
      *(int64_t *)(*unaff_R14 + 8) = unaff_R14[1];
      unaff_R14[1] = (int64_t)unaff_R14;
      *unaff_R14 = (int64_t)unaff_R14;
      *(int64_t **)unaff_R14[1] = unaff_R14;
      *(int64_t *)(*unaff_R14 + 8) = unaff_R14[1];
      unaff_R14[1] = (int64_t)unaff_R14;
      *unaff_R14 = (int64_t)unaff_R14;
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
    }
  }
  else if (unaff_R13B != '\0') {
    unaff_R14[4] = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_a8 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_62ae8(void)
void NetworkProtocol_62ae8(void)
{
  uint uVar1;
  int iVar2;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  uint64_t local_buffer_a8;
  uVar1 = *(uint *)((int64_t)unaff_R14 + 0x1c);
  (**(code **)(*(int64_t *)unaff_R14[2] + 0x30))((int64_t *)unaff_R14[2],&local_buffer_00000070);
  iVar2 = NetworkProtocol_caa20(unaff_R15 + 0x378 + (uint64_t)(~(uVar1 >> 1) & 1) * 0x80,&local_buffer_00000070);
  if (iVar2 == 0) {
    *(int64_t *)unaff_R14[1] = *unaff_R14;
    *(int64_t *)(*unaff_R14 + 8) = unaff_R14[1];
    unaff_R14[1] = (int64_t)unaff_R14;
    *unaff_R14 = (int64_t)unaff_R14;
    *(int64_t **)unaff_R14[1] = unaff_R14;
    *(int64_t *)(*unaff_R14 + 8) = unaff_R14[1];
    unaff_R14[1] = (int64_t)unaff_R14;
    *unaff_R14 = (int64_t)unaff_R14;
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_a8 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_62b96(void)
void NetworkProtocol_62b96(void)
{
  uint64_t local_buffer_a8;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_a8 ^ (uint64_t)&local_buffer_00000000);
}
uint64_t NetworkProtocol_62bc0(int64_t param_1,float param_2)
{
  uint64_t uVar1;
  float fVar2;
  if (param_2 != *(float *)(param_1 + 0x2f8)) {
    *(float *)(param_1 + 0x2f8) = param_2;
    if (*(int64_t *)(param_1 + 0x2b0) != 0) {
      param_2 = param_2 * *(float *)(param_1 + 0x2fc);
      fVar2 = 0.0;
      if ((0.0 <= param_2) && (fVar2 = param_2, 100.0 <= param_2)) {
        fVar2 = 100.0;
      }
      uVar1 = SystemFunction_000180853cc0(*(int64_t *)(param_1 + 0x2b0),fVar2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
  }
  return 0;
}
uint64_t NetworkProtocol_62c50(uint64_t param_1,int32_t param_2)
{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  int aiStackX_18 [2];
  uint64_t stack_special_x_20;
  iVar3 = 0;
  aiStackX_18[0] = 0;
  uVar1 = SystemCore_3f570(param_1,aiStackX_18);
  if ((int)uVar1 == 0) {
    iVar2 = iVar3;
    if (0 < aiStackX_18[0]) {
      do {
        stack_special_x_20 = 0;
        uVar1 = SystemCore_3f370(param_1,iVar2,&stack_special_x_20);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = NetworkProtocol_62c50(stack_special_x_20,param_2);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < aiStackX_18[0]);
    }
    aiStackX_18[0] = 0;
    uVar1 = SystemCore_3f4a0(param_1,aiStackX_18);
    if ((int)uVar1 == 0) {
      if (0 < aiStackX_18[0]) {
        do {
          stack_special_x_20 = 0;
          uVar1 = SystemCore_3f240(param_1,iVar3,&stack_special_x_20);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          uVar1 = SystemCore_3ff60(stack_special_x_20,param_2);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < aiStackX_18[0]);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}
// WARNING: Removing unreachable block (ram,0x000180862ce0)
// WARNING: Removing unreachable block (ram,0x000180862cf8)
// WARNING: Removing unreachable block (ram,0x000180862d08)
uint64_t NetworkProtocol_62c75(void)
{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t unaff_RBP;
  int32_t unaff_ESI;
  int local_buffer_50;
  uVar2 = (uint)unaff_RBP;
  uVar3 = unaff_RBP & 0xffffffff;
  while( true ) {
    if (local_buffer_50 <= (int)uVar2) {
      uVar1 = SystemCore_3f4a0();
      if ((int)uVar1 == 0) {
        uVar1 = 0;
      }
      return uVar1;
    }
    uVar1 = SystemCore_3f370();
    if ((int)uVar1 != 0) break;
    uVar1 = NetworkProtocol_62c50(unaff_RBP,unaff_ESI);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (uint64_t)uVar2;
  }
  return uVar1;
}
// 函数: void NetworkProtocol_62d17(void)
void NetworkProtocol_62d17(void)
{
  return;
}
uint64_t NetworkProtocol_62d20(int64_t param_1,uint64_t param_2)
{
  uint64_t uVar1;
  int iVar2;
  iVar2 = (int)param_2;
  if (iVar2 != *(int *)(param_1 + 0x2e0)) {
    *(int *)(param_1 + 0x2e0) = iVar2;
    if (iVar2 == -1) {
      param_2 = (uint64_t)*(uint *)(*(int64_t *)(param_1 + 0x88) + 0xdc);
    }
    uVar1 = NetworkProtocol_62c50(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),param_2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}