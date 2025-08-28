#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part019.c - 16 个函数

// 函数: void FUN_1800f7b20(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_1800f7b20(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  int64_t param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int32_t uVar4;
  int64_t lVar5;
  
  if (((char)param_4 == '\0') && (param_3 != param_1)) {
    if (*(int *)(param_3 + 0x30) == 0) {
LAB_1800f7b8b:
      uVar4 = 1;
      goto LAB_1800f7b94;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar2 = *(byte **)(param_3 + 0x28);
      lVar5 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar3 = (uint)pbVar2[lVar5];
        if (bVar1 != uVar3) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar1 - uVar3) < 1) goto LAB_1800f7b8b;
    }
  }
  uVar4 = 0;
LAB_1800f7b94:
  lVar5 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0xc0,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  FUN_180049b30(lVar5 + 0x20,param_5);
  *(uint64_t *)(lVar5 + 0xb8) = 0;
                    // WARNING: Subroutine does not return
  SystemStateController(lVar5,param_3,param_1,uVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f7c00(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_1800f7c00(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  int64_t param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  
  if (((char)param_4 == '\0') && (param_3 != param_1)) {
    if (*(int *)(param_3 + 0x30) == 0) {
LAB_1800f7c6a:
      uVar5 = 1;
      goto LAB_1800f7c75;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar2 = *(byte **)(param_3 + 0x28);
      lVar4 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar3 = (uint)pbVar2[lVar4];
        if (bVar1 != uVar3) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar1 - uVar3) < 1) goto LAB_1800f7c6a;
    }
  }
  uVar5 = 0;
LAB_1800f7c75:
  lVar4 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0xc0,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  FUN_180049b30(lVar4 + 0x20,param_5);
  *(uint64_t *)(lVar4 + 0xb8) = 0;
                    // WARNING: Subroutine does not return
  SystemStateController(lVar4,param_3,param_1,uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f7cf0(int64_t *param_1,int64_t param_2,int64_t param_3)
void FUN_1800f7cf0(int64_t *param_1,int64_t param_2,int64_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  uVar2 = (param_3 - param_2) / 0x128;
  if ((uint64_t)((param_1[2] - *param_1) / 0x128) < uVar2) {
    if (uVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar2 * 0x128,(char)param_1[3]);
    }
    FUN_1800f8470(param_2,param_3,lVar3);
    lVar5 = param_1[1];
    lVar4 = *param_1;
    if (lVar4 != lVar5) {
      do {
        FUN_1800f8930(lVar4);
        lVar4 = lVar4 + 0x128;
      } while (lVar4 != lVar5);
      lVar4 = *param_1;
    }
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar4);
    }
    *param_1 = lVar3;
    lVar3 = uVar2 * 0x128 + lVar3;
    param_1[2] = lVar3;
    param_1[1] = lVar3;
  }
  else {
    uVar1 = (param_1[1] - *param_1) / 0x128;
    if (uVar1 < uVar2) {
      lVar3 = uVar1 * 0x128 + param_2;
      FUN_1800f8690(param_2,lVar3);
      lVar3 = FUN_1800f8470(lVar3,param_3,param_1[1]);
      param_1[1] = lVar3;
    }
    else {
      lVar4 = FUN_1800f8690(param_2,param_3);
      lVar3 = param_1[1];
      for (lVar5 = lVar4; lVar5 != lVar3; lVar5 = lVar5 + 0x128) {
        FUN_1800f8930(lVar5);
      }
      param_1[1] = lVar4;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f7d59(void)
void FUN_1800f7d59(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int64_t *unaff_RDI;
  
  if (unaff_RBP == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = CoreMemoryPoolAllocator(system_memory_pool_ptr,unaff_RBP * 0x128,(char)unaff_RDI[3]);
  }
  FUN_1800f8470();
  lVar1 = unaff_RDI[1];
  lVar3 = *unaff_RDI;
  if (lVar3 != lVar1) {
    do {
      FUN_1800f8930(lVar3);
      lVar3 = lVar3 + 0x128;
    } while (lVar3 != lVar1);
    lVar3 = *unaff_RDI;
  }
  if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(lVar3);
  }
  *unaff_RDI = lVar2;
  lVar2 = unaff_RBP * 0x128 + lVar2;
  unaff_RDI[2] = lVar2;
  unaff_RDI[1] = lVar2;
  return;
}






// 函数: void FUN_1800f7de0(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_1800f7de0(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R10;
  
  lVar3 = SUB168(SEXT816(in_R10) * SEXT816(*(int64_t *)(unaff_RDI + 8) - param_3),8);
  uVar4 = (lVar3 >> 6) - (lVar3 >> 0x3f);
  if (uVar4 < unaff_RBP) {
    FUN_1800f8690();
    uVar2 = FUN_1800f8470(uVar4 * 0x128 + unaff_RSI);
    *(uint64_t *)(unaff_RDI + 8) = uVar2;
  }
  else {
    lVar1 = FUN_1800f8690();
    lVar3 = *(int64_t *)(unaff_RDI + 8);
    for (lVar5 = lVar1; lVar5 != lVar3; lVar5 = lVar5 + 0x128) {
      FUN_1800f8930(lVar5);
    }
    *(int64_t *)(unaff_RDI + 8) = lVar1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1800f7e80(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t *plVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(int64_t *)(param_1 + 200);
  if (*(int64_t *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&processed_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&processed_var_6480_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(int64_t **)(lVar1 + -8);
    *(int64_t *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&processed_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&processed_var_6480_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}






// 函数: void FUN_1800f8000(int64_t param_1)
void FUN_1800f8000(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = *(int64_t *)(param_1 + 0x10);
  for (lVar2 = *(int64_t *)(param_1 + 8); lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    if (*(int64_t **)(lVar2 + 8) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar2 + 8) + 0x38))();
    }
  }
  if (*(int64_t *)(param_1 + 8) == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}






// 函数: void FUN_1800f8080(int64_t param_1)
void FUN_1800f8080(int64_t param_1)

{
  if (*(int64_t **)(param_1 + 0x68) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x68) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x60) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x60) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x58) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x58) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x50) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x50) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x48) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x48) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x40) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x40) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x38) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x38) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x30) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x30) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x28) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x28) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x20) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x20) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x18) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x18) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x10) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 8) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 8) + 0x38))();
  }
  return;
}






// 函数: void FUN_1800f80a0(int64_t *param_1)
void FUN_1800f80a0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    if (*(int64_t **)(lVar2 + 8) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar2 + 8) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}






// 函数: void FUN_1800f8160(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
void FUN_1800f8160(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  
  lVar1 = *(int64_t *)(*param_4 + 0x2f0);
  FUN_1800820e0(param_1,lVar1);
  FUN_1800816c0(param_1,lVar1 + 8);
  *(int8_t *)(*param_4 + 0x2f9) = 4;
  return;
}






// 函数: void FUN_1800f8240(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
void FUN_1800f8240(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = *(int64_t *)(*param_4 + 0x2e0);
  *(int32_t *)(lVar1 + 0x68) = **(int32_t **)(param_1 + 8);
  *(int64_t *)(param_1 + 8) = *(int64_t *)(param_1 + 8) + 4;
  *(int32_t *)(lVar1 + 0x6c) = **(int32_t **)(param_1 + 8);
  *(int64_t *)(param_1 + 8) = *(int64_t *)(param_1 + 8) + 4;
  *(int32_t *)(lVar1 + 0x70) = **(int32_t **)(param_1 + 8);
  *(int64_t *)(param_1 + 8) = *(int64_t *)(param_1 + 8) + 4;
  *(int32_t *)(lVar1 + 0x74) = **(int32_t **)(param_1 + 8);
  *(int64_t *)(param_1 + 8) = *(int64_t *)(param_1 + 8) + 4;
  *(int32_t *)(lVar1 + 0x78) = **(int32_t **)(param_1 + 8);
  *(int64_t *)(param_1 + 8) = *(int64_t *)(param_1 + 8) + 4;
  *(int32_t *)(lVar1 + 0x7c) = **(int32_t **)(param_1 + 8);
  lVar2 = *(int64_t *)(param_1 + 8);
  *(int32_t *)(lVar1 + 0x80) = *(int32_t *)(lVar2 + 4);
  *(int32_t *)(lVar1 + 0x84) = *(int32_t *)(lVar2 + 8);
  *(int32_t *)(lVar1 + 0x88) = *(int32_t *)(lVar2 + 0xc);
  *(int32_t *)(lVar1 + 0x8c) = *(int32_t *)(lVar2 + 0x10);
  *(int32_t *)(lVar1 + 0x90) = *(int32_t *)(lVar2 + 0x14);
  *(int32_t *)(lVar1 + 0x94) = *(int32_t *)(lVar2 + 0x18);
  *(int32_t *)(lVar1 + 0x98) = *(int32_t *)(lVar2 + 0x1c);
  *(int32_t *)(lVar1 + 0x9c) = *(int32_t *)(lVar2 + 0x20);
  *(int64_t *)(param_1 + 8) = lVar2 + 0x24;
  FUN_1800816c0(param_1,lVar1);
  FUN_180081870(param_1,lVar1 + 8);
  FUN_180081a20(param_1,lVar1 + 0x10);
  FUN_180081bd0(param_1,lVar1 + 0x18);
  FUN_180081d80(param_1,lVar1 + 0x20);
  FUN_180081d80(param_1,lVar1 + 0x28);
  FUN_180081d80(param_1,lVar1 + 0x30);
  FUN_180081d80(param_1,lVar1 + 0x38);
  FUN_1800816c0(param_1,lVar1 + 0x40);
  FUN_1800816c0(param_1,lVar1 + 0x58);
  FUN_180081f30(param_1,lVar1 + 0x50);
  FUN_1800816c0(param_1,lVar1 + 0x48);
  FUN_180081d80(param_1,lVar1 + 0x60);
  *(int8_t *)(*param_4 + 0x2e9) = 4;
  return;
}






// 函数: void FUN_1800f8400(int64_t *param_1)
void FUN_1800f8400(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    if (*(int64_t **)(lVar2 + 8) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar2 + 8) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}



int64_t FUN_1800f8470(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  if (param_1 != param_2) {
    lVar8 = param_3 - param_1;
    puVar9 = (uint64_t *)(param_1 + 0xb4);
    do {
      FUN_1808fcf5c(param_3,(int64_t)puVar9 + -0xb4,0x58,2,FUN_1800f8630,FUN_1800f88f0,uVar10);
      *(int32_t *)(lVar8 + -4 + (int64_t)puVar9) = *(int32_t *)((int64_t)puVar9 + -4);
      uVar7 = puVar9[1];
      *(uint64_t *)(lVar8 + (int64_t)puVar9) = *puVar9;
      ((uint64_t *)(lVar8 + (int64_t)puVar9))[1] = uVar7;
      uVar7 = puVar9[3];
      puVar2 = (uint64_t *)(lVar8 + 0x10 + (int64_t)puVar9);
      *puVar2 = puVar9[2];
      puVar2[1] = uVar7;
      uVar7 = puVar9[5];
      puVar2 = (uint64_t *)(lVar8 + 0x20 + (int64_t)puVar9);
      *puVar2 = puVar9[4];
      puVar2[1] = uVar7;
      uVar4 = *(int32_t *)((int64_t)puVar9 + 0x34);
      uVar5 = *(int32_t *)(puVar9 + 7);
      uVar6 = *(int32_t *)((int64_t)puVar9 + 0x3c);
      puVar3 = (int32_t *)(lVar8 + 0x30 + (int64_t)puVar9);
      *puVar3 = *(int32_t *)(puVar9 + 6);
      puVar3[1] = uVar4;
      puVar3[2] = uVar5;
      puVar3[3] = uVar6;
      uVar4 = *(int32_t *)((int64_t)puVar9 + 0x44);
      uVar5 = *(int32_t *)(puVar9 + 9);
      uVar6 = *(int32_t *)((int64_t)puVar9 + 0x4c);
      puVar3 = (int32_t *)(lVar8 + 0x40 + (int64_t)puVar9);
      *puVar3 = *(int32_t *)(puVar9 + 8);
      puVar3[1] = uVar4;
      puVar3[2] = uVar5;
      puVar3[3] = uVar6;
      SystemCore_NetworkHandler0(lVar8 + 0x54 + (int64_t)puVar9,(int64_t)puVar9 + 0x54);
      param_3 = param_3 + 0x128;
      lVar1 = (int64_t)puVar9 + 0x74;
      puVar9 = puVar9 + 0x25;
    } while (lVar1 != param_2);
  }
  return param_3;
}



int64_t FUN_1800f8570(int64_t param_1,int64_t param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  
  FUN_1808fcf5c(param_1,param_2,0x58,2,FUN_1800f8630,FUN_1800f88f0,0xfffffffffffffffe);
  *(int32_t *)(param_1 + 0xb0) = *(int32_t *)(param_2 + 0xb0);
  uVar4 = *(uint64_t *)(param_2 + 0xbc);
  *(uint64_t *)(param_1 + 0xb4) = *(uint64_t *)(param_2 + 0xb4);
  *(uint64_t *)(param_1 + 0xbc) = uVar4;
  uVar4 = *(uint64_t *)(param_2 + 0xcc);
  *(uint64_t *)(param_1 + 0xc4) = *(uint64_t *)(param_2 + 0xc4);
  *(uint64_t *)(param_1 + 0xcc) = uVar4;
  uVar4 = *(uint64_t *)(param_2 + 0xdc);
  *(uint64_t *)(param_1 + 0xd4) = *(uint64_t *)(param_2 + 0xd4);
  *(uint64_t *)(param_1 + 0xdc) = uVar4;
  uVar1 = *(int32_t *)(param_2 + 0xe8);
  uVar2 = *(int32_t *)(param_2 + 0xec);
  uVar3 = *(int32_t *)(param_2 + 0xf0);
  *(int32_t *)(param_1 + 0xe4) = *(int32_t *)(param_2 + 0xe4);
  *(int32_t *)(param_1 + 0xe8) = uVar1;
  *(int32_t *)(param_1 + 0xec) = uVar2;
  *(int32_t *)(param_1 + 0xf0) = uVar3;
  uVar1 = *(int32_t *)(param_2 + 0xf8);
  uVar2 = *(int32_t *)(param_2 + 0xfc);
  uVar3 = *(int32_t *)(param_2 + 0x100);
  *(int32_t *)(param_1 + 0xf4) = *(int32_t *)(param_2 + 0xf4);
  *(int32_t *)(param_1 + 0xf8) = uVar1;
  *(int32_t *)(param_1 + 0xfc) = uVar2;
  *(int32_t *)(param_1 + 0x100) = uVar3;
  SystemCore_NetworkHandler0(param_1 + 0x108,param_2 + 0x108);
  return param_1;
}



uint64_t * FUN_1800f8630(uint64_t *param_1,uint64_t *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(int32_t *)(param_1 + 2) = *(int32_t *)(param_2 + 2);
  FUN_1808fcf5c(param_1 + 3,param_2 + 3,0x20,2,SystemCore_NetworkHandler0,FUN_180627b90);
  return param_1;
}



int64_t FUN_1800f8690(int64_t param_1,int64_t param_2,int64_t param_3)

{
  uint64_t *puVar1;
  uint uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int32_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int32_t *puVar14;
  int64_t *plVar15;
  int64_t lStackX_10;
  int64_t lStackX_18;
  uint64_t *puStackX_20;
  
  lStackX_10 = (param_2 - param_1) / 0x128;
  if (0 < lStackX_10) {
    puStackX_20 = (uint64_t *)(param_1 + 0xb4);
    param_1 = param_1 - param_3;
    plVar15 = (int64_t *)(param_3 + 0x110);
    lStackX_18 = param_3;
    do {
      puVar14 = (int32_t *)((int64_t)plVar15 + -0x10c);
      lVar12 = 2;
      lVar13 = ((param_1 + -0x110) - lStackX_18) + (int64_t)plVar15;
      do {
        lVar9 = 2;
        puVar10 = (int32_t *)(lVar13 + -4 + (int64_t)puVar14);
        plVar7 = (int64_t *)(puVar14 + 7);
        lVar11 = (int64_t)puVar10 - (int64_t)(puVar14 + -1);
        puVar14[-1] = *puVar10;
        *puVar14 = *(int32_t *)((int64_t)puVar14 + lVar13);
        puVar14[1] = *(int32_t *)((int64_t)puVar14 + lVar13 + 4);
        puVar14[2] = *(int32_t *)((int64_t)puVar14 + lVar13 + 8);
        puVar14[3] = *(int32_t *)((int64_t)puVar14 + lVar13 + 0xc);
        do {
          uVar2 = *(uint *)(lVar11 + 8 + (int64_t)plVar7);
          uVar8 = (uint64_t)uVar2;
          if (*(int64_t *)(lVar11 + (int64_t)plVar7) != 0) {
            CoreMemoryPoolProcessor(plVar7 + -1,uVar8);
          }
          if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(*plVar7,*(uint64_t *)(lVar11 + (int64_t)plVar7),uVar8);
          }
          *(int32_t *)(plVar7 + 1) = 0;
          if (*plVar7 != 0) {
            *(int8_t *)(uVar8 + *plVar7) = 0;
          }
          *(int32_t *)((int64_t)plVar7 + 0x14) =
               *(int32_t *)(lVar11 + 0x14 + (int64_t)plVar7);
          plVar7 = plVar7 + 4;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        puVar14 = puVar14 + 0x16;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      *(int32_t *)(plVar15 + -0xc) = *(int32_t *)((int64_t)puStackX_20 + -4);
      uVar6 = puStackX_20[1];
      *(uint64_t *)((int64_t)plVar15 + -0x5c) = *puStackX_20;
      *(uint64_t *)((int64_t)plVar15 + -0x54) = uVar6;
      uVar6 = puStackX_20[3];
      *(uint64_t *)((int64_t)plVar15 + -0x4c) = puStackX_20[2];
      *(uint64_t *)((int64_t)plVar15 + -0x44) = uVar6;
      uVar6 = puStackX_20[5];
      *(uint64_t *)((int64_t)plVar15 + -0x3c) = puStackX_20[4];
      *(uint64_t *)((int64_t)plVar15 + -0x34) = uVar6;
      uVar3 = *(int32_t *)((int64_t)puStackX_20 + 0x34);
      uVar4 = *(int32_t *)(puStackX_20 + 7);
      uVar5 = *(int32_t *)((int64_t)puStackX_20 + 0x3c);
      *(int32_t *)((int64_t)plVar15 + -0x2c) = *(int32_t *)(puStackX_20 + 6);
      *(int32_t *)(plVar15 + -5) = uVar3;
      *(int32_t *)((int64_t)plVar15 + -0x24) = uVar4;
      *(int32_t *)(plVar15 + -4) = uVar5;
      uVar3 = *(int32_t *)((int64_t)puStackX_20 + 0x44);
      uVar4 = *(int32_t *)(puStackX_20 + 9);
      uVar5 = *(int32_t *)((int64_t)puStackX_20 + 0x4c);
      *(int32_t *)((int64_t)plVar15 + -0x1c) = *(int32_t *)(puStackX_20 + 8);
      *(int32_t *)(plVar15 + -3) = uVar3;
      *(int32_t *)((int64_t)plVar15 + -0x14) = uVar4;
      *(int32_t *)(plVar15 + -2) = uVar5;
      uVar2 = *(uint *)((int64_t)puStackX_20 + 100);
      uVar8 = (uint64_t)uVar2;
      if (*(int64_t *)((int64_t)puStackX_20 + 0x5c) != 0) {
        CoreMemoryPoolProcessor(plVar15 + -1,uVar8);
      }
      if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*plVar15,*(uint64_t *)((int64_t)puStackX_20 + 0x5c),uVar8);
      }
      *(int32_t *)(plVar15 + 1) = 0;
      if (*plVar15 != 0) {
        *(int8_t *)(uVar8 + *plVar15) = 0;
      }
      puVar1 = puStackX_20 + 0xe;
      puStackX_20 = puStackX_20 + 0x25;
      param_3 = lStackX_18 + 0x128;
      *(int32_t *)((int64_t)plVar15 + 0x14) = *(int32_t *)puVar1;
      plVar15 = plVar15 + 0x25;
      lStackX_10 = lStackX_10 + -1;
      lStackX_18 = param_3;
    } while (0 < lStackX_10);
  }
  return param_3;
}



int64_t FUN_1800f86cd(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)

{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t unaff_RBX;
  int64_t *plVar7;
  uint64_t uVar8;
  uint64_t unaff_RBP;
  int64_t lVar9;
  uint64_t unaff_RSI;
  int32_t *puVar10;
  int64_t lVar11;
  uint64_t unaff_RDI;
  int64_t in_R11;
  uint64_t unaff_R12;
  int64_t lVar12;
  uint64_t unaff_R13;
  int64_t lVar13;
  uint64_t unaff_R14;
  int32_t *puVar14;
  uint64_t unaff_R15;
  int64_t *plVar15;
  int64_t lStack0000000000000070;
  int64_t in_stack_00000078;
  int64_t in_stack_00000080;
  uint64_t *puStack0000000000000088;
  
  *(uint64_t *)(in_R11 + -8) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R13;
  puStack0000000000000088 = (uint64_t *)(param_4 + 0xb4);
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  lStack0000000000000070 = (param_4 - param_3) + -0x110;
  *(uint64_t *)(in_R11 + -0x40) = unaff_R15;
  plVar15 = (int64_t *)(param_3 + 0x110);
  while( true ) {
    puVar14 = (int32_t *)((int64_t)plVar15 + -0x10c);
    lVar12 = 2;
    lVar13 = (lStack0000000000000070 - param_3) + (int64_t)plVar15;
    do {
      lVar9 = 2;
      puVar10 = (int32_t *)(lVar13 + -4 + (int64_t)puVar14);
      plVar7 = (int64_t *)(puVar14 + 7);
      lVar11 = (int64_t)puVar10 - (int64_t)(puVar14 + -1);
      puVar14[-1] = *puVar10;
      *puVar14 = *(int32_t *)((int64_t)puVar14 + lVar13);
      puVar14[1] = *(int32_t *)((int64_t)puVar14 + lVar13 + 4);
      puVar14[2] = *(int32_t *)((int64_t)puVar14 + lVar13 + 8);
      puVar14[3] = *(int32_t *)((int64_t)puVar14 + lVar13 + 0xc);
      do {
        uVar1 = *(uint *)(lVar11 + 8 + (int64_t)plVar7);
        uVar8 = (uint64_t)uVar1;
        if (*(int64_t *)(lVar11 + (int64_t)plVar7) != 0) {
          CoreMemoryPoolProcessor(plVar7 + -1,uVar8);
        }
        puVar6 = puStack0000000000000088;
        if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(*plVar7,*(uint64_t *)(lVar11 + (int64_t)plVar7),uVar8);
        }
        *(int32_t *)(plVar7 + 1) = 0;
        if (*plVar7 != 0) {
          *(int8_t *)(uVar8 + *plVar7) = 0;
        }
        *(int32_t *)((int64_t)plVar7 + 0x14) = *(int32_t *)(lVar11 + 0x14 + (int64_t)plVar7)
        ;
        plVar7 = plVar7 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      puVar14 = puVar14 + 0x16;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *(int32_t *)(plVar15 + -0xc) = *(int32_t *)((int64_t)puStack0000000000000088 + -4);
    uVar5 = puStack0000000000000088[1];
    *(uint64_t *)((int64_t)plVar15 + -0x5c) = *puStack0000000000000088;
    *(uint64_t *)((int64_t)plVar15 + -0x54) = uVar5;
    uVar5 = puStack0000000000000088[3];
    *(uint64_t *)((int64_t)plVar15 + -0x4c) = puStack0000000000000088[2];
    *(uint64_t *)((int64_t)plVar15 + -0x44) = uVar5;
    uVar5 = puStack0000000000000088[5];
    *(uint64_t *)((int64_t)plVar15 + -0x3c) = puStack0000000000000088[4];
    *(uint64_t *)((int64_t)plVar15 + -0x34) = uVar5;
    uVar2 = *(int32_t *)((int64_t)puStack0000000000000088 + 0x34);
    uVar3 = *(int32_t *)(puStack0000000000000088 + 7);
    uVar4 = *(int32_t *)((int64_t)puStack0000000000000088 + 0x3c);
    *(int32_t *)((int64_t)plVar15 + -0x2c) = *(int32_t *)(puStack0000000000000088 + 6);
    *(int32_t *)(plVar15 + -5) = uVar2;
    *(int32_t *)((int64_t)plVar15 + -0x24) = uVar3;
    *(int32_t *)(plVar15 + -4) = uVar4;
    uVar2 = *(int32_t *)((int64_t)puStack0000000000000088 + 0x44);
    uVar3 = *(int32_t *)(puStack0000000000000088 + 9);
    uVar4 = *(int32_t *)((int64_t)puStack0000000000000088 + 0x4c);
    *(int32_t *)((int64_t)plVar15 + -0x1c) = *(int32_t *)(puStack0000000000000088 + 8);
    *(int32_t *)(plVar15 + -3) = uVar2;
    *(int32_t *)((int64_t)plVar15 + -0x14) = uVar3;
    *(int32_t *)(plVar15 + -2) = uVar4;
    uVar1 = *(uint *)((int64_t)puStack0000000000000088 + 100);
    uVar8 = (uint64_t)uVar1;
    if (*(int64_t *)((int64_t)puStack0000000000000088 + 0x5c) != 0) {
      CoreMemoryPoolProcessor(plVar15 + -1,uVar8);
    }
    if (uVar1 != 0) break;
    *(int32_t *)(plVar15 + 1) = 0;
    if (*plVar15 != 0) {
      *(int8_t *)(uVar8 + *plVar15) = 0;
    }
    puStack0000000000000088 = puVar6 + 0x25;
    param_3 = in_stack_00000080 + 0x128;
    *(int32_t *)((int64_t)plVar15 + 0x14) = *(int32_t *)(puVar6 + 0xe);
    plVar15 = plVar15 + 0x25;
    in_stack_00000078 = in_stack_00000078 + -1;
    in_stack_00000080 = param_3;
    if (in_stack_00000078 < 1) {
      return param_3;
    }
  }
                    // WARNING: Subroutine does not return
  memcpy(*plVar15,*(uint64_t *)((int64_t)puVar6 + 0x5c),uVar8);
}



uint64_t FUN_1800f88b9(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  return param_3;
}






// 函数: void FUN_1800f88d0(int64_t *param_1)
void FUN_1800f88d0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x128) {
    FUN_1800f8930(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}






// 函数: void FUN_1800f88f0(int64_t param_1)
void FUN_1800f88f0(int64_t param_1)

{
  SystemDataValidator(param_1 + 0x18,0x20,2,FUN_180627b90,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800f8930(int64_t param_1)
void FUN_1800f8930(int64_t param_1)

{
  *(uint64_t *)(param_1 + 0x108) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x110) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  *(uint64_t *)(param_1 + 0x110) = 0;
  *(int32_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x108) = &system_state_ptr;
  SystemDataValidator(param_1,0x58,2,FUN_1800f88f0,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800f89b0(int64_t *param_1)
void FUN_1800f89b0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x128) {
    FUN_1800f8930(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}






// 函数: void FUN_1800f8a20(uint64_t *param_1)
void FUN_1800f8a20(uint64_t *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    ReleaseSRWLockShared(*param_1);
  }
  return;
}






