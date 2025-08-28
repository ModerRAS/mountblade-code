#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part080.c - 5 个函数

// 函数: void FUN_1802d18d0(int64_t param_1)
void FUN_1802d18d0(int64_t param_1)

{
  SystemDataValidator(param_1 + 0x1e8,0x20,6,FUN_180046860,0xfffffffffffffffe);
  SystemDataValidator(param_1 + 0x110,0x20,6,FUN_180046860);
  if (*(int64_t **)(param_1 + 0x50) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x50) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x48) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x48) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x40) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x40) + 0x38))();
  }
  SystemDataValidator(param_1 + 0x30,8,2,DataCacheManager);
  return;
}






// 函数: void FUN_1802d1970(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802d1970(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar6 = 0;
  uVar5 = uVar6;
  while( true ) {
    uVar4 = (uint)uVar5;
    if ((uint64_t)*(uint *)(param_1 + 0x5e8) <= (uint64_t)(int64_t)(int)uVar4) {
      while( true ) {
        uVar4 = (uint)uVar6;
        if ((uint64_t)*(uint *)(param_1 + 0x3a0) <= (uint64_t)(int64_t)(int)uVar4) {
          if (*(code **)(param_1 + 0xb50) != (code *)0x0) {
            (**(code **)(param_1 + 0xb50))(param_1 + 0xb40,0,0,param_4,0xfffffffffffffffe);
          }
          FUN_180057830();
          FUN_180057830();
          _Mtx_destroy_in_situ();
          FUN_1800e7b80(param_1 + 0x860);
          FUN_18004b730();
          FUN_1800e7b80(param_1 + 0x5e8);
          FUN_1800e7b80(param_1 + 0x3a0);
          FUN_180057830();
          if (*(int64_t **)(param_1 + 0x370) != (int64_t *)0x0) {
            (**(code **)(**(int64_t **)(param_1 + 0x370) + 0x38))();
          }
          if (*(int64_t *)(param_1 + 0x348) == 0) {
            if (*(int64_t **)(param_1 + 0x340) != (int64_t *)0x0) {
              (**(code **)(**(int64_t **)(param_1 + 0x340) + 0x38))();
            }
            if (*(int64_t **)(param_1 + 0x338) != (int64_t *)0x0) {
              (**(code **)(**(int64_t **)(param_1 + 0x338) + 0x38))();
            }
            SystemDataValidator(param_1 + 0x328,8,2,DataCacheManager);
            if (*(int64_t **)(param_1 + 800) != (int64_t *)0x0) {
              (**(code **)(**(int64_t **)(param_1 + 800) + 0x38))();
            }
            SystemDataValidator(param_1 + 0x310,8,2,DataCacheManager);
            FUN_1802d18d0(param_1 + 0x58);
            FUN_180058370(param_1 + 0x20,*(uint64_t *)(param_1 + 0x30));
            return;
          }
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        lVar1 = (uVar6 >> 10) * 8;
        lVar2 = (uint64_t)(uVar4 & 0x3ff) * 8;
        lVar3 = *(int64_t *)(*(int64_t *)(lVar1 + 0x3a8 + param_1) + lVar2);
        if (lVar3 != 0) break;
        *(uint64_t *)(*(int64_t *)(lVar1 + 0x3a8 + param_1) + lVar2) = 0;
        uVar6 = (uint64_t)(uVar4 + 1);
      }
      FUN_180057830();
      if (*(int64_t *)(lVar3 + 0x130) != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      if (*(int64_t **)(lVar3 + 0x128) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar3 + 0x128) + 0x38))();
      }
      if (*(int64_t *)(lVar3 + 0xf8) == 0) {
        *(uint64_t *)(lVar3 + 0x80) = &system_data_buffer_ptr;
        if (*(int64_t *)(lVar3 + 0x88) != 0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *(uint64_t *)(lVar3 + 0x88) = 0;
        *(int32_t *)(lVar3 + 0x98) = 0;
        *(uint64_t *)(lVar3 + 0x80) = &system_state_ptr;
        if (*(int64_t *)(lVar3 + 0x58) == 0) {
          if (*(int64_t **)(lVar3 + 0x48) != (int64_t *)0x0) {
            (**(code **)(**(int64_t **)(lVar3 + 0x48) + 0x38))();
          }
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer(lVar3);
        }
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lVar1 = (uVar5 >> 10) * 8;
    lVar2 = (uint64_t)(uVar4 & 0x3ff) * 8;
    lVar3 = *(int64_t *)(*(int64_t *)(lVar1 + 0x5f0 + param_1) + lVar2);
    if (lVar3 != 0) break;
    *(uint64_t *)(*(int64_t *)(lVar1 + 0x5f0 + param_1) + lVar2) = 0;
    uVar5 = (uint64_t)(uVar4 + 1);
  }
  FUN_180057830();
  if (*(int64_t *)(lVar3 + 0x130) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (*(int64_t **)(lVar3 + 0x128) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(lVar3 + 0x128) + 0x38))();
  }
  if (*(int64_t *)(lVar3 + 0xf8) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(uint64_t *)(lVar3 + 0x80) = &system_data_buffer_ptr;
  if (*(int64_t *)(lVar3 + 0x88) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(uint64_t *)(lVar3 + 0x88) = 0;
  *(int32_t *)(lVar3 + 0x98) = 0;
  *(uint64_t *)(lVar3 + 0x80) = &system_state_ptr;
  if (*(int64_t *)(lVar3 + 0x58) == 0) {
    if (*(int64_t **)(lVar3 + 0x48) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar3 + 0x48) + 0x38))();
    }
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(lVar3);
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802d1da0(int64_t param_1,float param_2)
void FUN_1802d1da0(int64_t param_1,float param_2)

{
  int64_t *plVar1;
  int8_t auVar2 [16];
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  int iVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int32_t *puVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint64_t uVar17;
  int64_t lVar18;
  float afStackX_10 [2];
  int32_t *puStackX_18;
  int64_t *plStackX_20;
  uint64_t uVar19;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_68;
  int32_t uStack_64;
  float *pfStack_60;
  void *puStack_58;
  code *pcStack_50;
  
  *(float *)(param_1 + 0x304) = param_2 + *(float *)(param_1 + 0x304);
  if (*(int64_t *)(param_1 + 0x388) - *(int64_t *)(param_1 + 0x380) >> 3 != 0) {
    FUN_18005e770(system_context_ptr,param_1 + 0x380,0);
    FUN_1800b8500(param_1 + 0x380);
  }
  FUN_1802d1f90(param_1);
  uVar19 = 0xfffffffffffffffe;
  lVar12 = param_1 + 0xaa8;
  afStackX_10[0] = param_2;
  lVar15 = lVar12;
  iVar4 = _Mtx_lock(lVar12);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  plVar1 = (int64_t *)(param_1 + 0xaf8);
  uVar17 = *(int64_t *)(param_1 + 0xb00) - *plVar1 >> 3;
  puStackX_18 = &uStack_68;
  pfStack_60 = afStackX_10;
  puStack_58 = &unknown_var_8304_ptr;
  pcStack_50 = FUN_1802d9500;
  uStack_78 = (int32_t)param_1;
  uStack_74 = (int32_t)((uint64_t)param_1 >> 0x20);
  uStack_68 = uStack_78;
  uStack_64 = uStack_74;
  iVar4 = (int)uVar17;
  FUN_18015b810(uStack_78,0,uVar17 & 0xffffffff,0x10,0xffffffffffffffff,&uStack_68,lVar15,uVar19);
  lVar18 = (int64_t)iVar4;
  if (0 < iVar4) {
    lVar16 = 0;
    lVar12 = lVar15;
    do {
      lVar6 = 0xe38e38e38e38e39;
      puVar11 = (int32_t *)*plVar1;
      lVar15 = *(int64_t *)(puVar11 + lVar16 * 2);
      puStackX_18 = puVar11;
      cVar3 = func_0x0001802ae0a0(lVar15);
      if (cVar3 == '\0') {
        lVar9 = 0;
        iVar4 = (int)((*(int64_t *)(lVar15 + 0x140) - *(int64_t *)(lVar15 + 0x138)) / 0x28);
        if (0 < iVar4) {
          plVar10 = (int64_t *)(*(int64_t *)(lVar15 + 0x138) + 8);
          do {
            auVar2 = SEXT816(lVar6) * SEXT816(plVar10[1] - *plVar10);
            iVar7 = (int)(auVar2._8_8_ >> 3) - (auVar2._12_4_ >> 0x1f);
            lVar15 = 0;
            if (0 < iVar7) {
              plVar14 = (int64_t *)(*plVar10 + 0x20);
              do {
                lVar5 = *(int64_t *)(*plVar14 + 0x60) - *(int64_t *)(*plVar14 + 0x58);
                lVar6 = lVar5 >> 0x3f;
                if (lVar5 / 0x70 + lVar6 != lVar6) goto LAB_1802d2bbf;
                plVar13 = (int64_t *)plVar14[2];
                lVar6 = 0;
                iVar8 = (int)((plVar14[3] - (int64_t)plVar13) / 0x88);
                if (0 < iVar8) {
                  do {
                    if ((*(int64_t *)(*plVar13 + 0x60) - *(int64_t *)(*plVar13 + 0x58)) / 0x70 !=
                        0) goto LAB_1802d2bbf;
                    lVar6 = lVar6 + 1;
                    plVar13 = plVar13 + 0x11;
                  } while (lVar6 < iVar8);
                }
                lVar15 = lVar15 + 1;
                plVar14 = plVar14 + 0x12;
              } while (lVar15 < iVar7);
            }
            lVar9 = lVar9 + 1;
            plVar10 = plVar10 + 5;
            lVar6 = 0xe38e38e38e38e39;
            puVar11 = puStackX_18;
          } while (lVar9 < iVar4);
        }
        plVar10 = *(int64_t **)(puVar11 + lVar18 * 2 + -2);
        if (plVar10 != (int64_t *)0x0) {
          plStackX_20 = plVar10;
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        plStackX_20 = *(int64_t **)(puVar11 + lVar16 * 2);
        *(int64_t **)(puVar11 + lVar16 * 2) = plVar10;
        if (plStackX_20 != (int64_t *)0x0) {
          (**(code **)(*plStackX_20 + 0x38))();
        }
        uVar17 = (uint64_t)((int)uVar17 - 1);
        lVar18 = lVar18 + -1;
      }
      else {
LAB_1802d2bbf:
        lVar16 = lVar16 + 1;
      }
      iVar4 = (int)uVar17;
    } while (lVar16 < lVar18);
  }
  FUN_1800b8630(plVar1,(int64_t)iVar4);
  iVar4 = _Mtx_unlock(lVar12);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802d1e30(int64_t param_1)
void FUN_1802d1e30(int64_t param_1)

{
  int64_t *plVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t alStack_30 [2];
  void *puStack_20;
  code *pcStack_18;
  
  uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3,0xfffffffffffffffe);
  puStack_20 = &unknown_var_8720_ptr;
  pcStack_18 = FUN_1802d95a0;
  alStack_30[0] = param_1;
  plVar4 = (int64_t *)FUN_18006b640(uVar3,alStack_30);
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  plVar1 = *(int64_t **)(param_1 + 0x370);
  *(int64_t **)(param_1 + 0x370) = plVar4;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  (**(code **)(**(int64_t **)(param_1 + 0x370) + 0x60))();
  plVar4 = *(int64_t **)(param_1 + 0x370);
  if (*(code **)(*plVar4 + 0x70) == (code *)&unknown_var_1280_ptr) {
    LOCK();
    *(int8_t *)(plVar4 + 2) = 1;
    UNLOCK();
    pcStack_18 = (code *)0xfffffffffffffffe;
    iVar2 = _Mtx_lock(plVar4 + 0xd);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    *(int8_t *)(plVar4 + 0x17) = 1;
    iVar2 = _Cnd_broadcast(plVar4 + 4);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    iVar2 = _Mtx_unlock(plVar4 + 0xd);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    return;
  }
  (**(code **)(*plVar4 + 0x70))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1802d1f90(int64_t param_1)

{
  uint64_t *puVar1;
  uint *puVar2;
  int64_t *plVar3;
  uint uVar4;
  int iVar5;
  int32_t uVar6;
  int64_t lVar7;
  uint uVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  int iVar12;
  uint64_t *puVar13;
  uint uVar14;
  bool bVar15;
  uint64_t uStackX_10;
  int8_t auStackX_18 [8];
  
  iVar5 = *(int *)(param_1 + 0x3a0);
  uVar14 = 0;
  if (0 < iVar5) {
    puVar1 = (uint64_t *)(param_1 + 0x830);
    do {
      lVar7 = *(int64_t *)
               (*(int64_t *)(param_1 + 0x3a8 + (uint64_t)(uVar14 >> 10) * 8) +
               (uint64_t)(uVar14 + (uVar14 >> 10) * -0x400) * 8);
      uStackX_10 = *(uint64_t *)(lVar7 + 0x48);
      puVar9 = puVar1;
      puVar10 = *(uint64_t **)(param_1 + 0x840);
      if (*(uint64_t **)(param_1 + 0x840) == (uint64_t *)0x0) {
LAB_1802d2023:
        puVar9 = puVar1;
      }
      else {
        do {
          if ((uint64_t)puVar10[4] < uStackX_10) {
            puVar13 = (uint64_t *)*puVar10;
          }
          else {
            puVar13 = (uint64_t *)puVar10[1];
            puVar9 = puVar10;
          }
          puVar10 = puVar13;
        } while (puVar13 != (uint64_t *)0x0);
        if ((puVar9 == puVar1) || (uStackX_10 < (uint64_t)puVar9[4])) goto LAB_1802d2023;
      }
      if (puVar9 == puVar1) {
        lVar11 = *(int64_t *)(param_1 + 0x350);
        if (*(int64_t *)(param_1 + 0x348) == lVar11) {
          iVar12 = *(int *)(param_1 + 0x368);
          *(int *)(param_1 + 0x368) = iVar12 + 1;
        }
        else {
          iVar12 = *(int *)(lVar11 + -4);
          *(int64_t *)(param_1 + 0x350) = lVar11 + -4;
        }
        *(int *)(lVar7 + 0xa4) = iVar12;
        puVar10 = puVar1;
        puVar9 = *(uint64_t **)(param_1 + 0x840);
        while (puVar9 != (uint64_t *)0x0) {
          if ((uint64_t)puVar9[4] < uStackX_10) {
            puVar9 = (uint64_t *)*puVar9;
          }
          else {
            puVar10 = puVar9;
            puVar9 = (uint64_t *)puVar9[1];
          }
        }
        if ((puVar10 == puVar1) || (uStackX_10 < (uint64_t)puVar10[4])) {
          puVar10 = (uint64_t *)FUN_1802d8c20(puVar1,auStackX_18,lVar11,puVar10,&uStackX_10);
          puVar10 = (uint64_t *)*puVar10;
        }
        puVar10[5] = CONCAT44(1,iVar12);
        *(int8_t *)(param_1 + 0xb38) = 0;
      }
      else {
        *(int32_t *)(lVar7 + 0xa4) = *(int32_t *)(puVar9 + 5);
        *(int *)((int64_t)puVar9 + 0x2c) = *(int *)((int64_t)puVar9 + 0x2c) + 1;
      }
      LOCK();
      puVar2 = (uint *)(param_1 + 0x5e8);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      uVar8 = uVar4 >> 10;
      if (*(int64_t *)(param_1 + 0x5f0 + (uint64_t)uVar8 * 8) == 0) {
        lVar11 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x2000,0x1b);
        plVar3 = (int64_t *)(param_1 + 0x5f0 + (uint64_t)uVar8 * 8);
        LOCK();
        bVar15 = *plVar3 == 0;
        if (bVar15) {
          *plVar3 = lVar11;
        }
        UNLOCK();
        if ((!bVar15) && (lVar11 != 0)) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
      }
      uVar14 = uVar14 + 1;
      *(int64_t *)
       (*(int64_t *)(param_1 + 0x5f0 + (uint64_t)uVar8 * 8) +
       (uint64_t)(uVar4 + uVar8 * -0x400) * 8) = lVar7;
    } while ((int)uVar14 < iVar5);
  }
  uVar6 = *(int32_t *)(param_1 + 0x3a0);
  LOCK();
  *(int32_t *)(param_1 + 0x3a0) = 0;
  UNLOCK();
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1802d1fb7(int64_t param_1)

{
  uint64_t *puVar1;
  uint *puVar2;
  int64_t *plVar3;
  uint uVar4;
  int32_t uVar5;
  int64_t lVar6;
  uint uVar7;
  int64_t in_RAX;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  int iVar11;
  uint64_t *puVar12;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  int32_t unaff_R12D;
  int unaff_R13D;
  uint64_t unaff_R14;
  uint unaff_R15D;
  bool bVar13;
  uint64_t uStack0000000000000078;
  
  *(uint64_t *)(in_RAX + 0x20) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x28) = unaff_RBP;
  puVar1 = (uint64_t *)(param_1 + 0x830);
  *(uint64_t *)(in_RAX + -0x30) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R14;
  do {
    lVar6 = *(int64_t *)
             (*(int64_t *)(unaff_RSI + 0x3a8 + (uint64_t)(unaff_R15D >> 10) * 8) +
             (uint64_t)(unaff_R15D + (unaff_R15D >> 10) * -0x400) * 8);
    uStack0000000000000078 = *(uint64_t *)(lVar6 + 0x48);
    puVar8 = puVar1;
    puVar9 = *(uint64_t **)(param_1 + 0x840);
    if (*(uint64_t **)(param_1 + 0x840) == (uint64_t *)0x0) {
LAB_1802d2023:
      puVar8 = puVar1;
    }
    else {
      do {
        if ((uint64_t)puVar9[4] < uStack0000000000000078) {
          puVar12 = (uint64_t *)*puVar9;
        }
        else {
          puVar12 = (uint64_t *)puVar9[1];
          puVar8 = puVar9;
        }
        puVar9 = puVar12;
      } while (puVar12 != (uint64_t *)0x0);
      if ((puVar8 == puVar1) || (uStack0000000000000078 < (uint64_t)puVar8[4])) goto LAB_1802d2023;
    }
    if (puVar8 == puVar1) {
      lVar10 = *(int64_t *)(unaff_RSI + 0x350);
      if (*(int64_t *)(unaff_RSI + 0x348) == lVar10) {
        iVar11 = *(int *)(unaff_RSI + 0x368);
        *(int *)(unaff_RSI + 0x368) = iVar11 + 1;
      }
      else {
        iVar11 = *(int *)(lVar10 + -4);
        *(int64_t *)(unaff_RSI + 0x350) = lVar10 + -4;
      }
      *(int *)(lVar6 + 0xa4) = iVar11;
      puVar9 = puVar1;
      puVar8 = *(uint64_t **)(param_1 + 0x840);
      while (puVar8 != (uint64_t *)0x0) {
        if ((uint64_t)puVar8[4] < uStack0000000000000078) {
          puVar8 = (uint64_t *)*puVar8;
        }
        else {
          puVar9 = puVar8;
          puVar8 = (uint64_t *)puVar8[1];
        }
      }
      if ((puVar9 == puVar1) || (uStack0000000000000078 < (uint64_t)puVar9[4])) {
        puVar9 = (uint64_t *)FUN_1802d8c20(puVar1,&stack0x00000080,lVar10,puVar9,&stack0x00000078)
        ;
        puVar9 = (uint64_t *)*puVar9;
      }
      puVar9[5] = CONCAT44(1,iVar11);
      *(char *)(unaff_RSI + 0xb38) = (char)unaff_R12D;
    }
    else {
      *(int32_t *)(lVar6 + 0xa4) = *(int32_t *)(puVar8 + 5);
      *(int *)((int64_t)puVar8 + 0x2c) = *(int *)((int64_t)puVar8 + 0x2c) + 1;
    }
    LOCK();
    puVar2 = (uint *)(unaff_RSI + 0x5e8);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 + 1;
    UNLOCK();
    uVar7 = uVar4 >> 10;
    if (*(int64_t *)(unaff_RSI + 0x5f0 + (uint64_t)uVar7 * 8) == 0) {
      lVar10 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x2000,0x1b);
      plVar3 = (int64_t *)(unaff_RSI + 0x5f0 + (uint64_t)uVar7 * 8);
      LOCK();
      bVar13 = *plVar3 == 0;
      if (bVar13) {
        *plVar3 = lVar10;
      }
      UNLOCK();
      if ((!bVar13) && (lVar10 != 0)) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
    }
    unaff_R15D = unaff_R15D + 1;
    *(int64_t *)
     (*(int64_t *)(unaff_RSI + 0x5f0 + (uint64_t)uVar7 * 8) +
     (uint64_t)(uVar4 + uVar7 * -0x400) * 8) = lVar6;
    if (unaff_R13D <= (int)unaff_R15D) {
      uVar5 = *(int32_t *)(unaff_RSI + 0x3a0);
      LOCK();
      *(int32_t *)(unaff_RSI + 0x3a0) = unaff_R12D;
      UNLOCK();
      return uVar5;
    }
  } while( true );
}



int32_t FUN_1802d2167(void)

{
  int32_t uVar1;
  int64_t unaff_RSI;
  int32_t unaff_R12D;
  
  uVar1 = *(int32_t *)(unaff_RSI + 0x3a0);
  LOCK();
  *(int32_t *)(unaff_RSI + 0x3a0) = unaff_R12D;
  UNLOCK();
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802d2180(int64_t param_1,uint param_2)
void FUN_1802d2180(int64_t param_1,uint param_2)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  code *pcVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t *plVar7;
  uint uVar8;
  int64_t lVar9;
  uint uVar10;
  int iVar11;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  int8_t auStack_298 [32];
  int32_t uStack_278;
  int32_t uStack_270;
  int32_t uStack_268;
  int32_t uStack_260;
  int iStack_258;
  uint64_t uStack_250;
  int8_t uStack_248;
  int32_t uStack_240;
  int64_t *plStack_238;
  int64_t **pplStack_230;
  int64_t *plStack_228;
  int64_t **pplStack_220;
  void **ppuStack_218;
  int64_t *plStack_210;
  int64_t *plStack_208;
  int64_t *plStack_200;
  int64_t *plStack_1f8;
  int64_t *plStack_1f0;
  int64_t *plStack_1e8;
  int64_t *plStack_1e0;
  int64_t *plStack_1d8;
  int64_t *plStack_1d0;
  void **ppuStack_1c8;
  uint64_t uStack_1c0;
  void *puStack_1b8;
  int8_t *puStack_1b0;
  int32_t uStack_1a8;
  int8_t auStack_1a0 [128];
  int32_t uStack_120;
  uint64_t uStack_118;
  int64_t *plStack_110;
  int iStack_108;
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [32];
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [32];
  uint64_t uStack_68;
  
  uStack_1c0 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_298;
  if (*(char *)(param_1 + 0xb38) == '\0') {
    if ((*(int64_t *)(param_1 + 0x338) == 0) ||
       (*(uint *)(*(int64_t *)(param_1 + 0x338) + 0x3c) < *(uint *)(param_1 + 0x368))) {
      iVar11 = ((*(uint *)(param_1 + 0x368) >> 5) + 1) * 0x20;
      puStack_d8 = &unknown_var_672_ptr;
      puStack_d0 = auStack_c0;
      auStack_c0[0] = 0;
      uStack_c8 = 0xc;
      uVar12 = strcpy_s(auStack_c0,0x20,&unknown_var_9448_ptr);
      uStack_240 = 1;
      uStack_248 = 1;
      uStack_250 = 0;
      uStack_260 = 0x50;
      uStack_268 = 0;
      uStack_270 = 3;
      uStack_278 = 0x61;
      iStack_258 = iVar11;
      puVar5 = (uint64_t *)
               FUN_1800b0a10(uVar12,&plStack_208,*(int32_t *)(param_1 + 0x300),&puStack_d8);
      uVar12 = *puVar5;
      *puVar5 = 0;
      plStack_210 = *(int64_t **)(param_1 + 0x338);
      *(uint64_t *)(param_1 + 0x338) = uVar12;
      uVar12 = extraout_XMM0_Qa;
      if (plStack_210 != (int64_t *)0x0) {
        uVar12 = (**(code **)(*plStack_210 + 0x38))();
      }
      if (plStack_208 != (int64_t *)0x0) {
        uVar12 = (**(code **)(*plStack_208 + 0x38))();
      }
      puStack_d8 = &system_state_ptr;
      puVar5 = (uint64_t *)FUN_1802d8730(uVar12,&plStack_1f8,iVar11);
      uVar12 = *puVar5;
      *puVar5 = 0;
      plStack_200 = *(int64_t **)(param_1 + 0x328);
      *(uint64_t *)(param_1 + 0x328) = uVar12;
      uVar12 = extraout_XMM0_Qa_00;
      if (plStack_200 != (int64_t *)0x0) {
        uVar12 = (**(code **)(*plStack_200 + 0x38))();
      }
      if (plStack_1f8 != (int64_t *)0x0) {
        uVar12 = (**(code **)(*plStack_1f8 + 0x38))();
      }
      puVar5 = (uint64_t *)FUN_1802d8730(uVar12,&pplStack_230,iVar11);
      uVar12 = *puVar5;
      *puVar5 = 0;
      pplStack_220 = *(int64_t ***)(param_1 + 0x330);
      *(uint64_t *)(param_1 + 0x330) = uVar12;
      if (pplStack_220 != (int64_t **)0x0) {
        (*(code *)(*pplStack_220)[7])();
      }
      if (pplStack_230 != (int64_t **)0x0) {
        (*(code *)(*pplStack_230)[7])();
      }
    }
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x328) + 0x10);
    for (lVar6 = *(int64_t *)(param_1 + 0x838); lVar6 != param_1 + 0x830;
        lVar6 = func_0x00018066bd70(lVar6)) {
      lVar3 = *(int64_t *)(lVar6 + 0x20);
      lVar9 = (int64_t)*(int *)(lVar6 + 0x28);
      *(int32_t *)(lVar2 + lVar9 * 0x50) = *(int32_t *)(lVar3 + 0x9c);
      *(int32_t *)(lVar2 + 4 + lVar9 * 0x50) = *(int32_t *)(lVar3 + 0xa0);
      *(int32_t *)(lVar2 + 0x30 + lVar9 * 0x50) = *(int32_t *)(lVar3 + 0xa4);
      *(int32_t *)(lVar2 + 0x44 + lVar9 * 0x50) = *(int32_t *)(lVar3 + 0xa8);
      *(int32_t *)(lVar2 + 0x48 + lVar9 * 0x50) = *(int32_t *)(lVar3 + 0xac);
      if ((*(uint *)(lVar3 + 0x68) & 0x810) == 0) {
        *(int32_t *)(lVar2 + 8 + lVar9 * 0x50) = 0x3f800000;
        *(int32_t *)(lVar2 + 0xc + lVar9 * 0x50) = 0x3f800000;
      }
      else {
        *(float *)(lVar2 + 8 + lVar9 * 0x50) = 1.0 / (float)*(int *)(lVar3 + 0xfc4);
        *(float *)(lVar2 + 0xc + lVar9 * 0x50) = 1.0 / (float)*(int *)(lVar3 + 0xfc8);
      }
      *(float *)(lVar2 + 0x10 + lVar9 * 0x50) = *(float *)(lVar3 + 0xb0) * *(float *)(lVar3 + 0xb0);
      *(int32_t *)(lVar2 + 0x1c + lVar9 * 0x50) = *(int32_t *)(lVar3 + 0xb4);
      *(int32_t *)(lVar2 + 0x3c + lVar9 * 0x50) = *(int32_t *)(lVar3 + 0xb8);
      *(int32_t *)(lVar2 + 0x40 + lVar9 * 0x50) = *(int32_t *)(lVar3 + 0xbc);
      *(float *)(lVar2 + 0x18 + lVar9 * 0x50) = (float)(int)*(float *)(lVar3 + 0x90);
      *(int32_t *)(lVar2 + 0x14 + lVar9 * 0x50) = *(int32_t *)(lVar3 + 0x88);
      *(int32_t *)(lVar2 + 0x38 + lVar9 * 0x50) = *(int32_t *)(lVar3 + 0x8c);
      *(uint64_t *)(lVar2 + 0x20 + lVar9 * 0x50) = *(uint64_t *)(lVar3 + 0x1050);
      *(uint64_t *)(lVar2 + 0x28 + lVar9 * 0x50) = *(uint64_t *)(lVar3 + 0x1058);
      iVar11 = *(int *)(lVar3 + 0xbe8);
      if (iVar11 == 0) {
        uVar8 = 8;
      }
      else if (iVar11 == 2) {
        uVar8 = 2;
      }
      else if (iVar11 == 3) {
        uVar8 = 4;
      }
      else {
        uVar8 = 0;
        if (iVar11 == 4) {
          uVar8 = 1;
        }
      }
      uVar1 = *(uint *)(lVar3 + 0x68);
      uVar10 = uVar8 | 0x10;
      if ((uVar1 & 0x80) == 0) {
        uVar10 = uVar8;
      }
      uVar8 = uVar10 | 0x20;
      if ((uVar1 & 0x80000) == 0) {
        uVar8 = uVar10;
      }
      uVar10 = uVar8 | 0x40;
      if ((uVar1 & 0x10000) == 0) {
        uVar10 = uVar8;
      }
      uVar8 = uVar10 | 0x1000;
      if ((uVar1 & 0x20000000) == 0) {
        uVar8 = uVar10;
      }
      uVar10 = uVar8 | 0x80;
      if ((uVar1 & 0x40) == 0) {
        uVar10 = uVar8;
      }
      uVar8 = uVar10 | 0x100;
      if ((uVar1 & 0x2000000) == 0) {
        uVar8 = uVar10;
      }
      uVar10 = uVar8 | 0x200;
      if (*(float *)(lVar3 + 0xa4) <= 0.0) {
        uVar10 = uVar8;
      }
      uVar8 = uVar10 | 0x400;
      if (*(float *)(lVar3 + 0x9c) <= 0.0) {
        uVar8 = uVar10;
      }
      uVar10 = uVar8 | 0x800;
      if ((uVar1 & 0x1000000) == 0) {
        uVar10 = uVar8;
      }
      uVar8 = uVar10 | 0x2000;
      if ((uVar1 & 0x40000000) == 0) {
        uVar8 = uVar10;
      }
      *(uint *)(lVar2 + 0x34 + lVar9 * 0x50) = uVar8;
    }
    ppuStack_218 = &puStack_1b8;
    puStack_1b8 = &unknown_var_3432_ptr;
    puStack_1b0 = auStack_1a0;
    uStack_1a8 = 0;
    auStack_1a0[0] = 0;
    uStack_120 = 9;
    uStack_118 = *(uint64_t *)(param_1 + 0x338);
    plStack_110 = *(int64_t **)(param_1 + 0x328);
    iStack_108 = *(int *)(param_1 + 0x368) * 0x50;
    if (*(code **)(*plStack_110 + 0x28) == (code *)&unknown_var_3248_ptr) {
      LOCK();
      *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plStack_110 + 0x28))(plStack_110);
    }
    uVar12 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
    plVar7 = (int64_t *)FUN_18005ce30(uVar12,&puStack_1b8);
    ppuStack_1c8 = (void **)plVar7;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7);
    }
    lVar2 = system_context_ptr;
    pplStack_230 = &plStack_238;
    plStack_238 = plVar7;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7);
    }
    pplStack_220 = &plStack_238;
    puVar5 = *(uint64_t **)(*(int64_t *)(lVar2 + 8) + 8);
    pcVar4 = *(code **)*puVar5;
    pplStack_230 = &plStack_228;
    plStack_228 = plStack_238;
    if (plStack_238 != (int64_t *)0x0) {
      (**(code **)(*plStack_238 + 0x28))();
    }
    (*pcVar4)(puVar5,&plStack_228);
    if (plStack_238 != (int64_t *)0x0) {
      (**(code **)(*plStack_238 + 0x38))();
    }
    uVar12 = *(uint64_t *)(param_1 + 0x328);
    *(uint64_t *)(param_1 + 0x328) = *(uint64_t *)(param_1 + 0x330);
    *(uint64_t *)(param_1 + 0x330) = uVar12;
    *(int8_t *)(param_1 + 0xb38) = 1;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    ppuStack_1c8 = &puStack_1b8;
    puStack_1b8 = &system_state_ptr;
  }
  if ((*(int64_t *)(param_1 + 800) == 0) ||
     (*(uint *)(*(int64_t *)(param_1 + 800) + 0x3c) < param_2)) {
    iVar11 = (((int)(((int)param_2 >> 0x1f & 0x3ffU) + param_2) >> 10) + 1) * 0x400;
    puStack_a0 = &unknown_var_672_ptr;
    puStack_98 = auStack_88;
    auStack_88[0] = 0;
    uStack_90 = 0xf;
    uVar12 = strcpy_s(auStack_88,0x20,&unknown_var_9568_ptr);
    uStack_240 = 1;
    uStack_248 = 1;
    uStack_250 = 0;
    uStack_260 = 0x48;
    uStack_268 = 0;
    uStack_270 = 3;
    uStack_278 = 0x61;
    iStack_258 = iVar11;
    puVar5 = (uint64_t *)
             FUN_1800b0a10(uVar12,&plStack_1e8,*(int32_t *)(param_1 + 0x300),&puStack_a0);
    uVar12 = *puVar5;
    *puVar5 = 0;
    plStack_1f0 = *(int64_t **)(param_1 + 800);
    *(uint64_t *)(param_1 + 800) = uVar12;
    uVar12 = extraout_XMM0_Qa_01;
    if (plStack_1f0 != (int64_t *)0x0) {
      uVar12 = (**(code **)(*plStack_1f0 + 0x38))();
    }
    if (plStack_1e8 != (int64_t *)0x0) {
      uVar12 = (**(code **)(*plStack_1e8 + 0x38))();
    }
    puStack_a0 = &system_state_ptr;
    puVar5 = (uint64_t *)FUN_1802d8860(uVar12,&plStack_1d8,iVar11);
    uVar12 = *puVar5;
    *puVar5 = 0;
    plStack_1e0 = *(int64_t **)(param_1 + 0x310);
    *(uint64_t *)(param_1 + 0x310) = uVar12;
    uVar12 = extraout_XMM0_Qa_02;
    if (plStack_1e0 != (int64_t *)0x0) {
      uVar12 = (**(code **)(*plStack_1e0 + 0x38))();
    }
    if (plStack_1d8 != (int64_t *)0x0) {
      uVar12 = (**(code **)(*plStack_1d8 + 0x38))();
    }
    puVar5 = (uint64_t *)FUN_1802d8860(uVar12,&ppuStack_218,iVar11);
    uVar12 = *puVar5;
    *puVar5 = 0;
    plStack_1d0 = *(int64_t **)(param_1 + 0x318);
    *(uint64_t *)(param_1 + 0x318) = uVar12;
    if (plStack_1d0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1d0 + 0x38))();
    }
    if (ppuStack_218 != (void **)0x0) {
      (**(code **)(*ppuStack_218 + 0x38))();
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_68 ^ (uint64_t)auStack_298);
}






