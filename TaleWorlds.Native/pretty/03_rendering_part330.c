#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part330.c - 21 个函数

// 函数: void FUN_18043f240(int64_t param_1)
void FUN_18043f240(int64_t param_1)

{
  int64_t alStack_18 [3];
  
  if (*(int *)(param_1 + 0x250) == 0) {
    FUN_18020c010(param_1,alStack_18,param_1);
                    // WARNING: Could not recover jumptable at 0x00018043f277. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,alStack_18[0] + 0x288);
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00018043f290. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,param_1 + 0x240);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_18043f300(int32_t *param_1,uint64_t param_2)

{
  uint uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x2f0,0x10,3);
  plVar4 = (int64_t *)FUN_1802e6b00(uVar3,4);
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  uVar1 = *(uint *)((int64_t)plVar4 + 0x2ac);
  *(uint *)((int64_t)plVar4 + 0x2ac) = uVar1 | 0x8000;
  FUN_1802ee810(plVar4,uVar1);
  FUN_1802ee990(plVar4,uVar1);
  FUN_1802ec6e0(plVar4,param_2,1,1,0);
  uVar2 = (**(code **)(*plVar4 + 8))(plVar4);
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uStack_20 = SUB84(plVar4,0);
  uStack_1c = (int32_t)((uint64_t)plVar4 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar2;
  param_1[3] = uStack_14;
  (**(code **)(*plVar4 + 0x38))(plVar4);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18043f3f0(uint64_t *param_1,int64_t param_2,uint64_t param_3,int8_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  void *puVar5;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t *plStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  uint64_t uStack_50;
  void *puStack_48;
  int64_t lStack_40;
  
  uStack_50 = 0xfffffffffffffffe;
  CoreMemoryPoolValidator(&puStack_48,param_3);
  lVar1 = FUN_18020bef0(render_system_data_config,&puStack_48);
  plStackX_10 = (int64_t *)0x0;
  if (lVar1 != 0) {
    if (param_2 == 0) {
      uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x2f0,0x10,0xd);
      plVar4 = (int64_t *)FUN_1802e6b00(uVar3,*(int8_t *)(lVar1 + 0x2e5));
      if (plVar4 != (int64_t *)0x0) {
        plStackX_8 = plVar4;
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      plStackX_8 = (int64_t *)0x0;
      puVar5 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x290) != (void *)0x0) {
        puVar5 = *(void **)(lVar1 + 0x290);
      }
      plStackX_10 = plVar4;
      (**(code **)(plVar4[0x51] + 0x10))(plVar4 + 0x51,puVar5);
      FUN_1802ec6e0(plVar4,lVar1,1,param_4,0);
      NetworkProtocol_Transmitter(plVar4,lVar1 + 0x30);
    }
    else {
      plStackX_8 = (int64_t *)CONCAT71(plStackX_8._1_7_,*(int8_t *)(lVar1 + 0x2e5));
      plVar2 = (int64_t *)FUN_1801af320(param_2,&plStack_60,&plStackX_8,lVar1,lVar1 + 0x30,param_4)
      ;
      plVar4 = (int64_t *)*plVar2;
      *plVar2 = 0;
      plStackX_10 = plVar4;
      if (plStack_60 != (int64_t *)0x0) {
        (**(code **)(*plStack_60 + 0x38))();
      }
      if (plVar4 == (int64_t *)0x0) goto LAB_18043f597;
      (**(code **)(*plVar4 + 0x28))(plVar4);
      (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    if (plVar4 != (int64_t *)0x0) {
      uStack_58 = (**(code **)(*plVar4 + 8))(plVar4);
      plStack_60 = plVar4;
      (**(code **)(*plVar4 + 0x28))(plVar4);
      (**(code **)(*plVar4 + 0x38))(plVar4);
      puStack_48 = &system_data_buffer_ptr;
      if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      goto LAB_18043f5c3;
    }
  }
LAB_18043f597:
  plStack_60 = (int64_t *)0x0;
  uStack_58 = 0xffffffff;
  puStack_48 = &system_data_buffer_ptr;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
LAB_18043f5c3:
  *param_1 = plStack_60;
  param_1[1] = CONCAT44(uStack_54,uStack_58);
  return param_1;
}





// 函数: void FUN_18043f5f0(int64_t param_1)
void FUN_18043f5f0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  
  FUN_1802f0f10();
  iVar3 = 0;
  lVar2 = *(int64_t *)(param_1 + 0x200);
  if (*(int64_t *)(param_1 + 0x208) - lVar2 >> 3 != 0) {
    lVar4 = 0;
    do {
      plVar1 = *(int64_t **)(lVar4 + lVar2);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      FUN_180354170(plVar1);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
      lVar2 = *(int64_t *)(param_1 + 0x200);
    } while ((uint64_t)(int64_t)iVar3 < (uint64_t)(*(int64_t *)(param_1 + 0x208) - lVar2 >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_18043f610(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int8_t auStackX_8 [8];
  uint64_t uStackX_10;
  int64_t *plStack_50;
  int32_t uStack_48;
  int32_t uStack_44;
  uint64_t uStack_40;
  void *puStack_38;
  int64_t lStack_30;
  
  uStack_40 = 0xfffffffffffffffe;
  CoreMemoryPoolValidator(&puStack_38,param_3);
  lVar2 = FUN_18020bef0(render_system_data_config,&puStack_38);
  if (lVar2 != 0) {
    auStackX_8[0] = *(int8_t *)(lVar2 + 0x2e5);
    plVar3 = (int64_t *)FUN_1801af320(param_2,&plStack_50,auStackX_8,lVar2,param_4,1,0);
    plVar1 = (int64_t *)*plVar3;
    *plVar3 = 0;
    uStackX_10 = 0;
    if (plStack_50 != (int64_t *)0x0) {
      (**(code **)(*plStack_50 + 0x38))();
    }
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x38))(plVar1);
      uStack_48 = (**(code **)(*plVar1 + 8))(plVar1);
      plStack_50 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x38))(plVar1);
      puStack_38 = &system_data_buffer_ptr;
      if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      goto LAB_18043f737;
    }
  }
  plStack_50 = (int64_t *)0x0;
  uStack_48 = 0xffffffff;
  puStack_38 = &system_data_buffer_ptr;
  if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
LAB_18043f737:
  *param_1 = (int64_t)plStack_50;
  param_1[1] = CONCAT44(uStack_44,uStack_48);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18043f770(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  void *puStack_30;
  int64_t lStack_28;
  int32_t uStack_20;
  uint64_t uStack_18;
  
  puStack_30 = &system_data_buffer_ptr;
  uStack_18 = 0;
  lStack_28 = 0;
  uStack_20 = 0;
  if (param_1 == 0) {
    CoreSystem_ConfigValidator0(&puStack_30,&system_buffer_ptr,param_3,param_4,0xfffffffffffffffe);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x298);
    uVar3 = (uint64_t)uVar1;
    if (*(int64_t *)(param_1 + 0x290) != 0) {
      CoreEngineDataBufferProcessor(&puStack_30,uVar3);
    }
    if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(lStack_28,*(uint64_t *)(param_1 + 0x290),uVar3);
    }
    if (lStack_28 != 0) {
      *(int8_t *)(uVar3 + lStack_28) = 0;
    }
    uStack_18 = CONCAT44(*(int32_t *)(param_1 + 0x2a4),(int32_t)uStack_18);
    uStack_20 = 0;
  }
  uVar2 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&puStack_30);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar2;
}





// 函数: void FUN_18043f880(int64_t *param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18043f880(int64_t *param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  
  if ((param_1 != (int64_t *)0x0) && (lVar1 = param_1[4], lVar1 != 0)) {
    (**(code **)(*param_1 + 0x28))();
    FUN_180198980(lVar1,param_1,param_3,param_4,param_2);
    if (param_1 != (int64_t *)0x0) {
      (**(code **)(*param_1 + 0x38))();
    }
  }
  return;
}





// 函数: void FUN_18043f8f0(int64_t param_1,uint64_t *param_2)
void FUN_18043f8f0(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x38);
    *param_2 = *(uint64_t *)(param_1 + 0x30);
    param_2[1] = uVar1;
    uVar1 = *(uint64_t *)(param_1 + 0x48);
    param_2[2] = *(uint64_t *)(param_1 + 0x40);
    param_2[3] = uVar1;
    uVar1 = *(uint64_t *)(param_1 + 0x58);
    param_2[4] = *(uint64_t *)(param_1 + 0x50);
    param_2[5] = uVar1;
    uVar1 = *(uint64_t *)(param_1 + 0x68);
    param_2[6] = *(uint64_t *)(param_1 + 0x60);
    param_2[7] = uVar1;
    return;
  }
  SystemDataInitializer(&processed_var_9576_ptr);
  *param_2 = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0x3f80000000000000;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f800000;
  param_2[6] = 0;
  param_2[7] = 0x3f80000000000000;
  return;
}





// 函数: void FUN_18043f960(int64_t param_1,uint64_t *param_2)
void FUN_18043f960(int64_t param_1,uint64_t *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int64_t lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int32_t uVar30;
  int32_t uVar31;
  int32_t uVar32;
  uint64_t uVar33;
  bool bVar34;
  char cVar35;
  int iVar36;
  uint64_t *puVar37;
  int64_t lVar38;
  
  if (param_1 != 0) {
    puVar37 = (uint64_t *)(param_1 + 0x30);
    cVar35 = func_0x000180285980();
    if (cVar35 != '\0') {
      uVar33 = param_2[1];
      *puVar37 = *param_2;
      puVar37[1] = uVar33;
      uVar33 = param_2[3];
      puVar37[2] = param_2[2];
      puVar37[3] = uVar33;
      uVar30 = *(int32_t *)((int64_t)param_2 + 0x24);
      uVar31 = *(int32_t *)(param_2 + 5);
      uVar32 = *(int32_t *)((int64_t)param_2 + 0x2c);
      *(int32_t *)(puVar37 + 4) = *(int32_t *)(param_2 + 4);
      *(int32_t *)((int64_t)puVar37 + 0x24) = uVar30;
      *(int32_t *)(puVar37 + 5) = uVar31;
      *(int32_t *)((int64_t)puVar37 + 0x2c) = uVar32;
      uVar30 = *(int32_t *)((int64_t)param_2 + 0x34);
      uVar31 = *(int32_t *)(param_2 + 7);
      uVar32 = *(int32_t *)((int64_t)param_2 + 0x3c);
      *(int32_t *)(puVar37 + 6) = *(int32_t *)(param_2 + 6);
      *(int32_t *)((int64_t)puVar37 + 0x34) = uVar30;
      *(int32_t *)(puVar37 + 7) = uVar31;
      *(int32_t *)((int64_t)puVar37 + 0x3c) = uVar32;
      RenderingSystem_CameraController();
      *(byte *)(param_1 + 0x2e8) = *(byte *)(param_1 + 0x2e8) | 0x10;
      if (((*(uint *)(param_1 + 0x2ac) & 0x10000000) == 0) && (*(int64_t *)(param_1 + 0x20) != 0))
      {
        FUN_1801b01f0(*(int64_t *)(param_1 + 0x20),param_1);
      }
      iVar36 = (int)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3);
      if (0 < iVar36) {
        lVar38 = 0;
        do {
          lVar13 = *(int64_t *)(*(int64_t *)(param_1 + 0x1c0) + lVar38 * 8);
          if ((((*(int64_t *)(param_1 + 0x20) == 0) ||
               (*(char *)(*(int64_t *)(param_1 + 0x20) + 0x2a62) == '\0')) ||
              (*(int64_t **)(lVar13 + 0x270) == (int64_t *)0x0)) ||
             ((cVar35 = (**(code **)(**(int64_t **)(lVar13 + 0x270) + 0x70))(), cVar35 == '\0' ||
              (cVar35 = (**(code **)(**(int64_t **)(lVar13 + 0x270) + 0x78))(), cVar35 == '\0'))))
          {
            bVar34 = false;
          }
          else {
            bVar34 = true;
          }
          if (!bVar34) {
            fVar14 = *(float *)(param_1 + 0x70);
            fVar15 = *(float *)(param_1 + 0x74);
            fVar16 = *(float *)(param_1 + 0x78);
            fVar17 = *(float *)(param_1 + 0x7c);
            fVar18 = *(float *)(param_1 + 0x80);
            fVar19 = *(float *)(param_1 + 0x84);
            fVar20 = *(float *)(param_1 + 0x88);
            fVar21 = *(float *)(param_1 + 0x8c);
            fVar22 = *(float *)(param_1 + 0x90);
            fVar23 = *(float *)(param_1 + 0x94);
            fVar24 = *(float *)(param_1 + 0x98);
            fVar25 = *(float *)(param_1 + 0x9c);
            fVar1 = *(float *)(lVar13 + 0x34);
            fVar2 = *(float *)(lVar13 + 0x30);
            fVar3 = *(float *)(lVar13 + 0x38);
            fVar4 = *(float *)(lVar13 + 0x44);
            fVar5 = *(float *)(lVar13 + 0x54);
            fVar6 = *(float *)(lVar13 + 100);
            fVar7 = *(float *)(lVar13 + 0x40);
            fVar8 = *(float *)(lVar13 + 0x48);
            fVar9 = *(float *)(lVar13 + 0x50);
            fVar10 = *(float *)(lVar13 + 0x58);
            fVar11 = *(float *)(lVar13 + 0x60);
            fVar12 = *(float *)(lVar13 + 0x68);
            fVar26 = *(float *)(param_1 + 0xa0);
            fVar27 = *(float *)(param_1 + 0xa4);
            fVar28 = *(float *)(param_1 + 0xa8);
            fVar29 = *(float *)(param_1 + 0xac);
            *(float *)(lVar13 + 0x70) = fVar1 * fVar18 + fVar2 * fVar14 + fVar3 * fVar22;
            *(float *)(lVar13 + 0x74) = fVar1 * fVar19 + fVar2 * fVar15 + fVar3 * fVar23;
            *(float *)(lVar13 + 0x78) = fVar1 * fVar20 + fVar2 * fVar16 + fVar3 * fVar24;
            *(float *)(lVar13 + 0x7c) = fVar1 * fVar21 + fVar2 * fVar17 + fVar3 * fVar25;
            *(float *)(lVar13 + 0x80) = fVar4 * fVar18 + fVar7 * fVar14 + fVar8 * fVar22;
            *(float *)(lVar13 + 0x84) = fVar4 * fVar19 + fVar7 * fVar15 + fVar8 * fVar23;
            *(float *)(lVar13 + 0x88) = fVar4 * fVar20 + fVar7 * fVar16 + fVar8 * fVar24;
            *(float *)(lVar13 + 0x8c) = fVar4 * fVar21 + fVar7 * fVar17 + fVar8 * fVar25;
            *(float *)(lVar13 + 0x90) = fVar5 * fVar18 + fVar9 * fVar14 + fVar10 * fVar22;
            *(float *)(lVar13 + 0x94) = fVar5 * fVar19 + fVar9 * fVar15 + fVar10 * fVar23;
            *(float *)(lVar13 + 0x98) = fVar5 * fVar20 + fVar9 * fVar16 + fVar10 * fVar24;
            *(float *)(lVar13 + 0x9c) = fVar5 * fVar21 + fVar9 * fVar17 + fVar10 * fVar25;
            *(float *)(lVar13 + 0xa0) = fVar6 * fVar18 + fVar11 * fVar14 + fVar12 * fVar22 + fVar26;
            *(float *)(lVar13 + 0xa4) = fVar6 * fVar19 + fVar11 * fVar15 + fVar12 * fVar23 + fVar27;
            *(float *)(lVar13 + 0xa8) = fVar6 * fVar20 + fVar11 * fVar16 + fVar12 * fVar24 + fVar28;
            *(float *)(lVar13 + 0xac) = fVar6 * fVar21 + fVar11 * fVar17 + fVar12 * fVar25 + fVar29;
            UtilitiesSystem_StringProcessor(lVar13);
          }
          lVar38 = lVar38 + 1;
        } while (lVar38 < iVar36);
      }
      return;
    }
  }
  return;
}





// 函数: void FUN_18043f9b0(int64_t param_1,uint64_t *param_2)
void FUN_18043f9b0(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(uint64_t *)(param_1 + 0x78);
    *param_2 = *(uint64_t *)(param_1 + 0x70);
    param_2[1] = uVar1;
    uVar1 = *(uint64_t *)(param_1 + 0x88);
    param_2[2] = *(uint64_t *)(param_1 + 0x80);
    param_2[3] = uVar1;
    uVar1 = *(uint64_t *)(param_1 + 0x98);
    param_2[4] = *(uint64_t *)(param_1 + 0x90);
    param_2[5] = uVar1;
    uVar1 = *(uint64_t *)(param_1 + 0xa8);
    param_2[6] = *(uint64_t *)(param_1 + 0xa0);
    param_2[7] = uVar1;
    return;
  }
  SystemDataInitializer(&processed_var_9344_ptr);
  *param_2 = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0x3f80000000000000;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f800000;
  param_2[6] = 0;
  param_2[7] = 0x3f80000000000000;
  return;
}





// 函数: void FUN_18043fa30(int64_t param_1,uint64_t *param_2)
void FUN_18043fa30(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  if (param_1 != 0) {
    lVar1 = *(int64_t *)(param_1 + 0x28);
    uVar2 = *(uint64_t *)(lVar1 + 0xc0);
    *param_2 = *(uint64_t *)(lVar1 + 0xb8);
    param_2[1] = uVar2;
    uVar2 = *(uint64_t *)(lVar1 + 0xd0);
    param_2[2] = *(uint64_t *)(lVar1 + 200);
    param_2[3] = uVar2;
    uVar2 = *(uint64_t *)(lVar1 + 0xe0);
    param_2[4] = *(uint64_t *)(lVar1 + 0xd8);
    param_2[5] = uVar2;
    uVar2 = *(uint64_t *)(lVar1 + 0xf0);
    param_2[6] = *(uint64_t *)(lVar1 + 0xe8);
    param_2[7] = uVar2;
    return;
  }
  SystemDataInitializer(&processed_var_9400_ptr);
  *param_2 = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0x3f80000000000000;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f800000;
  param_2[6] = 0;
  param_2[7] = 0x3f80000000000000;
  return;
}





// 函数: void FUN_18043fae0(int64_t param_1,int32_t *param_2)
void FUN_18043fae0(int64_t param_1,int32_t *param_2)

{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if (param_1 != 0) {
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    FUN_1802ea6d0(uStack_18,&uStack_18);
  }
  return;
}





// 函数: void FUN_18043fb10(int64_t param_1,int32_t param_2)
void FUN_18043fb10(int64_t param_1,int32_t param_2)

{
  int32_t uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(int32_t *)(param_1 + 0x2ac);
    *(int32_t *)(param_1 + 0x2ac) = param_2;
    FUN_1802ee810(param_1,uVar1);
    FUN_1802ee990(param_1,uVar1);
  }
  return;
}





// 函数: void FUN_18043fb1a(int64_t param_1,int32_t param_2)
void FUN_18043fb1a(int64_t param_1,int32_t param_2)

{
  int32_t uVar1;
  
  uVar1 = *(int32_t *)(param_1 + 0x2ac);
  *(int32_t *)(param_1 + 0x2ac) = param_2;
  FUN_1802ee810(param_1,uVar1);
  FUN_1802ee990(param_1,uVar1);
  return;
}





// 函数: void FUN_18043fb49(void)
void FUN_18043fb49(void)

{
  return;
}





// 函数: void FUN_18043fc20(int64_t param_1,int32_t *param_2)
void FUN_18043fc20(int64_t param_1,int32_t *param_2)

{
  int64_t *plVar1;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if (param_1 != 0) {
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    plVar1 = *(int64_t **)(param_1 + 0x270);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x120))(plVar1,&uStack_18);
    }
  }
  return;
}



uint64_t * FUN_18043fce0(uint64_t *param_1,int64_t param_2)

{
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  RenderingSystem_LightSystem(param_2 + 0x70,&uStack_18);
  *param_1 = uStack_18;
  param_1[1] = uStack_10;
  return param_1;
}



int64_t * FUN_18043fd10(int64_t *param_1,int64_t param_2)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uStack_c;
  
  plVar1 = *(int64_t **)(param_2 + 0x110);
  if (plVar1 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *param_1 = (int64_t)plVar1;
  param_1[1] = CONCAT44(uStack_c,uVar2);
  return param_1;
}





// 函数: void FUN_18043fd70(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18043fd70(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  plStackX_8 = param_2;
  plStackX_10 = param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  pplStackX_18 = &plStackX_8;
  if (plStackX_8 != *(int64_t **)(param_1 + 0x110)) {
    FUN_1802ecfb0(param_1,plStackX_8,*(int32_t *)(param_1 + 0x148),param_4,uVar1);
  }
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  return;
}





// 函数: void FUN_18043fe10(int64_t param_1)
void FUN_18043fe10(int64_t param_1)

{
  if ((*(int64_t *)(param_1 + 0x20) != 0) && (*(int64_t *)(param_1 + 0x270) != 0)) {
    FUN_1802e8910();
    *(int8_t *)(param_1 + 0x278) = 0;
  }
  return;
}





// 函数: void FUN_18043fe70(int64_t param_1,int64_t param_2)
void FUN_18043fe70(int64_t param_1,int64_t param_2)

{
  if ((*(int64_t *)(param_1 + 0x270) != 0) && (*(int64_t *)(param_2 + 0x270) != 0)) {
    (**(code **)(**(int64_t **)(*(int64_t *)(param_1 + 0x20) + 0x318) + 0x80))();
  }
  return;
}



uint64_t FUN_18043fef0(int64_t param_1)

{
  char cVar1;
  
  if (*(int64_t **)(param_1 + 0x270) != (int64_t *)0x0) {
    cVar1 = (**(code **)(**(int64_t **)(param_1 + 0x270) + 0x68))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043ff20(int64_t param_1,int64_t *param_2,int32_t param_3,int32_t *param_4,
void FUN_18043ff20(int64_t param_1,int64_t *param_2,int32_t param_3,int32_t *param_4,
                  int32_t *param_5,int32_t *param_6,int param_7,byte param_8,
                  int32_t param_9)

{
  uint uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t in_R8;
  uint64_t uVar5;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int32_t uStack_94;
  int64_t *plStack_88;
  void *puStack_80;
  int64_t lStack_78;
  int32_t uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  
  if (param_2 == (int64_t *)0x0) {
    param_2 = *(int64_t **)(param_1 + 0x110);
    if (param_2 != (int64_t *)0x0) {
      (**(code **)(*param_2 + 0x28))(param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x28))(param_2,param_2,in_R8,param_4,0xfffffffffffffffe);
  }
  lVar4 = 0;
  if (-1 < param_7) {
    lVar4 = (int64_t)param_7 * 0x68 + *(int64_t *)(render_system_data_config + 0x38);
  }
  if ((*(int64_t *)(param_1 + 0x20) != 0) && (*(int64_t *)(param_1 + 0x270) != 0)) {
    FUN_1802e8910(param_1);
    *(int8_t *)(param_1 + 0x278) = 0;
  }
  plStack_88 = *(int64_t **)(param_1 + 0x110);
  if (plStack_88 != (int64_t *)0x0) {
    (**(code **)(*plStack_88 + 0x28))();
  }
  CoreEngineDataTransformer(&puStack_80,param_1 + 0x118);
  uStack_60 = *(uint64_t *)(param_1 + 0x138);
  uStack_58 = *(uint64_t *)(param_1 + 0x140);
  uStack_50 = *(uint *)(param_1 + 0x148);
  uStack_4c = *(int32_t *)(param_1 + 0x14c);
  uStack_48 = *(int32_t *)(param_1 + 0x150);
  uStack_44 = *(int32_t *)(param_1 + 0x154);
  uStack_40 = *(int32_t *)(param_1 + 0x158);
  uStack_3c = *(int32_t *)(param_1 + 0x15c);
  uStack_38 = *(int32_t *)(param_1 + 0x160);
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar3 = param_2;
  if (plStack_88 != (int64_t *)0x0) {
    lVar2 = *plStack_88;
    plStack_88 = param_2;
    (**(code **)(lVar2 + 0x38))();
    plVar3 = plStack_88;
  }
  plStack_88 = plVar3;
  uStack_50 = uStack_50 | (param_8 ^ 1) << 3;
  uStack_48 = *param_4;
  uStack_44 = param_4[1];
  uStack_40 = param_4[2];
  uStack_3c = param_4[3];
  uStack_4c = param_3;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    uVar5 = (uint64_t)uVar1;
    if (*(int64_t *)(lVar4 + 0x10) != 0) {
      CoreEngineDataBufferProcessor(&puStack_80,uVar5);
    }
    if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(lStack_78,*(uint64_t *)(lVar4 + 0x10),uVar5);
    }
    if (lStack_78 != 0) {
      *(int8_t *)(uVar5 + lStack_78) = 0;
    }
    uStack_64 = *(int32_t *)(lVar4 + 0x24);
    uStack_70 = 0;
  }
  uStack_38 = param_9;
  FUN_1802eced0(param_1,&plStack_88);
  if ((param_8 == 0) && (plVar3 = *(int64_t **)(param_1 + 0x270), plVar3 != (int64_t *)0x0)) {
    (**(code **)(*plVar3 + 0x128))(plVar3,0x3f000000,0x3ecccccd);
    uStack_a0 = *param_5;
    uStack_9c = param_5[1];
    uStack_98 = param_5[2];
    uStack_94 = param_5[3];
    (**(code **)(*plVar3 + 0xa8))(plVar3,&uStack_a0);
    uStack_a0 = *param_6;
    uStack_9c = param_6[1];
    uStack_98 = param_6[2];
    uStack_94 = param_6[3];
    (**(code **)(*plVar3 + 0xb8))(plVar3,&uStack_a0);
  }
  puStack_80 = &system_data_buffer_ptr;
  if (lStack_78 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_78 = 0;
  uStack_68 = 0;
  puStack_80 = &system_state_ptr;
  if (plStack_88 != (int64_t *)0x0) {
    (**(code **)(*plStack_88 + 0x38))();
  }
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  return;
}





// 函数: void FUN_1804401b0(int64_t param_1,int32_t *param_2,int32_t *param_3)
void FUN_1804401b0(int64_t param_1,int32_t *param_2,int32_t *param_3)

{
  char cVar1;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  cVar1 = (**(code **)(**(int64_t **)(param_1 + 0x270) + 0x70))();
  if (cVar1 != '\0') {
    RenderingSystem_CameraController(param_1);
    uStack_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    (**(code **)(**(int64_t **)(param_1 + 0x270) + 0xf8))
              (*(int64_t **)(param_1 + 0x270),&uStack_18,&uStack_28);
  }
  return;
}





// 函数: void FUN_180440220(int64_t param_1,int32_t *param_2)
void FUN_180440220(int64_t param_1,int32_t *param_2)

{
  char cVar1;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  cVar1 = (**(code **)(**(int64_t **)(param_1 + 0x270) + 0x70))();
  if (cVar1 != '\0') {
    RenderingSystem_CameraController(param_1);
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    (**(code **)(**(int64_t **)(param_1 + 0x270) + 0x108))
              (*(int64_t **)(param_1 + 0x270),&uStack_18);
  }
  return;
}





// 函数: void FUN_180440280(int64_t param_1,int32_t *param_2)
void FUN_180440280(int64_t param_1,int32_t *param_2)

{
  char cVar1;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  cVar1 = (**(code **)(**(int64_t **)(param_1 + 0x270) + 0x70))();
  if (cVar1 != '\0') {
    RenderingSystem_CameraController(param_1);
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    (**(code **)(**(int64_t **)(param_1 + 0x270) + 0x100))
              (*(int64_t **)(param_1 + 0x270),&uStack_18);
  }
  return;
}





// 函数: void FUN_1804402e0(int64_t param_1,int32_t *param_2,int32_t *param_3)
void FUN_1804402e0(int64_t param_1,int32_t *param_2,int32_t *param_3)

{
  char cVar1;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  cVar1 = (**(code **)(**(int64_t **)(param_1 + 0x270) + 0x70))();
  if (cVar1 != '\0') {
    RenderingSystem_CameraController(param_1);
    uStack_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    (**(code **)(**(int64_t **)(param_1 + 0x270) + 0xe8))
              (*(int64_t **)(param_1 + 0x270),&uStack_18,&uStack_28);
  }
  return;
}





// 函数: void FUN_180440350(int64_t param_1)
void FUN_180440350(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  
  (**(code **)(**(int64_t **)(param_1 + 0x270) + 0x90))();
  lVar2 = *(int64_t *)(param_1 + 0x20);
  iVar3 = _Mtx_lock();
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z();
  }
  iVar3 = 0;
  plVar1 = *(int64_t **)(lVar2 + 0x8118);
  uVar5 = *(int64_t *)(lVar2 + 0x8120) - (int64_t)plVar1 >> 3;
  plVar4 = plVar1;
  if (uVar5 != 0) {
    do {
      if (*plVar4 == param_1) goto LAB_1801b0618;
      iVar3 = iVar3 + 1;
      plVar4 = plVar4 + 1;
    } while ((uint64_t)(int64_t)iVar3 < uVar5);
  }
  iVar3 = -1;
LAB_1801b0618:
  if (iVar3 != -1) {
    plVar1[iVar3] = plVar1[(int64_t)(int)uVar5 + -1];
    FUN_180057340(lVar2 + 0x8118);
  }
  iVar3 = _Mtx_unlock(lVar2 + 0x80c8);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}





