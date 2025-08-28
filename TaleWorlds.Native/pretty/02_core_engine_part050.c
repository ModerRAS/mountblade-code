#include "SystemDataAdvancedValidator_definition.h"

// $fun 的语义化别名
#define $alias_name $fun

#define SystemInitializer System_Initializer2  // 系统初始化器


// 02_core_engine_part050.c - 14 个函数

// 函数: void FUN_18008bb30(uint64_t param_1,int64_t param_2,int64_t *param_3,int64_t *param_4,
void FUN_18008bb30(uint64_t param_1,int64_t param_2,int64_t *param_3,int64_t *param_4,
                  int8_t *param_5,int8_t *param_6)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  void *puVar5;
  code *pcVar6;
  int64_t lVar7;
  int64_t lVar8;
  int8_t auStack_288 [32];
  void *puStack_268;
  uint64_t *puStack_258;
  int32_t uStack_250;
  int64_t lStack_248;
  int64_t lStack_240;
  int8_t auStack_238 [16];
  code *pcStack_228;
  code *pcStack_220;
  int32_t uStack_218;
  int64_t lStack_210;
  uint64_t uStack_208;
  void *puStack_1f8;
  int8_t *puStack_1f0;
  int32_t uStack_1e8;
  int8_t auStack_1e0 [256];
  int64_t lStack_e0;
  int64_t lStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  int64_t lStack_c0;
  int8_t uStack_b8;
  uint64_t auStack_b0 [2];
  code *pcStack_a0;
  code *pcStack_98;
  int8_t auStack_90 [16];
  code *pcStack_80;
  code *pcStack_78;
  uint64_t uStack_48;
  
  uStack_208 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_288;
  lVar8 = *param_3;
  lVar4 = param_3[2];
  lStack_240 = param_3[1];
  lVar7 = 0;
  lStack_248 = param_2;
  if (param_4 != (int64_t *)0x0) {
    cVar1 = *(char *)((int64_t)param_3 + 0x44);
    if (cVar1 != '\0') {
      puStack_268 = &processed_var_8576_ptr;
      SystemConfigurationManager(system_message_context,0,0x80000000000,9);
      cVar1 = *(char *)((int64_t)param_3 + 0x44);
    }
    lStack_240 = param_4[1];
    if (cVar1 == '\0') {
      lVar8 = lVar8 + *param_4;
      lVar7 = 0;
      lVar4 = lStack_240;
    }
    else {
      lVar7 = *param_4;
    }
  }
  uStack_250 = (int32_t)param_3[8];
  puStack_258 = (uint64_t *)auStack_238;
  pcStack_228 = (code *)0x0;
  pcStack_220 = _guard_check_icall;
  if (auStack_238 != param_5) {
    pcVar6 = *(code **)(param_5 + 0x10);
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(auStack_238,param_5);
      pcVar6 = *(code **)(param_5 + 0x10);
    }
    pcStack_220 = *(code **)(param_5 + 0x18);
    pcStack_228 = pcVar6;
  }
  puStack_1f8 = &rendering_buffer_2008_ptr;
  puStack_1f0 = auStack_1e0;
  uStack_1e8 = 0;
  auStack_1e0[0] = 0;
  pcStack_a0 = (code *)0x0;
  pcStack_98 = _guard_check_icall;
  puStack_258 = (uint64_t *)auStack_90;
  pcStack_80 = (code *)0x0;
  pcStack_78 = _guard_check_icall;
  lStack_c0 = 0xffffffffffffffff;
  lStack_d8 = 0xffffffffffffffff;
  lStack_e0 = 0xffffffffffffffff;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_b8 = 0;
  puVar5 = &system_buffer_ptr;
  if (*(void **)(lStack_248 + 0x60) != (void *)0x0) {
    puVar5 = *(void **)(lStack_248 + 0x60);
  }
  uStack_218 = uStack_250;
  lStack_210 = lVar7;
  FUN_1800693f0(&puStack_1f8,puVar5);
  uStack_c8 = (uint64_t)(-(uint)(*(char *)((int64_t)param_3 + 0x44) != '\0') & 3);
  lStack_c0 = param_3[1];
  lStack_e0 = lVar8;
  lStack_d8 = lVar4;
  if (pcStack_a0 != (code *)0x0) {
    (*pcStack_a0)(auStack_b0,0,0);
  }
  pcStack_a0 = FUN_18008e700;
  pcStack_98 = FUN_18008e690;
  uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x38,8,system_allocation_flags);
  FUN_18008e9e0(uVar3,&lStack_240);
  auStack_b0[0] = uVar3;
  if (auStack_90 != param_6) {
    if (pcStack_80 != (code *)0x0) {
      (*pcStack_80)(auStack_90,0,0);
    }
    pcVar6 = *(code **)(param_6 + 0x10);
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(auStack_90,param_6,1);
      pcVar6 = *(code **)(param_6 + 0x10);
    }
    pcStack_78 = *(code **)(param_6 + 0x18);
    pcStack_80 = pcVar6;
  }
  lVar8 = *(int64_t *)(core_system_data_memory + 8);
  lVar4 = FUN_18006d0b0(lVar8 + 200);
  if (lVar4 != 0) {
    FUN_18006d6c0(lVar4,&puStack_1f8);
  }
  iVar2 = _Cnd_signal(lVar8 + 0x330);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  puStack_258 = (uint64_t *)auStack_90;
  if (pcStack_80 != (code *)0x0) {
    (*pcStack_80)(auStack_90,0,0);
  }
  puStack_258 = auStack_b0;
  if (pcStack_a0 != (code *)0x0) {
    (*pcStack_a0)(auStack_b0,0,0);
  }
  puStack_1f8 = &system_state_ptr;
  puStack_258 = (uint64_t *)auStack_238;
  if (pcStack_228 != (code *)0x0) {
    (*pcStack_228)(auStack_238,0,0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_288);
}





// 函数: void FUN_18008bf00(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18008bf00(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_1 + 8,0,0,param_4,0xfffffffffffffffe);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18008bf40(uint64_t param_1,int64_t param_2,int64_t *param_3,int64_t *param_4,
void FUN_18008bf40(uint64_t param_1,int64_t param_2,int64_t *param_3,int64_t *param_4,
                  int64_t param_5)

{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  void *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int8_t auStack_328 [32];
  void *puStack_308;
  int64_t lStack_300;
  uint auStack_2f8 [2];
  int64_t alStack_2f0 [2];
  int64_t lStack_2e0;
  int64_t *plStack_2d0;
  void *puStack_2c8;
  int8_t uStack_2c0;
  uint64_t uStack_2b8;
  int8_t auStack_2b0 [8];
  int8_t auStack_2a8 [608];
  uint64_t uStack_48;
  
  uStack_2b8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_328;
  alStack_2f0[0] = -1;
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0x60) != (void *)0x0) {
    puVar5 = *(void **)(param_2 + 0x60);
  }
  lStack_2e0 = param_2;
  cVar1 = FUN_18063ba00(alStack_2f0,puVar5,5,0x105);
  lVar6 = alStack_2f0[0];
  if (cVar1 == '\0') {
    if (alStack_2f0[0] != -1) {
      LOCK();
      SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
      UNLOCK();
      CloseHandle(alStack_2f0[0]);
      alStack_2f0[0] = -1;
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_328);
  }
  lVar7 = *param_3;
  uVar8 = (uint)param_3[2];
  if (param_4 != (int64_t *)0x0) {
    if (*(char *)((int64_t)param_3 + 0x44) != '\0') {
      puStack_308 = &processed_var_8576_ptr;
      SystemConfigurationManager(system_message_context,0,0x80000000000,9);
      if (*(char *)((int64_t)param_3 + 0x44) != '\0') goto LAB_18008c01e;
    }
    lVar7 = lVar7 + *param_4;
    uVar8 = (uint)param_4[1];
  }
LAB_18008c01e:
  SetFilePointerEx(lVar6,lVar7,auStack_2b0,0);
  plVar3 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *(int16_t *)(plVar3 + 3) = 0;
  *(int8_t *)((int64_t)plVar3 + 0x1a) = 3;
  if (uVar8 != 0) {
    uVar11 = (uint64_t)uVar8;
    System_BufferManager(plVar3,uVar8);
    lVar6 = plVar3[1];
    uVar9 = 0;
    if (uVar11 != 0) {
      do {
        uVar10 = 0x1000000;
        if (uVar11 - uVar9 < 0x1000000) {
          uVar10 = uVar11 - uVar9 & 0xffffffff;
        }
        auStack_2f8[0] = 0;
        puStack_308 = (void *)0x0;
        iVar2 = ReadFile(alStack_2f0[0],lVar6 + uVar9,uVar10,auStack_2f8);
      } while (((iVar2 != 0) && (auStack_2f8[0] != 0)) &&
              (uVar9 = uVar9 + auStack_2f8[0], uVar9 < uVar11));
    }
  }
  if (*(char *)((int64_t)param_3 + 0x44) == '\0') {
    if (param_4 == (int64_t *)0x0) {
      lVar6 = param_3[1];
    }
    else {
      lVar6 = param_4[1];
    }
    (**(code **)(param_5 + 0x18))(plVar3,lVar6,(int)param_3[8],param_5);
    if (((char)plVar3[3] == '\0') && (*plVar3 != 0)) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(plVar3);
  }
  plVar4 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
  *plVar4 = 0;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *(int16_t *)(plVar4 + 3) = 0;
  *(int8_t *)((int64_t)plVar4 + 0x1a) = 10;
  lStack_300 = param_3[1];
  plStack_2d0 = plVar4;
  if ((uint64_t)((plVar4[2] - plVar4[1]) + *plVar4) <= lStack_300 + 1U) {
    System_BufferManager(plVar4,(plVar4[1] - *plVar4) + lStack_300 + 1U);
    lStack_300 = param_3[1];
  }
  puStack_2c8 = &memory_allocator_3856_ptr;
  uStack_2c0 = 1;
  lStack_300 = lStack_300 + 1;
  puStack_308 = (void *)*plVar4;
  FUN_18021f710(&puStack_2c8,auStack_2a8,*plVar3,param_3[2]);
  if (((char)plVar3[3] == '\0') && (*plVar3 != 0)) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(plVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18008c320(int64_t param_1,int64_t *param_2)
void FUN_18008c320(int64_t param_1,int64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  uint uVar9;
  void *puVar10;
  uint64_t uVar11;
  bool bVar12;
  int8_t auStack_8e8 [32];
  uint64_t uStack_8c8;
  int32_t uStack_8b8;
  int32_t uStack_8b0;
  int32_t uStack_8ac;
  int32_t uStack_8a8;
  int32_t uStack_8a4;
  int64_t *plStack_8a0;
  uint64_t uStack_898;
  int8_t auStack_890 [8];
  void *puStack_888;
  int8_t *puStack_880;
  uint uStack_878;
  int8_t auStack_870 [2088];
  uint64_t uStack_48;
  
  uStack_898 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_8e8;
  uVar8 = 0;
  uStack_8b8 = 0;
  plStack_8a0 = param_2;
  uVar4 = (**(code **)(*param_2 + 8))(param_2);
  puStack_888 = &memory_allocator_336_ptr;
  puStack_880 = auStack_870;
  auStack_870[0] = 0;
  uStack_878 = *(uint *)(param_2 + 0xf);
  puVar10 = &system_buffer_ptr;
  if ((void *)param_2[0xe] != (void *)0x0) {
    puVar10 = (void *)param_2[0xe];
  }
  strcpy_s(auStack_870,0x400,puVar10);
  uVar11 = uVar8;
  if (uStack_878 != 0) {
    do {
      if ((byte)(puStack_880[uVar8] + 0xbf) < 0x1a) {
        puStack_880[uVar8] = puStack_880[uVar8] + ' ';
      }
      uVar9 = (int)uVar11 + 1;
      uVar8 = uVar8 + 1;
      uVar11 = (uint64_t)uVar9;
    } while (uVar9 < uStack_878);
  }
  puVar1 = (uint64_t *)(param_1 + 0x78);
  puVar5 = puVar1;
  puVar2 = *(uint64_t **)(param_1 + 0x88);
  while (puVar2 != (uint64_t *)0x0) {
    iVar3 = memcmp(puVar2 + 4,uVar4,0x10);
    if (iVar3 < 0) {
      puVar2 = (uint64_t *)*puVar2;
    }
    else {
      puVar5 = puVar2;
      puVar2 = (uint64_t *)puVar2[1];
    }
  }
  if ((puVar5 == puVar1) || (iVar3 = memcmp(uVar4,puVar5 + 4,0x10), iVar3 < 0)) {
    uStack_8c8 = uVar4;
    puVar5 = (uint64_t *)FUN_18008d8c0(puVar1,auStack_890);
    puVar5 = (uint64_t *)*puVar5;
  }
  puVar1 = puVar5 + 6;
  uStack_8b0 = *(int32_t *)((int64_t)param_2 + 0xc);
  uStack_8ac = (int32_t)param_2[2];
  uStack_8a8 = *(int32_t *)((int64_t)param_2 + 0x14);
  uStack_8a4 = (int32_t)param_2[3];
  lVar6 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x38,*(int8_t *)(puVar5 + 0xb));
  *(int32_t *)(lVar6 + 0x20) = uStack_8b0;
  *(int32_t *)(lVar6 + 0x24) = uStack_8ac;
  *(int32_t *)(lVar6 + 0x28) = uStack_8a8;
  *(int32_t *)(lVar6 + 0x2c) = uStack_8a4;
  *(int64_t **)(lVar6 + 0x30) = plStack_8a0;
  bVar12 = true;
  puVar2 = puVar1;
  puVar7 = (uint64_t *)puVar5[8];
  while (puVar7 != (uint64_t *)0x0) {
    iVar3 = memcmp(lVar6 + 0x20,puVar7 + 4,0x10);
    bVar12 = iVar3 < 0;
    puVar2 = puVar7;
    if (bVar12) {
      puVar7 = (uint64_t *)puVar7[1];
    }
    else {
      puVar7 = (uint64_t *)*puVar7;
    }
  }
  puVar7 = puVar2;
  if (bVar12) {
    if (puVar2 == (uint64_t *)puVar5[7]) goto LAB_18008c531;
    puVar7 = (uint64_t *)func_0x00018066b9a0(puVar2);
  }
  iVar3 = memcmp(puVar7 + 4,lVar6 + 0x20,0x10);
  if (-1 < iVar3) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(lVar6);
  }
LAB_18008c531:
  if ((puVar2 == puVar1) || (iVar3 = memcmp(lVar6 + 0x20,puVar2 + 4,0x10), iVar3 < 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
                    // WARNING: Subroutine does not return
  SystemConfigProcessor(lVar6,puVar2,puVar1,uVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18008c9f0(int64_t param_1,int64_t *param_2)
void FUN_18008c9f0(int64_t param_1,int64_t *param_2)

{
  uint64_t *puVar1;
  byte bVar2;
  int32_t uVar3;
  uint64_t ****ppppuVar4;
  int64_t *plVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t *****pppppuVar9;
  uint64_t *****pppppuVar10;
  uint64_t ****ppppuVar11;
  byte *pbVar12;
  int64_t *plVar13;
  int iVar14;
  uint uVar15;
  int64_t *plVar16;
  uint64_t *puVar17;
  int64_t *plVar18;
  uint64_t *puVar19;
  uint64_t *puVar20;
  int64_t *plVar21;
  int64_t lVar22;
  int64_t *plVar23;
  bool bVar24;
  uint64_t ****ppppuStackX_10;
  uint64_t ****ppppuStackX_18;
  int64_t lStackX_20;
  int64_t *plStack_90;
  int64_t *plStack_88;
  int64_t *plStack_80;
  int32_t uStack_78;
  uint64_t ****ppppuStack_70;
  uint64_t ****ppppuStack_68;
  uint64_t ****ppppuStack_60;
  uint64_t uStack_58;
  int64_t lStack_50;
  int32_t uStack_48;
  
  uStack_48 = 3;
  ppppuStack_70 = &ppppuStack_70;
  ppppuStack_68 = &ppppuStack_70;
  ppppuStack_60 = (uint64_t *****)0x0;
  uStack_58 = 0;
  lStack_50 = 0;
  ppppuStackX_10 = (uint64_t ****)((uint64_t)ppppuStackX_10 & 0xffffffff00000000);
  puVar17 = (uint64_t *)*param_2;
  if (param_2[1] - (int64_t)puVar17 >> 3 == 0) {
    iVar14 = (int)(param_2[1] - (int64_t)puVar17 >> 3);
    lVar8 = (int64_t)iVar14;
    lStackX_20 = lVar8;
    if (0 < iVar14) {
      lVar22 = 0;
      do {
        ppppuVar4 = *(uint64_t *****)(*param_2 + lVar22 * 8);
        pppppuVar10 = &ppppuStack_70;
        pppppuVar9 = (uint64_t *****)ppppuStack_60;
        if ((uint64_t *****)ppppuStack_60 == (uint64_t *****)0x0) {
LAB_18008cc42:
          pppppuVar10 = &ppppuStack_70;
        }
        else {
          do {
            if (pppppuVar9[4] < ppppuVar4) {
              pppppuVar9 = (uint64_t *****)*pppppuVar9;
            }
            else {
              pppppuVar10 = pppppuVar9;
              pppppuVar9 = (uint64_t *****)pppppuVar9[1];
            }
          } while (pppppuVar9 != (uint64_t *****)0x0);
          if ((pppppuVar10 == &ppppuStack_70) || (ppppuVar4 < pppppuVar10[4])) goto LAB_18008cc42;
        }
        uVar3 = *(int32_t *)(pppppuVar10 + 5);
        for (ppppuVar11 = (uint64_t ****)ppppuVar4[8]; ppppuVar11 != ppppuVar4 + 7;
            ppppuVar11 = (uint64_t ****)func_0x00018066bd70(ppppuVar11)) {
          FUN_18008b390(ppppuVar11[4],uVar3,&ppppuStack_70);
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 < lVar8);
    }
    lVar8 = lStack_50;
    plStack_90 = (int64_t *)0x0;
    plStack_88 = (int64_t *)0x0;
    plStack_80 = (int64_t *)0x0;
    uStack_78 = 3;
    if (lStack_50 != 0) {
      plStack_88 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lStack_50 * 0x10,3);
      plStack_80 = plStack_88 + lVar8 * 2;
    }
    ppppuStackX_10 = &ppppuStack_70;
    ppppuStackX_18 = ppppuStack_68;
    plStack_90 = plStack_88;
    FUN_18008e1a0(&plStack_90,plStack_88,&ppppuStackX_18,&ppppuStackX_10);
    plVar23 = plStack_88;
    plVar5 = plStack_90;
    if (plStack_90 != plStack_88) {
      iVar14 = 0;
      lVar22 = (int64_t)plStack_88 - (int64_t)plStack_90 >> 4;
      for (lVar8 = lVar22; lVar8 != 0; lVar8 = lVar8 >> 1) {
        iVar14 = iVar14 + 1;
      }
      FUN_18008eb40(plStack_90,plStack_88,(int64_t)(iVar14 + -1) * 2,0);
      if (lVar22 < 0x1d) {
        FUN_18008e460(plVar5,plVar23);
      }
      else {
        plVar18 = plVar5 + 0x38;
        FUN_18008e460(plVar5,plVar18);
        if (plVar18 != plVar23) {
          plVar16 = plVar5 + 0x36;
LAB_18008cd70:
          lVar8 = *plVar18;
          iVar14 = (int)plVar18[1];
          plVar13 = plVar16;
          plVar21 = plVar18;
          do {
            if (iVar14 == (int)plVar13[1]) {
              if (*(int *)(*plVar13 + 0x78) == 0) {
                bVar24 = false;
              }
              else if (*(int *)(lVar8 + 0x78) == 0) {
                bVar24 = true;
              }
              else {
                pbVar12 = *(byte **)(*plVar13 + 0x70);
                lVar22 = *(int64_t *)(lVar8 + 0x70) - (int64_t)pbVar12;
                do {
                  bVar2 = *pbVar12;
                  uVar15 = (uint)pbVar12[lVar22];
                  if (bVar2 != uVar15) break;
                  pbVar12 = pbVar12 + 1;
                } while (uVar15 != 0);
                bVar24 = 0 < (int)(bVar2 - uVar15);
              }
            }
            else {
              bVar24 = iVar14 < (int)plVar13[1];
            }
            if (!bVar24) goto LAB_18008cdfe;
            *plVar21 = *plVar13;
            *(int *)((int64_t)plVar18 + (8 - (int64_t)plVar16) + (int64_t)plVar13) =
                 (int)plVar13[1];
            plVar21 = plVar21 + -2;
            plVar13 = plVar13 + -2;
          } while( true );
        }
      }
    }
LAB_18008ce20:
    param_2[1] = *param_2;
    plVar23 = plVar5;
    lVar8 = lStackX_20;
    if (0 < lStackX_20) {
      do {
        plVar18 = (int64_t *)param_2[1];
        if (plVar18 < (int64_t *)param_2[2]) {
          param_2[1] = (int64_t)(plVar18 + 1);
          *plVar18 = *plVar23;
        }
        else {
          plVar16 = (int64_t *)*param_2;
          lVar22 = (int64_t)plVar18 - (int64_t)plVar16 >> 3;
          if (lVar22 == 0) {
            lVar22 = 1;
LAB_18008ce85:
            plVar13 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar22 * 8,(char)param_2[3]);
            plVar18 = (int64_t *)param_2[1];
            plVar16 = (int64_t *)*param_2;
          }
          else {
            lVar22 = lVar22 * 2;
            if (lVar22 != 0) goto LAB_18008ce85;
            plVar13 = (int64_t *)0x0;
          }
          if (plVar16 != plVar18) {
                    // WARNING: Subroutine does not return
            memmove(plVar13,plVar16,(int64_t)plVar18 - (int64_t)plVar16);
          }
          *plVar13 = *plVar23;
          if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          *param_2 = (int64_t)plVar13;
          param_2[1] = (int64_t)(plVar13 + 1);
          param_2[2] = (int64_t)(plVar13 + lVar22);
        }
        lVar8 = lVar8 + -1;
        plVar23 = plVar23 + 2;
      } while (lVar8 != 0);
    }
    ppppuVar4 = ppppuStack_60;
    if (plVar5 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(plVar5);
    }
    if ((uint64_t *****)ppppuStack_60 != (uint64_t *****)0x0) {
      SystemCache_Manager(&ppppuStack_70,*ppppuStack_60);
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(ppppuVar4);
    }
    return;
  }
  puVar1 = (uint64_t *)(param_1 + 0xe0);
  iVar14 = 0;
  uVar7 = (**(code **)(*(int64_t *)*puVar17 + 8))();
  puVar17 = puVar1;
  puVar19 = *(uint64_t **)(param_1 + 0xf0);
  if (*(uint64_t **)(param_1 + 0xf0) == (uint64_t *)0x0) {
LAB_18008caf0:
    puVar17 = puVar1;
  }
  else {
    do {
      iVar6 = memcmp(puVar19 + 4,uVar7,0x10);
      if (iVar6 < 0) {
        puVar20 = (uint64_t *)*puVar19;
      }
      else {
        puVar20 = (uint64_t *)puVar19[1];
        puVar17 = puVar19;
      }
      puVar19 = puVar20;
    } while (puVar20 != (uint64_t *)0x0);
    if ((puVar17 == puVar1) || (iVar6 = memcmp(uVar7,puVar17 + 4,0x10), iVar6 < 0))
    goto LAB_18008caf0;
  }
  if (puVar17 != puVar1) {
    iVar14 = *(int *)(puVar17 + 6);
  }
  ppppuVar4 = *(uint64_t *****)*param_2;
  lVar8 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x30,(int8_t)uStack_48);
  *(uint64_t *****)(lVar8 + 0x20) = ppppuVar4;
  *(int *)(lVar8 + 0x28) = iVar14 << 0x10;
  bVar24 = true;
  pppppuVar10 = &ppppuStack_70;
  pppppuVar9 = (uint64_t *****)ppppuStack_60;
  while (pppppuVar9 != (uint64_t *****)0x0) {
    bVar24 = ppppuVar4 < pppppuVar9[4];
    pppppuVar10 = pppppuVar9;
    if (bVar24) {
      pppppuVar9 = (uint64_t *****)pppppuVar9[1];
    }
    else {
      pppppuVar9 = (uint64_t *****)*pppppuVar9;
    }
  }
  pppppuVar9 = pppppuVar10;
  if (bVar24) {
    if (pppppuVar10 == (uint64_t *****)ppppuStack_68) goto LAB_18008cb7e;
    pppppuVar9 = (uint64_t *****)func_0x00018066b9a0(pppppuVar10);
  }
  if (*(uint64_t *****)(lVar8 + 0x20) <= pppppuVar9[4]) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(lVar8);
  }
LAB_18008cb7e:
  if ((pppppuVar10 == &ppppuStack_70) || (*(uint64_t *****)(lVar8 + 0x20) < pppppuVar10[4])) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
                    // WARNING: Subroutine does not return
  SystemConfigProcessor(lVar8,pppppuVar10,&ppppuStack_70,uVar7);
LAB_18008cdfe:
  *plVar21 = lVar8;
  *(int *)(plVar21 + 1) = iVar14;
  plVar18 = plVar18 + 2;
  plVar16 = plVar16 + 2;
  if (plVar18 == plVar23) goto LAB_18008ce20;
  goto LAB_18008cd70;
}





// 函数: void FUN_18008cf60(uint64_t param_1,int64_t *param_2)
void FUN_18008cf60(uint64_t param_1,int64_t *param_2)

{
  byte bVar1;
  int64_t *plVar2;
  int64_t lVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *plVar10;
  
  plVar2 = (int64_t *)param_2[1];
  param_2 = (int64_t *)*param_2;
  if (param_2 != plVar2) {
    iVar6 = 0;
    lVar7 = (int64_t)plVar2 - (int64_t)param_2 >> 3;
    for (lVar3 = lVar7; lVar3 != 0; lVar3 = lVar3 >> 1) {
      iVar6 = iVar6 + 1;
    }
    FUN_18008edc0(param_2,plVar2,(int64_t)(iVar6 + -1) * 2,0);
    if (lVar7 < 0x1d) {
      FUN_18008e550(param_2,plVar2);
    }
    else {
      plVar8 = param_2 + 0x1c;
      FUN_18008e550(param_2,plVar8);
      if (plVar8 != plVar2) {
        do {
          lVar3 = *plVar8;
          plVar10 = plVar8;
          while (lVar7 = plVar10[-1], *(int *)(lVar7 + 0x78) != 0) {
            if (*(int *)(lVar3 + 0x78) != 0) {
              pbVar4 = *(byte **)(lVar7 + 0x70);
              lVar9 = *(int64_t *)(lVar3 + 0x70) - (int64_t)pbVar4;
              do {
                bVar1 = *pbVar4;
                uVar5 = (uint)pbVar4[lVar9];
                if (bVar1 != uVar5) break;
                pbVar4 = pbVar4 + 1;
              } while (uVar5 != 0);
              if ((int)(bVar1 - uVar5) < 1) break;
            }
            *plVar10 = lVar7;
            plVar10 = plVar10 + -1;
          }
          plVar8 = plVar8 + 1;
          *plVar10 = lVar3;
          if (plVar8 == plVar2) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}





// 函数: void FUN_18008cf7a(void)
void FUN_18008cf7a(void)

{
  byte bVar1;
  int64_t lVar2;
  byte *pbVar3;
  uint uVar4;
  int64_t unaff_RBX;
  int64_t *unaff_RSI;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *plVar8;
  
  lVar5 = (int64_t)unaff_RSI - unaff_RBX >> 3;
  for (lVar2 = lVar5; lVar2 != 0; lVar2 = lVar2 >> 1) {
  }
  FUN_18008edc0();
  if (lVar5 < 0x1d) {
    FUN_18008e550();
  }
  else {
    plVar6 = (int64_t *)(unaff_RBX + 0xe0);
    FUN_18008e550();
    if (plVar6 != unaff_RSI) {
      do {
        lVar2 = *plVar6;
        plVar8 = plVar6;
        while (lVar5 = plVar8[-1], *(int *)(lVar5 + 0x78) != 0) {
          if (*(int *)(lVar2 + 0x78) != 0) {
            pbVar3 = *(byte **)(lVar5 + 0x70);
            lVar7 = *(int64_t *)(lVar2 + 0x70) - (int64_t)pbVar3;
            do {
              bVar1 = *pbVar3;
              uVar4 = (uint)pbVar3[lVar7];
              if (bVar1 != uVar4) break;
              pbVar3 = pbVar3 + 1;
            } while (uVar4 != 0);
            if ((int)(bVar1 - uVar4) < 1) break;
          }
          *plVar8 = lVar5;
          plVar8 = plVar8 + -1;
        }
        plVar6 = plVar6 + 1;
        *plVar8 = lVar2;
        if (plVar6 == unaff_RSI) {
          return;
        }
      } while( true );
    }
  }
  return;
}





// 函数: void FUN_18008d04c(void)
void FUN_18008d04c(void)

{
  FUN_18008e550();
  return;
}





// 函数: void FUN_18008d059(void)
void FUN_18008d059(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * NetworkDataProcessor(void)

{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
              0x48) < core_system_config_memory) {
    SystemInitializer(&system_ptr_91f8);
    if (core_system_config_memory == -1) {
      core_system_config_memory = 0;
      core_system_config_memory = 0;
      core_system_config_memory = FUN_18008d1b0();
      FUN_1808fc820(FUN_180941920);
      SystemCore_StateController(&system_ptr_91f8);
      return &system_ptr_9200;
    }
  }
  return &system_ptr_9200;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18008d100(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18008d100(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  
  plVar1 = core_system_config_memory;
  FUN_18008d1f0(param_1,core_system_config_memory[1],param_3,param_4,0xfffffffffffffffe);
  core_system_config_memory[1] = (int64_t)plVar1;
  *core_system_config_memory = (int64_t)plVar1;
  core_system_config_memory[2] = (int64_t)plVar1;
  core_system_config_memory = 0;
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(core_system_config_memory,0x58);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18008d180(void)
void FUN_18008d180(void)

{
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(core_system_config_memory,0x58);
  return;
}





// 函数: void FUN_18008d1b0(void)
void FUN_18008d1b0(void)

{
  int64_t lVar1;
  
  lVar1 = SystemCore_SyscallHandler(0x58);
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(lVar1 + 8) = lVar1;
  *(int64_t *)(lVar1 + 0x10) = lVar1;
  *(int16_t *)(lVar1 + 0x18) = 0x101;
  return;
}





// 函数: void FUN_18008d1f0(uint64_t param_1,int64_t *param_2)
void FUN_18008d1f0(uint64_t param_1,int64_t *param_2)

{
  char cVar1;
  int64_t *plVar2;
  
  cVar1 = *(char *)((int64_t)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_18008d1f0(&system_ptr_9200,param_2[2]);
    plVar2 = (int64_t *)*param_2;
    free(param_2,0x58);
    param_2 = plVar2;
    cVar1 = *(char *)((int64_t)plVar2 + 0x19);
  }
  return;
}



uint64_t *
FUN_18008d320(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puVar1;
  
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &processed_var_9208_ptr;
  param_1[1] = param_1 + 3;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  *(int32_t *)(param_1 + 2) = *(int32_t *)(param_2 + 0x10);
  puVar1 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar1 = *(void **)(param_2 + 8);
  }
  strcpy_s(param_1[1],0x200,puVar1,param_4,0xfffffffffffffffe);
  return param_1;
}





// 函数: void FUN_18008d3a0(int64_t *param_1)
void FUN_18008d3a0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    FUN_180089640(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}



uint64_t * FUN_18008d400(uint64_t *param_1,uint64_t *param_2,uint64_t param_3)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  
  puVar2 = param_1;
  puVar3 = (uint64_t *)param_1[2];
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    do {
      iVar1 = memcmp(puVar3 + 4,param_3,0x10);
      if (iVar1 < 0) {
        puVar4 = (uint64_t *)*puVar3;
      }
      else {
        puVar4 = (uint64_t *)puVar3[1];
        puVar2 = puVar3;
      }
      puVar3 = puVar4;
    } while (puVar4 != (uint64_t *)0x0);
    if ((puVar2 != param_1) && (iVar1 = memcmp(param_3,puVar2 + 4,0x10), -1 < iVar1)) {
      *param_2 = puVar2;
      return param_2;
    }
  }
  *param_2 = param_1;
  return param_2;
}



uint64_t * FUN_18008d4a0(uint64_t *param_1,uint64_t *param_2,int64_t param_3)

{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    puVar3 = param_1;
    puVar7 = (uint64_t *)param_1[2];
    do {
      if (*(int *)(param_3 + 0x10) == 0) {
        puVar8 = (uint64_t *)puVar7[1];
        bVar2 = false;
      }
      else {
        if (*(int *)(puVar7 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar4 = *(byte **)(param_3 + 8);
          lVar9 = puVar7[5] - (int64_t)pbVar4;
          do {
            uVar5 = (uint)pbVar4[lVar9];
            iVar6 = *pbVar4 - uVar5;
            if (*pbVar4 != uVar5) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar5 != 0);
          bVar2 = 0 < iVar6;
          if (iVar6 < 1) {
            puVar8 = (uint64_t *)puVar7[1];
            goto LAB_18008d51d;
          }
        }
        puVar8 = (uint64_t *)*puVar7;
      }
LAB_18008d51d:
      if (bVar2) {
        puVar7 = puVar3;
      }
      puVar3 = puVar7;
      puVar7 = puVar8;
    } while (puVar8 != (uint64_t *)0x0);
    if (puVar3 != param_1) {
      if (*(int *)(puVar3 + 6) == 0) {
LAB_18008d56b:
        *param_2 = puVar3;
        return param_2;
      }
      if (*(int *)(param_3 + 0x10) != 0) {
        pbVar4 = (byte *)puVar3[5];
        lVar9 = *(int64_t *)(param_3 + 8) - (int64_t)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar9];
          if (bVar1 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        if ((int)(bVar1 - uVar5) < 1) goto LAB_18008d56b;
      }
    }
  }
  *param_2 = param_1;
  return param_2;
}





