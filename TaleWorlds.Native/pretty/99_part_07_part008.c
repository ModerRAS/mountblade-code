#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part008.c - 3 个函数

// 函数: void FUN_1804a1800(uint64_t param_1,uint64_t *param_2)
void FUN_1804a1800(uint64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t lVar4;
  void *puVar5;
  float fVar6;
  int8_t auStack_4a8 [32];
  char *pcStack_488;
  int32_t uStack_478;
  void *puStack_470;
  void *puStack_468;
  int32_t uStack_460;
  uint64_t uStack_458;
  uint64_t uStack_450;
  uint64_t *puStack_448;
  char acStack_438 [512];
  char acStack_238 [512];
  uint64_t uStack_38;
  
  uStack_450 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_4a8;
  uStack_478 = 0;
  puStack_470 = &system_data_buffer_ptr;
  uStack_458 = 0;
  puStack_468 = (void *)0x0;
  uStack_460 = 0;
  puStack_448 = param_2;
  uVar2 = FUN_180623ce0();
  FUN_18005d0e0(uVar2,&puStack_470);
  puVar5 = &system_buffer_ptr;
  if (puStack_468 != (void *)0x0) {
    puVar5 = puStack_468;
  }
  FUN_180060680(acStack_438,&unknown_var_128_ptr,&system_data_d0f8,puVar5);
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  uStack_478 = 1;
  fVar6 = (float)FUN_180623d40();
  FUN_180060680(acStack_238,&unknown_var_152_ptr,(double)fVar6);
  pcStack_488 = acStack_238;
  FUN_1800622d0(system_message_context,0,7,&unknown_var_176_ptr);
  pcStack_488 = acStack_438;
  FUN_1800622d0(system_message_context,0,7,&unknown_var_4720_ptr);
  lVar1 = -1;
  do {
    lVar4 = lVar1;
    lVar1 = lVar4 + 1;
  } while (acStack_438[lVar4 + 1] != '\0');
  iVar3 = (int)(lVar4 + 1);
  lVar1 = -1;
  if (0 < iVar3) {
    CoreMemoryPoolProcessor(param_2,*(int *)(param_2 + 2) + iVar3);
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_2 + 2) + param_2[1],acStack_438,(int64_t)((int)lVar4 + 2));
  }
  do {
    lVar4 = lVar1;
    lVar1 = lVar4 + 1;
  } while (acStack_238[lVar4 + 1] != '\0');
  iVar3 = (int)(lVar4 + 1);
  if (iVar3 < 1) {
    puStack_470 = &system_data_buffer_ptr;
    if (puStack_468 == (void *)0x0) {
      puStack_468 = (void *)0x0;
      uStack_458 = uStack_458 & 0xffffffff00000000;
      puStack_470 = &system_state_ptr;
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_4a8);
    }
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  CoreMemoryPoolProcessor(param_2,*(int *)(param_2 + 2) + iVar3);
                    // WARNING: Subroutine does not return
  memcpy((uint64_t)*(uint *)(param_2 + 2) + param_2[1],acStack_238,(int64_t)((int)lVar4 + 2));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1804a1a40(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  if (system_status_flag - 1U < 5) {
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreMemoryPoolProcessor(param_2,0x1d,param_3,param_4,0,0xfffffffffffffffe);
    puVar2 = (uint64_t *)param_2[1];
    *puVar2 = 0x746f6e2073656f44;
    puVar2[1] = 0x6e6f206b726f7720;
    puVar2[2] = 0x6c7069746c756d20;
    *(int32_t *)(puVar2 + 3) = 0x72657961;
    *(int16_t *)((int64_t)puVar2 + 0x1c) = 0x2e;
    *(int32_t *)(param_2 + 2) = 0x1d;
  }
  else if (((system_system_config == 0) || (*(int *)(system_system_config + 0x98d930) < 0)) ||
          (lVar3 = system_system_config + 0x30a0 + (int64_t)*(int *)(system_system_config + 0x98d930) * 0xa60,
          lVar3 == 0)) {
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreMemoryPoolProcessor(param_2,0x15,param_3,param_4,0,0xfffffffffffffffe);
    puVar2 = (uint64_t *)param_2[1];
    *puVar2 = 0x656761206e69614d;
    puVar2[1] = 0x6620746f6e20746e;
    *(int32_t *)(puVar2 + 2) = 0x646e756f;
    *(int16_t *)((int64_t)puVar2 + 0x14) = 0x2e;
    *(int32_t *)(param_2 + 2) = 0x15;
  }
  else {
    FUN_1805369a0(*(uint64_t *)(lVar3 + 0x8f8));
    FUN_18050c1c0(lVar3);
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreMemoryPoolProcessor(param_2,5,param_3,param_4,uVar4,uVar5);
    puVar1 = (int32_t *)param_2[1];
    *puVar1 = 0x656e6f44;
    *(int16_t *)(puVar1 + 1) = 0x2e;
    *(int32_t *)(param_2 + 2) = 5;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1804a1c00(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t *plVar6;
  double dVar7;
  double dVar8;
  int8_t auVar9 [16];
  float fVar10;
  float fVar11;
  uint64_t uStackX_18;
  int32_t uVar12;
  uint64_t uVar13;
  float fStack_a8;
  float fStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  float fStack_98;
  float fStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int8_t auStack_88 [16];
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  char cStack_54;
  
  plVar4 = system_system_config;
  uVar13 = 0xfffffffffffffffe;
  uVar12 = 0;
  uStackX_18 = param_3;
  if (system_status_flag - 1U < 5) {
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreMemoryPoolProcessor(param_2,0x1d);
    puVar2 = (uint64_t *)param_2[1];
    *puVar2 = 0x746f6e2073656f44;
    puVar2[1] = 0x6e6f206b726f7720;
    puVar2[2] = 0x6c7069746c756d20;
    *(int32_t *)(puVar2 + 3) = 0x72657961;
    *(int16_t *)((int64_t)puVar2 + 0x1c) = 0x2e;
    *(int32_t *)(param_2 + 2) = 0x1d;
  }
  else {
    if (system_system_config != (int64_t *)0x0) {
      (**(code **)(*system_system_config + 0x28))(system_system_config);
    }
    dVar7 = (double)atof(*(uint64_t *)(*param_4 + 8));
    dVar8 = (double)atof(*(uint64_t *)(*param_4 + 0x28));
    if (((plVar4 == (int64_t *)0x0) || (plVar4[3] == 0)) ||
       (lVar3 = plVar4[0x131b26], (int)lVar3 < 0)) {
      *param_2 = &system_state_ptr;
      param_2[1] = 0;
      *(int32_t *)(param_2 + 2) = 0;
      *param_2 = &system_data_buffer_ptr;
      param_2[3] = 0;
      param_2[1] = 0;
      *(int32_t *)(param_2 + 2) = 0;
      CoreMemoryPoolProcessor(param_2,0x22);
      puVar2 = (uint64_t *)param_2[1];
      *puVar2 = 0x697373696d206f4e;
      puVar2[1] = 0x6f6e20726f206e6f;
      *(int32_t *)(puVar2 + 2) = 0x69616d20;
      *(int32_t *)((int64_t)puVar2 + 0x14) = 0x6761206e;
      *(int32_t *)(puVar2 + 3) = 0x20746e65;
      *(int32_t *)((int64_t)puVar2 + 0x1c) = 0x6e756f66;
      *(int16_t *)(puVar2 + 4) = 0x2e64;
      *(int8_t *)((int64_t)puVar2 + 0x22) = 0;
      *(int32_t *)(param_2 + 2) = 0x22;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4);
      }
    }
    else {
      uStackX_18 = CONCAT44((float)dVar8,(float)dVar7);
      cVar5 = FUN_1804f6190(plVar4,&uStackX_18);
      if (cVar5 == '\0') {
        *param_2 = &system_state_ptr;
        param_2[1] = 0;
        *(int32_t *)(param_2 + 2) = 0;
        *param_2 = &system_data_buffer_ptr;
        param_2[3] = 0;
        param_2[1] = 0;
        *(int32_t *)(param_2 + 2) = 0;
        CoreMemoryPoolProcessor(param_2,0x2a);
        puVar2 = (uint64_t *)param_2[1];
        *puVar2 = 0x7369207475706e49;
        puVar2[1] = 0x20666f2074756f20;
        puVar2[2] = 0x662073646e756f62;
        puVar2[3] = 0x6f746f672220726f;
        puVar2[4] = 0x6e616d6d6f632022;
        *(int16_t *)(puVar2 + 5) = 0x2164;
        *(int8_t *)((int64_t)puVar2 + 0x2a) = 0;
        *(int32_t *)(param_2 + 2) = 0x2a;
      }
      else {
        plVar6 = plVar4 + (int64_t)(int)lVar3 * 0x14c + 0x614;
        uStack_a0 = *(int32_t *)(plVar6[4] + 0x14);
        uStack_9c = 0x7f7fffff;
        cStack_54 = '\0';
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0x3f800000;
        uStack_6c = 0x7f7fffff;
        uStack_58 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        fStack_a8 = (float)dVar7;
        fStack_a4 = (float)dVar8;
        FUN_1801aa0f0(plVar6[0xcc],&fStack_a8,0,auStack_88,0x51b189,
                      (byte)((uint)*(int32_t *)((int64_t)plVar6 + 0x56c) >> 8) & 1,uVar12,uVar13
                     );
        if (cStack_54 != '\0') {
          if (-1 < *(int *)((int64_t)plVar6 + 0x564)) {
            plVar6 = plVar4 + (int64_t)*(int *)((int64_t)plVar6 + 0x564) * 0x14c + 0x614;
          }
          uVar13 = *(uint64_t *)
                    ((int64_t)plVar4 + (int64_t)(int)plVar4[0x131b26] * 0xa60 + 0x353c);
          uStackX_18._4_4_ = (float)((uint64_t)uVar13 >> 0x20);
          uStackX_18._0_4_ = (float)uVar13;
          fVar10 = uStackX_18._4_4_ * uStackX_18._4_4_ + (float)uStackX_18 * (float)uStackX_18;
          auVar9 = rsqrtss(ZEXT416((uint)((float)uStackX_18 * (float)uStackX_18)),
                           ZEXT416((uint)fVar10));
          fVar11 = auVar9._0_4_;
          fVar11 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
          fStack_98 = fStack_a8;
          fStack_94 = fStack_a4;
          uStackX_18 = CONCAT44(uStackX_18._4_4_ * fVar11,(float)uStackX_18 * fVar11);
          uStack_90 = uStack_58;
          uStack_8c = uStack_9c;
          FUN_180509f20(plVar6,&fStack_98,&uStackX_18);
        }
        *param_2 = &system_state_ptr;
        param_2[1] = 0;
        *(int32_t *)(param_2 + 2) = 0;
        *param_2 = &system_data_buffer_ptr;
        param_2[3] = 0;
        param_2[1] = 0;
        *(int32_t *)(param_2 + 2) = 0;
        CoreMemoryPoolProcessor(param_2,5);
        puVar1 = (int32_t *)param_2[1];
        *puVar1 = 0x656e6f44;
        *(int16_t *)(puVar1 + 1) = 0x2e;
        *(int32_t *)(param_2 + 2) = 5;
      }
      (**(code **)(*plVar4 + 0x38))(plVar4);
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1804a2030(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int iVar2;
  int32_t uVar3;
  int8_t *puVar4;
  int8_t *puVar5;
  int8_t *puVar6;
  int8_t *puVar7;
  int8_t *puVar8;
  int64_t lVar9;
  int32_t uVar10;
  uint64_t uVar11;
  void *puVar12;
  int8_t *puVar13;
  int32_t uVar14;
  uint64_t uVar15;
  int32_t uVar16;
  
  uVar11 = 0xfffffffffffffffe;
  puVar7 = (int8_t *)0x0;
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  CoreMemoryPoolProcessor(param_2,0,param_3,param_4,0,0xfffffffffffffffe);
  *(int32_t *)(param_2 + 2) = 0;
  if ((int8_t *)param_2[1] != (int8_t *)0x0) {
    *(int8_t *)param_2[1] = 0;
  }
  uVar10 = 1;
  iVar2 = (int)((*(int64_t *)(system_system_data_config + 0x3a8) - *(int64_t *)(system_system_data_config + 0x3a0)) /
               0x348);
  lVar9 = (int64_t)iVar2;
  puVar5 = puVar7;
  puVar8 = puVar7;
  if (0 < iVar2) {
    do {
      lVar1 = *(int64_t *)(system_system_data_config + 0x3a0);
      puVar12 = &system_data_buffer_ptr;
      uVar15 = 0;
      puVar13 = (int8_t *)0x0;
      uVar14 = 0;
      puVar4 = puVar7;
      if (*(int *)(puVar8 + lVar1 + 0x18) != 0) {
        iVar2 = *(int *)(puVar8 + lVar1 + 0x18) + 1;
        if (iVar2 < 0x10) {
          iVar2 = 0x10;
        }
        puVar4 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar2,0x13);
        uVar16 = (int32_t)(uVar15 >> 0x20);
        *puVar4 = 0;
        puVar13 = puVar4;
        uVar3 = CoreMemoryPoolCleaner(puVar4);
        uVar15 = CONCAT44(uVar16,uVar3);
        if (*(int *)(puVar8 + lVar1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
          memcpy(puVar4,*(uint64_t *)(puVar8 + lVar1 + 0x10),*(int *)(puVar8 + lVar1 + 0x18) + 1);
        }
      }
      if (*(int64_t *)(puVar8 + lVar1 + 0x10) != 0) {
        uVar14 = 0;
        if (puVar4 != (int8_t *)0x0) {
          *puVar4 = 0;
        }
        uVar15 = uVar15 & 0xffffffff;
      }
      puVar6 = &system_buffer_ptr;
      if (puVar4 != (int8_t *)0x0) {
        puVar6 = puVar4;
      }
      System_DataHandler(param_2,&unknown_var_632_ptr,puVar5,puVar6,uVar10,uVar11,puVar12,puVar13,uVar14,uVar15
                   );
      if (puVar4 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(puVar4);
      }
      puVar5 = (int8_t *)(uint64_t)((int)puVar5 + 1);
      puVar8 = puVar8 + 0x348;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x0001804a23e0)
// WARNING: Removing unreachable block (ram,0x0001804a23f0)
// WARNING: Removing unreachable block (ram,0x0001804a23fc)
// WARNING: Removing unreachable block (ram,0x0001804a2403)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1804a2230(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  uint64_t *puVar2;
  int iVar3;
  int iVar4;
  int8_t *puVar5;
  int64_t lVar6;
  void *puVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uStackX_20;
  void *puStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  uint64_t uStack_60;
  void *puStack_58;
  void *puStack_50;
  int iStack_48;
  
  if ((system_system_config == 0) || (*(int64_t *)(system_system_config + 0x18) == 0)) {
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreMemoryPoolProcessor(param_2,0x17,param_3,param_4,0,0xfffffffffffffffe);
    puVar2 = (uint64_t *)param_2[1];
    *puVar2 = 0x697373694d206f4e;
    puVar2[1] = 0x656e656353206e6f;
    puVar2[2] = 0x21646e756f4620;
    *(int32_t *)(param_2 + 2) = 0x17;
  }
  else {
    SystemCore_NetworkHandler0(&puStack_58,*(int64_t *)(system_system_config + 0x18) + 0x3020);
    uVar8 = 0;
    puStack_78 = &system_data_buffer_ptr;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    iVar3 = (int)((*(int64_t *)(system_system_data_config + 0x3a8) - *(int64_t *)(system_system_data_config + 0x3a0)) /
                 0x348);
    uStackX_20 = 0;
    uVar9 = uVar8;
    if (0 < iVar3) {
      do {
        puVar5 = (int8_t *)0x0;
        lVar6 = *(int64_t *)(system_system_data_config + 0x3a0) + uVar8;
        if (*(int *)(lVar6 + 0x18) != 0) {
          iVar4 = *(int *)(lVar6 + 0x18) + 1;
          if (iVar4 < 0x10) {
            iVar4 = 0x10;
          }
          puVar5 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar4,0x13);
          *puVar5 = 0;
          CoreMemoryPoolCleaner(puVar5);
          if (*(int *)(lVar6 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
            memcpy(puVar5,*(uint64_t *)(lVar6 + 0x10),*(int *)(lVar6 + 0x18) + 1);
          }
        }
        if ((*(int64_t *)(lVar6 + 0x10) != 0) && (puVar5 != (int8_t *)0x0)) {
          *puVar5 = 0;
        }
        if (iStack_48 == 0) {
          uVar8 = uStackX_20;
          if (puVar5 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager(puVar5);
          }
          goto LAB_1804a2455;
        }
        if (puVar5 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager(puVar5);
        }
        uVar1 = (int)uStackX_20 + 1;
        uStackX_20 = (uint64_t)uVar1;
        uVar9 = uVar9 + 1;
        uVar8 = uVar8 + 0x348;
      } while ((int64_t)uVar9 < (int64_t)iVar3);
      uVar8 = (uint64_t)uVar1;
    }
LAB_1804a2455:
    puVar7 = &system_buffer_ptr;
    if (puStack_50 != (void *)0x0) {
      puVar7 = puStack_50;
    }
    System_DataHandler(&puStack_78,&unknown_var_632_ptr,uVar8,puVar7);
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    *(int32_t *)(param_2 + 2) = uStack_68;
    param_2[1] = uStack_70;
    *(int32_t *)((int64_t)param_2 + 0x1c) = uStack_60._4_4_;
    *(int32_t *)(param_2 + 3) = (int32_t)uStack_60;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = 0;
    puStack_78 = &system_state_ptr;
    puStack_58 = &system_data_buffer_ptr;
    if (puStack_50 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1804a25a0(uint64_t param_1,uint64_t *param_2,int32_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if (system_status_flag - 1U < 5) {
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreMemoryPoolProcessor(param_2,0x1d,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x746f6e2073656f44;
    puVar1[1] = 0x6e6f206b726f7720;
    puVar1[2] = 0x6c7069746c756d20;
    *(int32_t *)(puVar1 + 3) = 0x72657961;
    *(int16_t *)((int64_t)puVar1 + 0x1c) = 0x2e;
    *(int32_t *)(param_2 + 2) = 0x1d;
  }
  else {
    FUN_180538220();
    system_system_config = (float)sinf(system_system_config * 0.017453292);
    system_system_config = system_system_config;
    uStack_38 = 0x3f800000;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_24 = 0x3f800000;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0x3f800000;
    uStack_c = 0;
    system_system_config = system_system_config;
    FUN_180085c10(&uStack_38,system_system_config);
    FUN_180085970(&uStack_38,system_system_config);
    FUN_180085ac0(&uStack_38,system_system_config);
    FUN_18063b470(&uStack_48,&uStack_38);
    system_system_config = uStack_48;
    uRam0000000180c96374 = uStack_44;
    uRam0000000180c96378 = uStack_40;
    uRam0000000180c9637c = uStack_3c;
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreMemoryPoolProcessor(param_2,0x1b);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x702065766974614e;
    puVar1[1] = 0x726574656d617261;
    puVar1[2] = 0x64616f6c65722073;
    *(int32_t *)(puVar1 + 3) = 0x2e6465;
    *(int32_t *)(param_2 + 2) = 0x1b;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1804a2770(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  void *puVar2;
  int iVar3;
  int32_t uVar4;
  int iVar5;
  char cVar6;
  uint64_t uStackX_20;
  void *puStack_38;
  int32_t *puStack_30;
  int32_t uStack_28;
  uint64_t uStack_20;
  
  iVar5 = 0;
  uStackX_20 = param_4;
  if (system_status_flag - 1U < 5) {
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreMemoryPoolProcessor(param_2,0x1d);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x746f6e2073656f44;
    puVar1[1] = 0x6e6f206b726f7720;
    puVar1[2] = 0x6c7069746c756d20;
    *(int32_t *)(puVar1 + 3) = 0x72657961;
    *(int16_t *)((int64_t)puVar1 + 0x1c) = 0x2e;
    *(int32_t *)(param_2 + 2) = 0x1d;
  }
  else {
    if (((system_debug_flag == '\0') || (iVar3 = IsDebuggerPresent(), iVar3 != 0)) &&
       (system_debug_flag2 == '\0')) {
      uVar4 = MessageBoxA(0,&unknown_var_704_ptr,&unknown_var_672_ptr,0x40004);
      switch(uVar4) {
      case 1:
        break;
      default:
        iVar5 = 1;
        break;
      case 4:
        iVar5 = 2;
        break;
      case 5:
        iVar5 = 3;
        break;
      case 6:
        iVar5 = 4;
        break;
      case 7:
        iVar5 = 5;
      }
      if (iVar5 == 4) {
        FUN_18055a540(&system_data_6150);
        FUN_18055b600(&system_data_6150);
        FUN_1804e4a10(&system_data_5ed0);
        FUN_1805397f0();
        FUN_1804e11e0();
        uStackX_20 = CONCAT44(uStackX_20._4_4_,0xffffffff);
        puStack_38 = &system_data_buffer_ptr;
        uStack_20 = 0;
        puStack_30 = (int32_t *)0x0;
        uStack_28 = 0;
        puStack_30 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x19,0x13);
        *(int8_t *)puStack_30 = 0;
        uVar4 = CoreMemoryPoolCleaner(puStack_30);
        uStack_20 = CONCAT44(uStack_20._4_4_,uVar4);
        *puStack_30 = 0x6d696e41;
        puStack_30[1] = 0x6f697461;
        puStack_30[2] = 0x6164206e;
        puStack_30[3] = 0x72206174;
        *(uint64_t *)(puStack_30 + 4) = 0x2e6465726f747365;
        *(int8_t *)(puStack_30 + 6) = 0;
        uStack_28 = 0x18;
        puVar2 = *(void **)*system_system_data_config;
        if (puVar2 == &unknown_var_424_ptr) {
          cVar6 = *(int *)(system_system_data_config + 0xc40) != 0;
        }
        else {
          cVar6 = (**(code **)(puVar2 + 0x50))((uint64_t *)*system_system_data_config);
        }
        if (cVar6 == '\0') {
          (**(code **)(*(int64_t *)system_system_data_config[1] + 0x18))
                    ((int64_t *)system_system_data_config[1],&puStack_38,&uStackX_20);
        }
        puStack_38 = &system_data_buffer_ptr;
        if (puStack_30 == (int32_t *)0x0) {
          puStack_30 = (int32_t *)0x0;
          uStack_20 = uStack_20 & 0xffffffff00000000;
          puStack_38 = &system_state_ptr;
          *param_2 = &system_state_ptr;
          param_2[1] = 0;
          *(int32_t *)(param_2 + 2) = 0;
          *param_2 = &system_data_buffer_ptr;
          param_2[3] = 0;
          param_2[1] = 0;
          *(int32_t *)(param_2 + 2) = 0;
          CoreMemoryPoolProcessor(param_2,0x18);
          puVar1 = (uint64_t *)param_2[1];
          *puVar1 = 0x6f6974616d696e41;
          puVar1[1] = 0x722061746164206e;
          puVar1[2] = 0x2e646564616f6c65;
          *(int8_t *)(puVar1 + 3) = 0;
          *(int32_t *)(param_2 + 2) = 0x18;
          return param_2;
        }
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
    }
    else if (*(char *)(system_message_context + 0x18) != '\0') {
      FUN_1800623b0(system_message_context,3,0xffffffff00000000,0xd,&unknown_var_6936_ptr,&unknown_var_672_ptr,
                    &unknown_var_704_ptr);
    }
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreMemoryPoolProcessor(param_2,0x22);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x6f6974616d696e41;
    puVar1[1] = 0x632061746164206e;
    puVar1[2] = 0x656220746f6e6e61;
    puVar1[3] = 0x6564616f6c657220;
    *(int16_t *)(puVar1 + 4) = 0x2e64;
    *(int8_t *)((int64_t)puVar1 + 0x22) = 0;
    *(int32_t *)(param_2 + 2) = 0x22;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1804a2b20(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  void *puVar2;
  int iVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  int iVar7;
  char cVar8;
  uint64_t uStackX_20;
  void *puStack_68;
  int32_t *puStack_60;
  int32_t uStack_58;
  uint64_t uStack_50;
  void *puStack_48;
  int32_t *puStack_40;
  int32_t uStack_38;
  uint64_t uStack_30;
  
  iVar7 = 0;
  uStackX_20 = param_4;
  if (system_status_flag - 1U < 5) {
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreMemoryPoolProcessor(param_2,0x1d);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x746f6e2073656f44;
    puVar1[1] = 0x6e6f206b726f7720;
    puVar1[2] = 0x6c7069746c756d20;
    *(int32_t *)(puVar1 + 3) = 0x72657961;
    *(int16_t *)((int64_t)puVar1 + 0x1c) = 0x2e;
    *(int32_t *)(param_2 + 2) = 0x1d;
  }
  else {
    if (((system_debug_flag == '\0') || (iVar3 = IsDebuggerPresent(), iVar3 != 0)) &&
       (system_debug_flag2 == '\0')) {
      uVar4 = MessageBoxA(0,&unknown_var_1184_ptr,&unknown_var_1152_ptr,0x40004);
      switch(uVar4) {
      case 1:
        break;
      default:
        iVar7 = 1;
        break;
      case 4:
        iVar7 = 2;
        break;
      case 5:
        iVar7 = 3;
        break;
      case 6:
        iVar7 = 4;
        break;
      case 7:
        iVar7 = 5;
      }
      if (iVar7 == 4) {
        uVar5 = FUN_18015b2b0(0x10);
        puStack_48 = &system_data_buffer_ptr;
        uStack_30 = 0;
        puStack_40 = (int32_t *)0x0;
        uStack_38 = 0;
        puVar6 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
        *(int8_t *)puVar6 = 0;
        puStack_40 = puVar6;
        uVar4 = CoreMemoryPoolCleaner(puVar6);
        *puVar6 = 0x6d657469;
        puVar6[1] = 0x6173755f;
        puVar6[2] = 0x735f6567;
        puVar6[3] = 0x737465;
        uStack_38 = 0xf;
        uStack_30._0_4_ = uVar4;
        FUN_1804e2be0(0x6d657469,&puStack_48);
        puStack_48 = &system_data_buffer_ptr;
        if (puStack_40 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        puStack_40 = (int32_t *)0x0;
        uStack_30 = (uint64_t)uStack_30._4_4_ << 0x20;
        puStack_48 = &system_state_ptr;
        FUN_18015b3a0(uVar5);
        uStackX_20 = CONCAT44(uStackX_20._4_4_,0xffffffff);
        puStack_68 = &system_data_buffer_ptr;
        uStack_50 = 0;
        puStack_60 = (int32_t *)0x0;
        uStack_58 = 0;
        puStack_60 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x1a,0x13);
        *(int8_t *)puStack_60 = 0;
        uVar4 = CoreMemoryPoolCleaner(puStack_60);
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        *puStack_60 = 0x6d657449;
        puStack_60[1] = 0x61737520;
        puStack_60[2] = 0x73206567;
        puStack_60[3] = 0x20737465;
        *(uint64_t *)(puStack_60 + 4) = 0x646564616f6c6572;
        *(int16_t *)(puStack_60 + 6) = 0x2e;
        uStack_58 = 0x19;
        puVar2 = *(void **)*system_system_data_config;
        if (puVar2 == &unknown_var_424_ptr) {
          cVar8 = *(int *)(system_system_data_config + 0xc40) != 0;
        }
        else {
          cVar8 = (**(code **)(puVar2 + 0x50))((uint64_t *)*system_system_data_config);
        }
        if (cVar8 == '\0') {
          (**(code **)(*(int64_t *)system_system_data_config[1] + 0x18))
                    ((int64_t *)system_system_data_config[1],&puStack_68,&uStackX_20);
        }
        puStack_68 = &system_data_buffer_ptr;
        if (puStack_60 == (int32_t *)0x0) {
          puStack_60 = (int32_t *)0x0;
          uStack_50 = uStack_50 & 0xffffffff00000000;
          puStack_68 = &system_state_ptr;
          *param_2 = &system_state_ptr;
          param_2[1] = 0;
          *(int32_t *)(param_2 + 2) = 0;
          *param_2 = &system_data_buffer_ptr;
          param_2[3] = 0;
          param_2[1] = 0;
          *(int32_t *)(param_2 + 2) = 0;
          CoreMemoryPoolProcessor(param_2,0x19);
          puVar1 = (uint64_t *)param_2[1];
          *puVar1 = 0x617375206d657449;
          puVar1[1] = 0x2073746573206567;
          puVar1[2] = 0x646564616f6c6572;
          *(int16_t *)(puVar1 + 3) = 0x2e;
          *(int32_t *)(param_2 + 2) = 0x19;
          return param_2;
        }
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
    }
    else if (*(char *)(system_message_context + 0x18) != '\0') {
      FUN_1800623b0(system_message_context,3,0xffffffff00000000,0xd,&unknown_var_6936_ptr,&unknown_var_1152_ptr,
                    &unknown_var_1184_ptr);
    }
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreMemoryPoolProcessor(param_2,0x23);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x617375206d657449;
    puVar1[1] = 0x2073746573206567;
    puVar1[2] = 0x6220746f6e6e6163;
    puVar1[3] = 0x64616f6c65722065;
    *(int32_t *)(puVar1 + 4) = 0x2e6465;
    *(int32_t *)(param_2 + 2) = 0x23;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a2f30(uint64_t param_1,int64_t param_2)
void FUN_1804a2f30(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  uint *puVar2;
  int64_t lVar3;
  
  if ((((system_data_6098 != '\0') && (*(int *)(param_2 + 0x10) == 0x11)) &&
      (iVar1 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_1640_ptr), iVar1 == 0)) &&
     ((system_system_config != 0 && (lVar3 = (int64_t)*(int *)(system_system_config + 0x52ed94), 0 < lVar3))))
  {
    puVar2 = (uint *)(system_system_config + 0x360c);
    do {
      if ((puVar2[-1] == 1) && ((*puVar2 & 0x4000) != 0)) {
        FUN_180543e30(*(uint64_t *)(puVar2 + 0x5b));
      }
      puVar2 = puVar2 + 0x298;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a2f5a(void)
void FUN_1804a2f5a(void)

{
  uint *puVar1;
  int64_t lVar2;
  
  if ((system_system_config != 0) && (lVar2 = (int64_t)*(int *)(system_system_config + 0x52ed94), 0 < lVar2)) {
    puVar1 = (uint *)(system_system_config + 0x360c);
    do {
      if ((puVar1[-1] == 1) && ((*puVar1 & 0x4000) != 0)) {
        FUN_180543e30(*(uint64_t *)(puVar1 + 0x5b));
      }
      puVar1 = puVar1 + 0x298;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}






