#include "TaleWorlds.Native.Split.h"

// 99_part_10_part030.c - 21 个函数

// 函数: void FUN_1806b6759(void)
void FUN_1806b6759(void)

{
  longlong lVar1;
  int8_t *puVar2;
  byte bVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  int8_t unaff_R13B;
  ulonglong unaff_R14;
  byte bVar4;
  int32_t uStack0000000000000028;
  int32_t uStack000000000000002c;
  int32_t uStack0000000000000030;
  int32_t uStack0000000000000034;
  ulonglong uStack0000000000000038;
  int8_t uStack0000000000000080;
  byte bStack0000000000000081;
  uint64_t in_stack_00000088;
  
  bVar4 = 3;
  uStack0000000000000080 = 2;
  *(int32_t *)(unaff_RBP + 0x80) = uStack0000000000000028;
  *(int32_t *)(unaff_RBP + 0x84) = uStack000000000000002c;
  *(int32_t *)(unaff_RBP + 0x88) = uStack0000000000000030;
  *(int32_t *)(unaff_RBP + 0x8c) = uStack0000000000000034;
  uStack0000000000000038 = unaff_RSI;
  if (*(longlong *)(unaff_RBP + 0x90) != 0) {
    uStack0000000000000038 = unaff_RSI - *(longlong *)(unaff_RBP + 0x90);
    if (uStack0000000000000038 < 0x100) {
      bVar4 = 0;
    }
    else if (uStack0000000000000038 < 0x10000) {
      bVar4 = 1;
    }
    else if (uStack0000000000000038 < 0x100000000) {
      bVar4 = 2;
    }
    else {
      bVar4 = 3;
      uStack0000000000000038 = unaff_RSI;
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
  *(ulonglong *)(unaff_RBP + 0x90) = unaff_RSI;
  lVar1 = *(longlong *)(unaff_RBP + 0x78);
  bStack0000000000000081 = bVar4 | bVar3;
  FUN_1806b5600(lVar1,(*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x10)) + 1);
  **(int8_t **)(lVar1 + 0x18) = 2;
  *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x18) + 1;
  lVar1 = *(longlong *)(unaff_RBP + 0x78);
  FUN_1806b5600(lVar1,(*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x10)) + 1);
  **(byte **)(lVar1 + 0x18) = bVar4 | bVar3;
  *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x18) + 1;
  lVar1 = *(longlong *)(unaff_RBP + 0x78);
  FUN_1806b5600(lVar1,(*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x10)) + 2);
  puVar2 = *(int8_t **)(lVar1 + 0x18);
  *puVar2 = unaff_R13B;
  puVar2[1] = in_stack_00000088._1_1_;
  *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x18) + 2;
  FUN_1806b2670(&stack0x00000028,unaff_RBP + 0x78,&stack0x00000080);
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






// 函数: void FUN_1806b689d(void)
void FUN_1806b689d(void)

{
  longlong unaff_RBX;
  
                    // WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RBX + 8));
}






// 函数: void FUN_1806b68b3(void)
void FUN_1806b68b3(void)

{
  longlong unaff_RDI;
  
                    // WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RDI + 8));
}






// 函数: void FUN_1806b68c1(void)
void FUN_1806b68c1(void)

{
  return;
}



uint64_t FUN_1806b68d0(longlong *param_1,uint64_t param_2,int16_t *param_3,int param_4)

{
  int8_t uVar1;
  int16_t uVar2;
  longlong lVar3;
  int8_t *puVar4;
  int8_t uStackX_21;
  
  if (param_4 == 0) {
    lVar3 = *param_1;
    uVar1 = *(int8_t *)param_3;
    FUN_1806b5600(lVar3,(*(int *)(lVar3 + 0x18) - *(int *)(lVar3 + 0x10)) + 1);
    **(int8_t **)(lVar3 + 0x18) = uVar1;
    *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 1;
    return 1;
  }
  if (param_4 != 1) {
    if (param_4 - 2U < 2) {
      lVar3 = *param_1;
      FUN_1806b5600(lVar3,(*(int *)(lVar3 + 0x18) - *(int *)(lVar3 + 0x10)) + 4);
      puVar4 = *(int8_t **)(lVar3 + 0x18);
      *puVar4 = *(int8_t *)param_3;
      puVar4[1] = *(int8_t *)((longlong)param_3 + 1);
      puVar4[2] = *(int8_t *)(param_3 + 1);
      puVar4[3] = *(int8_t *)((longlong)param_3 + 3);
      *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 4;
      return 4;
    }
    return 0;
  }
  lVar3 = *param_1;
  uVar2 = *param_3;
  FUN_1806b5600(lVar3,(*(int *)(lVar3 + 0x18) - *(int *)(lVar3 + 0x10)) + 2);
  puVar4 = *(int8_t **)(lVar3 + 0x18);
  uStackX_21 = (int8_t)((ushort)uVar2 >> 8);
  puVar4[1] = uStackX_21;
  *puVar4 = (char)uVar2;
  *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 2;
  return 2;
}



uint64_t FUN_1806b6980(longlong *param_1,uint64_t param_2,int32_t *param_3,int param_4)

{
  int8_t uVar1;
  int16_t uVar2;
  int32_t uVar3;
  longlong lVar4;
  int8_t *puVar5;
  int8_t uStackX_21;
  int8_t uStackX_22;
  int8_t uStackX_23;
  
  if (param_4 == 0) {
    lVar4 = *param_1;
    uVar1 = *(int8_t *)param_3;
    FUN_1806b5600(lVar4,(*(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x10)) + 1);
    **(int8_t **)(lVar4 + 0x18) = uVar1;
    *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 1;
    return 1;
  }
  if (param_4 == 1) {
    lVar4 = *param_1;
    uVar2 = *(int16_t *)param_3;
    FUN_1806b5600(lVar4,(*(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x10)) + 2);
    puVar5 = *(int8_t **)(lVar4 + 0x18);
    uStackX_21 = (int8_t)((ushort)uVar2 >> 8);
    puVar5[1] = uStackX_21;
    *puVar5 = (char)uVar2;
    *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 2;
    return 2;
  }
  if (param_4 == 2) {
    lVar4 = *param_1;
    uVar3 = *param_3;
    FUN_1806b5600(lVar4,(*(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x10)) + 4);
    puVar5 = *(int8_t **)(lVar4 + 0x18);
    uStackX_21 = (int8_t)((uint)uVar3 >> 8);
    puVar5[1] = uStackX_21;
    uStackX_22 = (int8_t)((uint)uVar3 >> 0x10);
    puVar5[2] = uStackX_22;
    uStackX_23 = (int8_t)((uint)uVar3 >> 0x18);
    puVar5[3] = uStackX_23;
    *puVar5 = (char)uVar3;
    *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 4;
    return 4;
  }
  if (param_4 == 3) {
    lVar4 = *param_1;
    FUN_1806b5600(lVar4,(*(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x10)) + 8);
    puVar5 = *(int8_t **)(lVar4 + 0x18);
    *puVar5 = *(int8_t *)param_3;
    puVar5[1] = *(int8_t *)((longlong)param_3 + 1);
    puVar5[2] = *(int8_t *)((longlong)param_3 + 2);
    puVar5[3] = *(int8_t *)((longlong)param_3 + 3);
    puVar5[4] = *(int8_t *)(param_3 + 1);
    puVar5[5] = *(int8_t *)((longlong)param_3 + 5);
    puVar5[6] = *(int8_t *)((longlong)param_3 + 6);
    puVar5[7] = *(int8_t *)((longlong)param_3 + 7);
    *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 8;
    return 8;
  }
  return 0;
}



uint64_t * FUN_1806b6ae0(uint64_t *param_1,uint64_t param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *puVar5;
  uint64_t uVar6;
  
  *param_1 = &unknown_var_6672_ptr;
  param_1[1] = &unknown_var_6728_ptr;
  iVar2 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
  uVar6 = 0;
  if (iVar2 != 0) {
    plVar3 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar4 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar1 == '\0') {
      puVar5 = &unknown_var_1728_ptr;
    }
    else {
      puVar5 = (void *)__std_type_info_name(0x180bfc198,0x180c827e0);
    }
    uVar6 = (**(code **)(*plVar3 + 8))(plVar3,iVar2,puVar5,&unknown_var_1664_ptr,0x71);
  }
  param_1[2] = uVar6;
  __0MutexImpl_shdfnd_physx__QEAA_XZ(uVar6);
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(int8_t *)(param_1 + 7) = 0;
  return param_1;
}






// 函数: void FUN_1806b6b1c(void)
void FUN_1806b6b1c(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint64_t uVar4;
  longlong unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  
  plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar3 = (longlong *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 != '\0') {
    __std_type_info_name(0x180bfc198,0x180c827e0);
  }
  uVar4 = (**(code **)(*plVar2 + 8))(plVar2);
  *(uint64_t *)(unaff_RBX + 0x10) = uVar4;
  __0MutexImpl_shdfnd_physx__QEAA_XZ(uVar4);
  *(uint64_t *)(unaff_RBX + 0x18) = unaff_RSI;
  *(uint64_t *)(unaff_RBX + 0x20) = unaff_RBP;
  *(uint64_t *)(unaff_RBX + 0x28) = unaff_RBP;
  *(uint64_t *)(unaff_RBX + 0x30) = unaff_RBP;
  *(char *)(unaff_RBX + 0x38) = (char)unaff_RBP;
  return;
}






// 函数: void FUN_1806b6b7d(void)
void FUN_1806b6b7d(void)

{
  longlong unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  
  *(uint64_t *)(unaff_RBX + 0x10) = unaff_RBP;
  __0MutexImpl_shdfnd_physx__QEAA_XZ();
  *(uint64_t *)(unaff_RBX + 0x18) = unaff_RSI;
  *(uint64_t *)(unaff_RBX + 0x20) = unaff_RBP;
  *(uint64_t *)(unaff_RBX + 0x28) = unaff_RBP;
  *(uint64_t *)(unaff_RBX + 0x30) = unaff_RBP;
  *(char *)(unaff_RBX + 0x38) = (char)unaff_RBP;
  return;
}






// 函数: void FUN_1806b6bc0(uint64_t *param_1)
void FUN_1806b6bc0(uint64_t *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &unknown_var_6672_ptr;
  param_1[1] = &unknown_var_6728_ptr;
  (**(code **)(*(longlong *)param_1[3] + 0x50))((longlong *)param_1[3],param_1);
  lVar1 = param_1[5];
  if ((((*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x34))) && (lVar1 != 0)) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  __1MutexImpl_shdfnd_physx__QEAA_XZ(param_1[2]);
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  param_1[1] = &unknown_var_1808_ptr;
  *param_1 = &unknown_var_5632_ptr;
  return;
}






// 函数: void FUN_1806b6c80(longlong param_1)
void FUN_1806b6c80(longlong param_1)

{
  uint64_t uVar1;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    *(int8_t *)(param_1 + 0x38) = 1;
    uVar1 = FUN_1806a3140(*(uint64_t *)(param_1 + 0x18));
    *(uint64_t *)(param_1 + 0x20) = uVar1;
  }
  return;
}






// 函数: void FUN_1806b6cb0(longlong *param_1)
void FUN_1806b6cb0(longlong *param_1)

{
  if ((char)param_1[7] != '\0') {
    *(int8_t *)(param_1 + 7) = 0;
    (**(code **)(*param_1 + 0x28))();
    (**(code **)(*(longlong *)param_1[4] + 0xa0))();
    param_1[4] = 0;
  }
  return;
}






// 函数: void FUN_1806b6cf0(longlong param_1)
void FUN_1806b6cf0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    do {
      (**(code **)(*(longlong *)
                    (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar2 * 8) + 8) +
                    0x18) + 8))();
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x30));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806b6d70(longlong param_1,longlong param_2)
void FUN_1806b6d70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plStackX_8;
  
  plVar2 = (longlong *)
           (**(code **)(*_DAT_180be0050 + 8))
                     (_DAT_180be0050,0x18,&unknown_var_6872_ptr,&unknown_var_6800_ptr,0x96);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x18);
    *plVar2 = (longlong)&unknown_var_6752_ptr;
    plVar2[2] = lVar1;
    plVar2[1] = param_2;
  }
  plStackX_8 = plVar2;
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 8));
  (**(code **)(*plVar2 + 0x20))(plVar2);
  if (*(uint *)(param_1 + 0x28) < (*(uint *)(param_1 + 0x2c) & 0x7fffffff)) {
    *(longlong **)(*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28) * 8) =
         plVar2;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  else {
    FUN_1806b7110(param_1 + 0x20,&plStackX_8);
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 8));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806b6e30(longlong param_1,longlong param_2)
void FUN_1806b6e30(longlong param_1,longlong param_2)

{
  uint64_t *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x28) == 0) {
    return;
  }
  do {
    if (param_2 == *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar3 * 8) + 8)) {
      _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 8));
      puVar1 = *(uint64_t **)(*(longlong *)(param_1 + 0x20) + uVar3 * 8);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      *(uint64_t *)(*(longlong *)(param_1 + 0x20) + uVar3 * 8) =
           *(uint64_t *)(*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28) * 8)
      ;
      if (puVar1 != (uint64_t *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        (**(code **)(*_DAT_180be0050 + 0x10))(_DAT_180be0050,puVar1);
      }
                    // WARNING: Subroutine does not return
      _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 8));
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 < *(uint *)(param_1 + 0x28));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806b6e4a(uint param_1,longlong param_2,uint64_t param_3,longlong param_4)
void FUN_1806b6e4a(uint param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  uint64_t *puVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong unaff_RDI;
  
  do {
    if (param_2 == *(longlong *)(*(longlong *)(param_4 + in_RAX * 8) + 8)) {
      _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RDI + 8));
      puVar1 = *(uint64_t **)(*(longlong *)(unaff_RDI + 0x20) + (in_RAX & 0xffffffff) * 8);
      *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) + -1;
      *(uint64_t *)(*(longlong *)(unaff_RDI + 0x20) + (in_RAX & 0xffffffff) * 8) =
           *(uint64_t *)
            (*(longlong *)(unaff_RDI + 0x20) + (ulonglong)*(uint *)(unaff_RDI + 0x28) * 8);
      if (puVar1 != (uint64_t *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        (**(code **)(*_DAT_180be0050 + 0x10))(_DAT_180be0050,puVar1);
      }
                    // WARNING: Subroutine does not return
      _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RDI + 8));
    }
    uVar2 = (int)in_RAX + 1;
    in_RAX = (ulonglong)uVar2;
  } while (uVar2 < param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806b6e6d(void)
void FUN_1806b6e6d(void)

{
  uint64_t *puVar1;
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RDI + 8));
  puVar1 = *(uint64_t **)(*(longlong *)(unaff_RDI + 0x20) + unaff_RBX * 8);
  *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) + -1;
  *(uint64_t *)(*(longlong *)(unaff_RDI + 0x20) + unaff_RBX * 8) =
       *(uint64_t *)(*(longlong *)(unaff_RDI + 0x20) + (ulonglong)*(uint *)(unaff_RDI + 0x28) * 8)
  ;
  if (puVar1 != (uint64_t *)0x0) {
    (**(code **)*puVar1)(puVar1,0);
    (**(code **)(*_DAT_180be0050 + 0x10))(_DAT_180be0050,puVar1);
  }
                    // WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RDI + 8));
}






// 函数: void FUN_1806b6ec7(void)
void FUN_1806b6ec7(void)

{
  return;
}



uint64_t * FUN_1806b6ee0(uint64_t *param_1,uint param_2)

{
  longlong *plVar1;
  
  *param_1 = &unknown_var_6752_ptr;
  (**(code **)(*(longlong *)param_1[1] + 0x10))((longlong *)param_1[1],param_1);
  *param_1 = &unknown_var_1808_ptr;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar1 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x18);
  }
  return param_1;
}



uint64_t * FUN_1806b6f60(uint64_t *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &unknown_var_6672_ptr;
  param_1[1] = &unknown_var_6728_ptr;
  (**(code **)(*(longlong *)param_1[3] + 0x50))((longlong *)param_1[3],param_1);
  lVar1 = param_1[5];
  if ((((*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x34))) && (lVar1 != 0)) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  __1MutexImpl_shdfnd_physx__QEAA_XZ(param_1[2]);
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  param_1[1] = &unknown_var_1808_ptr;
  *param_1 = &unknown_var_5632_ptr;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x40);
  }
  return param_1;
}






// 函数: void FUN_1806b7050(longlong *param_1)
void FUN_1806b7050(longlong *param_1)

{
  longlong lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint auStack_28 [2];
  longlong lStack_20;
  void *puStack_18;
  void *puStack_10;
  
  lVar1 = *(longlong *)param_1[2];
  uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x20))();
  (**(code **)(lVar1 + 0xb0))(param_1[2],param_1[1],uVar2);
  puStack_18 = &unknown_var_1904_ptr;
  puStack_10 = &unknown_var_2040_ptr;
  (**(code **)(*(longlong *)param_1[2] + 8))((longlong *)param_1[2],&puStack_18,param_1[1]);
  (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],param_1);
  (*(code *)**(uint64_t **)(param_1[1] + 8))((uint64_t *)(param_1[1] + 8),auStack_28);
  uVar3 = 0;
  if (auStack_28[0] != 0) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,(ulonglong)uVar3 * 0x10 + lStack_20);
      uVar3 = uVar3 + 1;
    } while (uVar3 < auStack_28[0]);
  }
  return;
}



uint64_t * FUN_1806b7110(longlong *param_1,uint64_t *param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  void *puVar6;
  uint64_t *puVar7;
  ulonglong uVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
  if (uVar3 == 0) {
    uVar12 = 1;
LAB_1806b713d:
    if ((ulonglong)uVar12 != 0) {
      plVar4 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar5 = (longlong *)PxGetFoundation();
      cVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
      if (cVar2 == '\0') {
        puVar6 = &unknown_var_1728_ptr;
      }
      else {
        puVar6 = (void *)__std_type_info_name(0x180bfc4a8,0x180c827e0);
      }
      puVar7 = (uint64_t *)
               (**(code **)(*plVar4 + 8))(plVar4,(ulonglong)uVar12 << 3,puVar6,&unknown_var_2784_ptr,0x229)
      ;
      goto LAB_1806b71b3;
    }
  }
  else {
    uVar12 = uVar3 * 2;
    if (uVar3 != 0) goto LAB_1806b713d;
  }
  puVar7 = (uint64_t *)0x0;
LAB_1806b71b3:
  uVar11 = 0;
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  puVar9 = (uint64_t *)*param_1;
  if (puVar7 < puVar7 + uVar8) {
    uVar13 = (ulonglong)*(uint *)(param_1 + 1);
    if (puVar7 + uVar8 < puVar7) {
      uVar13 = 0;
    }
    puVar10 = puVar7;
    if (uVar13 != 0) {
      do {
        uVar11 = uVar11 + 1;
        *puVar10 = *puVar9;
        puVar10 = puVar10 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar11 < uVar13);
      uVar8 = (ulonglong)*(uint *)(param_1 + 1);
    }
  }
  puVar7[uVar8] = *param_2;
  lVar1 = *param_1;
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar1 != 0)) {
    plVar4 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar4 + 0x10))(plVar4,lVar1);
  }
  uVar3 = *(uint *)(param_1 + 1);
  *param_1 = (longlong)puVar7;
  *(uint *)((longlong)param_1 + 0xc) = uVar12;
  *(uint *)(param_1 + 1) = uVar3 + 1;
  return puVar7 + uVar3;
}



uint64_t * FUN_1806b7122(uint64_t param_1,uint64_t *param_2)

{
  longlong lVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  void *puVar6;
  uint64_t *puVar7;
  ulonglong uVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *unaff_RDI;
  ulonglong uVar13;
  
  uVar3 = in_EAX & 0x7fffffff;
  if (uVar3 == 0) {
    uVar12 = 1;
LAB_1806b713d:
    if ((ulonglong)uVar12 != 0) {
      plVar4 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar5 = (longlong *)PxGetFoundation();
      cVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
      if (cVar2 == '\0') {
        puVar6 = &unknown_var_1728_ptr;
      }
      else {
        puVar6 = (void *)__std_type_info_name(0x180bfc4a8,0x180c827e0);
      }
      puVar7 = (uint64_t *)
               (**(code **)(*plVar4 + 8))(plVar4,(ulonglong)uVar12 << 3,puVar6,&unknown_var_2784_ptr,0x229)
      ;
      goto LAB_1806b71b3;
    }
  }
  else {
    uVar12 = uVar3 * 2;
    if (uVar3 != 0) goto LAB_1806b713d;
  }
  puVar7 = (uint64_t *)0x0;
LAB_1806b71b3:
  uVar11 = 0;
  uVar8 = (ulonglong)*(uint *)(unaff_RDI + 1);
  puVar9 = (uint64_t *)*unaff_RDI;
  if (puVar7 < puVar7 + uVar8) {
    uVar13 = (ulonglong)*(uint *)(unaff_RDI + 1);
    if (puVar7 + uVar8 < puVar7) {
      uVar13 = 0;
    }
    puVar10 = puVar7;
    if (uVar13 != 0) {
      do {
        uVar11 = uVar11 + 1;
        *puVar10 = *puVar9;
        puVar10 = puVar10 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar11 < uVar13);
      uVar8 = (ulonglong)*(uint *)(unaff_RDI + 1);
    }
  }
  puVar7[uVar8] = *param_2;
  lVar1 = *unaff_RDI;
  if ((-1 < *(int *)((longlong)unaff_RDI + 0xc)) && (lVar1 != 0)) {
    plVar4 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar4 + 0x10))(plVar4,lVar1);
  }
  uVar3 = *(uint *)(unaff_RDI + 1);
  *unaff_RDI = (longlong)puVar7;
  *(uint *)((longlong)unaff_RDI + 0xc) = uVar12;
  *(uint *)(unaff_RDI + 1) = uVar3 + 1;
  return puVar7 + uVar3;
}



uint64_t * FUN_1806b714a(void)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  ulonglong unaff_RBX;
  int32_t unaff_EBP;
  longlong *unaff_RDI;
  ulonglong uVar10;
  uint64_t *unaff_R15;
  
  plVar4 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar5 = (longlong *)PxGetFoundation();
  cVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
  if (cVar3 != '\0') {
    __std_type_info_name(0x180bfc4a8,0x180c827e0);
  }
  puVar6 = (uint64_t *)(**(code **)(*plVar4 + 8))(plVar4);
  uVar7 = (ulonglong)*(uint *)(unaff_RDI + 1);
  puVar8 = (uint64_t *)*unaff_RDI;
  if (puVar6 < puVar6 + uVar7) {
    uVar10 = (ulonglong)*(uint *)(unaff_RDI + 1);
    if (puVar6 + uVar7 < puVar6) {
      uVar10 = unaff_RBX;
    }
    puVar9 = puVar6;
    if (uVar10 != 0) {
      do {
        unaff_RBX = unaff_RBX + 1;
        *puVar9 = *puVar8;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      } while (unaff_RBX < uVar10);
      uVar7 = (ulonglong)*(uint *)(unaff_RDI + 1);
    }
  }
  puVar6[uVar7] = *unaff_R15;
  lVar2 = *unaff_RDI;
  if ((-1 < *(int *)((longlong)unaff_RDI + 0xc)) && (lVar2 != 0)) {
    plVar4 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar4 + 0x10))(plVar4,lVar2);
  }
  uVar1 = *(uint *)(unaff_RDI + 1);
  *unaff_RDI = (longlong)puVar6;
  *(int32_t *)((longlong)unaff_RDI + 0xc) = unaff_EBP;
  *(uint *)(unaff_RDI + 1) = uVar1 + 1;
  return puVar6 + uVar1;
}



// WARNING: Removing unreachable block (ram,0x0001806b71c8)

longlong FUN_1806b71ae(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int32_t unaff_EBP;
  longlong *unaff_RDI;
  uint64_t *unaff_R15;
  
  puVar6 = (uint64_t *)0x0;
  uVar1 = *(uint *)(unaff_RDI + 1);
  uVar3 = (ulonglong)uVar1;
  puVar5 = (uint64_t *)*unaff_RDI;
  if ((uVar3 != 0) && (puVar7 = puVar6, (uint64_t *)(ulonglong)uVar1 != (uint64_t *)0x0)) {
    do {
      puVar7 = (uint64_t *)((longlong)puVar7 + 1);
      *puVar6 = *puVar5;
      puVar6 = puVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (puVar7 < (uint64_t *)(ulonglong)uVar1);
    uVar3 = (ulonglong)*(uint *)(unaff_RDI + 1);
  }
  *(uint64_t *)(uVar3 * 8) = *unaff_R15;
  lVar2 = *unaff_RDI;
  if ((-1 < *(int *)((longlong)unaff_RDI + 0xc)) && (lVar2 != 0)) {
    plVar4 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar4 + 0x10))(plVar4,lVar2);
  }
  uVar1 = *(uint *)(unaff_RDI + 1);
  *unaff_RDI = 0;
  *(int32_t *)((longlong)unaff_RDI + 0xc) = unaff_EBP;
  *(uint *)(unaff_RDI + 1) = uVar1 + 1;
  return (ulonglong)uVar1 * 8;
}



longlong FUN_1806b7201(void)

{
  uint uVar1;
  longlong *plVar2;
  longlong unaff_RBX;
  int32_t unaff_EBP;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  if (unaff_RBX != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  uVar1 = *(uint *)(unaff_RDI + 1);
  *unaff_RDI = unaff_RSI;
  *(int32_t *)((longlong)unaff_RDI + 0xc) = unaff_EBP;
  *(uint *)(unaff_RDI + 1) = uVar1 + 1;
  return unaff_RSI + (ulonglong)uVar1 * 8;
}






// 函数: void FUN_1806b7240(longlong param_1,longlong param_2,ulonglong param_3)
void FUN_1806b7240(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lStack_28;
  longlong lStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  lStack_20 = param_2 + (param_3 & 0xffffffff);
  uStack_18 = 0x8094a280;
  uStack_14 = 1;
  uStack_10 = 0x8094a288;
  uStack_c = 1;
  lStack_28 = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),*(uint64_t *)(param_1 + 8),&unknown_var_1016_ptr,&lStack_28,
             &uStack_18);
  return;
}






// 函数: void FUN_1806b72b0(longlong param_1,uint64_t *param_2)
void FUN_1806b72b0(longlong param_1,uint64_t *param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb8))
            (*(longlong **)(param_1 + 0x10),*(uint64_t *)(param_1 + 8),*param_2,
             *(int16_t *)(param_2 + 1),*(int8_t *)((longlong)param_2 + 10));
  return;
}






// 函数: void FUN_1806b72e0(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4,
void FUN_1806b72e0(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4,
                  int8_t param_5)

{
  FUN_1806bef10(1,param_1,param_2,param_3,param_4,param_5);
  return;
}






// 函数: void FUN_1806b7310(uint64_t param_1,int32_t param_2,uint64_t param_3,int8_t param_4)
void FUN_1806b7310(uint64_t param_1,int32_t param_2,uint64_t param_3,int8_t param_4)

{
  int32_t auStackX_10 [6];
  
  auStackX_10[0] = param_2;
  FUN_1806bef10(0,param_1,auStackX_10,1,param_3,param_4);
  return;
}






// 函数: void FUN_1806b7350(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4,
void FUN_1806b7350(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4,
                  int8_t param_5)

{
  FUN_1806bdc70(1,param_1,param_2,param_3,param_4,param_5);
  return;
}






