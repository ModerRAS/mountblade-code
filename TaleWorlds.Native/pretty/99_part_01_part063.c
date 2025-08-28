#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
// 99_part_01_part063.c - 3 个函数
// 函数: void function_0e1530(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
void function_0e1530(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
                  int64_t param_5,int64_t param_6,int64_t param_7)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  char cVar4;
  int32_t uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  int8_t *puVar11;
  int8_t *puVar12;
  uint uVar13;
  int64_t lVar14;
  int iVar15;
  int iVar16;
  uint64_t uVar17;
  uint uVar18;
  int8_t stack_array_138 [32];
  int8_t local_var_118;
  int32_t local_var_108;
  uint64_t *plocal_var_100;
  uint64_t *plocal_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  void *plocal_var_e0;
  int8_t *plocal_var_d8;
  uint local_var_d0;
  uint local_var_c8;
  uint local_var_c4;
  void *plocal_var_c0;
  uint64_t *plocal_var_b8;
  int32_t local_var_b0;
  uint64_t local_var_a8;
  int64_t lStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  int8_t *plocal_var_68;
  uint local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  local_var_78 = 0xfffffffffffffffe;
  local_var_50 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_138;
  lStack_90 = param_5;
  lStack_88 = param_6;
  lStack_80 = param_7;
  iVar15 = 0;
  iVar16 = 0;
  local_var_108 = 0;
  plocal_var_c0 = &system_data_buffer_ptr;
  local_var_a8 = 0;
  plocal_var_b8 = (uint64_t *)0x0;
  local_var_b0 = 0;
  lStack_a0 = param_3;
  lStack_98 = param_4;
  puVar9 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar9 = 0;
  plocal_var_b8 = puVar9;
  uVar5 = CoreMemoryPoolCleaner(puVar9);
  local_var_a8 = CONCAT44(local_var_a8._4_4_,uVar5);
  *puVar9 = 0x68736e6565726373;
  *(int32_t *)(puVar9 + 1) = 0x73746f;
  local_var_b0 = 0xb;
  SystemManager_Processor(&plocal_var_c0);
  cVar4 = UltraHighFreq_LogManager1(&plocal_var_c0);
  if (cVar4 != '\0') {
    plocal_var_100 = (uint64_t *)0x0;
    plocal_var_f8 = (uint64_t *)0x0;
    local_var_f0 = 0;
    local_var_e8 = CONCAT44(local_var_e8._4_4_,3);
    function_62c5f0(&plocal_var_c0,&plocal_var_100);
    puVar2 = plocal_var_f8;
    puVar1 = plocal_var_100;
    uVar17 = (int64_t)plocal_var_f8 - (int64_t)plocal_var_100 >> 5;
    uVar13 = 0;
    puVar9 = puVar1;
    iVar16 = 0;
    if (uVar17 != 0) {
      uVar10 = 0;
      do {
        cVar4 = UltraHighFreq_LogManager1(puVar1 + uVar10 * 4);
        if (cVar4 != '\0') {
          iVar15 = iVar15 + 1;
        }
        uVar13 = uVar13 + 1;
        uVar10 = (uint64_t)uVar13;
        iVar16 = iVar15;
      } while (uVar10 < uVar17);
    }
    for (; puVar9 != puVar2; puVar9 = puVar9 + 4) {
      (**(code **)*puVar9)(puVar9,0);
    }
    if (puVar1 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar1);
    }
  }
  puVar11 = (int8_t *)0x0;
  UtilitiesSystem_CacheManager(&plocal_var_c0,&plocal_var_e0,&processed_var_4456_ptr);
  RenderingEngine_BufferManager(&local_var_70,&processed_var_4576_ptr,iVar16);
  lVar3 = -1;
  do {
    lVar14 = lVar3;
    lVar3 = lVar14 + 1;
  } while (*(char *)((int64_t)&local_var_70 + lVar14 + 1) != '\0');
  iVar16 = (int)(lVar14 + 1);
  if (0 < iVar16) {
    iVar16 = local_var_d0 + iVar16;
    if (iVar16 != 0) {
      uVar13 = iVar16 + 1;
      if (plocal_var_d8 == (int8_t *)0x0) {
        if ((int)uVar13 < 0x10) {
          uVar13 = 0x10;
        }
        plocal_var_d8 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar13,0x13);
        *plocal_var_d8 = 0;
      }
      else {
        if (uVar13 <= local_var_c8) goto LAB_1800e175d;
        local_var_118 = 0x13;
        plocal_var_d8 = (int8_t *)DataValidator(system_memory_pool_ptr,plocal_var_d8,uVar13,0x10);
      }
      local_var_c8 = CoreMemoryPoolCleaner(plocal_var_d8);
    }
LAB_1800e175d:
// WARNING: Subroutine does not return
    memcpy(plocal_var_d8 + local_var_d0,&local_var_70,(int64_t)((int)lVar14 + 2));
  }
  SystemManager_Processor(&plocal_var_e0);
  uVar13 = local_var_d0;
  uVar6 = 0;
  local_var_70 = &system_data_buffer_ptr;
  local_var_58 = 0;
  plocal_var_68 = (int8_t *)0x0;
  local_var_60 = 0;
  local_var_108 = 2;
  uVar17 = (uint64_t)local_var_d0;
  puVar12 = puVar11;
  if (plocal_var_d8 == (int8_t *)0x0) {
LAB_1800e1810:
    uVar6 = (uint)puVar12;
    if (uVar13 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar11,plocal_var_d8,uVar17);
    }
  }
  else if (local_var_d0 != 0) {
    iVar16 = local_var_d0 + 1;
    if (iVar16 < 0x10) {
      iVar16 = 0x10;
    }
    puVar11 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar16,0x13);
    *puVar11 = 0;
    plocal_var_68 = puVar11;
    puVar12 = (int8_t *)CoreMemoryPoolCleaner(puVar11);
    local_var_58 = CONCAT44(local_var_58._4_4_,(int)puVar12);
    goto LAB_1800e1810;
  }
  local_var_60 = uVar13;
  if (puVar11 != (int8_t *)0x0) {
    puVar11[uVar17] = 0;
  }
  local_var_58._4_4_ = local_var_c4;
  if (uVar13 + 7 != 0) {
    uVar8 = uVar13 + 8;
    if (puVar11 == (int8_t *)0x0) {
      if ((int)uVar8 < 0x10) {
        uVar8 = 0x10;
      }
      puVar11 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar8,0x13);
      *puVar11 = 0;
    }
    else {
      if (uVar8 <= uVar6) goto LAB_1800e189d;
      local_var_118 = 0x13;
      puVar11 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar11,uVar8,0x10);
    }
    plocal_var_68 = puVar11;
    local_var_58._0_4_ = CoreMemoryPoolCleaner(puVar11);
  }
LAB_1800e189d:
  *(uint64_t *)(puVar11 + uVar17) = 0x6e65657263732f;
  local_var_60 = uVar13 + 7;
  SystemScheduler(param_1,&local_var_70);
  local_var_108 = 0;
  local_var_70 = &system_data_buffer_ptr;
  if (plocal_var_68 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_68 = (int8_t *)0x0;
  local_var_58 = (uint64_t)local_var_58._4_4_ << 0x20;
  local_var_70 = &system_state_ptr;
  SystemManager_Processor(param_1);
  iVar16 = *(int *)(param_1 + 0x10) + 1;
  CoreMemoryPoolProcessor(param_1,iVar16);
  uVar13 = local_var_d0;
  *(int16_t *)((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8)) = 0x2f;
  *(int *)(param_1 + 0x10) = iVar16;
  puVar12 = (int8_t *)0x0;
  uVar8 = 0;
  uVar18 = 0;
  plocal_var_100 = (uint64_t *)&system_data_buffer_ptr;
  local_var_e8 = 0;
  plocal_var_f8 = (uint64_t *)0x0;
  local_var_f0 = local_var_f0 & 0xffffffff00000000;
  local_var_108 = 4;
  uVar17 = (uint64_t)local_var_d0;
  puVar11 = puVar12;
  uVar6 = uVar8;
  if (plocal_var_d8 == (int8_t *)0x0) {
LAB_1800e19a6:
    uVar18 = uVar6;
    if (uVar13 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar11,plocal_var_d8,uVar17);
    }
  }
  else if (local_var_d0 != 0) {
    iVar16 = local_var_d0 + 1;
    if (iVar16 < 0x10) {
      iVar16 = 0x10;
    }
    puVar11 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar16,0x13);
    *puVar11 = 0;
    plocal_var_f8 = (uint64_t *)puVar11;
    uVar6 = CoreMemoryPoolCleaner(puVar11);
    local_var_e8 = CONCAT44(local_var_e8._4_4_,uVar6);
    goto LAB_1800e19a6;
  }
  if (puVar11 != (int8_t *)0x0) {
    puVar11[uVar17] = 0;
  }
  local_var_e8._4_4_ = local_var_c4;
  if (uVar13 + 6 != 0) {
    uVar6 = uVar13 + 7;
    if (puVar11 == (int8_t *)0x0) {
      if ((int)uVar6 < 0x10) {
        uVar6 = 0x10;
      }
      puVar11 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar6,0x13);
      *puVar11 = 0;
    }
    else {
      if (uVar6 <= uVar18) goto LAB_1800e1a38;
      local_var_118 = 0x13;
      puVar11 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar11,uVar6,0x10);
    }
    plocal_var_f8 = (uint64_t *)puVar11;
    local_var_e8._0_4_ = CoreMemoryPoolCleaner(puVar11);
  }
LAB_1800e1a38:
  *(int32_t *)(puVar11 + uVar17) = 0x7065642f;
  *(int16_t *)(puVar11 + uVar17 + 4) = 0x6874;
  puVar11[uVar17 + 6] = 0;
  local_var_f0 = CONCAT44(local_var_f0._4_4_,uVar13 + 6);
  SystemScheduler(param_2,&plocal_var_100);
  local_var_108 = 0;
  plocal_var_100 = (uint64_t *)&system_data_buffer_ptr;
  if (plocal_var_f8 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_f8 = (uint64_t *)0x0;
  local_var_e8 = (uint64_t)local_var_e8._4_4_ << 0x20;
  plocal_var_100 = (uint64_t *)&system_state_ptr;
  SystemManager_Processor(param_2);
  iVar16 = *(int *)(param_2 + 0x10) + 1;
  CoreMemoryPoolProcessor(param_2,iVar16);
  uVar13 = local_var_d0;
  *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 0x2f;
  *(int *)(param_2 + 0x10) = iVar16;
  local_var_70 = &system_data_buffer_ptr;
  uVar18 = 0;
  local_var_58 = 0;
  plocal_var_68 = (int8_t *)0x0;
  local_var_60 = 0;
  local_var_108 = 8;
  uVar17 = (uint64_t)local_var_d0;
  puVar11 = puVar12;
  uVar6 = uVar8;
  if (plocal_var_d8 == (int8_t *)0x0) {
LAB_1800e1b4e:
    if (uVar13 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar11,plocal_var_d8,uVar17);
    }
  }
  else {
    uVar6 = uVar18;
    if (local_var_d0 != 0) {
      iVar16 = local_var_d0 + 1;
      if (iVar16 < 0x10) {
        iVar16 = 0x10;
      }
      puVar11 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar16,0x13);
      *puVar11 = 0;
      plocal_var_68 = puVar11;
      uVar6 = CoreMemoryPoolCleaner(puVar11);
      local_var_58 = CONCAT44(local_var_58._4_4_,uVar6);
      goto LAB_1800e1b4e;
    }
  }
  local_var_60 = uVar13;
  if (puVar11 != (int8_t *)0x0) {
    puVar11[uVar17] = 0;
  }
  local_var_58._4_4_ = local_var_c4;
  if (uVar13 + 8 != 0) {
    uVar7 = uVar13 + 9;
    if (puVar11 == (int8_t *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      puVar11 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
      *puVar11 = 0;
    }
    else {
      if (uVar7 <= uVar6) goto LAB_1800e1bd4;
      local_var_118 = 0x13;
      puVar11 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar11,uVar7,0x10);
    }
    plocal_var_68 = puVar11;
    local_var_58._0_4_ = CoreMemoryPoolCleaner(puVar11);
  }
LAB_1800e1bd4:
  lVar3 = lStack_a0;
  *(uint64_t *)(puVar11 + uVar17) = 0x736c616d726f6e2f;
  puVar11[uVar17 + 8] = 0;
  local_var_60 = uVar13 + 8;
  SystemScheduler(lStack_a0,&local_var_70);
  local_var_108 = 0;
  local_var_70 = &system_data_buffer_ptr;
  if (plocal_var_68 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_68 = (int8_t *)0x0;
  local_var_58 = (uint64_t)local_var_58._4_4_ << 0x20;
  local_var_70 = &system_state_ptr;
  SystemManager_Processor(lVar3);
  iVar16 = *(int *)(lVar3 + 0x10) + 1;
  CoreMemoryPoolProcessor(lVar3,iVar16);
  uVar13 = local_var_d0;
  *(int16_t *)((uint64_t)*(uint *)(lVar3 + 0x10) + *(int64_t *)(lVar3 + 8)) = 0x2f;
  *(int *)(lVar3 + 0x10) = iVar16;
  plocal_var_100 = (uint64_t *)&system_data_buffer_ptr;
  local_var_e8 = 0;
  plocal_var_f8 = (uint64_t *)0x0;
  local_var_f0 = local_var_f0 & 0xffffffff00000000;
  local_var_108 = 0x10;
  uVar17 = (uint64_t)local_var_d0;
  puVar11 = puVar12;
  uVar6 = uVar8;
  if (plocal_var_d8 == (int8_t *)0x0) {
LAB_1800e1cdb:
    if (uVar13 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar11,plocal_var_d8,uVar17);
    }
  }
  else {
    uVar6 = uVar18;
    if (local_var_d0 != 0) {
      iVar16 = local_var_d0 + 1;
      if (iVar16 < 0x10) {
        iVar16 = 0x10;
      }
      puVar11 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar16,0x13);
      *puVar11 = 0;
      plocal_var_f8 = (uint64_t *)puVar11;
      uVar6 = CoreMemoryPoolCleaner(puVar11);
      local_var_e8 = CONCAT44(local_var_e8._4_4_,uVar6);
      goto LAB_1800e1cdb;
    }
  }
  if (puVar11 != (int8_t *)0x0) {
    puVar11[uVar17] = 0;
  }
  local_var_e8._4_4_ = local_var_c4;
  if (uVar13 + 7 != 0) {
    uVar7 = uVar13 + 8;
    if (puVar11 == (int8_t *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      puVar11 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
      *puVar11 = 0;
    }
    else {
      if (uVar7 <= uVar6) goto LAB_1800e1d66;
      local_var_118 = 0x13;
      puVar11 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar11,uVar7,0x10);
    }
    plocal_var_f8 = (uint64_t *)puVar11;
    local_var_e8._0_4_ = CoreMemoryPoolCleaner(puVar11);
  }
LAB_1800e1d66:
  lVar3 = lStack_98;
  *(uint64_t *)(puVar11 + uVar17) = 0x6f6465626c612f;
  local_var_f0 = CONCAT44(local_var_f0._4_4_,uVar13 + 7);
  SystemScheduler(lStack_98,&plocal_var_100);
  local_var_108 = 0;
  plocal_var_100 = (uint64_t *)&system_data_buffer_ptr;
  if (plocal_var_f8 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_f8 = (uint64_t *)0x0;
  local_var_e8 = (uint64_t)local_var_e8._4_4_ << 0x20;
  plocal_var_100 = (uint64_t *)&system_state_ptr;
  SystemManager_Processor(lVar3);
  iVar16 = *(int *)(lVar3 + 0x10) + 1;
  CoreMemoryPoolProcessor(lVar3,iVar16);
  uVar13 = local_var_d0;
  *(int16_t *)((uint64_t)*(uint *)(lVar3 + 0x10) + *(int64_t *)(lVar3 + 8)) = 0x2f;
  *(int *)(lVar3 + 0x10) = iVar16;
  local_var_70 = &system_data_buffer_ptr;
  local_var_58 = 0;
  plocal_var_68 = (int8_t *)0x0;
  local_var_60 = 0;
  local_var_108 = 0x20;
  uVar17 = (uint64_t)local_var_d0;
  puVar11 = puVar12;
  uVar6 = uVar8;
  if (plocal_var_d8 == (int8_t *)0x0) {
LAB_1800e1e60:
    if (uVar13 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar11,plocal_var_d8,uVar17);
    }
  }
  else {
    uVar6 = uVar18;
    if (local_var_d0 != 0) {
      iVar16 = local_var_d0 + 1;
      if (iVar16 < 0x10) {
        iVar16 = 0x10;
      }
      puVar11 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar16,0x13);
      *puVar11 = 0;
      plocal_var_68 = puVar11;
      uVar6 = CoreMemoryPoolCleaner(puVar11);
      local_var_58 = CONCAT44(local_var_58._4_4_,uVar6);
      goto LAB_1800e1e60;
    }
  }
  local_var_60 = uVar13;
  if (puVar11 != (int8_t *)0x0) {
    puVar11[uVar17] = 0;
  }
  local_var_58._4_4_ = local_var_c4;
  if (uVar13 + 0xc != 0) {
    uVar7 = uVar13 + 0xd;
    if (puVar11 == (int8_t *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      puVar11 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
      *puVar11 = 0;
    }
    else {
      if (uVar7 <= uVar6) goto LAB_1800e1ee6;
      local_var_118 = 0x13;
      puVar11 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar11,uVar7,0x10);
    }
    plocal_var_68 = puVar11;
    local_var_58._0_4_ = CoreMemoryPoolCleaner(puVar11);
  }
LAB_1800e1ee6:
  lVar3 = lStack_90;
  *(uint64_t *)(puVar11 + uVar17) = 0x616c75636570732f;
  *(int32_t *)(puVar11 + uVar17 + 8) = 0x79746972;
  puVar11[uVar17 + 0xc] = 0;
  local_var_60 = uVar13 + 0xc;
  SystemScheduler(lStack_90,&local_var_70);
  local_var_108 = 0;
  local_var_70 = &system_data_buffer_ptr;
  if (plocal_var_68 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_68 = (int8_t *)0x0;
  local_var_58 = (uint64_t)local_var_58._4_4_ << 0x20;
  local_var_70 = &system_state_ptr;
  SystemManager_Processor(lVar3);
  iVar16 = *(int *)(lVar3 + 0x10) + 1;
  CoreMemoryPoolProcessor(lVar3,iVar16);
  uVar13 = local_var_d0;
  *(int16_t *)((uint64_t)*(uint *)(lVar3 + 0x10) + *(int64_t *)(lVar3 + 8)) = 0x2f;
  *(int *)(lVar3 + 0x10) = iVar16;
  plocal_var_100 = (uint64_t *)&system_data_buffer_ptr;
  local_var_e8 = 0;
  plocal_var_f8 = (uint64_t *)0x0;
  local_var_f0 = local_var_f0 & 0xffffffff00000000;
  local_var_108 = 0x40;
  uVar17 = (uint64_t)local_var_d0;
  puVar11 = puVar12;
  uVar6 = uVar8;
  if (plocal_var_d8 == (int8_t *)0x0) {
LAB_1800e1ff7:
    if (uVar13 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar11,plocal_var_d8,uVar17);
    }
  }
  else {
    uVar6 = uVar18;
    if (local_var_d0 != 0) {
      iVar16 = local_var_d0 + 1;
      if (iVar16 < 0x10) {
        iVar16 = 0x10;
      }
      puVar11 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar16,0x13);
      *puVar11 = 0;
      plocal_var_f8 = (uint64_t *)puVar11;
      uVar6 = CoreMemoryPoolCleaner(puVar11);
      local_var_e8 = CONCAT44(local_var_e8._4_4_,uVar6);
      goto LAB_1800e1ff7;
    }
  }
  if (puVar11 != (int8_t *)0x0) {
    puVar11[uVar17] = 0;
  }
  local_var_e8._4_4_ = local_var_c4;
  if (uVar13 + 10 != 0) {
    uVar7 = uVar13 + 0xb;
    if (puVar11 == (int8_t *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      puVar11 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
      *puVar11 = 0;
    }
    else {
      if (uVar7 <= uVar6) goto LAB_1800e2082;
      local_var_118 = 0x13;
      puVar11 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar11,uVar7,0x10);
    }
    plocal_var_f8 = (uint64_t *)puVar11;
    local_var_e8._0_4_ = CoreMemoryPoolCleaner(puVar11);
  }
LAB_1800e2082:
  lVar3 = lStack_88;
  *(uint64_t *)(puVar11 + uVar17) = 0x6973756c63636f2f;
  *(int16_t *)(puVar11 + uVar17 + 8) = 0x6e6f;
  puVar11[uVar17 + 10] = 0;
  local_var_f0 = CONCAT44(local_var_f0._4_4_,uVar13 + 10);
  SystemScheduler(lStack_88,&plocal_var_100);
  local_var_108 = 0;
  plocal_var_100 = (uint64_t *)&system_data_buffer_ptr;
  if (plocal_var_f8 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_f8 = (uint64_t *)0x0;
  local_var_e8 = (uint64_t)local_var_e8._4_4_ << 0x20;
  plocal_var_100 = (uint64_t *)&system_state_ptr;
  SystemManager_Processor(lVar3);
  iVar16 = *(int *)(lVar3 + 0x10) + 1;
  CoreMemoryPoolProcessor(lVar3,iVar16);
  *(int16_t *)((uint64_t)*(uint *)(lVar3 + 0x10) + *(int64_t *)(lVar3 + 8)) = 0x2f;
  *(int *)(lVar3 + 0x10) = iVar16;
  local_var_70 = &system_data_buffer_ptr;
  local_var_58 = 0;
  plocal_var_68 = (int8_t *)0x0;
  local_var_60 = 0;
  local_var_108 = 0x80;
  uVar17 = (uint64_t)local_var_d0;
  if (plocal_var_d8 == (int8_t *)0x0) {
LAB_1800e2194:
    uVar18 = uVar8;
    if (local_var_d0 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar12,plocal_var_d8,uVar17);
    }
  }
  else if (local_var_d0 != 0) {
    iVar16 = local_var_d0 + 1;
    if (iVar16 < 0x10) {
      iVar16 = 0x10;
    }
    puVar12 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar16,0x13);
    *puVar12 = 0;
    plocal_var_68 = puVar12;
    uVar8 = CoreMemoryPoolCleaner(puVar12);
    local_var_58 = CONCAT44(local_var_58._4_4_,uVar8);
    goto LAB_1800e2194;
  }
  local_var_60 = local_var_d0;
  if (puVar12 != (int8_t *)0x0) {
    puVar12[uVar17] = 0;
  }
  local_var_58._4_4_ = local_var_c4;
  if (local_var_d0 + 6 != 0) {
    uVar13 = local_var_d0 + 7;
    if (puVar12 == (int8_t *)0x0) {
      if ((int)uVar13 < 0x10) {
        uVar13 = 0x10;
      }
      puVar12 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar13,0x13);
      *puVar12 = 0;
    }
    else {
      if (uVar13 <= uVar18) goto LAB_1800e221a;
      local_var_118 = 0x13;
      puVar12 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar12,uVar13,0x10);
    }
    plocal_var_68 = puVar12;
    local_var_58._0_4_ = CoreMemoryPoolCleaner(puVar12);
  }
LAB_1800e221a:
  lVar3 = lStack_80;
  *(int32_t *)(puVar12 + uVar17) = 0x6e69662f;
  *(int16_t *)(puVar12 + uVar17 + 4) = 0x6c61;
  puVar12[uVar17 + 6] = 0;
  local_var_60 = local_var_d0 + 6;
  SystemScheduler(lStack_80,&local_var_70);
  local_var_108 = 0;
  local_var_70 = &system_data_buffer_ptr;
  if (plocal_var_68 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_68 = (int8_t *)0x0;
  local_var_58 = (uint64_t)local_var_58._4_4_ << 0x20;
  local_var_70 = &system_state_ptr;
  SystemManager_Processor(lVar3);
  iVar16 = *(int *)(lVar3 + 0x10) + 1;
  CoreMemoryPoolProcessor(lVar3,iVar16);
  *(int16_t *)((uint64_t)*(uint *)(lVar3 + 0x10) + *(int64_t *)(lVar3 + 8)) = 0x2f;
  *(int *)(lVar3 + 0x10) = iVar16;
  plocal_var_e0 = &system_data_buffer_ptr;
  if (plocal_var_d8 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_d8 = (int8_t *)0x0;
  local_var_c8 = 0;
  plocal_var_e0 = &system_state_ptr;
  plocal_var_c0 = &system_data_buffer_ptr;
  if (plocal_var_b8 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_b8 = (uint64_t *)0x0;
  local_var_a8 = local_var_a8 & 0xffffffff00000000;
  plocal_var_c0 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_50 ^ (uint64_t)stack_array_138);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0e2310(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void function_0e2310(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  int32_t param_5,uint64_t param_6)
{
  int64_t lVar1;
  int iVar2;
  int32_t uVar3;
  int8_t *puVar4;
  int64_t lVar5;
  int iVar6;
  void *puVar7;
  int8_t stack_array_2b8 [32];
  uint64_t local_var_298;
  int32_t local_var_290;
  uint64_t local_var_288;
  void *plocal_var_278;
  int8_t *plocal_var_270;
  int32_t local_var_268;
  uint64_t local_var_260;
  uint64_t local_var_258;
  char acStack_248 [512];
  uint64_t local_var_48;
  local_var_258 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2b8;
  if (*(char *)(param_1 + 900) != '\0') {
    puVar7 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar7 = *(void **)(param_3 + 8);
    }
    local_var_288 = param_6;
    local_var_290 = param_5;
    local_var_298 = param_4;
    SystemCore_CacheManager(acStack_248,0x200,&processed_var_4576_ptr,puVar7);
    SystemCore_Scheduler(param_1);
    plocal_var_278 = &system_data_buffer_ptr;
    local_var_260 = 0;
    plocal_var_270 = (int8_t *)0x0;
    local_var_268 = 0;
    lVar1 = -1;
    do {
      lVar5 = lVar1;
      lVar1 = lVar5 + 1;
    } while (acStack_248[lVar5 + 1] != '\0');
    if ((int)(lVar5 + 1) != 0) {
      iVar6 = (int)lVar5 + 2;
      iVar2 = iVar6;
      if (iVar6 < 0x10) {
        iVar2 = 0x10;
      }
      puVar4 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar2,0x13);
      *puVar4 = 0;
      plocal_var_270 = puVar4;
      uVar3 = CoreMemoryPoolCleaner(puVar4);
      local_var_260 = CONCAT44(local_var_260._4_4_,uVar3);
// WARNING: Subroutine does not return
      memcpy(puVar4,acStack_248,iVar6);
    }
    local_var_268 = 0;
    function_225ee0();
    plocal_var_278 = &system_data_buffer_ptr;
    if (plocal_var_270 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plocal_var_270 = (int8_t *)0x0;
    local_var_260 = local_var_260 & 0xffffffff00000000;
    plocal_var_278 = &system_state_ptr;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_2b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0e24b0(uint64_t param_1,int64_t param_2)
void function_0e24b0(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int32_t uVar2;
  int8_t stack_array_218 [32];
  void **pplocal_var_1f8;
  void **pplocal_var_1f0;
  void **pplocal_var_1e8;
  void *plocal_var_1d8;
  int64_t lStack_1d0;
  int32_t local_var_1c8;
  uint64_t local_var_1c0;
  void *plocal_var_1b8;
  int64_t lStack_1b0;
  int32_t local_var_1a8;
  uint64_t local_var_1a0;
  void *plocal_var_198;
  int64_t lStack_190;
  int32_t local_var_188;
  uint64_t local_var_180;
  void *plocal_var_178;
  int64_t lStack_170;
  int32_t local_var_168;
  uint64_t local_var_160;
  void *plocal_var_158;
  int64_t lStack_150;
  int32_t local_var_148;
  uint64_t local_var_140;
  void *plocal_var_138;
  int64_t lStack_130;
  int32_t local_var_128;
  uint64_t local_var_120;
  void *plocal_var_118;
  int64_t lStack_110;
  int32_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  void **pplocal_var_f0;
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [72];
  void *aplocal_var_88 [12];
  uint64_t local_var_28;
  local_var_f8 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_218;
  function_24c0f0(param_2,aplocal_var_88);
  pplocal_var_f0 = &plocal_var_e8;
  plocal_var_e8 = &memory_allocator_3480_ptr;
  plocal_var_e0 = stack_array_d0;
  local_var_d8 = 0;
  stack_array_d0[0] = 0;
  DataStructureManager0(&plocal_var_e8,&processed_var_4536_ptr);
  SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_e8);
  if (*(int *)(param_2 + 0x1bdc) != 0) {
    if (*(int *)(param_2 + 0x1bdc) == 3) {
      plocal_var_198 = &system_data_buffer_ptr;
      local_var_180 = 0;
      lStack_190 = 0;
      local_var_188 = 0;
      plocal_var_1b8 = &system_data_buffer_ptr;
      local_var_1a0 = 0;
      lStack_1b0 = 0;
      local_var_1a8 = 0;
      plocal_var_118 = &system_data_buffer_ptr;
      local_var_100 = 0;
      lStack_110 = 0;
      local_var_108 = 0;
      plocal_var_138 = &system_data_buffer_ptr;
      local_var_120 = 0;
      lStack_130 = 0;
      local_var_128 = 0;
      plocal_var_158 = &system_data_buffer_ptr;
      local_var_140 = 0;
      lStack_150 = 0;
      local_var_148 = 0;
      plocal_var_178 = &system_data_buffer_ptr;
      local_var_160 = 0;
      lStack_170 = 0;
      local_var_168 = 0;
      plocal_var_1d8 = &system_data_buffer_ptr;
      local_var_1c0 = 0;
      lStack_1d0 = 0;
      local_var_1c8 = 0;
      pplocal_var_1e8 = &plocal_var_1d8;
      pplocal_var_1f0 = &plocal_var_178;
      pplocal_var_1f8 = &plocal_var_158;
      function_0e1530(&plocal_var_198,&plocal_var_1b8,&plocal_var_118,&plocal_var_138);
      uVar2 = *(int32_t *)(param_2 + 0x1bdc);
      lVar1 = SystemOptimizer(param_2);
      if (lVar1 != 0) {
        pplocal_var_1f0 = (void **)&processed_var_4604_ptr;
        pplocal_var_1f8 = (void **)CONCAT44(pplocal_var_1f8._4_4_,uVar2);
        function_0e2310(lVar1,9,&plocal_var_198,&processed_var_4592_ptr);
      }
      uVar2 = *(int32_t *)(param_2 + 0x1bdc);
      lVar1 = *(int64_t *)
               (*(int64_t *)(*(int64_t *)(*(int64_t *)(param_2 + 0x99d0) + 0x58) + -8) + 0x428);
      if (lVar1 != 0) {
        pplocal_var_1f0 = (void **)&processed_var_4620_ptr;
        pplocal_var_1f8 = (void **)CONCAT44(pplocal_var_1f8._4_4_,uVar2);
        function_0e2310(lVar1,5,&plocal_var_1b8,&processed_var_4608_ptr);
        uVar2 = *(int32_t *)(param_2 + 0x1bdc);
      }
      if (*(int64_t *)(param_2 + 0x9690) != 0) {
        pplocal_var_1f0 = (void **)&processed_var_4620_ptr;
        pplocal_var_1f8 = (void **)CONCAT44(pplocal_var_1f8._4_4_,uVar2);
        function_0e2310(*(int64_t *)(param_2 + 0x9690),8,&plocal_var_1d8,&processed_var_4656_ptr);
      }
      plocal_var_1d8 = &system_data_buffer_ptr;
      if (lStack_1d0 != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      lStack_1d0 = 0;
      local_var_1c0 = local_var_1c0 & 0xffffffff00000000;
      plocal_var_1d8 = &system_state_ptr;
      plocal_var_178 = &system_data_buffer_ptr;
      if (lStack_170 != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      lStack_170 = 0;
      local_var_160 = local_var_160 & 0xffffffff00000000;
      plocal_var_178 = &system_state_ptr;
      plocal_var_158 = &system_data_buffer_ptr;
      if (lStack_150 != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      lStack_150 = 0;
      local_var_140 = local_var_140 & 0xffffffff00000000;
      plocal_var_158 = &system_state_ptr;
      plocal_var_138 = &system_data_buffer_ptr;
      if (lStack_130 != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      lStack_130 = 0;
      local_var_120 = local_var_120 & 0xffffffff00000000;
      plocal_var_138 = &system_state_ptr;
      plocal_var_118 = &system_data_buffer_ptr;
      if (lStack_110 != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      lStack_110 = 0;
      local_var_100 = local_var_100 & 0xffffffff00000000;
      plocal_var_118 = &system_state_ptr;
      plocal_var_1b8 = &system_data_buffer_ptr;
      if (lStack_1b0 != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      lStack_1b0 = 0;
      local_var_1a0 = local_var_1a0 & 0xffffffff00000000;
      plocal_var_1b8 = &system_state_ptr;
      plocal_var_198 = &system_data_buffer_ptr;
      if (lStack_190 != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      lStack_190 = 0;
      local_var_180 = local_var_180 & 0xffffffff00000000;
      plocal_var_198 = &system_state_ptr;
    }
    Sleep(10);
  }
  SystemCore_Synchronizer(&plocal_var_e8);
  aplocal_var_88[0] = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_218);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address