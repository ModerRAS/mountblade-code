#include "TaleWorlds.Native.Split.h"

// 99_part_10_part027.c - 9 个函数

// 函数: void FUN_1806b5c30(int64_t param_1,int16_t param_2,uint64_t param_3)
void FUN_1806b5c30(int64_t param_1,int16_t param_2,uint64_t param_3)

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
  int8_t uStackX_8;
  byte bStackX_9;
  int16_t uStackX_a;
  int16_t uStackX_10;
  uint64_t uStackX_20;
  uint64_t uStack_58;
  int iStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  
  if (*(char *)(param_1 + 0x128) != '\0') {
    uStackX_10 = param_2;
    iVar5 = _getId_ThreadImpl_shdfnd_physx__SA_KXZ();
    uVar6 = _getCurrentCounterValue_Time_shdfnd_physx__SA_KXZ();
    lVar1 = *(int64_t *)(param_1 + -0x48);
    lVar8 = lVar1;
    if (lVar1 != 0) {
      _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
      lVar8 = *(int64_t *)(param_1 + -0x48);
    }
    uStack_4c = CONCAT22(uStack_4c._2_2_,2);
    uStack_58 = param_3;
    iStack_50 = iVar5;
    if (lVar8 != 0) {
      _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar8 + 8));
    }
    if ((((*(int *)(param_1 + -0x28) == iVar5) && (*(uint64_t *)(param_1 + -0x30) == param_3)) &&
        (*(char *)(param_1 + -0x24) == '\x02')) && (*(char *)(param_1 + -0x23) == '\0')) {
      uVar9 = 3;
      uVar11 = 3;
      uStackX_20 = uVar6;
      if (*(int64_t *)(param_1 + -0x20) != 0) {
        uVar7 = uVar6 - *(int64_t *)(param_1 + -0x20);
        uStackX_20 = uVar7;
        if (uVar7 < 0x100) {
          uVar9 = 0;
          uVar11 = 0;
        }
        else if (uVar7 < 0x10000) {
          uVar9 = 1;
          uVar11 = 1;
        }
        else {
          uStackX_20 = uVar6;
          if (uVar7 < 0x100000000) {
            uVar9 = 2;
            uVar11 = 2;
            uStackX_20 = uVar7;
          }
        }
      }
      *(uint64_t *)(param_1 + -0x20) = uVar6;
      lVar2 = *(int64_t *)(param_1 + -0x38);
      FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
      **(int8_t **)(lVar2 + 0x18) = 3;
      *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
      lVar2 = *(int64_t *)(param_1 + -0x38);
      FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
      **(int8_t **)(lVar2 + 0x18) = uVar9;
      *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
      lVar2 = *(int64_t *)(param_1 + -0x38);
      FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
      puVar3 = *(int8_t **)(lVar2 + 0x18);
      *puVar3 = (char)param_2;
      puVar3[1] = uStackX_10._1_1_;
      *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
      FUN_1806b6980(param_1 + -0x38,&processed_var_6648_ptr,&uStackX_20,uVar11);
    }
    else {
      bVar10 = 3;
      uStackX_8 = 1;
      *(int32_t *)(param_1 + -0x30) = (int32_t)uStack_58;
      *(int32_t *)(param_1 + -0x2c) = uStack_58._4_4_;
      *(int *)(param_1 + -0x28) = iStack_50;
      *(int32_t *)(param_1 + -0x24) = uStack_4c;
      uStack_48 = uVar6;
      if (*(int64_t *)(param_1 + -0x20) != 0) {
        uStack_48 = uVar6 - *(int64_t *)(param_1 + -0x20);
        if (uStack_48 < 0x100) {
          bVar10 = 0;
        }
        else if (uStack_48 < 0x10000) {
          bVar10 = 1;
        }
        else if (uStack_48 < 0x100000000) {
          bVar10 = 2;
        }
        else {
          bVar10 = 3;
          uStack_48 = uVar6;
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
      uStackX_a = param_2;
      FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
      **(int8_t **)(lVar2 + 0x18) = 1;
      *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
      lVar2 = *(int64_t *)(param_1 + -0x38);
      FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
      **(byte **)(lVar2 + 0x18) = bVar10 | bVar4;
      *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
      lVar2 = *(int64_t *)(param_1 + -0x38);
      FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
      puVar3 = *(int8_t **)(lVar2 + 0x18);
      *puVar3 = (char)param_2;
      puVar3[1] = uStackX_10._1_1_;
      *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
      FUN_1806b2670(&uStack_58,param_1 + -0x38,&uStackX_8);
    }
    if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90)))
    {
      FUN_1806b4470(param_1 + -0xb0);
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






// 函数: void FUN_1806b5c56(int64_t param_1)
void FUN_1806b5c56(int64_t param_1)

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
  uint64_t in_stack_00000028;
  int8_t uStack0000000000000080;
  byte bStack0000000000000081;
  uint64_t in_stack_00000088;
  uint64_t in_stack_00000098;
  
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
  in_stack_00000028._4_4_ = CONCAT22(in_stack_00000028._6_2_,2);
  if (lVar8 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar8 + 8));
  }
  if ((((*(int *)(param_1 + -0x28) == iVar5) && (*(uint64_t *)(param_1 + -0x30) == unaff_R14)) &&
      (*(char *)(param_1 + -0x24) == '\x02')) && (*(char *)(param_1 + -0x23) == '\0')) {
    uVar9 = 3;
    uVar11 = 3;
    in_stack_00000098 = uVar6;
    if (*(int64_t *)(param_1 + -0x20) != 0) {
      uVar7 = uVar6 - *(int64_t *)(param_1 + -0x20);
      in_stack_00000098 = uVar7;
      if (uVar7 < 0x100) {
        uVar9 = 0;
        uVar11 = 0;
      }
      else if (uVar7 < 0x10000) {
        uVar9 = 1;
        uVar11 = 1;
      }
      else {
        in_stack_00000098 = uVar6;
        if (uVar7 < 0x100000000) {
          uVar9 = 2;
          uVar11 = 2;
          in_stack_00000098 = uVar7;
        }
      }
    }
    *(uint64_t *)(param_1 + -0x20) = uVar6;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(int8_t **)(lVar2 + 0x18) = 3;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(int8_t **)(lVar2 + 0x18) = uVar9;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
    puVar3 = *(int8_t **)(lVar2 + 0x18);
    *puVar3 = unaff_R13B;
    puVar3[1] = in_stack_00000088._1_1_;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
    FUN_1806b6980(param_1 + -0x38,&processed_var_6648_ptr,&stack0x00000098,uVar11);
  }
  else {
    bVar10 = 3;
    uStack0000000000000080 = 1;
    *(int *)(param_1 + -0x30) = (int)unaff_R14;
    *(int *)(param_1 + -0x2c) = (int)(unaff_R14 >> 0x20);
    *(int *)(param_1 + -0x28) = iVar5;
    *(int32_t *)(param_1 + -0x24) = in_stack_00000028._4_4_;
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
    FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(int8_t **)(lVar2 + 0x18) = 1;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(byte **)(lVar2 + 0x18) = bVar10 | bVar4;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
    puVar3 = *(int8_t **)(lVar2 + 0x18);
    *puVar3 = unaff_R13B;
    puVar3[1] = in_stack_00000088._1_1_;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
    FUN_1806b2670(&stack0x00000020,param_1 + -0x38,&stack0x00000080);
  }
  if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90))) {
    FUN_1806b4470(param_1 + -0xb0);
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






// 函数: void FUN_1806b5c5a(int64_t param_1)
void FUN_1806b5c5a(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int8_t *puVar3;
  byte bVar4;
  int iVar5;
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
  uint64_t unaff_R15;
  uint64_t uVar11;
  uint64_t in_stack_00000028;
  int8_t uStack0000000000000080;
  byte bStack0000000000000081;
  uint64_t in_stack_00000088;
  uint64_t in_stack_00000098;
  
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
  in_stack_00000028._4_4_ = CONCAT22(in_stack_00000028._6_2_,2);
  if (lVar8 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar8 + 8));
  }
  if ((((*(int *)(param_1 + -0x28) == iVar5) && (*(uint64_t *)(param_1 + -0x30) == unaff_R14)) &&
      (*(char *)(param_1 + -0x24) == '\x02')) && (*(char *)(param_1 + -0x23) == '\0')) {
    uVar9 = 3;
    uVar11 = 3;
    in_stack_00000098 = uVar6;
    if (*(int64_t *)(param_1 + -0x20) != 0) {
      uVar7 = uVar6 - *(int64_t *)(param_1 + -0x20);
      in_stack_00000098 = uVar7;
      if (uVar7 < 0x100) {
        uVar9 = 0;
        uVar11 = 0;
      }
      else if (uVar7 < 0x10000) {
        uVar9 = 1;
        uVar11 = 1;
      }
      else {
        in_stack_00000098 = uVar6;
        if (uVar7 < 0x100000000) {
          uVar9 = 2;
          uVar11 = 2;
          in_stack_00000098 = uVar7;
        }
      }
    }
    *(uint64_t *)(param_1 + -0x20) = uVar6;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(int8_t **)(lVar2 + 0x18) = 3;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(int8_t **)(lVar2 + 0x18) = uVar9;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
    puVar3 = *(int8_t **)(lVar2 + 0x18);
    *puVar3 = unaff_R13B;
    puVar3[1] = in_stack_00000088._1_1_;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
    FUN_1806b6980(param_1 + -0x38,&processed_var_6648_ptr,&stack0x00000098,uVar11);
  }
  else {
    bVar10 = 3;
    uStack0000000000000080 = 1;
    *(int *)(param_1 + -0x30) = (int)unaff_R14;
    *(int *)(param_1 + -0x2c) = (int)(unaff_R14 >> 0x20);
    *(int *)(param_1 + -0x28) = iVar5;
    *(int32_t *)(param_1 + -0x24) = in_stack_00000028._4_4_;
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
    FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(int8_t **)(lVar2 + 0x18) = 1;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(byte **)(lVar2 + 0x18) = bVar10 | bVar4;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + -0x38);
    FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
    puVar3 = *(int8_t **)(lVar2 + 0x18);
    *puVar3 = unaff_R13B;
    puVar3[1] = in_stack_00000088._1_1_;
    *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
    FUN_1806b2670(&stack0x00000020,param_1 + -0x38,&stack0x00000080);
  }
  if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90))) {
    FUN_1806b4470(param_1 + -0xb0);
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






// 函数: void FUN_1806b5cf7(int64_t param_1)
void FUN_1806b5cf7(int64_t param_1)

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
  uint64_t in_stack_00000088;
  uint64_t uStack0000000000000098;
  
  uVar4 = 3;
  uVar5 = 3;
  uStack0000000000000098 = in_RAX;
  if (param_1 != 0) {
    uVar3 = in_RAX - param_1;
    uStack0000000000000098 = uVar3;
    if (uVar3 < 0x100) {
      uVar4 = 0;
      uVar5 = 0;
    }
    else if (uVar3 < 0x10000) {
      uVar4 = 1;
      uVar5 = 1;
    }
    else {
      uStack0000000000000098 = unaff_RSI;
      if (uVar3 < 0x100000000) {
        uVar4 = 2;
        uVar5 = 2;
        uStack0000000000000098 = uVar3;
      }
    }
  }
  *(uint64_t *)(unaff_RBP + 0x90) = unaff_RSI;
  lVar1 = *(int64_t *)(unaff_RBP + 0x78);
  FUN_1806b5600(lVar1,(*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x10)) + 1);
  **(int8_t **)(lVar1 + 0x18) = 3;
  *(int64_t *)(lVar1 + 0x18) = *(int64_t *)(lVar1 + 0x18) + 1;
  lVar1 = *(int64_t *)(unaff_RBP + 0x78);
  FUN_1806b5600(lVar1,(*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x10)) + 1);
  **(int8_t **)(lVar1 + 0x18) = uVar4;
  *(int64_t *)(lVar1 + 0x18) = *(int64_t *)(lVar1 + 0x18) + 1;
  lVar1 = *(int64_t *)(unaff_RBP + 0x78);
  FUN_1806b5600(lVar1,(*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x10)) + 2);
  puVar2 = *(int8_t **)(lVar1 + 0x18);
  *puVar2 = unaff_R13B;
  puVar2[1] = in_stack_00000088._1_1_;
  *(int64_t *)(lVar1 + 0x18) = *(int64_t *)(lVar1 + 0x18) + 2;
  FUN_1806b6980(unaff_RBP + 0x78,&processed_var_6648_ptr,&stack0x00000098,uVar5);
  if (*(uint *)(unaff_RBP + 0x50) <= (uint)(*(int *)(unaff_RBP + 0x28) - *(int *)(unaff_RBP + 0x20))
     ) {
    FUN_1806b4470();
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






// 函数: void FUN_1806b5de6(void)
void FUN_1806b5de6(void)

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
  int32_t uStackX_20;
  int32_t uStackX_24;
  int32_t uStack0000000000000028;
  int32_t uStack000000000000002c;
  uint64_t uStack0000000000000030;
  int8_t uStack0000000000000080;
  byte bStack0000000000000081;
  uint64_t in_stack_00000088;
  
  bVar4 = 3;
  uStack0000000000000080 = 1;
  *(int32_t *)(unaff_RBP + 0x80) = uStackX_20;
  *(int32_t *)(unaff_RBP + 0x84) = uStackX_24;
  *(int32_t *)(unaff_RBP + 0x88) = uStack0000000000000028;
  *(int32_t *)(unaff_RBP + 0x8c) = uStack000000000000002c;
  uStack0000000000000030 = unaff_RSI;
  if (*(int64_t *)(unaff_RBP + 0x90) != 0) {
    uStack0000000000000030 = unaff_RSI - *(int64_t *)(unaff_RBP + 0x90);
    if (uStack0000000000000030 < 0x100) {
      bVar4 = 0;
    }
    else if (uStack0000000000000030 < 0x10000) {
      bVar4 = 1;
    }
    else if (uStack0000000000000030 < 0x100000000) {
      bVar4 = 2;
    }
    else {
      bVar4 = 3;
      uStack0000000000000030 = unaff_RSI;
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
  FUN_1806b5600(lVar1,(*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x10)) + 1);
  **(int8_t **)(lVar1 + 0x18) = 1;
  *(int64_t *)(lVar1 + 0x18) = *(int64_t *)(lVar1 + 0x18) + 1;
  lVar1 = *(int64_t *)(unaff_RBP + 0x78);
  FUN_1806b5600(lVar1,(*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x10)) + 1);
  **(byte **)(lVar1 + 0x18) = bVar4 | bVar3;
  *(int64_t *)(lVar1 + 0x18) = *(int64_t *)(lVar1 + 0x18) + 1;
  lVar1 = *(int64_t *)(unaff_RBP + 0x78);
  FUN_1806b5600(lVar1,(*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x10)) + 2);
  puVar2 = *(int8_t **)(lVar1 + 0x18);
  *puVar2 = unaff_R13B;
  puVar2[1] = in_stack_00000088._1_1_;
  *(int64_t *)(lVar1 + 0x18) = *(int64_t *)(lVar1 + 0x18) + 2;
  FUN_1806b2670(&uStackX_20,unaff_RBP + 0x78,&stack0x00000080);
  if (*(uint *)(unaff_RBP + 0x50) <= (uint)(*(int *)(unaff_RBP + 0x28) - *(int *)(unaff_RBP + 0x20))
     ) {
    FUN_1806b4470();
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






// 函数: void FUN_1806b5f2f(void)
void FUN_1806b5f2f(void)

{
  int64_t unaff_RBX;
  
                    // WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RBX + 8));
}






// 函数: void FUN_1806b5f45(void)
void FUN_1806b5f45(void)

{
  int64_t unaff_RDI;
  
                    // WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RDI + 8));
}






// 函数: void FUN_1806b5f53(void)
void FUN_1806b5f53(void)

{
  return;
}






// 函数: void FUN_1806b5f60(int64_t param_1,int16_t param_2,uint64_t param_3,int param_4)
void FUN_1806b5f60(int64_t param_1,int16_t param_2,uint64_t param_3,int param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int8_t *puVar3;
  byte bVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int8_t uVar8;
  byte bVar9;
  uint64_t uVar10;
  int8_t uStackX_8;
  byte bStackX_9;
  int16_t uStackX_a;
  int16_t uStackX_10;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int iStack_48;
  int32_t uStack_44;
  uint64_t uStack_40;
  
  if (*(char *)(param_1 + 0x128) != '\0') {
    uStackX_10 = param_2;
    uVar5 = _getCurrentCounterValue_Time_shdfnd_physx__SA_KXZ();
    lVar1 = *(int64_t *)(param_1 + -0x48);
    lVar7 = lVar1;
    if (lVar1 != 0) {
      _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
      lVar7 = *(int64_t *)(param_1 + -0x48);
    }
    uStack_44 = (uint)uStack_44._2_2_ << 0x10;
    uStack_50 = param_3;
    iStack_48 = param_4;
    if (lVar7 != 0) {
      _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar7 + 8));
    }
    if ((((*(int *)(param_1 + -0x28) == param_4) && (*(uint64_t *)(param_1 + -0x30) == param_3)) &&
        (*(char *)(param_1 + -0x24) == '\0')) && (*(char *)(param_1 + -0x23) == '\0')) {
      uVar8 = 3;
      uVar10 = 3;
      uStack_58 = uVar5;
      if (*(int64_t *)(param_1 + -0x20) != 0) {
        uVar6 = uVar5 - *(int64_t *)(param_1 + -0x20);
        uStack_58 = uVar6;
        if (uVar6 < 0x100) {
          uVar8 = 0;
          uVar10 = 0;
        }
        else if (uVar6 < 0x10000) {
          uVar8 = 1;
          uVar10 = 1;
        }
        else {
          uStack_58 = uVar5;
          if (uVar6 < 0x100000000) {
            uVar8 = 2;
            uVar10 = 2;
            uStack_58 = uVar6;
          }
        }
      }
      *(uint64_t *)(param_1 + -0x20) = uVar5;
      lVar2 = *(int64_t *)(param_1 + -0x38);
      FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
      **(int8_t **)(lVar2 + 0x18) = 3;
      *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
      lVar2 = *(int64_t *)(param_1 + -0x38);
      FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
      **(int8_t **)(lVar2 + 0x18) = uVar8;
      *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
      lVar2 = *(int64_t *)(param_1 + -0x38);
      FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
      puVar3 = *(int8_t **)(lVar2 + 0x18);
      *puVar3 = (char)param_2;
      puVar3[1] = uStackX_10._1_1_;
      *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
      FUN_1806b6980(param_1 + -0x38,&processed_var_6648_ptr,&uStack_58,uVar10);
    }
    else {
      bVar9 = 3;
      uStackX_8 = 1;
      *(int32_t *)(param_1 + -0x30) = (int32_t)uStack_50;
      *(int32_t *)(param_1 + -0x2c) = uStack_50._4_4_;
      *(int *)(param_1 + -0x28) = iStack_48;
      *(int *)(param_1 + -0x24) = uStack_44;
      uStack_40 = uVar5;
      if (*(int64_t *)(param_1 + -0x20) != 0) {
        uStack_40 = uVar5 - *(int64_t *)(param_1 + -0x20);
        if (uStack_40 < 0x100) {
          bVar9 = 0;
        }
        else if (uStack_40 < 0x10000) {
          bVar9 = 1;
        }
        else if (uStack_40 < 0x100000000) {
          bVar9 = 2;
        }
        else {
          bVar9 = 3;
          uStack_40 = uVar5;
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
      *(uint64_t *)(param_1 + -0x20) = uVar5;
      lVar2 = *(int64_t *)(param_1 + -0x38);
      bStackX_9 = bVar9 | bVar4;
      uStackX_a = param_2;
      FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
      **(int8_t **)(lVar2 + 0x18) = 1;
      *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
      lVar2 = *(int64_t *)(param_1 + -0x38);
      FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
      **(byte **)(lVar2 + 0x18) = bVar9 | bVar4;
      *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 1;
      lVar2 = *(int64_t *)(param_1 + -0x38);
      FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
      puVar3 = *(int8_t **)(lVar2 + 0x18);
      *puVar3 = (char)param_2;
      puVar3[1] = uStackX_10._1_1_;
      *(int64_t *)(lVar2 + 0x18) = *(int64_t *)(lVar2 + 0x18) + 2;
      FUN_1806b2670(&uStack_50,param_1 + -0x38,&uStackX_8);
    }
    if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90)))
    {
      FUN_1806b4470(param_1 + -0xb0);
    }
    if (lVar7 != 0) {
                    // WARNING: Subroutine does not return
      _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar7 + 8));
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
    }
  }
  return;
}






