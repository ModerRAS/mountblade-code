// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor
// 99_part_06_part020.c - 9 个函数
// 函数: void RenderingSystem_b8390(int64_t param_1)
void RenderingSystem_b8390(int64_t param_1)
{
  int64_t lVar1;
  uint64_t uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int8_t stack_array_228 [32];
  int8_t local_var_208;
  void *plocal_var_1f8;
  uint64_t *plocal_var_1f0;
  int32_t local_var_1e8;
  uint64_t local_var_1e0;
  uint local_var_1d8;
  uint local_var_1d4;
  int32_t local_var_1d0;
  int32_t local_var_1cc;
  int32_t local_var_1c8;
  int32_t local_var_1c4;
  int32_t local_var_1c0;
  int32_t local_var_1bc;
  int32_t local_var_1b8;
  int8_t local_var_1b4;
  uint64_t local_var_1b3;
  int32_t local_var_1a8;
  int8_t local_var_1a4;
  int64_t *plStack_1a0;
  int64_t *plStack_198;
  int64_t *plStack_190;
  uint64_t local_var_188;
  void *plocal_var_178;
  int8_t *plocal_var_170;
  int32_t local_var_168;
  int8_t stack_array_160 [136];
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [136];
  uint64_t local_var_38;
  local_var_188 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_228;
  uVar6 = 0x400;
  if (*(char *)(*(int64_t *)(param_1 + 0x68) + 0x2964) != '\0') {
    uVar6 = 0x1000;
  }
  if (system_data_ec7a != '\0') {
    uVar6 = 0x2000;
  }
  cVar3 = SystemFunction_0001803b6e60(param_1);
  if (cVar3 != '\0') {
    lVar1 = *(int64_t *)(param_1 + 0x160);
    if (((lVar1 == 0) || (uVar6 != *(ushort *)(lVar1 + 0x32c))) ||
       (uVar6 != *(ushort *)(lVar1 + 0x32e))) {
      local_var_1d0 = 1;
      local_var_1cc = 1;
      local_var_1b3 = 1;
      local_var_1b4 = 0;
      local_var_1a4 = 0;
      local_var_1c8 = 0xc;
      local_var_1c4 = 0x3f800000;
      local_var_1c0 = 0x3f800000;
      local_var_1bc = 0x3f800000;
      local_var_1b8 = 0x3f800000;
      local_var_1a8 = *(int32_t *)(*(int64_t *)(param_1 + 0x68) + 0xa4);
      plocal_var_1f8 = &system_data_buffer_ptr;
      local_var_1e0 = 0;
      plocal_var_1f0 = (uint64_t *)0x0;
      local_var_1e8 = 0;
      local_var_1d8 = uVar6;
      local_var_1d4 = uVar6;
      puVar7 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
      *(int8_t *)puVar7 = 0;
      plocal_var_1f0 = puVar7;
      uVar4 = CoreEngineSystemCleanup(puVar7);
      *puVar7 = 0x725f746867696568;
      *(int16_t *)(puVar7 + 1) = 0x5f74;
      *(int8_t *)((int64_t)puVar7 + 10) = 0;
      local_var_1e8 = 10;
      lVar1 = *(int64_t *)(param_1 + 0x68);
      iVar5 = *(int *)(lVar1 + 0x4e8);
      local_var_1e0._0_4_ = uVar4;
      if (0 < iVar5) {
        if ((iVar5 != -10) && (uVar4 < iVar5 + 0xbU)) {
          local_var_208 = 0x13;
          puVar7 = (uint64_t *)DataValidator(system_memory_pool_ptr,puVar7,iVar5 + 0xbU,0x10);
          plocal_var_1f0 = puVar7;
          local_var_1e0._0_4_ = CoreEngineSystemCleanup(puVar7);
          iVar5 = *(int *)(lVar1 + 0x4e8);
        }
// WARNING: Subroutine does not return
        memcpy((int8_t *)((int64_t)puVar7 + 10),*(uint64_t *)(lVar1 + 0x4e0),
               (int64_t)(iVar5 + 1));
      }
      plocal_var_178 = &memory_allocator_3432_ptr;
      plocal_var_170 = stack_array_160;
      stack_array_160[0] = 0;
      local_var_168 = 10;
      puVar8 = (uint64_t *)&system_buffer_ptr;
      if (puVar7 != (uint64_t *)0x0) {
        puVar8 = puVar7;
      }
      strcpy_s(stack_array_160,0x80,puVar8);
      puVar8 = (uint64_t *)SystemInitializer(system_resource_state,&plStack_198,&plocal_var_178,&local_var_1d8);
      uVar2 = *puVar8;
      *puVar8 = 0;
      plStack_1a0 = *(int64_t **)(param_1 + 0x160);
      *(uint64_t *)(param_1 + 0x160) = uVar2;
      if (plStack_1a0 != (int64_t *)0x0) {
        (**(code **)(*plStack_1a0 + 0x38))();
      }
      if (plStack_198 != (int64_t *)0x0) {
        (**(code **)(*plStack_198 + 0x38))();
      }
      plocal_var_178 = &system_state_ptr;
      plocal_var_1f8 = &system_data_buffer_ptr;
      if (puVar7 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar7);
      }
      plocal_var_1f0 = (uint64_t *)0x0;
      local_var_1e0 = (uint64_t)local_var_1e0._4_4_ << 0x20;
      plocal_var_1f8 = &system_state_ptr;
    }
    lVar1 = *(int64_t *)(param_1 + 0x168);
    if (((lVar1 == 0) || (uVar6 != *(ushort *)(lVar1 + 0x32c))) ||
       (uVar6 != *(ushort *)(lVar1 + 0x32e))) {
      local_var_1d0 = 1;
      local_var_1cc = 1;
      local_var_1c4 = 0;
      local_var_1c0 = 0;
      local_var_1bc = 0;
      local_var_1b8 = 0x3f800000;
      local_var_1b3 = 1;
      local_var_1b4 = 0;
      local_var_1a4 = 0;
      local_var_1c8 = 0xb;
      local_var_1a8 = *(int32_t *)(*(int64_t *)(param_1 + 0x68) + 0xa4);
      plocal_var_1f8 = &system_data_buffer_ptr;
      local_var_1e0 = 0;
      plocal_var_1f0 = (uint64_t *)0x0;
      local_var_1e8 = 0;
      local_var_1d8 = uVar6;
      local_var_1d4 = uVar6;
      puVar7 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
      *(int8_t *)puVar7 = 0;
      plocal_var_1f0 = puVar7;
      uVar6 = CoreEngineSystemCleanup(puVar7);
      *puVar7 = 0x725f776f64616873;
      *(int16_t *)(puVar7 + 1) = 0x5f74;
      *(int8_t *)((int64_t)puVar7 + 10) = 0;
      local_var_1e8 = 10;
      lVar1 = *(int64_t *)(param_1 + 0x68);
      iVar5 = *(int *)(lVar1 + 0x4e8);
      local_var_1e0._0_4_ = uVar6;
      if (0 < iVar5) {
        if ((iVar5 != -10) && (uVar6 < iVar5 + 0xbU)) {
          local_var_208 = 0x13;
          puVar7 = (uint64_t *)DataValidator(system_memory_pool_ptr,puVar7,iVar5 + 0xbU,0x10);
          plocal_var_1f0 = puVar7;
          local_var_1e0._0_4_ = CoreEngineSystemCleanup(puVar7);
          iVar5 = *(int *)(lVar1 + 0x4e8);
        }
// WARNING: Subroutine does not return
        memcpy((int8_t *)((int64_t)puVar7 + 10),*(uint64_t *)(lVar1 + 0x4e0),
               (int64_t)(iVar5 + 1));
      }
      plocal_var_d8 = &memory_allocator_3432_ptr;
      plocal_var_d0 = stack_array_c0;
      stack_array_c0[0] = 0;
      local_var_c8 = 10;
      puVar8 = (uint64_t *)&system_buffer_ptr;
      if (puVar7 != (uint64_t *)0x0) {
        puVar8 = puVar7;
      }
      strcpy_s(stack_array_c0,0x80,puVar8);
      puVar8 = (uint64_t *)SystemInitializer(system_resource_state,&plStack_190,&plocal_var_d8,&local_var_1d8);
      uVar2 = *puVar8;
      *puVar8 = 0;
      plStack_1a0 = *(int64_t **)(param_1 + 0x168);
      *(uint64_t *)(param_1 + 0x168) = uVar2;
      if (plStack_1a0 != (int64_t *)0x0) {
        (**(code **)(*plStack_1a0 + 0x38))();
      }
      if (plStack_190 != (int64_t *)0x0) {
        (**(code **)(*plStack_190 + 0x38))();
      }
      plocal_var_d8 = &system_state_ptr;
      plocal_var_1f8 = &system_data_buffer_ptr;
      if (puVar7 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar7);
      }
      plocal_var_1f0 = (uint64_t *)0x0;
      local_var_1e0 = (uint64_t)local_var_1e0._4_4_ << 0x20;
      plocal_var_1f8 = &system_state_ptr;
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_228);
}
// 函数: void RenderingSystem_b88b0(int64_t param_1)
void RenderingSystem_b88b0(int64_t param_1)
{
  int iVar1;
  int64_t lVar2;
  int *piVar3;
  int **ppiVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int *piStack_38;
  int64_t lStack_30;
  int *piStack_28;
  int64_t lStack_20;
  uVar7 = 0;
  uVar9 = uVar7;
  uVar10 = uVar7;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      uVar5 = uVar7;
      if (0 < *(int *)(param_1 + 0x18)) {
        do {
          iVar1 = (int)uVar5;
          lVar2 = *(int64_t *)(param_1 + 0x40);
          uVar5 = (uint64_t)(int64_t)((int)uVar10 + iVar1) % (uint64_t)*(uint *)(param_1 + 0x48);
          for (piVar3 = *(int **)(lVar2 + uVar5 * 8); piVar3 != (int *)0x0;
              piVar3 = *(int **)(piVar3 + 4)) {
            if (((int)uVar9 == *piVar3) && (iVar1 == piVar3[1])) {
              lVar6 = *(int64_t *)(param_1 + 0x48);
              piStack_38 = piVar3;
              ppiVar4 = &piStack_38;
              lStack_30 = lVar2 + uVar5 * 8;
              goto LAB_1803b8932;
            }
          }
          lVar6 = *(int64_t *)(param_1 + 0x48);
          piStack_28 = *(int **)(lVar2 + lVar6 * 8);
          ppiVar4 = &piStack_28;
          lStack_20 = lVar2 + lVar6 * 8;
LAB_1803b8932:
          if ((*ppiVar4 != *(int **)(lVar2 + lVar6 * 8)) && (*(int64_t *)(*ppiVar4 + 2) != 0)) {
            RenderingSystem_a2e70();
          }
          uVar5 = (uint64_t)(iVar1 + 1U);
        } while ((int)(iVar1 + 1U) < *(int *)(param_1 + 0x18));
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
      uVar10 = (uint64_t)((int)uVar10 + 1000);
    } while ((int)uVar8 < *(int *)(param_1 + 0x14));
  }
  if (0 < *(int *)(param_1 + 0x78)) {
    iVar1 = *(int *)(*(int64_t *)(param_1 + 0x68) + 0x3054);
    uVar9 = uVar7;
    do {
      GenericFunction_1801fd6e0(*(uint64_t *)
                     (*(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x68) + 0x60b20) + uVar7)
                      + 8 + (int64_t)iVar1 * 8),param_1 + 0x1f0 + (int64_t)(int)uVar9 * 0x1a0,
                    param_1 + 0x188);
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
      uVar7 = uVar7 + 8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x78));
  }
  return;
}
// 函数: void RenderingSystem_b88d0(void)
void RenderingSystem_b88d0(void)
{
  int iVar1;
  int64_t lVar2;
  int *piVar3;
  int **ppiVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int unaff_ESI;
  int64_t unaff_RDI;
  uint uVar7;
  uint64_t unaff_R14;
  int *piStackX_20;
  int *local_var_30;
  int64_t local_var_38;
  uint64_t uVar8;
  uVar8 = unaff_R14 & 0xffffffff;
  do {
    uVar6 = unaff_R14 & 0xffffffff;
    if ((int)unaff_R14 < *(int *)(unaff_RDI + 0x18)) {
      do {
        iVar1 = (int)uVar6;
        lVar2 = *(int64_t *)(unaff_RDI + 0x40);
        for (piVar3 = *(int **)(lVar2 + ((uint64_t)(int64_t)((int)uVar8 + iVar1) %
                                        (uint64_t)*(uint *)(unaff_RDI + 0x48)) * 8);
            piVar3 != (int *)0x0; piVar3 = *(int **)(piVar3 + 4)) {
          if ((unaff_ESI == *piVar3) && (iVar1 == piVar3[1])) {
            lVar5 = *(int64_t *)(unaff_RDI + 0x48);
            piStackX_20 = piVar3;
            ppiVar4 = &piStackX_20;
            goto LAB_1803b8932;
          }
        }
        lVar5 = *(int64_t *)(unaff_RDI + 0x48);
        local_var_30 = *(int **)(lVar2 + lVar5 * 8);
        ppiVar4 = &local_buffer_00000030;
        local_var_38 = lVar2 + lVar5 * 8;
LAB_1803b8932:
        if ((*ppiVar4 != *(int **)(lVar2 + lVar5 * 8)) && (*(int64_t *)(*ppiVar4 + 2) != 0)) {
          RenderingSystem_a2e70();
        }
        uVar6 = (uint64_t)(iVar1 + 1U);
      } while ((int)(iVar1 + 1U) < *(int *)(unaff_RDI + 0x18));
    }
    unaff_ESI = unaff_ESI + 1;
    uVar8 = (uint64_t)((int)uVar8 + 1000);
    if (*(int *)(unaff_RDI + 0x14) <= unaff_ESI) {
      if ((int)unaff_R14 < *(int *)(unaff_RDI + 0x78)) {
        iVar1 = *(int *)(*(int64_t *)(unaff_RDI + 0x68) + 0x3054);
        uVar8 = unaff_R14;
        do {
          GenericFunction_1801fd6e0(*(uint64_t *)
                         (*(int64_t *)
                           (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x68) + 0x60b20) + unaff_R14) +
                          8 + (int64_t)iVar1 * 8),unaff_RDI + 0x1f0 + (int64_t)(int)uVar8 * 0x1a0,
                        unaff_RDI + 0x188);
          uVar7 = (int)uVar8 + 1;
          uVar8 = (uint64_t)uVar7;
          unaff_R14 = unaff_R14 + 8;
        } while ((int)uVar7 < *(int *)(unaff_RDI + 0x78));
      }
      return;
    }
  } while( true );
}
// 函数: void RenderingSystem_b8967(void)
void RenderingSystem_b8967(void)
{
  int iVar1;
  int64_t unaff_RDI;
  uint uVar2;
  uint64_t unaff_R14;
  uint64_t uVar3;
  if ((int)unaff_R14 < *(int *)(unaff_RDI + 0x78)) {
    iVar1 = *(int *)(*(int64_t *)(unaff_RDI + 0x68) + 0x3054);
    uVar3 = unaff_R14;
    do {
      GenericFunction_1801fd6e0(*(uint64_t *)
                     (*(int64_t *)
                       (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x68) + 0x60b20) + unaff_R14) + 8 +
                     (int64_t)iVar1 * 8),unaff_RDI + 0x1f0 + (int64_t)(int)uVar3 * 0x1a0,
                    unaff_RDI + 0x188);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
      unaff_R14 = unaff_R14 + 8;
    } while ((int)uVar2 < *(int *)(unaff_RDI + 0x78));
  }
  return;
}
// 函数: void RenderingSystem_b8974(void)
void RenderingSystem_b8974(void)
{
  int iVar1;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int unaff_R14D;
  iVar1 = *(int *)(in_RAX + 0x3054);
  do {
    GenericFunction_1801fd6e0(*(uint64_t *)
                   (*(int64_t *)
                     (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x68) + 0x60b20) + unaff_RBX) + 8 +
                   (int64_t)iVar1 * 8),unaff_RDI + 0x1f0 + (int64_t)unaff_R14D * 0x1a0,
                  unaff_RDI + 0x188);
    unaff_R14D = unaff_R14D + 1;
    unaff_RBX = unaff_RBX + 8;
  } while (unaff_R14D < *(int *)(unaff_RDI + 0x78));
  return;
}
// 函数: void RenderingSystem_b89d6(void)
void RenderingSystem_b89d6(void)
{
  return;
}
// 函数: void RenderingSystem_b89e4(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void RenderingSystem_b89e4(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  uint64_t param_5,int64_t param_6,int64_t param_7)
{
  int iVar1;
  int64_t *plVar2;
  int *in_RAX;
  uint64_t uVar3;
  int64_t lVar4;
  uint uVar5;
  uint64_t unaff_RBX;
  int unaff_ESI;
  int64_t unaff_RDI;
  uint64_t unaff_R14;
  int unaff_R15D;
  int *piVar6;
code_r0x0001803b89e4:
  lVar4 = *(int64_t *)(unaff_RDI + 0x48);
  plVar2 = (int64_t *)&local_buffer_00000020;
  param_5 = param_1;
  piVar6 = in_RAX;
  do {
    if ((*plVar2 != *(int64_t *)(param_3 + lVar4 * 8)) && (*(int64_t *)(*plVar2 + 8) != 0)) {
      RenderingSystem_a2e70();
    }
    uVar5 = (int)unaff_RBX + 1;
    unaff_RBX = (uint64_t)uVar5;
    if (*(int *)(unaff_RDI + 0x18) <= (int)uVar5) {
      do {
        unaff_ESI = unaff_ESI + 1;
        unaff_R15D = unaff_R15D + 1000;
        if (*(int *)(unaff_RDI + 0x14) <= unaff_ESI) {
          if ((int)unaff_R14 < *(int *)(unaff_RDI + 0x78)) {
            iVar1 = *(int *)(*(int64_t *)(unaff_RDI + 0x68) + 0x3054);
            uVar3 = unaff_R14;
            do {
              GenericFunction_1801fd6e0(*(uint64_t *)
                             (*(int64_t *)
                               (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x68) + 0x60b20) + unaff_R14
                               ) + 8 + (int64_t)iVar1 * 8),
                            unaff_RDI + 0x1f0 + (int64_t)(int)uVar3 * 0x1a0,unaff_RDI + 0x188,
                            param_4,piVar6);
              uVar5 = (int)uVar3 + 1;
              uVar3 = (uint64_t)uVar5;
              unaff_R14 = unaff_R14 + 8;
            } while ((int)uVar5 < *(int *)(unaff_RDI + 0x78));
          }
          return;
        }
        unaff_RBX = unaff_R14 & 0xffffffff;
      } while (*(int *)(unaff_RDI + 0x18) <= (int)unaff_R14);
    }
    param_3 = *(int64_t *)(unaff_RDI + 0x40);
    uVar3 = (uint64_t)(int64_t)(unaff_R15D + (int)unaff_RBX) %
            (uint64_t)*(uint *)(unaff_RDI + 0x48);
    param_1 = param_3 + uVar3 * 8;
    for (in_RAX = *(int **)(param_3 + uVar3 * 8); in_RAX != (int *)0x0;
        in_RAX = *(int **)(in_RAX + 4)) {
      if ((unaff_ESI == *in_RAX) && ((int)unaff_RBX == in_RAX[1])) goto code_r0x0001803b89e4;
    }
    lVar4 = *(int64_t *)(unaff_RDI + 0x48);
    param_6 = *(int64_t *)(param_3 + lVar4 * 8);
    plVar2 = &param_6;
    param_7 = param_3 + lVar4 * 8;
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * RenderingSystem_b8a00(uint64_t param_1,uint64_t param_2,int param_3,int param_4)
{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  puVar4 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x880,0x10,0x23,0xfffffffffffffffe);
  *puVar4 = &processed_var_8576_ptr;
  RenderingSystem_d1f30(puVar4 + 0x10);
  puVar4[0x108] = 0;
  puVar4[0x107] = 0;
  puVar4[0x104] = 0;
  puVar4[0x105] = 0;
  puVar4[0x109] = 0;
  *(int32_t *)(puVar4 + 0x10a) = 0x461c4000;
  *(int32_t *)((int64_t)puVar4 + 0x854) = 0x3f800000;
  *(int32_t *)(puVar4 + 0x10b) = 0x41a00000;
  puVar4[0x106] = 0;
  puVar4[2] = param_1;
  puVar4[0xf] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[3] = CONCAT44(param_4,param_3);
  *(int32_t *)(puVar4 + 0x10c) = 1;
  *(int32_t *)((int64_t)puVar4 + 0x864) = 1;
  *(int32_t *)(puVar4 + 0x10d) = 1;
  *(int32_t *)((int64_t)puVar4 + 0x86c) = 1;
  puVar4[0xe2] = 0;
  puVar4[0xf2] = 0;
  puVar4[0xe3] = 0;
  puVar4[0xf3] = 0;
  puVar4[0xe4] = 0;
  puVar4[0xf4] = 0;
  puVar4[0xe5] = 0;
  puVar4[0xf5] = 0;
  puVar4[0xe6] = 0;
  puVar4[0xf6] = 0;
  puVar4[0xe7] = 0;
  puVar4[0xf7] = 0;
  puVar4[0xe8] = 0;
  puVar4[0xf8] = 0;
  puVar4[0xe9] = 0;
  puVar4[0xf9] = 0;
  puVar4[0xea] = 0;
  puVar4[0xfa] = 0;
  puVar4[0xeb] = 0;
  puVar4[0xfb] = 0;
  puVar4[0xec] = 0;
  puVar4[0xfc] = 0;
  puVar4[0xed] = 0;
  puVar4[0xfd] = 0;
  puVar4[0xee] = 0;
  puVar4[0xfe] = 0;
  puVar4[0xef] = 0;
  puVar4[0xff] = 0;
  puVar4[0xf0] = 0;
  puVar4[0x100] = 0;
  puVar4[0xf1] = 0;
  puVar4[0x101] = 0;
  puVar4[0x102] = 0;
  puVar4[0x103] = 0;
  lVar3 = puVar4[2];
  fVar1 = *(float *)(lVar3 + 0x1c);
  fVar2 = *(float *)(lVar3 + 0x1c);
  puVar4[0x10] = 0x3f800000;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0x3f80000000000000;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0x3f800000;
  *(float *)(puVar4 + 0x16) = (float)param_3 * fVar1;
  *(float *)((int64_t)puVar4 + 0xb4) = (float)param_4 * fVar2;
  *(int32_t *)(puVar4 + 0x17) = 0;
  *(int32_t *)((int64_t)puVar4 + 0xbc) = 0x3f800000;
  *(int *)((int64_t)puVar4 + 0x5dc) = *(int *)(lVar3 + 0x14) * param_4 + param_3;
  puVar4[0xe] = 0;
  puVar4[0x10e] = 0;
  puVar4[0x10f] = 0;
  puVar4[0x3e] = lVar3 + 0x1f0;
  return puVar4;
}
// WARNING: Removing unreachable block (ram,0x0001803b8e25)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_b8cd0(int64_t *param_1)
void RenderingSystem_b8cd0(int64_t *param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  ushort *puVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint uVar12;
  int64_t lVar13;
  uint uVar14;
  ushort *puVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  ushort uVar18;
  uint64_t uVar19;
  float fVar20;
  int8_t stack_array_178 [32];
  uint local_var_158;
  int32_t local_var_150;
  int32_t local_var_148;
  float fStack_140;
  int64_t ***ppplStack_138;
  int64_t *plStack_128;
  void *plocal_var_120;
  int64_t lStack_118;
  uint local_var_110;
  int32_t local_var_108;
  int64_t *plStack_100;
  int64_t **pplStack_f8;
  int64_t *plStack_e8;
  uint64_t local_var_e0;
  int64_t **pplStack_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  int64_t lStack_b8;
  uint64_t local_var_b0;
  int16_t local_var_a8;
  int8_t local_var_a6;
  uint64_t local_var_a4;
  uint64_t local_var_9c;
  uint64_t local_var_94;
  uint64_t local_var_8c;
  uint64_t local_var_84;
  uint64_t local_var_7c;
  uint64_t local_var_74;
  uint64_t local_var_6c;
  uint64_t local_var_64;
  uint local_var_5c;
  int16_t local_var_58;
  int32_t local_var_56;
  char cStack_52;
  uint64_t local_var_48;
  local_var_c8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  uVar17 = 0;
  *(int32_t *)*param_1 = 0;
  *(int32_t *)(*param_1 + 4) = 0;
  lStack_b8 = 0;
  local_var_b0 = 0;
  uVar18 = 0;
  local_var_a8 = 0;
  local_var_a6 = 3;
  local_var_56 = 0;
  local_var_64 = 0;
  local_var_5c = 0;
  local_var_58 = 0;
  cStack_52 = '\0';
  local_var_a4 = 0;
  local_var_9c = 0;
  local_var_94 = 0;
  local_var_8c = 0;
  local_var_84 = 0;
  local_var_7c = 0;
  local_var_74 = 0;
  local_var_6c = 0;
  CoreEngineDataTransformer(&plocal_var_120,*(int64_t *)param_1[1] + 0x4d8);
  uVar12 = local_var_110 + 0x12;
  CoreEngineDataBufferProcessor(&plocal_var_120,uVar12);
  puVar8 = (uint64_t *)((uint64_t)local_var_110 + lStack_118);
  *puVar8 = 0x736369737968705f;
  puVar8[1] = 0x6d7468676965685f;
  *(int16_t *)(puVar8 + 2) = 0x7061;
  *(int8_t *)((int64_t)puVar8 + 0x12) = 0;
  uVar19 = uVar17;
  uVar16 = uVar17;
  if (uVar12 != 0) {
    do {
      if ((byte)(*(char *)(lStack_118 + uVar19) + 0xbfU) < 0x1a) {
        *(char *)(lStack_118 + uVar19) = *(char *)(lStack_118 + uVar19) + ' ';
      }
      uVar14 = (int)uVar16 + 1;
      uVar19 = uVar19 + 1;
      uVar16 = (uint64_t)uVar14;
    } while (uVar14 < uVar12);
  }
  local_var_110 = uVar12;
  SystemCore_GarbageCollector(system_resource_state,&plStack_100,&plocal_var_120,0);
  if (plStack_100 == (int64_t *)0x0) {
    plocal_var_120 = &system_data_buffer_ptr;
    if (lStack_118 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    DataStructure_3cbe0(plStack_100,&lStack_b8);
    if ((cStack_52 == '\0') && ((char)local_var_a8 != '\0')) {
      uVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,local_var_b0,3);
// WARNING: Subroutine does not return
      memcpy(uVar7,lStack_b8,local_var_b0);
    }
    uVar12 = local_var_5c & 0xffff;
    lVar10 = *(int64_t *)param_1[1];
    fVar20 = (float)*(int *)(*(int64_t *)(lVar10 + 0x60b80) + 0x14) *
             *(float *)(*(int64_t *)(lVar10 + 0x60b80) + 0x1c);
    if ((short)local_var_5c != 0) {
      uVar14 = local_var_5c & 0xffff;
      puVar15 = (ushort *)(lStack_b8 + 4);
      uVar16 = (uint64_t)uVar14;
      uVar19 = uVar17;
      do {
        iVar6 = 0;
        if (3 < uVar14) {
          uVar4 = ((local_var_5c & 0xffff) - 4 >> 2) + 1;
          uVar11 = (uint64_t)uVar4;
          iVar6 = uVar4 * 4;
          puVar9 = puVar15;
          do {
            iVar5 = (int)((float)puVar9[-2] * 0.5);
            uVar3 = uVar18;
            if ((-1 < iVar5) && (uVar3 = (ushort)iVar5, 0xffff < iVar5)) {
              uVar3 = 0xffff;
            }
            puVar9[-2] = uVar3;
            iVar5 = (int)((float)puVar9[-1] * 0.5);
            uVar3 = uVar18;
            if ((-1 < iVar5) && (uVar3 = (ushort)iVar5, 0xffff < iVar5)) {
              uVar3 = 0xffff;
            }
            puVar9[-1] = uVar3;
            iVar5 = (int)((float)*puVar9 * 0.5);
            uVar3 = uVar18;
            if ((-1 < iVar5) && (uVar3 = (ushort)iVar5, 0xffff < iVar5)) {
              uVar3 = 0xffff;
            }
            *puVar9 = uVar3;
            iVar5 = (int)((float)puVar9[1] * 0.5);
            uVar3 = 0;
            if ((-1 < iVar5) && (uVar3 = (ushort)iVar5, 0xffff < iVar5)) {
              uVar3 = 0xffff;
            }
            puVar9[1] = uVar3;
            puVar9 = puVar9 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if (iVar6 < (int)uVar14) {
          puVar9 = (ushort *)(lStack_b8 + (int64_t)((int)uVar19 + iVar6) * 2);
          uVar11 = (uint64_t)(uVar12 - iVar6);
          do {
            iVar6 = (int)((float)*puVar9 * 0.5);
            uVar3 = 0;
            if ((-1 < iVar6) && (uVar3 = (ushort)iVar6, 0xffff < iVar6)) {
              uVar3 = 0xffff;
            }
            *puVar9 = uVar3;
            puVar9 = puVar9 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        uVar19 = (uint64_t)((int)uVar19 + uVar12);
        puVar15 = puVar15 + (int)uVar14;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
      lVar10 = *(int64_t *)param_1[1];
    }
    *(int32_t *)(*param_1 + 8) = *(int32_t *)(*(int64_t *)(lVar10 + 0x60b80) + 0x154);
    plVar1 = *(int64_t **)(*(int64_t *)param_1[1] + 0x318);
    pplStack_d8 = *(int64_t ***)*param_1;
    local_var_d0 = ((uint64_t *)*param_1)[1];
    lVar10 = *(int64_t *)(*(int64_t *)param_1[1] + 0x60b80);
    local_var_148 = *(int32_t *)(lVar10 + 0x158);
    local_var_150 = *(int32_t *)(lVar10 + 0x154);
    fStack_140 = fVar20 / (float)(int)(uVar12 - 1);
    ppplStack_138 = &pplStack_d8;
    local_var_158 = uVar12;
    (**(code **)(*plVar1 + 0x60))(plVar1,&plStack_e8,lStack_b8,uVar12);
    plVar1 = plStack_e8;
    lVar10 = param_1[1];
    plStack_128 = plStack_e8;
    if (plStack_e8 != (int64_t *)0x0) {
      (**(code **)(*plStack_e8 + 0x28))(plStack_e8);
    }
    plStack_128 = *(int64_t **)(lVar10 + 8);
    *(int64_t **)(lVar10 + 8) = plVar1;
    if (plStack_128 != (int64_t *)0x0) {
      (**(code **)(*plStack_128 + 0x38))();
    }
    *(uint64_t *)(param_1[1] + 0x10) = local_var_e0;
    plVar1 = (int64_t *)param_1[1];
    lVar10 = *(int64_t *)(*plVar1 + 0x2908);
    lVar13 = plVar1[2];
    pplStack_f8 = &plStack_128;
    plStack_128 = (int64_t *)plVar1[1];
    if (plStack_128 != (int64_t *)0x0) {
      (**(code **)(*plStack_128 + 0x28))();
    }
    plVar1 = plStack_128;
    pplStack_d8 = &plStack_128;
    pplStack_f8 = (int64_t **)plStack_128;
    if (plStack_128 != (int64_t *)0x0) {
      (**(code **)(*plStack_128 + 0x28))(plStack_128);
    }
    pplStack_f8 = *(int64_t ***)(lVar10 + 0x48);
    *(int64_t **)(lVar10 + 0x48) = plVar1;
    if (pplStack_f8 != (int64_t **)0x0) {
      (**(code **)((int64_t)*pplStack_f8 + 0x38))();
    }
    *(int64_t *)(lVar10 + 0x50) = lVar13;
    *(float *)(lVar10 + 0x58) = fVar20;
    *(uint *)(lVar10 + 0x60) = uVar12;
    *(int8_t *)(lVar10 + 0x68) = 1;
    if (plStack_128 != (int64_t *)0x0) {
      (**(code **)(*plStack_128 + 0x38))();
    }
    *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x2908) + 0x50) =
         ((int64_t *)param_1[1])[2];
    *(uint *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x2908) + 0x60) = uVar12;
    *(float *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x2908) + 0x58) = fVar20;
    *(int32_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x2908) + 0x5c) =
         *(int32_t *)(*param_1 + 8);
    *(int8_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x2908) + 0x68) = 1;
    lVar10 = *(int64_t *)(*(int64_t *)param_1[1] + 0x2908);
    uVar19 = uVar17;
    if (0 < *(int *)(lVar10 + 0xc)) {
      do {
        iVar6 = 0;
        if (0 < *(int *)(lVar10 + 0x10)) {
          lVar13 = 0;
          do {
            lVar2 = *(int64_t *)
                     (*(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x2908) + 0x40) + uVar19
                     );
            if (*(int64_t *)(lVar13 + lVar2) != 0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            *(uint64_t *)(lVar13 + lVar2) = 0;
            iVar6 = iVar6 + 1;
            lVar13 = lVar13 + 0x68;
          } while (iVar6 < *(int *)(lVar10 + 0x10));
        }
        uVar12 = (int)uVar17 + 1;
        uVar17 = (uint64_t)uVar12;
        uVar19 = uVar19 + 8;
      } while ((int)uVar12 < *(int *)(lVar10 + 0xc));
    }
    if (plStack_e8 != (int64_t *)0x0) {
      (**(code **)(*plStack_e8 + 0x38))();
    }
    if (plStack_100 != (int64_t *)0x0) {
      (**(code **)(*plStack_100 + 0x38))();
    }
    plocal_var_120 = &system_data_buffer_ptr;
    if (lStack_118 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  local_var_108 = 0;
  lStack_118 = 0;
  plocal_var_120 = &system_state_ptr;
  if (local_var_a8._1_1_ == '\0') {
    if (((char)local_var_a8 == '\0') && (lStack_b8 != 0)) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_b8 = 0;
    local_var_a8 = 0;
    local_var_b0 = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int * RenderingSystem_b9300(int64_t param_1,int *param_2)
{
  int *piVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char acStackX_8 [4];
  uint stack_special_x_c;
  uVar3 = (uint64_t)(*param_2 * 1000 + param_2[1]);
  uVar4 = uVar3 % (uint64_t)*(uint *)(param_1 + 0x10);
  piVar1 = *(int **)(*(int64_t *)(param_1 + 8) + uVar4 * 8);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      RenderingShaderProcessor0(param_1 + 0x20,acStackX_8,(uint64_t)*(uint *)(param_1 + 0x10),
                    *(int32_t *)(param_1 + 0x18),1);
      puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(param_1 + 0x2c));
      *puVar2 = *(uint64_t *)param_2;
      puVar2[1] = 0;
      puVar2[2] = 0;
      if (acStackX_8[0] != '\0') {
        uVar4 = uVar3 % (uint64_t)stack_special_x_c;
        RenderingSystem_b94a0(param_1,stack_special_x_c);
      }
      puVar2[2] = *(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar4 * 8);
      *(uint64_t **)(*(int64_t *)(param_1 + 8) + uVar4 * 8) = puVar2;
      *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
      return (int *)(puVar2 + 1);
    }
    if ((*param_2 == *piVar1) && (param_2[1] == piVar1[1])) break;
    piVar1 = *(int **)(piVar1 + 4);
  }
  return piVar1 + 2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
RenderingSystem_b9362(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t *unaff_R14;
  char cStack0000000000000050;
  uint local_buffer_54;
  RenderingShaderProcessor0(param_1,&local_buffer_00000050,param_3,param_4,1);
  puVar1 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(unaff_RBX + 0x2c));
  *puVar1 = *unaff_R14;
  puVar1[1] = 0;
  puVar1[2] = 0;
  if (cStack0000000000000050 != '\0') {
    unaff_RSI = unaff_RBP % (uint64_t)local_buffer_54;
    RenderingSystem_b94a0();
  }
  puVar1[2] = *(uint64_t *)(*(int64_t *)(unaff_RBX + 8) + unaff_RSI * 8);
  *(uint64_t **)(*(int64_t *)(unaff_RBX + 8) + unaff_RSI * 8) = puVar1;
  *(int64_t *)(unaff_RBX + 0x18) = *(int64_t *)(unaff_RBX + 0x18) + 1;
  return puVar1 + 1;
}
int64_t function_3b93ef(void)
{
  int64_t in_RAX;
  return in_RAX + 8;
}
// 函数: void RenderingSystem_b9410(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_b9410(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  RenderingSystem_b9430(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}