/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer


#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part081.c - 6 个函数

// 函数: void FUN_1802d2930(int64_t param_1,int32_t param_2)
void FUN_1802d2930(int64_t param_1,int32_t param_2)

{
  int64_t *plVar1;
  int8_t auVar2 [16];
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  int iVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int32_t *puVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint64_t uVar17;
  int64_t lVar18;
  int32_t auStackX_10 [2];
  int32_t *puStackX_18;
  int64_t *plStackX_20;
  uint64_t uVar19;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t *puStack_60;
  void *puStack_58;
  code *pcStack_50;
  
  uVar19 = 0xfffffffffffffffe;
  lVar12 = param_1 + 0xaa8;
  auStackX_10[0] = param_2;
  lVar15 = lVar12;
  iVar4 = _Mtx_lock(lVar12);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  plVar1 = (int64_t *)(param_1 + 0xaf8);
  uVar17 = *(int64_t *)(param_1 + 0xb00) - *plVar1 >> 3;
  puStackX_18 = &uStack_68;
  puStack_60 = auStackX_10;
  puStack_58 = &processed_var_8304_ptr;
  pcStack_50 = FUN_1802d9500;
  uStack_78 = (int32_t)param_1;
  uStack_74 = (int32_t)((uint64_t)param_1 >> 0x20);
  uStack_68 = uStack_78;
  uStack_64 = uStack_74;
  iVar4 = (int)uVar17;
  SystemCore_DataTransformer(uStack_78,0,uVar17 & 0xffffffff,0x10,0xffffffffffffffff,&uStack_68,lVar15,uVar19);
  lVar18 = (int64_t)iVar4;
  if (0 < iVar4) {
    lVar16 = 0;
    lVar12 = lVar15;
    do {
      lVar6 = 0xe38e38e38e38e39;
      puVar11 = (int32_t *)*plVar1;
      lVar15 = *(int64_t *)(puVar11 + lVar16 * 2);
      puStackX_18 = puVar11;
      cVar3 = func_0x0001802ae0a0(lVar15);
      if (cVar3 == '\0') {
        lVar9 = 0;
        iVar4 = (int)((*(int64_t *)(lVar15 + 0x140) - *(int64_t *)(lVar15 + 0x138)) / 0x28);
        if (0 < iVar4) {
          plVar10 = (int64_t *)(*(int64_t *)(lVar15 + 0x138) + 8);
          do {
            auVar2 = SEXT816(lVar6) * SEXT816(plVar10[1] - *plVar10);
            iVar7 = (int)(auVar2._8_8_ >> 3) - (auVar2._12_4_ >> 0x1f);
            lVar15 = 0;
            if (0 < iVar7) {
              plVar14 = (int64_t *)(*plVar10 + 0x20);
              do {
                lVar5 = *(int64_t *)(*plVar14 + 0x60) - *(int64_t *)(*plVar14 + 0x58);
                lVar6 = lVar5 >> 0x3f;
                if (lVar5 / 0x70 + lVar6 != lVar6) goto LAB_1802d2bbf;
                plVar13 = (int64_t *)plVar14[2];
                lVar6 = 0;
                iVar8 = (int)((plVar14[3] - (int64_t)plVar13) / 0x88);
                if (0 < iVar8) {
                  do {
                    if ((*(int64_t *)(*plVar13 + 0x60) - *(int64_t *)(*plVar13 + 0x58)) / 0x70 !=
                        0) goto LAB_1802d2bbf;
                    lVar6 = lVar6 + 1;
                    plVar13 = plVar13 + 0x11;
                  } while (lVar6 < iVar8);
                }
                lVar15 = lVar15 + 1;
                plVar14 = plVar14 + 0x12;
              } while (lVar15 < iVar7);
            }
            lVar9 = lVar9 + 1;
            plVar10 = plVar10 + 5;
            lVar6 = 0xe38e38e38e38e39;
            puVar11 = puStackX_18;
          } while (lVar9 < iVar4);
        }
        plVar10 = *(int64_t **)(puVar11 + lVar18 * 2 + -2);
        if (plVar10 != (int64_t *)0x0) {
          plStackX_20 = plVar10;
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        plStackX_20 = *(int64_t **)(puVar11 + lVar16 * 2);
        *(int64_t **)(puVar11 + lVar16 * 2) = plVar10;
        if (plStackX_20 != (int64_t *)0x0) {
          (**(code **)(*plStackX_20 + 0x38))();
        }
        uVar17 = (uint64_t)((int)uVar17 - 1);
        lVar18 = lVar18 + -1;
      }
      else {
LAB_1802d2bbf:
        lVar16 = lVar16 + 1;
      }
      iVar4 = (int)uVar17;
    } while (lVar16 < lVar18);
  }
  FUN_1800b8630(plVar1,(int64_t)iVar4);
  iVar4 = _Mtx_unlock(lVar12);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1802d2c20(int64_t param_1,int32_t param_2,int64_t *param_3)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plStackX_20;
  int64_t *plStack_30;
  int64_t *plStack_28;
  uint64_t uStack_20;
  int64_t **pplStack_18;
  
  uStack_20 = 0xfffffffffffffffe;
  FUN_1800c1750(param_1,&plStackX_20,param_2);
  if (plStackX_20 == (int64_t *)0x0) {
    SystemCore_Allocator(&processed_var_9528_ptr,param_2);
    uVar5 = 0;
  }
  else {
    uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x168,8,3);
    plVar6 = (int64_t *)FUN_1802ac390(uVar5);
    plStack_28 = plVar6;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    FUN_1802ae9a0(plVar6,*(uint64_t *)(param_1 + 0x308));
    pplStack_18 = &plStack_30;
    plStack_30 = plStackX_20;
    if (plStackX_20 != (int64_t *)0x0) {
      (**(code **)(*plStackX_20 + 0x28))();
    }
    FUN_1802adab0(plVar6,&plStack_30);
    lVar1 = param_3[1];
    plVar6[10] = *param_3;
    plVar6[0xb] = lVar1;
    lVar1 = param_3[3];
    plVar6[0xc] = param_3[2];
    plVar6[0xd] = lVar1;
    uVar2 = *(int32_t *)((int64_t)param_3 + 0x24);
    lVar1 = param_3[5];
    uVar3 = *(int32_t *)((int64_t)param_3 + 0x2c);
    *(int *)(plVar6 + 0xe) = (int)param_3[4];
    *(int32_t *)((int64_t)plVar6 + 0x74) = uVar2;
    *(int *)(plVar6 + 0xf) = (int)lVar1;
    *(int32_t *)((int64_t)plVar6 + 0x7c) = uVar3;
    uVar2 = *(int32_t *)((int64_t)param_3 + 0x34);
    lVar1 = param_3[7];
    uVar3 = *(int32_t *)((int64_t)param_3 + 0x3c);
    *(int *)(plVar6 + 0x10) = (int)param_3[6];
    *(int32_t *)((int64_t)plVar6 + 0x84) = uVar2;
    *(int *)(plVar6 + 0x11) = (int)lVar1;
    *(int32_t *)((int64_t)plVar6 + 0x8c) = uVar3;
    lVar1 = param_1 + 0xaa8;
    pplStack_18 = (int64_t **)lVar1;
    iVar4 = _Mtx_lock(lVar1);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    PhysicsSystem_TriggersProcessor(param_1 + 0xaf8,&plStack_28);
    uVar5 = 1;
    iVar4 = _Mtx_unlock(lVar1);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    if (plStack_28 != (int64_t *)0x0) {
      (**(code **)(*plStack_28 + 0x38))();
    }
  }
  if (plStackX_20 != (int64_t *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802d2d90(int64_t param_1,int64_t *param_2,int64_t *param_3)
void FUN_1802d2d90(int64_t param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  int64_t **pplStackX_20;
  int64_t *plStack_58;
  uint64_t uStack_50;
  int64_t lStack_48;
  int64_t ***ppplStack_40;
  int64_t **pplStack_38;
  int64_t ***ppplStack_30;
  
  uStack_50 = 0xfffffffffffffffe;
  plStackX_10 = param_2;
  uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x168,8,3);
  plVar6 = (int64_t *)FUN_1802ac390(uVar5);
  plStack_58 = plVar6;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  FUN_1802ae9a0(plVar6,*(uint64_t *)(param_1 + 0x308));
  pplStackX_18 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_2;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_1802adab0(plVar6,&plStackX_8);
  lVar1 = param_3[1];
  plVar6[10] = *param_3;
  plVar6[0xb] = lVar1;
  lVar1 = param_3[3];
  plVar6[0xc] = param_3[2];
  plVar6[0xd] = lVar1;
  uVar2 = *(int32_t *)((int64_t)param_3 + 0x24);
  lVar1 = param_3[5];
  uVar3 = *(int32_t *)((int64_t)param_3 + 0x2c);
  *(int *)(plVar6 + 0xe) = (int)param_3[4];
  *(int32_t *)((int64_t)plVar6 + 0x74) = uVar2;
  *(int *)(plVar6 + 0xf) = (int)lVar1;
  *(int32_t *)((int64_t)plVar6 + 0x7c) = uVar3;
  uVar2 = *(int32_t *)((int64_t)param_3 + 0x34);
  lVar1 = param_3[7];
  uVar3 = *(int32_t *)((int64_t)param_3 + 0x3c);
  *(int *)(plVar6 + 0x10) = (int)param_3[6];
  *(int32_t *)((int64_t)plVar6 + 0x84) = uVar2;
  *(int *)(plVar6 + 0x11) = (int)lVar1;
  *(int32_t *)((int64_t)plVar6 + 0x8c) = uVar3;
  lVar1 = param_1 + 0xaa8;
  lStack_48 = lVar1;
  iVar4 = _Mtx_lock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  PhysicsSystem_TriggersProcessor(param_1 + 0xaf8,&plStack_58);
  if (*(int64_t *)(param_1 + 0xb50) != 0) {
    pplStackX_18 = (int64_t **)*param_2;
    if (pplStackX_18 != (int64_t **)0x0) {
      (*(code *)(*pplStackX_18)[5])();
    }
    pplStackX_20 = pplStackX_18;
    ppplStack_40 = &pplStackX_18;
    pplStackX_18 = (int64_t **)0x0;
    pplStack_38 = &plStackX_8;
    ppplStack_30 = &pplStackX_20;
    plStackX_8 = (int64_t *)0x0;
    (**(code **)(param_1 + 0xb58))(&pplStackX_20,param_3,param_1 + 0xb40);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (pplStackX_18 != (int64_t **)0x0) {
      (*(code *)(*pplStackX_18)[7])();
    }
  }
  iVar4 = _Mtx_unlock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  if (plStack_58 != (int64_t *)0x0) {
    (**(code **)(*plStack_58 + 0x38))();
  }
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return;
}






// 函数: void FUN_1802d2f50(int64_t param_1)
void FUN_1802d2f50(int64_t param_1)

{
  int64_t *plVar1;
  int iVar2;
  int64_t *plVar3;
  
  iVar2 = _Mtx_lock(param_1 + 0xaa8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  plVar1 = *(int64_t **)(param_1 + 0xb00);
  plVar3 = *(int64_t **)(param_1 + 0xaf8);
  if (plVar3 != plVar1) {
    do {
      if ((int64_t *)*plVar3 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar3 + 0x38))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    plVar3 = *(int64_t **)(param_1 + 0xaf8);
  }
  *(int64_t **)(param_1 + 0xb00) = plVar3;
  iVar2 = _Mtx_unlock(param_1 + 0xaa8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802d3000(int64_t param_1,int64_t *param_2)
void FUN_1802d3000(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  int32_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int64_t *plVar19;
  int64_t lVar20;
  int64_t lVar21;
  uint64_t *puVar22;
  uint64_t *puVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t *puVar26;
  uint64_t uVar27;
  uint uVar28;
  int64_t *plVar29;
  uint64_t uVar30;
  
  uVar30 = 0xfffffffffffffffe;
  iVar3 = *(int *)(param_1 + 0x5e8);
  uVar25 = 0;
  if (0 < iVar3) {
    do {
      plVar19 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x98,8,3);
      *plVar19 = 0;
      plVar19[1] = 0;
      plVar19[2] = 0;
      *(int32_t *)(plVar19 + 3) = 0x1b;
      *(int32_t *)(plVar19 + 10) = 0;
      plVar19[4] = 0;
      plVar19[5] = 0;
      plVar19[6] = 0;
      plVar19[7] = 0;
      plVar19[8] = 0;
      plVar19[9] = 0;
      plVar1 = plVar19 + 0xb;
      *plVar1 = 0;
      plVar19[0xc] = 0;
      plVar19[0xd] = 0;
      *(int32_t *)(plVar19 + 0xe) = 3;
      plVar2 = plVar19 + 0xf;
      *plVar2 = (int64_t)&system_state_ptr;
      plVar19[0x10] = 0;
      *(int32_t *)(plVar19 + 0x11) = 0;
      *plVar2 = (int64_t)&system_data_buffer_ptr;
      plVar19[0x12] = 0;
      plVar19[0x10] = 0;
      *(int32_t *)(plVar19 + 0x11) = 0;
      plVar19[1] = *plVar19;
      plVar19[0xc] = *plVar1;
      uVar24 = uVar25 >> 10;
      uVar27 = (uint64_t)((uint)uVar25 & 0x3ff);
      lVar21 = *(int64_t *)(*(int64_t *)(param_1 + 0x5f0 + uVar24 * 8) + uVar27 * 8);
      plVar29 = (int64_t *)(lVar21 + 0x58);
      if (plVar19 != plVar29) {
        lVar21 = *(int64_t *)(lVar21 + 0x60);
        lVar5 = *plVar29;
        uVar7 = (lVar21 - lVar5) / 0x70;
        if ((uint64_t)((plVar19[2] - *plVar19) / 0x70) < uVar7) {
          if (uVar7 == 0) {
            lVar20 = 0;
          }
          else {
            lVar20 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar7 * 0x70,(char)plVar19[3],0x4924924924924925,
                                   uVar24,uVar30,plVar1,plVar2);
          }
          func_0x0001802d9ba0(lVar5,lVar21,lVar20);
          if (*plVar19 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          *plVar19 = lVar20;
          lVar20 = uVar7 * 0x70 + lVar20;
          plVar19[1] = lVar20;
          plVar19[2] = lVar20;
        }
        else {
          uVar6 = (plVar19[1] - *plVar19) / 0x70;
          if (uVar6 < uVar7) {
            lVar20 = uVar6 * 0x70 + lVar5;
            func_0x0001802d9a10(lVar5,lVar20);
            lVar21 = func_0x0001802d9ba0(lVar20,lVar21,plVar19[1]);
            plVar19[1] = lVar21;
          }
          else {
            lVar21 = func_0x0001802d9a10(lVar5,lVar21);
            plVar19[1] = lVar21;
          }
        }
      }
      lVar21 = *(int64_t *)(*(int64_t *)(param_1 + 0x5f0 + uVar24 * 8) + uVar27 * 8);
      uVar8 = *(int32_t *)(lVar21 + 0x14);
      uVar9 = *(int32_t *)(lVar21 + 0x18);
      uVar10 = *(int32_t *)(lVar21 + 0x1c);
      uVar11 = *(int32_t *)(lVar21 + 0x20);
      uVar12 = *(int32_t *)(lVar21 + 0x24);
      uVar13 = *(int32_t *)(lVar21 + 0x28);
      uVar14 = *(int32_t *)(lVar21 + 0x2c);
      uVar15 = *(int32_t *)(lVar21 + 0x30);
      uVar16 = *(int32_t *)(lVar21 + 0x34);
      uVar17 = *(int32_t *)(lVar21 + 0x38);
      uVar18 = *(int32_t *)(lVar21 + 0x3c);
      uVar4 = *(int32_t *)(lVar21 + 0x40);
      *(int32_t *)(plVar19 + 4) = *(int32_t *)(lVar21 + 0x10);
      *(int32_t *)((int64_t)plVar19 + 0x24) = uVar8;
      *(int32_t *)(plVar19 + 5) = uVar9;
      *(int32_t *)((int64_t)plVar19 + 0x2c) = uVar10;
      *(int32_t *)(plVar19 + 6) = uVar11;
      *(int32_t *)((int64_t)plVar19 + 0x34) = uVar12;
      *(int32_t *)(plVar19 + 7) = uVar13;
      *(int32_t *)((int64_t)plVar19 + 0x3c) = uVar14;
      *(int32_t *)(plVar19 + 8) = uVar15;
      *(int32_t *)((int64_t)plVar19 + 0x44) = uVar16;
      *(int32_t *)(plVar19 + 9) = uVar17;
      *(int32_t *)((int64_t)plVar19 + 0x4c) = uVar18;
      *(int32_t *)(plVar19 + 10) = uVar4;
      lVar21 = *(int64_t *)
                (*(int64_t *)(*(int64_t *)(param_1 + 0x5f0 + uVar24 * 8) + uVar27 * 8) + 0x48);
      uVar28 = *(uint *)(lVar21 + 0x58);
      uVar24 = (uint64_t)uVar28;
      if (*(int64_t *)(lVar21 + 0x50) != 0) {
        CoreEngineDataBufferProcessor(plVar2,uVar24);
      }
      if (uVar28 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(plVar19[0x10],*(uint64_t *)(lVar21 + 0x50),uVar24);
      }
      *(int32_t *)(plVar19 + 0x11) = 0;
      if (plVar19[0x10] != 0) {
        *(int8_t *)(uVar24 + plVar19[0x10]) = 0;
      }
      *(int32_t *)((int64_t)plVar19 + 0x94) = *(int32_t *)(lVar21 + 100);
      puVar26 = (uint64_t *)param_2[1];
      if (puVar26 < (uint64_t *)param_2[2]) {
        param_2[1] = (int64_t)(puVar26 + 1);
        *puVar26 = plVar19;
      }
      else {
        puVar23 = (uint64_t *)*param_2;
        lVar21 = (int64_t)puVar26 - (int64_t)puVar23 >> 3;
        if (lVar21 == 0) {
          lVar21 = 1;
LAB_1802d3315:
          puVar22 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar21 * 8,(char)param_2[3]);
          puVar26 = (uint64_t *)param_2[1];
          puVar23 = (uint64_t *)*param_2;
        }
        else {
          lVar21 = lVar21 * 2;
          if (lVar21 != 0) goto LAB_1802d3315;
          puVar22 = (uint64_t *)0x0;
        }
        if (puVar23 != puVar26) {
                    // WARNING: Subroutine does not return
          memmove(puVar22,puVar23,(int64_t)puVar26 - (int64_t)puVar23);
        }
        *puVar22 = plVar19;
        if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *param_2 = (int64_t)puVar22;
        param_2[1] = (int64_t)(puVar22 + 1);
        param_2[2] = (int64_t)(puVar22 + lVar21);
      }
      uVar28 = (uint)uVar25 + 1;
      uVar25 = (uint64_t)uVar28;
    } while ((int)uVar28 < iVar3);
  }
  return;
}






// 函数: void FUN_1802d33c0(int64_t param_1)
void FUN_1802d33c0(int64_t param_1)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int iVar3;
  
  uVar2 = 0;
  plVar1 = *(int64_t **)(param_1 + 800);
  *(uint64_t *)(param_1 + 800) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0x338);
  *(uint64_t *)(param_1 + 0x338) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0x340);
  *(uint64_t *)(param_1 + 0x340) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int8_t *)(param_1 + 0xb38) = 0;
  while (iVar3 = (int)uVar2, (uint64_t)(int64_t)iVar3 < (uint64_t)*(uint *)(param_1 + 0x5e8)) {
    *(int32_t *)
     (*(int64_t *)
       (*(int64_t *)(param_1 + 0x5f0 + (uVar2 >> 10) * 8) +
       (uint64_t)(uint)(iVar3 + (int)(uVar2 >> 10) * -0x400) * 8) + 0xc) = 0xffffffff;
    uVar2 = (uint64_t)(iVar3 + 1);
  }
  plVar1 = *(int64_t **)(param_1 + 0x98);
  *(uint64_t *)(param_1 + 0x98) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0xa0);
  *(uint64_t *)(param_1 + 0xa0) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1802d34e0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int *piVar1;
  uint *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint uVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int32_t *puVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  int32_t *puVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint64_t *puVar14;
  uint uVar15;
  int32_t *puVar16;
  uint64_t uVar17;
  int iVar18;
  bool bVar19;
  uint64_t uVar20;
  
  uVar20 = 0xfffffffffffffffe;
  puVar2 = (uint *)(param_1 + 0x5e8);
  uVar5 = *puVar2;
  uVar15 = 0;
  if (0 < (int)uVar5) {
    do {
      lVar13 = *(int64_t *)
                (*(int64_t *)(param_1 + 0x5f0 + (uint64_t)(uVar15 >> 10) * 8) +
                (uint64_t)(uVar15 & 0x3ff) * 8);
      if ((*(int *)(lVar13 + 8) < 1) &&
         ((*(int64_t *)(lVar13 + 0x60) - *(int64_t *)(lVar13 + 0x58)) / 0x70 == 0)) {
        puVar3 = (uint64_t *)(param_1 + 0x830);
        puVar6 = *(uint64_t **)(param_1 + 0x840);
        puVar10 = puVar3;
        if (puVar6 != (uint64_t *)0x0) goto LAB_1802d35b5;
        goto LAB_1802d35de;
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar5);
  }
  uVar15 = *puVar2;
  uVar9 = (uint64_t)uVar15;
  if (*puVar2 < uVar5) {
    iVar18 = uVar5 - uVar15;
    if (iVar18 != 0) {
      LOCK();
      uVar5 = *puVar2;
      *puVar2 = *puVar2 + iVar18;
      UNLOCK();
      uVar15 = uVar5 >> 10;
      uVar9 = (uint64_t)uVar15;
      uVar17 = (uint64_t)uVar15;
      uVar12 = (uint64_t)(iVar18 + -1 + uVar5 >> 10);
      if (uVar17 <= uVar12) {
        puVar14 = (uint64_t *)(puVar2 + (uVar9 + 1) * 2);
        lVar13 = (uVar12 - uVar17) + 1;
        do {
          uVar9 = *puVar14;
          if (uVar9 == 0) {
            uVar12 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x2000,0x1b,param_4,uVar20);
            puVar4 = (uint64_t *)(param_1 + 0x5f0 + (int64_t)(int)uVar17 * 8);
            LOCK();
            uVar9 = *puVar4;
            bVar19 = uVar9 == 0;
            if (bVar19) {
              *puVar4 = uVar12;
              uVar9 = 0;
            }
            UNLOCK();
            if ((!bVar19) && (uVar12 != 0)) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(uVar12);
            }
          }
          uVar17 = (uint64_t)((int)uVar17 + 1);
          puVar14 = puVar14 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
    }
  }
  else if (uVar5 < uVar15) {
    uVar9 = (uint64_t)*puVar2;
    LOCK();
    *puVar2 = uVar5;
    UNLOCK();
  }
  return uVar9;
LAB_1802d35b5:
  do {
    if ((uint64_t)puVar6[4] < *(uint64_t *)(lVar13 + 0x48)) {
      puVar6 = (uint64_t *)*puVar6;
    }
    else {
      puVar10 = puVar6;
      puVar6 = (uint64_t *)puVar6[1];
    }
  } while (puVar6 != (uint64_t *)0x0);
  if ((puVar10 == puVar3) || (*(uint64_t *)(lVar13 + 0x48) < (uint64_t)puVar10[4])) {
LAB_1802d35de:
    puVar10 = puVar3;
  }
  piVar1 = (int *)((int64_t)puVar10 + 0x2c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    DataTransformer0();
    if (*(int64_t *)(lVar13 + 0x130) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (*(int64_t **)(lVar13 + 0x128) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar13 + 0x128) + 0x38))();
    }
    if (*(int64_t *)(lVar13 + 0xf8) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(lVar13 + 0x80) = &system_data_buffer_ptr;
    if (*(int64_t *)(lVar13 + 0x88) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(lVar13 + 0x88) = 0;
    *(int32_t *)(lVar13 + 0x98) = 0;
    *(uint64_t *)(lVar13 + 0x80) = &system_state_ptr;
    if (*(int64_t *)(lVar13 + 0x58) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (*(int64_t **)(lVar13 + 0x48) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar13 + 0x48) + 0x38))();
    }
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar13);
  }
  puVar16 = *(int32_t **)(param_1 + 0x350);
  if (puVar16 < *(int32_t **)(param_1 + 0x358)) {
    *(int32_t **)(param_1 + 0x350) = puVar16 + 1;
    *puVar16 = *(int32_t *)(puVar10 + 5);
    goto LAB_1802d36c1;
  }
  puVar11 = *(int32_t **)(param_1 + 0x348);
  lVar7 = (int64_t)puVar16 - (int64_t)puVar11 >> 2;
  if (lVar7 == 0) {
    lVar7 = 1;
LAB_1802d363a:
    puVar8 = (int32_t *)
             CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 4,*(int8_t *)(param_1 + 0x360),param_4,
                           0xfffffffffffffffe,lVar13);
    puVar16 = *(int32_t **)(param_1 + 0x350);
    puVar11 = *(int32_t **)(param_1 + 0x348);
  }
  else {
    lVar7 = lVar7 * 2;
    if (lVar7 != 0) goto LAB_1802d363a;
    puVar8 = (int32_t *)0x0;
  }
  if (puVar11 != puVar16) {
                    // WARNING: Subroutine does not return
    memmove(puVar8,puVar11,(int64_t)puVar16 - (int64_t)puVar11);
  }
  *puVar8 = *(int32_t *)(puVar10 + 5);
  if (*(int64_t *)(param_1 + 0x348) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(int32_t **)(param_1 + 0x348) = puVar8;
  *(int32_t **)(param_1 + 0x350) = puVar8 + 1;
  *(int32_t **)(param_1 + 0x358) = puVar8 + lVar7;
LAB_1802d36c1:
  *(int64_t *)(param_1 + 0x850) = *(int64_t *)(param_1 + 0x850) + -1;
  func_0x00018066bd70(puVar10);
  RenderingSystem_BufferHandler(puVar10,puVar3);
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar10);
}






// 函数: void FUN_1802d38a0(float *param_1,float *param_2,int64_t param_3)
void FUN_1802d38a0(float *param_1,float *param_2,int64_t param_3)

{
  float *pfVar1;
  byte bVar2;
  float fVar3;
  int64_t lVar4;
  bool bVar5;
  byte *pbVar6;
  uint64_t *puVar7;
  float *pfVar8;
  int64_t lVar9;
  uint uVar10;
  uint64_t uVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  int64_t lVar15;
  int8_t auStackX_8 [8];
  
  if (1.0 < *param_1) {
    pfVar1 = param_1 + 8;
    *param_1 = *param_1 - 1.0;
    RenderingSystem_CameraSystem(pfVar1,*(uint64_t *)(param_1 + 0xc));
    uVar11 = 0;
    *(float **)pfVar1 = pfVar1;
    *(float **)(param_1 + 10) = pfVar1;
    pfVar8 = param_1 + 1;
    param_1[0xc] = 0.0;
    param_1[0xd] = 0.0;
    *(int8_t *)(param_1 + 0xe) = 0;
    param_1[0x10] = 0.0;
    param_1[0x11] = 0.0;
    lVar9 = 6;
    param_1[0x14] = 0.0;
    param_1[0x15] = 0.0;
    do {
      *pfVar8 = *(float *)((param_3 - (int64_t)param_1) + 0x1cc + (int64_t)pfVar8);
      pfVar8 = pfVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    fVar3 = *param_2;
    param_1[0x14] = fVar3;
    if (0 < (int)fVar3) {
      do {
        lVar9 = *(int64_t *)
                 (*(int64_t *)(param_2 + (uVar11 >> 10) * 2 + 2) +
                 (uint64_t)(uint)((int)uVar11 + (int)(uVar11 >> 10) * -0x400) * 8);
        pfVar8 = pfVar1;
        if (*(float **)(param_1 + 0xc) != (float *)0x0) {
          pfVar13 = *(float **)(param_1 + 0xc);
          do {
            if (*(int *)(lVar9 + 0x90) == 0) {
              pfVar14 = *(float **)(pfVar13 + 2);
              bVar5 = false;
            }
            else {
              if (pfVar13[0xc] == 0.0) {
                bVar5 = true;
              }
              else {
                pbVar6 = *(byte **)(lVar9 + 0x88);
                lVar15 = *(int64_t *)(pfVar13 + 10) - (int64_t)pbVar6;
                do {
                  uVar10 = (uint)pbVar6[lVar15];
                  iVar12 = *pbVar6 - uVar10;
                  if (*pbVar6 != uVar10) break;
                  pbVar6 = pbVar6 + 1;
                } while (uVar10 != 0);
                bVar5 = 0 < iVar12;
                if (iVar12 < 1) {
                  pfVar14 = *(float **)(pfVar13 + 2);
                  goto LAB_1802d39cc;
                }
              }
              pfVar14 = *(float **)pfVar13;
            }
LAB_1802d39cc:
            if (bVar5) {
              pfVar13 = pfVar8;
            }
            pfVar8 = pfVar13;
            pfVar13 = pfVar14;
          } while (pfVar14 != (float *)0x0);
        }
        if (pfVar8 == pfVar1) {
LAB_1802d3a1a:
          puVar7 = (uint64_t *)FUN_1802d8990(pfVar1,auStackX_8);
          pfVar8 = (float *)*puVar7;
        }
        else if (pfVar8[0xc] != 0.0) {
          if (*(int *)(lVar9 + 0x90) != 0) {
            pbVar6 = *(byte **)(pfVar8 + 10);
            lVar15 = *(int64_t *)(lVar9 + 0x88) - (int64_t)pbVar6;
            do {
              bVar2 = *pbVar6;
              uVar10 = (uint)pbVar6[lVar15];
              if (bVar2 != uVar10) break;
              pbVar6 = pbVar6 + 1;
            } while (uVar10 != 0);
            if ((int)(bVar2 - uVar10) < 1) goto LAB_1802d3a32;
          }
          goto LAB_1802d3a1a;
        }
LAB_1802d3a32:
        lVar15 = *(int64_t *)(lVar9 + 0x60);
        lVar4 = *(int64_t *)(lVar9 + 0x58);
        pfVar8[0x10] = (float)((int)pfVar8[0x10] + 1);
        pfVar8[0x12] = (float)((int)pfVar8[0x12] + (int)((lVar15 - lVar4) / 0x70));
        *(byte *)(pfVar8 + 0x14) = *(byte *)(*(int64_t *)(lVar9 + 0x48) + 0x21) & 1;
        if (*(int64_t *)(lVar9 + 0x120) != 0) {
          pfVar8[0x15] = *(float *)(*(int64_t *)(lVar9 + 0x120) + 0x140);
        }
        if (*(char *)(lVar9 + 0x78) != '\0') {
          lVar15 = *(int64_t *)(lVar9 + 0x60);
          lVar9 = *(int64_t *)(lVar9 + 0x58);
          pfVar8[0x11] = (float)((int)pfVar8[0x11] + 1);
          pfVar8[0x13] = (float)((int)pfVar8[0x13] + (int)((lVar15 - lVar9) / 0x70));
          param_1[0x15] = (float)((int)param_1[0x15] + 1);
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (uint64_t)uVar10;
      } while ((int)uVar10 < (int)param_1[0x14]);
    }
  }
  return;
}






