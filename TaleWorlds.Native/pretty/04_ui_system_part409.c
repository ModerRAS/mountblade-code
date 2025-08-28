#include "SystemDataAdvancedInitializer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part409.c - 12 个函数
// 函数: void function_893080(int64_t param_1,int64_t param_2)
void function_893080(int64_t param_1,int64_t param_2)
{
  int iVar1;
  int64_t lVar2;
  uint64_t stack_special_x_8;
  iVar1 = SystemFunction_00018088c530(*(int32_t *)(param_1 + 0x10));
  if (iVar1 == 0) {
    if (stack_special_x_8 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = stack_special_x_8 + -8;
    }
    *(int8_t *)(lVar2 + 0xbc) = *(int8_t *)(param_1 + 0x18);
// WARNING: Subroutine does not return
    SystemResourceHandler(*(uint64_t *)(param_2 + 0x98),param_1);
  }
  return;
}
uint64_t function_8930e0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  float fVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t unaff_RDI;
  int64_t lStackX_8;
  fVar1 = *(float *)(param_1 + 0x18);
  lStackX_8 = CONCAT44(lStackX_8._4_4_,fVar1);
  if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  if ((fVar1 < 0.0) || (3.4028235e+38 <= fVar1)) {
    return 0x1f;
  }
  uVar2 = SystemFunction_00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (lStackX_8 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lStackX_8 + -8;
  }
  *(int32_t *)(lVar3 + 0x90) = *(int32_t *)(param_1 + 0x18);
  lVar3 = *(int64_t *)(param_2 + 0x98);
  if ((*(int *)(lVar3 + 0x180) != 0) || (*(int *)(lVar3 + 0x184) != 0)) {
    lStackX_8 = 0;
    RenderingSystem_TextureManager(&lStackX_8,param_1,param_3,param_4,unaff_RDI);
    if (lStackX_8 == *(int64_t *)((int64_t)*(int *)(lVar3 + 0x17c) * 8 + 0x180c4f450)) {
      uVar2 = function_88dd60(lVar3,param_1);
      if ((int)uVar2 == 0) {
        return 0;
      }
      return uVar2;
    }
  }
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xfU & 0xfffffff0;
  uVar2 = SystemFunction_0001808e64d0(*(uint64_t *)(lVar3 + 0x1e0));
  if ((int)uVar2 == 0) {
    return 0;
  }
  return uVar2;
}
uint64_t function_893190(int64_t param_1,int64_t param_2)
{
  float fVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lStackX_8;
  fVar1 = *(float *)(param_1 + 0x1c);
  lStackX_8 = CONCAT44(lStackX_8._4_4_,fVar1);
  if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  switch(*(int32_t *)(param_1 + 0x18)) {
  case 0:
    if ((0.0 <= fVar1) && (fVar1 <= 256.0)) goto code_r0x00018089322c;
    goto joined_r0x00018089322a;
  case 1:
  case 2:
  case 3:
  case 4:
    break;
  case 5:
    break;
  default:
    goto code_r0x000180893206;
  }
  if (fVar1 < 0.0) {
joined_r0x00018089322a:
    if (fVar1 != -1.0) {
code_r0x000180893206:
      return 0x1f;
    }
  }
code_r0x00018089322c:
  uVar2 = SystemFunction_00018088c530(*(int32_t *)(param_1 + 0x10));
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (lStackX_8 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lStackX_8 + -8;
  }
  *(int32_t *)(lVar3 + 0xa4 + (int64_t)*(int *)(param_1 + 0x18) * 4) =
       *(int32_t *)(param_1 + 0x1c);
  lVar3 = *(int64_t *)(param_2 + 0x98);
  if ((*(int *)(lVar3 + 0x180) != 0) || (*(int *)(lVar3 + 0x184) != 0)) {
    lStackX_8 = 0;
    RenderingSystem_TextureManager(&lStackX_8);
    if (lStackX_8 == *(int64_t *)((int64_t)*(int *)(lVar3 + 0x17c) * 8 + 0x180c4f450)) {
      uVar2 = function_88dd60(lVar3,param_1);
      if ((int)uVar2 == 0) {
        return 0;
      }
      return uVar2;
    }
  }
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xfU & 0xfffffff0;
  uVar2 = SystemFunction_0001808e64d0(*(uint64_t *)(lVar3 + 0x1e0));
  if ((int)uVar2 == 0) {
    return 0;
  }
  return uVar2;
}
uint64_t function_893290(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lStackX_8;
  if (3 < *(uint *)(param_1 + 0x18)) {
    return 0x1f;
  }
  lStackX_8 = CONCAT44(lStackX_8._4_4_,*(uint *)(param_1 + 0x1c));
  if ((*(uint *)(param_1 + 0x1c) & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  uVar1 = SystemFunction_00018088c530(*(int32_t *)(param_1 + 0x10));
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (lStackX_8 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lStackX_8 + -8;
  }
  *(int32_t *)(lVar2 + 0x94 + (int64_t)*(int *)(param_1 + 0x18) * 4) =
       *(int32_t *)(param_1 + 0x1c);
  lVar2 = *(int64_t *)(param_2 + 0x98);
  if ((*(int *)(lVar2 + 0x180) != 0) || (*(int *)(lVar2 + 0x184) != 0)) {
    lStackX_8 = 0;
    RenderingSystem_TextureManager(&lStackX_8);
    if (lStackX_8 == *(int64_t *)((int64_t)*(int *)(lVar2 + 0x17c) * 8 + 0x180c4f450)) {
      uVar1 = function_88dd60(lVar2,param_1);
      if ((int)uVar1 == 0) {
        return 0;
      }
      return uVar1;
    }
  }
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xfU & 0xfffffff0;
  uVar1 = SystemFunction_0001808e64d0(*(uint64_t *)(lVar2 + 0x1e0));
  if ((int)uVar1 == 0) {
    return 0;
  }
  return uVar1;
}
uint64_t function_893330(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  int64_t lVar2;
  uint stack_special_x_8;
  int32_t stack_special_x_c;
  stack_special_x_8 = *(uint *)(param_1 + 0x18);
  if ((stack_special_x_8 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  uVar1 = SystemFunction_00018088c530(*(int32_t *)(param_1 + 0x10),&stack_special_x_8);
  if ((int)uVar1 == 0) {
    if (CONCAT44(stack_special_x_c,stack_special_x_8) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = CONCAT44(stack_special_x_c,stack_special_x_8) + -8;
    }
    *(int32_t *)(lVar2 + 0x8c) = *(int32_t *)(param_1 + 0x18);
// WARNING: Subroutine does not return
    SystemResourceHandler(*(uint64_t *)(param_2 + 0x98),param_1);
  }
  return uVar1;
}
// 函数: void function_8933c0(int64_t param_1,int64_t param_2)
void function_8933c0(int64_t param_1,int64_t param_2)
{
  int iVar1;
  int64_t lStackX_8;
  iVar1 = SystemFunction_00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if (iVar1 == 0) {
    if (lStackX_8 != 0) {
      lStackX_8 = lStackX_8 + -8;
    }
    *(int *)(lStackX_8 + 0x84) = *(int *)(lStackX_8 + 0x84) + 1;
    *(int8_t *)(lStackX_8 + 0xbd) = 1;
// WARNING: Subroutine does not return
    SystemResourceHandler(*(uint64_t *)(param_2 + 0x98),param_1);
  }
  return;
}
// 函数: void function_893420(int64_t param_1,int64_t param_2)
void function_893420(int64_t param_1,int64_t param_2)
{
  int iVar1;
  int64_t lStackX_8;
  iVar1 = SystemFunction_00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if (iVar1 == 0) {
    if (lStackX_8 != 0) {
      lStackX_8 = lStackX_8 + -8;
    }
    *(int *)(lStackX_8 + 0x84) = *(int *)(lStackX_8 + 0x84) + 1;
    *(int8_t *)(lStackX_8 + 0xbd) = 0;
// WARNING: Subroutine does not return
    SystemResourceHandler(*(uint64_t *)(param_2 + 0x98),param_1);
  }
  return;
}
uint64_t function_893480(int64_t param_1,int64_t param_2)
{
  float fVar1;
  int64_t lVar2;
  uint64_t uVar3;
  float fVar4;
  uint stack_special_x_8;
  int32_t stack_special_x_c;
  stack_special_x_8 = *(uint *)(param_1 + 0x14);
  if ((stack_special_x_8 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  uVar3 = SystemFunction_00018088c530(*(int32_t *)(param_1 + 0x10),&stack_special_x_8);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  lVar2 = *(int64_t *)(CONCAT44(stack_special_x_c,stack_special_x_8) + 0x10);
  if (lVar2 == 0) {
    return 0x1e;
  }
  if ((*(byte *)(lVar2 + 0x34) & 0x11) != 0) {
    return 0x1f;
  }
  fVar1 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(lVar2 + 0x38);
  if ((*(float *)(lVar2 + 0x38) <= fVar1) &&
     (fVar4 = *(float *)(lVar2 + 0x3c), fVar1 <= *(float *)(lVar2 + 0x3c))) {
    fVar4 = fVar1;
  }
  *(float *)(param_1 + 0x14) = fVar4;
  *(float *)(CONCAT44(stack_special_x_c,stack_special_x_8) + 4) = fVar4;
// WARNING: Subroutine does not return
  SystemResourceHandler(*(uint64_t *)(param_2 + 0x98),param_1);
}
uint64_t function_893540(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *(int32_t *)(param_1 + 0x10);
  local_var_14 = *(int32_t *)(param_1 + 0x14);
  local_var_10 = *(int32_t *)(param_1 + 0x18);
  local_var_c = *(int32_t *)(param_1 + 0x1c);
  lVar1 = (**(code **)(**(int64_t **)(param_2 + 800) + 600))
                    (*(int64_t **)(param_2 + 800),&local_var_18,1);
  if ((lVar1 == 0) || (*(int64_t *)(lVar1 + 0x2e8) == 0)) {
    uVar2 = 0x4a;
  }
  else {
    uVar2 = SystemFunction_00018088c500(*(int64_t *)(lVar1 + 0x2e8),param_1 + 0x20);
    if ((int)uVar2 == 0) {
      uVar2 = RenderingSystem_TextureManager(*(uint64_t *)(param_2 + 0x98),param_1);
      return uVar2;
    }
  }
  return uVar2;
}
uint64_t function_8935c0(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *(int32_t *)(param_1 + 0x10);
  local_var_14 = *(int32_t *)(param_1 + 0x14);
  local_var_10 = *(int32_t *)(param_1 + 0x18);
  local_var_c = *(int32_t *)(param_1 + 0x1c);
  lVar1 = (**(code **)(**(int64_t **)(param_2 + 800) + 600))
                    (*(int64_t **)(param_2 + 800),&local_var_18,1);
  if ((lVar1 == 0) || (*(int64_t *)(lVar1 + 0x2e8) == 0)) {
    return 0x4a;
  }
  uVar2 = SystemFunction_00018088c500(*(int64_t *)(lVar1 + 0x2e8),param_1 + 0x20);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  lVar1 = *(int64_t *)(param_2 + 0x98);
  if (*(int *)(lVar1 + 0x200) != 0) {
    if (((*(int *)(lVar1 + 0x180) == 0) && (*(int *)(lVar1 + 0x184) == 0)) ||
       (RenderingSystem_TextureManager(&local_buffer_00000008),
       *(int64_t *)((int64_t)*(int *)(lVar1 + 0x17c) * 8 + 0x180c4f450) != 0)) {
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xfU & 0xfffffff0;
      uVar2 = SystemFunction_0001808e64d0(*(uint64_t *)(lVar1 + 0x1e0));
    }
    else {
      uVar2 = function_88dd60(lVar1,param_1);
    }
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}
// 函数: void function_893640(int64_t param_1,int64_t param_2)
void function_893640(int64_t param_1,int64_t param_2)
{
  int iVar1;
  uint64_t stack_special_x_8;
  iVar1 = function_894860(param_2,param_1 + 0x10,&stack_special_x_8);
  if (iVar1 == 0) {
    iVar1 = SystemFunction_00018088c500(stack_special_x_8,param_1 + 0x20);
    if (iVar1 == 0) {
// WARNING: Subroutine does not return
      SystemResourceHandler(*(uint64_t *)(param_2 + 0x98),param_1);
    }
  }
  return;
}
// 函数: void function_8936a0(int64_t param_1,int64_t param_2)
void function_8936a0(int64_t param_1,int64_t param_2)
{
  int iVar1;
  int64_t lStackX_8;
  iVar1 = function_8949c0(param_2,param_1 + 0x10,&lStackX_8);
  if (iVar1 == 0) {
    iVar1 = SystemFunction_00018088c500(*(uint64_t *)(lStackX_8 + 0xd0),param_1 + 0x20);
    if (iVar1 == 0) {
      RenderingSystem_TextureManager(*(uint64_t *)(param_2 + 0x98),param_1);
    }
  }
  return;
}
// 函数: void function_893700(int64_t param_1,int64_t param_2)
void function_893700(int64_t param_1,int64_t param_2)
{
  int iVar1;
  uint64_t stack_special_x_8;
  iVar1 = function_894b00(param_2,param_1 + 0x10,&stack_special_x_8);
  if (iVar1 == 0) {
    iVar1 = SystemFunction_00018088c500(stack_special_x_8,param_1 + 0x20);
    if (iVar1 == 0) {
// WARNING: Subroutine does not return
      SystemResourceHandler(*(uint64_t *)(param_2 + 0x98),param_1);
    }
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x000180893865)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_893760(int64_t param_1,int64_t param_2)
{
  int iVar1;
  int64_t lVar2;
  int64_t lStackX_8;
  if ((((*(int64_t *)(param_1 + 0x28) != 0) && (*(int64_t *)(param_1 + 0x30) != 0)) &&
      (*(int64_t *)(param_1 + 0x38) != 0)) && (*(int64_t *)(param_1 + 0x40) != 0)) {
    if (*(int *)(param_1 + 0x20) < 1) {
      iVar1 = function_8de900(param_2,param_1 + 0x4c);
      if ((iVar1 == 0) &&
         (iVar1 = SystemFunction_00018088c530(*(int32_t *)(param_1 + 0x4c),&lStackX_8), iVar1 == 0)) {
        if (*(int *)(lStackX_8 + 0x30) == 1) {
          *(int32_t *)(lStackX_8 + 0x30) = 2;
        }
// WARNING: Subroutine does not return
        SystemResourceHandler(*(uint64_t *)(param_2 + 0x98),param_1);
      }
    }
    else if (*(int64_t *)(param_1 + 0x18) == 0) {
      iVar1 = 0x1f;
    }
    else {
      lVar2 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int *)(param_1 + 0x20),
                            &processed_var_7712_ptr,0x315,0,0,1);
      if (lVar2 != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar2,*(uint64_t *)(param_1 + 0x18),(int64_t)*(int *)(param_1 + 0x20));
      }
      iVar1 = 0x26;
    }
    return iVar1;
  }
  return 0x1f;
}
// WARNING: Removing unreachable block (ram,0x000180893865)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_89379d(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  int64_t lVar2;
  int64_t unaff_RDI;
  int64_t unaff_R15;
  int64_t local_buffer_60;
  if ((int)param_2 < 1) {
    iVar1 = function_8de900();
    if ((iVar1 == 0) &&
       (iVar1 = SystemFunction_00018088c530(*(int32_t *)(unaff_RDI + 0x4c),&local_buffer_00000060), iVar1 == 0)
       ) {
      if (*(int *)(local_buffer_60 + 0x30) == 1) {
        *(int32_t *)(local_buffer_60 + 0x30) = 2;
      }
// WARNING: Subroutine does not return
      SystemResourceHandler(*(uint64_t *)(unaff_R15 + 0x98));
    }
  }
  else if (*(int64_t *)(param_1 + 0x18) == 0) {
    iVar1 = 0x1f;
  }
  else {
    lVar2 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&processed_var_7712_ptr,0x315,0);
    if (lVar2 != 0) {
// WARNING: Subroutine does not return
      memcpy(lVar2,*(uint64_t *)(unaff_RDI + 0x18),(int64_t)*(int *)(unaff_RDI + 0x20));
    }
    iVar1 = 0x26;
  }
  return iVar1;
}
uint64_t function_8938ab(void)
{
  return 0x1f;
}
// 函数: void function_8938c0(int64_t param_1,int64_t param_2)
void function_8938c0(int64_t param_1,int64_t param_2)
{
  int iVar1;
  int64_t lStackX_8;
  iVar1 = function_8de900(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = SystemFunction_00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
    if (iVar1 == 0) {
      if (*(int *)(lStackX_8 + 0x30) == 1) {
        *(int32_t *)(lStackX_8 + 0x30) = 2;
      }
// WARNING: Subroutine does not return
      SystemResourceHandler(*(uint64_t *)(param_2 + 0x98),param_1);
    }
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x000180893a22)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_893930(int64_t param_1,int64_t param_2)
{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lStackX_8;
  uVar1 = *(uint *)(param_1 + 0x1c);
  if ((((uVar1 != 1) || ((*(byte *)(param_1 + 0x10) & 0x1f) == 0)) && (0 < *(int *)(param_1 + 0x18))
      ) && (uVar1 < 2)) {
    if (uVar1 == 0) {
      lVar3 = function_741d10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int *)(param_1 + 0x18),0x20,
                            &processed_var_8432_ptr,0xdd,0,0);
      if (lVar3 != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar3,*(uint64_t *)(param_1 + 0x10),(int64_t)*(int *)(param_1 + 0x18));
      }
      iVar2 = 0x26;
    }
    else {
      iVar2 = function_8de900(param_2,param_1 + 0x24);
      if ((iVar2 == 0) &&
         (iVar2 = SystemFunction_00018088c530(*(int32_t *)(param_1 + 0x24),&lStackX_8), iVar2 == 0)) {
        if (*(int *)(lStackX_8 + 0x30) == 1) {
          *(int32_t *)(lStackX_8 + 0x30) = 2;
        }
// WARNING: Subroutine does not return
        SystemResourceHandler(*(uint64_t *)(param_2 + 0x98),param_1);
      }
    }
    return iVar2;
  }
  return 0x1f;
}
// WARNING: Removing unreachable block (ram,0x000180893a22)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_893964(uint64_t param_1,uint64_t param_2)
{
  int in_EAX;
  int iVar1;
  int64_t lVar2;
  int64_t unaff_RDI;
  int64_t unaff_R15;
  int64_t local_buffer_60;
  if (in_EAX == 0) {
    lVar2 = function_741d10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,0x20,&processed_var_8432_ptr,0xdd);
    if (lVar2 != 0) {
// WARNING: Subroutine does not return
      memcpy(lVar2,*(uint64_t *)(unaff_RDI + 0x10),(int64_t)*(int *)(unaff_RDI + 0x18));
    }
    iVar1 = 0x26;
  }
  else {
    iVar1 = function_8de900();
    if ((iVar1 == 0) &&
       (iVar1 = SystemFunction_00018088c530(*(int32_t *)(unaff_RDI + 0x24),&local_buffer_00000060), iVar1 == 0)
       ) {
      if (*(int *)(local_buffer_60 + 0x30) == 1) {
        *(int32_t *)(local_buffer_60 + 0x30) = 2;
      }
// WARNING: Subroutine does not return
      SystemResourceHandler(*(uint64_t *)(unaff_R15 + 0x98));
    }
  }
  return iVar1;
}
uint64_t function_893a63(void)
{
  return 0x1f;
}
uint64_t function_893d50(int64_t param_1,int64_t param_2)
{
  float fVar1;
  uint64_t uVar2;
  int64_t lVar3;
  float fVar4;
  int32_t astack_special_x_18 [2];
  if ((*(uint *)(param_1 + 0x18) & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  astack_special_x_18[0] = 0;
  uVar2 = function_867600(param_2 + 0x60,param_1 + 0x10,astack_special_x_18);
  if ((int)uVar2 == 0) {
    lVar3 = SystemFunction_000180867680(param_2 + 0x60,astack_special_x_18[0]);
    if ((*(uint *)(lVar3 + 0x34) >> 4 & 1) != 0) {
      return 0x1f;
    }
    fVar1 = *(float *)(param_1 + 0x18);
    fVar4 = *(float *)(lVar3 + 0x38);
    if ((*(float *)(lVar3 + 0x38) <= fVar1) &&
       (fVar4 = *(float *)(lVar3 + 0x3c), fVar1 <= *(float *)(lVar3 + 0x3c))) {
      fVar4 = fVar1;
    }
    *(float *)(param_1 + 0x18) = fVar4;
    uVar2 = SystemFunction_000180867960(param_2 + 0x60,astack_special_x_18[0],fVar4);
    if ((int)uVar2 == 0) {
// WARNING: Subroutine does not return
      SystemResourceHandler(*(uint64_t *)(param_2 + 0x98),param_1);
    }
  }
  return uVar2;
}
uint64_t function_893d8f(uint64_t param_1,uint64_t param_2)
{
  float fVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  float fVar4;
  int32_t local_var_40;
  local_var_40 = 0;
  uVar2 = function_867600(unaff_RSI + 0x60,param_2,&local_buffer_00000040);
  if ((int)uVar2 == 0) {
    lVar3 = SystemFunction_000180867680(unaff_RSI + 0x60,local_var_40);
    if ((*(uint *)(lVar3 + 0x34) >> 4 & 1) != 0) {
      return 0x1f;
    }
    fVar1 = *(float *)(unaff_RBX + 0x18);
    fVar4 = *(float *)(lVar3 + 0x38);
    if ((*(float *)(lVar3 + 0x38) <= fVar1) &&
       (fVar4 = *(float *)(lVar3 + 0x3c), fVar1 <= *(float *)(lVar3 + 0x3c))) {
      fVar4 = fVar1;
    }
    *(float *)(unaff_RBX + 0x18) = fVar4;
    uVar2 = SystemFunction_000180867960(unaff_RSI + 0x60,local_var_40,fVar4);
    if ((int)uVar2 == 0) {
// WARNING: Subroutine does not return
      SystemResourceHandler(*(uint64_t *)(unaff_RSI + 0x98));
    }
  }
  return uVar2;
}
// 函数: void function_893ddb(void)
void function_893ddb(void)
{
  float fVar1;
  int32_t in_EAX;
  int iVar2;
  int32_t in_register_00000004;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  float fVar3;
  int32_t local_var_40;
  fVar3 = *(float *)(CONCAT44(in_register_00000004,in_EAX) + 0x38);
  fVar1 = *(float *)(unaff_RBX + 0x18);
  if ((fVar3 <= fVar1) &&
     (fVar3 = *(float *)(CONCAT44(in_register_00000004,in_EAX) + 0x3c), fVar1 <= fVar3)) {
    fVar3 = fVar1;
  }
  *(float *)(unaff_RBX + 0x18) = fVar3;
  iVar2 = SystemFunction_000180867960(unaff_RSI + 0x60,local_var_40,fVar3);
  if (iVar2 == 0) {
// WARNING: Subroutine does not return
    SystemResourceHandler(*(uint64_t *)(unaff_RSI + 0x98));
  }
  return;
}
uint64_t function_893e30(int64_t param_1,int64_t param_2)
{
  float fVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int32_t astack_special_x_10 [2];
  astack_special_x_10[0] = 0;
  uVar2 = function_867600(param_2 + 0x60,param_1 + 0x10,astack_special_x_10);
  if ((int)uVar2 == 0) {
    lVar3 = SystemFunction_000180867680(param_2 + 0x60,astack_special_x_10[0]);
    if ((*(uint *)(lVar3 + 0x34) >> 4 & 1) != 0) {
      return 0x1f;
    }
    uVar2 = RenderingSystem_GeometryProcessor0(lVar3,param_1 + 0x1d,param_1 + 0x18);
    if ((int)uVar2 == 0) {
      fVar1 = *(float *)(param_1 + 0x18);
      if ((fVar1 < *(float *)(lVar3 + 0x38)) ||
         (*(float *)(lVar3 + 0x3c) <= fVar1 && fVar1 != *(float *)(lVar3 + 0x3c))) {
        uVar2 = 0x1c;
      }
      else {
        uVar2 = SystemFunction_000180867960(param_2 + 0x60,astack_special_x_10[0]);
        if ((int)uVar2 == 0) {
// WARNING: Subroutine does not return
          SystemResourceHandler(*(uint64_t *)(param_2 + 0x98),param_1);
        }
      }
    }
  }
  return uVar2;
}
uint64_t function_893e69(void)
{
  float fVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  int32_t local_var_48;
  lVar2 = SystemFunction_000180867680();
  if ((*(uint *)(lVar2 + 0x34) >> 4 & 1) != 0) {
    return 0x1f;
  }
  uVar3 = RenderingSystem_GeometryProcessor0(lVar2,unaff_RDI + 0x1d,unaff_RDI + 0x18);
  if ((int)uVar3 == 0) {
    fVar1 = *(float *)(unaff_RDI + 0x18);
    if ((fVar1 < *(float *)(lVar2 + 0x38)) ||
       (*(float *)(lVar2 + 0x3c) <= fVar1 && fVar1 != *(float *)(lVar2 + 0x3c))) {
      uVar3 = 0x1c;
    }
    else {
      uVar3 = SystemFunction_000180867960(unaff_R14 + 0x60,local_var_48);
      if ((int)uVar3 == 0) {
// WARNING: Subroutine does not return
        SystemResourceHandler(*(uint64_t *)(unaff_R14 + 0x98));
      }
    }
  }
  return uVar3;
}
uint64_t function_893e94(void)
{
  float fVar1;
  uint64_t uVar2;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  int32_t local_var_48;
  uVar2 = RenderingSystem_GeometryProcessor0();
  if ((int)uVar2 == 0) {
    fVar1 = *(float *)(unaff_RDI + 0x18);
    if ((fVar1 < *(float *)(unaff_RBX + 0x38)) ||
       (*(float *)(unaff_RBX + 0x3c) <= fVar1 && fVar1 != *(float *)(unaff_RBX + 0x3c))) {
      uVar2 = 0x1c;
    }
    else {
      uVar2 = SystemFunction_000180867960(unaff_R14 + 0x60,local_var_48);
      if ((int)uVar2 == 0) {
// WARNING: Subroutine does not return
        SystemResourceHandler(*(uint64_t *)(unaff_R14 + 0x98));
      }
    }
  }
  return uVar2;
}
// 函数: void function_893eef(void)
void function_893eef(void)
{
  return;
}
uint64_t function_893f00(int64_t param_1,int64_t param_2)
{
  float fVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  float fVar5;
  uint astack_special_x_8 [2];
  int32_t astack_special_x_18 [2];
  astack_special_x_8[0] = *(uint *)(param_1 + 0x10);
  if ((astack_special_x_8[0] & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  astack_special_x_18[0] = 0;
  uVar2 = function_840af0(param_2,param_1 + 0x20,astack_special_x_18);
  if ((int)uVar2 == 0) {
    lVar3 = SystemFunction_000180867680(param_2 + 0x60,astack_special_x_18[0]);
    if ((*(uint *)(lVar3 + 0x34) >> 4 & 1) != 0) {
      return 0x1f;
    }
    fVar1 = *(float *)(param_1 + 0x10);
    fVar5 = *(float *)(lVar3 + 0x38);
    if ((*(float *)(lVar3 + 0x38) <= fVar1) &&
       (fVar5 = *(float *)(lVar3 + 0x3c), fVar1 <= *(float *)(lVar3 + 0x3c))) {
      fVar5 = fVar1;
    }
    *(float *)(param_1 + 0x10) = fVar5;
    uVar2 = SystemFunction_000180867960(param_2 + 0x60,astack_special_x_18[0],fVar5);
    if ((int)uVar2 == 0) {
      puVar4 = (uint64_t *)SystemFunction_000180867660(param_2 + 0x60,astack_special_x_8,astack_special_x_18[0]);
      *(uint64_t *)(param_1 + 0x18) = *puVar4;
// WARNING: Subroutine does not return
      SystemResourceHandler(*(uint64_t *)(param_2 + 0x98),param_1);
    }
  }
  return uVar2;
}
uint64_t function_893f64(void)
{
  float fVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  float fVar5;
  int32_t local_var_40;
  lVar2 = SystemFunction_000180867680();
  if ((*(uint *)(lVar2 + 0x34) >> 4 & 1) != 0) {
    return 0x1f;
  }
  fVar1 = *(float *)(unaff_RBX + 0x10);
  fVar5 = *(float *)(lVar2 + 0x38);
  if ((*(float *)(lVar2 + 0x38) <= fVar1) &&
     (fVar5 = *(float *)(lVar2 + 0x3c), fVar1 <= *(float *)(lVar2 + 0x3c))) {
    fVar5 = fVar1;
  }
  *(float *)(unaff_RBX + 0x10) = fVar5;
  uVar3 = SystemFunction_000180867960(unaff_RDI + 0x60,local_var_40,fVar5);
  if ((int)uVar3 == 0) {
    puVar4 = (uint64_t *)SystemFunction_000180867660(unaff_RDI + 0x60,&local_buffer_00000030,local_var_40);
    *(uint64_t *)(unaff_RBX + 0x18) = *puVar4;
// WARNING: Subroutine does not return
    SystemResourceHandler(*(uint64_t *)(unaff_RDI + 0x98));
  }
  return uVar3;
}
// 函数: void function_893f8e(void)
void function_893f8e(void)
{
  float fVar1;
  uint64_t *puVar2;
  int32_t in_EAX;
  int iVar3;
  int32_t in_register_00000004;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  float fVar4;
  int32_t local_var_40;
  fVar4 = *(float *)(CONCAT44(in_register_00000004,in_EAX) + 0x38);
  fVar1 = *(float *)(unaff_RBX + 0x10);
  if ((fVar4 <= fVar1) &&
     (fVar4 = *(float *)(CONCAT44(in_register_00000004,in_EAX) + 0x3c), fVar1 <= fVar4)) {
    fVar4 = fVar1;
  }
  *(float *)(unaff_RBX + 0x10) = fVar4;
  iVar3 = SystemFunction_000180867960(unaff_RDI + 0x60,local_var_40,fVar4);
  if (iVar3 == 0) {
    puVar2 = (uint64_t *)SystemFunction_000180867660(unaff_RDI + 0x60,&local_buffer_00000030,local_var_40);
    *(uint64_t *)(unaff_RBX + 0x18) = *puVar2;
// WARNING: Subroutine does not return
    SystemResourceHandler(*(uint64_t *)(unaff_RDI + 0x98));
  }
  return;
}
// 函数: void function_893fed(void)
void function_893fed(void)
{
  return;
}
uint64_t function_894000(int64_t param_1,int64_t param_2)
{
  float fVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int8_t astack_special_x_8 [8];
  int32_t astack_special_x_18 [2];
  astack_special_x_18[0] = 0;
  uVar2 = function_840af0(param_2,param_1 + 0x20,astack_special_x_18);
  if ((int)uVar2 == 0) {
    lVar3 = SystemFunction_000180867680(param_2 + 0x60,astack_special_x_18[0]);
    if ((*(uint *)(lVar3 + 0x34) >> 4 & 1) != 0) {
      return 0x1f;
    }
    uVar2 = RenderingSystem_GeometryProcessor0(lVar3,param_1 + 0xa0,param_1 + 0x10);
    if ((int)uVar2 == 0) {
      fVar1 = *(float *)(param_1 + 0x10);
      if ((fVar1 < *(float *)(lVar3 + 0x38)) ||
         (*(float *)(lVar3 + 0x3c) <= fVar1 && fVar1 != *(float *)(lVar3 + 0x3c))) {
        uVar2 = 0x1c;
      }
      else {
        uVar2 = SystemFunction_000180867960(param_2 + 0x60,astack_special_x_18[0]);
        if ((int)uVar2 == 0) {
          puVar4 = (uint64_t *)SystemFunction_000180867660(param_2 + 0x60,astack_special_x_8,astack_special_x_18[0]);
          *(uint64_t *)(param_1 + 0x18) = *puVar4;
// WARNING: Subroutine does not return
          SystemResourceHandler(*(uint64_t *)(param_2 + 0x98),param_1);
        }
      }
    }
  }
  return uVar2;
}
uint64_t function_894037(void)
{
  float fVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  int32_t local_buffer_50;
  lVar2 = SystemFunction_000180867680();
  if ((*(uint *)(lVar2 + 0x34) >> 4 & 1) != 0) {
    return 0x1f;
  }
  uVar3 = RenderingSystem_GeometryProcessor0(lVar2,unaff_RDI + 0xa0,unaff_RDI + 0x10);
  if ((int)uVar3 == 0) {
    fVar1 = *(float *)(unaff_RDI + 0x10);
    if ((fVar1 < *(float *)(lVar2 + 0x38)) ||
       (*(float *)(lVar2 + 0x3c) <= fVar1 && fVar1 != *(float *)(lVar2 + 0x3c))) {
      uVar3 = 0x1c;
    }
    else {
      uVar3 = SystemFunction_000180867960(unaff_R14 + 0x60,local_buffer_50);
      if ((int)uVar3 == 0) {
        puVar4 = (uint64_t *)
                 SystemFunction_000180867660(unaff_R14 + 0x60,&local_buffer_00000040,local_buffer_50);
        *(uint64_t *)(unaff_RDI + 0x18) = *puVar4;
// WARNING: Subroutine does not return
        SystemResourceHandler(*(uint64_t *)(unaff_R14 + 0x98));
      }
    }
  }
  return uVar3;
}
uint64_t function_89406b(void)
{
  float fVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  int32_t local_buffer_50;
  uVar2 = RenderingSystem_GeometryProcessor0();
  if ((int)uVar2 == 0) {
    fVar1 = *(float *)(unaff_RDI + 0x10);
    if ((fVar1 < *(float *)(unaff_RBX + 0x38)) ||
       (*(float *)(unaff_RBX + 0x3c) <= fVar1 && fVar1 != *(float *)(unaff_RBX + 0x3c))) {
      uVar2 = 0x1c;
    }
    else {
      uVar2 = SystemFunction_000180867960(unaff_R14 + 0x60,local_buffer_50);
      if ((int)uVar2 == 0) {
        puVar3 = (uint64_t *)
                 SystemFunction_000180867660(unaff_R14 + 0x60,&local_buffer_00000040,local_buffer_50);
        *(uint64_t *)(unaff_RDI + 0x18) = *puVar3;
// WARNING: Subroutine does not return
        SystemResourceHandler(*(uint64_t *)(unaff_R14 + 0x98));
      }
    }
  }
  return uVar2;
}
// 函数: void function_8940e8(void)
void function_8940e8(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address