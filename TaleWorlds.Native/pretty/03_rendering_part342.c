#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// $fun 的语义化别名
#define $alias_name $fun


// 03_rendering_part342.c - 15 个函数

// 函数: void FUN_18044df40(int64_t param_1,uint64_t *param_2,uint64_t param_3,char param_4,
void FUN_18044df40(int64_t param_1,uint64_t *param_2,uint64_t param_3,char param_4,
                  int8_t param_5)

{
  int64_t lVar1;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  
  uStack_28 = (int32_t)param_3;
  uStack_24 = (int32_t)((uint64_t)param_3 >> 0x20);
  uStack_20 = uStack_28;
  uStack_1c = uStack_24;
  uStack_18 = 0;
  uStack_14 = 0x7f7fffff;
  if (param_4 == '\0') {
    lVar1 = FUN_1801bb150(param_1 + 0x2a68,&uStack_20,param_1 + 0x28c8,
                          *(int32_t *)(param_1 + 0x60300),param_5,0x42c80000);
  }
  else {
    lVar1 = FUN_180455a30();
  }
  if (lVar1 != 0) {
    *(int32_t *)param_2 = *(int32_t *)(lVar1 + 300);
    *(int32_t *)(param_2 + 1) = *(int32_t *)(lVar1 + 0x128);
    *(int32_t *)((int64_t)param_2 + 4) = *(int32_t *)(lVar1 + 0x130);
    return;
  }
  *param_2 = 0xffffffffffffffff;
  *(int32_t *)(param_2 + 1) = 0xffffffff;
  return;
}



bool FUN_18044e000(int64_t param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e8) == 0x1b) {
    iVar1 = strcmp(*(uint64_t *)(param_1 + 0x4e0),&memory_allocator_3784_ptr);
    return iVar1 == 0;
  }
  return false;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_18044e050(uint64_t param_1,int8_t param_2,int8_t param_3,int8_t param_4)

{
  code *pcVar1;
  int32_t uVar2;
  uint64_t uVar3;
  void *puStack_30;
  int64_t lStack_28;
  
  pcVar1 = *(code **)(*system_cache_buffer + 0x70);
  uVar3 = FUN_1801a5190(*system_cache_buffer,&puStack_30,param_2,param_3,param_4);
  uVar2 = (*pcVar1)(system_cache_buffer,uVar3);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_18044e0d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  int32_t uVar2;
  uint64_t uVar3;
  void *puStack_28;
  int64_t lStack_20;
  
  pcVar1 = *(code **)(*system_cache_buffer + 0x70);
  uVar3 = SystemCore_NetworkHandler0(&puStack_28,*(int64_t *)(system_main_module_state + 0x3e0) + 0x80,param_3,param_4,0,
                        0xfffffffffffffffe);
  uVar2 = (*pcVar1)(system_cache_buffer,uVar3,param_3,param_4,1);
  puStack_28 = &system_data_buffer_ptr;
  if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_18044e180(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  int32_t uVar2;
  uint64_t uVar3;
  void *puStack_28;
  int64_t lStack_20;
  
  pcVar1 = *(code **)(*system_cache_buffer + 0x70);
  uVar3 = SystemCore_NetworkHandler0(&puStack_28,*(int64_t *)(system_main_module_state + 0x3e0) + 0xa0,param_3,param_4,0,
                        0xfffffffffffffffe);
  uVar2 = (*pcVar1)(system_cache_buffer,uVar3,param_3,param_4,1);
  puStack_28 = &system_data_buffer_ptr;
  if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_18044e2b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  int32_t uVar2;
  uint64_t uVar3;
  void *puStack_30;
  int64_t lStack_28;
  
  pcVar1 = *(code **)(*system_cache_buffer + 0x70);
  uVar3 = FUN_1801b8e40(param_1,&puStack_30,param_3,param_4,0xfffffffffffffffe);
  uVar2 = (*pcVar1)(system_cache_buffer,uVar3);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044e3b0(int64_t param_1,int param_2)
void FUN_18044e3b0(int64_t param_1,int param_2)

{
  uint64_t uVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  void *puVar2;
  uint64_t *puVar3;
  void *puVar4;
  int64_t lVar5;
  int64_t *plStackX_8;
  uint64_t uStack_30;
  uint64_t uStack_28;
  code *pcStack_20;
  code *pcStack_18;
  
  *(int *)(param_1 + 0x34) = param_2;
  if (0 < param_2) {
    puVar3 = (uint64_t *)
             SystemCore_GarbageCollector(system_resource_state,&plStackX_8,
                           (int64_t)param_2 * 0x58 +
                           *(int64_t *)(*(int64_t *)(system_main_module_state + 0x3e0) + 0x20),
                           CONCAT71((int7)((uint64_t)*(int64_t *)(system_main_module_state + 0x3e0) >> 8),1)
                           ,0xfffffffffffffffe);
    uVar1 = *puVar3;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    uStack_30 = 0;
    uStack_28 = 0;
    pcStack_20 = (code *)0x0;
    pcStack_18 = _guard_check_icall;
    SystemCore_DecryptionManager(uVar1,0,0xffffffff,&uStack_30);
    if (pcStack_20 != (code *)0x0) {
      (*pcStack_20)(&uStack_30,0,0);
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(int64_t *)(param_1 + 0x488) + 0x10);
    lVar5 = (int64_t)*(int *)(param_1 + 0x34) * 0x58;
    puVar2 = *(void **)
              (lVar5 + 8 + *(int64_t *)(*(int64_t *)(system_main_module_state + 0x3e0) + 0x20));
    puVar4 = &system_buffer_ptr;
    if (puVar2 != (void *)0x0) {
      puVar4 = puVar2;
    }
                    // WARNING: Could not recover jumptable at 0x00018044e4ac. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE_00)((int64_t *)(param_1 + 0x488),puVar4,lVar5,UNRECOVERED_JUMPTABLE_00)
    ;
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(int64_t *)(param_1 + 0x488) + 0x10);
  puVar2 = *(void **)(*(int64_t *)(system_main_module_state + 0x3e0) + 8);
  puVar4 = &system_buffer_ptr;
  if (puVar2 != (void *)0x0) {
    puVar4 = puVar2;
  }
                    // WARNING: Could not recover jumptable at 0x00018044e4e7. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE_00)((int64_t *)(param_1 + 0x488),puVar4,UNRECOVERED_JUMPTABLE_00);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18044e4f0(int64_t param_1,int param_2)

{
  uint64_t uVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int64_t *aplStackX_18 [2];
  
  *(int *)(param_1 + 0x38) = param_2;
  puVar3 = (uint64_t *)
           SystemCore_GarbageCollector(system_resource_state,aplStackX_18,
                         (int64_t)param_2 * 0x58 +
                         *(int64_t *)(*(int64_t *)(system_main_module_state + 0x3e0) + 0x40),
                         CONCAT71((int7)((uint64_t)*(int64_t *)(system_main_module_state + 0x3e0) >> 8),1),
                         0xfffffffffffffffe);
  uVar1 = *puVar3;
  *puVar3 = 0;
  plVar2 = *(int64_t **)(param_1 + 0x40);
  *(uint64_t *)(param_1 + 0x40) = uVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if (aplStackX_18[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_18[0] + 0x38))();
  }
  return *(int32_t *)
          (*(int64_t *)(*(int64_t *)(system_main_module_state + 0x3e0) + 0x60) + (int64_t)param_2 * 4);
}





// 函数: void FUN_18044e590(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18044e590(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  void *puVar2;
  uint64_t uVar3;
  void *puStack_30;
  void *puStack_28;
  
  uVar3 = 0xfffffffffffffffe;
  CoreMemoryPoolValidator(&puStack_30);
  pcVar1 = *(code **)(*(int64_t *)(param_1 + 0x488) + 0x10);
  puVar2 = &system_buffer_ptr;
  if (puStack_28 != (void *)0x0) {
    puVar2 = puStack_28;
  }
  (*pcVar1)((int64_t *)(param_1 + 0x488),puVar2,pcVar1,param_4,uVar3);
  puStack_30 = &system_data_buffer_ptr;
  if (puStack_28 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}





// 函数: void FUN_18044e620(uint64_t param_1,uint64_t param_2)
void FUN_18044e620(uint64_t param_1,uint64_t param_2)

{
  uint64_t uStackX_20;
  
  uStackX_20 = param_2;
  FUN_1801a5620(param_1,&uStackX_20);
  return;
}





// 函数: void FUN_18044e650(int64_t param_1,uint64_t *param_2,uint64_t *param_3,char param_4)
void FUN_18044e650(int64_t param_1,uint64_t *param_2,uint64_t *param_3,char param_4)

{
  int64_t *plVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int64_t *plVar11;
  float fVar12;
  float fVar13;
  uint64_t uStack_58;
  uint64_t uStack_50;
  
  uStack_58 = *param_3;
  uStack_50 = param_3[1];
  if (param_4 == '\0') {
    uVar10 = *(uint *)(param_1 + 0x60300) & 0xfffffffe;
    lVar6 = 0;
    fVar13 = 3.4028235e+38;
    if (*(int64_t *)(param_1 + 0x2ee8) - *(int64_t *)(param_1 + 12000) >> 3 != 0) {
      iVar4 = (int)((((float)uStack_58 - *(float *)(param_1 + 0x28d0)) - 1e-06) /
                   *(float *)(param_1 + 0x28e0));
      iVar9 = 0;
      iVar5 = iVar9;
      if ((-1 < iVar4) && (iVar5 = iVar4, *(int *)(param_1 + 0x28e8) <= iVar4)) {
        iVar5 = *(int *)(param_1 + 0x28e8) + -1;
      }
      uStack_58._4_4_ = (float)((uint64_t)uStack_58 >> 0x20);
      iVar4 = *(int *)(param_1 + 0x28ec);
      iVar8 = (int)(((uStack_58._4_4_ - *(float *)(param_1 + 0x28d4)) - 1e-06) /
                   *(float *)(param_1 + 0x28e4));
      if ((-1 < iVar8) && (iVar9 = iVar8, iVar4 <= iVar8)) {
        iVar9 = iVar4 + -1;
      }
      lVar7 = (int64_t)(iVar5 * iVar4 + iVar9);
      plVar11 = *(int64_t **)(*(int64_t *)(param_1 + 0x28c8) + 8 + lVar7 * 0x28);
      plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x28c8) + 0x10 + lVar7 * 0x28);
      if (plVar11 != plVar1) {
        fVar2 = (float)uStack_50;
        do {
          lVar7 = *plVar11;
          if ((((*(uint *)(lVar7 + 0x134) & uVar10) == uVar10) ||
              ((*(uint *)(lVar7 + 0x134) & 1) != 0)) &&
             (cVar3 = SystemCore_PerformanceMonitor(lVar7,&uStack_58), cVar3 != '\0')) {
            fVar12 = (float)func_0x00018038d2f0(lVar7,&uStack_58);
            fVar12 = ABS(fVar2 - fVar12);
            if ((fVar12 < 1.5) && (fVar12 < fVar13)) {
              lVar6 = lVar7;
              fVar13 = fVar12;
            }
          }
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar1);
      }
    }
  }
  else {
    lVar6 = FUN_180455a30(param_1 + 0x2a68,&uStack_58,param_1 + 0x28c8,*(uint *)(param_1 + 0x60300),
                          0,0x3fc00000);
  }
  if (lVar6 == 0) {
    *param_2 = 0xffffffffffffffff;
    *(int32_t *)(param_2 + 1) = 0xffffffff;
    return;
  }
  *(int32_t *)param_2 = *(int32_t *)(lVar6 + 300);
  *(int32_t *)(param_2 + 1) = *(int32_t *)(lVar6 + 0x128);
  *(int32_t *)((int64_t)param_2 + 4) = *(int32_t *)(lVar6 + 0x130);
  return;
}





// 函数: void FUN_18044e65f(int64_t param_1,uint64_t *param_2,uint64_t *param_3,char param_4)
void FUN_18044e65f(int64_t param_1,uint64_t *param_2,uint64_t *param_3,char param_4)

{
  int64_t *plVar1;
  uint64_t uVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int64_t in_RAX;
  int64_t lVar7;
  int64_t lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint64_t unaff_RDI;
  int64_t *plVar12;
  float fVar13;
  float fVar14;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  int32_t in_stack_00000050;
  int32_t in_stack_00000058;
  int32_t in_stack_00000060;
  int32_t in_stack_00000068;
  int32_t in_stack_00000070;
  int32_t in_stack_00000078;
  int32_t in_stack_00000080;
  int32_t in_stack_00000088;
  
  fVar3 = in_stack_00000048;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RDI;
  uVar11 = *(uint *)(param_1 + 0x60300);
  uVar2 = param_3[1];
  *(uint64_t *)(in_RAX + -0x58) = *param_3;
  *(uint64_t *)(in_RAX + -0x50) = uVar2;
  if (param_4 == '\0') {
    uVar11 = uVar11 & 0xfffffffe;
    lVar7 = 0;
    fVar14 = 3.4028235e+38;
    if (*(int64_t *)(param_1 + 0x2ee8) - *(int64_t *)(param_1 + 12000) >> 3 != 0) {
      iVar5 = (int)(((fStack0000000000000040 - *(float *)(param_1 + 0x28d0)) - 1e-06) /
                   *(float *)(param_1 + 0x28e0));
      iVar10 = 0;
      iVar6 = iVar10;
      if ((-1 < iVar5) && (iVar6 = iVar5, *(int *)(param_1 + 0x28e8) <= iVar5)) {
        iVar6 = *(int *)(param_1 + 0x28e8) + -1;
      }
      iVar5 = *(int *)(param_1 + 0x28ec);
      iVar9 = (int)(((fStack0000000000000044 - *(float *)(param_1 + 0x28d4)) - 1e-06) /
                   *(float *)(param_1 + 0x28e4));
      if ((-1 < iVar9) && (iVar10 = iVar9, iVar5 <= iVar9)) {
        iVar10 = iVar5 + -1;
      }
      lVar8 = (int64_t)(iVar6 * iVar5 + iVar10);
      plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x28c8) + 0x10 + lVar8 * 0x28);
      for (plVar12 = *(int64_t **)(*(int64_t *)(param_1 + 0x28c8) + 8 + lVar8 * 0x28);
          plVar12 != plVar1; plVar12 = plVar12 + 1) {
        lVar8 = *plVar12;
        if ((((*(uint *)(lVar8 + 0x134) & uVar11) == uVar11) ||
            ((*(uint *)(lVar8 + 0x134) & 1) != 0)) &&
           (cVar4 = SystemCore_PerformanceMonitor(lVar8,&stack0x00000040), cVar4 != '\0')) {
          fVar13 = (float)func_0x00018038d2f0(lVar8,&stack0x00000040);
          fVar13 = ABS(fVar3 - fVar13);
          if ((fVar13 < 1.5) && (fVar13 < fVar14)) {
            lVar7 = lVar8;
            fVar14 = fVar13;
          }
        }
      }
    }
  }
  else {
    *(int32_t *)(in_RAX + -0x70) = 0x3fc00000;
    *(int8_t *)(in_RAX + -0x78) = 0;
    lVar7 = FUN_180455a30(param_1 + 0x2a68,in_RAX + -0x58,param_1 + 0x28c8,uVar11);
  }
  if (lVar7 != 0) {
    *(int32_t *)param_2 = *(int32_t *)(lVar7 + 300);
    *(int32_t *)(param_2 + 1) = *(int32_t *)(lVar7 + 0x128);
    *(int32_t *)((int64_t)param_2 + 4) = *(int32_t *)(lVar7 + 0x130);
    return;
  }
  *param_2 = 0xffffffffffffffff;
  *(int32_t *)(param_2 + 1) = 0xffffffff;
  return;
}





// 函数: void FUN_18044e6c6(int64_t param_1)
void FUN_18044e6c6(int64_t param_1)

{
  int64_t *plVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int64_t in_RAX;
  int64_t lVar6;
  int iVar7;
  int iVar8;
  int64_t unaff_RBX;
  uint64_t *unaff_RSI;
  uint unaff_EDI;
  int64_t in_R10;
  int64_t *plVar9;
  float fVar10;
  float fVar11;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  
  fVar2 = in_stack_00000048;
  fVar11 = 3.4028235e+38;
  if (in_RAX != 0) {
    iVar4 = (int)(((fStack0000000000000040 - *(float *)(param_1 + 0x28d0)) - 1e-06) /
                 *(float *)(param_1 + 0x28e0));
    iVar8 = (int)unaff_RBX;
    iVar5 = iVar8;
    if ((-1 < iVar4) && (iVar5 = iVar4, *(int *)(param_1 + 0x28e8) <= iVar4)) {
      iVar5 = *(int *)(param_1 + 0x28e8) + -1;
    }
    iVar4 = *(int *)(in_R10 + 0x28ec);
    iVar7 = (int)(((fStack0000000000000044 - *(float *)(in_R10 + 0x28d4)) - 1e-06) /
                 *(float *)(in_R10 + 0x28e4));
    if ((-1 < iVar7) && (iVar8 = iVar7, iVar4 <= iVar7)) {
      iVar8 = iVar4 + -1;
    }
    lVar6 = (int64_t)(iVar5 * iVar4 + iVar8);
    plVar1 = *(int64_t **)(*(int64_t *)(in_R10 + 0x28c8) + 0x10 + lVar6 * 0x28);
    for (plVar9 = *(int64_t **)(*(int64_t *)(in_R10 + 0x28c8) + 8 + lVar6 * 0x28);
        plVar9 != plVar1; plVar9 = plVar9 + 1) {
      lVar6 = *plVar9;
      if ((((*(uint *)(lVar6 + 0x134) & unaff_EDI) == unaff_EDI) ||
          ((*(uint *)(lVar6 + 0x134) & 1) != 0)) &&
         (cVar3 = SystemCore_PerformanceMonitor(lVar6,&stack0x00000040), cVar3 != '\0')) {
        fVar10 = (float)func_0x00018038d2f0(lVar6,&stack0x00000040);
        fVar10 = ABS(fVar2 - fVar10);
        if ((fVar10 < 1.5) && (fVar10 < fVar11)) {
          unaff_RBX = lVar6;
          fVar11 = fVar10;
        }
      }
    }
  }
  if (unaff_RBX != 0) {
    *(int32_t *)unaff_RSI = *(int32_t *)(unaff_RBX + 300);
    *(int32_t *)(unaff_RSI + 1) = *(int32_t *)(unaff_RBX + 0x128);
    *(int32_t *)((int64_t)unaff_RSI + 4) = *(int32_t *)(unaff_RBX + 0x130);
    return;
  }
  *unaff_RSI = 0xffffffffffffffff;
  *(int32_t *)(unaff_RSI + 1) = 0xffffffff;
  return;
}





// 函数: void FUN_18044e6f5(float param_1,float param_2)
void FUN_18044e6f5(float param_1,float param_2)

{
  int64_t *plVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  int64_t in_RCX;
  int iVar8;
  int64_t unaff_RBX;
  uint64_t *unaff_RSI;
  uint unaff_EDI;
  int64_t in_R10;
  int64_t *plVar9;
  float fVar10;
  float unaff_XMM6_Da;
  uint64_t in_stack_00000040;
  float in_stack_00000048;
  
  fVar2 = in_stack_00000048;
  iVar4 = (int)((param_1 - param_2) / *(float *)(in_RCX + 0x28e0));
  iVar8 = (int)unaff_RBX;
  iVar5 = iVar8;
  if ((-1 < iVar4) && (iVar5 = iVar4, *(int *)(in_RCX + 0x28e8) <= iVar4)) {
    iVar5 = *(int *)(in_RCX + 0x28e8) + -1;
  }
  iVar4 = *(int *)(in_R10 + 0x28ec);
  iVar7 = (int)(((in_stack_00000040._4_4_ - *(float *)(in_R10 + 0x28d4)) - param_2) /
               *(float *)(in_R10 + 0x28e4));
  if ((-1 < iVar7) && (iVar8 = iVar7, iVar4 <= iVar7)) {
    iVar8 = iVar4 + -1;
  }
  lVar6 = (int64_t)(iVar5 * iVar4 + iVar8);
  plVar1 = *(int64_t **)(*(int64_t *)(in_R10 + 0x28c8) + 0x10 + lVar6 * 0x28);
  for (plVar9 = *(int64_t **)(*(int64_t *)(in_R10 + 0x28c8) + 8 + lVar6 * 0x28); plVar9 != plVar1;
      plVar9 = plVar9 + 1) {
    lVar6 = *plVar9;
    if ((((*(uint *)(lVar6 + 0x134) & unaff_EDI) == unaff_EDI) ||
        ((*(uint *)(lVar6 + 0x134) & 1) != 0)) &&
       (cVar3 = SystemCore_PerformanceMonitor(lVar6,&stack0x00000040), cVar3 != '\0')) {
      fVar10 = (float)func_0x00018038d2f0(lVar6,&stack0x00000040);
      fVar10 = ABS(fVar2 - fVar10);
      if ((fVar10 < 1.5) && (fVar10 < unaff_XMM6_Da)) {
        unaff_RBX = lVar6;
        unaff_XMM6_Da = fVar10;
      }
    }
  }
  if (unaff_RBX != 0) {
    *(int32_t *)unaff_RSI = *(int32_t *)(unaff_RBX + 300);
    *(int32_t *)(unaff_RSI + 1) = *(int32_t *)(unaff_RBX + 0x128);
    *(int32_t *)((int64_t)unaff_RSI + 4) = *(int32_t *)(unaff_RBX + 0x130);
    return;
  }
  *unaff_RSI = 0xffffffffffffffff;
  *(int32_t *)(unaff_RSI + 1) = 0xffffffff;
  return;
}





// 函数: void FUN_18044e77d(void)
void FUN_18044e77d(void)

{
  float fVar1;
  char cVar2;
  int64_t unaff_RBX;
  int64_t *unaff_RBP;
  uint64_t *unaff_RSI;
  uint unaff_EDI;
  int64_t *in_R10;
  int64_t lVar3;
  float fVar4;
  float unaff_XMM6_Da;
  float in_stack_00000048;
  
  fVar1 = in_stack_00000048;
  do {
    lVar3 = *in_R10;
    if (((*(uint *)(lVar3 + 0x134) & unaff_EDI) == unaff_EDI) ||
       ((*(uint *)(lVar3 + 0x134) & 1) != 0)) {
      cVar2 = SystemCore_PerformanceMonitor(lVar3,&stack0x00000040);
      if (cVar2 != '\0') {
        fVar4 = (float)func_0x00018038d2f0(lVar3,&stack0x00000040);
        fVar4 = ABS(fVar1 - fVar4);
        if ((fVar4 < 1.5) && (fVar4 < unaff_XMM6_Da)) {
          unaff_RBX = lVar3;
          unaff_XMM6_Da = fVar4;
        }
      }
    }
    in_R10 = in_R10 + 1;
  } while (in_R10 != unaff_RBP);
  if (unaff_RBX != 0) {
    *(int32_t *)unaff_RSI = *(int32_t *)(unaff_RBX + 300);
    *(int32_t *)(unaff_RSI + 1) = *(int32_t *)(unaff_RBX + 0x128);
    *(int32_t *)((int64_t)unaff_RSI + 4) = *(int32_t *)(unaff_RBX + 0x130);
    return;
  }
  *unaff_RSI = 0xffffffffffffffff;
  *(int32_t *)(unaff_RSI + 1) = 0xffffffff;
  return;
}





// 函数: void FUN_18044e81b(void)
void FUN_18044e81b(void)

{
  int64_t unaff_RBX;
  uint64_t *unaff_RSI;
  
  if (unaff_RBX != 0) {
    *(int32_t *)unaff_RSI = *(int32_t *)(unaff_RBX + 300);
    *(int32_t *)(unaff_RSI + 1) = *(int32_t *)(unaff_RBX + 0x128);
    *(int32_t *)((int64_t)unaff_RSI + 4) = *(int32_t *)(unaff_RBX + 0x130);
    return;
  }
  *unaff_RSI = 0xffffffffffffffff;
  *(int32_t *)(unaff_RSI + 1) = 0xffffffff;
  return;
}





// 函数: void FUN_18044e823(void)
void FUN_18044e823(void)

{
  int64_t unaff_RBX;
  uint64_t *unaff_RSI;
  
  if (unaff_RBX != 0) {
    *(int32_t *)unaff_RSI = *(int32_t *)(unaff_RBX + 300);
    *(int32_t *)(unaff_RSI + 1) = *(int32_t *)(unaff_RBX + 0x128);
    *(int32_t *)((int64_t)unaff_RSI + 4) = *(int32_t *)(unaff_RBX + 0x130);
    return;
  }
  *unaff_RSI = 0xffffffffffffffff;
  *(int32_t *)(unaff_RSI + 1) = 0xffffffff;
  return;
}





// 函数: void FUN_18044e82b(void)
void FUN_18044e82b(void)

{
  int64_t unaff_RBX;
  uint64_t *unaff_RSI;
  
  if (unaff_RBX != 0) {
    *(int32_t *)unaff_RSI = *(int32_t *)(unaff_RBX + 300);
    *(int32_t *)(unaff_RSI + 1) = *(int32_t *)(unaff_RBX + 0x128);
    *(int32_t *)((int64_t)unaff_RSI + 4) = *(int32_t *)(unaff_RBX + 0x130);
    return;
  }
  *unaff_RSI = 0xffffffffffffffff;
  *(int32_t *)(unaff_RSI + 1) = 0xffffffff;
  return;
}





// 函数: void FUN_18044e838(void)
void FUN_18044e838(void)

{
  int64_t unaff_RBX;
  int32_t *unaff_RSI;
  
  *unaff_RSI = *(int32_t *)(unaff_RBX + 300);
  unaff_RSI[2] = *(int32_t *)(unaff_RBX + 0x128);
  unaff_RSI[1] = *(int32_t *)(unaff_RBX + 0x130);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044e890(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18044e890(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,int32_t param_6,int32_t *param_7,int *param_8,
                  int64_t param_9,int param_10)

{
  int64_t *plVar1;
  int32_t uVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int32_t *puVar8;
  int iVar9;
  int32_t *puVar10;
  uint uVar11;
  int64_t *plVar12;
  int64_t alStack_60 [3];
  int32_t uStack_48;
  
  lVar6 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x1028,8,3);
  plVar1 = (int64_t *)(lVar6 + 0x1000);
  plVar12 = (int64_t *)0x0;
  *plVar1 = 0;
  *(uint64_t *)(lVar6 + 0x1008) = 0;
  *(uint64_t *)(lVar6 + 0x1010) = 0;
  *(int32_t *)(lVar6 + 0x1018) = 3;
  *(int8_t *)(lVar6 + 0x1024) = 1;
  *(int32_t *)(lVar6 + 0x1020) = 0;
  alStack_60[0] = 0;
  alStack_60[1] = 0;
  alStack_60[2] = 0;
  uStack_48 = 3;
  if ((param_9 != 0) && (0 < param_10)) {
    FUN_180455b60(alStack_60,param_9,param_9 + (int64_t)param_10 * 4);
  }
  param_9 = param_5;
  plVar7 = alStack_60;
  if (param_10 < 1) {
    plVar7 = plVar12;
  }
  param_5 = param_4;
  cVar4 = FUN_180393610(param_1 + 0x2a68,param_2,param_3,&param_5,&param_9,param_6,lVar6,0x49742400,
                        plVar7,0,0x3f800000);
  if (cVar4 == '\0') {
    if (alStack_60[0] == 0) {
      FUN_1803968e0(lVar6);
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar6);
    }
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (*(char *)(lVar6 + 0x1024) == '\0') {
    iVar5 = (int)(*(int64_t *)(lVar6 + 0x1008) - *plVar1 >> 5);
  }
  else {
    iVar5 = *(int *)(lVar6 + 0x1020);
  }
  iVar9 = *param_8;
  if (iVar5 < *param_8) {
    iVar9 = iVar5;
  }
  *param_8 = iVar9;
  puVar10 = param_7;
  if (0 < iVar9) {
    do {
      lVar3 = lVar6;
      if (*(char *)(lVar6 + 0x1024) == '\0') {
        lVar3 = *plVar1;
      }
      puVar8 = (int32_t *)((int64_t)(int)plVar12 * 0x20 + lVar3);
      uVar2 = puVar8[1];
      *puVar10 = *puVar8;
      puVar10[1] = uVar2;
      uVar11 = (int)plVar12 + 1;
      plVar12 = (int64_t *)(uint64_t)uVar11;
      puVar10 = puVar10 + 2;
    } while ((int)uVar11 < *param_8);
  }
  FUN_1803968e0(lVar6);
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(lVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044ead0(int64_t param_1,int param_2,int param_3,uint64_t param_4,uint64_t param_5,
void FUN_18044ead0(int64_t param_1,int param_2,int param_3,uint64_t param_4,uint64_t param_5,
                  int32_t param_6,int32_t *param_7,int *param_8,int64_t param_9,int param_10,
                  int32_t param_11)

{
  int64_t *plVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int32_t *puVar10;
  int iVar11;
  int32_t *puVar12;
  uint uVar13;
  int64_t *plVar14;
  int64_t alStack_58 [3];
  int32_t uStack_40;
  
  lVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x1028,8,3);
  iVar7 = param_10;
  plVar1 = (int64_t *)(lVar8 + 0x1000);
  plVar14 = (int64_t *)0x0;
  *plVar1 = 0;
  *(uint64_t *)(lVar8 + 0x1008) = 0;
  *(uint64_t *)(lVar8 + 0x1010) = 0;
  *(int32_t *)(lVar8 + 0x1018) = 3;
  *(int8_t *)(lVar8 + 0x1024) = 1;
  *(int32_t *)(lVar8 + 0x1020) = 0;
  uVar3 = *(uint64_t *)(*(int64_t *)(param_1 + 12000) + (int64_t)param_2 * 8);
  uVar4 = *(uint64_t *)(*(int64_t *)(param_1 + 12000) + (int64_t)param_3 * 8);
  alStack_58[0] = 0;
  alStack_58[1] = 0;
  alStack_58[2] = 0;
  uStack_40 = 3;
  if ((param_9 != 0) && (0 < param_10)) {
    FUN_180455b60(alStack_58,param_9,param_9 + (int64_t)param_10 * 4);
  }
  param_9 = param_5;
  plVar9 = alStack_58;
  if (iVar7 < 1) {
    plVar9 = plVar14;
  }
  param_5 = param_4;
  cVar6 = FUN_180393610(param_1 + 0x2a68,uVar3,uVar4,&param_5,&param_9,param_6,lVar8,0x49742400,
                        plVar9,0,param_11);
  if (cVar6 == '\0') {
    if (alStack_58[0] == 0) {
      FUN_1803968e0(lVar8);
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar8);
    }
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (*(char *)(lVar8 + 0x1024) == '\0') {
    iVar7 = (int)(*(int64_t *)(lVar8 + 0x1008) - *plVar1 >> 5);
  }
  else {
    iVar7 = *(int *)(lVar8 + 0x1020);
  }
  iVar11 = *param_8;
  if (iVar7 < *param_8) {
    iVar11 = iVar7;
  }
  *param_8 = iVar11;
  puVar12 = param_7;
  if (0 < iVar11) {
    do {
      lVar5 = lVar8;
      if (*(char *)(lVar8 + 0x1024) == '\0') {
        lVar5 = *plVar1;
      }
      puVar10 = (int32_t *)((int64_t)(int)plVar14 * 0x20 + lVar5);
      uVar2 = puVar10[1];
      *puVar12 = *puVar10;
      puVar12[1] = uVar2;
      uVar13 = (int)plVar14 + 1;
      plVar14 = (int64_t *)(uint64_t)uVar13;
      puVar12 = puVar12 + 2;
    } while ((int)uVar13 < *param_8);
  }
  FUN_1803968e0(lVar8);
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(lVar8);
}



uint64_t
FUN_18044ed20(int64_t param_1,int param_2,int param_3,uint64_t param_4,uint64_t param_5,
             int32_t param_6,int32_t param_7,float *param_8)

{
  uint64_t uVar1;
  uint64_t uVar2;
  float *pfVar3;
  float extraout_XMM0_Da;
  
  pfVar3 = param_8;
  param_8 = (float *)param_5;
  uVar1 = *(uint64_t *)(*(int64_t *)(param_1 + 12000) + (int64_t)param_2 * 8);
  uVar2 = *(uint64_t *)(*(int64_t *)(param_1 + 12000) + (int64_t)param_3 * 8);
  *pfVar3 = 1e+30;
  param_5 = param_4;
  FUN_180392600(param_1 + 0x2a68,uVar1,uVar2,&param_5,&param_8,param_6,param_7);
  *pfVar3 = extraout_XMM0_Da;
  if (extraout_XMM0_Da != 1e+30) {
    return 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



