#include "RenderingAdvancedManager_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_11_part055.c - 6 个函数
// 函数: void SystemCore_b91e8(uint64_t param_1,int64_t param_2)
void SystemCore_b91e8(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t unaff_RBX;
  int unaff_EBP;
  int32_t unaff_0000002c;
  int64_t lVar2;
  if (unaff_EBP < *(int *)(unaff_RBX + 0x3bc8)) {
    lVar2 = CONCAT44(unaff_0000002c,unaff_EBP);
    do {
      lVar1 = *(int64_t *)(lVar2 + 8 + param_2);
      if (lVar1 != 0) {
// WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&processed_var_6512_ptr,0xcfb,1);
      }
      unaff_EBP = unaff_EBP + 1;
      lVar2 = lVar2 + 0x28;
    } while (unaff_EBP < *(int *)(unaff_RBX + 0x3bc8));
  }
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&processed_var_6512_ptr,0xcfe,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_b9277(void)
{
  int64_t lVar1;
  int64_t unaff_RBX;
  int unaff_EBP;
  lVar1 = *(int64_t *)(unaff_RBX + 0x420);
  if (lVar1 != 0) {
    if (unaff_EBP < *(int *)(unaff_RBX + 0x1c8)) {
      do {
        SystemCore_55c10((int64_t)unaff_EBP * 800 + *(int64_t *)(unaff_RBX + 0x420) + 0x20);
        unaff_EBP = unaff_EBP + 1;
      } while (unaff_EBP < *(int *)(unaff_RBX + 0x1c8));
      lVar1 = *(int64_t *)(unaff_RBX + 0x420);
    }
// WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&processed_var_6512_ptr,0xd08,1);
  }
  if (*(int64_t *)(unaff_RBX + 0x1c0) != 0) {
// WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBX + 0x1c0),
                  &processed_var_6512_ptr,0xd0e,1);
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_b92fb(uint64_t param_1,uint64_t param_2)
void SystemCore_b92fb(uint64_t param_1,uint64_t param_2)
{
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&processed_var_6512_ptr,0xd0e,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_b95c0(int64_t param_1,uint64_t param_2,int64_t param_3)
void SystemCore_b95c0(int64_t param_1,uint64_t param_2,int64_t param_3)
{
  int iVar1;
  int8_t stack_array_338 [32];
  uint64_t local_var_318;
  int32_t local_var_2f0;
  int32_t local_var_2ec;
  int8_t stack_array_1b0 [4];
  uint local_var_1ac;
  ushort local_var_1a8;
  ushort local_var_1a6;
  ushort local_var_1a4;
  int8_t stack_array_168 [256];
  uint64_t local_var_68;
  local_var_68 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_338;
  *(int32_t *)(param_1 + 0x28) = 7;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x168) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  local_var_2f0 = 0;
  Function_ff4f9791(param_1 + 0x1d0);
  iVar1 = (**(code **)(**(int64_t **)(param_1 + 0x170) + 0x10))
                    (*(int64_t **)(param_1 + 0x170),&local_var_2f0);
  if (iVar1 == 0) {
    local_var_318 = 0;
    iVar1 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),stack_array_1b0,1,0xe);
    if (iVar1 == 0) {
      local_var_1a8 = local_var_1a8 << 8 | local_var_1a8 >> 8;
      local_var_1a4 = local_var_1a4 << 8 | local_var_1a4 >> 8;
      local_var_1a6 = local_var_1a6 << 8 | local_var_1a6 >> 8;
      local_var_1ac = (local_var_1ac & 0xff0000 | local_var_1ac >> 0x10) >> 8 |
                   (local_var_1ac & 0xff00 | local_var_1ac << 0x10) << 8;
      iVar1 = Function_3be2b034(stack_array_1b0,&processed_var_6780_ptr,4);
      if (iVar1 == 0) {
        *(int32_t *)(param_1 + 0x3be8) = 500000;
        *(uint *)(param_1 + 0x3bc8) = local_var_1a6 + 1;
        *(uint *)(param_1 + 0x3bcc) = (uint)local_var_1a8;
        *(uint *)(param_1 + 0x3bd0) = (uint)local_var_1a4;
        *(int32_t *)(param_1 + 0x3bf8) = 0x3f800000;
        if ((param_3 == 0) || (iVar1 = *(int *)(param_3 + 0x60), iVar1 == 0)) {
          iVar1 = 0x40;
        }
        *(int *)(param_1 + 0x1c8) = iVar1;
        if ((param_3 == 0) || (iVar1 = *(int *)(param_3 + 0xd0), iVar1 == 0)) {
          iVar1 = 0x200;
        }
        *(int *)(param_1 + 0x3bb8) = iVar1;
        local_var_2ec = 0xffffffff;
// WARNING: Subroutine does not return
        memset(stack_array_168,0,0x100);
      }
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_68 ^ (uint64_t)stack_array_338);
}
// 函数: void SystemCore_b975a(void)
void SystemCore_b975a(void)
{
  int32_t in_EAX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int32_t local_buffer_4c;
  *(int32_t *)(unaff_RDI + 0x3bb8) = in_EAX;
  local_buffer_4c = 0xffffffff;
// WARNING: Subroutine does not return
  memset(unaff_RBP + 0xd0,0,0x100);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_b9d7c(void)
void SystemCore_b9d7c(void)
{
  uint in_EAX;
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint uVar4;
  int64_t unaff_RDI;
  uint unaff_R12D;
  int32_t unaff_000000a4;
  int64_t unaff_R13;
  uint uVar5;
  float fVar6;
  uint64_t extraout_XMM0_Qa;
  uint local_var_40;
  uint local_buffer_44;
  do {
    uVar5 = unaff_R12D;
    if (0 < (int)in_EAX) {
      lVar2 = *(int64_t *)(unaff_RDI + 0x3be0);
      lVar3 = CONCAT44(unaff_000000a4,unaff_R12D);
      uVar4 = unaff_R12D;
      do {
        SystemCore_bb100(lVar2 + (int64_t)(int)uVar4 * 0x28,1);
        lVar2 = *(int64_t *)(unaff_RDI + 0x3be0);
        if ((*(char *)(lVar2 + 0x24 + lVar3) != (char)unaff_R12D) ||
           (*(int64_t *)(lVar2 + 8 + lVar3) == CONCAT44(unaff_000000a4,unaff_R12D))) {
          uVar5 = uVar5 + 1;
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x28;
      } while ((int)uVar4 < *(int *)(unaff_RDI + 0x3bc8));
    }
    fVar6 = *(float *)(unaff_RDI + 0x3bec) + 10.0;
    *(float *)(unaff_RDI + 0x3bec) = fVar6;
    *(float *)(unaff_RDI + 0x3bf4) =
         ((float)*(uint *)(unaff_RDI + 0x3be8) / (float)*(int *)(unaff_RDI + 0x3bd0)) * 0.01 +
         *(float *)(unaff_RDI + 0x3bf4);
    in_EAX = *(uint *)(unaff_RDI + 0x3bc8);
  } while (uVar5 != in_EAX);
  if ((unaff_R13 == 0) || (*(int *)(unaff_R13 + 4) != -1)) {
    fVar6 = (float)*(int *)(*(int64_t *)(unaff_RDI + 8) + 0x10) * *(float *)(unaff_RDI + 0x3bf4) *
            0.001;
    *(int *)(*(int64_t *)(unaff_RDI + 8) + 0x18) = (int)fVar6;
  }
  else {
    *(int32_t *)(*(int64_t *)(unaff_RDI + 8) + 0x18) = 0xffffffff;
  }
  local_buffer_44 = unaff_R12D;
  if (*(uint64_t *)(unaff_RDI + 0x440) != (uint64_t)unaff_R12D) {
    local_buffer_44 = 1;
  }
  local_var_40 = local_buffer_44;
  if (*(int64_t *)(unaff_RDI + 0x7b8) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_var_40 = local_buffer_44 + 1;
    local_buffer_44 = local_buffer_44 | 2;
  }
  if (*(int64_t *)(unaff_RDI + 0xb30) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_var_40 = local_var_40 + 1;
    local_buffer_44 = local_buffer_44 | 4;
  }
  if (*(int64_t *)(unaff_RDI + 0xea8) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_var_40 = local_var_40 + 1;
    local_buffer_44 = local_buffer_44 | 8;
  }
  if (*(int64_t *)(unaff_RDI + 0x1220) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_var_40 = local_var_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x10;
  }
  if (*(int64_t *)(unaff_RDI + 0x1598) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_var_40 = local_var_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x20;
  }
  if (*(int64_t *)(unaff_RDI + 0x1910) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_var_40 = local_var_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x40;
  }
  if (*(int64_t *)(unaff_RDI + 0x1c88) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_var_40 = local_var_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x80;
  }
  if (*(int64_t *)(unaff_RDI + 0x2000) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_var_40 = local_var_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x100;
  }
  if (*(int64_t *)(unaff_RDI + 0x2378) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_var_40 = local_var_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x200;
  }
  if (*(int64_t *)(unaff_RDI + 0x26f0) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_var_40 = local_var_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x400;
  }
  if (*(int64_t *)(unaff_RDI + 0x2a68) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_var_40 = local_var_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x800;
  }
  if (*(int64_t *)(unaff_RDI + 0x2de0) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_var_40 = local_var_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x1000;
  }
  if (*(int64_t *)(unaff_RDI + 0x3158) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_var_40 = local_var_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x2000;
  }
  if (*(int64_t *)(unaff_RDI + 0x34d0) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_var_40 = local_var_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x4000;
  }
  if (*(int64_t *)(unaff_RDI + 0x3848) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_var_40 = local_var_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x8000;
  }
  iVar1 = SystemMemory_Controller(fVar6,9,&processed_var_5832_ptr,&local_buffer_00000040,4);
  if (iVar1 == 0) {
    iVar1 = SystemMemory_Controller(extraout_XMM0_Qa,9,&processed_var_6872_ptr,&local_buffer_00000044,4);
    if (iVar1 == 0) {
      lVar2 = *(int64_t *)(unaff_RDI + 0x3c08);
      if ((int)unaff_R12D < *(int *)(lVar2 + 0xb0)) {
        lVar3 = CONCAT44(unaff_000000a4,unaff_R12D);
        uVar5 = unaff_R12D;
        do {
          if ((*(char *)(lVar3 + *(int64_t *)(unaff_RDI + 0x3c18)) != (char)unaff_R12D) &&
             (*(int64_t *)(*(int64_t *)(lVar2 + 0xa0) + lVar3 * 8) ==
              CONCAT44(unaff_000000a4,unaff_R12D))) {
            iVar1 = SystemCore_51170(lVar2,uVar5,8);
            if (iVar1 != 0) goto LAB_1807ba329;
          }
          lVar2 = *(int64_t *)(unaff_RDI + 0x3c08);
          uVar5 = uVar5 + 1;
          lVar3 = lVar3 + 1;
        } while ((int)uVar5 < *(int *)(lVar2 + 0xb0));
      }
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(unaff_RDI + 0x3c18),
                    &processed_var_6512_ptr,0xc7e,1);
    }
  }
LAB_1807ba329:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1d0) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_b9e61(void)
void SystemCore_b9e61(void)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint uVar4;
  int64_t unaff_RDI;
  char cVar5;
  uint unaff_R12D;
  int32_t unaff_000000a4;
  int64_t unaff_R13;
  uint64_t extraout_XMM0_Qa;
  int32_t local_buffer_28;
  char cStack0000000000000030;
  uint local_buffer_40;
  uint local_buffer_44;
  if ((unaff_R13 == 0) || (*(int *)(unaff_R13 + 4) != -1)) {
    *(int *)(*(int64_t *)(unaff_RDI + 8) + 0x18) =
         (int)((float)*(int *)(*(int64_t *)(unaff_RDI + 8) + 0x10) * *(float *)(unaff_RDI + 0x3bf4)
              * 0.001);
  }
  else {
    *(int32_t *)(*(int64_t *)(unaff_RDI + 8) + 0x18) = 0xffffffff;
  }
  local_buffer_44 = unaff_R12D;
  if (*(uint64_t *)(unaff_RDI + 0x440) != (uint64_t)unaff_R12D) {
    local_buffer_44 = 1;
  }
  local_buffer_40 = local_buffer_44;
  if (*(int64_t *)(unaff_RDI + 0x7b8) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_buffer_40 = local_buffer_44 + 1;
    local_buffer_44 = local_buffer_44 | 2;
  }
  if (*(int64_t *)(unaff_RDI + 0xb30) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_buffer_40 = local_buffer_40 + 1;
    local_buffer_44 = local_buffer_44 | 4;
  }
  if (*(int64_t *)(unaff_RDI + 0xea8) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_buffer_40 = local_buffer_40 + 1;
    local_buffer_44 = local_buffer_44 | 8;
  }
  if (*(int64_t *)(unaff_RDI + 0x1220) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_buffer_40 = local_buffer_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x10;
  }
  if (*(int64_t *)(unaff_RDI + 0x1598) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_buffer_40 = local_buffer_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x20;
  }
  if (*(int64_t *)(unaff_RDI + 0x1910) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_buffer_40 = local_buffer_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x40;
  }
  if (*(int64_t *)(unaff_RDI + 0x1c88) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_buffer_40 = local_buffer_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x80;
  }
  if (*(int64_t *)(unaff_RDI + 0x2000) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_buffer_40 = local_buffer_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x100;
  }
  if (*(int64_t *)(unaff_RDI + 0x2378) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_buffer_40 = local_buffer_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x200;
  }
  if (*(int64_t *)(unaff_RDI + 0x26f0) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_buffer_40 = local_buffer_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x400;
  }
  if (*(int64_t *)(unaff_RDI + 0x2a68) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_buffer_40 = local_buffer_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x800;
  }
  if (*(int64_t *)(unaff_RDI + 0x2de0) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_buffer_40 = local_buffer_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x1000;
  }
  if (*(int64_t *)(unaff_RDI + 0x3158) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_buffer_40 = local_buffer_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x2000;
  }
  if (*(int64_t *)(unaff_RDI + 0x34d0) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_buffer_40 = local_buffer_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x4000;
  }
  if (*(int64_t *)(unaff_RDI + 0x3848) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    local_buffer_40 = local_buffer_40 + 1;
    local_buffer_44 = local_buffer_44 | 0x8000;
  }
  cVar5 = (char)unaff_R12D;
  local_buffer_28 = 1;
  cStack0000000000000030 = cVar5;
  iVar1 = SystemMemory_Controller();
  if (iVar1 == 0) {
    local_buffer_28 = 1;
    cStack0000000000000030 = cVar5;
    iVar1 = SystemMemory_Controller(extraout_XMM0_Qa,9,&processed_var_6872_ptr,&local_buffer_00000044,4);
    if (iVar1 == 0) {
      lVar2 = *(int64_t *)(unaff_RDI + 0x3c08);
      if ((int)unaff_R12D < *(int *)(lVar2 + 0xb0)) {
        lVar3 = CONCAT44(unaff_000000a4,unaff_R12D);
        uVar4 = unaff_R12D;
        do {
          if ((*(char *)(lVar3 + *(int64_t *)(unaff_RDI + 0x3c18)) != cVar5) &&
             (*(int64_t *)(*(int64_t *)(lVar2 + 0xa0) + lVar3 * 8) ==
              CONCAT44(unaff_000000a4,unaff_R12D))) {
            iVar1 = SystemCore_51170(lVar2,uVar4,8);
            if (iVar1 != 0) goto LAB_1807ba329;
          }
          lVar2 = *(int64_t *)(unaff_RDI + 0x3c08);
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 1;
        } while ((int)uVar4 < *(int *)(lVar2 + 0xb0));
      }
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(unaff_RDI + 0x3c18),
                    &processed_var_6512_ptr,0xc7e,1);
    }
  }
LAB_1807ba329:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1d0) ^ (uint64_t)&local_buffer_00000000);
}