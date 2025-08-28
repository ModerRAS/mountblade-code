#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part092.c - 4 个函数

// 函数: void FUN_1805fd350(uint64_t *param_1)
void FUN_1805fd350(uint64_t *param_1)

{
  param_1[0x10] = &system_data_buffer_ptr;
  if (param_1[0x11] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x13) = 0;
  param_1[0x10] = &system_state_ptr;
  param_1[0xc] = &system_data_buffer_ptr;
  if (param_1[0xd] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xd] = 0;
  *(int32_t *)(param_1 + 0xf) = 0;
  param_1[0xc] = &system_state_ptr;
  param_1[8] = &system_data_buffer_ptr;
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[9] = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  param_1[8] = &system_state_ptr;
  param_1[4] = &system_data_buffer_ptr;
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[5] = 0;
  *(int32_t *)(param_1 + 7) = 0;
  param_1[4] = &system_state_ptr;
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805fd490(int32_t *param_1,int64_t param_2)
void FUN_1805fd490(int32_t *param_1,int64_t param_2)

{
  int iVar1;
  code *pcVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint uVar6;
  uint uVar7;
  int32_t *puVar8;
  void *puStack_b8;
  int32_t *puStack_b0;
  uint uStack_a8;
  uint64_t uStack_a0;
  int32_t uStack_98;
  void *puStack_90;
  int32_t *puStack_88;
  uint uStack_80;
  uint64_t uStack_78;
  void *puStack_70;
  int32_t *puStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  int32_t *puStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uStack_98 = 0;
  puStack_50 = &system_data_buffer_ptr;
  uStack_38 = 0;
  puStack_48 = (int32_t *)0x0;
  uStack_40 = 0;
  puVar8 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x11,0x13);
  *(int8_t *)puVar8 = 0;
  puStack_48 = puVar8;
  uVar5 = CoreEngineSystemCleanup(puVar8);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar5);
  *puVar8 = 0x6e657665;
  puVar8[1] = 0x6d2f3a74;
  puVar8[2] = 0x612f7061;
  puVar8[3] = 0x2f796d72;
  *(int8_t *)(puVar8 + 4) = 0;
  uStack_40 = 0x10;
  pcVar2 = *(code **)(*system_system_data_memory + 0xd0);
  puStack_b8 = &system_data_buffer_ptr;
  uStack_a0 = 0;
  puStack_b0 = (int32_t *)0x0;
  uStack_a8 = 0;
  uStack_98 = 1;
  puStack_b0 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x11,0x13);
  *(int8_t *)puStack_b0 = 0;
  uVar6 = CoreEngineSystemCleanup(puStack_b0);
  uVar5 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  *puStack_b0 = *puVar8;
  puStack_b0[1] = uVar5;
  puStack_b0[2] = uVar3;
  puStack_b0[3] = uVar4;
  uStack_a8 = 0x10;
  if (puStack_b0 != (int32_t *)0x0) {
    *(int8_t *)(puStack_b0 + 4) = 0;
  }
  uStack_a0 = (uint64_t)uVar6;
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 < 1) {
    uVar5 = (*pcVar2)(system_system_data_memory,&puStack_b8);
    *param_1 = uVar5;
    uStack_98 = 0;
    puStack_b8 = &system_data_buffer_ptr;
    if (puStack_b0 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puStack_b0 = (int32_t *)0x0;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    puStack_b8 = &system_state_ptr;
    pcVar2 = *(code **)(*system_system_data_memory + 0xd0);
    puStack_90 = &system_data_buffer_ptr;
    uStack_78 = 0;
    puStack_88 = (int32_t *)0x0;
    uStack_80 = 0;
    uStack_98 = 2;
    puStack_88 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x11,0x13);
    *(int8_t *)puStack_88 = 0;
    uVar6 = CoreEngineSystemCleanup(puStack_88);
    uVar5 = puVar8[1];
    uVar3 = puVar8[2];
    uVar4 = puVar8[3];
    *puStack_88 = *puVar8;
    puStack_88[1] = uVar5;
    puStack_88[2] = uVar3;
    puStack_88[3] = uVar4;
    uStack_80 = 0x10;
    if (puStack_88 != (int32_t *)0x0) {
      *(int8_t *)(puStack_88 + 4) = 0;
    }
    uStack_78 = (uint64_t)uVar6;
    iVar1 = *(int *)(param_2 + 0x30);
    if (iVar1 < 1) {
      uVar5 = (*pcVar2)(system_system_data_memory,&puStack_90);
      param_1[1] = uVar5;
      uStack_98 = 0;
      puStack_90 = &system_data_buffer_ptr;
      if (puStack_88 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      puStack_88 = (int32_t *)0x0;
      uStack_78 = uStack_78 & 0xffffffff00000000;
      puStack_90 = &system_state_ptr;
      pcVar2 = *(code **)(*system_system_data_memory + 0xd0);
      puStack_b8 = &system_data_buffer_ptr;
      uStack_a0 = 0;
      puStack_b0 = (int32_t *)0x0;
      uStack_a8 = 0;
      uStack_98 = 4;
      puStack_b0 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x11,0x13);
      *(int8_t *)puStack_b0 = 0;
      uVar6 = CoreEngineSystemCleanup(puStack_b0);
      uVar5 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      *puStack_b0 = *puVar8;
      puStack_b0[1] = uVar5;
      puStack_b0[2] = uVar3;
      puStack_b0[3] = uVar4;
      uStack_a8 = 0x10;
      if (puStack_b0 != (int32_t *)0x0) {
        *(int8_t *)(puStack_b0 + 4) = 0;
      }
      uStack_a0 = (uint64_t)uVar6;
      iVar1 = *(int *)(param_2 + 0x50);
      if (iVar1 < 1) {
        uVar5 = (*pcVar2)(system_system_data_memory,&puStack_b8);
        param_1[2] = uVar5;
        uStack_98 = 0;
        puStack_b8 = &system_data_buffer_ptr;
        if (puStack_b0 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        puStack_b0 = (int32_t *)0x0;
        uStack_a0 = uStack_a0 & 0xffffffff00000000;
        puStack_b8 = &system_state_ptr;
        pcVar2 = *(code **)(*system_system_data_memory + 0xd0);
        puStack_90 = &system_data_buffer_ptr;
        uStack_78 = 0;
        puStack_88 = (int32_t *)0x0;
        uStack_80 = 0;
        uStack_98 = 8;
        puStack_88 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x11,0x13);
        *(int8_t *)puStack_88 = 0;
        uVar6 = CoreEngineSystemCleanup(puStack_88);
        uVar5 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        *puStack_88 = *puVar8;
        puStack_88[1] = uVar5;
        puStack_88[2] = uVar3;
        puStack_88[3] = uVar4;
        uStack_80 = 0x10;
        if (puStack_88 != (int32_t *)0x0) {
          *(int8_t *)(puStack_88 + 4) = 0;
        }
        uStack_78 = (uint64_t)uVar6;
        iVar1 = *(int *)(param_2 + 0x70);
        if (iVar1 < 1) {
          uVar5 = (*pcVar2)(system_system_data_memory,&puStack_90);
          param_1[3] = uVar5;
          uStack_98 = 0;
          puStack_90 = &system_data_buffer_ptr;
          if (puStack_88 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          puStack_88 = (int32_t *)0x0;
          uStack_78 = uStack_78 & 0xffffffff00000000;
          puStack_90 = &system_state_ptr;
          puStack_70 = &system_data_buffer_ptr;
          uStack_58 = 0;
          puStack_68 = (int32_t *)0x0;
          uStack_60 = 0;
          puVar8 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13);
          *(int8_t *)puVar8 = 0;
          puStack_68 = puVar8;
          uVar5 = CoreEngineSystemCleanup(puVar8);
          uStack_58 = CONCAT44(uStack_58._4_4_,uVar5);
          *puVar8 = 0x6e657665;
          puVar8[1] = 0x6d2f3a74;
          puVar8[2] = 0x612f7061;
          puVar8[3] = 0x6569626d;
          *(uint64_t *)(puVar8 + 4) = 0x2f6465622f746e;
          uStack_60 = 0x17;
          pcVar2 = *(code **)(*system_system_data_memory + 0xd0);
          puStack_b8 = &system_data_buffer_ptr;
          uStack_a0 = 0;
          puStack_b0 = (int32_t *)0x0;
          uStack_a8 = 0;
          uStack_98 = 0x10;
          puStack_b0 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13);
          *(int8_t *)puStack_b0 = 0;
          uVar6 = CoreEngineSystemCleanup(puStack_b0);
          uVar5 = puVar8[1];
          uVar3 = puVar8[2];
          uVar4 = puVar8[3];
          *puStack_b0 = *puVar8;
          puStack_b0[1] = uVar5;
          puStack_b0[2] = uVar3;
          puStack_b0[3] = uVar4;
          puStack_b0[4] = puVar8[4];
          *(int16_t *)(puStack_b0 + 5) = *(int16_t *)(puVar8 + 5);
          *(int8_t *)((int64_t)puStack_b0 + 0x16) = *(int8_t *)((int64_t)puVar8 + 0x16);
          uStack_a8 = 0x17;
          if (puStack_b0 != (int32_t *)0x0) {
            *(int8_t *)((int64_t)puStack_b0 + 0x17) = 0;
          }
          uStack_a0 = (uint64_t)uVar6;
          iVar1 = *(int *)(param_2 + 0x90);
          if (iVar1 < 1) {
            uVar5 = (*pcVar2)(system_system_data_memory,&puStack_b8);
            param_1[4] = uVar5;
            uStack_98 = 0;
            puStack_b8 = &system_data_buffer_ptr;
            if (puStack_b0 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            puStack_b0 = (int32_t *)0x0;
            uStack_a0 = uStack_a0 & 0xffffffff00000000;
            puStack_b8 = &system_state_ptr;
            puStack_70 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(puVar8);
          }
          if (iVar1 != -0x17) {
            uVar7 = iVar1 + 0x18;
            if (puStack_b0 == (int32_t *)0x0) {
              if ((int)uVar7 < 0x10) {
                uVar7 = 0x10;
              }
              puStack_b0 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
              *(int8_t *)puStack_b0 = 0;
            }
            else {
              if (uVar7 <= uVar6) goto LAB_1805fdbd2;
              puStack_b0 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_b0,uVar7,0x10,0x13);
            }
            uVar5 = CoreEngineSystemCleanup(puStack_b0);
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar5);
          }
LAB_1805fdbd2:
                    // WARNING: Subroutine does not return
          memcpy((int8_t *)((uint64_t)uStack_a8 + (int64_t)puStack_b0),
                 *(uint64_t *)(param_2 + 0x88),(int64_t)(*(int *)(param_2 + 0x90) + 1));
        }
        if (iVar1 != -0x10) {
          uVar7 = iVar1 + 0x11;
          if (puStack_88 == (int32_t *)0x0) {
            if ((int)uVar7 < 0x10) {
              uVar7 = 0x10;
            }
            puStack_88 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
            *(int8_t *)puStack_88 = 0;
          }
          else {
            if (uVar7 <= uVar6) goto LAB_1805fd9f0;
            puStack_88 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_88,uVar7,0x10,0x13);
          }
          uVar5 = CoreEngineSystemCleanup(puStack_88);
          uStack_78 = CONCAT44(uStack_78._4_4_,uVar5);
        }
LAB_1805fd9f0:
                    // WARNING: Subroutine does not return
        memcpy((int8_t *)((uint64_t)uStack_80 + (int64_t)puStack_88),
               *(uint64_t *)(param_2 + 0x68),(int64_t)(*(int *)(param_2 + 0x70) + 1));
      }
      if (iVar1 != -0x10) {
        uVar7 = iVar1 + 0x11;
        if (puStack_b0 == (int32_t *)0x0) {
          if ((int)uVar7 < 0x10) {
            uVar7 = 0x10;
          }
          puStack_b0 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
          *(int8_t *)puStack_b0 = 0;
        }
        else {
          if (uVar7 <= uVar6) goto LAB_1805fd8aa;
          puStack_b0 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_b0,uVar7,0x10,0x13);
        }
        uVar5 = CoreEngineSystemCleanup(puStack_b0);
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar5);
      }
LAB_1805fd8aa:
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((uint64_t)uStack_a8 + (int64_t)puStack_b0),
             *(uint64_t *)(param_2 + 0x48),(int64_t)(*(int *)(param_2 + 0x50) + 1));
    }
    if (iVar1 != -0x10) {
      uVar7 = iVar1 + 0x11;
      if (puStack_88 == (int32_t *)0x0) {
        if ((int)uVar7 < 0x10) {
          uVar7 = 0x10;
        }
        puStack_88 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
        *(int8_t *)puStack_88 = 0;
      }
      else {
        if (uVar7 <= uVar6) goto LAB_1805fd764;
        puStack_88 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_88,uVar7,0x10,0x13);
      }
      uVar5 = CoreEngineSystemCleanup(puStack_88);
      uStack_78 = CONCAT44(uStack_78._4_4_,uVar5);
    }
LAB_1805fd764:
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((uint64_t)uStack_80 + (int64_t)puStack_88),
           *(uint64_t *)(param_2 + 0x28),(int64_t)(*(int *)(param_2 + 0x30) + 1));
  }
  if (iVar1 != -0x10) {
    uVar7 = iVar1 + 0x11;
    if (puStack_b0 == (int32_t *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      puStack_b0 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
      *(int8_t *)puStack_b0 = 0;
    }
    else {
      if (uVar7 <= uVar6) goto LAB_1805fd61f;
      puStack_b0 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_b0,uVar7,0x10,0x13);
    }
    uVar5 = CoreEngineSystemCleanup(puStack_b0);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar5);
  }
LAB_1805fd61f:
                    // WARNING: Subroutine does not return
  memcpy((int8_t *)((uint64_t)uStack_a8 + (int64_t)puStack_b0),*(uint64_t *)(param_2 + 8),
         (int64_t)(*(int *)(param_2 + 0x10) + 1));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1805fdc90(uint64_t param_1,int64_t *param_2)

{
  char cVar1;
  int iVar2;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  int iStack_34;
  int iStack_30;
  int32_t uStack_2c;
  uint64_t uStack_28;
  int32_t uStack_20;
  int8_t auStack_1c [4];
  int8_t auStack_18 [4];
  int8_t auStack_14 [4];
  int8_t uStack_10;
  
  iVar2 = *(int *)(system_system_memory + 0x52ed94) << 4;
  if ((int)((param_2[1] - *param_2) / 0xe0) < iVar2) {
    FUN_18056ef80(param_2,iVar2);
  }
  uStack_10 = system_status_flag == 4;
  uStack_58 = 0x200000000;
  uStack_50 = 0x200000000;
  uStack_38 = 2;
  iStack_34 = 0;
  iStack_30 = 3;
  uStack_2c = 2;
  uStack_48 = 0x200000000;
  uStack_40 = 0x300000000;
  uStack_28 = 0x100000000;
  uStack_20 = 1;
  cVar1 = SystemSynchronizationProcessor(param_1,&uStack_58,&unknown_var_7224_ptr);
  if (((((cVar1 != '\0') &&
        (cVar1 = SystemSynchronizationProcessor(param_1,(int64_t)&uStack_58 + 4,&unknown_var_7272_ptr), cVar1 != '\0')) &&
       (cVar1 = SystemSynchronizationProcessor(param_1,&uStack_50,&unknown_var_7224_ptr), cVar1 != '\0')) &&
      ((cVar1 = SystemSynchronizationProcessor(param_1,(int64_t)&uStack_50 + 4,&unknown_var_7272_ptr), cVar1 != '\0' &&
       (cVar1 = SystemSynchronizationProcessor(param_1,&uStack_48,&unknown_var_7256_ptr), cVar1 != '\0')))) &&
     (cVar1 = SystemSynchronizationProcessor(param_1,(int64_t)&uStack_48 + 4,&unknown_var_7240_ptr), cVar1 != '\0')) {
    uStack_38 = uStack_58._4_4_;
    uStack_40 = CONCAT44((1 << ((byte)((uint64_t)uStack_58 >> 0x20) & 0x1f)) + (int)uStack_58 + -1,
                         (int)uStack_58);
    iStack_30 = (1 << ((byte)((uint64_t)uStack_50 >> 0x20) & 0x1f)) + (int)uStack_50 + -1;
    uStack_2c = uStack_50._4_4_;
    iStack_34 = (int)uStack_50;
    uStack_28 = CONCAT44((int)uStack_48 + -1 + (1 << ((byte)((uint64_t)uStack_48 >> 0x20) & 0x1f)),
                         (int)uStack_48);
    uStack_20 = uStack_48._4_4_;
    cVar1 = SystemSynchronizationProcessor(param_1,auStack_1c,&unknown_var_7224_ptr);
    if (((cVar1 != '\0') &&
        (cVar1 = SystemSynchronizationProcessor(param_1,auStack_18,&unknown_var_7224_ptr), cVar1 != '\0')) &&
       ((cVar1 = SystemSynchronizationProcessor(param_1,auStack_14,&unknown_var_7256_ptr), cVar1 != '\0' &&
        ((cVar1 = FUN_1805fded0(param_1,param_2,&uStack_58), cVar1 != '\0' &&
         (cVar1 = FUN_1805fded0(param_1,param_2,&uStack_58), cVar1 != '\0')))))) {
      return 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1805fded0(int64_t param_1,int64_t *param_2)

{
  int32_t *puVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int iVar12;
  int iVar13;
  int64_t lVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  int iStack_1b4;
  int32_t uStack_1b0;
  uint64_t uStack_1a8;
  int64_t lStack_1a0;
  int64_t lStack_190;
  int32_t uStack_180;
  int32_t uStack_17c;
  int32_t uStack_178;
  int32_t uStack_174;
  int8_t auStack_168 [144];
  int32_t uStack_d8;
  int32_t uStack_d4;
  int32_t uStack_d0;
  int32_t uStack_cc;
  
  lVar10 = system_system_memory;
  iVar13 = -1;
  uStack_1a8 = system_system_memory;
  iStack_1b4 = 0;
  fVar19 = (float)system_system_data_memory * 1e-05;
  cVar4 = FUN_1806192e0(param_1,&iStack_1b4);
  bVar17 = cVar4 != '\0';
  iVar12 = iStack_1b4;
  while (0 < iVar12) {
    if (bVar17 == false) goto LAB_1805feb17;
    iVar13 = iVar13 + iVar12;
    uVar8 = iVar13 >> 0x1f & 0xf;
    lVar10 = *param_2;
    uVar5 = iVar13 + uVar8;
    iVar15 = (int)uVar5 >> 4;
    uVar8 = (uVar5 & 0xf) - uVar8;
    if ((int)((param_2[1] - lVar10) / 0xe0) < iVar13 + 1) {
      FUN_18056ef80(param_2,iVar13 + 1);
      lVar10 = *param_2;
    }
    lVar10 = (int64_t)iVar13 * 0xe0 + lVar10;
    *(int8_t *)(lVar10 + 0xdc) = 0;
    if ((*(int *)(lVar10 + 0xd0) < *(int *)(param_1 + 0x5a0)) ||
       ((*(int *)(lVar10 + 0xd0) == *(int *)(param_1 + 0x5a0) &&
        (*(int *)(lVar10 + 0xd4) < *(int *)(param_1 + 0x5a4))))) {
      *(uint64_t *)(lVar10 + 0xd0) = *(uint64_t *)(param_1 + 0x5a0);
      *(float *)(lVar10 + 0xd8) = fVar19;
      *(int8_t *)(lVar10 + 0xdc) = 1;
    }
    if ((((uVar8 == 2) || (uVar8 - 4 < 2)) && (-1 < iVar15)) &&
       (iVar15 = *(int *)((int64_t)iVar15 * 0xa60 + 0x3600 + uStack_1a8), -1 < iVar15)) {
      lVar10 = *param_2;
      iVar16 = iVar15 * 0x10 + uVar8;
      iVar15 = iVar16 + 1;
      if ((int)((param_2[1] - lVar10) / 0xe0) < iVar15) {
        FUN_18056ef80(param_2,iVar15);
        lVar10 = *param_2;
      }
      lVar10 = (int64_t)iVar16 * 0xe0 + lVar10;
      *(int8_t *)(lVar10 + 0xdc) = 0;
      if ((*(int *)(lVar10 + 0xd0) < *(int *)(param_1 + 0x5a0)) ||
         ((*(int *)(lVar10 + 0xd0) == *(int *)(param_1 + 0x5a0) &&
          (*(int *)(lVar10 + 0xd4) < *(int *)(param_1 + 0x5a4))))) {
        *(uint64_t *)(lVar10 + 0xd0) = *(uint64_t *)(param_1 + 0x5a0);
        *(float *)(lVar10 + 0xd8) = fVar19;
        *(int8_t *)(lVar10 + 0xdc) = 1;
      }
    }
    if (uVar8 < 0x10) {
      uVar6 = (*(code *)((uint64_t)*(uint *)(&unknown_var_7104_ptr + (int64_t)(int)uVar8 * 4) +
                        0x180000000))
                        ((code *)((uint64_t)*(uint *)(&unknown_var_7104_ptr + (int64_t)(int)uVar8 * 4) +
                                 0x180000000));
      return uVar6;
    }
    if ((bVar17 == false) ||
       (cVar4 = FUN_1806192e0(param_1,&iStack_1b4), iVar12 = iStack_1b4, cVar4 == '\0')) {
      bVar17 = false;
      lVar10 = uStack_1a8;
    }
    else {
      bVar17 = true;
      lVar10 = uStack_1a8;
    }
  }
  if (bVar17 != false) {
    iVar12 = 0;
    iVar13 = (int)((param_2[1] - *param_2) / 0xe0);
    iVar13 = (int)(iVar13 + (iVar13 >> 0x1f & 0xfU)) >> 4;
    lVar14 = (int64_t)iVar13;
    if (0 < iVar13) {
      lStack_190 = 0;
      lStack_1a0 = lVar14;
      do {
        if (((-1 < lStack_190) && (iVar12 < *(int *)(lVar10 + 0x52ed94))) &&
           (-1 < *(short *)(lVar10 + 0x52dda0 + lStack_190 * 2))) {
          lVar9 = lStack_190 * 0xa60 + 0x30a0 + lVar10;
          if ((*(int64_t *)(lVar9 + 0x6d8) != 0) &&
             (*(char *)(*(int64_t *)(lVar9 + 0x6d8) + 0x8be) != '\0')) {
            iVar13 = 0;
            lVar11 = lStack_190 * 0xe00;
            do {
              lVar14 = *param_2;
              if (*(char *)(lVar11 + 0xdc + lVar14) == '\0') {
                if ((*(int *)(lVar9 + 0x570) == 2) ||
                   ((-1 < *(int *)(lVar9 + 0x560) &&
                    (*(int *)((int64_t)*(int *)(lVar9 + 0x560) * 0xa60 + 0x3610 + lVar10) == 2))))
                {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (iVar13 == 2) {
                  if ((*(int *)(lVar9 + 0x564) < 0) &&
                     (3.0 < fVar19 - *(float *)(lVar11 + 0xd8 + lVar14))) {
                    *(float *)(lVar11 + 0xd8 + lVar14) = fVar19;
                    goto code_r0x0001805feab8;
                  }
                }
                else if (iVar13 == 4) {
                  if (((((~(byte)(*(uint *)(lVar9 + 0x56c) >> 0xb) & 1) != 0) &&
                       (2.0 < fVar19 - *(float *)(lVar11 + 0xd8 + lVar14))) &&
                      (*(float *)(lVar11 + 0xd8 + lVar14) = fVar19, bVar3)) &&
                     (*(int *)(lVar9 + 0x5f8) == 0)) {
                    uStack_174 = *(int32_t *)(lVar11 + lVar14);
                    uStack_178 = *(int32_t *)(*(int64_t *)(lVar9 + 0x20) + 0x1c);
                    *(uint64_t *)(*(int64_t *)(lVar9 + 0x20) + 0x1c) =
                         CONCAT44(uStack_174,uStack_178);
                  }
                }
                else if (iVar13 == 5) {
                  if ((((~(byte)(*(uint *)(lVar9 + 0x56c) >> 0xb) & 1) != 0) &&
                      (2.0 < fVar19 - *(float *)(lVar11 + 0xd8 + lVar14))) &&
                     ((*(float *)(lVar11 + 0xd8 + lVar14) = fVar19, bVar3 &&
                      (*(int *)(lVar9 + 0x5f8) == 0)))) {
                    uStack_180 = *(int32_t *)(lVar11 + lVar14);
                    uStack_17c = *(int32_t *)(*(int64_t *)(lVar9 + 0x20) + 0x20);
                    *(uint64_t *)(*(int64_t *)(lVar9 + 0x20) + 0x1c) =
                         CONCAT44(uStack_17c,uStack_180);
                  }
                }
                else if (iVar13 == 7) {
                  if (((*(uint *)(lVar9 + 0x56c) >> 0xb & 1) != 0) &&
                     (1.5 < fVar19 - *(float *)(lVar11 + 0xd8 + lVar14))) {
                    *(float *)(lVar11 + 0xd8 + lVar14) = fVar19;
                    FUN_18052d200(lVar9,*(int32_t *)(lVar11 + lVar14));
                  }
                }
                else if (((iVar13 == 8) && ((*(uint *)(lVar9 + 0x56c) >> 0xb & 1) != 0)) &&
                        (1.5 < fVar19 - *(float *)(lVar11 + 0xd8 + lVar14))) {
                  *(float *)(lVar11 + 0xd8 + lVar14) = fVar19;
                  goto code_r0x0001805fe968;
                }
              }
              else {
                *(int8_t *)(lVar11 + 0xdc + lVar14) = 0;
                if ((*(int *)(lVar9 + 0x570) == 2) ||
                   ((-1 < *(int *)(lVar9 + 0x560) &&
                    (*(int *)((int64_t)*(int *)(lVar9 + 0x560) * 0xa60 + 0x3610 + lVar10) == 2))))
                {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                switch(iVar13) {
                case 0:
                  if (*(int *)(lVar9 + 0x568) == 1) {
                    if (*(char *)(lVar11 + 0x58 + lVar14) == '\0') {
                      func_0x00018055f040(auStack_168,lVar14 + 0x10 + lVar11);
                      FUN_1805a4a20(lVar9 + 0x28,1);
                    }
                    else {
                      FUN_18051ebd0(lVar9,1);
                    }
                  }
                  break;
                case 1:
                  if (*(int *)(lVar9 + 0x568) == 1) {
                    FUN_1805a4590(lVar9 + 0x28,lVar14 + 0xa0 + lVar11);
                  }
                  break;
                case 2:
code_r0x0001805feab8:
                  if ((bVar3) && (*(int *)(lVar9 + 0x5f8) == 0)) {
                    puVar1 = (int32_t *)(lVar11 + lVar14);
                    uStack_d8 = *puVar1;
                    uStack_d4 = puVar1[1];
                    uStack_d0 = puVar1[2];
                    uStack_cc = puVar1[3];
                    FUN_18051f1e0(lVar9,&uStack_d8);
                  }
                  break;
                case 3:
                  if ((bVar3) && (*(int *)(lVar9 + 0x5f8) != 2)) {
                    func_0x000180598e50(*(uint64_t *)(lVar9 + 0x20),
                                        *(int32_t *)(lVar11 + lVar14));
                  }
                  break;
                case 4:
                  if ((bVar3) && (*(int *)(lVar9 + 0x5f8) == 0)) {
                    uStack_1a8 = CONCAT44(*(int32_t *)(lVar11 + lVar14),
                                          *(int32_t *)(*(int64_t *)(lVar9 + 0x20) + 0x1c));
                    *(int64_t *)(*(int64_t *)(lVar9 + 0x20) + 0x1c) = uStack_1a8;
                  }
                  break;
                case 5:
                  if ((bVar3) && (*(int *)(lVar9 + 0x5f8) == 0)) {
                    iStack_1b4 = *(int *)(lVar11 + lVar14);
                    uStack_1b0 = *(int32_t *)(*(int64_t *)(lVar9 + 0x20) + 0x20);
                    *(uint64_t *)(*(int64_t *)(lVar9 + 0x20) + 0x1c) =
                         CONCAT44(uStack_1b0,iStack_1b4);
                  }
                  break;
                case 6:
                  if (bVar3) {
                    *(int32_t *)(*(int64_t *)(lVar9 + 0x20) + 0x130) =
                         *(int32_t *)(lVar11 + lVar14);
                  }
                  break;
                case 7:
                  if ((bVar3) && ((*(uint *)(lVar9 + 0x56c) & 0x800) != 0)) {
                    FUN_18052d200(lVar9,*(int32_t *)(lVar11 + lVar14));
                  }
                  break;
                case 8:
code_r0x0001805fe968:
                  func_0x000180525350(lVar9,CONCAT71((int7)((uint64_t)lVar14 >> 8),
                                                     *(int *)(lVar11 + lVar14) != 0));
                  break;
                case 9:
                  if (*(int *)(lVar9 + 0x568) == 1) {
                    if (*(char *)(lVar11 + 0x58 + lVar14) == '\0') {
                      uVar7 = func_0x00018055f040(auStack_168,lVar14 + 0x10 + lVar11);
                      FUN_1805a4a20(lVar9 + 0x28,0,uVar7,0);
                    }
                    else {
                      FUN_18051ebd0(lVar9,0);
                    }
                  }
                  break;
                case 10:
                  if (bVar3) {
                    FUN_1805380e0(lVar9 + 0x49c,*(int32_t *)(lVar11 + lVar14));
                  }
                  break;
                case 0xb:
                  if (bVar3) {
                    fVar18 = *(float *)(lVar11 + lVar14);
                    if (-1.0 <= fVar18) {
                      if (1.0 <= fVar18) {
                        fVar18 = 1.0;
                      }
                    }
                    else {
                      fVar18 = -1.0;
                    }
                    fVar2 = *(float *)(lVar9 + 0x4a4);
                    *(float *)(lVar9 + 0x4a4) = fVar18;
                    *(float *)(lVar9 + 0x4b4) = (fVar2 - fVar18) + *(float *)(lVar9 + 0x4b4);
                    func_0x0001801c2560();
                  }
                  break;
                case 0xc:
                  if (bVar3) {
                    *(int32_t *)(*(int64_t *)(lVar9 + 0x20) + 0x38) =
                         *(int32_t *)(lVar11 + lVar14);
                  }
                  break;
                case 0xd:
                  if (bVar3) {
                    *(int32_t *)(*(int64_t *)(lVar9 + 0x20) + 0x3c) =
                         *(int32_t *)(lVar11 + lVar14);
                  }
                  break;
                case 0xe:
                  if (bVar3) {
                    *(int32_t *)(*(int64_t *)(lVar9 + 0x20) + 0x134) =
                         *(int32_t *)(lVar11 + lVar14);
                  }
                  break;
                case 0xf:
                  iVar15 = *(int *)(lVar11 + lVar14);
                  *(int *)(lVar9 + 0x208) = iVar15;
                  if (iVar15 != -1) {
                    func_0x0001805b2480();
                  }
                }
              }
              iVar13 = iVar13 + 1;
              lVar11 = lVar11 + 0xe0;
              lVar14 = lStack_1a0;
            } while (iVar13 < 0x10);
          }
        }
        lStack_190 = lStack_190 + 1;
        iVar12 = iVar12 + 1;
      } while (lStack_190 < lVar14);
    }
  }
LAB_1805feb17:
  return (uint64_t)bVar17;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805febd0(int64_t param_1)
void FUN_1805febd0(int64_t param_1)

{
  int64_t lVar1;
  int8_t auStack_a8 [32];
  uint64_t uStack_88;
  void *puStack_78;
  int8_t *puStack_70;
  int32_t uStack_68;
  int8_t auStack_60 [72];
  uint64_t uStack_18;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  puStack_78 = &unknown_var_3480_ptr;
  puStack_70 = auStack_60;
  uStack_68 = 0;
  auStack_60[0] = 0;
  if (param_1 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_1 + lVar1) != '\0');
    uStack_68 = (int32_t)lVar1;
    strcpy_s(auStack_60,0x40,param_1);
  }
  FUN_18053a5e0(&system_data_5f30,&puStack_78);
  puStack_78 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805fed10(int32_t param_1,int32_t param_2)
void FUN_1805fed10(int32_t param_1,int32_t param_2)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar1;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*system_cache_buffer + 0x70);
  iVar1 = FUN_18053a410(&system_data_5f30,param_1,param_2);
  iVar1 = *(int *)(system_system_memory + (int64_t)iVar1 * 4);
  if (iVar1 != -1) {
                    // WARNING: Could not recover jumptable at 0x0001805fed66. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE_00)
              (system_cache_buffer,*(int64_t *)(system_system_memory + (int64_t)iVar1 * 8) + 0x10);
    return;
  }
                    // WARNING: Could not recover jumptable at 0x0001805fed7f. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE_00)(system_cache_buffer,0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




