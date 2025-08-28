#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part238.c - 18 个函数

// 函数: void FUN_18039f8c0(void)
void FUN_18039f8c0(void)

{
  int64_t *plVar1;
  uint in_EAX;
  int64_t lVar2;
  int8_t unaff_BPL;
  int64_t unaff_RSI;
  uint64_t uVar3;
  
  lVar2 = 0;
  uVar3 = (uint64_t)in_EAX;
  do {
    plVar1 = *(int64_t **)(lVar2 + *(int64_t *)(unaff_RSI + 0x30));
    (**(code **)(*plVar1 + 0xe0))(plVar1,unaff_BPL);
    lVar2 = lVar2 + 8;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return;
}





// 函数: void FUN_18039f8f9(void)
void FUN_18039f8f9(void)

{
  return;
}





// 函数: void FUN_18039f910(int64_t param_1,int8_t param_2)
void FUN_18039f910(int64_t param_1,int8_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t lVar3;
  
  uVar2 = *(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30) >> 3;
  if ((int)uVar2 != 0) {
    lVar3 = 0;
    uVar2 = uVar2 & 0xffffffff;
    do {
      plVar1 = *(int64_t **)(lVar3 + *(int64_t *)(param_1 + 0x30));
      (**(code **)(*plVar1 + 0xe8))(plVar1,param_2);
      lVar3 = lVar3 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}





// 函数: void FUN_18039f930(void)
void FUN_18039f930(void)

{
  int64_t *plVar1;
  uint in_EAX;
  int64_t lVar2;
  int8_t unaff_BPL;
  int64_t unaff_RSI;
  uint64_t uVar3;
  
  lVar2 = 0;
  uVar3 = (uint64_t)in_EAX;
  do {
    plVar1 = *(int64_t **)(lVar2 + *(int64_t *)(unaff_RSI + 0x30));
    (**(code **)(*plVar1 + 0xe8))(plVar1,unaff_BPL);
    lVar2 = lVar2 + 8;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return;
}





// 函数: void FUN_18039f969(void)
void FUN_18039f969(void)

{
  return;
}





// 函数: void FUN_18039f980(int64_t param_1,int8_t param_2)
void FUN_18039f980(int64_t param_1,int8_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x30);
  if (puVar1 < *(uint64_t **)(param_1 + 0x38)) {
    do {
      (**(code **)(*(int64_t *)*puVar1 + 0xf0))((int64_t *)*puVar1,param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 < *(uint64_t **)(param_1 + 0x38));
  }
  return;
}





// 函数: void FUN_18039f9d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18039f9d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  
  iVar2 = 0;
  if (*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30) >> 3 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(int64_t **)(lVar3 + *(int64_t *)(param_1 + 0x30));
      (**(code **)(*plVar1 + 0x168))(plVar1,param_2,param_3,param_4);
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + 1;
    } while ((uint64_t)(int64_t)iVar2 <
             (uint64_t)(*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30) >> 3));
  }
  return;
}





// 函数: void FUN_18039fa01(void)
void FUN_18039fa01(void)

{
  int64_t unaff_RBX;
  uint unaff_EDI;
  uint64_t uVar1;
  
  uVar1 = (uint64_t)unaff_EDI;
  do {
    (**(code **)(**(int64_t **)(uVar1 + *(int64_t *)(unaff_RBX + 0x30)) + 0x168))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x38) - *(int64_t *)(unaff_RBX + 0x30) >> 3));
  return;
}





// 函数: void FUN_18039fa52(void)
void FUN_18039fa52(void)

{
  return;
}





// 函数: void FUN_18039fa70(int64_t param_1,uint64_t param_2)
void FUN_18039fa70(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  
  *(uint64_t *)(param_1 + 0x28) = param_2;
  uVar2 = 0;
  uVar4 = uVar2;
  if (*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30) >> 3 != 0) {
    do {
      plVar1 = *(int64_t **)(uVar2 + *(int64_t *)(param_1 + 0x30));
      (**(code **)(*plVar1 + 0x1e0))(plVar1,param_2);
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30) >> 3));
  }
  return;
}





// 函数: void FUN_18039fa9c(void)
void FUN_18039fa9c(void)

{
  int64_t unaff_RBX;
  uint64_t uVar1;
  uint unaff_EDI;
  
  uVar1 = (uint64_t)unaff_EDI;
  do {
    (**(code **)(**(int64_t **)(uVar1 + *(int64_t *)(unaff_RBX + 0x30)) + 0x1e0))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x38) - *(int64_t *)(unaff_RBX + 0x30) >> 3));
  return;
}





// 函数: void FUN_18039fae3(void)
void FUN_18039fae3(void)

{
  return;
}





// 函数: void FUN_18039fb00(int64_t param_1,uint64_t param_2)
void FUN_18039fb00(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30) >> 3 != 0) {
    do {
      plVar1 = *(int64_t **)(uVar2 + *(int64_t *)(param_1 + 0x30));
      (**(code **)(*plVar1 + 0x150))(plVar1,param_2);
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30) >> 3));
  }
  return;
}





// 函数: void FUN_18039fb28(void)
void FUN_18039fb28(void)

{
  int64_t unaff_RBX;
  uint64_t uVar1;
  uint unaff_EDI;
  
  uVar1 = (uint64_t)unaff_EDI;
  do {
    (**(code **)(**(int64_t **)(uVar1 + *(int64_t *)(unaff_RBX + 0x30)) + 0x150))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x38) - *(int64_t *)(unaff_RBX + 0x30) >> 3));
  return;
}





// 函数: void FUN_18039fb63(void)
void FUN_18039fb63(void)

{
  return;
}



uint64_t *
FUN_18039fb80(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  CoreEngineDataBufferProcessor(param_2,0x13,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_2[1];
  *puVar1 = 0x7469736f706d6f63;
  puVar1[1] = 0x6e6f706d6f635f65;
  *(int32_t *)(puVar1 + 2) = 0x746e65;
  *(int32_t *)(param_2 + 2) = 0x13;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18039fc00(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  
  _Mtx_init_in_situ(param_1,2,param_3,param_4,0xfffffffffffffffe);
  plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
  lVar6 = 0;
  *plVar3 = 0;
  lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x2000000,10);
  *plVar3 = lVar4;
  LOCK();
  plVar3[1] = 0;
  UNLOCK();
  *(int32_t *)(plVar3 + 2) = 0;
  *(int64_t **)(param_1 + 0x50) = plVar3;
  LOCK();
  plVar1 = plVar3 + 1;
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + 0x40;
  UNLOCK();
  uVar5 = lVar4 + 0xfU & 0xfffffffffffffff0;
  lVar4 = lVar6;
  if (uVar5 + 0x30 < 0x2000000) {
    lVar4 = uVar5 + *plVar3;
  }
  uVar2 = *(uint64_t *)(param_1 + 0x50);
  *(int32_t *)(lVar4 + 0x19) = 0;
  *(int16_t *)(lVar4 + 0x1d) = 0;
  *(int8_t *)(lVar4 + 0x1f) = 0;
  *(uint64_t *)(lVar4 + 0x28) = uVar2;
  *(int64_t *)lVar4 = lVar4;
  *(int64_t *)(lVar4 + 8) = lVar4;
  *(uint64_t *)(lVar4 + 0x10) = 0;
  *(int8_t *)(lVar4 + 0x18) = 0;
  *(uint64_t *)(lVar4 + 0x20) = 0;
  *(int64_t *)(param_1 + 0x58) = lVar4;
  plVar3 = *(int64_t **)(param_1 + 0x50);
  LOCK();
  plVar1 = plVar3 + 1;
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + 0x48;
  UNLOCK();
  uVar5 = lVar4 + 0xfU & 0xfffffffffffffff0;
  lVar4 = lVar6;
  if (uVar5 + 0x38 < 0x2000000) {
    lVar4 = uVar5 + *plVar3;
  }
  uVar2 = *(uint64_t *)(param_1 + 0x50);
  *(int32_t *)(lVar4 + 0x20) = 0x3f800000;
  *(uint64_t *)(lVar4 + 0x24) = 0x40000000;
  *(uint64_t *)(lVar4 + 0x30) = uVar2;
  *(uint64_t *)(lVar4 + 0x10) = 1;
  *(void **)(lVar4 + 8) = &system_data_0000;
  *(uint64_t *)(lVar4 + 0x18) = 0;
  *(int32_t *)(lVar4 + 0x28) = 0;
  *(int64_t *)(param_1 + 0x60) = lVar4;
  plVar3 = *(int64_t **)(param_1 + 0x50);
  LOCK();
  plVar1 = plVar3 + 1;
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + 0x48;
  UNLOCK();
  uVar5 = lVar4 + 0xfU & 0xfffffffffffffff0;
  if (uVar5 + 0x38 < 0x2000000) {
    lVar6 = uVar5 + *plVar3;
  }
  uVar2 = *(uint64_t *)(param_1 + 0x50);
  *(int32_t *)(lVar6 + 0x20) = 0x3f800000;
  *(uint64_t *)(lVar6 + 0x24) = 0x40000000;
  *(uint64_t *)(lVar6 + 0x30) = uVar2;
  *(uint64_t *)(lVar6 + 0x10) = 1;
  *(void **)(lVar6 + 8) = &system_data_0000;
  *(uint64_t *)(lVar6 + 0x18) = 0;
  *(int32_t *)(lVar6 + 0x28) = 0;
  *(int64_t *)(param_1 + 0x68) = lVar6;
  return param_1;
}



int64_t FUN_18039fda0(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  int iVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t lVar12;
  bool bVar13;
  
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  puVar3 = *(uint64_t **)(param_1 + 0x58);
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  puVar6 = (uint64_t *)puVar3[2];
  puVar8 = puVar3;
  if ((uint64_t *)puVar3[2] == (uint64_t *)0x0) {
LAB_18039fe23:
    puVar8 = puVar3;
  }
  else {
    do {
      if ((int64_t *)puVar6[4] < param_2) {
        puVar7 = (uint64_t *)*puVar6;
      }
      else {
        puVar7 = (uint64_t *)puVar6[1];
        puVar8 = puVar6;
      }
      puVar6 = puVar7;
    } while (puVar7 != (uint64_t *)0x0);
    if ((puVar8 == puVar3) || (param_2 < (int64_t *)puVar8[4])) goto LAB_18039fe23;
  }
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  if (puVar8 == *(uint64_t **)(param_1 + 0x58)) {
    plVar4 = *(int64_t **)(param_1 + 0x50);
    LOCK();
    plVar1 = plVar4 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + 0x48;
    UNLOCK();
    uVar9 = lVar10 + 0xfU & 0xfffffffffffffff0;
    if (uVar9 + 0x38 < 0x2000000) {
      lVar10 = *plVar4 + uVar9;
    }
    else {
      lVar10 = 0;
    }
    uVar11 = *(uint64_t *)(param_1 + 0x50);
    *(int32_t *)(lVar10 + 0x20) = 0x3f800000;
    *(uint64_t *)(lVar10 + 0x24) = 0x40000000;
    *(uint64_t *)(lVar10 + 0x30) = uVar11;
    uVar11 = 1;
    *(uint64_t *)(lVar10 + 0x10) = 1;
    *(void **)(lVar10 + 8) = &system_data_0000;
    *(uint64_t *)(lVar10 + 0x18) = 0;
    *(int32_t *)(lVar10 + 0x28) = 0;
    puVar3 = *(uint64_t **)(param_1 + 0x58);
    plVar4 = (int64_t *)puVar3[5];
    LOCK();
    plVar1 = plVar4 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + 0x40;
    UNLOCK();
    uVar9 = lVar12 + 0xfU & 0xfffffffffffffff0;
    if (uVar9 + 0x30 < 0x2000000) {
      lVar12 = *plVar4 + uVar9;
    }
    else {
      lVar12 = 0;
    }
    puVar2 = (uint64_t *)(lVar12 + 0x20);
    *puVar2 = (uint64_t)param_2;
    if (param_2 != (int64_t *)0x0) {
      (**(code **)(*param_2 + 0x28))();
    }
    *(int64_t *)(lVar12 + 0x28) = lVar10;
    bVar13 = true;
    puVar6 = puVar3;
    if ((uint64_t *)puVar3[2] != (uint64_t *)0x0) {
      puVar8 = (uint64_t *)puVar3[2];
      do {
        puVar6 = puVar8;
        bVar13 = *puVar2 < (uint64_t)puVar6[4];
        if (bVar13) {
          puVar8 = (uint64_t *)puVar6[1];
        }
        else {
          puVar8 = (uint64_t *)*puVar6;
        }
      } while (puVar8 != (uint64_t *)0x0);
    }
    puVar8 = puVar6;
    if (bVar13) {
      if (puVar6 == (uint64_t *)puVar3[1]) goto LAB_18039ff5d;
      puVar8 = (uint64_t *)func_0x00018066b9a0(puVar6);
    }
    if ((uint64_t)puVar8[4] < *puVar2) {
LAB_18039ff5d:
      if ((puVar6 == puVar3) || (*puVar2 < (uint64_t)puVar6[4])) {
        uVar11 = 0;
      }
                    // WARNING: Subroutine does not return
      FUN_18066bdc0(lVar12,puVar6,puVar3,uVar11);
    }
    if ((int64_t *)*puVar2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*puVar2 + 0x38))();
    }
  }
  else {
    lVar10 = puVar8[5];
  }
  iVar5 = _Mtx_unlock(param_1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  return lVar10;
}





// 函数: void FUN_18039ffc0(int64_t param_1)
void FUN_18039ffc0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  
  plVar2 = *(int64_t **)(param_1 + 0x50);
  LOCK();
  plVar1 = plVar2 + 1;
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + 0x128;
  UNLOCK();
  uVar3 = lVar4 + 0xfU & 0xfffffffffffffff0;
  if (uVar3 + 0x118 < 0x2000000) {
    lVar4 = *plVar2 + uVar3;
  }
  else {
    lVar4 = 0;
  }
                    // WARNING: Subroutine does not return
  memset(lVar4,0,0x118);
}



uint64_t FUN_1803a0010(int64_t param_1,int64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  
  puVar1 = *(uint64_t **)(param_1 + 0x58);
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  puVar2 = (uint64_t *)puVar1[2];
  puVar4 = puVar1;
  if (puVar2 != (uint64_t *)0x0) {
    do {
      if ((int64_t *)puVar2[4] < param_2) {
        puVar2 = (uint64_t *)*puVar2;
      }
      else {
        puVar4 = puVar2;
        puVar2 = (uint64_t *)puVar2[1];
      }
    } while (puVar2 != (uint64_t *)0x0);
    if ((puVar4 != puVar1) && ((int64_t *)puVar4[4] <= param_2)) goto LAB_1803a008f;
  }
  puVar4 = puVar1;
LAB_1803a008f:
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  if (puVar4 == *(uint64_t **)(param_1 + 0x58)) {
    uVar3 = 0;
  }
  else {
    uVar3 = puVar4[5];
  }
  return uVar3;
}





// 函数: void FUN_1804007e0(uint64_t *param_1,uint64_t param_2,int64_t param_3,int32_t param_4)
void FUN_1804007e0(uint64_t *param_1,uint64_t param_2,int64_t param_3,int32_t param_4)

{
  uint uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  void *puVar6;
  int iVar7;
  int64_t *plVar8;
  uint64_t extraout_XMM0_Qa;
  float fVar9;
  float fVar10;
  int8_t auStack_1e8 [32];
  int32_t uStack_1c8;
  int8_t auStack_1b7 [7];
  void **ppuStack_1b0;
  void *puStack_1a8;
  uint64_t *puStack_1a0;
  int32_t uStack_198;
  uint64_t uStack_190;
  int32_t uStack_188;
  uint64_t uStack_118;
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  uint64_t uStack_48;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1e8;
  puVar6 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar6 = (void *)param_1[3];
  }
  ppuStack_1b0 = &puStack_a8;
  iVar7 = 0;
  puStack_a8 = &unknown_var_3480_ptr;
  puStack_a0 = auStack_90;
  uStack_98 = 0;
  auStack_90[0] = 0;
  uStack_188 = param_4;
  if (puVar6 != (void *)0x0) {
    FUN_180049bf0(&puStack_a8);
    FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_a8);
  }
  puVar6 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar6 = (void *)param_1[3];
  }
  FUN_1802c22a0(auStack_1b7,puVar6);
  if (((*(int *)(param_3 + 0x1d90) == 0) && (*(int *)(param_3 + 0x2dc0) == 0)) &&
     (*(int *)(param_3 + 0x2358) == 0)) {
    if ((void *)*param_1 != &unknown_var_7704_ptr) {
      (**(code **)((void *)*param_1 + 0x28))(param_1);
    }
    render_system_data_memory = render_system_data_memory + -1;
    (**(code **)(*render_system_data_memory + 0x20))();
    FUN_1802c2ac0(&puStack_a8);
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_1e8);
  }
  func_0x00018024c420(param_3);
  uVar1 = *(uint *)(param_3 + 4);
  *(uint *)(param_3 + 4) = uVar1 & 0xfffffffe;
  FUN_1800cd410(system_parameter_buffer,param_3,0,0);
  uVar3 = FUN_180245280(param_3);
  uVar3 = FUN_1800d7010(extraout_XMM0_Qa,param_3,param_1[0x85],uVar3);
  *(uint *)(param_3 + 4) = uVar1;
  if (((*(char *)(param_3 + 0x9a31) == '\0') ||
      (lVar4 = *(int64_t *)(param_3 + 0x99c0), lVar4 == 0)) ||
     ((uint64_t)(*(int64_t *)(lVar4 + 0x58) - *(int64_t *)(lVar4 + 0x50) >> 3) < 2)) {
    uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    lVar4 = FUN_1800bd5c0();
  }
  else {
    lVar4 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar4 + 0x58) + -8) + 0x428);
    if (lVar4 == 0) goto LAB_1804009a0;
    uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  }
  uStack_1c8 = 0xffffffff;
  uVar3 = FUN_18029d150(uVar3,0x18,lVar4);
LAB_1804009a0:
  *(int32_t *)((int64_t)param_1 + 0x10a) = 0x3000100;
  *(int8_t *)((int64_t)param_1 + 0x10e) = 0;
  FUN_1800debc0(uVar3,param_3,0);
  lVar4 = system_message_buffer;
  fVar10 = *(float *)(param_3 + 0x11c24);
  fVar9 = 1.0 / (float)(int)*(float *)(param_3 + 0x11c20);
  *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1be0) = fVar9 * 0.5;
  fVar10 = 1.0 / (float)(int)fVar10;
  *(float *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x1be4) = fVar10 * 0.5;
  *(float *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x1be8) = fVar9;
  *(float *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x1bec) = fVar10;
  uVar3 = FUN_1800bff50();
  FUN_18029fc10(*(int64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(system_message_buffer + 0x1c88),
                *(int64_t *)(system_message_buffer + 0x1cd8) + 0x1be0,0x230);
  plVar8 = param_1 + 0x27;
  do {
    if (*plVar8 != 0) {
      uStack_1c8 = 0xffffffff;
      FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),iVar7,*plVar8,0x10);
    }
    iVar7 = iVar7 + 1;
    plVar8 = plVar8 + 1;
  } while (iVar7 < 0x10);
  puStack_1a8 = &system_data_buffer_ptr;
  uStack_190 = 0;
  puStack_1a0 = (uint64_t *)0x0;
  uStack_198 = 0;
  puVar5 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x11,0x13);
  *(int8_t *)puVar5 = 0;
  puStack_1a0 = puVar5;
  uVar2 = CoreEngineSystemCleanup(puVar5);
  uStack_190 = CONCAT44(uStack_190._4_4_,uVar2);
  *puVar5 = 0x5f656361665f7369;
  puVar5[1] = 0x72616c7563657073;
  *(int8_t *)(puVar5 + 2) = 0;
  uStack_198 = 0x10;
  SystemCore_LoggingSystem0(uVar3,&puStack_1a8,1);
  puStack_1a8 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar5);
}



uint64_t * FUN_180400e70(uint64_t *param_1,uint64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_6336_ptr;
  if ((int64_t *)param_1[0x8d] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x8d] + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 0x8a,8,2,FUN_180045af0,uVar1);
  FUN_1801f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x470);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180400f00(int64_t *param_1,int64_t param_2)
void FUN_180400f00(int64_t *param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  void *puVar3;
  int32_t uVar4;
  int8_t auStack_2d8 [32];
  int32_t uStack_2b8;
  int32_t uStack_2b0;
  int32_t uStack_2a8;
  int32_t uStack_2a0;
  int32_t uStack_298;
  uint64_t uStack_290;
  int8_t uStack_288;
  int32_t uStack_280;
  int64_t *plStack_278;
  int64_t *plStack_270;
  void *puStack_268;
  void *puStack_260;
  uint uStack_258;
  int32_t uStack_250;
  void *puStack_248;
  void *puStack_240;
  uint uStack_238;
  int32_t uStack_230;
  int64_t *plStack_228;
  uint64_t uStack_220;
  void *puStack_218;
  int8_t *puStack_210;
  int32_t uStack_208;
  int8_t auStack_200 [40];
  void *puStack_1d8;
  uint *puStack_1d0;
  int32_t uStack_1c8;
  int32_t uStack_1c4;
  uint auStack_1c0 [3];
  int8_t uStack_1b4;
  uint64_t uStack_1b3;
  int32_t uStack_1a8;
  int8_t uStack_1a4;
  void *puStack_178;
  int8_t *puStack_170;
  uint uStack_168;
  int8_t auStack_160 [136];
  void *puStack_d8;
  int8_t *puStack_d0;
  uint uStack_c8;
  int8_t auStack_c0 [136];
  uint64_t uStack_38;
  
  uStack_220 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2d8;
  FUN_1801f9270();
  puStack_1d8 = &unknown_var_3480_ptr;
  puStack_1d0 = auStack_1c0;
  auStack_1c0[0] = auStack_1c0[0] & 0xffffff00;
  uStack_1c8 = 9;
  uVar4 = strcpy_s(auStack_1c0,0x40,&unknown_var_8600_ptr);
  uStack_280 = 1;
  uStack_288 = 1;
  uStack_290 = 0;
  uStack_298 = 0x40;
  uStack_2a0 = 4;
  uStack_2a8 = 5;
  uStack_2b0 = 0;
  uStack_2b8 = 5;
  plVar2 = (int64_t *)
           FUN_1800b0a10(uVar4,&plStack_278,*(int32_t *)(param_2 + 0x1bd4),&puStack_1d8);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_270 = (int64_t *)param_1[0x8d];
  param_1[0x8d] = lVar1;
  if (plStack_270 != (int64_t *)0x0) {
    (**(code **)(*plStack_270 + 0x38))();
  }
  if (plStack_278 != (int64_t *)0x0) {
    (**(code **)(*plStack_278 + 0x38))();
  }
  puStack_1d0 = (uint *)0x100000001;
  uStack_1c4 = 0;
  auStack_1c0[0] = 0;
  auStack_1c0[1] = 0;
  auStack_1c0[2] = 0x3f800000;
  uStack_1b3 = 1;
  uStack_1b4 = 0;
  uStack_1a4 = 0;
  uStack_1c8 = (int32_t)param_1[0xe];
  puStack_1d8 = (void *)0x100000001;
  uStack_1a8 = *(int32_t *)(param_2 + 0x1bd4);
  puStack_218 = &unknown_var_672_ptr;
  puStack_210 = auStack_200;
  auStack_200[0] = 0;
  uStack_208 = 0x13;
  strcpy_s(auStack_200,0x20,&unknown_var_6304_ptr);
  SystemCore_EncryptionEngine0(&puStack_248,&puStack_218);
  puStack_218 = &system_state_ptr;
  if (0 < *(int *)(param_2 + 0x3530)) {
    CoreEngineDataBufferProcessor(&puStack_248,uStack_238 + *(int *)(param_2 + 0x3530));
                    // WARNING: Subroutine does not return
    memcpy(puStack_240 + uStack_238,*(uint64_t *)(param_2 + 0x3528),
           (int64_t)(*(int *)(param_2 + 0x3530) + 1));
  }
  puStack_218 = &unknown_var_672_ptr;
  puStack_210 = auStack_200;
  auStack_200[0] = 0;
  uStack_208 = 0x13;
  strcpy_s(auStack_200,0x20,&unknown_var_6248_ptr);
  SystemCore_EncryptionEngine0(&puStack_268,&puStack_218);
  puStack_218 = &system_state_ptr;
  if (0 < *(int *)(param_2 + 0x3530)) {
    CoreEngineDataBufferProcessor(&puStack_268,uStack_258 + *(int *)(param_2 + 0x3530));
                    // WARNING: Subroutine does not return
    memcpy(puStack_260 + uStack_258,*(uint64_t *)(param_2 + 0x3528),
           (int64_t)(*(int *)(param_2 + 0x3530) + 1));
  }
  puStack_178 = &unknown_var_3432_ptr;
  puStack_170 = auStack_160;
  auStack_160[0] = 0;
  uStack_168 = uStack_238;
  puVar3 = &system_buffer_ptr;
  if (puStack_240 != (void *)0x0) {
    puVar3 = puStack_240;
  }
  strcpy_s(auStack_160,0x80,puVar3);
  plVar2 = (int64_t *)FUN_1800b1230(system_resource_state,&plStack_270,&puStack_178,&puStack_1d8);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_278 = (int64_t *)param_1[0x8a];
  param_1[0x8a] = lVar1;
  if (plStack_278 != (int64_t *)0x0) {
    (**(code **)(*plStack_278 + 0x38))();
  }
  if (plStack_270 != (int64_t *)0x0) {
    (**(code **)(*plStack_270 + 0x38))();
  }
  puStack_178 = &system_state_ptr;
  puStack_d8 = &unknown_var_3432_ptr;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = uStack_258;
  puVar3 = &system_buffer_ptr;
  if (puStack_260 != (void *)0x0) {
    puVar3 = puStack_260;
  }
  strcpy_s(auStack_c0,0x80,puVar3);
  plVar2 = (int64_t *)FUN_1800b1230(system_resource_state,&plStack_228,&puStack_d8,&puStack_1d8);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_278 = (int64_t *)param_1[0x8b];
  param_1[0x8b] = lVar1;
  if (plStack_278 != (int64_t *)0x0) {
    (**(code **)(*plStack_278 + 0x38))();
  }
  if (plStack_228 != (int64_t *)0x0) {
    (**(code **)(*plStack_228 + 0x38))();
  }
  puStack_d8 = &system_state_ptr;
  (**(code **)(*param_1 + 0x40))(param_1,param_2,0);
  plStack_278 = (int64_t *)param_1[0x89];
  param_1[0x89] = 0;
  if (plStack_278 != (int64_t *)0x0) {
    (**(code **)(*plStack_278 + 0x38))();
  }
  puStack_268 = &system_data_buffer_ptr;
  if (puStack_260 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_260 = (void *)0x0;
  uStack_250 = 0;
  puStack_268 = &system_state_ptr;
  puStack_248 = &system_data_buffer_ptr;
  if (puStack_240 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_240 = (void *)0x0;
  uStack_230 = 0;
  puStack_248 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_2d8);
}



// WARNING: Removing unreachable block (ram,0x000180401cae)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



