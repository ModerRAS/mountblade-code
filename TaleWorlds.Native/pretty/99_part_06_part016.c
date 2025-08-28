#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_06_part016.c - 10 个函数
// 函数: void function_3b3360(int64_t *param_1,int param_2,int param_3)
void function_3b3360(int64_t *param_1,int param_2,int param_3)
{
  uint64_t *puVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int **ppiVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  int32_t *puVar11;
  int iVar12;
  int iVar13;
  uint64_t uVar14;
  int64_t *plVar15;
  int64_t lVar16;
  int64_t *plVar17;
  uint uVar18;
  int32_t *puVar19;
  int64_t lVar20;
  int iStackX_10;
  int *piStack_58;
  int64_t lStack_50;
  int *piStack_48;
  int64_t lStack_40;
  iStackX_10 = param_2;
  if (param_2 < param_3) {
    do {
      lVar3 = *param_1;
      iVar5 = iStackX_10 / *(int *)(lVar3 + 0x14);
      iVar12 = iStackX_10 % *(int *)(lVar3 + 0x14);
      lVar16 = *(int64_t *)(lVar3 + 0x40);
      uVar14 = (uint64_t)(int64_t)(iVar12 * 1000 + iVar5) % (uint64_t)*(uint *)(lVar3 + 0x48);
      for (piVar7 = *(int **)(lVar16 + uVar14 * 8); piVar7 != (int *)0x0;
          piVar7 = *(int **)(piVar7 + 4)) {
        if ((iVar12 == *piVar7) && (iVar5 == piVar7[1])) goto LAB_1803b33ed;
      }
      piVar7 = (int *)0x0;
LAB_1803b33ed:
      lVar20 = *(int64_t *)(lVar3 + 0x48);
      if (piVar7 == (int *)0x0) {
        piStack_48 = *(int **)(lVar16 + lVar20 * 8);
        ppiVar8 = &piStack_48;
        lStack_40 = lVar16 + lVar20 * 8;
      }
      else {
        piStack_58 = piVar7;
        ppiVar8 = &piStack_58;
        lStack_50 = lVar16 + uVar14 * 8;
      }
      if (*ppiVar8 == *(int **)(lVar16 + lVar20 * 8)) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(int64_t *)(*ppiVar8 + 2);
      }
      lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x68) + 0x60b40);
      if (lVar3 == 0) {
        uVar9 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x6c00,4,3);
// WARNING: Subroutine does not return
        memset(uVar9,0,0x6c00);
      }
      iVar13 = 0;
      puVar19 = (int32_t *)(((int64_t)iVar12 * 0x10 + (int64_t)iVar5) * 0x6c + lVar3);
      *(int32_t *)(lVar16 + 0x24) = *puVar19;
      iVar5 = puVar19[1];
      *(int *)(lVar16 + 0x28) = iVar5;
      *(int32_t *)(lVar16 + 0x2c) = puVar19[2];
      if (0 < *(int *)(*param_1 + 0x78)) {
        puVar11 = (int32_t *)(lVar16 + 0x30);
        do {
          iVar13 = iVar13 + 1;
          *puVar11 = *(int32_t *)((int64_t)puVar19 + (-0x24 - lVar16) + (int64_t)puVar11);
          puVar11 = puVar11 + 1;
        } while (iVar13 < *(int *)(*param_1 + 0x78));
        iVar5 = *(int *)(lVar16 + 0x28);
      }
      if (iVar5 < 2) {
        iVar5 = 2;
      }
      else if (10 < iVar5) {
        iVar5 = 10;
      }
      *(int *)(lVar16 + 0x28) = iVar5;
      *(int32_t *)(lVar16 + 0x860) = puVar19[0x13];
      *(int32_t *)(lVar16 + 0x864) = puVar19[0x14];
      *(int32_t *)(lVar16 + 0x868) = puVar19[0x15];
      *(int32_t *)(lVar16 + 0x86c) = puVar19[0x16];
      *(int32_t *)(lVar16 + 0x74) = puVar19[0x17];
      iVar5 = (1 << ((byte)*(int32_t *)(lVar16 + 0x28) & 0x1f)) + 1;
      *(int32_t *)(lVar16 + 0x78) = puVar19[0x18];
      uVar2 = puVar19[0x19];
      *(int *)(lVar16 + 0x70) = iVar5;
      *(int32_t *)(lVar16 + 0x7c) = uVar2;
      plVar17 = (int64_t *)(lVar16 + 0x878);
      uVar18 = iVar5 * iVar5;
      if (*plVar17 != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *plVar17 = 0;
      lVar3 = system_system_data_memory;
      if (*(char *)(*(int64_t *)(*param_1 + 0x68) + 0x2910) == '\0') {
        if (uVar18 == 0) {
          plVar10 = (int64_t *)0x0;
        }
        else {
          plVar10 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar18 * 8);
        }
        lVar20 = 0;
        *plVar17 = (int64_t)plVar10;
        lVar16 = lVar20;
        lVar3 = system_system_data_memory;
        if ((0 < (int)uVar18) && (1 < uVar18)) {
          plVar15 = (int64_t *)(system_system_data_memory + 0x38);
          lVar4 = *plVar15;
          if (((plVar17 < plVar10) || (plVar10 + (int)(uVar18 - 1) < plVar17)) &&
             ((plVar15 < plVar10 || (lVar16 = 0, plVar10 + (int)(uVar18 - 1) < plVar15)))) {
            uVar6 = uVar18 & 0x80000001;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
            }
            do {
              lVar20 = lVar20 + 2;
            } while (lVar20 < (int)(uVar18 - uVar6));
            for (uVar14 = (uint64_t)((int64_t)((int)((uVar18 - uVar6) + 1) / 2) << 4) >> 3;
                lVar16 = lVar20, lVar3 = system_system_data_memory, uVar14 != 0; uVar14 = uVar14 - 1) {
              *plVar10 = lVar4;
              plVar10 = plVar10 + 1;
            }
          }
        }
        for (; lVar20 = system_system_data_memory, lVar16 < (int)uVar18; lVar16 = lVar16 + 1) {
          puVar1 = (uint64_t *)(system_system_data_memory + 0x38);
          system_system_data_memory = lVar3;
          *(uint64_t *)(*plVar17 + lVar16 * 8) = *puVar1;
          lVar3 = system_system_data_memory;
          system_system_data_memory = lVar20;
        }
      }
      system_system_data_memory = lVar3;
      iStackX_10 = iStackX_10 + 1;
    } while (iStackX_10 < param_3);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3b337b(int64_t *param_1,int param_2)
void function_3b337b(int64_t *param_1,int param_2)
{
  uint64_t *puVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int **ppiVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  int32_t *puVar11;
  uint64_t uVar12;
  int iVar13;
  int64_t *plVar14;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t lVar15;
  int64_t *plVar16;
  uint uVar17;
  int32_t *puVar18;
  int64_t lVar19;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int *piStackX_20;
  int *local_var_30;
  int64_t local_var_38;
  int local_buffer_88;
  int local_buffer_90;
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  do {
    lVar3 = *param_1;
    iVar5 = param_2 / *(int *)(lVar3 + 0x14);
    param_2 = param_2 % *(int *)(lVar3 + 0x14);
    lVar15 = *(int64_t *)(lVar3 + 0x40);
    for (piVar7 = *(int **)(lVar15 + ((uint64_t)(int64_t)(param_2 * 1000 + iVar5) %
                                     (uint64_t)*(uint *)(lVar3 + 0x48)) * 8); piVar7 != (int *)0x0;
        piVar7 = *(int **)(piVar7 + 4)) {
      if ((param_2 == *piVar7) && (iVar5 == piVar7[1])) goto LAB_1803b33ed;
    }
    piVar7 = (int *)0x0;
LAB_1803b33ed:
    lVar19 = *(int64_t *)(lVar3 + 0x48);
    if (piVar7 == (int *)0x0) {
      local_var_30 = *(int **)(lVar15 + lVar19 * 8);
      ppiVar8 = &local_buffer_00000030;
      local_var_38 = lVar15 + lVar19 * 8;
    }
    else {
      piStackX_20 = piVar7;
      ppiVar8 = &piStackX_20;
    }
    if (*ppiVar8 == *(int **)(lVar15 + lVar19 * 8)) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(int64_t *)(*ppiVar8 + 2);
    }
    lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x68) + 0x60b40);
    if (lVar3 == 0) {
      uVar9 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x6c00,4,3);
// WARNING: Subroutine does not return
      memset(uVar9,0,0x6c00);
    }
    iVar13 = 0;
    puVar18 = (int32_t *)(((int64_t)param_2 * 0x10 + (int64_t)iVar5) * 0x6c + lVar3);
    *(int32_t *)(lVar15 + 0x24) = *puVar18;
    iVar5 = puVar18[1];
    *(int *)(lVar15 + 0x28) = iVar5;
    *(int32_t *)(lVar15 + 0x2c) = puVar18[2];
    if (0 < *(int *)(*param_1 + 0x78)) {
      puVar11 = (int32_t *)(lVar15 + 0x30);
      do {
        iVar13 = iVar13 + 1;
        *puVar11 = *(int32_t *)((int64_t)puVar18 + (-0x24 - lVar15) + (int64_t)puVar11);
        puVar11 = puVar11 + 1;
      } while (iVar13 < *(int *)(*param_1 + 0x78));
      iVar5 = *(int *)(lVar15 + 0x28);
    }
    if (iVar5 < 2) {
      iVar5 = 2;
    }
    else if (10 < iVar5) {
      iVar5 = 10;
    }
    *(int *)(lVar15 + 0x28) = iVar5;
    *(int32_t *)(lVar15 + 0x860) = puVar18[0x13];
    *(int32_t *)(lVar15 + 0x864) = puVar18[0x14];
    *(int32_t *)(lVar15 + 0x868) = puVar18[0x15];
    *(int32_t *)(lVar15 + 0x86c) = puVar18[0x16];
    *(int32_t *)(lVar15 + 0x74) = puVar18[0x17];
    iVar5 = (1 << ((byte)*(int32_t *)(lVar15 + 0x28) & 0x1f)) + 1;
    *(int32_t *)(lVar15 + 0x78) = puVar18[0x18];
    uVar2 = puVar18[0x19];
    *(int *)(lVar15 + 0x70) = iVar5;
    *(int32_t *)(lVar15 + 0x7c) = uVar2;
    plVar16 = (int64_t *)(lVar15 + 0x878);
    uVar17 = iVar5 * iVar5;
    if (*plVar16 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    *plVar16 = 0;
    lVar3 = system_system_data_memory;
    if (*(char *)(*(int64_t *)(*param_1 + 0x68) + 0x2910) == '\0') {
      if (uVar17 == 0) {
        plVar10 = (int64_t *)0x0;
      }
      else {
        plVar10 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar17 * 8);
      }
      lVar19 = 0;
      *plVar16 = (int64_t)plVar10;
      lVar15 = lVar19;
      lVar3 = system_system_data_memory;
      if ((0 < (int)uVar17) && (1 < uVar17)) {
        plVar14 = (int64_t *)(system_system_data_memory + 0x38);
        lVar4 = *plVar14;
        if (((plVar16 < plVar10) || (plVar10 + (int)(uVar17 - 1) < plVar16)) &&
           ((plVar14 < plVar10 || (lVar15 = 0, plVar10 + (int)(uVar17 - 1) < plVar14)))) {
          uVar6 = uVar17 & 0x80000001;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
          }
          do {
            lVar19 = lVar19 + 2;
          } while (lVar19 < (int)(uVar17 - uVar6));
          for (uVar12 = (uint64_t)((int64_t)((int)((uVar17 - uVar6) + 1) / 2) << 4) >> 3;
              lVar15 = lVar19, lVar3 = system_system_data_memory, uVar12 != 0; uVar12 = uVar12 - 1) {
            *plVar10 = lVar4;
            plVar10 = plVar10 + 1;
          }
        }
      }
      for (; lVar19 = system_system_data_memory, lVar15 < (int)uVar17; lVar15 = lVar15 + 1) {
        puVar1 = (uint64_t *)(system_system_data_memory + 0x38);
        system_system_data_memory = lVar3;
        *(uint64_t *)(*plVar16 + lVar15 * 8) = *puVar1;
        lVar3 = system_system_data_memory;
        system_system_data_memory = lVar19;
      }
    }
    system_system_data_memory = lVar3;
    param_2 = local_buffer_88 + 1;
    local_buffer_88 = param_2;
    if (local_buffer_90 <= param_2) {
      return;
    }
  } while( true );
}
// 函数: void function_3b368e(void)
void function_3b368e(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3b3690(int64_t *param_1)
void function_3b3690(int64_t *param_1)
{
  int32_t uVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int8_t stack_array_1c8 [40];
  uint64_t local_var_1a0;
  void *plocal_var_188;
  uint64_t *plocal_var_180;
  int32_t local_var_178;
  uint64_t local_var_170;
  void **pplocal_var_168;
  uint64_t local_var_160;
  uint64_t local_var_158;
  uint64_t local_var_150;
  int16_t local_var_148;
  int8_t local_var_146;
  uint64_t local_var_138;
  int64_t lStack_130;
  uint64_t local_var_128;
  int8_t local_var_120;
  int8_t local_var_11f;
  int8_t local_var_11e;
  uint64_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_108;
  int32_t local_var_100;
  uint64_t local_var_f8;
  int8_t stack_array_e8 [32];
  void *plocal_var_c8;
  int64_t lStack_c0;
  int32_t local_var_b0;
  uint64_t local_var_38;
  local_var_f8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1c8;
  local_var_160 = 0;
  local_var_158 = 0;
  local_var_150 = 0;
  local_var_148 = 0;
  local_var_146 = 0x23;
  local_var_11e = 0x23;
  puVar2 = (uint64_t *)param_1[1];
  local_var_138 = *puVar2;
  local_var_128 = puVar2[2];
  _local_var_120 = CONCAT11(*(int8_t *)((int64_t)puVar2 + 0x19),1);
  lVar3 = (int64_t)*(int *)(*param_1 + 0x10) + puVar2[1];
  lStack_130 = lVar3;
  if (*(int *)(*param_1 + 0x18) != 0) {
    System_BufferManager(&local_var_160);
  }
  pplocal_var_168 = (void **)&local_var_118;
  local_var_118 = 0;
  local_var_110 = 0;
  local_var_108 = 0;
  local_var_100 = 3;
  plocal_var_188 = &system_data_buffer_ptr;
  local_var_170 = 0;
  plocal_var_180 = (uint64_t *)0x0;
  local_var_178 = 0;
  puVar2 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x30,0x13);
  *(int8_t *)puVar2 = 0;
  plocal_var_180 = puVar2;
  uVar1 = CoreMemoryPoolCleaner(puVar2);
  local_var_170 = CONCAT44(local_var_170._4_4_,uVar1);
  *puVar2 = 0x7420656c62616e55;
  puVar2[1] = 0x706d6f636564206f;
  *(int32_t *)(puVar2 + 2) = 0x73736572;
  *(int32_t *)((int64_t)puVar2 + 0x14) = 0x202c6465;
  *(int32_t *)(puVar2 + 3) = 0x72726f63;
  *(int32_t *)((int64_t)puVar2 + 0x1c) = 0x65747075;
  *(int32_t *)(puVar2 + 4) = 0x65742064;
  *(int32_t *)((int64_t)puVar2 + 0x24) = 0x69617272;
  *(int32_t *)(puVar2 + 5) = 0x6966206e;
  *(int32_t *)((int64_t)puVar2 + 0x2c) = 0x21656c;
  local_var_178 = 0x2f;
  local_var_1a0 = local_var_158;
  function_3c57f0(&local_var_118,stack_array_e8,lVar3);
  plocal_var_c8 = &system_data_buffer_ptr;
  pplocal_var_168 = &plocal_var_c8;
  if (lStack_c0 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_c0 = 0;
  local_var_b0 = 0;
  plocal_var_c8 = &system_state_ptr;
  plocal_var_188 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_3b3bf0(uint64_t param_1,int64_t param_2)
{
  int *piVar1;
  int iVar2;
  uint64_t *puVar3;
  puVar3 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,0x23);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(int16_t *)(puVar3 + 2) = 0;
  *(int32_t *)((int64_t)puVar3 + 0x62) = 0;
  *(uint64_t *)((int64_t)puVar3 + 0x54) = 0;
  *(int32_t *)((int64_t)puVar3 + 0x5c) = 0;
  *(int16_t *)(puVar3 + 0xc) = 0;
  *(int8_t *)((int64_t)puVar3 + 0x66) = 0;
  *(uint64_t *)((int64_t)puVar3 + 0x14) = 0;
  *(uint64_t *)((int64_t)puVar3 + 0x1c) = 0;
  *(uint64_t *)((int64_t)puVar3 + 0x24) = 0;
  *(uint64_t *)((int64_t)puVar3 + 0x2c) = 0;
  *(uint64_t *)((int64_t)puVar3 + 0x34) = 0;
  *(uint64_t *)((int64_t)puVar3 + 0x3c) = 0;
  *(uint64_t *)((int64_t)puVar3 + 0x44) = 0;
  *(uint64_t *)((int64_t)puVar3 + 0x4c) = 0;
  *(int8_t *)((int64_t)puVar3 + 0x12) = 0x23;
  iVar2 = **(int **)(param_2 + 8);
  piVar1 = *(int **)(param_2 + 8) + 1;
  *(int **)(param_2 + 8) = piVar1;
  function_2a7bf0(piVar1,iVar2,puVar3);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (int64_t)iVar2;
  return puVar3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3b3ca0(int64_t *param_1,uint64_t param_2,int64_t param_3)
void function_3b3ca0(int64_t *param_1,uint64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int32_t *puVar8;
  int64_t *plVar9;
  int32_t *puVar10;
  int32_t uVar11;
  uVar6 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x3b0,0x10,0x23);
  plVar7 = (int64_t *)RenderingSystem_23A2E0(uVar6,0);
  puVar8 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13);
  *(int8_t *)puVar8 = 0;
  uVar4 = CoreMemoryPoolCleaner(puVar8);
  *puVar8 = 0x72726574;
  puVar8[1] = 0x5f6e6961;
  puVar8[2] = 0x65646f6e;
  puVar8[3] = 0x6965685f;
  *(uint64_t *)(puVar8 + 4) = 0x5f70616d746867;
  lVar1 = *(int64_t *)(*param_1 + 0x68);
  iVar5 = *(int *)(lVar1 + 0x4e8);
  if (0 < iVar5) {
    if ((iVar5 != -0x17) && (uVar4 < iVar5 + 0x18U)) {
      puVar8 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar8,iVar5 + 0x18U,0x10,0x13);
      CoreMemoryPoolCleaner(puVar8);
      iVar5 = *(int *)(lVar1 + 0x4e8);
    }
// WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar8 + 0x17),*(uint64_t *)(lVar1 + 0x4e0),
           (int64_t)(iVar5 + 1));
  }
  puVar10 = (int32_t *)&system_buffer_ptr;
  if (puVar8 != (int32_t *)0x0) {
    puVar10 = puVar8;
  }
  uVar11 = (**(code **)(plVar7[2] + 0x10))(plVar7 + 2,puVar10);
  plVar9 = (int64_t *)function_3b3bf0(uVar11,param_2,0xc);
  *(int8_t *)((int64_t)plVar9 + 0x11) = 1;
  *(int64_t **)(param_3 + 0x818) = plVar9;
  if (system_data_2847 == '\0') {
    function_0a5810(system_message_buffer,plVar9,0,0,plVar7,
                  *(int32_t *)(*(int64_t *)(*param_1 + 0x68) + 0xa4));
    function_23ce10(plVar7);
  }
  else {
    uVar6 = *(uint64_t *)((int64_t)plVar9 + 0x1c);
    *(uint64_t *)((int64_t)plVar7 + 0x2e4) = *(uint64_t *)((int64_t)plVar9 + 0x14);
    *(uint64_t *)((int64_t)plVar7 + 0x2ec) = uVar6;
    uVar6 = *(uint64_t *)((int64_t)plVar9 + 0x2c);
    *(uint64_t *)((int64_t)plVar7 + 0x2f4) = *(uint64_t *)((int64_t)plVar9 + 0x24);
    *(uint64_t *)((int64_t)plVar7 + 0x2fc) = uVar6;
    uVar6 = *(uint64_t *)((int64_t)plVar9 + 0x3c);
    *(uint64_t *)((int64_t)plVar7 + 0x304) = *(uint64_t *)((int64_t)plVar9 + 0x34);
    *(uint64_t *)((int64_t)plVar7 + 0x30c) = uVar6;
    uVar6 = *(uint64_t *)((int64_t)plVar9 + 0x4c);
    *(uint64_t *)((int64_t)plVar7 + 0x314) = *(uint64_t *)((int64_t)plVar9 + 0x44);
    *(uint64_t *)((int64_t)plVar7 + 0x31c) = uVar6;
    lVar1 = plVar9[0xb];
    uVar11 = *(int32_t *)((int64_t)plVar9 + 0x5c);
    lVar3 = plVar9[0xc];
    *(int32_t *)((int64_t)plVar7 + 0x324) = *(int32_t *)((int64_t)plVar9 + 0x54);
    *(int *)(plVar7 + 0x65) = (int)lVar1;
    *(int32_t *)((int64_t)plVar7 + 0x32c) = uVar11;
    *(int *)(plVar7 + 0x66) = (int)lVar3;
    *(uint64_t *)((int64_t)plVar7 + 0x334) = *(uint64_t *)((int64_t)plVar9 + 100);
  }
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
    (**(code **)(*plVar7 + 0x28))(plVar7);
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plVar2 = *(int64_t **)(param_3 + 0x1c0);
  *(int64_t **)(param_3 + 0x1c0) = plVar7;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x38))();
    (**(code **)(*plVar7 + 0x38))(plVar7);
  }
  *(int8_t *)((int64_t)plVar9 + 0x11) = 0;
  if (*(char *)(*(int64_t *)(*param_1 + 0x68) + 0x2910) != '\0') {
    *(uint64_t *)(param_3 + 0x818) = 0;
    if (*(char *)((int64_t)plVar9 + 0x11) == '\0') {
      if (((char)plVar9[2] == '\0') && (*plVar9 != 0)) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *plVar9 = 0;
      plVar9[1] = 0;
      *(int8_t *)(plVar9 + 2) = 0;
    }
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(plVar9);
  }
  if (puVar8 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(puVar8);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3b3fa0(int64_t *param_1,uint64_t param_2,int64_t param_3)
void function_3b3fa0(int64_t *param_1,uint64_t param_2,int64_t param_3)
{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int32_t *puVar8;
  int64_t lVar9;
  int32_t *puVar10;
  int32_t uVar11;
  lVar9 = *param_1;
  if ((*(int64_t *)(lVar9 + 0x198) == 0 && *(int *)(*(int64_t *)(lVar9 + 0x68) + 0x60a70) < 1) ||
     (*(char *)param_1[1] != '\0')) {
    uVar6 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x3b0,0x10,CONCAT71((int7)((uint64_t)lVar9 >> 8),0x23));
    plVar7 = (int64_t *)RenderingSystem_23A2E0(uVar6,0);
    puVar8 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13);
    *(int8_t *)puVar8 = 0;
    uVar4 = CoreMemoryPoolCleaner(puVar8);
    *puVar8 = 0x72726574;
    puVar8[1] = 0x5f6e6961;
    puVar8[2] = 0x65646f6e;
    puVar8[3] = 0x726f6e5f;
    *(uint64_t *)(puVar8 + 4) = 0x5f70616d6c616d;
    lVar9 = *(int64_t *)(*param_1 + 0x68);
    iVar5 = *(int *)(lVar9 + 0x4e8);
    if (0 < iVar5) {
      if ((iVar5 != -0x17) && (uVar4 < iVar5 + 0x18U)) {
        puVar8 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar8,iVar5 + 0x18U,0x10,0x13);
        CoreMemoryPoolCleaner(puVar8);
        iVar5 = *(int *)(lVar9 + 0x4e8);
      }
// WARNING: Subroutine does not return
      memcpy((int8_t *)((int64_t)puVar8 + 0x17),*(uint64_t *)(lVar9 + 0x4e0),
             (int64_t)(iVar5 + 1));
    }
    puVar10 = (int32_t *)&system_buffer_ptr;
    if (puVar8 != (int32_t *)0x0) {
      puVar10 = puVar8;
    }
    uVar11 = (**(code **)(plVar7[2] + 0x10))(plVar7 + 2,puVar10);
    lVar9 = function_3b3bf0(uVar11,param_2,0);
    *(int8_t *)(lVar9 + 0x11) = 1;
    *(int64_t *)(param_3 + 0x810) = lVar9;
    if (system_data_2847 == '\0') {
      function_0a5810(system_message_buffer,lVar9,0,0,plVar7,
                    *(int32_t *)(*(int64_t *)(*param_1 + 0x68) + 0xa4));
      function_23ce10(plVar7);
    }
    else {
      uVar6 = *(uint64_t *)(lVar9 + 0x1c);
      *(uint64_t *)((int64_t)plVar7 + 0x2e4) = *(uint64_t *)(lVar9 + 0x14);
      *(uint64_t *)((int64_t)plVar7 + 0x2ec) = uVar6;
      uVar6 = *(uint64_t *)(lVar9 + 0x2c);
      *(uint64_t *)((int64_t)plVar7 + 0x2f4) = *(uint64_t *)(lVar9 + 0x24);
      *(uint64_t *)((int64_t)plVar7 + 0x2fc) = uVar6;
      uVar6 = *(uint64_t *)(lVar9 + 0x3c);
      *(uint64_t *)((int64_t)plVar7 + 0x304) = *(uint64_t *)(lVar9 + 0x34);
      *(uint64_t *)((int64_t)plVar7 + 0x30c) = uVar6;
      uVar6 = *(uint64_t *)(lVar9 + 0x4c);
      *(uint64_t *)((int64_t)plVar7 + 0x314) = *(uint64_t *)(lVar9 + 0x44);
      *(uint64_t *)((int64_t)plVar7 + 0x31c) = uVar6;
      uVar11 = *(int32_t *)(lVar9 + 0x58);
      uVar2 = *(int32_t *)(lVar9 + 0x5c);
      uVar3 = *(int32_t *)(lVar9 + 0x60);
      *(int32_t *)((int64_t)plVar7 + 0x324) = *(int32_t *)(lVar9 + 0x54);
      *(int32_t *)(plVar7 + 0x65) = uVar11;
      *(int32_t *)((int64_t)plVar7 + 0x32c) = uVar2;
      *(int32_t *)(plVar7 + 0x66) = uVar3;
      *(uint64_t *)((int64_t)plVar7 + 0x334) = *(uint64_t *)(lVar9 + 100);
    }
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7);
      (**(code **)(*plVar7 + 0x28))(plVar7);
      (**(code **)(*plVar7 + 0x28))(plVar7);
    }
    plVar1 = *(int64_t **)(param_3 + 0x138);
    *(int64_t **)(param_3 + 0x138) = plVar7;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x38))();
      (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    *(int8_t *)(lVar9 + 0x11) = 0;
    if (puVar8 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar8);
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3b4280(int64_t *param_1,int64_t param_2)
void function_3b4280(int64_t *param_1,int64_t param_2)
{
  uint64_t *puVar1;
  int8_t stack_array_568 [88];
  uint64_t local_var_510;
  uint64_t local_var_508;
  uint64_t local_var_500;
  int16_t local_var_4f8;
  int8_t local_var_4f6;
  uint64_t local_var_4f0;
  int64_t lStack_4e8;
  uint64_t local_var_4e0;
  int8_t local_var_4d8;
  int8_t local_var_4d7;
  int8_t local_var_4d6;
  uint64_t local_var_490;
  int8_t stack_array_448 [1024];
  uint64_t local_var_48;
  local_var_490 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_568;
  local_var_510 = 0;
  local_var_508 = 0;
  local_var_500 = 0;
  local_var_4f8 = 0;
  local_var_4f6 = 0x23;
  local_var_4d6 = 0x23;
  puVar1 = (uint64_t *)*param_1;
  local_var_4f0 = *puVar1;
  local_var_4e0 = puVar1[2];
  _local_var_4d8 = CONCAT11(*(int8_t *)((int64_t)puVar1 + 0x19),1);
  lStack_4e8 = (int64_t)*(int *)(param_2 + 8) + puVar1[1];
// WARNING: Subroutine does not return
  memset(stack_array_448,0,0x400);
}
// 函数: void function_3b4590(int64_t *param_1,int param_2,int param_3)
void function_3b4590(int64_t *param_1,int param_2,int param_3)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int *piVar6;
  int **ppiVar7;
  int iVar8;
  int64_t lVar9;
  uint uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int iVar14;
  uint64_t uVar15;
  int *piStack_60;
  uint64_t *plocal_var_58;
  int *piStack_50;
  uint64_t *plocal_var_48;
  int64_t lStack_40;
  int64_t lStack_38;
  int64_t lStack_30;
  char cStack_28;
  int8_t local_var_27;
  int8_t local_var_26;
  uVar15 = 0xfffffffffffffffe;
  uVar11 = (uint64_t)param_2;
  if (param_2 < param_3) {
    lVar12 = uVar11 * 4;
    do {
      lVar9 = *param_1;
      uVar4 = (uint64_t)(uint)((int)uVar11 >> 0x1f) << 0x20 | uVar11 & 0xffffffff;
      uVar5 = (int64_t)uVar4 / (int64_t)*(int *)(lVar9 + 0x14);
      iVar8 = (int)((int64_t)uVar4 % (int64_t)*(int *)(lVar9 + 0x14));
      iVar14 = (int)uVar5;
      lVar2 = *(int64_t *)(lVar9 + 0x40);
      puVar1 = (uint64_t *)
               (lVar2 + ((uint64_t)(int64_t)(iVar8 * 1000 + iVar14) %
                        (uint64_t)*(uint *)(lVar9 + 0x48)) * 8);
      for (piVar6 = (int *)*puVar1; piVar6 != (int *)0x0; piVar6 = *(int **)(piVar6 + 4)) {
        if ((iVar8 == *piVar6) && (iVar14 == piVar6[1])) {
          piStack_60 = piVar6;
          plocal_var_58 = puVar1;
          ppiVar7 = &piStack_60;
          lVar9 = *(int64_t *)(lVar9 + 0x48);
          goto LAB_1803b4640;
        }
      }
      lVar9 = *(int64_t *)(lVar9 + 0x48);
      plocal_var_48 = (uint64_t *)(lVar2 + lVar9 * 8);
      piStack_50 = (int *)*plocal_var_48;
      ppiVar7 = &piStack_50;
LAB_1803b4640:
      uVar13 = 0;
      if (*ppiVar7 != *(int **)(lVar2 + lVar9 * 8)) {
        uVar13 = *(uint64_t *)(*ppiVar7 + 2);
      }
      local_var_26 = 0x23;
      plVar3 = (int64_t *)param_1[1];
      lStack_40 = *plVar3;
      lStack_30 = plVar3[2];
      _cStack_28 = CONCAT11(*(int8_t *)((int64_t)plVar3 + 0x19),1);
      lStack_38 = (int64_t)*(int *)(lVar12 + param_1[2]) + plVar3[1];
      function_3b3ca0(param_1[3],&lStack_40,uVar13,uVar5 & 0xffffffff,uVar15);
      if ((cStack_28 == '\0') && (lStack_40 != 0)) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (uint64_t)uVar10;
      lVar12 = lVar12 + 4;
    } while ((int)uVar10 < param_3);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3b4700(int64_t *param_1,int64_t param_2)
void function_3b4700(int64_t *param_1,int64_t param_2)
{
  uint64_t *puVar1;
  int8_t stack_array_568 [88];
  uint64_t local_var_510;
  uint64_t local_var_508;
  uint64_t local_var_500;
  int16_t local_var_4f8;
  int8_t local_var_4f6;
  uint64_t local_var_4f0;
  int64_t lStack_4e8;
  uint64_t local_var_4e0;
  int8_t local_var_4d8;
  int8_t local_var_4d7;
  int8_t local_var_4d6;
  uint64_t local_var_490;
  int8_t stack_array_448 [1024];
  uint64_t local_var_48;
  local_var_490 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_568;
  local_var_510 = 0;
  local_var_508 = 0;
  local_var_500 = 0;
  local_var_4f8 = 0;
  local_var_4f6 = 0x23;
  local_var_4d6 = 0x23;
  puVar1 = (uint64_t *)*param_1;
  local_var_4f0 = *puVar1;
  local_var_4e0 = puVar1[2];
  _local_var_4d8 = CONCAT11(*(int8_t *)((int64_t)puVar1 + 0x19),1);
  lStack_4e8 = (int64_t)*(int *)(param_2 + 8) + puVar1[1];
// WARNING: Subroutine does not return
  memset(stack_array_448,0,0x400);
}
// 函数: void function_3b4a10(int64_t *param_1,int param_2,int param_3)
void function_3b4a10(int64_t *param_1,int param_2,int param_3)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int *piVar6;
  int **ppiVar7;
  int iVar8;
  int64_t lVar9;
  uint uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int iVar14;
  uint64_t uVar15;
  int *piStack_60;
  uint64_t *plocal_var_58;
  int *piStack_50;
  uint64_t *plocal_var_48;
  int64_t lStack_40;
  int64_t lStack_38;
  int64_t lStack_30;
  char cStack_28;
  int8_t local_var_27;
  int8_t local_var_26;
  uVar15 = 0xfffffffffffffffe;
  uVar11 = (uint64_t)param_2;
  if (param_2 < param_3) {
    lVar12 = uVar11 * 4;
    do {
      lVar9 = *param_1;
      uVar4 = (uint64_t)(uint)((int)uVar11 >> 0x1f) << 0x20 | uVar11 & 0xffffffff;
      uVar5 = (int64_t)uVar4 / (int64_t)*(int *)(lVar9 + 0x14);
      iVar8 = (int)((int64_t)uVar4 % (int64_t)*(int *)(lVar9 + 0x14));
      iVar14 = (int)uVar5;
      lVar2 = *(int64_t *)(lVar9 + 0x40);
      puVar1 = (uint64_t *)
               (lVar2 + ((uint64_t)(int64_t)(iVar8 * 1000 + iVar14) %
                        (uint64_t)*(uint *)(lVar9 + 0x48)) * 8);
      for (piVar6 = (int *)*puVar1; piVar6 != (int *)0x0; piVar6 = *(int **)(piVar6 + 4)) {
        if ((iVar8 == *piVar6) && (iVar14 == piVar6[1])) {
          piStack_60 = piVar6;
          plocal_var_58 = puVar1;
          ppiVar7 = &piStack_60;
          lVar9 = *(int64_t *)(lVar9 + 0x48);
          goto LAB_1803b4ac0;
        }
      }
      lVar9 = *(int64_t *)(lVar9 + 0x48);
      plocal_var_48 = (uint64_t *)(lVar2 + lVar9 * 8);
      piStack_50 = (int *)*plocal_var_48;
      ppiVar7 = &piStack_50;
LAB_1803b4ac0:
      uVar13 = 0;
      if (*ppiVar7 != *(int **)(lVar2 + lVar9 * 8)) {
        uVar13 = *(uint64_t *)(*ppiVar7 + 2);
      }
      local_var_26 = 0x23;
      plVar3 = (int64_t *)param_1[1];
      lStack_40 = *plVar3;
      lStack_30 = plVar3[2];
      _cStack_28 = CONCAT11(*(int8_t *)((int64_t)plVar3 + 0x19),1);
      lStack_38 = (int64_t)*(int *)(lVar12 + param_1[2]) + plVar3[1];
      function_3b3fa0(param_1[3],&lStack_40,uVar13,uVar5 & 0xffffffff,uVar15);
      if ((cStack_28 == '\0') && (lStack_40 != 0)) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (uint64_t)uVar10;
      lVar12 = lVar12 + 4;
    } while ((int)uVar10 < param_3);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address