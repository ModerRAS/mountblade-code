#include "CoreSystem_ValidationEngine0_definition.h"
#include "SystemAdvancedValidator_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// $fun 的语义化别名
#define $alias_name $fun


// $fun 的语义化别名
#define $alias_name $fun


// 99_part_01_part033.c - 7 个函数

// 函数: void FUN_1800c0da0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t *param_4)
void FUN_1800c0da0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t *param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  
  lVar1 = *(int64_t *)(param_1 + 8);
  lVar2 = *(int64_t *)param_4[1];
  uVar9 = *(uint64_t *)(lVar2 + 0x2ec);
  lVar3 = *(int64_t *)*param_4;
  *(uint64_t *)(lVar3 + 0x14) = *(uint64_t *)(lVar2 + 0x2e4);
  *(uint64_t *)(lVar3 + 0x1c) = uVar9;
  uVar9 = *(uint64_t *)(lVar2 + 0x2fc);
  *(uint64_t *)(lVar3 + 0x24) = *(uint64_t *)(lVar2 + 0x2f4);
  *(uint64_t *)(lVar3 + 0x2c) = uVar9;
  uVar9 = *(uint64_t *)(lVar2 + 0x30c);
  *(uint64_t *)(lVar3 + 0x34) = *(uint64_t *)(lVar2 + 0x304);
  *(uint64_t *)(lVar3 + 0x3c) = uVar9;
  uVar9 = *(uint64_t *)(lVar2 + 0x31c);
  *(uint64_t *)(lVar3 + 0x44) = *(uint64_t *)(lVar2 + 0x314);
  *(uint64_t *)(lVar3 + 0x4c) = uVar9;
  uVar6 = *(int32_t *)(lVar2 + 0x328);
  uVar7 = *(int32_t *)(lVar2 + 0x32c);
  uVar8 = *(int32_t *)(lVar2 + 0x330);
  *(int32_t *)(lVar3 + 0x54) = *(int32_t *)(lVar2 + 0x324);
  *(int32_t *)(lVar3 + 0x58) = uVar6;
  *(int32_t *)(lVar3 + 0x5c) = uVar7;
  *(int32_t *)(lVar3 + 0x60) = uVar8;
  *(uint64_t *)(lVar3 + 100) = *(uint64_t *)(lVar2 + 0x334);
  plVar4 = *(int64_t **)*param_4;
  if ((((char)plVar4[2] == '\0') && (*(char *)((int64_t)plVar4 + 0x11) == '\0')) && (*plVar4 != 0))
  {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(int16_t *)(plVar4 + 2) = 1;
  *plVar4 = lVar1;
  plVar4[1] = param_2;
  puVar5 = *(uint64_t **)*param_4;
  if ((*(char *)((int64_t)puVar5 + 0x66) == '\0') && (*(char *)(puVar5 + 2) != '\0')) {
    uVar9 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,puVar5[1],CONCAT71((int7)((uint64_t)lVar2 >> 8),3));
                    // WARNING: Subroutine does not return
    memcpy(uVar9,*puVar5,puVar5[1]);
  }
  return;
}



int32_t FUN_1800c0ef0(int64_t *param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  int64_t *plVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t *plStack_50;
  int64_t *plStack_48;
  int8_t auStack_40 [8];
  uint64_t uStack_38;
  int64_t *plStack_28;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  
  uVar3 = 0xfffffffffffffffe;
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  plStack_50 = (int64_t *)0x0;
  plStack_48 = (int64_t *)0x0;
  plStack_28 = (int64_t *)0x0;
  uStack_38 = 0;
  auStack_40[0] = 0;
  RenderingSystem_MaterialProcessor(&plStack_50,param_1,0);
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  uVar2 = SystemCore_RenderFrame(&plStack_50,param_2,param_3,param_4,uVar3);
  if ((plStack_50 != (int64_t *)0x0) && (plStack_48 != (int64_t *)0x0)) {
    if (cStack_1e != '\0') {
      SystemConfig_Manager();
    }
    SystemSecurityManager(auStack_40);
    if (cStack_20 != '\0') {
      SystemInitializer(plStack_50);
    }
    if (cStack_1f != '\0') {
      SystemInitializer(plStack_50);
    }
    plVar1 = plStack_48;
    plStack_48 = (int64_t *)0x0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  SystemSecurityManager(auStack_40);
  if (plStack_28 != (int64_t *)0x0) {
    (**(code **)(*plStack_28 + 0x38))();
  }
  if (plStack_48 != (int64_t *)0x0) {
    (**(code **)(*plStack_48 + 0x38))();
  }
  if (plStack_50 != (int64_t *)0x0) {
    (**(code **)(*plStack_50 + 0x38))();
  }
  return uVar2;
}



int32_t
FUN_1800c1040(int64_t *param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5)

{
  int64_t *plVar1;
  int32_t uVar2;
  int64_t *plStack_50;
  int64_t *plStack_48;
  int8_t auStack_40 [8];
  uint64_t uStack_38;
  int64_t *plStack_28;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  plStack_50 = (int64_t *)0x0;
  plStack_48 = (int64_t *)0x0;
  plStack_28 = (int64_t *)0x0;
  uStack_38 = 0;
  auStack_40[0] = 0;
  RenderingSystem_MaterialProcessor(&plStack_50,param_1,0);
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  uVar2 = SystemCore_Decoder(&plStack_50,param_2,param_3,param_4,param_5);
  if ((plStack_50 != (int64_t *)0x0) && (plStack_48 != (int64_t *)0x0)) {
    if (cStack_1e != '\0') {
      SystemConfig_Manager();
    }
    SystemSecurityManager(auStack_40);
    if (cStack_20 != '\0') {
      SystemInitializer(plStack_50);
    }
    if (cStack_1f != '\0') {
      SystemInitializer(plStack_50);
    }
    plVar1 = plStack_48;
    plStack_48 = (int64_t *)0x0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  SystemSecurityManager(auStack_40);
  if (plStack_28 != (int64_t *)0x0) {
    (**(code **)(*plStack_28 + 0x38))();
  }
  if (plStack_48 != (int64_t *)0x0) {
    (**(code **)(*plStack_48 + 0x38))();
  }
  if (plStack_50 != (int64_t *)0x0) {
    (**(code **)(*plStack_50 + 0x38))();
  }
  return uVar2;
}



int32_t FUN_1800c11a0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t *plStack_40;
  int64_t *plStack_38;
  int8_t auStack_30 [8];
  uint64_t uStack_28;
  int64_t *plStack_18;
  char cStack_10;
  char cStack_f;
  char cStack_e;
  
  uVar3 = 0xfffffffffffffffe;
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  plStack_40 = (int64_t *)0x0;
  plStack_38 = (int64_t *)0x0;
  plStack_18 = (int64_t *)0x0;
  uStack_28 = 0;
  auStack_30[0] = 0;
  RenderingSystem_MaterialProcessor(&plStack_40,param_1,0,param_4,uVar3);
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  uVar2 = SystemCore_DataSerializer(&plStack_40,param_2);
  if ((plStack_40 != (int64_t *)0x0) && (plStack_38 != (int64_t *)0x0)) {
    if (cStack_e != '\0') {
      SystemConfig_Manager();
    }
    SystemSecurityManager(auStack_30);
    if (cStack_10 != '\0') {
      SystemInitializer(plStack_40);
    }
    if (cStack_f != '\0') {
      SystemInitializer(plStack_40);
    }
    plVar1 = plStack_38;
    plStack_38 = (int64_t *)0x0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  SystemSecurityManager(auStack_30);
  if (plStack_18 != (int64_t *)0x0) {
    (**(code **)(*plStack_18 + 0x38))();
  }
  if (plStack_38 != (int64_t *)0x0) {
    (**(code **)(*plStack_38 + 0x38))();
  }
  if (plStack_40 != (int64_t *)0x0) {
    (**(code **)(*plStack_40 + 0x38))();
  }
  return uVar2;
}






// 函数: void FUN_1800c12e0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800c12e0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plStack_40;
  int64_t *plStack_38;
  int8_t auStack_30 [8];
  uint64_t uStack_28;
  int64_t *plStack_18;
  char cStack_10;
  char cStack_f;
  char cStack_e;
  
  uVar2 = 0xfffffffffffffffe;
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  plStack_40 = (int64_t *)0x0;
  plStack_38 = (int64_t *)0x0;
  plStack_18 = (int64_t *)0x0;
  uStack_28 = 0;
  auStack_30[0] = 0;
  RenderingSystem_MaterialProcessor(&plStack_40,param_1,0,param_4,uVar2);
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  FUN_180237850(&plStack_40,param_2);
  if ((plStack_40 != (int64_t *)0x0) && (plStack_38 != (int64_t *)0x0)) {
    if (cStack_e != '\0') {
      SystemConfig_Manager();
    }
    SystemSecurityManager(auStack_30);
    if (cStack_10 != '\0') {
      SystemInitializer(plStack_40);
    }
    if (cStack_f != '\0') {
      SystemInitializer(plStack_40);
    }
    plVar1 = plStack_38;
    plStack_38 = (int64_t *)0x0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  SystemSecurityManager(auStack_30);
  if (plStack_18 != (int64_t *)0x0) {
    (**(code **)(*plStack_18 + 0x38))();
  }
  if (plStack_38 != (int64_t *)0x0) {
    (**(code **)(*plStack_38 + 0x38))();
  }
  if (plStack_40 != (int64_t *)0x0) {
    (**(code **)(*plStack_40 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800c1420(uint64_t param_1,uint64_t param_2,int64_t param_3,int8_t param_4)
void FUN_1800c1420(uint64_t param_1,uint64_t param_2,int64_t param_3,int8_t param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  int8_t auStack_c8 [32];
  int32_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uVar1 = system_resource_state;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  uStack_a8 = 0;
  puStack_88 = &memory_allocator_3480_ptr;
  puStack_80 = auStack_70;
  uStack_78 = 0;
  auStack_70[0] = 0;
  uStack_98 = param_2;
  if (param_3 != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_3 + lVar2) != '\0');
    uStack_78 = (int32_t)lVar2;
    strcpy_s(auStack_70,0x40);
  }
  SystemCore_GarbageCollector(uVar1,param_2,&puStack_88,param_4);
  uStack_a8 = 1;
  puStack_88 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_c8);
}



int64_t * FUN_1800c1520(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  byte bVar2;
  int64_t *plVar3;
  bool bVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  void *puStack_38;
  byte *pbStack_30;
  int iStack_28;
  int32_t uStack_20;
  
  puVar1 = (uint64_t *)(param_1 + 0x20);
  SystemCore_EncryptionEngine0(&puStack_38,param_3,param_3,param_4,0,0xfffffffffffffffe);
  puVar10 = *(uint64_t **)(param_1 + 0x30);
  puVar8 = puVar1;
  if (puVar10 != (uint64_t *)0x0) {
    do {
      if (iStack_28 == 0) {
        bVar4 = false;
        puVar11 = (uint64_t *)puVar10[1];
      }
      else {
        if (*(int *)(puVar10 + 6) == 0) {
          bVar4 = true;
        }
        else {
          pbVar5 = pbStack_30;
          do {
            uVar6 = (uint)pbVar5[puVar10[5] - (int64_t)pbStack_30];
            iVar7 = *pbVar5 - uVar6;
            if (*pbVar5 != uVar6) break;
            pbVar5 = pbVar5 + 1;
          } while (uVar6 != 0);
          bVar4 = 0 < iVar7;
          if (iVar7 < 1) {
            puVar11 = (uint64_t *)puVar10[1];
            goto LAB_1800c15ba;
          }
        }
        puVar11 = (uint64_t *)*puVar10;
      }
LAB_1800c15ba:
      puVar9 = puVar10;
      if (bVar4) {
        puVar9 = puVar8;
      }
      puVar8 = puVar9;
      puVar10 = puVar11;
    } while (puVar11 != (uint64_t *)0x0);
    if (puVar9 != puVar1) {
      if (*(int *)(puVar9 + 6) == 0) goto LAB_1800c15fa;
      if (iStack_28 != 0) {
        pbVar5 = (byte *)puVar9[5];
        lVar12 = (int64_t)pbStack_30 - (int64_t)pbVar5;
        do {
          bVar2 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar12];
          if (bVar2 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar2 - uVar6) < 1) goto LAB_1800c15fa;
      }
    }
  }
  puVar9 = puVar1;
LAB_1800c15fa:
  puStack_38 = &system_data_buffer_ptr;
  if (pbStack_30 == (byte *)0x0) {
    pbStack_30 = (byte *)0x0;
    uStack_20 = 0;
    puStack_38 = &system_state_ptr;
    if (puVar9 == puVar1) {
      *param_2 = 0;
    }
    else {
      plVar3 = (int64_t *)puVar9[8];
      *param_2 = (int64_t)plVar3;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x28))();
      }
    }
    return param_2;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_1800c1670(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int32_t uVar7;
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  uVar7 = 0;
  puVar4 = (uint64_t *)(system_system_data_config + 0x50);
  puVar5 = *(uint64_t **)(system_system_data_config + 0x60);
  puVar3 = puVar4;
  if (puVar5 != (uint64_t *)0x0) {
    do {
      iVar2 = memcmp(puVar5 + 4,param_3,0x10,param_4,uVar7,uVar8);
      if (iVar2 < 0) {
        puVar6 = (uint64_t *)*puVar5;
      }
      else {
        puVar6 = (uint64_t *)puVar5[1];
        puVar3 = puVar5;
      }
      puVar5 = puVar6;
    } while (puVar6 != (uint64_t *)0x0);
    if ((puVar3 != puVar4) && (iVar2 = memcmp(param_3,puVar3 + 4,0x10), -1 < iVar2))
    goto LAB_1800c1703;
  }
  puVar3 = puVar4;
LAB_1800c1703:
  if (puVar3 == puVar4) {
    *param_2 = 0;
  }
  else {
    plVar1 = (int64_t *)puVar3[6];
    *param_2 = (int64_t)plVar1;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_1800c1750(uint64_t param_1,int64_t *param_2,int param_3)

{
  int64_t *plVar1;
  
  if (-1 < param_3) {
    if ((uint64_t)(int64_t)param_3 <
        (uint64_t)
        (*(int64_t *)(system_system_data_config + 0x88) - *(int64_t *)(system_system_data_config + 0x80) >> 3)) {
      plVar1 = *(int64_t **)(*(int64_t *)(system_system_data_config + 0x80) + (int64_t)param_3 * 8);
      *param_2 = (int64_t)plVar1;
      if (plVar1 == (int64_t *)0x0) {
        return param_2;
      }
      (**(code **)(*plVar1 + 0x28))();
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1800c17c0(void)

{
  uint64_t *puVar1;
  byte bVar2;
  bool bVar3;
  int32_t uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  void *puStack_30;
  byte *pbStack_28;
  int iStack_20;
  
  lVar12 = system_system_data_config;
  puVar1 = (uint64_t *)(system_system_data_config + 0xa0);
  SystemCore_EncryptionEngine0(&puStack_30);
  puVar10 = *(uint64_t **)(lVar12 + 0xb0);
  puVar8 = puVar1;
  if (puVar10 != (uint64_t *)0x0) {
    do {
      if (iStack_20 == 0) {
        bVar3 = false;
        puVar11 = (uint64_t *)puVar10[1];
      }
      else {
        if (*(int *)(puVar10 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar5 = pbStack_28;
          do {
            uVar6 = (uint)pbVar5[puVar10[5] - (int64_t)pbStack_28];
            iVar7 = *pbVar5 - uVar6;
            if (*pbVar5 != uVar6) break;
            pbVar5 = pbVar5 + 1;
          } while (uVar6 != 0);
          bVar3 = 0 < iVar7;
          if (iVar7 < 1) {
            puVar11 = (uint64_t *)puVar10[1];
            goto LAB_1800c1857;
          }
        }
        puVar11 = (uint64_t *)*puVar10;
      }
LAB_1800c1857:
      puVar9 = puVar10;
      if (bVar3) {
        puVar9 = puVar8;
      }
      puVar8 = puVar9;
      puVar10 = puVar11;
    } while (puVar11 != (uint64_t *)0x0);
    if (puVar9 != puVar1) {
      if (*(int *)(puVar9 + 6) == 0) goto LAB_1800c189a;
      if (iStack_20 != 0) {
        pbVar5 = (byte *)puVar9[5];
        lVar12 = (int64_t)pbStack_28 - (int64_t)pbVar5;
        do {
          bVar2 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar12];
          if (bVar2 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar2 - uVar6) < 1) goto LAB_1800c189a;
      }
    }
  }
  puVar9 = puVar1;
LAB_1800c189a:
  puStack_30 = &system_data_buffer_ptr;
  if (pbStack_28 == (byte *)0x0) {
    uVar4 = 0xffffffff;
    if (puVar9 != puVar1) {
      uVar4 = *(int32_t *)(puVar9 + 8);
    }
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



uint64_t * FUN_1800c18f0(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  puVar1 = param_1 + 4;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 9) = 3;
  *puVar1 = puVar1;
  param_1[5] = puVar1;
  param_1[6] = 0;
  *(int8_t *)(param_1 + 7) = 0;
  param_1[8] = 0;
  puVar1 = param_1 + 10;
  param_1[0xd] = 0;
  *(int32_t *)(param_1 + 0xf) = 3;
  *puVar1 = puVar1;
  param_1[0xb] = puVar1;
  param_1[0xc] = 0;
  *(int8_t *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(int32_t *)(param_1 + 0x13) = 3;
  puVar1 = param_1 + 0x14;
  param_1[0x17] = 0;
  *(int32_t *)(param_1 + 0x19) = 3;
  *puVar1 = puVar1;
  param_1[0x15] = puVar1;
  param_1[0x16] = 0;
  *(int8_t *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  return param_1;
}






// 函数: void FUN_1800c19c0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800c19c0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800c2ca0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800c19f0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800c19f0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800c2ff0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800c1a20(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800c1a20(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800c2ca0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800c1a50(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800c1a50(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800c2ff0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




