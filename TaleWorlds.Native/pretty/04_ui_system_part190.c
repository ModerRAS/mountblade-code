#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part190.c - 1 个函数
// 函数: void function_77a0c5(void)
void function_77a0c5(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_77a0e0(int64_t param_1,int param_2,uint param_3)
{
  int iVar1;
  uint uVar2;
  int64_t lVar3;
  uint uVar4;
  int64_t *plVar5;
  int iVar6;
  uint astack_special_x_10 [2];
  iVar1 = *(int *)(param_1 + 0x448);
  iVar6 = 0;
  uVar2 = *(uint *)(param_1 + 0x444);
  if (0 < param_2) {
    plVar5 = (int64_t *)(param_1 + 0x228);
    do {
      if (*plVar5 == 0) {
        lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x10010,&processed_var_6016_ptr,0x1c8,0
                             );
        *plVar5 = lVar3;
        if (lVar3 == 0) {
          return 0x26;
        }
        plVar5[0x22] = lVar3 + 0xfU & 0xfffffffffffffff0;
      }
      iVar6 = iVar6 + 1;
      plVar5 = plVar5 + 1;
    } while (iVar6 < param_2);
  }
  if ((param_2 != iVar1) || (param_3 != uVar2)) {
    astack_special_x_10[0] = 0;
    SystemFunction_000180746360(*(uint64_t *)(param_1 + 0xa8),astack_special_x_10,0);
    uVar4 = param_3;
    if (param_3 < astack_special_x_10[0]) {
      uVar4 = astack_special_x_10[0];
    }
    astack_special_x_10[0] = uVar4;
    if (*(int64_t *)(param_1 + 0x328) != 0) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x328),
                    &processed_var_6016_ptr,0x1d9,1);
    }
    lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar4 * param_2 * 4 + 0x10,
                          &processed_var_6016_ptr,0x1db,0);
    *(int64_t *)(param_1 + 0x328) = lVar3;
    if (lVar3 == 0) {
      return 0x26;
    }
    *(int32_t *)(param_1 + 0x440) = 0;
    *(int *)(param_1 + 0x448) = param_2;
    *(uint64_t *)(param_1 + 0x438) = lVar3 + 0xfU & 0xfffffffffffffff0;
    *(uint *)(param_1 + 0x444) = astack_special_x_10[0];
    if (param_3 != uVar2) {
      if (*(int64_t *)(param_1 + 0x220) != 0) {
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x220),
                      &processed_var_6016_ptr,0x1eb,1);
      }
      lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_3 * 8 + 0x10,
                            &processed_var_6016_ptr,0x1ed,0);
      *(int64_t *)(param_1 + 0x220) = lVar3;
      if (lVar3 == 0) {
        return 0x26;
      }
      *(uint64_t *)(param_1 + 0x218) = lVar3 + 0xfU & 0xfffffffffffffff0;
    }
  }
  return 0;
}
uint64_t function_77a310(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  uint64_t uVar5;
  uint uVar6;
  int32_t uVar8;
  uint64_t uVar7;
  lVar1 = *param_1;
  uVar5 = 0;
  puVar4 = (int32_t *)(lVar1 + 0x264);
  uVar7 = uVar5;
  do {
    uVar8 = cosf((float)(int)uVar7 * 0.0001917476);
    uVar6 = (int)uVar7 + 1;
    uVar7 = (uint64_t)uVar6;
    *puVar4 = uVar8;
    puVar4 = puVar4 + 1;
  } while ((int)uVar6 < 0x2000);
  if ((int32_t *)(lVar1 + 0x25c) != (int32_t *)0x0) {
    *(int32_t *)(lVar1 + 0x25c) = *(int32_t *)(*(int64_t *)(lVar1 + 0xa8) + 0x6d0);
  }
  lVar2 = *(int64_t *)(lVar1 + 0xe8);
  *(int32_t *)(lVar1 + 0x260) = 0;
  *(uint64_t *)(lVar1 + 0x238) = 0;
  *(uint64_t *)(lVar1 + 0x240) = 0;
  uVar7 = uVar5;
  if (0 < *(int *)(lVar2 + 0x60)) {
    do {
      uVar3 = SystemFunction_000180762a70(lVar1,uVar7,
                                  *(int32_t *)
                                   (*(int64_t *)(*(int64_t *)(lVar2 + 0x68) + uVar5) + 0x38));
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar2 = *(int64_t *)(lVar1 + 0xe8);
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (uint64_t)uVar6;
    } while ((int)uVar6 < *(int *)(lVar2 + 0x60));
  }
  function_77b040(lVar1);
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_77a410(int64_t *param_1)
{
  if (*(int64_t *)(*param_1 + 0x230) != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(*param_1 + 0x230),
                  &processed_var_6400_ptr,0x97,1);
  }
  return 0;
}
uint64_t function_77a4d0(int64_t *param_1,int param_2,int32_t *param_3,int64_t param_4)
{
  int64_t lVar1;
  void *puVar2;
  float fVar3;
  lVar1 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(int32_t *)(lVar1 + 0x8268);
    if (param_4 == 0) {
      return 0;
    }
    fVar3 = *(float *)(lVar1 + 0x8268);
    puVar2 = &processed_var_4372_ptr;
  }
  else if (param_2 == 1) {
    *param_3 = *(int32_t *)(lVar1 + 0x8264);
    if (param_4 == 0) {
      return 0;
    }
    fVar3 = *(float *)(lVar1 + 0x8264);
    puVar2 = &rendering_buffer_2048_ptr;
  }
  else {
    if ((param_2 != 2) || (*param_3 = *(int32_t *)(lVar1 + 0x826c), param_4 == 0)) {
      return 0;
    }
    fVar3 = *(float *)(lVar1 + 0x826c);
    puVar2 = &rendering_buffer_2048_ptr;
  }
// WARNING: Subroutine does not return
  SystemValidationProcessor(param_4,0x20,puVar2,(double)fVar3);
}