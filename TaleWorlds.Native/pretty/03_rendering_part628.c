#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// 03_rendering_part628.c - 7 个函数

// 函数: void FUN_18061c7a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18061c7a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puVar1;
  int64_t lVar2;
  int iVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  int iVar6;
  int64_t lVar7;
  char cVar8;
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  int8_t auStack_2a8 [32];
  uint64_t uStack_288;
  uint64_t *puStack_280;
  void *puStack_278;
  int8_t *puStack_270;
  int32_t uStack_268;
  uint64_t uStack_260;
  uint64_t uStack_258;
  char acStack_248 [512];
  uint64_t uStack_48;
  
  uStack_258 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2a8;
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar5 = (uint64_t *)func_0x00018004b9a0();
  uStack_288 = 0;
  puStack_280 = &uStackX_10;
  __stdio_common_vsprintf(*puVar5 | 1,acStack_248,0x200,param_1);
  puStack_278 = &system_data_buffer_ptr;
  uStack_260 = 0;
  puStack_270 = (int8_t *)0x0;
  uStack_268 = 0;
  lVar2 = -1;
  do {
    lVar7 = lVar2;
    lVar2 = lVar7 + 1;
  } while (acStack_248[lVar7 + 1] != '\0');
  if ((int)(lVar7 + 1) != 0) {
    iVar6 = (int)lVar7 + 2;
    iVar3 = iVar6;
    if (iVar6 < 0x10) {
      iVar3 = 0x10;
    }
    puStack_270 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar3,0x13);
    *puStack_270 = 0;
    uVar4 = CoreMemoryPoolCleaner(puStack_270);
    uStack_260 = CONCAT44(uStack_260._4_4_,uVar4);
                    // WARNING: Subroutine does not return
    memcpy(puStack_270,acStack_248,iVar6);
  }
  uStack_268 = 0;
  puVar1 = *(void **)*render_system_data_memory;
  if (puVar1 == &processed_var_424_ptr) {
    cVar8 = *(int *)(render_system_data_memory + 0xc40) != 0;
  }
  else {
    cVar8 = (**(code **)(puVar1 + 0x50))((uint64_t *)*render_system_data_memory);
  }
  if (cVar8 == '\0') {
    (**(code **)(*(int64_t *)render_system_data_memory[1] + 0x18))
              ((int64_t *)render_system_data_memory[1],&puStack_278,&processed_var_7484_ptr);
  }
  puStack_278 = &system_data_buffer_ptr;
  if (puStack_270 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  puStack_270 = (int8_t *)0x0;
  uStack_260 = uStack_260 & 0xffffffff00000000;
  puStack_278 = &system_state_ptr;
  FUN_180062340(system_message_context,3,acStack_248);
  SystemCore_ResourceManager0(acStack_248);
  (**(code **)(render_system_data_memory + 0x2f0))();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_2a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18061c990(int64_t param_1,int param_2,uint64_t param_3)
void FUN_18061c990(int64_t param_1,int param_2,uint64_t param_3)

{
  int8_t auStack_248 [32];
  uint64_t uStack_228;
  int8_t auStack_218 [512];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_248;
  if ((param_1 != 0) && (-1 < param_2)) {
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_248);
  }
  uStack_228 = param_3;
  SystemCore_CacheManager(auStack_218,0x200,&ui_system_data_1912_ptr,param_2);
  FUN_18061c7a0(auStack_218);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_248);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18061ca10(int64_t param_1,int param_2)
void FUN_18061ca10(int64_t param_1,int param_2)

{
  int8_t auStack_238 [32];
  int8_t auStack_218 [512];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_238;
  if ((param_1 != 0) && (-2 < param_2)) {
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_238);
  }
  SystemCore_CacheManager(auStack_218,0x200,&ui_system_data_1872_ptr,param_2);
  FUN_18061c7a0(auStack_218);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18061ca90(uint param_1)
void FUN_18061ca90(uint param_1)

{
  int64_t lVar1;
  int iVar2;
  int8_t auStack_248 [32];
  int iStack_228;
  int8_t auStack_218 [512];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_248;
  iVar2 = (int)system_status_flag;
  if (iVar2 - 2U < 2) {
    if (iVar2 == 1) {
      if (render_system_memory != 0) goto LAB_18061cadc;
    }
    else if (((iVar2 - 2U & 0xfffffffc) == 0) && (iVar2 != 4)) {
LAB_18061cadc:
      if (param_1 < 0x3ff) {
        lVar1 = (**(code **)(render_system_memory + 0x20))(&system_data_25a0,param_1);
        if ((lVar1 != 0) &&
           (lVar1 = (**(code **)(render_system_memory + 0x20))(&system_data_25a0,param_1),
           *(int *)(lVar1 + 0x10) == 1)) goto LAB_18061cb49;
        iVar2 = (int)system_status_flag;
      }
    }
  }
  iStack_228 = iVar2;
  SystemCore_CacheManager(auStack_218,0x200,&rendering_buffer_2000_ptr,param_1);
  FUN_18061c7a0(auStack_218);
LAB_18061cb49:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_248);
}



uint64_t * FUN_18061cb70(uint64_t *param_1)

{
  *param_1 = &rendering_buffer_2432_ptr;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 5) = 3;
  *(int32_t *)(param_1 + 6) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18061cbc0(int64_t param_1,int param_2)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint uVar7;
  
  lVar3 = *(int64_t *)(param_1 + 8);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x8000);
    uVar7 = (param_2 + 0xfU & 0xfffffff0) + uVar1;
    if (uVar7 < 0x8000) {
      *(uint *)(lVar3 + 0x8000) = uVar7;
      lVar3 = (uint64_t)uVar1 + lVar3;
      if (lVar3 != 0) {
        return lVar3;
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uint64_t)uVar1 <
      (uint64_t)(*(int64_t *)(param_1 + 0x18) - *(int64_t *)(param_1 + 0x10) >> 3)) {
    *(uint *)(param_1 + 0x30) = uVar1 + 1;
    lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x10) + (uint64_t)uVar1 * 8);
    *(int64_t *)(param_1 + 8) = lVar3;
    *(int32_t *)(lVar3 + 0x8000) = 0;
    goto FUN_18061cd3f;
  }
  lVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x8004,4,6);
  puVar4 = (uint64_t *)0x0;
  *(int32_t *)(lVar3 + 0x8000) = 0;
  *(int64_t *)(param_1 + 8) = lVar3;
  puVar6 = *(uint64_t **)(param_1 + 0x18);
  if (puVar6 < *(uint64_t **)(param_1 + 0x20)) {
    *(uint64_t **)(param_1 + 0x18) = puVar6 + 1;
    *puVar6 = *(uint64_t *)(param_1 + 8);
    puVar6 = *(uint64_t **)(param_1 + 0x18);
  }
  else {
    puVar5 = *(uint64_t **)(param_1 + 0x10);
    lVar3 = (int64_t)puVar6 - (int64_t)puVar5 >> 3;
    if (lVar3 == 0) {
      lVar3 = 1;
LAB_18061ccb8:
      puVar4 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar3 * 8,*(int8_t *)(param_1 + 0x28))
      ;
      puVar5 = *(uint64_t **)(param_1 + 0x10);
      puVar6 = *(uint64_t **)(param_1 + 0x18);
    }
    else {
      lVar3 = lVar3 * 2;
      if (lVar3 != 0) goto LAB_18061ccb8;
    }
    if (puVar5 != puVar6) {
                    // WARNING: Subroutine does not return
      memmove(puVar4,puVar5,(int64_t)puVar6 - (int64_t)puVar5);
    }
    *puVar4 = *(uint64_t *)(param_1 + 8);
    puVar6 = puVar4 + 1;
    if (*(int64_t *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    *(uint64_t **)(param_1 + 0x10) = puVar4;
    *(uint64_t **)(param_1 + 0x20) = puVar4 + lVar3;
    *(uint64_t **)(param_1 + 0x18) = puVar6;
  }
  *(int *)(param_1 + 0x30) = (int)((int64_t)puVar6 - *(int64_t *)(param_1 + 0x10) >> 3);
FUN_18061cd3f:
  lVar3 = 0;
  lVar2 = *(int64_t *)(param_1 + 8);
  uVar1 = *(uint *)(lVar2 + 0x8000);
  uVar7 = (param_2 + 0xfU & 0xfffffff0) + uVar1;
  if (uVar7 < 0x8000) {
    *(uint *)(lVar2 + 0x8000) = uVar7;
    lVar3 = lVar2 + (uint64_t)uVar1;
  }
  return lVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18061cc12(uint64_t param_1)

{
  uint uVar1;
  int64_t lVar2;
  uint64_t in_RAX;
  int64_t lVar3;
  uint64_t *puVar4;
  uint uVar5;
  uint64_t *puVar6;
  int64_t unaff_RBX;
  uint64_t *puVar7;
  uint unaff_R14D;
  
  if (param_1 < in_RAX) {
    *(int *)(unaff_RBX + 0x30) = (int)param_1 + 1;
    lVar3 = *(int64_t *)(*(int64_t *)(unaff_RBX + 0x10) + param_1 * 8);
    *(int64_t *)(unaff_RBX + 8) = lVar3;
    *(int32_t *)(lVar3 + 0x8000) = 0;
    goto FUN_18061cd3f;
  }
  lVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x8004,4,6);
  puVar4 = (uint64_t *)0x0;
  *(int32_t *)(lVar3 + 0x8000) = 0;
  *(int64_t *)(unaff_RBX + 8) = lVar3;
  puVar7 = *(uint64_t **)(unaff_RBX + 0x18);
  if (puVar7 < *(uint64_t **)(unaff_RBX + 0x20)) {
    *(uint64_t **)(unaff_RBX + 0x18) = puVar7 + 1;
    *puVar7 = *(uint64_t *)(unaff_RBX + 8);
    puVar7 = *(uint64_t **)(unaff_RBX + 0x18);
  }
  else {
    puVar6 = *(uint64_t **)(unaff_RBX + 0x10);
    lVar3 = (int64_t)puVar7 - (int64_t)puVar6 >> 3;
    if (lVar3 == 0) {
      lVar3 = 1;
LAB_18061ccb8:
      puVar4 = (uint64_t *)
               CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar3 * 8,*(int8_t *)(unaff_RBX + 0x28));
      puVar6 = *(uint64_t **)(unaff_RBX + 0x10);
      puVar7 = *(uint64_t **)(unaff_RBX + 0x18);
    }
    else {
      lVar3 = lVar3 * 2;
      if (lVar3 != 0) goto LAB_18061ccb8;
    }
    if (puVar6 != puVar7) {
                    // WARNING: Subroutine does not return
      memmove(puVar4,puVar6,(int64_t)puVar7 - (int64_t)puVar6);
    }
    *puVar4 = *(uint64_t *)(unaff_RBX + 8);
    puVar7 = puVar4 + 1;
    if (*(int64_t *)(unaff_RBX + 0x10) != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    *(uint64_t **)(unaff_RBX + 0x10) = puVar4;
    *(uint64_t **)(unaff_RBX + 0x20) = puVar4 + lVar3;
    *(uint64_t **)(unaff_RBX + 0x18) = puVar7;
  }
  *(int *)(unaff_RBX + 0x30) = (int)((int64_t)puVar7 - *(int64_t *)(unaff_RBX + 0x10) >> 3);
FUN_18061cd3f:
  lVar3 = 0;
  lVar2 = *(int64_t *)(unaff_RBX + 8);
  uVar1 = *(uint *)(lVar2 + 0x8000);
  uVar5 = (unaff_R14D & 0xfffffff0) + uVar1;
  if (uVar5 < 0x8000) {
    *(uint *)(lVar2 + 0x8000) = uVar5;
    lVar3 = lVar2 + (uint64_t)uVar1;
  }
  return lVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18061cc4a(uint64_t param_1,uint64_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint uVar4;
  uint64_t *puVar5;
  int64_t unaff_RBX;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint unaff_R14D;
  
  lVar2 = CoreMemoryPoolReallocator(param_1,param_2,4);
  puVar7 = (uint64_t *)0x0;
  *(int32_t *)(lVar2 + 0x8000) = 0;
  *(int64_t *)(unaff_RBX + 8) = lVar2;
  puVar6 = *(uint64_t **)(unaff_RBX + 0x18);
  if (puVar6 < *(uint64_t **)(unaff_RBX + 0x20)) {
    *(uint64_t **)(unaff_RBX + 0x18) = puVar6 + 1;
    *puVar6 = *(uint64_t *)(unaff_RBX + 8);
    puVar6 = *(uint64_t **)(unaff_RBX + 0x18);
    goto FUN_18061cd2f;
  }
  puVar5 = *(uint64_t **)(unaff_RBX + 0x10);
  lVar2 = (int64_t)puVar6 - (int64_t)puVar5 >> 3;
  if (lVar2 == 0) {
    lVar2 = 1;
LAB_18061ccb8:
    puVar3 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8,*(int8_t *)(unaff_RBX + 0x28))
    ;
    puVar5 = *(uint64_t **)(unaff_RBX + 0x10);
    puVar6 = *(uint64_t **)(unaff_RBX + 0x18);
  }
  else {
    lVar2 = lVar2 * 2;
    puVar3 = puVar7;
    if (lVar2 != 0) goto LAB_18061ccb8;
  }
  if (puVar5 != puVar6) {
                    // WARNING: Subroutine does not return
    memmove(puVar3,puVar5,(int64_t)puVar6 - (int64_t)puVar5);
  }
  *puVar3 = *(uint64_t *)(unaff_RBX + 8);
  puVar6 = puVar3 + 1;
  if (*(int64_t *)(unaff_RBX + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(uint64_t **)(unaff_RBX + 0x10) = puVar3;
  *(uint64_t **)(unaff_RBX + 0x20) = puVar3 + lVar2;
  *(uint64_t **)(unaff_RBX + 0x18) = puVar6;
FUN_18061cd2f:
  *(int *)(unaff_RBX + 0x30) = (int)((int64_t)puVar6 - *(int64_t *)(unaff_RBX + 0x10) >> 3);
  lVar2 = *(int64_t *)(unaff_RBX + 8);
  uVar1 = *(uint *)(lVar2 + 0x8000);
  uVar4 = (unaff_R14D & 0xfffffff0) + uVar1;
  if (uVar4 < 0x8000) {
    *(uint *)(lVar2 + 0x8000) = uVar4;
    puVar7 = (uint64_t *)(lVar2 + (uint64_t)uVar1);
  }
  return puVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18061cc92(uint64_t param_1,int64_t param_2)

{
  uint uVar1;
  int64_t in_RAX;
  uint64_t *puVar2;
  uint uVar3;
  int64_t unaff_RBX;
  int64_t lVar4;
  int64_t unaff_RSI;
  uint64_t *unaff_RDI;
  uint unaff_R14D;
  
  if (in_RAX >> 3 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = (in_RAX >> 3) * 2;
    puVar2 = unaff_RDI;
    if (lVar4 == 0) goto LAB_18061ccdc;
  }
  puVar2 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 8,*(int8_t *)(unaff_RBX + 0x28));
  param_2 = *(int64_t *)(unaff_RBX + 0x10);
  unaff_RSI = *(int64_t *)(unaff_RBX + 0x18);
LAB_18061ccdc:
  if (param_2 != unaff_RSI) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,param_2,unaff_RSI - param_2);
  }
  *puVar2 = *(uint64_t *)(unaff_RBX + 8);
  if (*(int64_t *)(unaff_RBX + 0x10) == 0) {
    *(uint64_t **)(unaff_RBX + 0x10) = puVar2;
    *(uint64_t **)(unaff_RBX + 0x20) = puVar2 + lVar4;
    *(uint64_t **)(unaff_RBX + 0x18) = puVar2 + 1;
    *(int *)(unaff_RBX + 0x30) =
         (int)((int64_t)(puVar2 + 1) - *(int64_t *)(unaff_RBX + 0x10) >> 3);
    lVar4 = *(int64_t *)(unaff_RBX + 8);
    uVar1 = *(uint *)(lVar4 + 0x8000);
    uVar3 = (unaff_R14D & 0xfffffff0) + uVar1;
    if (uVar3 < 0x8000) {
      *(uint *)(lVar4 + 0x8000) = uVar3;
      unaff_RDI = (uint64_t *)(lVar4 + (uint64_t)uVar1);
    }
    return unaff_RDI;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}



int64_t FUN_18061cd2f(void)

{
  uint uVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint unaff_R14D;
  
  *(int *)(unaff_RBX + 0x30) = (int)(unaff_RSI - *(int64_t *)(unaff_RBX + 0x10) >> 3);
  lVar2 = *(int64_t *)(unaff_RBX + 8);
  uVar1 = *(uint *)(lVar2 + 0x8000);
  uVar3 = (unaff_R14D & 0xfffffff0) + uVar1;
  if (uVar3 < 0x8000) {
    *(uint *)(lVar2 + 0x8000) = uVar3;
    unaff_RDI = lVar2 + (uint64_t)uVar1;
  }
  return unaff_RDI;
}



int64_t FUN_18061cd3f(void)

{
  uint uVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  uint unaff_R14D;
  
  lVar2 = *(int64_t *)(unaff_RBX + 8);
  uVar1 = *(uint *)(lVar2 + 0x8000);
  uVar3 = (unaff_R14D & 0xfffffff0) + uVar1;
  if (uVar3 < 0x8000) {
    *(uint *)(lVar2 + 0x8000) = uVar3;
    unaff_RDI = lVar2 + (uint64_t)uVar1;
  }
  return unaff_RDI;
}





// 函数: void FUN_18061cd6b(void)
void FUN_18061cd6b(void)

{
  return;
}





// 函数: void FUN_18061cd80(uint64_t *param_1)
void FUN_18061cd80(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  *param_1 = &rendering_buffer_2432_ptr;
  uVar3 = 0;
  plVar1 = param_1 + 2;
  lVar2 = *plVar1;
  if (param_1[3] - lVar2 >> 3 != 0) {
    do {
      if (*(int64_t *)(lVar2 + uVar3 * 8) != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(*plVar1 + uVar3 * 8) = 0;
      lVar2 = *plVar1;
      uVar3 = (uint64_t)((int)uVar3 + 1);
    } while (uVar3 < (uint64_t)(param_1[3] - lVar2 >> 3));
  }
  param_1[3] = lVar2;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  if (*plVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}



uint64_t FUN_18061ce30(uint64_t param_1,uint64_t param_2)

{
  FUN_18061cd80();
  if ((param_2 & 1) != 0) {
    free(param_1,0x38);
  }
  return param_1;
}



uint64_t * FUN_18061ce90(uint64_t *param_1,uint param_2)

{
  *param_1 = &rendering_buffer_2488_ptr;
  SystemDataValidator(param_1 + 1,0x38,2,FUN_18061cd80,0xfffffffffffffffe);
  *param_1 = &memory_allocator_3672_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x80);
  }
  return param_1;
}



uint64_t * FUN_18061cf30(uint64_t *param_1,uint param_2)

{
  *param_1 = &rendering_buffer_2376_ptr;
  SystemDataValidator(param_1 + 8,0x38,2,FUN_18061cd80,0xfffffffffffffffe);
  FUN_18061cd80(param_1 + 1);
  *param_1 = &rendering_buffer_2456_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8);
  }
  return param_1;
}



uint64_t FUN_18061cfb0(int64_t param_1,int64_t param_2,uint param_3)

{
  int64_t lVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  uint64_t uStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  uint uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int8_t uStack_38;
  int16_t uStack_36;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  uStack_88 = *(uint64_t *)(param_1 + 0x18);
  uStack_80 = *(uint64_t *)(param_1 + 0x20);
  uStack_78 = *(int32_t *)(param_1 + 0x28);
  uStack_70 = (int32_t)
              ((*(int64_t **)(param_1 + 0x10))[1] - **(int64_t **)(param_1 + 0x10) >> 6);
  uStack_74 = *(int32_t *)(param_1 + 0x2c);
  uStack_6c = param_3;
  if (param_3 != 0) {
    puVar3 = (int32_t *)(param_2 + 0x18);
    uVar4 = (uint64_t)param_3;
    do {
      lVar1 = *(int64_t *)(param_1 + 0x10);
      uStack_68 = puVar3[-6];
      uStack_64 = puVar3[-5];
      uStack_60 = puVar3[-4];
      puVar2 = *(int32_t **)(lVar1 + 8);
      uStack_5c = puVar3[-3];
      uStack_58 = puVar3[-2];
      uStack_54 = puVar3[-1];
      uStack_50 = *puVar3;
      uStack_36 = *(int16_t *)((int64_t)puVar3 + 0x1a);
      uStack_34 = puVar3[7];
      uStack_4c = 0x7f7fffff;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0x3f000000;
      uStack_30 = 0x3f000000;
      uStack_2c = 0x3f19999a;
      uStack_38 = 0;
      if (puVar2 < *(int32_t **)(lVar1 + 0x10)) {
        *(int32_t **)(lVar1 + 8) = puVar2 + 0x10;
        *puVar2 = uStack_68;
        puVar2[1] = uStack_64;
        puVar2[2] = uStack_60;
        puVar2[3] = uStack_5c;
        puVar2[4] = uStack_58;
        puVar2[5] = uStack_54;
        puVar2[6] = uStack_50;
        *(uint64_t *)(puVar2 + 7) = 0x7f7fffff;
        *(uint64_t *)(puVar2 + 9) = 0;
        puVar2[0xb] = 0x3f000000;
        *(int8_t *)(puVar2 + 0xc) = 0;
        *(int16_t *)((int64_t)puVar2 + 0x32) = uStack_36;
        puVar2[0xd] = uStack_34;
        puVar2[0xe] = 0x3f000000;
        puVar2[0xf] = 0x3f19999a;
      }
      else {
        FUN_1803cef40(lVar1,&uStack_68);
      }
      puVar3 = puVar3 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_180396dd0(*(uint64_t *)(param_1 + 8),&uStack_88);
  *(int8_t *)(param_1 + 0x30) = 1;
  return 1;
}



uint64_t FUN_18061cffd(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  int32_t *puVar2;
  uint64_t unaff_RBX;
  int32_t *puVar3;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t in_R11;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int8_t auStackX_20 [8];
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  int8_t uStack0000000000000070;
  int16_t uStack0000000000000072;
  int32_t uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  puVar3 = (int32_t *)(param_2 + 0x18);
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBP;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RDI;
  *(int32_t *)(in_R11 + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0xc) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x28) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x24) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x20) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x1c) = unaff_XMM7_Dd;
  param_3 = param_3 & 0xffffffff;
  do {
    lVar1 = *(int64_t *)(unaff_RSI + 0x10);
    uStack0000000000000040 = puVar3[-6];
    uStack0000000000000044 = puVar3[-5];
    uStack0000000000000048 = puVar3[-4];
    puVar2 = *(int32_t **)(lVar1 + 8);
    uStack000000000000004c = puVar3[-3];
    uStack0000000000000050 = puVar3[-2];
    uStack0000000000000054 = puVar3[-1];
    uStack0000000000000058 = *puVar3;
    uStack0000000000000072 = *(int16_t *)((int64_t)puVar3 + 0x1a);
    uStack0000000000000074 = puVar3[7];
    uStack000000000000005c = 0x7f7fffff;
    uStack0000000000000060 = 0;
    uStack0000000000000064 = 0;
    uStack0000000000000068 = 0;
    uStack000000000000006c = 0x3f000000;
    uStack0000000000000078 = 0x3f000000;
    uStack000000000000007c = 0x3f19999a;
    uStack0000000000000070 = 0;
    if (puVar2 < *(int32_t **)(lVar1 + 0x10)) {
      *(int32_t **)(lVar1 + 8) = puVar2 + 0x10;
      *puVar2 = uStack0000000000000040;
      puVar2[1] = uStack0000000000000044;
      puVar2[2] = uStack0000000000000048;
      puVar2[3] = uStack000000000000004c;
      puVar2[4] = uStack0000000000000050;
      puVar2[5] = uStack0000000000000054;
      puVar2[6] = uStack0000000000000058;
      *(uint64_t *)(puVar2 + 7) = 0x7f7fffff;
      *(uint64_t *)(puVar2 + 9) = 0;
      puVar2[0xb] = 0x3f000000;
      *(int8_t *)(puVar2 + 0xc) = 0;
      *(int16_t *)((int64_t)puVar2 + 0x32) = uStack0000000000000072;
      puVar2[0xd] = uStack0000000000000074;
      puVar2[0xe] = 0x3f000000;
      puVar2[0xf] = 0x3f19999a;
    }
    else {
      FUN_1803cef40(lVar1,&stack0x00000040);
    }
    puVar3 = puVar3 + 0x10;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  FUN_180396dd0(*(uint64_t *)(unaff_RSI + 8),auStackX_20);
  *(int8_t *)(unaff_RSI + 0x30) = 1;
  return 1;
}



int8_t FUN_18061d151(void)

{
  int64_t unaff_RSI;
  int8_t auStackX_20 [8];
  
  FUN_180396dd0(*(uint64_t *)(unaff_RSI + 8),auStackX_20);
  *(int8_t *)(unaff_RSI + 0x30) = 1;
  return 1;
}



uint64_t *
FUN_18061d170(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &processed_var_4848_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x38,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_18061d1b0(int64_t param_1)
void FUN_18061d1b0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  
  plVar1 = (int64_t *)(param_1 + 0x250);
  *(int64_t *)(param_1 + 600) = *plVar1;
  iVar3 = *(int *)(param_1 + 0x1ac) + *(int *)(param_1 + 0x1a8);
  uVar4 = ((uint)((iVar3 + -1) * iVar3) >> 1) + *(int *)(param_1 + 0x1b0) * iVar3;
  uVar5 = (uint64_t)uVar4;
  if (uVar4 == 0) {
    *(uint64_t *)(param_1 + 600) = uVar5 * 0x20 + *plVar1;
  }
  else {
    FUN_180622a80(plVar1);
    lVar2 = 0;
    do {
      *(uint64_t *)(lVar2 + 0x10 + *plVar1) = 0;
      *(int32_t *)(lVar2 + 0x18 + *plVar1) = 0;
      *(uint64_t *)(lVar2 + *plVar1) = 0;
      *(int16_t *)(lVar2 + 8 + *plVar1) = 0;
      *(int8_t *)(lVar2 + 0xb + *plVar1) = 0;
      *(int8_t *)(lVar2 + 10 + *plVar1) = 0;
      uVar5 = uVar5 - 1;
      lVar2 = lVar2 + 0x20;
    } while (uVar5 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



