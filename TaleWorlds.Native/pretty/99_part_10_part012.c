#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_10_part012.c - 17 个函数

// 函数: void FUN_1806a9d90(int64_t *param_1)
void FUN_1806a9d90(int64_t *param_1)

{
  int64_t lVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  
  puVar2 = (uint64_t *)*param_1;
  puVar4 = puVar2 + (uint64_t)*(uint *)(param_1 + 1) * 0xf;
  for (; puVar2 < puVar4; puVar2 = puVar2 + 0xf) {
    *puVar2 = &unknown_var_3704_ptr;
  }
  if ((((*(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0xc))) && (lVar1 = *param_1, lVar1 != 0)) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
                    // WARNING: Could not recover jumptable at 0x0001806a9dee. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar1);
    return;
  }
  return;
}






// 函数: void FUN_1806a9dca(int64_t *param_1)
void FUN_1806a9dca(int64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
                    // WARNING: Could not recover jumptable at 0x0001806a9dee. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    return;
  }
  return;
}






// 函数: void FUN_1806a9df2(void)
void FUN_1806a9df2(void)

{
  return;
}






// 函数: void FUN_1806a9df7(void)
void FUN_1806a9df7(void)

{
  return;
}






// 函数: void FUN_1806a9e00(int64_t *param_1)
void FUN_1806a9e00(int64_t *param_1)

{
  int64_t lVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  
  puVar2 = (uint64_t *)*param_1;
  puVar4 = puVar2 + (uint64_t)*(uint *)(param_1 + 1) * 0xf;
  for (; puVar2 < puVar4; puVar2 = puVar2 + 0xf) {
    *puVar2 = &unknown_var_3704_ptr;
  }
  if ((((*(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0xc))) && (lVar1 = *param_1, lVar1 != 0)) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
                    // WARNING: Could not recover jumptable at 0x0001806a9e5e. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar1);
    return;
  }
  return;
}






// 函数: void FUN_1806a9e3a(int64_t *param_1)
void FUN_1806a9e3a(int64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
                    // WARNING: Could not recover jumptable at 0x0001806a9e5e. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    return;
  }
  return;
}






// 函数: void FUN_1806a9e62(void)
void FUN_1806a9e62(void)

{
  return;
}






// 函数: void FUN_1806a9e67(void)
void FUN_1806a9e67(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806a9e70(uint64_t *param_1)
void FUN_1806a9e70(uint64_t *param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint uVar4;
  uint64_t uVar5;
  
  *param_1 = &unknown_var_5128_ptr;
  (**(code **)(*(int64_t *)param_1[0x13] + 0x30))();
  uVar5 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      puVar1 = *(uint64_t **)(param_1[0xf] + uVar5 * 8);
      if (puVar1 != (uint64_t *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        (**(code **)(*system_system_buffer_config + 0x10))();
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x10));
  }
  uVar5 = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x12) != 0) {
    do {
      puVar1 = *(uint64_t **)(param_1[0x11] + uVar5 * 8);
      if (puVar1 != (uint64_t *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        (**(code **)(*system_system_buffer_config + 0x10))();
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x12));
  }
  uVar5 = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    do {
      puVar1 = *(uint64_t **)(param_1[0x1b] + uVar5 * 8);
      if (puVar1 != (uint64_t *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        (**(code **)(*system_system_buffer_config + 0x10))();
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x1c));
  }
  lVar2 = param_1[0x1b];
  *(int32_t *)(param_1 + 0x1c) = 0;
  if ((((*(uint *)((int64_t)param_1 + 0xe4) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0xe4))) && (lVar2 != 0)) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar2);
  }
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar2);
  }
  lVar2 = param_1[0x11];
  if ((((*(uint *)((int64_t)param_1 + 0x94) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0x94))) && (lVar2 != 0)) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar2);
  }
  lVar2 = param_1[0xf];
  if ((((*(uint *)((int64_t)param_1 + 0x84) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0x84))) && (lVar2 != 0)) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar2);
  }
  lVar2 = param_1[8];
  if (lVar2 != 0) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar2);
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar2);
  }
  *param_1 = &unknown_var_4824_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806a9e81(uint64_t *param_1)
void FUN_1806a9e81(uint64_t *param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t in_RAX;
  int64_t *plVar3;
  uint uVar4;
  uint64_t uVar5;
  
  *param_1 = in_RAX;
  (**(code **)(*(int64_t *)param_1[0x13] + 0x30))();
  uVar5 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      puVar1 = *(uint64_t **)(param_1[0xf] + uVar5 * 8);
      if (puVar1 != (uint64_t *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        (**(code **)(*system_system_buffer_config + 0x10))();
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x10));
  }
  uVar5 = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x12) != 0) {
    do {
      puVar1 = *(uint64_t **)(param_1[0x11] + uVar5 * 8);
      if (puVar1 != (uint64_t *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        (**(code **)(*system_system_buffer_config + 0x10))();
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x12));
  }
  uVar5 = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    do {
      puVar1 = *(uint64_t **)(param_1[0x1b] + uVar5 * 8);
      if (puVar1 != (uint64_t *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        (**(code **)(*system_system_buffer_config + 0x10))();
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x1c));
  }
  lVar2 = param_1[0x1b];
  *(int32_t *)(param_1 + 0x1c) = 0;
  if ((((*(uint *)((int64_t)param_1 + 0xe4) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0xe4))) && (lVar2 != 0)) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar2);
  }
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar2);
  }
  lVar2 = param_1[0x11];
  if ((((*(uint *)((int64_t)param_1 + 0x94) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0x94))) && (lVar2 != 0)) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar2);
  }
  lVar2 = param_1[0xf];
  if ((((*(uint *)((int64_t)param_1 + 0x84) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0x84))) && (lVar2 != 0)) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar2);
  }
  lVar2 = param_1[8];
  if (lVar2 != 0) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar2);
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar2);
  }
  *param_1 = &unknown_var_4824_ptr;
  return;
}






// 函数: void FUN_1806a9f97(void)
void FUN_1806a9f97(void)

{
  int64_t lVar1;
  int in_EAX;
  int64_t *plVar2;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  
  if ((-1 < in_EAX) && (unaff_RDI != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  lVar1 = unaff_RBX[0x14];
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  lVar1 = unaff_RBX[0x11];
  if ((((*(uint *)((int64_t)unaff_RBX + 0x94) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)unaff_RBX + 0x94))) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  lVar1 = unaff_RBX[0xf];
  if ((((*(uint *)((int64_t)unaff_RBX + 0x84) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)unaff_RBX + 0x84))) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  lVar1 = unaff_RBX[8];
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  lVar1 = unaff_RBX[1];
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  *unaff_RBX = &unknown_var_4824_ptr;
  return;
}






// 函数: void FUN_1806aa080(uint64_t *param_1)
void FUN_1806aa080(uint64_t *param_1)

{
  int64_t lVar1;
  uint uVar2;
  int64_t *plVar3;
  uint uVar4;
  uint64_t uVar5;
  
  uVar5 = 0;
  *param_1 = &unknown_var_5064_ptr;
  if (*(int *)(param_1 + 5) == 0) {
FUN_1806aa129:
    if ((*(int *)((int64_t)param_1 + 0x2c) != 0) && (*(int *)((int64_t)param_1 + 0x3c) != 0)) {
                    // WARNING: Subroutine does not return
      memset(param_1[4],0xffffffff,*(int *)((int64_t)param_1 + 0x2c) * 4);
    }
    lVar1 = param_1[0x10];
    if (lVar1 != 0) {
      plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar3 + 0x10))(plVar3,lVar1);
    }
    lVar1 = param_1[9];
    if (lVar1 != 0) {
      plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar3 + 0x10))(plVar3,lVar1);
    }
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar3 + 0x10))(plVar3,lVar1);
    }
    *param_1 = &unknown_var_4768_ptr;
    return;
  }
  uVar2 = *(uint *)param_1[4];
  if (uVar2 == 0xffffffff) {
    do {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
      if (uVar4 == *(uint *)((int64_t)param_1 + 0x2c)) goto joined_r0x0001806aa0c3;
      uVar2 = ((uint *)param_1[4])[uVar5];
    } while (uVar2 == 0xffffffff);
  }
LAB_1806aa0d0:
  do {
    do {
      lVar1 = *(int64_t *)(param_1[2] + 8 + (uint64_t)uVar2 * 0x10);
      if (lVar1 != 0) {
        plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar3 + 0x10))(plVar3,lVar1);
      }
      uVar2 = *(uint *)(param_1[3] + (uint64_t)uVar2 * 4);
    } while (uVar2 != 0xffffffff);
    do {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
      if (uVar4 == *(uint *)((int64_t)param_1 + 0x2c)) goto joined_r0x0001806aa0c3;
      uVar2 = *(uint *)(param_1[4] + uVar5 * 4);
    } while (uVar2 == 0xffffffff);
  } while( true );
joined_r0x0001806aa0c3:
  if (uVar2 == 0xffffffff) goto FUN_1806aa129;
  goto LAB_1806aa0d0;
}






// 函数: void FUN_1806aa0c5(void)
void FUN_1806aa0c5(void)

{
  int64_t lVar1;
  uint in_EAX;
  int64_t *plVar2;
  uint uVar3;
  uint64_t unaff_RBX;
  uint64_t *unaff_RDI;
  
  do {
    do {
      lVar1 = *(int64_t *)(unaff_RDI[2] + 8 + (uint64_t)in_EAX * 0x10);
      if (lVar1 != 0) {
        plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
      }
      in_EAX = *(uint *)(unaff_RDI[3] + (uint64_t)in_EAX * 4);
    } while (in_EAX != 0xffffffff);
    do {
      uVar3 = (int)unaff_RBX + 1;
      unaff_RBX = (uint64_t)uVar3;
      if (uVar3 == *(uint *)((int64_t)unaff_RDI + 0x2c)) {
        if (in_EAX == 0xffffffff) {
          if ((*(int *)((int64_t)unaff_RDI + 0x2c) != 0) &&
             (*(int *)((int64_t)unaff_RDI + 0x3c) != 0)) {
                    // WARNING: Subroutine does not return
            memset(unaff_RDI[4],0xffffffff,*(int *)((int64_t)unaff_RDI + 0x2c) * 4);
          }
          lVar1 = unaff_RDI[0x10];
          if (lVar1 != 0) {
            plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
            (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
          }
          lVar1 = unaff_RDI[9];
          if (lVar1 != 0) {
            plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
            (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
          }
          lVar1 = unaff_RDI[1];
          if (lVar1 != 0) {
            plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
            (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
          }
          *unaff_RDI = &unknown_var_4768_ptr;
          return;
        }
        break;
      }
      in_EAX = *(uint *)(unaff_RDI[4] + unaff_RBX * 4);
    } while (in_EAX == 0xffffffff);
  } while( true );
}






// 函数: void FUN_1806aa129(void)
void FUN_1806aa129(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t *unaff_RDI;
  
  if ((*(int *)((int64_t)unaff_RDI + 0x2c) != 0) && (*(int *)((int64_t)unaff_RDI + 0x3c) != 0)) {
                    // WARNING: Subroutine does not return
    memset(unaff_RDI[4],0xffffffff,*(int *)((int64_t)unaff_RDI + 0x2c) * 4);
  }
  lVar1 = unaff_RDI[0x10];
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  lVar1 = unaff_RDI[9];
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  lVar1 = unaff_RDI[1];
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  *unaff_RDI = &unknown_var_4768_ptr;
  return;
}



uint64_t * FUN_1806aa210(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  
  if (param_2 != param_1) {
    uVar4 = 0;
    *(int32_t *)(param_1 + 1) = 0;
    uVar2 = (uint)param_2[1];
    if ((*(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff) < uVar2) {
      FUN_1806b03d0(param_1,uVar2);
      uVar2 = (uint)param_2[1];
    }
    puVar1 = (uint64_t *)*param_1;
    puVar3 = (uint64_t *)*param_2;
    if (puVar1 < puVar1 + uVar2) {
      uVar5 = (uint64_t)uVar2;
      if (puVar1 + uVar2 < puVar1) {
        uVar5 = uVar4;
      }
      if (uVar5 != 0) {
        do {
          uVar4 = uVar4 + 1;
          *puVar1 = *puVar3;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar4 < uVar5);
        uVar2 = (uint)param_2[1];
      }
    }
    *(uint *)(param_1 + 1) = uVar2;
  }
  return param_1;
}






// 函数: void FUN_1806aa228(int64_t param_1,int64_t param_2)
void FUN_1806aa228(int64_t param_1,int64_t param_2)

{
  uint in_EAX;
  uint64_t *puVar1;
  uint uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t *unaff_RSI;
  uint64_t *unaff_RDI;
  uint64_t uVar5;
  
  uVar4 = 0;
  *(int32_t *)(param_1 + 8) = 0;
  uVar2 = *(uint *)(param_2 + 8);
  if ((in_EAX & 0x7fffffff) < uVar2) {
    FUN_1806b03d0();
    uVar2 = *(uint *)(unaff_RSI + 1);
  }
  puVar1 = (uint64_t *)*unaff_RDI;
  puVar3 = (uint64_t *)*unaff_RSI;
  if (puVar1 < puVar1 + uVar2) {
    uVar5 = (uint64_t)uVar2;
    if (puVar1 + uVar2 < puVar1) {
      uVar5 = uVar4;
    }
    if (uVar5 != 0) {
      do {
        uVar4 = uVar4 + 1;
        *puVar1 = *puVar3;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar4 < uVar5);
      uVar2 = *(uint *)(unaff_RSI + 1);
    }
  }
  *(uint *)(unaff_RDI + 1) = uVar2;
  return;
}






// 函数: void FUN_1806aa291(void)
void FUN_1806aa291(void)

{
  return;
}



uint64_t * FUN_1806aa2a0(uint64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  
  lVar1 = param_1[0x12];
  if ((((*(uint *)((int64_t)param_1 + 0x9c) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0x9c))) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  lVar1 = param_1[0x10];
  if ((((*(uint *)((int64_t)param_1 + 0x8c) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0x8c))) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  lVar1 = param_1[0xe];
  if ((((*(uint *)((int64_t)param_1 + 0x7c) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0x7c))) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  *param_1 = &unknown_var_2232_ptr;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0xa0);
  }
  return param_1;
}



uint64_t * FUN_1806aa3a0(uint64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  
  lVar1 = param_1[0xb];
  if ((((*(uint *)((int64_t)param_1 + 100) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 100))) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  *param_1 = &unknown_var_3704_ptr;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x68);
  }
  return param_1;
}



uint64_t * FUN_1806aa440(uint64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  
  *param_1 = &unknown_var_5120_ptr;
  lVar1 = param_1[0x10];
  if ((((*(uint *)((int64_t)param_1 + 0x8c) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0x8c))) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  FUN_1806a9d90(param_1 + 0xe);
  FUN_1806a9e00(param_1 + 0xc);
  *param_1 = &unknown_var_3712_ptr;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x90);
  }
  return param_1;
}



uint64_t * FUN_1806aa500(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_4824_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



int64_t FUN_1806aa530(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  
  FUN_1806a9e70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        plVar1 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        return param_1;
      }
    }
    else {
      _guard_check_icall(param_1,0xf0);
    }
  }
  return param_1;
}



uint64_t * FUN_1806aa590(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_4768_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



int64_t FUN_1806aa5c0(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  
  FUN_1806aa080();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        plVar1 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        return param_1;
      }
    }
    else {
      _guard_check_icall(param_1,0xb8);
    }
  }
  return param_1;
}






// 函数: void FUN_1806aa620(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)
void FUN_1806aa620(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int32_t uStackX_8;
  int32_t uStackX_c;
  
  plVar1 = (int64_t *)(param_1 + 0x80);
  if (*(uint *)(param_1 + 0x88) < (*(uint *)(param_1 + 0x8c) & 0x7fffffff)) {
    *(uint64_t *)(*plVar1 + (uint64_t)*(uint *)(param_1 + 0x88) * 8) = CONCAT44(param_3,param_2);
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  }
  else {
    uStackX_8 = param_2;
    uStackX_c = param_3;
    FUN_1806ae480(plVar1,&uStackX_8);
  }
  plVar2 = (int64_t *)(param_1 + 0x90);
  if (*(uint *)(param_1 + 0x98) < (*(uint *)(param_1 + 0x9c) & 0x7fffffff)) {
    *(uint64_t *)(*plVar2 + (uint64_t)*(uint *)(param_1 + 0x98) * 8) = CONCAT44(param_4,param_2);
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
  else {
    uStackX_8 = param_2;
    uStackX_c = param_4;
    FUN_1806ae480(plVar2,&uStackX_8);
  }
  *(int64_t *)(param_1 + 0x38) = *plVar1;
  *(uint64_t *)(param_1 + 0x40) = *plVar1 + (uint64_t)*(uint *)(param_1 + 0x88) * 8;
  *(int64_t *)(param_1 + 0x58) = *plVar2;
  *(uint64_t *)(param_1 + 0x60) = *plVar2 + (uint64_t)*(uint *)(param_1 + 0x98) * 8;
  return;
}






