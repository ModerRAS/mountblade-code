#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_10_part001.c - 18 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_10.c - 500 个函数


// 函数: void FUN_1806a2980(int64_t param_1,uint64_t param_2)
void FUN_1806a2980(int64_t param_1,uint64_t param_2)

{
  uint64_t auStackX_10 [3];
  
  auStackX_10[0] = param_2;
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
  func_0x0001806a28d0(param_1 + 0x20,auStackX_10);
                    // WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
}



uint64_t * FUN_1806a29d0(int64_t *param_1,uint64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  void *puVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  
  uVar3 = *(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff;
  if (uVar3 == 0) {
    uVar12 = 1;
LAB_1806a29fd:
    if ((uint64_t)uVar12 != 0) {
      plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar5 = (int64_t *)PxGetFoundation();
      cVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
      if (cVar2 == '\0') {
        puVar6 = &ui_system_data_1728_ptr;
      }
      else {
        puVar6 = (void *)__std_type_info_name(0x180bfc208,0x180c827e0);
      }
      puVar7 = (uint64_t *)
               (**(code **)(*plVar4 + 8))(plVar4,(uint64_t)uVar12 << 3,puVar6,&rendering_buffer_2784_ptr,0x229)
      ;
      goto LAB_1806a2a73;
    }
  }
  else {
    uVar12 = uVar3 * 2;
    if (uVar3 != 0) goto LAB_1806a29fd;
  }
  puVar7 = (uint64_t *)0x0;
LAB_1806a2a73:
  uVar11 = 0;
  uVar8 = (uint64_t)*(uint *)(param_1 + 1);
  puVar9 = (uint64_t *)*param_1;
  if (puVar7 < puVar7 + uVar8) {
    uVar13 = (uint64_t)*(uint *)(param_1 + 1);
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
      uVar8 = (uint64_t)*(uint *)(param_1 + 1);
    }
  }
  puVar7[uVar8] = *param_2;
  lVar1 = *param_1;
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (lVar1 != 0)) {
    plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar4 + 0x10))(plVar4,lVar1);
  }
  uVar3 = *(uint *)(param_1 + 1);
  *param_1 = (int64_t)puVar7;
  *(uint *)((int64_t)param_1 + 0xc) = uVar12;
  *(uint *)(param_1 + 1) = uVar3 + 1;
  return puVar7 + uVar3;
}



uint64_t * FUN_1806a29e2(uint64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  void *puVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  uint uVar12;
  int64_t *unaff_RDI;
  uint64_t uVar13;
  
  uVar3 = in_EAX & 0x7fffffff;
  if (uVar3 == 0) {
    uVar12 = 1;
LAB_1806a29fd:
    if ((uint64_t)uVar12 != 0) {
      plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar5 = (int64_t *)PxGetFoundation();
      cVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
      if (cVar2 == '\0') {
        puVar6 = &ui_system_data_1728_ptr;
      }
      else {
        puVar6 = (void *)__std_type_info_name(0x180bfc208,0x180c827e0);
      }
      puVar7 = (uint64_t *)
               (**(code **)(*plVar4 + 8))(plVar4,(uint64_t)uVar12 << 3,puVar6,&rendering_buffer_2784_ptr,0x229)
      ;
      goto LAB_1806a2a73;
    }
  }
  else {
    uVar12 = uVar3 * 2;
    if (uVar3 != 0) goto LAB_1806a29fd;
  }
  puVar7 = (uint64_t *)0x0;
LAB_1806a2a73:
  uVar11 = 0;
  uVar8 = (uint64_t)*(uint *)(unaff_RDI + 1);
  puVar9 = (uint64_t *)*unaff_RDI;
  if (puVar7 < puVar7 + uVar8) {
    uVar13 = (uint64_t)*(uint *)(unaff_RDI + 1);
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
      uVar8 = (uint64_t)*(uint *)(unaff_RDI + 1);
    }
  }
  puVar7[uVar8] = *param_2;
  lVar1 = *unaff_RDI;
  if ((-1 < *(int *)((int64_t)unaff_RDI + 0xc)) && (lVar1 != 0)) {
    plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar4 + 0x10))(plVar4,lVar1);
  }
  uVar3 = *(uint *)(unaff_RDI + 1);
  *unaff_RDI = (int64_t)puVar7;
  *(uint *)((int64_t)unaff_RDI + 0xc) = uVar12;
  *(uint *)(unaff_RDI + 1) = uVar3 + 1;
  return puVar7 + uVar3;
}



uint64_t * FUN_1806a2a0a(void)

{
  uint uVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t unaff_RBX;
  int32_t unaff_EBP;
  int64_t *unaff_RDI;
  uint64_t uVar10;
  uint64_t *unaff_R15;
  
  plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar5 = (int64_t *)PxGetFoundation();
  cVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
  if (cVar3 != '\0') {
    __std_type_info_name(0x180bfc208,0x180c827e0);
  }
  puVar6 = (uint64_t *)(**(code **)(*plVar4 + 8))(plVar4);
  uVar7 = (uint64_t)*(uint *)(unaff_RDI + 1);
  puVar8 = (uint64_t *)*unaff_RDI;
  if (puVar6 < puVar6 + uVar7) {
    uVar10 = (uint64_t)*(uint *)(unaff_RDI + 1);
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
      uVar7 = (uint64_t)*(uint *)(unaff_RDI + 1);
    }
  }
  puVar6[uVar7] = *unaff_R15;
  lVar2 = *unaff_RDI;
  if ((-1 < *(int *)((int64_t)unaff_RDI + 0xc)) && (lVar2 != 0)) {
    plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar4 + 0x10))(plVar4,lVar2);
  }
  uVar1 = *(uint *)(unaff_RDI + 1);
  *unaff_RDI = (int64_t)puVar6;
  *(int32_t *)((int64_t)unaff_RDI + 0xc) = unaff_EBP;
  *(uint *)(unaff_RDI + 1) = uVar1 + 1;
  return puVar6 + uVar1;
}



// WARNING: Removing unreachable block (ram,0x0001806a2a88)

int64_t FUN_1806a2a6e(void)

{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int32_t unaff_EBP;
  int64_t *unaff_RDI;
  uint64_t *unaff_R15;
  
  puVar6 = (uint64_t *)0x0;
  uVar1 = *(uint *)(unaff_RDI + 1);
  uVar3 = (uint64_t)uVar1;
  puVar5 = (uint64_t *)*unaff_RDI;
  if ((uVar3 != 0) && (puVar7 = puVar6, (uint64_t *)(uint64_t)uVar1 != (uint64_t *)0x0)) {
    do {
      puVar7 = (uint64_t *)((int64_t)puVar7 + 1);
      *puVar6 = *puVar5;
      puVar6 = puVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (puVar7 < (uint64_t *)(uint64_t)uVar1);
    uVar3 = (uint64_t)*(uint *)(unaff_RDI + 1);
  }
  *(uint64_t *)(uVar3 * 8) = *unaff_R15;
  lVar2 = *unaff_RDI;
  if ((-1 < *(int *)((int64_t)unaff_RDI + 0xc)) && (lVar2 != 0)) {
    plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar4 + 0x10))(plVar4,lVar2);
  }
  uVar1 = *(uint *)(unaff_RDI + 1);
  *unaff_RDI = 0;
  *(int32_t *)((int64_t)unaff_RDI + 0xc) = unaff_EBP;
  *(uint *)(unaff_RDI + 1) = uVar1 + 1;
  return (uint64_t)uVar1 * 8;
}



int64_t FUN_1806a2ac1(void)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t unaff_RBX;
  int32_t unaff_EBP;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  
  if (unaff_RBX != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  uVar1 = *(uint *)(unaff_RDI + 1);
  *unaff_RDI = unaff_RSI;
  *(int32_t *)((int64_t)unaff_RDI + 0xc) = unaff_EBP;
  *(uint *)(unaff_RDI + 1) = uVar1 + 1;
  return unaff_RSI + (uint64_t)uVar1 * 8;
}






// 函数: void FUN_1806a2b00(int64_t param_1,uint64_t param_2)
void FUN_1806a2b00(int64_t param_1,uint64_t param_2)

{
  uint64_t auStackX_10 [3];
  
  auStackX_10[0] = param_2;
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
  func_0x0001806a28d0(param_1 + 0x20,auStackX_10);
                    // WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
}



uint64_t FUN_1806a2b50(int64_t param_1)

{
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
  return *(uint64_t *)(param_1 + 8);
}






// 函数: void FUN_1806a2b70(int64_t param_1)
void FUN_1806a2b70(int64_t param_1)

{
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  }
                    // WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
}






// 函数: void FUN_1806a2bd0(int64_t param_1,uint64_t param_2)
void FUN_1806a2bd0(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (uint)param_2;
  if ((uVar4 == 0) || ((uVar4 & uVar4 - 1) != 0)) {
    uVar4 = (uint)(param_2 >> 1) & 0x7fffffff | uVar4;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = (uVar4 >> 0x10 | uVar4) + 1;
  }
  uVar2 = 0;
  iVar5 = (int)(int64_t)((float)uVar4 * *(float *)(param_1 + 0x28));
  iVar3 = uVar4 * 4 + iVar5 * 4;
  iVar3 = iVar5 * 0x10 + iVar3 + (-iVar3 & 0xfU);
  if (iVar3 != 0) {
    plVar1 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1,iVar3,&ui_system_data_1832_ptr,&rendering_buffer_2848_ptr,0x174);
  }
                    // WARNING: Subroutine does not return
  memset(uVar2,0xffffffff,uVar4 * 4);
}






// 函数: void FUN_1806a2dc0(int64_t param_1,int64_t *param_2)
void FUN_1806a2dc0(int64_t param_1,int64_t *param_2)

{
  int32_t auStackX_8 [2];
  
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0xc);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x10);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x18);
  auStackX_8[0] = *(int32_t *)(param_1 + 0x20);
  (**(code **)(*param_2 + 0x40))(param_2,auStackX_8);
  *(int32_t *)(param_1 + 0x20) = auStackX_8[0];
  return;
}






// 函数: void FUN_1806a2e90(int64_t param_1,uint64_t *param_2)
void FUN_1806a2e90(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  char *pcVar2;
  int aiStackX_8 [2];
  
  aiStackX_8[0] = 0;
  pcVar2 = "";
  if ((char *)*param_2 != (char *)0x0) {
    pcVar2 = (char *)*param_2;
  }
  if (*pcVar2 != '\0') {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (pcVar2[lVar1] != '\0');
    aiStackX_8[0] = (int)lVar1 + 1;
  }
  (**(code **)(**(int64_t **)(param_1 + 8) + 0x18))(*(int64_t **)(param_1 + 8),aiStackX_8,4);
  (**(code **)(**(int64_t **)(param_1 + 8) + 0x18))
            (*(int64_t **)(param_1 + 8),*param_2,aiStackX_8[0]);
  return;
}






// 函数: void FUN_1806a2f10(int64_t *param_1,int64_t param_2)
void FUN_1806a2f10(int64_t *param_1,int64_t param_2)

{
  (**(code **)(*(int64_t *)param_1[1] + 0x18))((int64_t *)param_1[1],param_2 + 0x10,4);
  (**(code **)(*(int64_t *)param_1[1] + 0x18))((int64_t *)param_1[1],param_2,0xc);
  (**(code **)(*(int64_t *)param_1[1] + 0x18))((int64_t *)param_1[1],param_2 + 0xc,4);
                    // WARNING: Could not recover jumptable at 0x0001806a2f6f. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x28))(param_1,param_2 + 0x18);
  return;
}






// 函数: void FUN_1806a2f80(int64_t param_1,uint64_t *param_2)
void FUN_1806a2f80(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int aiStackX_8 [2];
  
  uVar1 = *param_2;
  aiStackX_8[0] = *(int *)(param_2 + 1) - (int)uVar1;
  (**(code **)(**(int64_t **)(param_1 + 8) + 0x18))(*(int64_t **)(param_1 + 8),aiStackX_8,4);
  (**(code **)(**(int64_t **)(param_1 + 8) + 0x18))
            (*(int64_t **)(param_1 + 8),uVar1,aiStackX_8[0]);
  return;
}






// 函数: void FUN_1806a2fd0(int64_t param_1,int64_t *param_2)
void FUN_1806a2fd0(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint uVar3;
  uint auStackX_8 [2];
  
  lVar1 = *param_2;
  auStackX_8[0] = (uint)(param_2[1] - lVar1 >> 4);
  (**(code **)(**(int64_t **)(param_1 + 8) + 0x18))(*(int64_t **)(param_1 + 8),auStackX_8,4);
  uVar3 = 0;
  if (auStackX_8[0] != 0) {
    do {
      plVar2 = (int64_t *)((uint64_t)uVar3 * 0x10 + lVar1);
      (**(code **)(*plVar2 + 8))(plVar2,param_1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < auStackX_8[0]);
  }
  return;
}






// 函数: void FUN_1806a3040(int64_t param_1,int64_t *param_2)
void FUN_1806a3040(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint uVar3;
  uint auStackX_8 [2];
  
  lVar1 = *param_2;
  auStackX_8[0] = (uint)(param_2[1] - lVar1 >> 5);
  (**(code **)(**(int64_t **)(param_1 + 8) + 0x18))(*(int64_t **)(param_1 + 8),auStackX_8,4);
  uVar3 = 0;
  if (auStackX_8[0] != 0) {
    do {
      plVar2 = (int64_t *)((uint64_t)uVar3 * 0x20 + lVar1);
      (**(code **)(*plVar2 + 8))(plVar2,param_1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < auStackX_8[0]);
  }
  return;
}






// 函数: void FUN_1806a30b0(int64_t param_1,int64_t *param_2)
void FUN_1806a30b0(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int aiStackX_8 [2];
  
  lVar1 = *param_2;
  aiStackX_8[0] = (int)(param_2[1] - lVar1 >> 2);
  (**(code **)(**(int64_t **)(param_1 + 8) + 0x18))(*(int64_t **)(param_1 + 8),aiStackX_8,4);
  (**(code **)(**(int64_t **)(param_1 + 8) + 0x18))
            (*(int64_t **)(param_1 + 8),lVar1,aiStackX_8[0] * 4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1806a3140(int64_t *param_1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  if (param_1 == (int64_t *)0x0) {
    uVar1 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
    _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
              (uVar1,4,&memory_allocator_3824_ptr,0x35b,&processed_var_4208_ptr);
    return (uint64_t *)0x0;
  }
  puVar2 = (uint64_t *)
           (**(code **)(*system_system_buffer_config + 8))
                     (system_system_buffer_config,0x1f8,&processed_var_4256_ptr,&memory_allocator_3824_ptr,0x360);
  if (puVar2 != (uint64_t *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x70))(param_1);
    uVar3 = (**(code **)(*param_1 + 0x68))(param_1);
    uVar4 = (**(code **)(*param_1 + 0x30))(param_1);
    *puVar2 = &memory_allocator_3888_ptr;
    puVar2[1] = &processed_var_4112_ptr;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *(int32_t *)(puVar2 + 7) = 0x3f400000;
    *(int32_t *)((int64_t)puVar2 + 0x3c) = 0xffffffff;
    puVar2[8] = 0;
    FUN_1806a6390(puVar2 + 2,0x40);
    puVar2[9] = uVar3;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xe] = puVar2[9];
    puVar2[0xc] = &memory_allocator_3720_ptr;
    puVar2[0xd] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    *(int32_t *)(puVar2 + 0x17) = 0;
    puVar2[0x18] = &rendering_buffer_2232_ptr;
    puVar2[0x19] = &system_buffer_ptr;
    puVar2[0x1a] = &system_buffer_ptr;
    puVar2[0x1b] = 0xffffffffffffffff;
    puVar2[0x1c] = 0xffffffffffffffff;
    puVar2[0x1d] = 0;
    *(int32_t *)(puVar2 + 0x1e) = 0;
    puVar2[0x1f] = 0;
    puVar2[0x20] = 0;
    puVar2[0x21] = 0;
    *(int32_t *)(puVar2 + 0x22) = 0;
    puVar2[0x23] = 0;
    puVar2[0x24] = 0;
    *(int16_t *)(puVar2 + 0x25) = 0;
    puVar2[0x26] = &memory_allocator_3712_ptr;
    puVar2[0x27] = &system_buffer_ptr;
    puVar2[0x28] = &system_buffer_ptr;
    *(int32_t *)(puVar2 + 0x29) = 0xffffffff;
    puVar2[0x2a] = &system_buffer_ptr;
    puVar2[0x2b] = &system_buffer_ptr;
    *(int32_t *)(puVar2 + 0x2c) = 0xffffffff;
    puVar2[0x2d] = 0;
    puVar2[0x2e] = 0;
    *(int32_t *)(puVar2 + 0x2f) = 0;
    puVar2[0x30] = 0;
    puVar2[0x31] = 0;
    puVar2[0x32] = 0;
    puVar2[0x33] = 0;
    puVar2[0x34] = 0;
    puVar2[0x35] = &processed_var_4160_ptr;
    puVar2[0x36] = 0;
    *(int8_t *)(puVar2 + 0x37) = 1;
    puVar2[0x38] = uVar1;
    puVar2[0x39] = 0;
    puVar2[0x3a] = 0;
    puVar2[0x3b] = 0;
    puVar2[0x3c] = 0;
    puVar2[0x3d] = 0;
    FUN_1806a5580();
    puVar2[0x3e] = uVar4;
    puVar2[0xd] = puVar2;
    return puVar2;
  }
  return (uint64_t *)0x0;
}



uint64_t *
FUN_1806a3194(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t *unaff_RSI;
  
  puVar1 = (uint64_t *)(**(code **)(*param_1 + 8))(param_1,0x1f8,param_3,param_4,0x360);
  if (puVar1 != (uint64_t *)0x0) {
    uVar2 = (**(code **)(*unaff_RSI + 0x70))();
    uVar3 = (**(code **)(*unaff_RSI + 0x68))();
    uVar4 = (**(code **)(*unaff_RSI + 0x30))();
    *puVar1 = &memory_allocator_3888_ptr;
    puVar1[1] = &processed_var_4112_ptr;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(int32_t *)(puVar1 + 7) = 0x3f400000;
    *(int32_t *)((int64_t)puVar1 + 0x3c) = 0xffffffff;
    puVar1[8] = 0;
    FUN_1806a6390(puVar1 + 2,0x40);
    puVar1[9] = uVar3;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xe] = puVar1[9];
    puVar1[0xc] = &memory_allocator_3720_ptr;
    puVar1[0xd] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    *(int32_t *)(puVar1 + 0x17) = 0;
    puVar1[0x18] = &rendering_buffer_2232_ptr;
    puVar1[0x19] = &system_buffer_ptr;
    puVar1[0x1a] = &system_buffer_ptr;
    puVar1[0x1b] = 0xffffffffffffffff;
    puVar1[0x1c] = 0xffffffffffffffff;
    puVar1[0x1d] = 0;
    *(int32_t *)(puVar1 + 0x1e) = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    *(int32_t *)(puVar1 + 0x22) = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    *(int16_t *)(puVar1 + 0x25) = 0;
    puVar1[0x26] = &memory_allocator_3712_ptr;
    puVar1[0x27] = &system_buffer_ptr;
    puVar1[0x28] = &system_buffer_ptr;
    *(int32_t *)(puVar1 + 0x29) = 0xffffffff;
    puVar1[0x2a] = &system_buffer_ptr;
    puVar1[0x2b] = &system_buffer_ptr;
    *(int32_t *)(puVar1 + 0x2c) = 0xffffffff;
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    *(int32_t *)(puVar1 + 0x2f) = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = &processed_var_4160_ptr;
    puVar1[0x36] = 0;
    *(int8_t *)(puVar1 + 0x37) = 1;
    puVar1[0x38] = uVar2;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    FUN_1806a5580();
    puVar1[0x3e] = uVar4;
    puVar1[0xd] = puVar1;
    return puVar1;
  }
  return (uint64_t *)0x0;
}






// 函数: void FUN_1806a3204(void)
void FUN_1806a3204(void)

{
  return;
}



uint64_t FUN_1806a3210(uint64_t param_1,int64_t param_2,uint param_3)

{
  uint64_t uVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  uVar3 = (uint64_t)param_3;
  if (param_2 == 0) {
    if ((param_3 != 0) && (uVar4 = uVar3, param_3 != 0)) {
      do {
        puVar2 = (int32_t *)FUN_1806a5c40(param_1,4);
        *puVar2 = 0;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else if (param_3 != 0) {
    uVar1 = FUN_1806a5c40(param_1,uVar3);
                    // WARNING: Subroutine does not return
    memcpy(uVar1,param_2,param_3);
  }
  return uVar3;
}



uint64_t *
FUN_1806a3290(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &memory_allocator_3888_ptr;
  param_1[1] = &processed_var_4112_ptr;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 7) = 0x3f400000;
  *(int32_t *)((int64_t)param_1 + 0x3c) = 0xffffffff;
  param_1[8] = 0;
  FUN_1806a6390(param_1 + 2,0x40);
  param_1[9] = param_3;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = param_1[9];
  param_1[0xc] = &memory_allocator_3720_ptr;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(int32_t *)(param_1 + 0x17) = 0;
  param_1[0x18] = &rendering_buffer_2232_ptr;
  param_1[0x19] = &system_buffer_ptr;
  param_1[0x1a] = &system_buffer_ptr;
  param_1[0x1b] = 0xffffffffffffffff;
  param_1[0x1c] = 0xffffffffffffffff;
  param_1[0x1d] = 0;
  *(int32_t *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(int32_t *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(int16_t *)(param_1 + 0x25) = 0;
  param_1[0x26] = &memory_allocator_3712_ptr;
  param_1[0x27] = &system_buffer_ptr;
  param_1[0x28] = &system_buffer_ptr;
  *(int32_t *)(param_1 + 0x29) = 0xffffffff;
  param_1[0x2a] = &system_buffer_ptr;
  param_1[0x2b] = &system_buffer_ptr;
  *(int32_t *)(param_1 + 0x2c) = 0xffffffff;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(int32_t *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = &processed_var_4160_ptr;
  param_1[0x36] = 0;
  *(int8_t *)(param_1 + 0x37) = 1;
  param_1[0x38] = param_4;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_1806a5580();
  param_1[0x3e] = param_2;
  param_1[0xd] = param_1;
  return param_1;
}






// 函数: void FUN_1806a34c0(uint64_t *param_1)
void FUN_1806a34c0(uint64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  
  lVar1 = param_1[9];
  if ((((*(uint *)((int64_t)param_1 + 0x54) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0x54))) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  lVar1 = param_1[7];
  if ((((*(uint *)((int64_t)param_1 + 0x44) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0x44))) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  lVar1 = param_1[5];
  if ((((*(uint *)((int64_t)param_1 + 0x34) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0x34))) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  lVar1 = param_1[3];
  if ((((*(uint *)((int64_t)param_1 + 0x24) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0x24))) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  *param_1 = &memory_allocator_3536_ptr;
  return;
}






// 函数: void FUN_1806a3590(int64_t *param_1)
void FUN_1806a3590(int64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint uVar3;
  uint64_t uVar4;
  
  uVar4 = 0;
  if ((int)param_1[1] != 0) {
    do {
      lVar1 = *(int64_t *)(*param_1 + uVar4 * 8);
      if (lVar1 != 0) {
        plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 1));
  }
  lVar1 = *param_1;
  if ((((*(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0xc))) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
                    // WARNING: Could not recover jumptable at 0x0001806a3608. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    return;
  }
  return;
}






// 函数: void FUN_1806a3598(int64_t *param_1)
void FUN_1806a3598(int64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint uVar3;
  uint64_t unaff_RBX;
  
  if ((uint)unaff_RBX < *(uint *)(param_1 + 1)) {
    do {
      lVar1 = *(int64_t *)(*param_1 + unaff_RBX * 8);
      if (lVar1 != 0) {
        plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
      }
      uVar3 = (int)unaff_RBX + 1;
      unaff_RBX = (uint64_t)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 1));
  }
  lVar1 = *param_1;
  if ((((*(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0xc))) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
                    // WARNING: Could not recover jumptable at 0x0001806a3608. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    return;
  }
  return;
}






// 函数: void FUN_1806a35a5(void)
void FUN_1806a35a5(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint uVar3;
  uint64_t unaff_RBX;
  int64_t *unaff_RDI;
  
  do {
    lVar1 = *(int64_t *)(*unaff_RDI + unaff_RBX * 8);
    if (lVar1 != 0) {
      plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    }
    uVar3 = (int)unaff_RBX + 1;
    unaff_RBX = (uint64_t)uVar3;
  } while (uVar3 < *(uint *)(unaff_RDI + 1));
  lVar1 = *unaff_RDI;
  if ((((*(uint *)((int64_t)unaff_RDI + 0xc) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)unaff_RDI + 0xc))) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
                    // WARNING: Could not recover jumptable at 0x0001806a3608. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    return;
  }
  return;
}






// 函数: void FUN_1806a35da(void)
void FUN_1806a35da(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *unaff_RDI;
  
  lVar1 = *unaff_RDI;
  if ((((*(uint *)((int64_t)unaff_RDI + 0xc) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)unaff_RDI + 0xc))) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
                    // WARNING: Could not recover jumptable at 0x0001806a3608. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    return;
  }
  return;
}






