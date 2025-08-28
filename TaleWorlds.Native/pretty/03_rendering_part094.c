#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part094.c - 5 个函数

// 函数: void FUN_1803216f0(int64_t *param_1,uint64_t *param_2)
void FUN_1803216f0(int64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int iVar7;
  int32_t uVar8;
  uint64_t uVar9;
  int32_t *puVar10;
  uint64_t *puVar11;
  int32_t extraout_XMM0_Da;
  int64_t **pplStackX_10;
  int64_t *plStackX_18;
  int32_t *puStackX_20;
  int8_t auStack_40 [16];
  
  lVar2 = *(int64_t *)(system_main_module_state + 0x3d8);
  pplStackX_10 = &plStackX_18;
  plStackX_18 = (int64_t *)*param_1;
  if (plStackX_18 != (int64_t *)0x0) {
    (**(code **)(*plStackX_18 + 0x28))();
  }
  iVar7 = _Mtx_lock(lVar2 + 0xc0);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x68,8,3);
  puVar10 = (int32_t *)FUN_1803202a0(uVar9);
  puStackX_20 = puVar10;
  uVar8 = FUN_1800c17c0(extraout_XMM0_Da,plStackX_18 + 9);
  *puVar10 = uVar8;
  FUN_180627be0(puVar10 + 0x12,plStackX_18 + 9);
  uVar9 = param_2[1];
  *(uint64_t *)(puVar10 + 1) = *param_2;
  *(uint64_t *)(puVar10 + 3) = uVar9;
  uVar9 = param_2[3];
  *(uint64_t *)(puVar10 + 5) = param_2[2];
  *(uint64_t *)(puVar10 + 7) = uVar9;
  uVar8 = *(int32_t *)(param_2 + 4);
  uVar4 = *(int32_t *)((int64_t)param_2 + 0x24);
  uVar5 = *(int32_t *)(param_2 + 5);
  uVar6 = *(int32_t *)((int64_t)param_2 + 0x2c);
  puVar10[9] = uVar8;
  puVar10[10] = uVar4;
  puVar10[0xb] = uVar5;
  puVar10[0xc] = uVar6;
  uVar4 = *(int32_t *)((int64_t)param_2 + 0x34);
  uVar5 = *(int32_t *)(param_2 + 7);
  uVar6 = *(int32_t *)((int64_t)param_2 + 0x3c);
  puVar10[0xd] = *(int32_t *)(param_2 + 6);
  puVar10[0xe] = uVar4;
  puVar10[0xf] = uVar5;
  puVar10[0x10] = uVar6;
  uVar8 = FUN_1800c17c0(uVar8,puVar10 + 0x12);
  *puVar10 = uVar8;
  puVar1 = (uint64_t *)(lVar2 + 0x848);
  iVar7 = *(int *)(lVar2 + 0x150);
  pplStackX_10 = (int64_t **)CONCAT44(pplStackX_10._4_4_,iVar7);
  puVar11 = puVar1;
  puVar3 = *(uint64_t **)(lVar2 + 0x858);
  while (puVar3 != (uint64_t *)0x0) {
    if (*(int *)(puVar3 + 4) < iVar7) {
      puVar3 = (uint64_t *)*puVar3;
    }
    else {
      puVar11 = puVar3;
      puVar3 = (uint64_t *)puVar3[1];
    }
  }
  if ((puVar11 == puVar1) || (iVar7 < *(int *)(puVar11 + 4))) {
    puVar11 = (uint64_t *)FUN_18020d730(puVar1,auStack_40,puVar1,puVar11,&pplStackX_10);
    puVar11 = (uint64_t *)*puVar11;
  }
  SystemInitializer(puVar11 + 5,&puStackX_20);
  iVar7 = _Mtx_unlock(lVar2 + 0xc0);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  if (plStackX_18 != (int64_t *)0x0) {
    (**(code **)(*plStackX_18 + 0x38))();
  }
  if ((int64_t *)*param_1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_1 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803218b0(uint64_t *param_1,uint64_t param_2,int32_t param_3)
void FUN_1803218b0(uint64_t *param_1,uint64_t param_2,int32_t param_3)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int iVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  int64_t *plVar7;
  uint64_t *puVar8;
  int32_t uVar9;
  int iStackX_8;
  int32_t uStackX_c;
  int32_t *puStackX_20;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  
  uStack_58 = 0x3f800000;
  uStack_50 = 0;
  uStack_48 = 0x3f80000000000000;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0x3f800000;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x3f800000;
  lVar2 = *(int64_t *)(system_main_module_state + 0x3d8);
  iVar4 = _Mtx_lock(lVar2 + 0xc0);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xa8,8,3);
  puVar6 = (int32_t *)FUN_180320330(uVar5);
  uVar5 = param_1[1];
  *(uint64_t *)(puVar6 + 1) = *param_1;
  *(uint64_t *)(puVar6 + 3) = uVar5;
  uVar5 = param_1[3];
  *(uint64_t *)(puVar6 + 5) = param_1[2];
  *(uint64_t *)(puVar6 + 7) = uVar5;
  uVar5 = param_1[5];
  *(uint64_t *)(puVar6 + 9) = param_1[4];
  *(uint64_t *)(puVar6 + 0xb) = uVar5;
  uVar5 = param_1[7];
  *(uint64_t *)(puVar6 + 0xd) = param_1[6];
  *(uint64_t *)(puVar6 + 0xf) = uVar5;
  *(uint64_t *)(puVar6 + 0x11) = uStack_58;
  *(uint64_t *)(puVar6 + 0x13) = uStack_50;
  *(uint64_t *)(puVar6 + 0x15) = uStack_48;
  *(uint64_t *)(puVar6 + 0x17) = uStack_40;
  puVar6[0x19] = (int32_t)uStack_38;
  puVar6[0x1a] = uStack_38._4_4_;
  puVar6[0x1b] = (int32_t)uStack_30;
  puVar6[0x1c] = uStack_30._4_4_;
  puVar6[0x1d] = uStack_28;
  puVar6[0x1e] = uStack_24;
  puVar6[0x1f] = uStack_20;
  puVar6[0x20] = uStack_1c;
  puStackX_20 = puVar6;
  plVar7 = (int64_t *)FUN_1800c1750((int32_t)uStack_38,&iStackX_8,param_3);
  uVar9 = FUN_180627be0(puVar6 + 0x22,*plVar7 + 0x48);
  if ((int64_t *)CONCAT44(uStackX_c,iStackX_8) != (int64_t *)0x0) {
    uVar9 = (**(code **)(*(int64_t *)CONCAT44(uStackX_c,iStackX_8) + 0x38))();
  }
  uVar9 = FUN_1800c17c0(uVar9,puVar6 + 0x22);
  *puVar6 = uVar9;
  puVar1 = (uint64_t *)(lVar2 + 0x878);
  iStackX_8 = *(int *)(lVar2 + 0x150);
  puVar8 = puVar1;
  puVar3 = *(uint64_t **)(lVar2 + 0x888);
  while (puVar3 != (uint64_t *)0x0) {
    if (*(int *)(puVar3 + 4) < iStackX_8) {
      puVar3 = (uint64_t *)*puVar3;
    }
    else {
      puVar8 = puVar3;
      puVar3 = (uint64_t *)puVar3[1];
    }
  }
  if ((puVar8 == puVar1) || (iStackX_8 < *(int *)(puVar8 + 4))) {
    puVar8 = (uint64_t *)FUN_18020d730(puVar1,&uStack_58,puVar1,puVar8,&iStackX_8);
    puVar8 = (uint64_t *)*puVar8;
  }
  SystemInitializer(puVar8 + 5,&puStackX_20);
  iVar4 = _Mtx_unlock(lVar2 + 0xc0);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180321a90(uint64_t *param_1,int32_t *param_2,int32_t param_3)
void FUN_180321a90(uint64_t *param_1,int32_t *param_2,int32_t param_3)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int iVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  int64_t *plVar10;
  uint64_t *puVar11;
  int32_t uVar12;
  int iStackX_8;
  int32_t uStackX_c;
  int32_t *puStackX_10;
  int8_t auStack_30 [8];
  
  lVar2 = *(int64_t *)(system_main_module_state + 0x3d8);
  iVar7 = _Mtx_lock(lVar2 + 0xc0);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  uVar8 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,3);
  puVar9 = (int32_t *)FUN_1803203f0(uVar8);
  uVar8 = param_1[1];
  *(uint64_t *)(puVar9 + 1) = *param_1;
  *(uint64_t *)(puVar9 + 3) = uVar8;
  uVar12 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  puVar9[5] = uVar12;
  puVar9[6] = uVar4;
  puVar9[7] = uVar5;
  puVar9[8] = uVar6;
  puStackX_10 = puVar9;
  plVar10 = (int64_t *)FUN_1800c1750(uVar12,&iStackX_8,param_3);
  uVar12 = FUN_180627be0(puVar9 + 10,*plVar10 + 0x48);
  if ((int64_t *)CONCAT44(uStackX_c,iStackX_8) != (int64_t *)0x0) {
    uVar12 = (**(code **)(*(int64_t *)CONCAT44(uStackX_c,iStackX_8) + 0x38))();
  }
  uVar12 = FUN_1800c17c0(uVar12,puVar9 + 10);
  *puVar9 = uVar12;
  puVar1 = (uint64_t *)(lVar2 + 0x8a8);
  iStackX_8 = *(int *)(lVar2 + 0x150);
  puVar11 = puVar1;
  puVar3 = *(uint64_t **)(lVar2 + 0x8b8);
  while (puVar3 != (uint64_t *)0x0) {
    if (*(int *)(puVar3 + 4) < iStackX_8) {
      puVar3 = (uint64_t *)*puVar3;
    }
    else {
      puVar11 = puVar3;
      puVar3 = (uint64_t *)puVar3[1];
    }
  }
  if ((puVar11 == puVar1) || (iStackX_8 < *(int *)(puVar11 + 4))) {
    puVar11 = (uint64_t *)FUN_18020d730(puVar1,auStack_30,puVar1,puVar11,&iStackX_8);
    puVar11 = (uint64_t *)*puVar11;
  }
  SystemInitializer(puVar11 + 5,&puStackX_10);
  iVar7 = _Mtx_unlock(lVar2 + 0xc0);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * FUN_180321bf0(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int32_t uVar5;
  void *puStack_58;
  int64_t lStack_50;
  uint uStack_48;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  uint64_t uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  FUN_18032a200();
  *(int64_t *)(param_1 + 0x2d8) = param_2;
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = *(int32_t *)(param_2 + 0x320c);
  }
  *(int32_t *)(param_1 + 800) = uVar5;
  uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x560,8,3);
  lVar1 = *(int64_t *)(param_1 + 0x2d8);
  uStack_38 = *(int32_t *)(lVar1 + 0x60b70);
  uStack_34 = *(int32_t *)(lVar1 + 0x60b74);
  uStack_30 = 0;
  uStack_2c = 0x7f7fffff;
  uStack_28 = *(int32_t *)(lVar1 + 0x60b68);
  uStack_24 = *(int32_t *)(lVar1 + 0x60b6c);
  uStack_20 = 0;
  uStack_1c = 0x7f7fffff;
  uVar3 = FUN_1803a7870(uVar3,lVar1,0x41200000,&uStack_28,&uStack_38);
  *(uint64_t *)(param_1 + 0x528) = uVar3;
  *(int32_t *)(param_1 + 0x110) = 1;
  FUN_180627be0(param_1 + 0x2e0,param_2 + 0x4d8);
  FUN_180057110(param_1 + 0x300);
  uVar5 = FUN_18033d450(param_1 + 0x300,*(uint64_t *)(param_1 + 0x308),
                        *(uint64_t *)(param_2 + 0x60710),*(uint64_t *)(param_2 + 0x60718));
  FUN_18032d520(uVar5,&puStack_58);
  cVar2 = FUN_180624a00(&puStack_58);
  if (cVar2 == '\0') {
    FUN_180624910(&puStack_58);
  }
  uVar4 = (uint64_t)uStack_48;
  if (lStack_50 != 0) {
    CoreEngineDataBufferProcessor(param_1 + 0x208,uVar4);
  }
  if (uStack_48 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(param_1 + 0x210),lStack_50,uVar4);
  }
  *(int32_t *)(param_1 + 0x218) = 0;
  if (*(int64_t *)(param_1 + 0x210) != 0) {
    *(int8_t *)(uVar4 + *(int64_t *)(param_1 + 0x210)) = 0;
  }
  *(int32_t *)(param_1 + 0x224) = uStack_3c;
  FUN_1803342d0(param_1,0,1);
  lVar1 = render_system_data_memory;
  if (*(code **)(render_system_data_memory + 0x18) != (code *)0x0) {
    (**(code **)(render_system_data_memory + 0x18))(render_system_data_memory + 8,0,0);
  }
  *(void **)(lVar1 + 0x18) = &unknown_var_7568_ptr;
  *(void **)(lVar1 + 0x20) = &system_callback2_ptr;
  *(code **)(lVar1 + 8) = FUN_180321570;
  lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x2d8) + 0x260);
  if (*(code **)(lVar1 + 0xb50) != (code *)0x0) {
    (**(code **)(lVar1 + 0xb50))(lVar1 + 0xb40,0,0);
  }
  *(void **)(lVar1 + 0xb50) = &unknown_var_7504_ptr;
  *(code **)(lVar1 + 0xb58) = FUN_18033d370;
  *(code **)(lVar1 + 0xb40) = FUN_1803216f0;
  puStack_58 = &system_data_buffer_ptr;
  if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return &unknown_var_545_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180321e80(int64_t param_1,float param_2)

{
  uint64_t uVar1;
  
  *(int8_t *)(param_1 + 0xae1) = 1;
  uVar1 = *(int64_t *)(param_1 + 0x150) + 2;
  if (*(uint64_t *)(param_1 + 0x160) <= uVar1) {
    return uVar1 & 0xffffffffffffff00;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(system_message_context,&unknown_var_7408_ptr,(double)param_2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803224b0(int64_t param_1)
void FUN_1803224b0(int64_t param_1)

{
  uint *puVar1;
  bool bVar2;
  uint64_t *puVar3;
  int iVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint uVar9;
  uint64_t uVar10;
  int32_t auStackX_10 [2];
  uint uStackX_18;
  float fStackX_1c;
  char acStackX_20 [4];
  uint uStackX_24;
  int32_t uVar11;
  uint64_t uVar12;
  int32_t *puVar13;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int64_t alStack_70 [3];
  int64_t *plStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  void *puStack_48;
  code *pcStack_40;
  
  uVar12 = 0xfffffffffffffffe;
  puVar5 = (int32_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x908,8,3);
  LOCK();
  *puVar5 = 0;
  UNLOCK();
  uVar9 = 0;
  do {
    *(uint64_t *)(puVar5 + (int64_t)(int)uVar9 * 2 + 2) = 0;
    LOCK();
    *(int8_t *)((int64_t)puVar5 + (int64_t)(int)uVar9 + 0x808) = 1;
    UNLOCK();
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x100);
  LOCK();
  *puVar5 = 0;
  UNLOCK();
  puVar13 = puVar5;
  if (*(int *)(*(int64_t *)(param_1 + 0x2d8) + 0x51d0) != 0) {
    FUN_1801b9a40(puVar5,*(int32_t *)(*(int64_t *)(param_1 + 0x2d8) + 0x51d0));
    if (*(int *)(*(int64_t *)(param_1 + 0x2d8) + 0x51d0) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(*(int64_t *)(param_1 + 0x2d8) + 0x51d0) - 1U >> 0xc) + 1;
    }
    if (iVar4 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(uint64_t *)(puVar5 + 2),*(uint64_t *)(*(int64_t *)(param_1 + 0x2d8) + 0x51d8),
             0x20000);
    }
  }
  puVar8 = (uint64_t *)(param_1 + 0x958);
  iVar4 = *(int *)(param_1 + 0x150);
  bVar2 = true;
  puVar3 = puVar8;
  puVar6 = *(uint64_t **)(param_1 + 0x968);
  while (puVar6 != (uint64_t *)0x0) {
    bVar2 = iVar4 < *(int *)(puVar6 + 4);
    puVar3 = puVar6;
    if (iVar4 < *(int *)(puVar6 + 4)) {
      puVar6 = (uint64_t *)puVar6[1];
    }
    else {
      puVar6 = (uint64_t *)*puVar6;
    }
  }
  puVar6 = puVar3;
  if (bVar2) {
    if (puVar3 == *(uint64_t **)(param_1 + 0x960)) goto LAB_180322608;
    puVar6 = (uint64_t *)func_0x00018066b9a0(puVar3);
  }
  if (iVar4 <= *(int *)(puVar6 + 4)) {
    plStack_58 = (int64_t *)(*(int64_t *)(param_1 + 0x2d8) + 0x60858);
    puStack_48 = &unknown_var_7216_ptr;
    pcStack_40 = FUN_18033d250;
    uStack_80 = SUB84(plStack_58,0);
    uStack_78 = (int32_t)param_1;
    uStack_74 = (int32_t)((uint64_t)param_1 >> 0x20);
    uStack_50 = uStack_78;
    uStack_4c = uStack_74;
    FUN_18015b810(uStack_80,0,
                  *(int64_t *)(*(int64_t *)(param_1 + 0x2d8) + 0x60860) - *plStack_58 >> 3,0x10,
                  0xffffffffffffffff,&plStack_58,uVar12,puVar13);
    puVar8 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *(int32_t *)(puVar8 + 3) = 3;
    FUN_1802d3000(*(uint64_t *)(*(int64_t *)(param_1 + 0x2d8) + 0x260),puVar8);
    uVar11 = 0;
    iVar4 = _Mtx_lock(param_1 + 0x598);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    FUN_18033bd40(param_1 + 0x568,alStack_70);
    *(uint64_t **)(alStack_70[0] + 8) = puVar8;
    iVar4 = _Mtx_unlock(param_1 + 0x598);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    uVar9 = *(uint *)(param_1 + 0x150);
    fStackX_1c = (float)(*(int64_t *)
                          (&system_error_code +
                          (int64_t)*(int *)(*(int64_t *)(param_1 + 0x2d8) + 0x5b98) * 8) %
                        1000000000) * 1e-05;
    uVar10 = (uint64_t)(uVar9 % *(uint *)(param_1 + 0x998));
    for (puVar1 = *(uint **)(*(int64_t *)(param_1 + 0x990) + uVar10 * 8); uStackX_18 = uVar9,
        puVar1 != (uint *)0x0; puVar1 = *(uint **)(puVar1 + 2)) {
      if (uVar9 == *puVar1) goto LAB_18032285f;
    }
    puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,*(int8_t *)(param_1 + 0x9b4));
    *puVar8 = CONCAT44(fStackX_1c,uStackX_18);
    puVar8[1] = 0;
    FUN_18066c220(param_1 + 0x9a8,acStackX_20,*(int32_t *)(param_1 + 0x998),
                  *(int32_t *)(param_1 + 0x9a0),CONCAT44(uVar11,1));
    if (acStackX_20[0] != '\0') {
      uVar10 = (uint64_t)(uVar9 % uStackX_24);
      FUN_18033c010(param_1 + 0x988,uStackX_24);
    }
    puVar8[1] = *(uint64_t *)(*(int64_t *)(param_1 + 0x990) + uVar10 * 8);
    *(uint64_t **)(*(int64_t *)(param_1 + 0x990) + uVar10 * 8) = puVar8;
    *(int64_t *)(param_1 + 0x9a0) = *(int64_t *)(param_1 + 0x9a0) + 1;
LAB_18032285f:
    auStackX_10[0] = *(int32_t *)(param_1 + 0x150);
    FUN_1800571e0(param_1 + 0x230,auStackX_10);
    return;
  }
LAB_180322608:
  lVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,*(int8_t *)(param_1 + 0x980));
  uStack_78 = SUB84(puVar5,0);
  uStack_74 = (int32_t)((uint64_t)puVar5 >> 0x20);
  *(int *)(lVar7 + 0x20) = iVar4;
  *(int32_t *)(lVar7 + 0x24) = uStack_7c;
  *(int32_t *)(lVar7 + 0x28) = uStack_78;
  *(int32_t *)(lVar7 + 0x2c) = uStack_74;
  if ((puVar3 == puVar8) || (uVar9 = 1, iVar4 < *(int *)(puVar3 + 4))) {
    uVar9 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,puVar3,puVar8,uVar9);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180322890(int64_t param_1,int64_t param_2,int param_3)
void FUN_180322890(int64_t param_1,int64_t param_2,int param_3)

{
  uint64_t *puVar1;
  char cVar2;
  char cVar3;
  int32_t uVar4;
  int iVar5;
  uint64_t uVar6;
  int32_t *puVar7;
  char *pcVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int *piVar12;
  void *puVar13;
  int64_t *plVar14;
  int *piVar15;
  int64_t *plVar16;
  int *piVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint uVar20;
  int64_t lVar21;
  int32_t *puVar22;
  bool bVar23;
  int8_t auStack_f8 [32];
  uint64_t uStack_d8;
  int32_t auStack_c8 [2];
  int64_t lStack_c0;
  int32_t *puStack_b8;
  uint64_t auStack_b0 [3];
  int64_t lStack_98;
  int64_t lStack_90;
  uint64_t uStack_88;
  void *puStack_80;
  int8_t *puStack_78;
  int iStack_70;
  int8_t auStack_68 [32];
  uint64_t uStack_48;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  if (((*(byte *)(param_2 + 0x2e8) & 0xb) == 0xb) && ((*(uint *)(param_2 + 0x2ac) >> 0x12 & 1) != 0)
     ) {
    bVar23 = true;
  }
  else {
    bVar23 = false;
  }
  lStack_98 = param_1;
  if ((param_3 != -1) || (bVar23)) {
    uVar4 = FUN_18032b4a0(param_1,param_2);
    auStack_c8[0] = uVar4;
    lStack_90 = FUN_18032b680(param_1,uVar4);
    if (param_3 == -1) {
      puVar7 = (int32_t *)(param_1 + 0x4d8);
      puStack_b8 = puVar7;
      iVar5 = _Mtx_lock(puVar7);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      uStack_d8 = (uint64_t)*(uint *)(param_1 + 0x150);
      lStack_c0 = CONCAT44(lStack_c0._4_4_,*(uint *)(param_1 + 0x150));
      FUN_18033af10(param_1 + 0x4a8,auStack_b0);
      FUN_180239390(auStack_b0[0] + 8,auStack_b0,auStack_c8);
      iVar5 = _Mtx_unlock(puVar7);
      uVar4 = auStack_c8[0];
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
        uVar4 = auStack_c8[0];
      }
    }
    uVar6 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1b0,8,3);
    puVar7 = (int32_t *)FUN_180320c80(uVar6);
    *puVar7 = 1;
    uVar6 = *(uint64_t *)(param_2 + 0x38);
    *(uint64_t *)(puVar7 + 1) = *(uint64_t *)(param_2 + 0x30);
    *(uint64_t *)(puVar7 + 3) = uVar6;
    uVar6 = *(uint64_t *)(param_2 + 0x48);
    *(uint64_t *)(puVar7 + 5) = *(uint64_t *)(param_2 + 0x40);
    *(uint64_t *)(puVar7 + 7) = uVar6;
    uVar6 = *(uint64_t *)(param_2 + 0x58);
    *(uint64_t *)(puVar7 + 9) = *(uint64_t *)(param_2 + 0x50);
    *(uint64_t *)(puVar7 + 0xb) = uVar6;
    uVar6 = *(uint64_t *)(param_2 + 0x68);
    *(uint64_t *)(puVar7 + 0xd) = *(uint64_t *)(param_2 + 0x60);
    *(uint64_t *)(puVar7 + 0xf) = uVar6;
    puVar7[0x2a] = *(int32_t *)(param_2 + 700);
    puVar7[0x2b] = *(int32_t *)(param_2 + 0x2cc);
    *(int8_t *)(puVar7 + 0x13) = *(int8_t *)(param_2 + 0x2e5);
    *(bool *)(puVar7 + 0x2c) = (*(byte *)(param_2 + 0x2e8) & 0xb) == 0xb;
    puVar7[0x11] = uVar4;
    puVar7[0x12] = param_3;
    puVar13 = &system_buffer_ptr;
    if (*(void **)(param_2 + 0x290) != (void *)0x0) {
      puVar13 = *(void **)(param_2 + 0x290);
    }
    puStack_b8 = puVar7;
    (**(code **)(*(int64_t *)(puVar7 + 0x14) + 0x10))(puVar7 + 0x14,puVar13);
    uVar18 = 0;
    lVar21 = *(int64_t *)(param_2 + 0x200);
    uVar19 = uVar18;
    if (*(int64_t *)(param_2 + 0x208) - lVar21 >> 3 != 0) {
      do {
        lVar21 = *(int64_t *)(*(int64_t *)(lVar21 + uVar18) + 0x10);
        puStack_80 = &unknown_var_672_ptr;
        puStack_78 = auStack_68;
        auStack_68[0] = 0;
        iStack_70 = 0xb;
        strcpy_s(auStack_68,0x20,&unknown_var_6192_ptr);
        iVar5 = *(int *)(lVar21 + 0x18);
        if (iVar5 == iStack_70) {
          if (iVar5 == 0) {
LAB_180322b1e:
            if (iStack_70 != 0) goto LAB_180322b26;
            bVar23 = true;
          }
          else {
            pcVar8 = *(char **)(lVar21 + 0x10);
            lVar21 = (int64_t)puStack_78 - (int64_t)pcVar8;
            do {
              cVar2 = *pcVar8;
              cVar3 = pcVar8[lVar21];
              if (cVar2 != cVar3) break;
              pcVar8 = pcVar8 + 1;
            } while (cVar3 != '\0');
            bVar23 = cVar2 == cVar3;
          }
        }
        else {
          if (iVar5 == 0) goto LAB_180322b1e;
LAB_180322b26:
          bVar23 = false;
        }
        puStack_80 = &system_state_ptr;
        if (bVar23) {
          lVar21 = *(int64_t *)(*(int64_t *)(param_2 + 0x200) + (int64_t)(int)uVar19 * 8);
          puVar7[0x2e] = (float)*(double *)(lVar21 + 0x78);
          puVar7[0x2d] = (float)*(double *)(lVar21 + 0x70);
          break;
        }
        uVar20 = (int)uVar19 + 1;
        uVar18 = uVar18 + 8;
        lVar21 = *(int64_t *)(param_2 + 0x200);
        uVar19 = (uint64_t)uVar20;
      } while ((uint64_t)(int64_t)(int)uVar20 <
               (uint64_t)(*(int64_t *)(param_2 + 0x208) - lVar21 >> 3));
    }
    FUN_180322e90(param_1,puVar7 + 0x30,*(uint64_t *)(param_2 + 0x260));
    uVar18 = *(int64_t *)(param_2 + 0xf8) - *(int64_t *)(param_2 + 0xf0) >> 3;
    puVar1 = (uint64_t *)(puVar7 + 100);
    uVar19 = uVar18 & 0xffffffff;
    auStack_b0[0] = uVar19;
    FUN_1800e8140(puVar1,uVar18 & 0xffffffff);
    puVar22 = puVar7;
    if ((int)uVar18 != 0) {
      lVar21 = 0;
      do {
        lStack_c0 = 0;
        FUN_180323340(param_1,&lStack_c0,*(uint64_t *)(lVar21 + *(int64_t *)(param_2 + 0xf0)),
                      0xffffffff);
        lVar11 = lStack_c0;
        if (lStack_c0 != 0) {
          plVar16 = *(int64_t **)(puVar7 + 0x66);
          if (plVar16 < *(int64_t **)(puVar7 + 0x68)) {
            *(int64_t **)(puVar7 + 0x66) = plVar16 + 1;
            *plVar16 = lStack_c0;
          }
          else {
            plVar14 = (int64_t *)*puVar1;
            lVar9 = (int64_t)plVar16 - (int64_t)plVar14 >> 3;
            if (lVar9 == 0) {
              lVar9 = 1;
LAB_180322c61:
              plVar10 = (int64_t *)
                        CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 8,*(int8_t *)(puVar7 + 0x6a));
              plVar16 = *(int64_t **)(puVar7 + 0x66);
              plVar14 = (int64_t *)*puVar1;
            }
            else {
              lVar9 = lVar9 * 2;
              if (lVar9 != 0) goto LAB_180322c61;
              plVar10 = (int64_t *)0x0;
            }
            if (plVar14 != plVar16) {
                    // WARNING: Subroutine does not return
              memmove(plVar10,plVar14,(int64_t)plVar16 - (int64_t)plVar14);
            }
            *plVar10 = lVar11;
            if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            *puVar1 = (uint64_t)plVar10;
            *(int64_t **)(puVar7 + 0x66) = plVar10 + 1;
            *(int64_t **)(puVar7 + 0x68) = plVar10 + lVar9;
            uVar19 = auStack_b0[0];
            param_1 = lStack_98;
          }
        }
        lVar21 = lVar21 + 8;
        uVar19 = uVar19 - 1;
        puVar22 = puStack_b8;
        uVar4 = auStack_c8[0];
        auStack_b0[0] = uVar19;
      } while (uVar19 != 0);
    }
    uVar18 = *(int64_t *)(param_2 + 0x1c8) - *(int64_t *)(param_2 + 0x1c0) >> 3;
    puVar1 = (uint64_t *)(puVar22 + 0x5c);
    uVar19 = uVar18 & 0xffffffff;
    auStack_b0[0] = uVar19;
    FUN_18014e8b0(puVar1,uVar18 & 0xffffffff);
    if ((int)uVar18 != 0) {
      lVar21 = 0;
      do {
        iVar5 = FUN_180322890(param_1,*(uint64_t *)(lVar21 + *(int64_t *)(param_2 + 0x1c0)),uVar4
                             );
        if (iVar5 != -1) {
          piVar17 = *(int **)(puVar22 + 0x5e);
          if (piVar17 < *(int **)(puVar22 + 0x60)) {
            *(int **)(puVar22 + 0x5e) = piVar17 + 1;
            *piVar17 = iVar5;
          }
          else {
            piVar15 = (int *)*puVar1;
            lVar11 = (int64_t)piVar17 - (int64_t)piVar15 >> 2;
            if (lVar11 == 0) {
              lVar11 = 1;
LAB_180322d80:
              piVar12 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar11 * 4,
                                             *(int8_t *)(puVar22 + 0x62));
              piVar17 = *(int **)(puVar22 + 0x5e);
              piVar15 = (int *)*puVar1;
            }
            else {
              lVar11 = lVar11 * 2;
              if (lVar11 != 0) goto LAB_180322d80;
              piVar12 = (int *)0x0;
            }
            if (piVar15 != piVar17) {
                    // WARNING: Subroutine does not return
              memmove(piVar12,piVar15,(int64_t)piVar17 - (int64_t)piVar15);
            }
            *piVar12 = iVar5;
            if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            *puVar1 = (uint64_t)piVar12;
            *(int **)(puVar22 + 0x5e) = piVar12 + 1;
            *(int **)(puVar22 + 0x60) = piVar12 + lVar11;
            uVar19 = auStack_b0[0];
            param_1 = lStack_98;
          }
        }
        lVar21 = lVar21 + 8;
        uVar19 = uVar19 - 1;
        uVar4 = auStack_c8[0];
        auStack_b0[0] = uVar19;
      } while (uVar19 != 0);
      auStack_b0[0] = 0;
      puVar22 = puStack_b8;
    }
    lVar11 = lStack_90;
    uVar20 = *(uint *)(param_1 + 0x150);
    lStack_c0 = CONCAT44(lStack_c0._4_4_,uVar20);
    lVar21 = lStack_90 + 0x30;
    lStack_90 = lVar21;
    iVar5 = _Mtx_lock(lVar21);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
    uStack_d8 = (uint64_t)uVar20;
    FUN_18033bd40(lVar11,auStack_b0);
    *(int32_t **)(auStack_b0[0] + 8) = puVar22;
    iVar5 = _Mtx_unlock(lVar21);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



