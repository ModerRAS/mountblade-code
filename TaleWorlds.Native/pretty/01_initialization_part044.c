#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part044.c - 11 个函数

// 函数: void FUN_180073730(uint64_t param_1,uint64_t param_2)
void FUN_180073730(uint64_t param_1,uint64_t param_2)

{
  void *puVar1;
  char cVar2;
  int32_t auStackX_18 [4];
  void *puStack_30;
  int64_t lStack_28;
  
  FUN_1800623b0(system_message_context,0,0x100000000,1,&unknown_var_4968_ptr,param_2,0xfffffffffffffffe);
  if (system_debug_flag == '\0') {
    auStackX_18[0] = 0xff00ff00;
    CoreMemoryPoolValidator(&puStack_30,param_2);
    puVar1 = *(void **)*init_system_data_config;
    if (puVar1 == &unknown_var_424_ptr) {
      cVar2 = *(int *)(init_system_data_config + 0xc40) != 0;
    }
    else {
      cVar2 = (**(code **)(puVar1 + 0x50))((uint64_t *)*init_system_data_config);
    }
    if (cVar2 == '\0') {
      (**(code **)(*(int64_t *)init_system_data_config[1] + 0x18))
                ((int64_t *)init_system_data_config[1],&puStack_30,auStackX_18);
    }
    puStack_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180073830(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_180073830(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  void *puVar1;
  char cVar2;
  int32_t auStackX_20 [2];
  void *puStack_30;
  int64_t lStack_28;
  
  FUN_1800623b0(system_message_context,0,0x100000000,0xc,&unknown_var_5000_ptr,param_3,0xfffffffffffffffe);
  if (system_debug_flag == '\0') {
    auStackX_20[0] = param_2;
    CoreMemoryPoolValidator(&puStack_30,param_3);
    puVar1 = *(void **)*init_system_data_config;
    if (puVar1 == &unknown_var_424_ptr) {
      cVar2 = *(int *)(init_system_data_config + 0xc40) != 0;
    }
    else {
      cVar2 = (**(code **)(puVar1 + 0x50))((uint64_t *)*init_system_data_config);
    }
    if (cVar2 == '\0') {
      (**(code **)(*(int64_t *)init_system_data_config[1] + 0x18))
                ((int64_t *)init_system_data_config[1],&puStack_30,auStackX_20);
    }
    puStack_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  return;
}





// 函数: void FUN_180073930(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180073930(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int16_t uStack_38;
  uint64_t uStack_36;
  uint64_t uStack_2e;
  int16_t uStack_26;
  uint64_t uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  puStack_88 = &system_data_buffer_ptr;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 3;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_26 = 0;
  uStack_36 = 0;
  uStack_2e = 0;
  FUN_180074090(&puStack_88,param_1,param_3,param_4,&uStack_68);
  FUN_180073ad0(&puStack_88,param_3);
  FUN_1800739f0(&puStack_88);
  return;
}





// 函数: void FUN_1800739f0(uint64_t *param_1)
void FUN_1800739f0(uint64_t *param_1)

{
  if (*(int64_t *)((int64_t)param_1 + 0x52) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(uint64_t *)((int64_t)param_1 + 0x52) = 0;
  if (*(int64_t *)((int64_t)param_1 + 0x5a) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(uint64_t *)((int64_t)param_1 + 0x5a) = 0;
  if (param_1[8] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[8] = 0;
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[9] = 0;
  FUN_180074a80();
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}





// 函数: void FUN_180073ab0(int64_t *param_1)
void FUN_180073ab0(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  plVar1 = (int64_t *)param_1[1];
  plVar2 = (int64_t *)*param_1;
  while( true ) {
    if (plVar2 == plVar1) {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      return;
    }
    if (*(int64_t *)((int64_t)plVar2 + 0x12) != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    *(uint64_t *)((int64_t)plVar2 + 0x12) = 0;
    if (*(int64_t *)((int64_t)plVar2 + 0x1a) != 0) break;
    *(uint64_t *)((int64_t)plVar2 + 0x1a) = 0;
    if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    *plVar2 = 0;
    if (plVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plVar2[1] = 0;
    plVar2 = (int64_t *)((int64_t)plVar2 + 0x24);
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}





// 函数: void FUN_180073ad0(int64_t param_1,int64_t *param_2)
void FUN_180073ad0(int64_t param_1,int64_t *param_2)

{
  ushort uVar1;
  uint64_t uVar2;
  int *piVar3;
  int32_t *puVar4;
  uint *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  uint64_t uVar9;
  int64_t lVar10;
  
  System_QueueProcessor(param_2,param_1);
  lVar6 = *(int64_t *)(param_1 + 0x28) - *(int64_t *)(param_1 + 0x20);
  piVar3 = (int *)param_2[1];
  lVar6 = lVar6 / 0x12 + (lVar6 >> 0x3f);
  iVar8 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
  if ((uint64_t)((*param_2 - (int64_t)piVar3) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar3 + (4 - *param_2));
    piVar3 = (int *)param_2[1];
  }
  *piVar3 = iVar8;
  puVar4 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar4;
  lVar6 = (int64_t)iVar8;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      lVar7 = *(int64_t *)(param_1 + 0x20) + lVar10;
      if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = 0;
      param_2[1] = param_2[1] + 4;
      puVar4 = (int32_t *)param_2[1];
      if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = 0x10;
      param_2[1] = param_2[1] + 4;
      puVar5 = (uint *)param_2[1];
      uVar1 = *(ushort *)(lVar7 + 0x10);
      if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
        puVar5 = (uint *)param_2[1];
      }
      *puVar5 = (uint)uVar1;
      puVar4 = (int32_t *)(param_2[1] + 4);
      param_2[1] = (int64_t)puVar4;
      if (*(ushort *)(lVar7 + 0x10) != 0) {
        uVar2 = *(uint64_t *)(lVar7 + 8);
        uVar9 = (uint64_t)*(ushort *)(lVar7 + 0x10) * 4;
        if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) <= uVar9) {
          System_BufferManager(param_2,(int64_t)puVar4 + (uVar9 - *param_2));
          puVar4 = (int32_t *)param_2[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar4,uVar2,uVar9);
      }
      lVar7 = *(int64_t *)(param_1 + 0x20) + lVar10;
      if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = 0;
      param_2[1] = param_2[1] + 4;
      puVar4 = (int32_t *)param_2[1];
      if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = 0x10;
      param_2[1] = param_2[1] + 4;
      puVar5 = (uint *)param_2[1];
      uVar1 = *(ushort *)(lVar7 + 0x22);
      if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
        puVar5 = (uint *)param_2[1];
      }
      *puVar5 = (uint)uVar1;
      puVar4 = (int32_t *)(param_2[1] + 4);
      param_2[1] = (int64_t)puVar4;
      if (*(ushort *)(lVar7 + 0x22) != 0) {
        uVar2 = *(uint64_t *)(lVar7 + 0x1a);
        uVar9 = (uint64_t)*(ushort *)(lVar7 + 0x22) * 4;
        if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) <= uVar9) {
          System_BufferManager(param_2,(int64_t)puVar4 + (uVar9 - *param_2));
          puVar4 = (int32_t *)param_2[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar4,uVar2,uVar9);
      }
      lVar10 = lVar10 + 0x24;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = 0;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = 0x10;
  param_2[1] = param_2[1] + 4;
  puVar5 = (uint *)param_2[1];
  uVar1 = *(ushort *)(param_1 + 0x50);
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
    puVar5 = (uint *)param_2[1];
  }
  *puVar5 = (uint)uVar1;
  puVar4 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar4;
  if (*(ushort *)(param_1 + 0x50) != 0) {
    uVar2 = *(uint64_t *)(param_1 + 0x48);
    uVar9 = (uint64_t)*(ushort *)(param_1 + 0x50) * 4;
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) <= uVar9) {
      System_BufferManager(param_2,(int64_t)puVar4 + (uVar9 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar4,uVar2,uVar9);
  }
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = 0;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = 0x10;
  param_2[1] = param_2[1] + 4;
  puVar5 = (uint *)param_2[1];
  uVar1 = *(ushort *)(param_1 + 0x62);
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
    puVar5 = (uint *)param_2[1];
  }
  *puVar5 = (uint)uVar1;
  lVar6 = param_2[1] + 4;
  param_2[1] = lVar6;
  if (*(ushort *)(param_1 + 0x62) == 0) {
    return;
  }
  uVar2 = *(uint64_t *)(param_1 + 0x5a);
  uVar9 = (uint64_t)*(ushort *)(param_1 + 0x62) * 4;
  if ((uint64_t)((*param_2 - lVar6) + param_2[2]) <= uVar9) {
    System_BufferManager(param_2,uVar9 + (lVar6 - *param_2));
    lVar6 = param_2[1];
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar6,uVar2,uVar9);
}





// 函数: void FUN_180073adc(int64_t param_1)
void FUN_180073adc(int64_t param_1)

{
  ushort uVar1;
  uint64_t uVar2;
  int *piVar3;
  int32_t *puVar4;
  uint *puVar5;
  int64_t lVar6;
  int64_t *unaff_RBX;
  int64_t lVar7;
  int iVar8;
  uint64_t uVar9;
  int64_t lVar10;
  
  System_QueueProcessor();
  lVar6 = *(int64_t *)(param_1 + 0x28) - *(int64_t *)(param_1 + 0x20);
  piVar3 = (int *)unaff_RBX[1];
  lVar6 = lVar6 / 0x12 + (lVar6 >> 0x3f);
  iVar8 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar3) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar3 = (int *)unaff_RBX[1];
  }
  *piVar3 = iVar8;
  puVar4 = (int32_t *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (int64_t)puVar4;
  lVar6 = (int64_t)iVar8;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      lVar7 = *(int64_t *)(param_1 + 0x20) + lVar10;
      if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = 0;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar4 = (int32_t *)unaff_RBX[1];
      if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = 0x10;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar5 = (uint *)unaff_RBX[1];
      uVar1 = *(ushort *)(lVar7 + 0x10);
      if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (uint *)unaff_RBX[1];
      }
      *puVar5 = (uint)uVar1;
      puVar4 = (int32_t *)(unaff_RBX[1] + 4);
      unaff_RBX[1] = (int64_t)puVar4;
      if (*(ushort *)(lVar7 + 0x10) != 0) {
        uVar2 = *(uint64_t *)(lVar7 + 8);
        uVar9 = (uint64_t)*(ushort *)(lVar7 + 0x10) * 4;
        if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) <= uVar9) {
          System_BufferManager();
          puVar4 = (int32_t *)unaff_RBX[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar4,uVar2,uVar9);
      }
      lVar7 = *(int64_t *)(param_1 + 0x20) + lVar10;
      if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = 0;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar4 = (int32_t *)unaff_RBX[1];
      if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = 0x10;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar5 = (uint *)unaff_RBX[1];
      uVar1 = *(ushort *)(lVar7 + 0x22);
      if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar5 = (uint *)unaff_RBX[1];
      }
      *puVar5 = (uint)uVar1;
      puVar4 = (int32_t *)(unaff_RBX[1] + 4);
      unaff_RBX[1] = (int64_t)puVar4;
      if (*(ushort *)(lVar7 + 0x22) != 0) {
        uVar2 = *(uint64_t *)(lVar7 + 0x1a);
        uVar9 = (uint64_t)*(ushort *)(lVar7 + 0x22) * 4;
        if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) <= uVar9) {
          System_BufferManager();
          puVar4 = (int32_t *)unaff_RBX[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar4,uVar2,uVar9);
      }
      lVar10 = lVar10 + 0x24;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar5 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(param_1 + 0x50);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar5 = (uint *)unaff_RBX[1];
  }
  *puVar5 = (uint)uVar1;
  puVar4 = (int32_t *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (int64_t)puVar4;
  if (*(ushort *)(param_1 + 0x50) != 0) {
    uVar2 = *(uint64_t *)(param_1 + 0x48);
    uVar9 = (uint64_t)*(ushort *)(param_1 + 0x50) * 4;
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) <= uVar9) {
      System_BufferManager();
      puVar4 = (int32_t *)unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar4,uVar2,uVar9);
  }
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar5 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(param_1 + 0x62);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar5 = (uint *)unaff_RBX[1];
  }
  *puVar5 = (uint)uVar1;
  lVar6 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar6;
  if (*(ushort *)(param_1 + 0x62) == 0) {
    return;
  }
  uVar2 = *(uint64_t *)(param_1 + 0x5a);
  uVar9 = (uint64_t)*(ushort *)(param_1 + 0x62) * 4;
  if ((uint64_t)((*unaff_RBX - lVar6) + unaff_RBX[2]) <= uVar9) {
    System_BufferManager();
    lVar6 = unaff_RBX[1];
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar6,uVar2,uVar9);
}





// 函数: void FUN_180073b64(uint *param_1)
void FUN_180073b64(uint *param_1)

{
  ushort uVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  uint *puVar4;
  int64_t *unaff_RBX;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t unaff_R12;
  uint unaff_R13D;
  int64_t unaff_R15;
  
  uVar6 = (uint64_t)unaff_R13D;
  do {
    lVar5 = *(int64_t *)(unaff_R15 + 0x20) + uVar6;
    if ((uint64_t)((*unaff_RBX - (int64_t)param_1) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      param_1 = (uint *)unaff_RBX[1];
    }
    *param_1 = unaff_R13D;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar3 = (int32_t *)unaff_RBX[1];
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      puVar3 = (int32_t *)unaff_RBX[1];
    }
    *puVar3 = 0x10;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar4 = (uint *)unaff_RBX[1];
    uVar1 = *(ushort *)(lVar5 + 0x10);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      puVar4 = (uint *)unaff_RBX[1];
    }
    *puVar4 = (uint)uVar1;
    puVar4 = (uint *)(unaff_RBX[1] + 4);
    unaff_RBX[1] = (int64_t)puVar4;
    if (*(ushort *)(lVar5 + 0x10) != 0) {
      uVar2 = *(uint64_t *)(lVar5 + 8);
      uVar6 = (uint64_t)*(ushort *)(lVar5 + 0x10) * 4;
      if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) <= uVar6) {
        System_BufferManager();
        puVar4 = (uint *)unaff_RBX[1];
      }
                    // WARNING: Subroutine does not return
      memcpy(puVar4,uVar2,uVar6);
    }
    lVar5 = *(int64_t *)(unaff_R15 + 0x20) + uVar6;
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      puVar4 = (uint *)unaff_RBX[1];
    }
    *puVar4 = unaff_R13D;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar3 = (int32_t *)unaff_RBX[1];
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      puVar3 = (int32_t *)unaff_RBX[1];
    }
    *puVar3 = 0x10;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar4 = (uint *)unaff_RBX[1];
    uVar1 = *(ushort *)(lVar5 + 0x22);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      puVar4 = (uint *)unaff_RBX[1];
    }
    *puVar4 = (uint)uVar1;
    param_1 = (uint *)(unaff_RBX[1] + 4);
    unaff_RBX[1] = (int64_t)param_1;
    if (*(ushort *)(lVar5 + 0x22) != 0) {
      uVar2 = *(uint64_t *)(lVar5 + 0x1a);
      uVar6 = (uint64_t)*(ushort *)(lVar5 + 0x22) * 4;
      if ((uint64_t)((*unaff_RBX - (int64_t)param_1) + unaff_RBX[2]) <= uVar6) {
        System_BufferManager();
        param_1 = (uint *)unaff_RBX[1];
      }
                    // WARNING: Subroutine does not return
      memcpy(param_1,uVar2,uVar6);
    }
    uVar6 = uVar6 + 0x24;
    unaff_R12 = unaff_R12 + -1;
  } while (unaff_R12 != 0);
  if ((uint64_t)((*unaff_RBX - (int64_t)param_1) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    param_1 = (uint *)unaff_RBX[1];
  }
  *param_1 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x50);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  puVar4 = (uint *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (int64_t)puVar4;
  if (*(ushort *)(unaff_R15 + 0x50) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x48);
    uVar6 = (uint64_t)*(ushort *)(unaff_R15 + 0x50) * 4;
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) <= uVar6) {
      System_BufferManager();
      puVar4 = (uint *)unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar4,uVar2,uVar6);
  }
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x62);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  lVar5 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar5;
  if (*(ushort *)(unaff_R15 + 0x62) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x5a);
    uVar6 = (uint64_t)*(ushort *)(unaff_R15 + 0x62) * 4;
    if ((uint64_t)((*unaff_RBX - lVar5) + unaff_RBX[2]) <= uVar6) {
      System_BufferManager();
      lVar5 = unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar5,uVar2,uVar6);
  }
  return;
}





// 函数: void FUN_180073e0b(int32_t *param_1)
void FUN_180073e0b(int32_t *param_1)

{
  ushort uVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  uint *puVar4;
  int64_t lVar5;
  int64_t *unaff_RBX;
  uint64_t uVar6;
  int32_t unaff_R13D;
  int64_t unaff_R15;
  
  if ((uint64_t)((*unaff_RBX - (int64_t)param_1) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    param_1 = (int32_t *)unaff_RBX[1];
  }
  *param_1 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x50);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  puVar3 = (int32_t *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (int64_t)puVar3;
  if (*(ushort *)(unaff_R15 + 0x50) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x48);
    uVar6 = (uint64_t)*(ushort *)(unaff_R15 + 0x50) * 4;
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) <= uVar6) {
      System_BufferManager();
      puVar3 = (int32_t *)unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar3,uVar2,uVar6);
  }
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x62);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  lVar5 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar5;
  if (*(ushort *)(unaff_R15 + 0x62) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x5a);
    uVar6 = (uint64_t)*(ushort *)(unaff_R15 + 0x62) * 4;
    if ((uint64_t)((*unaff_RBX - lVar5) + unaff_RBX[2]) <= uVar6) {
      System_BufferManager();
      lVar5 = unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar5,uVar2,uVar6);
  }
  return;
}





// 函数: void FUN_180073e23(void)
void FUN_180073e23(void)

{
  ushort uVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  uint *puVar4;
  int64_t lVar5;
  int64_t *unaff_RBX;
  uint64_t uVar6;
  int32_t unaff_R13D;
  int64_t unaff_R15;
  
  System_BufferManager();
  *(int32_t *)unaff_RBX[1] = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x50);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  puVar3 = (int32_t *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (int64_t)puVar3;
  if (*(ushort *)(unaff_R15 + 0x50) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x48);
    uVar6 = (uint64_t)*(ushort *)(unaff_R15 + 0x50) * 4;
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) <= uVar6) {
      System_BufferManager();
      puVar3 = (int32_t *)unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar3,uVar2,uVar6);
  }
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x62);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  lVar5 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar5;
  if (*(ushort *)(unaff_R15 + 0x62) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x5a);
    uVar6 = (uint64_t)*(ushort *)(unaff_R15 + 0x62) * 4;
    if ((uint64_t)((*unaff_RBX - lVar5) + unaff_RBX[2]) <= uVar6) {
      System_BufferManager();
      lVar5 = unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar5,uVar2,uVar6);
  }
  return;
}





// 函数: void FUN_180073f90(void)
void FUN_180073f90(void)

{
  ushort uVar1;
  uint64_t uVar2;
  uint *puVar3;
  int64_t lVar4;
  int64_t *unaff_RBX;
  uint64_t uVar5;
  int64_t unaff_R15;
  
  System_BufferManager();
  *(int32_t *)unaff_RBX[1] = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x62);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar3 = (uint *)unaff_RBX[1];
  }
  *puVar3 = (uint)uVar1;
  lVar4 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar4;
  if (*(ushort *)(unaff_R15 + 0x62) != 0) {
    uVar2 = *(uint64_t *)(unaff_R15 + 0x5a);
    uVar5 = (uint64_t)*(ushort *)(unaff_R15 + 0x62) * 4;
    if ((uint64_t)((*unaff_RBX - lVar4) + unaff_RBX[2]) <= uVar5) {
      System_BufferManager();
      lVar4 = unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar4,uVar2,uVar5);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



