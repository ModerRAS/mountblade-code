#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part054.c - 11 个函数

// 函数: void FUN_1801bf840(int64_t *param_1)
void FUN_1801bf840(int64_t *param_1)

{
  bool bVar1;
  int iVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t *plVar6;
  byte bVar7;
  int64_t lVar8;
  uint uVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint uVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t *plVar15;
  uint64_t uVar16;
  int64_t *plVar17;
  int64_t *plVar18;
  int64_t lVar19;
  int64_t *plVar20;
  uint64_t *puVar21;
  int iVar22;
  uint64_t uVar23;
  int64_t *plVar24;
  code *pcVar25;
  char cVar26;
  int64_t *plStackX_20;
  int64_t alStack_100 [2];
  code *pcStack_f0;
  code *pcStack_e8;
  int64_t lStack_e0;
  int64_t lStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  int64_t *plStack_c0;
  uint64_t uStack_b8;
  int32_t uStack_b0;
  int iStack_ac;
  code *pcStack_a8;
  void *puStack_a0;
  int64_t *plStack_98;
  int64_t *plStack_90;
  int64_t *plStack_88;
  int32_t uStack_80;
  int64_t **pplStack_78;
  int64_t *plStack_70;
  uint64_t uStack_68;
  int32_t uStack_60;
  int iStack_5c;
  uint64_t uStack_58;
  
  uStack_58 = 0xfffffffffffffffe;
  lStack_e0 = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 3;
  plVar24 = param_1 + 4;
  lVar10 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - *param_1),8) +
           (param_1[1] - *param_1);
  FUN_1800e8140(plVar24,(lVar10 >> 6) - (lVar10 >> 0x3f));
  FUN_1801beb80(param_1);
  lVar10 = param_1[1];
  for (lVar13 = *param_1; lVar13 != lVar10; lVar13 = lVar13 + 0x78) {
    uVar16 = 0;
    if (0 < *(int *)(lVar13 + 0x70)) {
      *(int32_t *)(lVar13 + 0x70) = 0;
    }
    if ((*(byte *)(lVar13 + 0x74) & 2) == 0) {
      bVar7 = *(byte *)(lVar13 + 0x74) | 1;
      *(byte *)(lVar13 + 0x74) = bVar7;
      plVar20 = *(int64_t **)(lVar13 + 8);
      uVar23 = (*(int64_t *)(lVar13 + 0x10) - (int64_t)plVar20) + 7U >> 3;
      if (*(int64_t **)(lVar13 + 0x10) < plVar20) {
        uVar23 = 0;
      }
      if (uVar23 != 0) {
        do {
          FUN_1801bed30(param_1,*plVar20 * 0x78 + *param_1,1);
          plVar20 = plVar20 + 1;
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar23);
        bVar7 = *(byte *)(lVar13 + 0x74);
      }
      *(byte *)(lVar13 + 0x74) = bVar7 | 2;
      SystemInitializer(plVar24,lVar13);
    }
  }
  *(int32_t *)(param_1 + 0xc) = 0;
  plVar20 = (int64_t *)param_1[5];
  iVar2 = 0;
  lVar10 = lStack_d8;
  for (plVar24 = (int64_t *)*plVar24; lStack_d8 = lVar10, plVar24 != plVar20; plVar24 = plVar24 + 1
      ) {
    uVar16 = 0;
    lVar10 = *plVar24;
    for (lVar13 = param_1[8]; (lVar13 != param_1[9] && (*(int64_t *)(lVar13 + 0x28) != lVar10));
        lVar13 = lVar13 + 0x38) {
    }
    if (*(int *)(lVar13 + 0x30) == -1) {
      *(int *)(lVar13 + 0x30) = iVar2;
      *(int32_t *)(lVar13 + 0x34) = 0;
      if ((int)param_1[0xc] < 0) {
        *(int32_t *)(param_1 + 0xc) = 0;
      }
      for (plVar3 = (int64_t *)*param_1; (plVar3 != (int64_t *)param_1[1] && (*plVar3 != lVar10));
          plVar3 = plVar3 + 0xf) {
      }
      puVar4 = (uint64_t *)plVar3[9];
      uVar23 = (uint64_t)(plVar3[10] + (7 - (int64_t)puVar4)) >> 3;
      if ((uint64_t *)plVar3[10] < puVar4) {
        uVar23 = uVar16;
      }
      if (uVar23 != 0) {
        do {
          FUN_1801beea0(param_1,*puVar4,iVar2);
          puVar4 = puVar4 + 1;
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar23);
      }
    }
    iVar2 = iVar2 + 1;
    lVar10 = lStack_d8;
  }
  uVar16 = (uint64_t)iVar2;
  if ((uint64_t)((lVar10 - lStack_e0) / 0x28) < uVar16) {
    FUN_1801bef80(&lStack_e0);
  }
  else {
    for (lVar13 = uVar16 * 0x28 + lStack_e0; lVar13 != lVar10; lVar13 = lVar13 + 0x28) {
      FUN_1801bf1f0();
    }
    lStack_d8 = uVar16 * 0x28 + lStack_e0;
  }
  if (0 < (int64_t)uVar16) {
    lVar10 = 0;
    do {
      plVar24 = (int64_t *)(lVar10 + 8 + lStack_e0);
      uVar23 = (uint64_t)((int)param_1[0xc] + 1);
      lVar13 = plVar24[1];
      lVar8 = *plVar24;
      if ((uint64_t)(lVar13 - lVar8 >> 5) < uVar23) {
        FUN_1801bf280(plVar24);
      }
      else {
        lVar19 = uVar23 * 0x20;
        lVar14 = lVar19 + lVar8;
        if (lVar14 != lVar13) {
          do {
            FUN_180057830(lVar14);
            lVar14 = lVar14 + 0x20;
          } while (lVar14 != lVar13);
          lVar8 = *plVar24;
        }
        plVar24[1] = lVar8 + lVar19;
      }
      lVar10 = lVar10 + 0x28;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  plVar24 = (int64_t *)param_1[4];
  plStackX_20 = (int64_t *)param_1[5];
  if (plVar24 != plStackX_20) {
    plVar20 = alStack_100;
    do {
      pplStack_78 = (int64_t **)*plVar24;
      for (lVar10 = param_1[8];
          (lVar10 != param_1[9] && (*(int64_t ***)(lVar10 + 0x28) != pplStack_78));
          lVar10 = lVar10 + 0x38) {
      }
      iVar22 = *(int *)(lVar10 + 0x34);
      plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3,plVar20);
      plStack_c0 = alStack_100;
      pcStack_f0 = (code *)0x0;
      pcStack_e8 = _guard_check_icall;
      if (alStack_100 != (int64_t *)(lVar10 + 8)) {
        pcVar25 = *(code **)(lVar10 + 0x18);
        if (pcVar25 != (code *)0x0) {
          (*pcVar25)(alStack_100,(int64_t *)(lVar10 + 8),1);
          pcVar25 = *(code **)(lVar10 + 0x18);
        }
        pcStack_e8 = *(code **)(lVar10 + 0x20);
        pcStack_f0 = pcVar25;
      }
      puVar4 = (uint64_t *)0x0;
      FUN_180049830(plVar3);
      *plVar3 = (int64_t)&unknown_var_2528_ptr;
      plStack_c0 = plVar3 + 0x18;
      plVar3[0x1a] = 0;
      plVar3[0x1b] = (int64_t)_guard_check_icall;
      if (plStack_c0 != alStack_100) {
        if (pcStack_f0 != (code *)0x0) {
          (*pcStack_f0)(plStack_c0,alStack_100,1);
        }
        plVar3[0x1a] = (int64_t)pcStack_f0;
        plVar3[0x1b] = (int64_t)pcStack_e8;
      }
      if (pcStack_f0 != (code *)0x0) {
        (*pcStack_f0)(alStack_100,0,0);
      }
      plStack_70 = plVar3;
      (**(code **)(*plVar3 + 0x28))(plVar3);
      plVar3[3] = -3;
      plVar17 = (int64_t *)
                ((int64_t)iVar22 * 0x20 +
                *(int64_t *)(lStack_e0 + 8 + (int64_t)*(int *)(lVar10 + 0x30) * 0x28));
      puVar11 = (uint64_t *)plVar17[1];
      if (puVar11 < (uint64_t *)plVar17[2]) {
        plVar17[1] = (int64_t)(puVar11 + 1);
        *puVar11 = plVar3;
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      else {
        puVar5 = (uint64_t *)*plVar17;
        lVar10 = (int64_t)puVar11 - (int64_t)puVar5 >> 3;
        if (lVar10 == 0) {
          lVar10 = 1;
LAB_1801bfd18:
          puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 8,(char)plVar17[3]);
          puVar11 = (uint64_t *)plVar17[1];
          puVar5 = (uint64_t *)*plVar17;
          puVar21 = puVar4;
        }
        else {
          lVar10 = lVar10 * 2;
          puVar21 = puVar4;
          if (lVar10 != 0) goto LAB_1801bfd18;
        }
        for (; puVar5 != puVar11; puVar5 = puVar5 + 1) {
          *puVar4 = *puVar5;
          *puVar5 = 0;
          puVar4 = puVar4 + 1;
        }
        *puVar4 = plVar3;
        (**(code **)(*plVar3 + 0x28))(plVar3);
        plVar18 = (int64_t *)plVar17[1];
        plVar15 = (int64_t *)*plVar17;
        if (plVar15 != plVar18) {
          do {
            if ((int64_t *)*plVar15 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar15 + 0x38))();
            }
            plVar15 = plVar15 + 1;
          } while (plVar15 != plVar18);
          plVar15 = (int64_t *)*plVar17;
        }
        if (plVar15 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plVar15);
        }
        *plVar17 = (int64_t)puVar21;
        plVar17[1] = (int64_t)(puVar4 + 1);
        plVar17[2] = (int64_t)(puVar21 + lVar10);
      }
      (**(code **)(*plVar3 + 0x38))(plVar3);
      plVar24 = plVar24 + 1;
    } while (plVar24 != plStackX_20);
  }
  plStack_98 = (int64_t *)0x0;
  plStack_90 = (int64_t *)0x0;
  plVar3 = (int64_t *)0x0;
  plStack_88 = (int64_t *)0x0;
  uStack_80 = 3;
  uVar16 = (uint64_t)
           ((int)(*(int64_t *)(system_context_ptr + 0x10) - *(int64_t *)(system_context_ptr + 8) >> 3) - 2
           );
  uVar12 = 0;
  plVar24 = (int64_t *)0x0;
  plVar20 = plVar3;
  if (0 < iVar2) {
    uStack_68 = &lStack_e0;
    plStack_70 = &uStack_b8;
    plVar20 = (int64_t *)0x0;
    plVar17 = plVar3;
    plVar18 = plVar24;
    plVar15 = plVar3;
    do {
      iVar22 = ((int)plVar3 + 1) % (int)uVar16;
      plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      plStackX_20 = &uStack_b8;
      uStack_b0 = SUB84(plVar17,0);
      pcStack_a8 = (code *)&unknown_var_3024_ptr;
      puStack_a0 = &unknown_var_3952_ptr;
      uStack_b8._0_4_ = (int32_t)uStack_68;
      uStack_b8._4_4_ = uStack_68._4_4_;
      iStack_ac = iVar22;
      uStack_60 = uStack_b0;
      iStack_5c = iVar22;
      FUN_180049830(plVar3);
      *plVar3 = (int64_t)&unknown_var_2528_ptr;
      plStackX_20 = plVar3 + 0x18;
      plVar3[0x1a] = 0;
      plVar3[0x1b] = (int64_t)_guard_check_icall;
      if (plStackX_20 != &uStack_b8) {
        if (pcStack_a8 != (code *)0x0) {
          (*pcStack_a8)(plStackX_20,&uStack_b8,1);
        }
        plVar3[0x1a] = (int64_t)pcStack_a8;
        plVar3[0x1b] = (int64_t)puStack_a0;
      }
      if (pcStack_a8 != (code *)0x0) {
        (*pcStack_a8)(&uStack_b8,0,0);
      }
      plStack_c0 = plVar3;
      (**(code **)(*plVar3 + 0x28))(plVar3);
      uVar9 = (iVar22 + 1) % (int)uVar16;
      plVar3[3] = (int64_t)(int)(1 << (uVar9 + 2 & 0x1f) | 1);
      lVar10 = system_context_ptr;
      pplStack_78 = &plStackX_20;
      plStackX_20 = plVar3;
      (**(code **)(*plVar3 + 0x28))(plVar3);
      FUN_18005e110(lVar10);
      if (plVar20 < plVar15) {
        *plVar20 = (int64_t)plVar3;
        plStack_90 = plVar20 + 1;
        (**(code **)(*plVar3 + 0x28))(plVar3);
        plVar24 = plVar18;
        plVar20 = plVar20 + 1;
      }
      else {
        lVar10 = (int64_t)plVar20 - (int64_t)plVar18 >> 3;
        plVar17 = plVar18;
        if (lVar10 == 0) {
          lVar10 = 1;
LAB_1801bffb0:
          plVar6 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 8,3);
          plVar24 = plVar6;
        }
        else {
          lVar10 = lVar10 * 2;
          if (lVar10 != 0) goto LAB_1801bffb0;
          plVar6 = (int64_t *)0x0;
          plVar24 = plVar6;
        }
        for (; plVar17 != plVar20; plVar17 = plVar17 + 1) {
          *plVar6 = *plVar17;
          *plVar17 = 0;
          plVar6 = plVar6 + 1;
        }
        *plVar6 = (int64_t)plVar3;
        (**(code **)(*plVar3 + 0x28))(plVar3);
        for (plVar17 = plVar18; plVar17 != plVar20; plVar17 = plVar17 + 1) {
          if ((int64_t *)*plVar17 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar17 + 0x38))();
          }
        }
        if (plVar18 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plVar18);
        }
        plVar15 = plVar24 + lVar10;
        plVar20 = plVar6 + 1;
        plStack_98 = plVar24;
        plStack_90 = plVar6 + 1;
        plStack_88 = plVar15;
      }
      (**(code **)(*plVar3 + 0x38))(plVar3);
      uVar12 = uVar12 + 1;
      plVar17 = (int64_t *)(uint64_t)uVar12;
      plVar3 = (int64_t *)(uint64_t)uVar9;
      plVar18 = plVar24;
    } while ((int)uVar12 < iVar2);
  }
  lVar10 = system_context_ptr;
  uVar16 = (int64_t)plVar20 - (int64_t)plVar24 >> 3;
  do {
    uVar23 = 0;
    bVar1 = false;
    lVar13 = lStack_d8;
    plVar20 = plStack_90;
    plVar3 = plVar24;
    if (uVar16 == 0) break;
    do {
      plVar20 = plVar24 + uVar23;
      plVar3 = (int64_t *)*plVar20;
      pcVar25 = *(code **)(*plVar3 + 0x68);
      if (pcVar25 == (code *)&unknown_var_9696_ptr) {
        cVar26 = (char)plVar3[2] != '\0';
        plVar24 = plStack_98;
      }
      else {
        cVar26 = (*pcVar25)();
      }
      if (cVar26 == '\0') {
        bVar1 = true;
        plVar3 = (int64_t *)FUN_18005e890(lVar10);
        cVar26 = (**(code **)(*plVar3 + 0x20))(plVar3,0);
        if (cVar26 == '\0') {
          plVar20 = (int64_t *)*plVar20;
          pcVar25 = *(code **)(*plVar20 + 0x80);
          if (pcVar25 == (code *)&unknown_var_1840_ptr) {
            FUN_1800496b0(plVar20 + 4);
          }
          else {
            (*pcVar25)();
          }
        }
      }
      uVar23 = (uint64_t)((int)uVar23 + 1);
    } while (uVar23 < uVar16);
    lVar13 = lStack_d8;
    plVar20 = plStack_90;
    plVar3 = plVar24;
  } while (bVar1);
  for (; plVar17 = plStack_90, lStack_d8 = lVar13, plVar24 != plStack_90; plVar24 = plVar24 + 1) {
    plStack_90 = plVar20;
    if ((int64_t *)*plVar24 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar24 + 0x38))();
    }
    lVar13 = lStack_d8;
    plVar20 = plStack_90;
    plStack_90 = plVar17;
  }
  plStack_90 = plVar20;
  lVar10 = lStack_e0;
  if (plVar3 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar3);
  }
  for (; lVar10 != lVar13; lVar10 = lVar10 + 0x28) {
    FUN_1801bf1f0();
  }
  if (lStack_e0 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}






// 函数: void FUN_1801c01d0(uint64_t *param_1,int64_t param_2,int64_t param_3)
void FUN_1801c01d0(uint64_t *param_1,int64_t param_2,int64_t param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  
  plVar3 = (int64_t *)param_1[8];
  for (plVar4 = plVar3; (plVar4 != (int64_t *)param_1[9] && (*plVar4 != param_2));
      plVar4 = plVar4 + 7) {
  }
  for (; (plVar3 != (int64_t *)param_1[9] && (*plVar3 != param_3)); plVar3 = plVar3 + 7) {
  }
  plVar2 = (int64_t *)*param_1;
  for (plVar1 = plVar2; (plVar1 != (int64_t *)param_1[1] && (*plVar1 != plVar4[5]));
      plVar1 = plVar1 + 0xf) {
  }
  for (; (plVar2 != (int64_t *)param_1[1] && (*plVar2 != plVar3[5])); plVar2 = plVar2 + 0xf) {
  }
  SystemInitializer(plVar1 + 5);
  plVar2 = (int64_t *)*param_1;
  for (plVar1 = plVar2; (plVar1 != (int64_t *)param_1[1] && (*plVar1 != plVar3[5]));
      plVar1 = plVar1 + 0xf) {
  }
  for (; (plVar2 != (int64_t *)param_1[1] && (*plVar2 != plVar4[5])); plVar2 = plVar2 + 0xf) {
  }
  SystemInitializer(plVar1 + 9);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_1801c02c0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lStackX_18;
  int64_t *plStackX_20;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 7) = 3;
  lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[2] - *param_1),8) +
          (param_1[2] - *param_1);
  if ((uint64_t)((lVar2 >> 6) - (lVar2 >> 0x3f)) < 0x10) {
    lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x780,(char)param_1[3]);
    FUN_1801c05a0(&lStackX_18,*param_1,param_1[1],lVar1);
    lVar2 = *param_1;
    if (lVar2 != param_1[1]) {
      do {
        plStackX_20 = (int64_t *)(lVar2 + 0x48);
        if (*plStackX_20 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        if (*(int64_t *)(lVar2 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        if (*(int64_t *)(lVar2 + 8) != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lVar2 = lVar2 + 0x78;
      } while (lVar2 != param_1[1]);
      lVar2 = *param_1;
    }
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar2);
    }
    *param_1 = lVar1;
    param_1[1] = lStackX_18;
    param_1[2] = lVar1 + 0x780;
  }
  return param_1;
}






// 函数: void FUN_1801c0410(int64_t *param_1)
void FUN_1801c0410(int64_t *param_1)

{
  int64_t lVar1;
  
  lVar1 = *param_1;
  while( true ) {
    if (lVar1 == param_1[1]) {
      if (*param_1 == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (*(int64_t *)(lVar1 + 0x48) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (*(int64_t *)(lVar1 + 0x28) != 0) break;
    if (*(int64_t *)(lVar1 + 8) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lVar1 = lVar1 + 0x78;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_1801c04b0(int64_t *param_1)
void FUN_1801c04b0(int64_t *param_1)

{
  int64_t lVar1;
  
  lVar1 = *param_1;
  while( true ) {
    if (lVar1 == param_1[1]) {
      if (*param_1 == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (*(int64_t *)(lVar1 + 0x48) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (*(int64_t *)(lVar1 + 0x28) != 0) break;
    if (*(int64_t *)(lVar1 + 8) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lVar1 = lVar1 + 0x78;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_1801c04d0(int64_t *param_1)
void FUN_1801c04d0(int64_t *param_1)

{
  int64_t lVar1;
  
  if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lVar1 = *param_1;
  while( true ) {
    if (lVar1 == param_1[1]) {
      if (*param_1 == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (*(int64_t *)(lVar1 + 0x48) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (*(int64_t *)(lVar1 + 0x28) != 0) break;
    if (*(int64_t *)(lVar1 + 8) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lVar1 = lVar1 + 0x78;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_1801c0510(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801c0510(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    if (*(code **)(lVar2 + 0x18) != (code *)0x0) {
      (**(code **)(lVar2 + 0x18))(lVar2 + 8,0,0,param_4,uVar3);
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_1801c0580(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801c0580(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    if (*(code **)(lVar2 + 0x18) != (code *)0x0) {
      (**(code **)(lVar2 + 0x18))(lVar2 + 8,0,0,param_4,uVar3);
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



int64_t * FUN_1801c05a0(int64_t *param_1,int32_t *param_2,int32_t *param_3,int64_t param_4)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  
  *param_1 = param_4;
  if (param_2 != param_3) {
    puVar6 = param_2 + 0x10;
    do {
      puVar4 = (uint64_t *)*param_1;
      *puVar4 = *(uint64_t *)(puVar6 + -0x10);
      puVar1 = puVar4 + 1;
      *puVar1 = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(int32_t *)(puVar4 + 4) = puVar6[-8];
      uVar5 = *puVar1;
      *puVar1 = *(uint64_t *)(puVar6 + -0xe);
      *(uint64_t *)(puVar6 + -0xe) = uVar5;
      uVar5 = puVar4[2];
      puVar4[2] = *(uint64_t *)(puVar6 + -0xc);
      *(uint64_t *)(puVar6 + -0xc) = uVar5;
      uVar5 = puVar4[3];
      puVar4[3] = *(uint64_t *)(puVar6 + -10);
      *(uint64_t *)(puVar6 + -10) = uVar5;
      uVar3 = *(int32_t *)(puVar4 + 4);
      *(int32_t *)(puVar4 + 4) = puVar6[-8];
      puVar6[-8] = uVar3;
      puVar1 = puVar4 + 5;
      *puVar1 = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(int32_t *)(puVar4 + 8) = *puVar6;
      uVar5 = *puVar1;
      *puVar1 = *(uint64_t *)(puVar6 + -6);
      *(uint64_t *)(puVar6 + -6) = uVar5;
      uVar5 = puVar4[6];
      puVar4[6] = *(uint64_t *)(puVar6 + -4);
      *(uint64_t *)(puVar6 + -4) = uVar5;
      uVar5 = puVar4[7];
      puVar4[7] = *(uint64_t *)(puVar6 + -2);
      *(uint64_t *)(puVar6 + -2) = uVar5;
      uVar3 = *(int32_t *)(puVar4 + 8);
      *(int32_t *)(puVar4 + 8) = *puVar6;
      *puVar6 = uVar3;
      puVar1 = puVar4 + 9;
      *puVar1 = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      *(int32_t *)(puVar4 + 0xc) = puVar6[8];
      uVar5 = *puVar1;
      *puVar1 = *(uint64_t *)(puVar6 + 2);
      *(uint64_t *)(puVar6 + 2) = uVar5;
      uVar5 = puVar4[10];
      puVar4[10] = *(uint64_t *)(puVar6 + 4);
      *(uint64_t *)(puVar6 + 4) = uVar5;
      uVar5 = puVar4[0xb];
      puVar4[0xb] = *(uint64_t *)(puVar6 + 6);
      *(uint64_t *)(puVar6 + 6) = uVar5;
      uVar3 = *(int32_t *)(puVar4 + 0xc);
      *(int32_t *)(puVar4 + 0xc) = puVar6[8];
      puVar6[8] = uVar3;
      puVar4[0xd] = *(uint64_t *)(puVar6 + 10);
      *(int32_t *)(puVar4 + 0xe) = puVar6[0xc];
      *(byte *)((int64_t)puVar4 + 0x74) =
           *(byte *)((int64_t)puVar4 + 0x74) ^
           (*(byte *)(puVar6 + 0xd) ^ *(byte *)((int64_t)puVar4 + 0x74)) & 1;
      *(byte *)((int64_t)puVar4 + 0x74) =
           *(byte *)((int64_t)puVar4 + 0x74) ^
           (*(byte *)(puVar6 + 0xd) ^ *(byte *)((int64_t)puVar4 + 0x74)) & 2;
      *param_1 = (int64_t)(puVar4 + 0xf);
      puVar2 = puVar6 + 0xe;
      puVar6 = puVar6 + 0x1e;
    } while (puVar2 != param_3);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801c0730(int64_t *param_1)
void FUN_1801c0730(int64_t *param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t *puStackX_8;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  
  lVar3 = param_1[1];
  lVar6 = *param_1;
  lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar3 - lVar6),8) + (lVar3 - lVar6);
  lVar2 = 0;
  lVar4 = (lVar4 >> 6) - (lVar4 >> 0x3f);
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = lVar4 * 2;
    if (lVar4 == 0) goto LAB_1801c07aa;
  }
  lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 0x78,(char)param_1[3]);
  lVar3 = param_1[1];
  lVar6 = *param_1;
LAB_1801c07aa:
  FUN_1801c05a0(&puStackX_8,lVar6,lVar3,lVar2);
  *puStackX_8 = 0xffffffffffffffff;
  puStackX_8[1] = 0;
  puStackX_8[2] = 0;
  puStackX_8[3] = 0;
  *(int32_t *)(puStackX_8 + 4) = 3;
  puStackX_8[5] = 0;
  puStackX_8[6] = 0;
  puStackX_8[7] = 0;
  *(int32_t *)(puStackX_8 + 8) = 3;
  plStackX_10 = puStackX_8 + 9;
  *plStackX_10 = 0;
  puStackX_8[10] = 0;
  puStackX_8[0xb] = 0;
  *(int32_t *)(puStackX_8 + 0xc) = 3;
  *(int32_t *)(puStackX_8 + 0xe) = 9999;
  *(byte *)((int64_t)puStackX_8 + 0x74) = *(byte *)((int64_t)puStackX_8 + 0x74) & 0xfc;
  puVar1 = puStackX_8 + 0xf;
  puVar5 = (uint64_t *)*param_1;
  puStackX_8 = puVar5;
  if (puVar5 != (uint64_t *)param_1[1]) {
    do {
      plStackX_10 = puVar5 + 9;
      puStackX_8 = puVar5;
      if (*plStackX_10 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plStackX_18 = puVar5 + 5;
      if (*plStackX_18 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plStackX_20 = puVar5 + 1;
      if (*plStackX_20 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      puStackX_8 = puVar5 + 0xf;
      puVar5 = puStackX_8;
    } while (puStackX_8 != (uint64_t *)param_1[1]);
    puVar5 = (uint64_t *)*param_1;
  }
  if (puVar5 == (uint64_t *)0x0) {
    *param_1 = lVar2;
    param_1[1] = (int64_t)puVar1;
    param_1[2] = lVar4 * 0x78 + lVar2;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar5);
}



uint64_t *
FUN_1801c08f0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  
  *param_1 = *param_2;
  param_1[3] = 0;
  param_1[4] = _guard_check_icall;
  if (param_1 + 1 != param_2 + 1) {
    pcVar1 = (code *)param_2[3];
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1 + 1,param_2 + 1,1,param_4,0xfffffffffffffffe);
      pcVar1 = (code *)param_2[3];
    }
    param_1[3] = pcVar1;
    param_1[4] = param_2[4];
  }
  param_1[5] = param_2[5];
  *(int32_t *)(param_1 + 6) = *(int32_t *)(param_2 + 6);
  *(int32_t *)((int64_t)param_1 + 0x34) = *(int32_t *)((int64_t)param_2 + 0x34);
  return param_1;
}






// 函数: void FUN_1801c09a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801c09a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_1 + 8,0,0,param_4,0xfffffffffffffffe);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801c09e0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801c09e0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  code *pcVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  lVar8 = ((int64_t)puVar7 - (int64_t)puVar4) / 0x38;
  puVar2 = (uint64_t *)0x0;
  if (lVar8 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = lVar8 * 2;
    if (lVar8 == 0) goto LAB_1801c0a6e;
  }
  puVar2 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 * 0x38,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
LAB_1801c0a6e:
  puVar5 = puVar2;
  if (puVar4 != puVar7) {
    lVar9 = (int64_t)puVar2 - (int64_t)puVar4;
    puVar4 = puVar4 + 3;
    do {
      *puVar5 = puVar4[-3];
      *(uint64_t *)(lVar9 + (int64_t)puVar4) = 0;
      *(code **)(lVar9 + 8 + (int64_t)puVar4) = _guard_check_icall;
      if ((uint64_t *)((int64_t)puVar4 + lVar9 + -0x10) != puVar4 + -2) {
        pcVar3 = (code *)*puVar4;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)();
          pcVar3 = (code *)*puVar4;
        }
        *(code **)(lVar9 + (int64_t)puVar4) = pcVar3;
        *(uint64_t *)(lVar9 + 8 + (int64_t)puVar4) = puVar4[1];
        *puVar4 = 0;
        puVar4[1] = _guard_check_icall;
      }
      *(uint64_t *)(lVar9 + 0x10 + (int64_t)puVar4) = puVar4[2];
      *(int32_t *)(lVar9 + 0x18 + (int64_t)puVar4) = *(int32_t *)(puVar4 + 3);
      *(int32_t *)(lVar9 + 0x1c + (int64_t)puVar4) = *(int32_t *)((int64_t)puVar4 + 0x1c);
      puVar5 = puVar5 + 7;
      puVar1 = puVar4 + 4;
      puVar4 = puVar4 + 7;
    } while (puVar1 != puVar7);
  }
  FUN_1801c08f0(puVar5,param_2);
  lVar9 = param_1[1];
  lVar6 = *param_1;
  if (lVar6 != lVar9) {
    do {
      if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
        (**(code **)(lVar6 + 0x18))(lVar6 + 8,0,0);
      }
      lVar6 = lVar6 + 0x38;
    } while (lVar6 != lVar9);
    lVar6 = *param_1;
  }
  if (lVar6 == 0) {
    *param_1 = (int64_t)puVar2;
    param_1[1] = (int64_t)(puVar5 + 7);
    param_1[2] = (int64_t)(puVar2 + lVar8 * 7);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar6);
}






// 函数: void FUN_1801c0bb0(int64_t *param_1,uint64_t param_2,int8_t *param_3,uint64_t param_4)
void FUN_1801c0bb0(int64_t *param_1,uint64_t param_2,int8_t *param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  code *pcVar4;
  int64_t lVar5;
  uint64_t uStack_50;
  int8_t auStack_48 [16];
  code *pcStack_38;
  code *pcStack_30;
  int64_t lStack_28;
  int32_t uStack_20;
  
  pcStack_38 = (code *)0x0;
  pcStack_30 = _guard_check_icall;
  uStack_50 = param_2;
  if (auStack_48 != param_3) {
    pcVar4 = *(code **)(param_3 + 0x10);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(auStack_48,param_3,1,param_4,0xfffffffffffffffe);
      pcVar4 = *(code **)(param_3 + 0x10);
    }
    pcStack_30 = *(code **)(param_3 + 0x18);
    pcStack_38 = pcVar4;
  }
  puVar1 = (uint64_t *)param_1[1];
  lVar5 = ((int64_t)puVar1 - *param_1) +
          SUB168(SEXT816(-0x7777777777777777) * SEXT816((int64_t)puVar1 - *param_1),8);
  lVar5 = (lVar5 >> 6) - (lVar5 >> 0x3f);
  if (puVar1 < (uint64_t *)param_1[2]) {
    *puVar1 = 0xffffffffffffffff;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(int32_t *)(puVar1 + 4) = 3;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(int32_t *)(puVar1 + 8) = 3;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(int32_t *)(puVar1 + 0xc) = 3;
    *(int32_t *)(puVar1 + 0xe) = 9999;
    *(byte *)((int64_t)puVar1 + 0x74) = *(byte *)((int64_t)puVar1 + 0x74) & 0xfc;
    param_1[1] = param_1[1] + 0x78;
  }
  else {
    FUN_1801c0730(param_1);
  }
  lVar2 = param_1[1];
  *(int64_t *)(lVar2 + -0x78) = lVar5;
  FUN_1800e8140(lVar2 + -0x50,1);
  uStack_20 = 0xffffffff;
  uVar3 = param_1[9];
  lStack_28 = lVar5;
  if (uVar3 < (uint64_t)param_1[10]) {
    param_1[9] = uVar3 + 0x38;
    FUN_1801c08f0(uVar3);
  }
  else {
    FUN_1801c09e0(param_1 + 8,&uStack_50);
  }
  if (pcStack_38 != (code *)0x0) {
    (*pcStack_38)(auStack_48,0,0);
  }
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3,0,0);
  }
  return;
}






