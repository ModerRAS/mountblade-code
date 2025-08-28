#include "TaleWorlds.Native.Split.h"

// 99_part_10_part005_sub002_sub002.c - 1 个函数

// 函数: void FUN_1806a5580(int64_t *param_1)
void FUN_1806a5580(int64_t *param_1)

{
  uint uVar1;
  int64_t *plVar2;
  uint64_t auStackX_8 [4];
  
  uVar1 = *(int *)((int64_t)param_1 + 0x14) + 1;
  if (uVar1 < *(uint *)(param_1 + 1)) {
    *(uint *)((int64_t)param_1 + 0x14) = uVar1;
    *(int32_t *)(param_1 + 2) = 0;
    return;
  }
  plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  auStackX_8[0] = (**(code **)(*plVar2 + 8))(plVar2,0x1000,&ui_system_data_1832_ptr,&memory_allocator_3824_ptr,0xe3);
  if (*(uint *)(param_1 + 1) < (*(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff)) {
    *(uint64_t *)(*param_1 + (uint64_t)*(uint *)(param_1 + 1) * 8) = auStackX_8[0];
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  else {
    FUN_1806a5750(param_1,auStackX_8);
  }
  *(int *)((int64_t)param_1 + 0x14) = (int)param_1[1] + -1;
  *(int32_t *)(param_1 + 2) = 0;
  return;
}



int32_t * FUN_1806a5620(int64_t *param_1,int32_t *param_2)

{
  int32_t uVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  void *puVar7;
  int32_t *puVar8;
  uint64_t uVar9;
  int32_t *puVar10;
  int32_t *puVar11;
  uint64_t uVar12;
  uint uVar13;
  uint64_t uVar14;
  
  uVar4 = *(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff;
  if (uVar4 == 0) {
    uVar13 = 1;
LAB_1806a564d:
    if ((uint64_t)uVar13 != 0) {
      plVar5 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar6 = (int64_t *)PxGetFoundation();
      cVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
      if (cVar3 == '\0') {
        puVar7 = &ui_system_data_1728_ptr;
      }
      else {
        puVar7 = (void *)__std_type_info_name(0x180bfc300,0x180c827e0);
      }
      puVar8 = (int32_t *)
               (**(code **)(*plVar5 + 8))(plVar5,(uint64_t)uVar13 << 2,puVar7,&processed_var_4272_ptr,0x229)
      ;
      goto LAB_1806a56c3;
    }
  }
  else {
    uVar13 = uVar4 * 2;
    if (uVar4 != 0) goto LAB_1806a564d;
  }
  puVar8 = (int32_t *)0x0;
LAB_1806a56c3:
  uVar12 = 0;
  uVar9 = (uint64_t)*(uint *)(param_1 + 1);
  puVar10 = (int32_t *)*param_1;
  if (puVar8 < puVar8 + uVar9) {
    uVar14 = (uint64_t)*(uint *)(param_1 + 1);
    if (puVar8 + uVar9 < puVar8) {
      uVar14 = 0;
    }
    puVar11 = puVar8;
    if (uVar14 != 0) {
      do {
        uVar1 = *puVar10;
        puVar10 = puVar10 + 1;
        uVar12 = uVar12 + 1;
        *puVar11 = uVar1;
        puVar11 = puVar11 + 1;
      } while (uVar12 < uVar14);
      uVar9 = (uint64_t)*(uint *)(param_1 + 1);
    }
  }
  puVar8[uVar9] = *param_2;
  lVar2 = *param_1;
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (lVar2 != 0)) {
    plVar5 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar5 + 0x10))(plVar5,lVar2);
  }
  uVar4 = *(uint *)(param_1 + 1);
  *param_1 = (int64_t)puVar8;
  *(uint *)((int64_t)param_1 + 0xc) = uVar13;
  *(uint *)(param_1 + 1) = uVar4 + 1;
  return puVar8 + uVar4;
}



int32_t * FUN_1806a5632(uint64_t param_1,int32_t *param_2)

{
  int32_t uVar1;
  int64_t lVar2;
  char cVar3;
  uint in_EAX;
  uint uVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  void *puVar7;
  int32_t *puVar8;
  uint64_t uVar9;
  int32_t *puVar10;
  int32_t *puVar11;
  uint64_t uVar12;
  uint uVar13;
  int64_t *unaff_RDI;
  uint64_t uVar14;
  
  uVar4 = in_EAX & 0x7fffffff;
  if (uVar4 == 0) {
    uVar13 = 1;
LAB_1806a564d:
    if ((uint64_t)uVar13 != 0) {
      plVar5 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar6 = (int64_t *)PxGetFoundation();
      cVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
      if (cVar3 == '\0') {
        puVar7 = &ui_system_data_1728_ptr;
      }
      else {
        puVar7 = (void *)__std_type_info_name(0x180bfc300,0x180c827e0);
      }
      puVar8 = (int32_t *)
               (**(code **)(*plVar5 + 8))(plVar5,(uint64_t)uVar13 << 2,puVar7,&processed_var_4272_ptr,0x229)
      ;
      goto LAB_1806a56c3;
    }
  }
  else {
    uVar13 = uVar4 * 2;
    if (uVar4 != 0) goto LAB_1806a564d;
  }
  puVar8 = (int32_t *)0x0;
LAB_1806a56c3:
  uVar12 = 0;
  uVar9 = (uint64_t)*(uint *)(unaff_RDI + 1);
  puVar10 = (int32_t *)*unaff_RDI;
  if (puVar8 < puVar8 + uVar9) {
    uVar14 = (uint64_t)*(uint *)(unaff_RDI + 1);
    if (puVar8 + uVar9 < puVar8) {
      uVar14 = 0;
    }
    puVar11 = puVar8;
    if (uVar14 != 0) {
      do {
        uVar1 = *puVar10;
        puVar10 = puVar10 + 1;
        uVar12 = uVar12 + 1;
        *puVar11 = uVar1;
        puVar11 = puVar11 + 1;
      } while (uVar12 < uVar14);
      uVar9 = (uint64_t)*(uint *)(unaff_RDI + 1);
    }
  }
  puVar8[uVar9] = *param_2;
  lVar2 = *unaff_RDI;
  if ((-1 < *(int *)((int64_t)unaff_RDI + 0xc)) && (lVar2 != 0)) {
    plVar5 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar5 + 0x10))(plVar5,lVar2);
  }
  uVar4 = *(uint *)(unaff_RDI + 1);
  *unaff_RDI = (int64_t)puVar8;
  *(uint *)((int64_t)unaff_RDI + 0xc) = uVar13;
  *(uint *)(unaff_RDI + 1) = uVar4 + 1;
  return puVar8 + uVar4;
}



int32_t * FUN_1806a565a(void)

{
  int32_t uVar1;
  uint uVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int32_t *puVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  int32_t *puVar10;
  uint64_t unaff_RBX;
  int32_t unaff_EBP;
  int64_t *unaff_RDI;
  uint64_t uVar11;
  int32_t *unaff_R15;
  
  plVar5 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar6 = (int64_t *)PxGetFoundation();
  cVar4 = (**(code **)(*plVar6 + 0x28))(plVar6);
  if (cVar4 != '\0') {
    __std_type_info_name(0x180bfc300,0x180c827e0);
  }
  puVar7 = (int32_t *)(**(code **)(*plVar5 + 8))(plVar5);
  uVar8 = (uint64_t)*(uint *)(unaff_RDI + 1);
  puVar9 = (int32_t *)*unaff_RDI;
  if (puVar7 < puVar7 + uVar8) {
    uVar11 = (uint64_t)*(uint *)(unaff_RDI + 1);
    if (puVar7 + uVar8 < puVar7) {
      uVar11 = unaff_RBX;
    }
    puVar10 = puVar7;
    if (uVar11 != 0) {
      do {
        uVar1 = *puVar9;
        puVar9 = puVar9 + 1;
        unaff_RBX = unaff_RBX + 1;
        *puVar10 = uVar1;
        puVar10 = puVar10 + 1;
      } while (unaff_RBX < uVar11);
      uVar8 = (uint64_t)*(uint *)(unaff_RDI + 1);
    }
  }
  puVar7[uVar8] = *unaff_R15;
  lVar3 = *unaff_RDI;
  if ((-1 < *(int *)((int64_t)unaff_RDI + 0xc)) && (lVar3 != 0)) {
    plVar5 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar5 + 0x10))(plVar5,lVar3);
  }
  uVar2 = *(uint *)(unaff_RDI + 1);
  *unaff_RDI = (int64_t)puVar7;
  *(int32_t *)((int64_t)unaff_RDI + 0xc) = unaff_EBP;
  *(uint *)(unaff_RDI + 1) = uVar2 + 1;
  return puVar7 + uVar2;
}



// WARNING: Removing unreachable block (ram,0x0001806a56d8)

int64_t FUN_1806a56be(void)

{
  uint uVar1;
  int32_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  int32_t unaff_EBP;
  int64_t *unaff_RDI;
  int32_t *unaff_R15;
  
  puVar7 = (int32_t *)0x0;
  uVar1 = *(uint *)(unaff_RDI + 1);
  uVar4 = (uint64_t)uVar1;
  puVar6 = (int32_t *)*unaff_RDI;
  if ((uVar4 != 0) && (puVar8 = puVar7, (int32_t *)(uint64_t)uVar1 != (int32_t *)0x0)) {
    do {
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = (int32_t *)((int64_t)puVar8 + 1);
      *puVar7 = uVar2;
      puVar7 = puVar7 + 1;
    } while (puVar8 < (int32_t *)(uint64_t)uVar1);
    uVar4 = (uint64_t)*(uint *)(unaff_RDI + 1);
  }
  *(int32_t *)(uVar4 * 4) = *unaff_R15;
  lVar3 = *unaff_RDI;
  if ((-1 < *(int *)((int64_t)unaff_RDI + 0xc)) && (lVar3 != 0)) {
    plVar5 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar5 + 0x10))(plVar5,lVar3);
  }
  uVar1 = *(uint *)(unaff_RDI + 1);
  *unaff_RDI = 0;
  *(int32_t *)((int64_t)unaff_RDI + 0xc) = unaff_EBP;
  *(uint *)(unaff_RDI + 1) = uVar1 + 1;
  return (uint64_t)uVar1 * 4;
}



int64_t FUN_1806a570e(void)

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
  return unaff_RSI + (uint64_t)uVar1 * 4;
}



uint64_t * FUN_1806a5750(int64_t *param_1,uint64_t *param_2)

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
LAB_1806a577d:
    if ((uint64_t)uVar12 != 0) {
      plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar5 = (int64_t *)PxGetFoundation();
      cVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
      if (cVar2 == '\0') {
        puVar6 = &ui_system_data_1728_ptr;
      }
      else {
        puVar6 = (void *)__std_type_info_name(0x180bfc280,0x180c827e0);
      }
      puVar7 = (uint64_t *)
               (**(code **)(*plVar4 + 8))(plVar4,(uint64_t)uVar12 << 3,puVar6,&processed_var_4272_ptr,0x229)
      ;
      goto LAB_1806a57f3;
    }
  }
  else {
    uVar12 = uVar3 * 2;
    if (uVar3 != 0) goto LAB_1806a577d;
  }
  puVar7 = (uint64_t *)0x0;
LAB_1806a57f3:
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



uint64_t * FUN_1806a5762(uint64_t param_1,uint64_t *param_2)

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
LAB_1806a577d:
    if ((uint64_t)uVar12 != 0) {
      plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar5 = (int64_t *)PxGetFoundation();
      cVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
      if (cVar2 == '\0') {
        puVar6 = &ui_system_data_1728_ptr;
      }
      else {
        puVar6 = (void *)__std_type_info_name(0x180bfc280,0x180c827e0);
      }
      puVar7 = (uint64_t *)
               (**(code **)(*plVar4 + 8))(plVar4,(uint64_t)uVar12 << 3,puVar6,&processed_var_4272_ptr,0x229)
      ;
      goto LAB_1806a57f3;
    }
  }
  else {
    uVar12 = uVar3 * 2;
    if (uVar3 != 0) goto LAB_1806a577d;
  }
  puVar7 = (uint64_t *)0x0;
LAB_1806a57f3:
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



uint64_t * FUN_1806a578a(void)

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
    __std_type_info_name(0x180bfc280,0x180c827e0);
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



// WARNING: Removing unreachable block (ram,0x0001806a5808)

int64_t FUN_1806a57ee(void)

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



int64_t FUN_1806a5841(void)

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



uint64_t * FUN_1806a5880(int64_t *param_1,uint64_t *param_2)

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
LAB_1806a58ad:
    if ((uint64_t)uVar12 != 0) {
      plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar5 = (int64_t *)PxGetFoundation();
      cVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
      if (cVar2 == '\0') {
        puVar6 = &ui_system_data_1728_ptr;
      }
      else {
        puVar6 = (void *)__std_type_info_name(0x180bfc238,0x180c827e0);
      }
      puVar7 = (uint64_t *)
               (**(code **)(*plVar4 + 8))(plVar4,(uint64_t)uVar12 << 3,puVar6,&processed_var_4272_ptr,0x229)
      ;
      goto LAB_1806a5923;
    }
  }
  else {
    uVar12 = uVar3 * 2;
    if (uVar3 != 0) goto LAB_1806a58ad;
  }
  puVar7 = (uint64_t *)0x0;
LAB_1806a5923:
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



uint64_t * FUN_1806a5892(uint64_t param_1,uint64_t *param_2)

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
LAB_1806a58ad:
    if ((uint64_t)uVar12 != 0) {
      plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar5 = (int64_t *)PxGetFoundation();
      cVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
      if (cVar2 == '\0') {
        puVar6 = &ui_system_data_1728_ptr;
      }
      else {
        puVar6 = (void *)__std_type_info_name(0x180bfc238,0x180c827e0);
      }
      puVar7 = (uint64_t *)
               (**(code **)(*plVar4 + 8))(plVar4,(uint64_t)uVar12 << 3,puVar6,&processed_var_4272_ptr,0x229)
      ;
      goto LAB_1806a5923;
    }
  }
  else {
    uVar12 = uVar3 * 2;
    if (uVar3 != 0) goto LAB_1806a58ad;
  }
  puVar7 = (uint64_t *)0x0;
LAB_1806a5923:
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



uint64_t * FUN_1806a58ba(void)

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
    __std_type_info_name(0x180bfc238,0x180c827e0);
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



// WARNING: Removing unreachable block (ram,0x0001806a5938)

int64_t FUN_1806a591e(void)

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



int64_t FUN_1806a5971(void)

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



uint64_t * FUN_1806a59b0(int64_t *param_1,int32_t *param_2)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  char cVar7;
  uint uVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  void *puVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  uint uVar15;
  uint64_t uVar16;
  
  uVar8 = *(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff;
  if (uVar8 == 0) {
    uVar15 = 1;
LAB_1806a59e0:
    if ((uint64_t)uVar15 != 0) {
      plVar9 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar10 = (int64_t *)PxGetFoundation();
      cVar7 = (**(code **)(*plVar10 + 0x28))(plVar10);
      if (cVar7 == '\0') {
        puVar11 = &ui_system_data_1728_ptr;
      }
      else {
        puVar11 = (void *)__std_type_info_name(0x180bfc2d0,0x180c827e0);
      }
      puVar12 = (uint64_t *)
                (**(code **)(*plVar9 + 8))
                          (plVar9,(uint64_t)uVar15 << 4,puVar11,&processed_var_4272_ptr,0x229);
      goto LAB_1806a5a51;
    }
  }
  else {
    uVar15 = uVar8 * 2;
    if (uVar8 != 0) goto LAB_1806a59e0;
  }
  puVar12 = (uint64_t *)0x0;
LAB_1806a5a51:
  uVar16 = (uint64_t)*(uint *)(param_1 + 1);
  puVar14 = (uint64_t *)*param_1;
  puVar13 = puVar12;
  if (puVar12 < puVar12 + uVar16 * 2) {
    do {
      uVar5 = *puVar14;
      uVar6 = puVar14[1];
      puVar14 = puVar14 + 2;
      *puVar13 = uVar5;
      puVar13[1] = uVar6;
      puVar13 = puVar13 + 2;
    } while (puVar13 < puVar12 + uVar16 * 2);
    uVar16 = (uint64_t)*(uint *)(param_1 + 1);
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  puVar14 = puVar12 + uVar16 * 2;
  *(int32_t *)puVar14 = *param_2;
  *(int32_t *)((int64_t)puVar14 + 4) = uVar2;
  *(int32_t *)(puVar14 + 1) = uVar3;
  *(int32_t *)((int64_t)puVar14 + 0xc) = uVar4;
  lVar1 = *param_1;
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (lVar1 != 0)) {
    plVar9 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar1);
  }
  uVar8 = *(uint *)(param_1 + 1);
  *param_1 = (int64_t)puVar12;
  *(uint *)((int64_t)param_1 + 0xc) = uVar15;
  *(uint *)(param_1 + 1) = uVar8 + 1;
  return puVar12 + (uint64_t)uVar8 * 2;
}



uint64_t * FUN_1806a59eb(void)

{
  uint uVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  char cVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  int32_t *unaff_RBP;
  int32_t unaff_ESI;
  int64_t *unaff_RDI;
  uint64_t uVar14;
  
  plVar9 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar10 = (int64_t *)PxGetFoundation();
  cVar8 = (**(code **)(*plVar10 + 0x28))(plVar10);
  if (cVar8 != '\0') {
    __std_type_info_name(0x180bfc2d0,0x180c827e0);
  }
  puVar11 = (uint64_t *)(**(code **)(*plVar9 + 8))(plVar9);
  uVar14 = (uint64_t)*(uint *)(unaff_RDI + 1);
  puVar13 = (uint64_t *)*unaff_RDI;
  puVar12 = puVar11;
  if (puVar11 < puVar11 + uVar14 * 2) {
    do {
      uVar6 = *puVar13;
      uVar7 = puVar13[1];
      puVar13 = puVar13 + 2;
      *puVar12 = uVar6;
      puVar12[1] = uVar7;
      puVar12 = puVar12 + 2;
    } while (puVar12 < puVar11 + uVar14 * 2);
    uVar14 = (uint64_t)*(uint *)(unaff_RDI + 1);
  }
  uVar3 = unaff_RBP[1];
  uVar4 = unaff_RBP[2];
  uVar5 = unaff_RBP[3];
  puVar13 = puVar11 + uVar14 * 2;
  *(int32_t *)puVar13 = *unaff_RBP;
  *(int32_t *)((int64_t)puVar13 + 4) = uVar3;
  *(int32_t *)(puVar13 + 1) = uVar4;
  *(int32_t *)((int64_t)puVar13 + 0xc) = uVar5;
  lVar2 = *unaff_RDI;
  if ((-1 < *(int *)((int64_t)unaff_RDI + 0xc)) && (lVar2 != 0)) {
    plVar9 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar2);
  }
  uVar1 = *(uint *)(unaff_RDI + 1);
  *unaff_RDI = (int64_t)puVar11;
  *(int32_t *)((int64_t)unaff_RDI + 0xc) = unaff_ESI;
  *(uint *)(unaff_RDI + 1) = uVar1 + 1;
  return puVar11 + (uint64_t)uVar1 * 2;
}



int64_t FUN_1806a5a4f(void)

{
  int32_t *puVar1;
  uint uVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  int64_t *plVar10;
  uint64_t *puVar11;
  int32_t *unaff_RBP;
  int32_t unaff_ESI;
  int64_t *unaff_RDI;
  uint64_t uVar12;
  
  puVar9 = (uint64_t *)0x0;
  uVar12 = (uint64_t)*(uint *)(unaff_RDI + 1);
  puVar11 = (uint64_t *)*unaff_RDI;
  if (uVar12 != 0) {
    do {
      uVar7 = *puVar11;
      uVar8 = puVar11[1];
      puVar11 = puVar11 + 2;
      *puVar9 = uVar7;
      puVar9[1] = uVar8;
      puVar9 = puVar9 + 2;
    } while (puVar9 < (uint64_t *)(uVar12 * 0x10));
    uVar12 = (uint64_t)*(uint *)(unaff_RDI + 1);
  }
  uVar4 = unaff_RBP[1];
  uVar5 = unaff_RBP[2];
  uVar6 = unaff_RBP[3];
  puVar1 = (int32_t *)(uVar12 * 0x10);
  *puVar1 = *unaff_RBP;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  lVar3 = *unaff_RDI;
  if ((-1 < *(int *)((int64_t)unaff_RDI + 0xc)) && (lVar3 != 0)) {
    plVar10 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar10 + 0x10))(plVar10,lVar3);
  }
  uVar2 = *(uint *)(unaff_RDI + 1);
  *unaff_RDI = 0;
  *(int32_t *)((int64_t)unaff_RDI + 0xc) = unaff_ESI;
  *(uint *)(unaff_RDI + 1) = uVar2 + 1;
  return (uint64_t)uVar2 * 0x10;
}



uint64_t * FUN_1806a5af0(int64_t *param_1,int32_t *param_2)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  char cVar6;
  uint uVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  void *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  uint uVar14;
  uint64_t uVar15;
  
  uVar7 = *(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff;
  if (uVar7 == 0) {
    uVar14 = 1;
LAB_1806a5b20:
    if ((uint64_t)uVar14 != 0) {
      plVar8 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar9 = (int64_t *)PxGetFoundation();
      cVar6 = (**(code **)(*plVar9 + 0x28))(plVar9);
      if (cVar6 == '\0') {
        puVar10 = &ui_system_data_1728_ptr;
      }
      else {
        puVar10 = (void *)__std_type_info_name(0x180bfc298,0x180c827e0);
      }
      puVar11 = (uint64_t *)
                (**(code **)(*plVar8 + 8))
                          (plVar8,(uint64_t)uVar14 << 5,puVar10,&processed_var_4272_ptr,0x229);
      goto LAB_1806a5b91;
    }
  }
  else {
    uVar14 = uVar7 * 2;
    if (uVar7 != 0) goto LAB_1806a5b20;
  }
  puVar11 = (uint64_t *)0x0;
LAB_1806a5b91:
  uVar15 = (uint64_t)*(uint *)(param_1 + 1);
  puVar13 = (uint64_t *)*param_1;
  puVar12 = puVar11;
  if (puVar11 < puVar11 + uVar15 * 4) {
    do {
      uVar5 = puVar13[1];
      *puVar12 = *puVar13;
      puVar12[1] = uVar5;
      uVar5 = puVar13[3];
      puVar12[2] = puVar13[2];
      puVar12[3] = uVar5;
      puVar12 = puVar12 + 4;
      puVar13 = puVar13 + 4;
    } while (puVar12 < puVar11 + uVar15 * 4);
    uVar15 = (uint64_t)*(uint *)(param_1 + 1);
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  puVar13 = puVar11 + uVar15 * 4;
  *(int32_t *)puVar13 = *param_2;
  *(int32_t *)((int64_t)puVar13 + 4) = uVar2;
  *(int32_t *)(puVar13 + 1) = uVar3;
  *(int32_t *)((int64_t)puVar13 + 0xc) = uVar4;
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  puVar13 = puVar11 + uVar15 * 4 + 2;
  *(int32_t *)puVar13 = param_2[4];
  *(int32_t *)((int64_t)puVar13 + 4) = uVar2;
  *(int32_t *)(puVar13 + 1) = uVar3;
  *(int32_t *)((int64_t)puVar13 + 0xc) = uVar4;
  lVar1 = *param_1;
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (lVar1 != 0)) {
    plVar8 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar8 + 0x10))(plVar8,lVar1);
  }
  uVar7 = *(uint *)(param_1 + 1);
  *param_1 = (int64_t)puVar11;
  *(uint *)((int64_t)param_1 + 0xc) = uVar14;
  *(uint *)(param_1 + 1) = uVar7 + 1;
  return puVar11 + (uint64_t)uVar7 * 4;
}



uint64_t * FUN_1806a5b2b(void)

{
  uint uVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  char cVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int32_t *unaff_RBP;
  int32_t unaff_ESI;
  int64_t *unaff_RDI;
  uint64_t uVar13;
  
  plVar8 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar9 = (int64_t *)PxGetFoundation();
  cVar7 = (**(code **)(*plVar9 + 0x28))(plVar9);
  if (cVar7 != '\0') {
    __std_type_info_name(0x180bfc298,0x180c827e0);
  }
  puVar10 = (uint64_t *)(**(code **)(*plVar8 + 8))(plVar8);
  uVar13 = (uint64_t)*(uint *)(unaff_RDI + 1);
  puVar12 = (uint64_t *)*unaff_RDI;
  puVar11 = puVar10;
  if (puVar10 < puVar10 + uVar13 * 4) {
    do {
      uVar6 = puVar12[1];
      *puVar11 = *puVar12;
      puVar11[1] = uVar6;
      uVar6 = puVar12[3];
      puVar11[2] = puVar12[2];
      puVar11[3] = uVar6;
      puVar11 = puVar11 + 4;
      puVar12 = puVar12 + 4;
    } while (puVar11 < puVar10 + uVar13 * 4);
    uVar13 = (uint64_t)*(uint *)(unaff_RDI + 1);
  }
  uVar3 = unaff_RBP[1];
  uVar4 = unaff_RBP[2];
  uVar5 = unaff_RBP[3];
  puVar12 = puVar10 + uVar13 * 4;
  *(int32_t *)puVar12 = *unaff_RBP;
  *(int32_t *)((int64_t)puVar12 + 4) = uVar3;
  *(int32_t *)(puVar12 + 1) = uVar4;
  *(int32_t *)((int64_t)puVar12 + 0xc) = uVar5;
  uVar3 = unaff_RBP[5];
  uVar4 = unaff_RBP[6];
  uVar5 = unaff_RBP[7];
  puVar12 = puVar10 + uVar13 * 4 + 2;
  *(int32_t *)puVar12 = unaff_RBP[4];
  *(int32_t *)((int64_t)puVar12 + 4) = uVar3;
  *(int32_t *)(puVar12 + 1) = uVar4;
  *(int32_t *)((int64_t)puVar12 + 0xc) = uVar5;
  lVar2 = *unaff_RDI;
  if ((-1 < *(int *)((int64_t)unaff_RDI + 0xc)) && (lVar2 != 0)) {
    plVar8 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar8 + 0x10))(plVar8,lVar2);
  }
  uVar1 = *(uint *)(unaff_RDI + 1);
  *unaff_RDI = (int64_t)puVar10;
  *(int32_t *)((int64_t)unaff_RDI + 0xc) = unaff_ESI;
  *(uint *)(unaff_RDI + 1) = uVar1 + 1;
  return puVar10 + (uint64_t)uVar1 * 4;
}



int64_t FUN_1806a5b8f(void)

{
  uint uVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int32_t *puVar8;
  int64_t *plVar9;
  uint64_t *puVar10;
  int32_t *unaff_RBP;
  int32_t unaff_ESI;
  int64_t *unaff_RDI;
  uint64_t uVar11;
  
  puVar7 = (uint64_t *)0x0;
  uVar11 = (uint64_t)*(uint *)(unaff_RDI + 1);
  puVar10 = (uint64_t *)*unaff_RDI;
  if (uVar11 != 0) {
    do {
      uVar6 = puVar10[1];
      *puVar7 = *puVar10;
      puVar7[1] = uVar6;
      uVar6 = puVar10[3];
      puVar7[2] = puVar10[2];
      puVar7[3] = uVar6;
      puVar7 = puVar7 + 4;
      puVar10 = puVar10 + 4;
    } while (puVar7 < (uint64_t *)(uVar11 * 0x20));
    uVar11 = (uint64_t)*(uint *)(unaff_RDI + 1);
  }
  uVar3 = unaff_RBP[1];
  uVar4 = unaff_RBP[2];
  uVar5 = unaff_RBP[3];
  puVar8 = (int32_t *)(uVar11 * 0x20);
  *puVar8 = *unaff_RBP;
  puVar8[1] = uVar3;
  puVar8[2] = uVar4;
  puVar8[3] = uVar5;
  uVar3 = unaff_RBP[5];
  uVar4 = unaff_RBP[6];
  uVar5 = unaff_RBP[7];
  puVar8[4] = unaff_RBP[4];
  puVar8[5] = uVar3;
  puVar8[6] = uVar4;
  puVar8[7] = uVar5;
  lVar2 = *unaff_RDI;
  if ((-1 < *(int *)((int64_t)unaff_RDI + 0xc)) && (lVar2 != 0)) {
    plVar9 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar2);
  }
  uVar1 = *(uint *)(unaff_RDI + 1);
  *unaff_RDI = 0;
  *(int32_t *)((int64_t)unaff_RDI + 0xc) = unaff_ESI;
  *(uint *)(unaff_RDI + 1) = uVar1 + 1;
  return (uint64_t)uVar1 * 0x20;
}



int64_t FUN_1806a5c40(int64_t *param_1,uint param_2)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t uVar5;
  
  uVar4 = (int)param_1[1] - (int)*param_1;
  uVar5 = (uint64_t)uVar4;
  uVar4 = uVar4 + param_2;
  if ((uVar4 != 0) && ((uint)((int)param_1[2] - (int)*param_1) <= uVar4)) {
    uVar1 = uVar4;
    if (0x1000 < uVar4) {
      uVar1 = uVar4 >> 2;
    }
    uVar1 = uVar1 + uVar4;
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      lVar3 = (**(code **)(*plVar2 + 8))(plVar2,(uint64_t)uVar1,&ui_system_data_1832_ptr,&memory_allocator_3640_ptr,0xa8)
      ;
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(lVar3,*param_1,uVar5);
    }
    *param_1 = lVar3;
    param_1[1] = uVar5 + lVar3;
    param_1[2] = (uint64_t)uVar1 + lVar3;
  }
  param_1[1] = param_1[1] + (uint64_t)param_2;
  return uVar5 + *param_1;
}



int64_t FUN_1806a5c72(uint64_t param_1)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *unaff_RBX;
  uint unaff_EDI;
  int64_t unaff_R15;
  
  uVar1 = (uint)param_1;
  if (uVar1 < 0x1001) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = ((uint)(param_1 >> 2) & 0x3fffffff) + uVar1;
  }
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2,(uint64_t)uVar1,&ui_system_data_1832_ptr,&memory_allocator_3640_ptr,0xa8);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lVar3,*unaff_RBX,unaff_EDI);
  }
  *unaff_RBX = lVar3;
  unaff_RBX[1] = (uint64_t)unaff_EDI + lVar3;
  unaff_RBX[2] = (uint64_t)uVar1 + lVar3;
  unaff_RBX[1] = unaff_RBX[1] + unaff_R15;
  return (uint64_t)unaff_EDI + *unaff_RBX;
}








