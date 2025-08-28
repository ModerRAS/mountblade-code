#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part068.c - 15 个函数

// 函数: void FUN_1800e545a(void)
void FUN_1800e545a(void)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint uVar8;
  uint uVar9;
  int64_t lVar10;
  int iVar11;
  uint64_t uVar12;
  char *pcVar13;
  int64_t lVar14;
  uint64_t uVar15;
  uint *unaff_RDI;
  uint uVar16;
  uint64_t uVar17;
  int iVar18;
  uint64_t uVar19;
  int in_R10D;
  int unaff_R14D;
  uint *puVar20;
  bool bVar21;
  int64_t lStack0000000000000030;
  
  iVar18 = 0;
  uVar17 = 0;
  uVar19 = 0x7fffffff;
  if (0 < in_R10D) {
    do {
      uVar16 = (uint)uVar17;
      lVar14 = (uint64_t)(uVar16 & 0x7ff) * 0x18;
      lStack0000000000000030 =
           *(int64_t *)(*(int64_t *)(unaff_RDI + (uVar17 >> 0xb) * 2 + 2) + 0x10 + lVar14);
      puVar2 = (uint64_t *)(*(int64_t *)(unaff_RDI + (uVar17 >> 0xb) * 2 + 2) + lVar14);
      uVar5 = puVar2[1];
      uVar9 = (uint)uVar19;
      if (iVar18 == 0) {
        uVar8 = uVar16;
        iVar1 = unaff_R14D;
        if ((*(uint *)(lStack0000000000000030 + 0x2e0) & 0x100) == 0) {
          uVar8 = uVar9;
          iVar1 = iVar18;
        }
        iVar18 = iVar1;
        uVar19 = (uint64_t)uVar8;
      }
      else if ((*(uint *)(lStack0000000000000030 + 0x2e0) & 0x100) == 0) {
        if ((int)uVar9 < (int)uVar16) {
          uVar15 = uVar19 >> 0xb;
          uVar12 = (uint64_t)(uVar9 & 0x7ff);
          uVar19 = (uint64_t)(uVar9 + 1);
          puVar3 = (uint64_t *)(*(int64_t *)(unaff_RDI + uVar15 * 2 + 2) + uVar12 * 0x18);
          uVar6 = *puVar3;
          uVar7 = puVar3[1];
          uVar4 = *(uint64_t *)(*(int64_t *)(unaff_RDI + uVar15 * 2 + 2) + 0x10 + uVar12 * 0x18);
          lVar10 = *(int64_t *)(unaff_RDI + uVar15 * 2 + 2);
          puVar3 = (uint64_t *)(lVar10 + uVar12 * 0x18);
          *puVar3 = *puVar2;
          puVar3[1] = uVar5;
          *(int64_t *)(lVar10 + 0x10 + uVar12 * 0x18) = lStack0000000000000030;
          lVar10 = *(int64_t *)(unaff_RDI + (uVar17 >> 0xb) * 2 + 2);
          puVar2 = (uint64_t *)(lVar10 + lVar14);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          *(uint64_t *)(lVar10 + 0x10 + lVar14) = uVar4;
        }
        else {
          iVar18 = 0;
        }
      }
      uVar17 = (uint64_t)(uVar16 + 1);
    } while ((int)(uVar16 + 1) < in_R10D);
    uVar16 = (uint)uVar19;
    if (uVar16 != 0x7fffffff) {
      if (*unaff_RDI < uVar16) {
        iVar18 = uVar16 - *unaff_RDI;
        if (iVar18 != 0) {
          LOCK();
          uVar16 = *unaff_RDI;
          *unaff_RDI = *unaff_RDI + iVar18;
          UNLOCK();
          uVar9 = uVar16 >> 0xb;
          uVar15 = (uint64_t)uVar9;
          uVar19 = (uint64_t)(iVar18 + -1 + uVar16 >> 0xb);
          if (uVar15 <= uVar19) {
            pcVar13 = (char *)((int64_t)unaff_RDI + uVar15 + 0x108);
            lVar14 = (uVar19 - uVar15) + 1;
            puVar20 = unaff_RDI + (uint64_t)uVar9 * 2 + 2;
            do {
              iVar18 = (int)uVar15;
              if (*(int64_t *)puVar20 == 0) {
                lVar10 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xc000,CONCAT71((int7)(uVar17 >> 8),0x25));
                uVar17 = (uint64_t)iVar18;
                LOCK();
                bVar21 = *(int64_t *)(unaff_RDI + uVar17 * 2 + 2) == 0;
                if (bVar21) {
                  *(int64_t *)(unaff_RDI + uVar17 * 2 + 2) = lVar10;
                }
                UNLOCK();
                if (bVar21) {
                  iVar11 = iVar18 * 0x800;
                  iVar1 = iVar11 + 0x800;
                  for (; iVar11 < iVar1; iVar11 = iVar11 + 1) {
                  }
                  LOCK();
                  *(int8_t *)(uVar17 + 0x108 + (int64_t)unaff_RDI) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                  do {
                  } while (*pcVar13 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar13 != '\0');
              }
              uVar15 = (uint64_t)(iVar18 + 1);
              puVar20 = puVar20 + 2;
              pcVar13 = pcVar13 + 1;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
        }
      }
      else if (uVar16 < *unaff_RDI) {
        LOCK();
        *unaff_RDI = uVar16;
        UNLOCK();
      }
    }
  }
  return;
}






// 函数: void FUN_1800e563b(void)
void FUN_1800e563b(void)

{
  return;
}






// 函数: void FUN_1800e5650(void)
void FUN_1800e5650(void)

{
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e6820(int64_t param_1,int64_t param_2)
void FUN_1800e6820(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  bool bVar3;
  int32_t uVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int32_t *puVar7;
  uint64_t uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  int8_t auStack_338 [32];
  int32_t uStack_318;
  int8_t auStack_308 [8];
  int64_t *plStack_300;
  uint64_t uStack_2f8;
  uint64_t uStack_2f0;
  int64_t lStack_2e8;
  void **ppuStack_2e0;
  uint64_t uStack_2d8;
  int64_t lStack_200;
  uint64_t uStack_1f8;
  void *puStack_1f0;
  uint64_t uStack_1e8;
  int32_t uStack_1e0;
  int32_t uStack_1dc;
  uint64_t auStack_1d8 [2];
  uint64_t uStack_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  int32_t uStack_1b8;
  int32_t uStack_1b4;
  int32_t uStack_1b0;
  int32_t uStack_1ac;
  int32_t uStack_1a8;
  uint64_t uStack_1a4;
  uint64_t uStack_19c;
  int8_t uStack_194;
  uint64_t uStack_193;
  int32_t uStack_188;
  int8_t uStack_184;
  void *puStack_158;
  int8_t *puStack_150;
  int32_t uStack_148;
  int8_t auStack_140 [72];
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e0 [136];
  uint64_t uStack_58;
  
  uStack_1f8 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_338;
  if ((*(int *)(SYSTEM_STATE_MANAGER + 0xbd0) == 1) && (*(int *)(SYSTEM_STATE_MANAGER + 0x540) == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uStack_2f8 = *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83b8);
  *(int8_t *)(param_1 + 0x1350) = 1;
  lStack_2e8 = param_1;
  FUN_1802c22a0(auStack_308,&processed_var_4848_ptr);
  ppuStack_2e0 = &puStack_158;
  puStack_158 = &memory_allocator_3480_ptr;
  puStack_150 = auStack_140;
  uStack_148 = 0;
  auStack_140[0] = 0;
  FUN_180049bf0(&puStack_158,&processed_var_4848_ptr);
  FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_158);
  uVar1 = *(uint64_t *)(param_2 + 0x99c0);
  puStack_1f0 = &system_config_ptr;
  uStack_1e8 = auStack_1d8;
  auStack_1d8[0] = auStack_1d8[0] & 0xffffffffffffff00;
  uStack_1e0 = 0xb;
  strcpy_s(auStack_1d8,0x10,&processed_var_4832_ptr);
  lVar5 = FUN_1802c90a0(uVar1,&puStack_1f0);
  puStack_1f0 = &system_state_ptr;
  ppuStack_2e0 = *(void ***)(lVar5 + 0x428);
  lVar5 = *(int64_t *)(param_2 + 0x97c0);
  lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar2 + 0x85f0) != 0) || (*(int *)(lVar2 + 0x8914) != -1)) ||
     (*(int *)(lVar2 + 0x8b14) != 0x10)) {
    uStack_2f0 = 0;
    (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x40))
              (*(int64_t **)(lVar2 + 0x8400),0x37,1,&uStack_2f0);
    *(uint64_t *)(lVar2 + 0x85f0) = 0;
    *(int32_t *)(lVar2 + 0x8914) = 0xffffffff;
    *(int32_t *)(lVar2 + 0x8b14) = 0x10;
    *(int *)(lVar2 + 0x82b4) = *(int *)(lVar2 + 0x82b4) + 1;
  }
  uVar9 = (uint)*(ushort *)(lVar5 + 0x32c);
  fVar11 = (float)uVar9;
  uVar10 = (uint)*(ushort *)(lVar5 + 0x32e);
  fVar12 = (float)uVar10;
  if (bVar3) {
    fVar11 = fVar11 * 0.5;
    fVar12 = fVar12 * 0.5;
  }
  lVar5 = *(int64_t *)(system_message_buffer + 0x1cd8);
  puStack_1f0 = (void *)0x0;
  uStack_1e8 = (uint64_t *)CONCAT44(fVar12,fVar11);
  uStack_1e0 = 0;
  uStack_1dc = 0x3f800000;
  plVar6 = *(int64_t **)(lVar5 + 0x8400);
  (**(code **)(*plVar6 + 0x160))(plVar6,1,&puStack_1f0);
  uStack_1c8 = 0;
  plVar6 = *(int64_t **)(lVar5 + 0x8400);
  uStack_1c0 = uVar9;
  uStack_1bc = uVar10;
  (**(code **)(*plVar6 + 0x168))(plVar6,1,&uStack_1c8);
  lStack_200 = 0;
  uVar1 = *(uint64_t *)(param_2 + 0x96a8);
  uStack_2d8 = uVar1;
  if (bVar3) {
    uStack_1b0 = 1;
    uStack_1ac = 1;
    uStack_1a4 = 0;
    uStack_19c = 0x3f80000000000000;
    uStack_193 = 1;
    uStack_194 = 0;
    uStack_188 = 0xffffffff;
    uStack_184 = 0;
    uStack_1b8 = (int32_t)(int64_t)(*(float *)(param_2 + 0x11c20) * 0.5);
    uStack_1b4 = (int32_t)(int64_t)(*(float *)(param_2 + 0x11c24) * 0.5);
    uStack_1a8 = 0x1e;
    puStack_f8 = &memory_allocator_3432_ptr;
    puStack_f0 = auStack_e0;
    auStack_e0[0] = 0;
    uStack_e8 = 0xf;
    strcpy_s(auStack_e0,0x80,&processed_var_4912_ptr);
    plVar6 = (int64_t *)FUN_1800b1230(system_resource_state,&plStack_300,&puStack_f8,&uStack_1b8);
    lVar2 = *plVar6;
    *plVar6 = 0;
    uStack_2f0 = 0;
    lStack_200 = lVar2;
    if (plStack_300 != (int64_t *)0x0) {
      (**(code **)(*plStack_300 + 0x38))();
    }
    _Thrd_id();
    puStack_f8 = &system_state_ptr;
    uVar8 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    lVar5 = *(int64_t *)(lVar2 + 0x1d8);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else if (system_main_module_state != 0) {
      *(int64_t *)(lVar2 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
  }
  else {
    uVar8 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    lVar5 = *(int64_t *)(*(int64_t *)(param_2 + 0x97c0) + 0x1d8);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else if (system_main_module_state != 0) {
      *(int64_t *)(*(int64_t *)(param_2 + 0x97c0) + 0x340) =
           (int64_t)*(int *)(system_main_module_state + 0x224);
    }
  }
  FUN_18029ad30(uVar8,0,lVar5);
  lVar5 = system_message_buffer;
  *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83f0) = 0;
  FUN_18029de40(*(uint64_t *)(lVar5 + 0x1cd8),1);
  uStack_318 = 0xffffffff;
  FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),0x10,uVar1);
  uStack_318 = 0xffffffff;
  FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),1,*(uint64_t *)(param_2 + 0x96e8));
  uStack_318 = 0xffffffff;
  FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),2,*(uint64_t *)(param_2 + 0x96f0));
  puStack_1f0 = &system_data_buffer_ptr;
  auStack_1d8[0] = 0;
  uStack_1e8 = (uint64_t *)0x0;
  uStack_1e0 = 0;
  puVar7 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1b,0x13);
  *(int8_t *)puVar7 = 0;
  uStack_1e8 = (uint64_t *)puVar7;
  uVar4 = CoreEngineSystemCleanup(puVar7);
  auStack_1d8[0] = CONCAT44(auStack_1d8[0]._4_4_,uVar4);
  *puVar7 = 0x66666964;
  puVar7[1] = 0x5f657375;
  puVar7[2] = 0x69626d61;
  puVar7[3] = 0x5f746e65;
  *(uint64_t *)(puVar7 + 4) = 0x74616c75636c6163;
  *(int16_t *)(puVar7 + 6) = 0x726f;
  *(int8_t *)((int64_t)puVar7 + 0x1a) = 0;
  uStack_1e0 = 0x1a;
  FUN_1800b31f0(system_resource_state,&plStack_300,&puStack_1f0,1);
  if (plStack_300 != (int64_t *)0x0) {
    (**(code **)(*plStack_300 + 0x38))();
  }
  puStack_1f0 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar7);
}






// 函数: void FUN_1800e79f0(int64_t param_1)
void FUN_1800e79f0(int64_t param_1)

{
  int64_t *plVar1;
  
  plVar1 = *(int64_t **)(param_1 + 0xdc8);
  *(uint64_t *)(param_1 + 0xdc8) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0xdd0);
  *(uint64_t *)(param_1 + 0xdd0) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0xdd8);
  *(uint64_t *)(param_1 + 0xdd8) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0xde0);
  *(uint64_t *)(param_1 + 0xde0) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0xde8);
  *(uint64_t *)(param_1 + 0xde8) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0xdf0);
  *(uint64_t *)(param_1 + 0xdf0) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0xdf8);
  *(uint64_t *)(param_1 + 0xdf8) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0xe00);
  *(uint64_t *)(param_1 + 0xe00) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0xe08);
  *(uint64_t *)(param_1 + 0xe08) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0xe10);
  *(uint64_t *)(param_1 + 0xe10) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return;
}






// 函数: void FUN_1800e7b80(int64_t param_1)
void FUN_1800e7b80(int64_t param_1)

{
  int64_t lVar1;
  uint uVar2;
  int64_t *plVar3;
  
  uVar2 = 0;
  plVar3 = (int64_t *)(param_1 + 8);
  do {
    if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lVar1 = (int64_t)(int)uVar2;
    plVar3 = plVar3 + 1;
    uVar2 = uVar2 + 1;
    *(uint64_t *)(param_1 + 8 + lVar1 * 8) = 0;
  } while (uVar2 < 0x40);
  return;
}






// 函数: void FUN_1800e7be0(int64_t param_1)
void FUN_1800e7be0(int64_t param_1)

{
  int64_t lVar1;
  uint uVar2;
  int64_t *plVar3;
  
  uVar2 = 0;
  plVar3 = (int64_t *)(param_1 + 8);
  do {
    if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lVar1 = (int64_t)(int)uVar2;
    plVar3 = plVar3 + 1;
    uVar2 = uVar2 + 1;
    *(uint64_t *)(param_1 + 8 + lVar1 * 8) = 0;
  } while (uVar2 < 0x10);
  return;
}






// 函数: void FUN_1800e7c40(int64_t param_1)
void FUN_1800e7c40(int64_t param_1)

{
  int64_t lVar1;
  uint uVar2;
  int64_t *plVar3;
  
  uVar2 = 0;
  plVar3 = (int64_t *)(param_1 + 8);
  do {
    if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lVar1 = (int64_t)(int)uVar2;
    plVar3 = plVar3 + 1;
    uVar2 = uVar2 + 1;
    *(uint64_t *)(param_1 + 8 + lVar1 * 8) = 0;
  } while (uVar2 < 8);
  return;
}






// 函数: void FUN_1800e7ca0(int64_t param_1)
void FUN_1800e7ca0(int64_t param_1)

{
  int64_t lVar1;
  uint uVar2;
  int64_t *plVar3;
  
  uVar2 = 0;
  plVar3 = (int64_t *)(param_1 + 8);
  do {
    if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lVar1 = (int64_t)(int)uVar2;
    plVar3 = plVar3 + 1;
    uVar2 = uVar2 + 1;
    *(uint64_t *)(param_1 + 8 + lVar1 * 8) = 0;
  } while (uVar2 < 0x80);
  return;
}






// 函数: void FUN_1800e7d00(int64_t param_1)
void FUN_1800e7d00(int64_t param_1)

{
  int64_t lVar1;
  uint uVar2;
  int64_t *plVar3;
  
  uVar2 = 0;
  plVar3 = (int64_t *)(param_1 + 8);
  do {
    if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lVar1 = (int64_t)(int)uVar2;
    plVar3 = plVar3 + 1;
    uVar2 = uVar2 + 1;
    *(uint64_t *)(param_1 + 8 + lVar1 * 8) = 0;
  } while (uVar2 < 0x100);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1800e7d60(uint *param_1,int param_2)

{
  uint uVar1;
  int64_t lVar2;
  char *pcVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint *puVar8;
  bool bVar9;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  uVar5 = (uint64_t)(uVar1 >> 0xc);
  uVar6 = (uint64_t)(param_2 + -1 + uVar1 >> 0xc);
  if (uVar5 <= uVar6) {
    pcVar3 = (char *)((int64_t)param_1 + uVar5 + 0x208);
    lVar7 = (uVar6 - uVar5) + 1;
    puVar8 = param_1 + (uint64_t)(uVar1 >> 0xc) * 2 + 2;
    do {
      iVar4 = (int)uVar5;
      if (*(int64_t *)puVar8 == 0) {
        lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x130000,0x25);
        LOCK();
        bVar9 = *(int64_t *)(param_1 + (int64_t)iVar4 * 2 + 2) == 0;
        if (bVar9) {
          *(int64_t *)(param_1 + (int64_t)iVar4 * 2 + 2) = lVar2;
        }
        UNLOCK();
        if (bVar9) {
          LOCK();
          *(int8_t *)((int64_t)iVar4 + 0x208 + (int64_t)param_1) = 0;
          UNLOCK();
        }
        else {
          if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          do {
          } while (*pcVar3 != '\0');
        }
      }
      else {
        do {
        } while (*pcVar3 != '\0');
      }
      uVar5 = (uint64_t)(iVar4 + 1);
      puVar8 = puVar8 + 2;
      pcVar3 = pcVar3 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1800e7d93(int64_t param_1)

{
  int64_t *plVar1;
  int64_t in_RAX;
  int64_t lVar2;
  char *pcVar3;
  int64_t unaff_RBP;
  int iVar4;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar5;
  int64_t *plVar6;
  int32_t unaff_R15D;
  bool bVar7;
  
  pcVar3 = (char *)(param_1 + 0x208 + unaff_RSI);
  lVar5 = (unaff_RDI - unaff_RSI) + 1;
  plVar6 = (int64_t *)(param_1 + 8 + in_RAX * 8);
  do {
    iVar4 = (int)unaff_RSI;
    if (*plVar6 == 0) {
      lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x130000,0x25);
      plVar1 = (int64_t *)(unaff_RBP + 8 + (int64_t)iVar4 * 8);
      LOCK();
      bVar7 = *plVar1 == 0;
      if (bVar7) {
        *plVar1 = lVar2;
      }
      UNLOCK();
      if (bVar7) {
        LOCK();
        *(int8_t *)((int64_t)iVar4 + 0x208 + unaff_RBP) = 0;
        UNLOCK();
      }
      else {
        if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        do {
        } while (*pcVar3 != '\0');
      }
    }
    else {
      do {
      } while (*pcVar3 != '\0');
    }
    unaff_RSI = (uint64_t)(iVar4 + 1);
    plVar6 = plVar6 + 1;
    pcVar3 = pcVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return unaff_R15D;
}



int32_t FUN_1800e7e24(void)

{
  int32_t unaff_R15D;
  
  return unaff_R15D;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1800e7e40(uint *param_1,int param_2)

{
  uint uVar1;
  int64_t lVar2;
  char *pcVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint *puVar8;
  bool bVar9;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  uVar5 = (uint64_t)(uVar1 >> 0xc);
  uVar6 = (uint64_t)(param_2 + -1 + uVar1 >> 0xc);
  if (uVar5 <= uVar6) {
    pcVar3 = (char *)((int64_t)param_1 + uVar5 + 0x208);
    lVar7 = (uVar6 - uVar5) + 1;
    puVar8 = param_1 + (uint64_t)(uVar1 >> 0xc) * 2 + 2;
    do {
      iVar4 = (int)uVar5;
      if (*(int64_t *)puVar8 == 0) {
        lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xa0000,0x25);
        LOCK();
        bVar9 = *(int64_t *)(param_1 + (int64_t)iVar4 * 2 + 2) == 0;
        if (bVar9) {
          *(int64_t *)(param_1 + (int64_t)iVar4 * 2 + 2) = lVar2;
        }
        UNLOCK();
        if (bVar9) {
          LOCK();
          *(int8_t *)((int64_t)iVar4 + 0x208 + (int64_t)param_1) = 0;
          UNLOCK();
        }
        else {
          if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          do {
          } while (*pcVar3 != '\0');
        }
      }
      else {
        do {
        } while (*pcVar3 != '\0');
      }
      uVar5 = (uint64_t)(iVar4 + 1);
      puVar8 = puVar8 + 2;
      pcVar3 = pcVar3 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1800e7e73(int64_t param_1)

{
  int64_t *plVar1;
  int64_t in_RAX;
  int64_t lVar2;
  char *pcVar3;
  int64_t unaff_RBP;
  int iVar4;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar5;
  int64_t *plVar6;
  int32_t unaff_R15D;
  bool bVar7;
  
  pcVar3 = (char *)(param_1 + 0x208 + unaff_RSI);
  lVar5 = (unaff_RDI - unaff_RSI) + 1;
  plVar6 = (int64_t *)(param_1 + 8 + in_RAX * 8);
  do {
    iVar4 = (int)unaff_RSI;
    if (*plVar6 == 0) {
      lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xa0000,0x25);
      plVar1 = (int64_t *)(unaff_RBP + 8 + (int64_t)iVar4 * 8);
      LOCK();
      bVar7 = *plVar1 == 0;
      if (bVar7) {
        *plVar1 = lVar2;
      }
      UNLOCK();
      if (bVar7) {
        LOCK();
        *(int8_t *)((int64_t)iVar4 + 0x208 + unaff_RBP) = 0;
        UNLOCK();
      }
      else {
        if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        do {
        } while (*pcVar3 != '\0');
      }
    }
    else {
      do {
      } while (*pcVar3 != '\0');
    }
    unaff_RSI = (uint64_t)(iVar4 + 1);
    plVar6 = plVar6 + 1;
    pcVar3 = pcVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return unaff_R15D;
}



int32_t FUN_1800e7f04(void)

{
  int32_t unaff_R15D;
  
  return unaff_R15D;
}






// 函数: void FUN_1800e7f20(int64_t *param_1)
void FUN_1800e7f20(int64_t *param_1)

{
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_1800e8060(int64_t param_1,int param_2)

{
  int iVar1;
  int64_t *plVar2;
  char *pcVar3;
  char cVar4;
  int64_t lVar5;
  int64_t lVar6;
  bool bVar7;
  
  lVar6 = (int64_t)param_2;
  if (*(int64_t *)(param_1 + 8 + lVar6 * 8) != 0) {
    do {
      cVar4 = *(char *)(param_1 + 0x108 + lVar6);
    } while (cVar4 != '\0');
    return cVar4;
  }
  lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xc000,0x25);
  plVar2 = (int64_t *)(param_1 + 8 + lVar6 * 8);
  LOCK();
  bVar7 = *plVar2 == 0;
  if (bVar7) {
    *plVar2 = lVar5;
  }
  UNLOCK();
  if (!bVar7) {
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    do {
      cVar4 = *(char *)(lVar6 + param_1 + 0x108);
    } while (cVar4 != '\0');
    return cVar4;
  }
  param_2 = param_2 * 0x800;
  iVar1 = param_2 + 0x800;
  for (; param_2 < iVar1; param_2 = param_2 + 1) {
  }
  LOCK();
  pcVar3 = (char *)(lVar6 + 0x108 + param_1);
  cVar4 = *pcVar3;
  *pcVar3 = '\0';
  UNLOCK();
  return cVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e8140(int64_t *param_1,uint64_t param_2)
void FUN_1800e8140(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar2 = *param_1;
  if ((uint64_t)(param_1[2] - lVar2 >> 3) < param_2) {
    if (param_2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,param_2 * 8,(char)param_1[3]);
      lVar2 = *param_1;
    }
    if (lVar2 != param_1[1]) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,lVar2,param_1[1] - lVar2);
    }
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 8;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e8163(int64_t param_1,int64_t param_2)
void FUN_1800e8163(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,param_2 * 8,(char)unaff_RBX[3]);
    param_1 = *unaff_RBX;
  }
  if (param_1 == unaff_RBX[1]) {
    if (param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *unaff_RBX = lVar1;
    unaff_RBX[1] = lVar1;
    unaff_RBX[2] = lVar1 + unaff_RSI * 8;
    return;
  }
                    // WARNING: Subroutine does not return
  memmove(lVar1,param_1,unaff_RBX[1] - param_1);
}






// 函数: void FUN_1800e81e2(void)
void FUN_1800e81e2(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_1800e81f0(uint64_t param_1,int64_t *param_2,uint64_t param_3,int32_t param_4)

{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t *puVar3;
  void *puStack_48;
  int32_t *puStack_40;
  int32_t uStack_38;
  uint64_t uStack_30;
  
  uVar1 = system_system_data_config;
  puStack_48 = &system_data_buffer_ptr;
  uStack_30 = 0;
  puStack_40 = (int32_t *)0x0;
  uStack_38 = 0;
  puVar3 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1d,0x13,param_4,0,0xfffffffffffffffe);
  *(int8_t *)puVar3 = 0;
  puStack_40 = puVar3;
  uVar2 = CoreEngineSystemCleanup(puVar3);
  *puVar3 = 0x6f736552;
  puVar3[1] = 0x65637275;
  puVar3[2] = 0x66754220;
  puVar3[3] = 0x73726566;
  *(uint64_t *)(puVar3 + 4) = 0x6f6f70206e6f6e28;
  puVar3[6] = 0x2964656c;
  *(int8_t *)(puVar3 + 7) = 0;
  uStack_38 = 0x1c;
  uStack_30._0_4_ = uVar2;
  FUN_1802037e0(0,param_4,&puStack_48);
  puStack_48 = &system_data_buffer_ptr;
  if (puStack_40 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_40 = (int32_t *)0x0;
  uStack_30 = (uint64_t)uStack_30._4_4_ << 0x20;
  puStack_48 = &system_state_ptr;
  FUN_1800828d0(uVar1,param_2);
  *(uint64_t *)(*param_2 + 0x10) = param_3;
  *(int32_t *)(*param_2 + 0x18) = param_4;
  *(int32_t *)(*param_2 + 0x1c) = param_4;
  *(int8_t *)(*param_2 + 0x20) = 1;
  return param_2;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e8340(uint64_t param_1,int64_t param_2)
void FUN_1800e8340(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t auStackX_10 [3];
  uint64_t auStack_38 [2];
  
  lVar1 = system_message_buffer;
  if (*(int *)(param_2 + 0x2108) != 0) {
    uVar6 = 0;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83f0) = 0;
    FUN_18029de40(*(uint64_t *)(lVar1 + 0x1cd8),
                  (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a);
    lVar1 = FUN_180245280(param_2);
    if (*(int *)(lVar1 + 0x160) == 5) {
      uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    }
    else {
      uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    }
    FUN_18029d150(uVar3,0x10,lVar1,0x10,0xffffffff);
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int64_t *)(lVar1 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    lVar5 = lVar1 + 0x1a0;
    if ((((*(int64_t *)(lVar2 + 0x8540) != lVar5) || (*(int *)(lVar2 + 0x88bc) != -1)) ||
        (*(int *)(lVar2 + 0x8abc) != 0x10)) &&
       (((lVar5 == 0 || (*(int64_t *)(lVar1 + 0x1a8) != 0)) || (*(int64_t *)(lVar1 + 0x1b0) != 0))
       )) {
      auStackX_10[0] = uVar6;
      if (lVar5 != 0) {
        auStackX_10[0] = *(uint64_t *)(lVar1 + 0x1b0);
      }
      (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x40))
                (*(int64_t **)(lVar2 + 0x8400),0x21,1,auStackX_10);
      *(int64_t *)(lVar2 + 0x8540) = lVar5;
      *(int32_t *)(lVar2 + 0x88bc) = 0xffffffff;
      *(int32_t *)(lVar2 + 0x8abc) = 0x10;
      *(int *)(lVar2 + 0x82b4) = *(int *)(lVar2 + 0x82b4) + 1;
    }
    while (iVar4 = (int)uVar6, (uint64_t)(int64_t)iVar4 < (uint64_t)*(uint *)(param_2 + 0x2108))
    {
      FUN_1800e8640(param_1,*(uint64_t *)
                             (*(int64_t *)(param_2 + 0x2110 + (uVar6 >> 0xb) * 8) + 0x10 +
                             (uint64_t)(uint)(iVar4 + (int)(uVar6 >> 0xb) * -0x800) * 0x18));
      uVar6 = (uint64_t)(iVar4 + 1);
    }
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar1 + 0x84b8) != 0) || (*(int *)(lVar1 + 0x8878) != -1)) ||
       (lVar2 = system_message_buffer, *(int *)(lVar1 + 0x8a78) != 0x10)) {
      auStackX_10[1] = 0;
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
                (*(int64_t **)(lVar1 + 0x8400),0x10,1,auStackX_10 + 1);
      lVar2 = system_message_buffer;
      *(uint64_t *)(lVar1 + 0x84b8) = 0;
      *(int32_t *)(lVar1 + 0x8878) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a78) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(int64_t *)(lVar2 + 0x1cd8);
    if (((*(int64_t *)(lVar1 + 0x8540) != 0) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
       (*(int *)(lVar1 + 0x8abc) != 0x10)) {
      auStackX_10[2] = 0;
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
                (*(int64_t **)(lVar1 + 0x8400),0x21,1,auStackX_10 + 2);
      lVar2 = system_message_buffer;
      *(uint64_t *)(lVar1 + 0x8540) = 0;
      *(int32_t *)(lVar1 + 0x88bc) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8abc) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(int64_t *)(lVar2 + 0x1cd8);
    if (((*(int64_t *)(lVar1 + 0x8450) != 0) || (*(int *)(lVar1 + 0x8844) != -1)) ||
       (*(int *)(lVar1 + 0x8a44) != 0x10)) {
      auStack_38[0] = 0;
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
                (*(int64_t **)(lVar1 + 0x8400),3,1,auStack_38);
      *(uint64_t *)(lVar1 + 0x8450) = 0;
      *(int32_t *)(lVar1 + 0x8844) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a44) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




