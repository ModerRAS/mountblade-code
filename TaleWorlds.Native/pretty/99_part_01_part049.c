#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part049.c - 1 个函数

// 函数: void FUN_1800d5be0(uint64_t param_1,uint64_t param_2,int32_t param_3)
void FUN_1800d5be0(uint64_t param_1,uint64_t param_2,int32_t param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  code *pcVar3;
  bool bVar4;
  int64_t lVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  int64_t *plVar14;
  uint64_t uVar15;
  int8_t uVar16;
  int iVar17;
  uint64_t *puVar18;
  char cVar19;
  int64_t *plStackX_20;
  int64_t lStack_a8;
  uint64_t uStack_98;
  int32_t uStack_90;
  int32_t uStack_8c;
  code *pcStack_88;
  void *puStack_80;
  int64_t *plStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  uint64_t uStack_60;
  int32_t *puStack_58;
  int64_t **pplStack_50;
  int64_t *plStack_48;
  
  lVar5 = system_parameter_buffer;
  uStack_60 = 0xfffffffffffffffe;
  plVar7 = (int64_t *)(system_parameter_buffer + 0x20);
  *(int64_t *)(system_parameter_buffer + 0x28) = *plVar7;
  plStack_78 = plVar7;
  FUN_1800da760(lVar5,param_2,plVar7);
  plVar1 = (int64_t *)(lVar5 + 0x40);
  SystemCore_Controller(plVar1);
  iVar17 = 0;
  lVar12 = *plVar7;
  if (*(int64_t *)(lVar5 + 0x28) - lVar12 >> 3 != 0) {
    puStack_58 = (int32_t *)&uStack_98;
    pplStack_50 = &plStackX_20;
    lStack_a8 = 0;
    do {
      puVar9 = (uint64_t *)0x0;
      lVar12 = *(int64_t *)(lStack_a8 + lVar12);
      if (((((*(int *)(system_system_data_memory + 0x5b0) == 0) && (*(char *)(lVar12 + 0x20) == '\0')) &&
           (*(char *)(lVar12 + 0x21) == '\0')) &&
          ((iVar6 = *(int *)(lVar12 + 8), iVar6 == -1 || ((iVar6 != 4 && (iVar6 != 5)))))) &&
         ((*(uint *)(lVar12 + 4) & 0x1000004) == 0)) {
        uVar16 = 1;
      }
      else {
        uVar16 = 0;
      }
      plVar7 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      uStack_68 = CONCAT31(uStack_68._1_3_,uVar16);
      pcStack_88 = (code *)&ui_system_data_1728_ptr;
      puStack_80 = &ui_system_data_1696_ptr;
      uStack_70._0_4_ = (int32_t)lVar12;
      uStack_70._4_4_ = (int32_t)((uint64_t)lVar12 >> 0x20);
      uStack_98._0_4_ = (int32_t)uStack_70;
      uStack_98._4_4_ = uStack_70._4_4_;
      uStack_90 = uStack_68;
      plStackX_20 = plVar7;
      uStack_8c = param_3;
      uStack_70 = lVar12;
      uStack_64 = param_3;
      UltraHighFreq_PerformanceMonitor1(plVar7);
      *plVar7 = (int64_t)&rendering_buffer_2528_ptr;
      plVar7[0x1a] = 0;
      plVar7[0x1b] = (int64_t)_guard_check_icall;
      if (plVar7 + 0x18 != &uStack_98) {
        if (pcStack_88 != (code *)0x0) {
          (*pcStack_88)(plVar7 + 0x18,&uStack_98,1);
        }
        plVar7[0x1a] = (int64_t)pcStack_88;
        plVar7[0x1b] = (int64_t)puStack_80;
      }
      if (pcStack_88 != (code *)0x0) {
        (*pcStack_88)(&uStack_98,0,0);
      }
      plStack_48 = plVar7;
      (**(code **)(*plVar7 + 0x28))(plVar7);
      plVar7[3] = -4;
      lVar12 = system_context_ptr;
      plStackX_20 = plVar7;
      (**(code **)(*plVar7 + 0x28))(plVar7);
      (**(code **)(*plStackX_20 + 0x78))();
      lVar8 = FUN_18005eb80(lVar12 + 0x548);
      if (lVar8 != 0) {
        FUN_18005f220(lVar8,&plStackX_20);
      }
      do {
        iVar6 = ReleaseSemaphore(*(uint64_t *)(lVar12 + 0x68),1);
      } while (iVar6 == 0);
      if (plStackX_20 != (int64_t *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      puVar13 = *(uint64_t **)(lVar5 + 0x48);
      if (puVar13 < *(uint64_t **)(lVar5 + 0x50)) {
        *(uint64_t **)(lVar5 + 0x48) = puVar13 + 1;
        *puVar13 = plVar7;
        (**(code **)(*plVar7 + 0x28))(plVar7);
      }
      else {
        puVar10 = (uint64_t *)*plVar1;
        lVar12 = (int64_t)puVar13 - (int64_t)puVar10 >> 3;
        if (lVar12 == 0) {
          lVar12 = 1;
LAB_1800d5e4d:
          puVar9 = (uint64_t *)
                   CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 8,*(int8_t *)(lVar5 + 0x58));
          puVar13 = *(uint64_t **)(lVar5 + 0x48);
          puVar10 = (uint64_t *)*plVar1;
          puVar18 = puVar9;
        }
        else {
          lVar12 = lVar12 * 2;
          puVar18 = puVar9;
          if (lVar12 != 0) goto LAB_1800d5e4d;
        }
        for (; puVar10 != puVar13; puVar10 = puVar10 + 1) {
          *puVar9 = *puVar10;
          *puVar10 = 0;
          puVar9 = puVar9 + 1;
        }
        *puVar9 = plVar7;
        (**(code **)(*plVar7 + 0x28))(plVar7);
        plVar2 = *(int64_t **)(lVar5 + 0x48);
        plVar14 = (int64_t *)*plVar1;
        if (plVar14 != plVar2) {
          do {
            if ((int64_t *)*plVar14 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar14 + 0x38))();
            }
            plVar14 = plVar14 + 1;
          } while (plVar14 != plVar2);
          plVar14 = (int64_t *)*plVar1;
        }
        if (plVar14 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plVar14);
        }
        *plVar1 = (int64_t)puVar18;
        *(uint64_t **)(lVar5 + 0x48) = puVar9 + 1;
        *(uint64_t **)(lVar5 + 0x50) = puVar18 + lVar12;
      }
      (**(code **)(*plVar7 + 0x38))(plVar7);
      iVar17 = iVar17 + 1;
      lStack_a8 = lStack_a8 + 8;
      lVar12 = *plStack_78;
    } while ((uint64_t)(int64_t)iVar17 < (uint64_t)(plStack_78[1] - lVar12 >> 3));
  }
  lVar8 = system_context_ptr;
  lVar12 = *plVar1;
  do {
    bVar4 = false;
    uVar15 = 0;
    if (*(int64_t *)(lVar5 + 0x48) - lVar12 >> 3 == 0) {
      return;
    }
    do {
      plVar7 = *(int64_t **)(uVar15 * 8 + lVar12);
      pcVar3 = *(code **)(*plVar7 + 0x68);
      if (pcVar3 == (code *)&processed_var_9696_ptr) {
        cVar19 = (char)plVar7[2] != '\0';
      }
      else {
        cVar19 = (*pcVar3)();
      }
      if (cVar19 == '\0') {
        bVar4 = true;
        uVar11 = PerformanceOptimizer(lVar8);
        cVar19 = FUN_18020ee40(uVar11);
        if (cVar19 == '\0') {
          plVar7 = *(int64_t **)(uVar15 * 8 + *plVar1);
          pcVar3 = *(code **)(*plVar7 + 0x80);
          if (pcVar3 == (code *)&ui_system_data_1840_ptr) {
            FUN_1800496b0(plVar7 + 4);
          }
          else {
            (*pcVar3)();
          }
        }
      }
      uVar15 = (uint64_t)((int)uVar15 + 1);
      lVar12 = *plVar1;
    } while (uVar15 < (uint64_t)(*(int64_t *)(lVar5 + 0x48) - lVar12 >> 3));
  } while (bVar4);
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800d622f)

int64_t FUN_1800d6020(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4,
                      int64_t param_5,int param_6,int64_t *param_7,uint64_t param_8,
                      char *param_9)

{
  int64_t lVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int32_t uStack_100;
  int32_t uStack_fc;
  int32_t uStack_f8;
  int32_t uStack_f4;
  void *puStack_e0;
  int64_t lStack_d8;
  int32_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  int64_t *plStack_b0;
  uint64_t uStack_a8;
  int64_t lStack_a0;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  uint uStack_88;
  uint64_t uStack_80;
  int8_t auStack_78 [32];
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int64_t *plStack_48;
  
  uStack_a8 = 0xfffffffffffffffe;
  lVar8 = (int64_t)param_6;
  lVar1 = param_4 + lVar8 * 8;
  if ((((*(int64_t *)(lVar1 + 0x90) != param_5) ||
       (*param_7 != *(int64_t *)(param_4 + lVar8 * 0x10))) ||
      ((int)param_7[1] != *(int *)(param_4 + 8 + lVar8 * 0x10))) ||
     ((*(short *)((int64_t)param_7 + 0xc) != *(short *)(param_4 + 0xc + lVar8 * 0x10) ||
      (lVar7 = *(int64_t *)(param_4 + 0x60 + lVar8 * 8), *(char *)(lVar7 + 0x81) == '\0')))) {
    if (param_5 == 0) {
      *param_9 = '\x01';
      lVar7 = 0;
    }
    else {
      puStack_e0 = &system_data_buffer_ptr;
      uStack_c8 = 0;
      lStack_d8 = 0;
      uStack_d0 = 0;
      plStack_b0 = (int64_t *)0x0;
      uStack_88 = *(uint *)(param_2 + 4) >> 0x10 & 1;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uVar3 = *(uint64_t *)(param_5 + 0x15b8);
      lStack_a0 = param_5;
      uStack_100 = (int32_t)*param_7;
      uStack_fc = (int32_t)((uint64_t)*param_7 >> 0x20);
      uStack_f8 = (int32_t)param_7[1];
      uStack_f4 = (int32_t)((uint64_t)param_7[1] >> 0x20);
      uStack_98 = uStack_100;
      uStack_94 = uStack_fc;
      uStack_90 = uStack_f8;
      uStack_8c = uStack_f4;
      uStack_80 = 0;
      CoreEngineDataTransformer(auStack_78,&puStack_e0);
      uStack_58 = (int32_t)uStack_c0;
      uStack_54 = uStack_c0._4_4_;
      uStack_50 = (int32_t)uStack_b8;
      uStack_4c = uStack_b8._4_4_;
      plStack_48 = plStack_b0;
      if (plStack_b0 != (int64_t *)0x0) {
        (**(code **)(*plStack_b0 + 0x28))();
      }
      lVar7 = UIRenderingEngine(uVar3,param_2,&lStack_a0,param_9);
      if (*param_9 == '\0') {
        *(int64_t *)(param_4 + 0x60 + lVar8 * 8) = lVar7;
        uVar4 = *(int32_t *)((int64_t)param_7 + 4);
        lVar6 = param_7[1];
        uVar5 = *(int32_t *)((int64_t)param_7 + 0xc);
        puVar2 = (int32_t *)(param_4 + lVar8 * 0x10);
        *puVar2 = (int)*param_7;
        puVar2[1] = uVar4;
        puVar2[2] = (int)lVar6;
        puVar2[3] = uVar5;
        *(int64_t *)(lVar1 + 0x90) = param_5;
      }
      if (plStack_b0 != (int64_t *)0x0) {
        (**(code **)(*plStack_b0 + 0x38))();
      }
      puStack_e0 = &system_data_buffer_ptr;
      if (lStack_d8 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
    }
  }
  return lVar7;
}



// WARNING: Removing unreachable block (ram,0x0001800d64f3)
// WARNING: Removing unreachable block (ram,0x0001800d64c3)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t
FUN_1800d6260(int64_t *param_1,int64_t param_2,int64_t param_3,int param_4,int64_t param_5,
             uint64_t param_6,char param_7)

{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t *plStackX_8;
  int8_t auStackX_20 [8];
  int32_t uVar6;
  uint64_t uStack_f8;
  int32_t uStack_f0;
  ushort uStack_ec;
  int16_t uStack_ea;
  int64_t lStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint uStack_d0;
  uint64_t uStack_c8;
  void *puStack_c0;
  uint64_t uStack_b8;
  int32_t uStack_b0;
  uint64_t uStack_a8;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int32_t uStack_94;
  uint64_t uStack_90;
  uint64_t uStack_88;
  int64_t alStack_80 [13];
  
  uStack_88 = 0xfffffffffffffffe;
  if (((((*(int *)(system_system_data_memory + 0x5b0) == 0) && (*(char *)(param_2 + 0x20) == '\0')) &&
       (*(char *)(param_2 + 0x21) == '\0')) &&
      (((*(uint *)(param_2 + 4) & 0x1000000) == 0 && ((*(uint *)(param_3 + 0x2e0) & 0x800) != 0))))
     && (1 < param_4 - 1U)) {
    *(uint *)(param_3 + 0x314) = *(uint *)(param_3 + 0x314) | 0x40000000;
  }
  uStack_ec = (ushort)*(byte *)(param_3 + 0xc1);
  uStack_f0 = *(int32_t *)(param_3 + 0x314);
  uStack_f8 = *(uint64_t *)(param_3 + 0x208);
  auStackX_20[0] = 0;
  plStackX_8 = param_1;
  if (param_4 == 0) {
    iVar1 = *(int *)(param_2 + 8);
    lVar5 = (int64_t)iVar1;
    if (iVar1 != -1) {
      if (iVar1 == 1) {
        lVar5 = *(int64_t *)(*(int64_t *)(param_5 + 0x1e0) + 0x1678 + lVar5 * 8);
        if (lVar5 == 0) {
LAB_1800d6409:
          lVar5 = 0;
        }
        goto LAB_1800d6415;
      }
      if (iVar1 == 2) {
        lVar5 = *(int64_t *)(*(int64_t *)(param_5 + 0x1e0) + 0x1678 + lVar5 * 8);
        uVar6 = 2;
        lVar3 = lVar5;
        goto LAB_1800d666d;
      }
      if (iVar1 - 4U < 3) {
        lStack_e8 = *(int64_t *)(*(int64_t *)(param_5 + 0x1e0) + 0x1678 + lVar5 * 8);
        if ((lStack_e8 == 0) &&
           ((1 < iVar1 - 4U || (lStack_e8 = *(int64_t *)(param_2 + 0x10), lStack_e8 == 0)))) {
          FUN_1800be9a0(system_system_data_memory,&plStackX_8);
          lStack_e8 = plStackX_8[0x3c];
          if (plStackX_8 != (int64_t *)0x0) {
            (**(code **)(*plStackX_8 + 0x38))();
          }
        }
        uStack_c8 = 0;
        puStack_c0 = &system_data_buffer_ptr;
        uStack_a8 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_90 = 0;
        uStack_d8 = CONCAT26(uStack_ea,CONCAT24(uStack_ec,uStack_f0));
        uStack_e0 = uStack_f8;
        uStack_d0 = *(uint *)(param_2 + 4) >> 0x10 & 1;
        uStack_a0 = 0;
        uStack_9c = 0;
        uStack_98 = 0;
        uStack_94 = 0;
        uVar4 = *(uint64_t *)(lStack_e8 + 0x15b8);
        plStackX_8 = alStack_80;
        uVar2 = FUN_18009e8e0(alStack_80,&lStack_e8);
        uVar4 = UIRenderingEngine(uVar4,param_2,uVar2,auStackX_20);
        *(uint64_t *)(param_3 + 0x88) = uVar4;
        FUN_18009e960(&lStack_e8);
        return auStackX_20[0];
      }
    }
    lVar3 = func_0x0001800ed840((int *)(param_2 + 8),param_5);
    lVar5 = 0;
    uVar6 = 0;
  }
  else {
    if (param_4 != 1) {
      if (param_4 == 2) {
        lVar5 = *(int64_t *)
                 (*(int64_t *)(param_5 + 0x1e0) + 0x1678 +
                 (int64_t)*(int *)(system_parameter_buffer + 0x13e0) * 8);
        if ((lVar5 == 0) && (*(int *)(system_parameter_buffer + 0x13e0) - 4U < 2)) {
          lVar5 = *(int64_t *)(system_parameter_buffer + 0x13e8);
        }
        uVar6 = 4;
        lVar3 = lVar5;
      }
      else {
        if (param_4 != 3) {
          return 0;
        }
        lVar5 = *(int64_t *)
                 (*(int64_t *)(param_5 + 0x1e0) + 0x1678 +
                 (int64_t)*(int *)(system_parameter_buffer + 0x13f8) * 8);
        if ((lVar5 == 0) && (*(int *)(system_parameter_buffer + 0x13f8) - 4U < 2)) {
          lVar5 = *(int64_t *)(system_parameter_buffer + 0x1400);
        }
        uVar6 = 5;
        lVar3 = lVar5;
      }
      goto LAB_1800d666d;
    }
    if (param_7 == '\0') {
      lVar5 = *(int64_t *)
               (*(int64_t *)(param_5 + 0x1e0) + 0x1678 +
               (int64_t)*(int *)(system_parameter_buffer + 0x13e0) * 8);
      if ((lVar5 == 0) && (*(int *)(system_parameter_buffer + 0x13e0) - 4U < 2)) {
        lVar5 = *(int64_t *)(system_parameter_buffer + 0x13e8);
      }
      uVar6 = 3;
      lVar3 = lVar5;
      goto LAB_1800d666d;
    }
    lVar5 = *(int64_t *)
             (*(int64_t *)(param_5 + 0x1e0) + 0x1678 +
             (int64_t)*(int *)(system_parameter_buffer + 0x13b0) * 8);
    if (lVar5 == 0) {
      if (1 < *(int *)(system_parameter_buffer + 0x13b0) - 4U) goto LAB_1800d6409;
      lVar5 = *(int64_t *)(system_parameter_buffer + 0x13b8);
    }
LAB_1800d6415:
    uVar6 = 1;
    lVar3 = lVar5;
  }
LAB_1800d666d:
  uVar4 = FUN_1800d6020((int32_t)uStack_f8,param_2,lVar5,param_6,lVar3,uVar6,&uStack_f8);
  *(uint64_t *)(param_3 + 0x88) = uVar4;
  return auStackX_20[0];
}



uint64_t
FUN_1800d66b0(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
             uint64_t param_5,int param_6,char param_7)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_3 + 0x314);
  if (param_6 == 1) {
    param_1 = 0x40008182;
    if (param_7 == '\0') {
      param_1 = (uint64_t)*(uint *)(param_2 + 0x1bc);
    }
    uVar3 = uVar1 & (uint)param_1;
  }
  else if (param_6 == 2) {
    uVar3 = *(uint *)(param_2 + 0x1bc) & uVar1 & 0xfeffffff;
  }
  else {
    if (param_6 == 3) {
      uVar3 = *(uint *)(param_2 + 0x1c0);
    }
    else {
      if (param_6 != 0) goto LAB_1800d672d;
      uVar3 = *(uint *)(param_2 + 0x1c4);
    }
    uVar3 = uVar3 & uVar1;
  }
  *(uint *)(param_3 + 0x314) = uVar3;
LAB_1800d672d:
  cVar2 = FUN_1800d6260(param_1,param_2,param_3,param_6,param_4,param_5,param_7);
  if (cVar2 == '\0') {
    SystemCore_Controller0();
    return 1;
  }
  *(uint *)(param_3 + 0x314) = uVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




