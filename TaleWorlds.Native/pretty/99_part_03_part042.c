#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part042.c - 2 个函数

// 函数: void FUN_1801f5080(int64_t param_1,int64_t param_2,uint64_t *param_3,uint param_4,char param_5)
void FUN_1801f5080(int64_t param_1,int64_t param_2,uint64_t *param_3,uint param_4,char param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int32_t uVar4;
  int64_t *plVar5;
  int32_t *puVar6;
  uint64_t *puVar7;
  byte *pbVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t lVar13;
  uint64_t *puVar14;
  uint64_t *puVar15;
  int32_t *puVar16;
  int64_t lVar17;
  int64_t lVar18;
  int iVar19;
  int iVar20;
  int iStack_d8;
  int64_t lStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  code *pcStack_a8;
  code *pcStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  code *pcStack_88;
  code *pcStack_80;
  int64_t *plStack_78;
  int64_t *plStack_70;
  int64_t *plStack_68;
  int64_t *plStack_60;
  uint64_t uStack_58;
  int8_t auStack_50 [8];
  int8_t auStack_48 [8];
  int8_t auStack_40 [8];
  
  uStack_58 = 0xfffffffffffffffe;
  puVar16 = (int32_t *)(param_2 + 0x74);
  plVar12 = (int64_t *)(param_2 + 0x138);
  plVar11 = (int64_t *)(param_1 + 0x88);
  lStack_c0 = 0x10;
  do {
    lVar18 = plVar11[1];
    lVar13 = *plVar11;
    lVar17 = lVar18 - lVar13 >> 0x3f;
    lVar10 = (lVar18 - lVar13) / 0x50 + lVar17;
    if (lVar10 == lVar17) {
LAB_1801f5644:
      *puVar16 = 0xffffffff;
    }
    else {
      iStack_d8 = 0;
      bVar2 = true;
      iVar19 = 0;
      if (lVar10 == lVar17) {
LAB_1801f5349:
        iVar20 = 0;
        lVar17 = lVar18 - lVar13 >> 0x3f;
        iVar19 = iStack_d8;
        if ((lVar18 - lVar13) / 0x50 + lVar17 != lVar17) {
          lVar18 = 0;
          do {
            lVar13 = lVar13 + lVar18;
            if (*(int *)(lVar13 + 0x44) == -1) {
              iVar19 = *(int *)(lVar13 + 0x10);
              if (iVar19 == 4) {
                lVar17 = 0;
                do {
                  lVar10 = lVar17 + 1;
                  if (*(char *)(*(int64_t *)(lVar13 + 8) + lVar17) != (&unknown_var_6280_ptr)[lVar17])
                  goto LAB_1801f54c5;
                  lVar17 = lVar10;
                } while (lVar10 != 5);
                plVar5 = (int64_t *)FUN_180058080(param_3,auStack_48,lVar13 + 0x20);
                if ((uint64_t *)*plVar5 == param_3) goto LAB_1801f54c5;
                puVar7 = param_3;
                if ((uint64_t *)param_3[2] != (uint64_t *)0x0) {
                  puVar14 = (uint64_t *)param_3[2];
                  do {
                    if (*(int *)(lVar13 + 0x30) == 0) {
                      bVar2 = false;
                      puVar15 = (uint64_t *)puVar14[1];
                    }
                    else {
                      if (*(int *)(puVar14 + 6) == 0) {
                        bVar2 = true;
                      }
                      else {
                        pbVar8 = *(byte **)(lVar13 + 0x28);
                        lVar17 = puVar14[5] - (int64_t)pbVar8;
                        do {
                          uVar9 = (uint)pbVar8[lVar17];
                          iVar19 = *pbVar8 - uVar9;
                          if (*pbVar8 != uVar9) break;
                          pbVar8 = pbVar8 + 1;
                        } while (uVar9 != 0);
                        bVar2 = 0 < iVar19;
                        if (iVar19 < 1) {
                          puVar15 = (uint64_t *)puVar14[1];
                          goto LAB_1801f544b;
                        }
                      }
                      puVar15 = (uint64_t *)*puVar14;
                    }
LAB_1801f544b:
                    if (bVar2) {
                      puVar14 = puVar7;
                    }
                    puVar7 = puVar14;
                    puVar14 = puVar15;
                  } while (puVar15 != (uint64_t *)0x0);
                }
                if (puVar7 == param_3) {
LAB_1801f549a:
                  puVar7 = (uint64_t *)FUN_1800c2ab0(param_3,auStack_40);
                  puVar7 = (uint64_t *)*puVar7;
                }
                else if (*(int *)(puVar7 + 6) != 0) {
                  if (*(int *)(lVar13 + 0x30) != 0) {
                    pbVar8 = (byte *)puVar7[5];
                    lVar17 = *(int64_t *)(lVar13 + 0x28) - (int64_t)pbVar8;
                    do {
                      bVar1 = *pbVar8;
                      uVar9 = (uint)pbVar8[lVar17];
                      if (bVar1 != uVar9) break;
                      pbVar8 = pbVar8 + 1;
                    } while (uVar9 != 0);
                    if ((int)(bVar1 - uVar9) < 1) goto LAB_1801f54b1;
                  }
                  goto LAB_1801f549a;
                }
LAB_1801f54b1:
                *puVar16 = *(int32_t *)(puVar7 + 8);
                puVar16[0x10] = *(int32_t *)(lVar13 + 0x40);
              }
              else {
LAB_1801f54c5:
                if ((iVar19 == 8) &&
                   (iVar3 = strcmp(*(uint64_t *)(lVar13 + 8),&unknown_var_6240_ptr), iVar3 == 0)) {
                  uVar4 = FUN_1801f2c40();
                  *puVar16 = uVar4;
                }
                else if (iVar19 == 7) {
                  lVar17 = 0;
                  do {
                    lVar10 = lVar17 + 1;
                    if (*(char *)(*(int64_t *)(lVar13 + 8) + lVar17) != (&system_data_e8a0)[lVar17])
                    goto LAB_1801f55e6;
                    lVar17 = lVar10;
                  } while (lVar10 != 8);
                  *puVar16 = 0xfffffffe;
                  plVar5 = (int64_t *)FUN_1800b08e0(system_resource_state,&plStack_60,lVar13 + 0x20,1);
                  lVar13 = *plVar5;
                  *plVar5 = 0;
                  plStack_68 = (int64_t *)*plVar12;
                  *plVar12 = lVar13;
                  if (plStack_68 != (int64_t *)0x0) {
                    (**(code **)(*plStack_68 + 0x38))();
                  }
                  if (plStack_60 != (int64_t *)0x0) {
                    (**(code **)(*plStack_60 + 0x38))();
                  }
                  *(uint *)(*plVar12 + 0x328) = *(uint *)(*plVar12 + 0x328) | 0x20000000;
                  uStack_98 = 0;
                  uStack_90 = 0;
                  pcStack_88 = (code *)0x0;
                  pcStack_80 = _guard_check_icall;
                  FUN_18023c450(*plVar12,1,0xffffffff,&uStack_98);
                  if (pcStack_88 != (code *)0x0) {
                    (*pcStack_88)(&uStack_98,0,0);
                  }
                }
                else {
LAB_1801f55e6:
                  *puVar16 = 0xffffffff;
                }
              }
              iStack_d8 = iStack_d8 + 1;
              iVar19 = iStack_d8;
            }
            iVar20 = iVar20 + 1;
            lVar18 = lVar18 + 0x50;
            lVar13 = *plVar11;
          } while ((uint64_t)(int64_t)iVar20 < (uint64_t)((plVar11[1] - lVar13) / 0x50));
        }
      }
      else {
        lVar17 = 0;
        do {
          lVar13 = lVar13 + lVar17;
          uVar9 = *(uint *)(lVar13 + 0x44);
          if (((uVar9 != 0xffffffff) && ((uVar9 & param_4) == uVar9)) &&
             ((*(uint *)(lVar13 + 0x48) & param_4) == 0)) {
            iVar20 = *(int *)(lVar13 + 0x10);
            if (iVar20 == 4) {
              lVar18 = 0;
              do {
                lVar10 = lVar18 + 1;
                if (*(char *)(*(int64_t *)(lVar13 + 8) + lVar18) != (&unknown_var_6280_ptr)[lVar18])
                goto LAB_1801f51c0;
                lVar18 = lVar10;
              } while (lVar10 != 5);
              plVar5 = (int64_t *)FUN_180058080(param_3,auStack_50,lVar13 + 0x20);
              if ((uint64_t *)*plVar5 == param_3) goto LAB_1801f51c0;
              puVar6 = (int32_t *)FUN_1800c2970(param_3,lVar13 + 0x20);
              *puVar16 = *puVar6;
              puVar16[0x10] = *(int32_t *)(lVar13 + 0x40);
            }
            else {
LAB_1801f51c0:
              if (param_5 == '\0') {
                if ((iVar20 == 8) &&
                   (iVar3 = strcmp(*(uint64_t *)(lVar13 + 8),&unknown_var_6240_ptr), iVar3 == 0)) {
                  uVar4 = FUN_1801f2c40();
                  *puVar16 = uVar4;
                }
                else {
                  if (iVar20 != 7) goto LAB_1801f52de;
                  lVar18 = 0;
                  do {
                    lVar10 = lVar18 + 1;
                    if (*(char *)(*(int64_t *)(lVar13 + 8) + lVar18) != (&system_data_e8a0)[lVar18])
                    goto LAB_1801f52de;
                    lVar18 = lVar10;
                  } while (lVar10 != 8);
                  *puVar16 = 0xfffffffe;
                  plVar5 = (int64_t *)FUN_1800b08e0(system_resource_state,&plStack_70,lVar13 + 0x20,1);
                  lVar13 = *plVar5;
                  *plVar5 = 0;
                  plStack_78 = (int64_t *)*plVar12;
                  *plVar12 = lVar13;
                  if (plStack_78 != (int64_t *)0x0) {
                    (**(code **)(*plStack_78 + 0x38))();
                  }
                  if (plStack_70 != (int64_t *)0x0) {
                    (**(code **)(*plStack_70 + 0x38))();
                  }
                  *(uint *)(*plVar12 + 0x328) = *(uint *)(*plVar12 + 0x328) | 0x20000000;
                  uStack_b8 = 0;
                  uStack_b0 = 0;
                  pcStack_a8 = (code *)0x0;
                  pcStack_a0 = _guard_check_icall;
                  FUN_18023c450(*plVar12,1,0xffffffff,&uStack_b8);
                  if (pcStack_a8 != (code *)0x0) {
                    (*pcStack_a8)(&uStack_b8,0,0);
                  }
                }
              }
              else {
LAB_1801f52de:
                *puVar16 = 0xffffffff;
              }
            }
            bVar2 = false;
            iStack_d8 = iStack_d8 + 1;
          }
          iVar19 = iVar19 + 1;
          lVar17 = lVar17 + 0x50;
          lVar18 = plVar11[1];
          lVar13 = *plVar11;
        } while ((uint64_t)(int64_t)iVar19 < (uint64_t)((lVar18 - lVar13) / 0x50));
        iVar19 = iStack_d8;
        if (bVar2) goto LAB_1801f5349;
      }
      if (iVar19 == 0) goto LAB_1801f5644;
    }
    plVar11 = plVar11 + 4;
    plVar12 = plVar12 + 1;
    puVar16 = puVar16 + 1;
    lStack_c0 = lStack_c0 + -1;
    if (lStack_c0 == 0) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801f5690(int64_t param_1,uint64_t param_2,int32_t param_3)
void FUN_1801f5690(int64_t param_1,uint64_t param_2,int32_t param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  void *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  void *puVar11;
  int *piVar12;
  int64_t lVar13;
  int8_t auStack_108 [32];
  code *pcStack_e8;
  int64_t *plStack_d8;
  int64_t *plStack_d0;
  int64_t *aplStack_c8 [2];
  uint64_t uStack_b8;
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  uint64_t uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_108;
  iVar4 = *(int *)(param_1 + 0x50);
  lVar13 = 4;
  if (iVar4 == 0) {
    if (*(char *)(param_1 + 0x6a) == '\0') {
LAB_1801f63c6:
      uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x450,8,3);
      plVar6 = (int64_t *)FUN_1801fa180(uVar5);
    }
    else {
      uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x458,8,3);
      plVar6 = (int64_t *)
               FUN_1801fa0e0(uVar5,*(int32_t *)(param_1 + 0x7c),*(int32_t *)(param_1 + 0x80));
    }
  }
  else if ((iVar4 == 0xe) &&
          (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6336_ptr), iVar3 == 0)) {
    plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x470,8,3);
    plStack_d8 = plVar6;
    FUN_1801fa180(plVar6);
    *plVar6 = (int64_t)&unknown_var_2896_ptr;
    *(int32_t *)((int64_t)plVar6 + 0x46c) = 5;
    *(int16_t *)(plVar6 + 0x8d) = 0;
  }
  else if ((iVar4 == 0x12) &&
          (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6352_ptr), iVar3 == 0)) {
    uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x468,8,3);
    plVar6 = (int64_t *)FUN_1803f6670(uVar5);
  }
  else if ((iVar4 == 0x15) &&
          (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6288_ptr), iVar3 == 0)) {
    uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x478,8,3);
    plVar6 = (int64_t *)FUN_1803f7080(uVar5);
  }
  else if ((iVar4 == 0x14) &&
          (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6312_ptr), iVar3 == 0)) {
    plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x478,8,3);
    plStack_d8 = plVar6;
    FUN_1801fa180(plVar6);
    *plVar6 = (int64_t)&unknown_var_3952_ptr;
    pcStack_e8 = FUN_180045af0;
    FUN_1808fc838(plVar6 + 0x8a,8,2,&SUB_18005d5f0);
    plVar6[0x8c] = 0;
    *(int32_t *)(plVar6 + 0x8d) = 0;
    *(int32_t *)((int64_t)plVar6 + 0x46c) = 4;
    plStack_d0 = (int64_t *)plVar6[0x8b];
    plVar6[0x8b] = 0;
    if (plStack_d0 != (int64_t *)0x0) {
      (**(code **)(*plStack_d0 + 0x38))();
    }
    plVar7 = (int64_t *)plVar6[0x8b];
    if (plVar7 != (int64_t *)0x0) {
      plStack_d0 = plVar7;
      (**(code **)(*plVar7 + 0x28))(plVar7);
    }
    plStack_d0 = (int64_t *)plVar6[0x8a];
    plVar6[0x8a] = (int64_t)plVar7;
    if (plStack_d0 != (int64_t *)0x0) {
      (**(code **)(*plStack_d0 + 0x38))();
    }
    *(int32_t *)((int64_t)plVar6 + 0x474) = 0;
    plStack_d0 = (int64_t *)plVar6[0x8c];
    plVar6[0x8c] = 0;
    if (plStack_d0 != (int64_t *)0x0) {
      (**(code **)(*plStack_d0 + 0x38))();
    }
  }
  else {
    if ((iVar4 == 0x17) &&
       (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6416_ptr), iVar3 == 0)) {
      plStack_d8 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x450,8,3);
                    // WARNING: Subroutine does not return
      memset(plStack_d8,0,0x450);
    }
    if ((iVar4 == 0xd) &&
       (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6440_ptr), iVar3 == 0)) {
      plStack_d8 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x460,8,3);
                    // WARNING: Subroutine does not return
      memset(plStack_d8,0,0x460);
    }
    if ((iVar4 == 0x12) &&
       (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6376_ptr), iVar3 == 0)) {
      uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x490,8,3);
      plVar6 = (int64_t *)
               FUN_1803fc260(uVar5,*(int32_t *)(param_1 + 0x7c),*(int32_t *)(param_1 + 0x80));
    }
    else if (iVar4 == 0xd) {
      iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6400_ptr);
      if (iVar3 == 0) {
        plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x460,8,3);
        uVar1 = *(int32_t *)(param_1 + 0x80);
        uVar2 = *(int32_t *)(param_1 + 0x7c);
        plStack_d8 = plVar6;
        FUN_1801fa180(plVar6);
        *plVar6 = (int64_t)&unknown_var_7976_ptr;
        *(int32_t *)(plVar6 + 0x8a) = uVar2;
        *(int32_t *)((int64_t)plVar6 + 0x454) = uVar1;
        *plVar6 = (int64_t)&unknown_var_7792_ptr;
      }
      else {
        iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6496_ptr);
        if (iVar3 != 0) goto LAB_1801f5b10;
        plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x4a8,8,3);
        uVar1 = *(int32_t *)(param_1 + 0x80);
        uVar2 = *(int32_t *)(param_1 + 0x7c);
        plStack_d8 = plVar6;
        FUN_1801fa180(plVar6);
        *plVar6 = (int64_t)&unknown_var_7976_ptr;
        *(int32_t *)(plVar6 + 0x8a) = uVar2;
        *(int32_t *)((int64_t)plVar6 + 0x454) = uVar1;
        *plVar6 = (int64_t)&unknown_var_4272_ptr;
        *(int32_t *)((int64_t)plVar6 + 0x49c) = 2;
      }
    }
    else {
LAB_1801f5b10:
      if ((iVar4 == 0x14) &&
         (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6512_ptr), iVar3 == 0)) {
        plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x4d8,8,3);
        uVar1 = *(int32_t *)(param_1 + 0x80);
        uVar2 = *(int32_t *)(param_1 + 0x7c);
        plStack_d8 = plVar6;
        FUN_1801fa180(plVar6);
        *plVar6 = (int64_t)&unknown_var_7976_ptr;
        *(int32_t *)(plVar6 + 0x8a) = uVar2;
        *(int32_t *)((int64_t)plVar6 + 0x454) = uVar1;
        *plVar6 = (int64_t)&unknown_var_5944_ptr;
        plVar6[0x8b] = 0;
        plVar6[0x99] = 0;
        puStack_a8 = &unknown_var_3480_ptr;
        puStack_a0 = auStack_90;
        auStack_90[0] = 0;
        uStack_98 = 0x16;
        strcpy_s(auStack_90,0x40,&unknown_var_3128_ptr);
        plVar7 = (int64_t *)FUN_1800b31f0(system_resource_state,aplStack_c8,&puStack_a8,1);
        lVar9 = *plVar7;
        *plVar7 = 0;
        plStack_d0 = (int64_t *)plVar6[0x8b];
        plVar6[0x8b] = lVar9;
        if (plStack_d0 != (int64_t *)0x0) {
          (**(code **)(*plStack_d0 + 0x38))();
        }
        if (aplStack_c8[0] != (int64_t *)0x0) {
          (**(code **)(*aplStack_c8[0] + 0x38))();
        }
        puStack_a8 = &system_state_ptr;
      }
      else if ((iVar4 == 0x13) &&
              (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6456_ptr), iVar3 == 0)) {
        plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x4c0,8,3);
        uVar1 = *(int32_t *)(param_1 + 0x80);
        uVar2 = *(int32_t *)(param_1 + 0x7c);
        plStack_d8 = plVar6;
        FUN_1801fa180(plVar6);
        *plVar6 = (int64_t)&unknown_var_7976_ptr;
        *(int32_t *)(plVar6 + 0x8a) = uVar2;
        *(int32_t *)((int64_t)plVar6 + 0x454) = uVar1;
        *plVar6 = (int64_t)&unknown_var_6072_ptr;
        plVar6[0x8b] = 0;
        puStack_a8 = &unknown_var_3480_ptr;
        puStack_a0 = auStack_90;
        auStack_90[0] = 0;
        uStack_98 = 0x15;
        strcpy_s(auStack_90,0x40,&unknown_var_3184_ptr);
        plVar7 = (int64_t *)FUN_1800b31f0(system_resource_state,&plStack_d0,&puStack_a8,1);
        lVar9 = *plVar7;
        *plVar7 = 0;
        aplStack_c8[0] = (int64_t *)plVar6[0x8b];
        plVar6[0x8b] = lVar9;
        if (aplStack_c8[0] != (int64_t *)0x0) {
          (**(code **)(*aplStack_c8[0] + 0x38))();
        }
        if (plStack_d0 != (int64_t *)0x0) {
          (**(code **)(*plStack_d0 + 0x38))();
        }
        puStack_a8 = &system_state_ptr;
      }
      else if ((iVar4 == 0xf) &&
              (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6480_ptr), iVar3 == 0)) {
        plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x450,8,3);
        plStack_d8 = plVar6;
        FUN_1801fa180(plVar6);
        *plVar6 = (int64_t)&unknown_var_8160_ptr;
      }
      else if ((iVar4 == 0xd) &&
              (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6592_ptr), iVar3 == 0)) {
        plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x458,8,3);
        plStack_d8 = plVar6;
        FUN_1801fa180(plVar6);
        *plVar6 = (int64_t)&unknown_var_6168_ptr;
        *(int8_t *)(plVar6 + 0x8a) = 2;
        *(int32_t *)((int64_t)plVar6 + 0x454) = 5;
      }
      else if ((iVar4 == 0x1a) &&
              (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6608_ptr), iVar3 == 0)) {
        plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x450,8,3);
        plStack_d8 = plVar6;
        FUN_1801fa180(plVar6);
        *plVar6 = (int64_t)&unknown_var_7704_ptr;
      }
      else if ((iVar4 == 0x11) &&
              (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6536_ptr), iVar3 == 0)) {
        plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x470,8,3);
        plStack_d8 = plVar6;
        FUN_1801fa180(plVar6);
        *plVar6 = (int64_t)&unknown_var_6336_ptr;
        pcStack_e8 = FUN_180045af0;
        FUN_1808fc838(plVar6 + 0x8a,8,2,&SUB_18005d5f0);
        plVar6[0x8d] = 0;
        *(int32_t *)(plVar6 + 0x8c) = 0;
        *(int32_t *)((int64_t)plVar6 + 0x464) = 4;
        aplStack_c8[0] = (int64_t *)plVar6[0x8b];
        plVar6[0x8b] = 0;
        if (aplStack_c8[0] != (int64_t *)0x0) {
          (**(code **)(*aplStack_c8[0] + 0x38))();
        }
        plVar7 = (int64_t *)plVar6[0x8b];
        if (plVar7 != (int64_t *)0x0) {
          aplStack_c8[0] = plVar7;
          (**(code **)(*plVar7 + 0x28))(plVar7);
        }
        aplStack_c8[0] = (int64_t *)plVar6[0x8a];
        plVar6[0x8a] = (int64_t)plVar7;
        if (aplStack_c8[0] != (int64_t *)0x0) {
          (**(code **)(*aplStack_c8[0] + 0x38))();
        }
      }
      else {
        if (iVar4 == 0x1b) {
          iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6560_ptr);
          if (iVar3 == 0) {
            uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x488,8,3);
            plVar6 = (int64_t *)FUN_1803fa510(uVar5);
            goto LAB_1801f63db;
          }
          iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6680_ptr);
          if (iVar3 == 0) {
            plStack_d8 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x450,8,3);
                    // WARNING: Subroutine does not return
            memset(plStack_d8,0,0x450);
          }
        }
        if ((iVar4 == 0x1e) &&
           (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6712_ptr), iVar3 == 0)) {
          plStack_d8 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x450,8,3);
                    // WARNING: Subroutine does not return
          memset(plStack_d8,0,0x450);
        }
        if ((iVar4 == 0xd) &&
           (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6640_ptr), iVar3 == 0)) {
          plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x460,8,3);
          uVar1 = *(int32_t *)(param_1 + 0x80);
          uVar2 = *(int32_t *)(param_1 + 0x7c);
          plStack_d8 = plVar6;
          FUN_1801fa180(plVar6);
          *plVar6 = (int64_t)&unknown_var_7976_ptr;
          *(int32_t *)(plVar6 + 0x8a) = uVar2;
          *(int32_t *)((int64_t)plVar6 + 0x454) = uVar1;
          *plVar6 = (int64_t)&system_param1_ptr;
          *(int32_t *)(plVar6 + 0x8b) = 0;
        }
        else if ((iVar4 == 0x16) &&
                (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6656_ptr), iVar3 == 0)) {
          plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x450,8,3);
          plStack_d8 = plVar6;
          FUN_1801fa180(plVar6);
          *plVar6 = (int64_t)&unknown_var_8072_ptr;
        }
        else if ((iVar4 == 0x13) &&
                (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6816_ptr), iVar3 == 0)) {
          plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x458,8,3);
          uVar1 = *(int32_t *)(param_1 + 0x80);
          uVar2 = *(int32_t *)(param_1 + 0x7c);
          plStack_d8 = plVar6;
          FUN_1801fa180(plVar6);
          *plVar6 = (int64_t)&unknown_var_7976_ptr;
          *(int32_t *)(plVar6 + 0x8a) = uVar2;
          *(int32_t *)((int64_t)plVar6 + 0x454) = uVar1;
          *plVar6 = (int64_t)&unknown_var_3408_ptr;
        }
        else if ((iVar4 == 0x16) &&
                (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6840_ptr), iVar3 == 0)) {
          uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x478,8,3);
          plVar6 = (int64_t *)
                   FUN_1803f8a80(uVar5,*(int32_t *)(param_1 + 0x7c),
                                 *(int32_t *)(param_1 + 0x80));
        }
        else if ((iVar4 == 0x23) &&
                (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6744_ptr), iVar3 == 0)) {
          plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x450,8,3);
          plStack_d8 = plVar6;
          FUN_1801fa180(plVar6);
          *plVar6 = (int64_t)&unknown_var_3224_ptr;
        }
        else if ((iVar4 == 0x1e) &&
                (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6784_ptr), iVar3 == 0)) {
          plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x450,8,3);
          plStack_d8 = plVar6;
          FUN_1801fa180(plVar6);
          *plVar6 = (int64_t)&unknown_var_3688_ptr;
          *(int8_t *)((int64_t)plVar6 + 0x4e) = 0;
        }
        else if ((iVar4 == 0x12) &&
                (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6912_ptr), iVar3 == 0)) {
          plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x470,8,3);
          plStack_d8 = plVar6;
          FUN_1801fa180(plVar6);
          *plVar6 = (int64_t)&unknown_var_7888_ptr;
          pcStack_e8 = FUN_180045af0;
          FUN_1808fc838(plVar6 + 0x8b,8,3,&SUB_18005d5f0);
          *(int32_t *)(plVar6 + 0x8a) = 0;
        }
        else {
          if ((iVar4 == 0x14) &&
             (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&unknown_var_6936_ptr), iVar3 == 0)) {
            plStack_d8 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x450,8,3);
                    // WARNING: Subroutine does not return
            memset(plStack_d8,0,0x450);
          }
          puVar8 = *(void **)(param_1 + 0x48);
          if ((iVar4 != 0xf) || (iVar4 = strcmp(puVar8,&unknown_var_6864_ptr), iVar4 != 0)) {
            puVar11 = &system_buffer_ptr;
            if (puVar8 != (void *)0x0) {
              puVar11 = puVar8;
            }
            SystemDataInitializer(&unknown_var_6880_ptr,puVar11);
            goto LAB_1801f63c6;
          }
          plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x450,8,3);
          plStack_d8 = plVar6;
          FUN_1801fa180(plVar6);
          *plVar6 = (int64_t)&unknown_var_6512_ptr;
        }
      }
    }
  }
LAB_1801f63db:
  FUN_180627be0(plVar6 + 2,param_1);
  plVar7 = (int64_t *)FUN_1800b4910(system_resource_state,&plStack_d8,param_1 + 0x20);
  lVar9 = *plVar7;
  *plVar7 = 0;
  aplStack_c8[0] = (int64_t *)plVar6[6];
  plVar6[6] = lVar9;
  if (aplStack_c8[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_c8[0] + 0x38))();
  }
  if (plStack_d8 != (int64_t *)0x0) {
    (**(code **)(*plStack_d8 + 0x38))();
  }
  if (*(char *)(param_1 + 0x6a) == '\0') {
    if ((*(byte *)(plVar6[6] + 0x1588) & 0x40) == 0) goto LAB_1801f6471;
    puVar8 = &unknown_var_7040_ptr;
  }
  else {
    if ((*(byte *)(plVar6[6] + 0x1588) & 0x40) != 0) goto LAB_1801f6471;
    puVar8 = &unknown_var_6984_ptr;
  }
  puVar11 = &system_buffer_ptr;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar11 = *(void **)(param_1 + 8);
  }
  SystemDataInitializer(puVar8,puVar11);
LAB_1801f6471:
  *(int8_t *)((int64_t)plVar6 + 0x4c) = *(int8_t *)(param_1 + 0x68);
  *(int32_t *)(plVar6 + 9) = *(int32_t *)(param_1 + 100);
  plStack_d0 = *(int64_t **)(param_1 + 0x6c);
  plVar6[1] = (int64_t)plStack_d0;
  *(int8_t *)(plVar6 + 7) = *(int8_t *)(param_1 + 0x60);
  plVar6[8] = *(int64_t *)(system_parameter_buffer + 0x7ab8);
  plVar6[0xb] = (int64_t)(double)*(float *)(param_1 + 0x6c);
  plVar6[0xc] = (int64_t)(double)*(float *)(param_1 + 0x70);
  *(int32_t *)(plVar6 + 0xe) = *(int32_t *)(param_1 + 0x84);
  *(int8_t *)((int64_t)plVar6 + 0x4d) = 0;
  *(int32_t *)(plVar6 + 0xd) = *(int32_t *)(param_1 + 0x74);
  *(int32_t *)((int64_t)plVar6 + 0x6c) = *(int32_t *)(param_1 + 0x78);
  *(int8_t *)(plVar6 + 10) = *(int8_t *)(param_1 + 0x6a);
  pcStack_e8 = (code *)((uint64_t)pcStack_e8 & 0xffffffffffffff00);
  FUN_1801f5080(param_1,plVar6,param_2,param_3);
  plVar7 = plVar6 + 0x37;
  piVar12 = (int *)(param_1 + 0x298);
  plVar6 = plVar6 + 0x39;
  do {
    puVar8 = &system_buffer_ptr;
    if (*(void **)(piVar12 + 0x56) != (void *)0x0) {
      puVar8 = *(void **)(piVar12 + 0x56);
    }
    (**(code **)(*plVar6 + 0x10))(plVar6,puVar8);
    if (*piVar12 == 5) {
      lVar9 = 0;
      do {
        lVar10 = lVar9 + 1;
        if (*(char *)(*(int64_t *)(piVar12 + -2) + lVar9) != (&unknown_var_6960_ptr)[lVar9])
        goto LAB_1801f657d;
        lVar9 = lVar10;
      } while (lVar10 != 6);
      *(int32_t *)plVar7 = 0xfffffffe;
    }
    else {
LAB_1801f657d:
      if ((*piVar12 == 8) &&
         (iVar4 = strcmp(*(uint64_t *)(piVar12 + -2),&unknown_var_6240_ptr), iVar4 == 0)) {
        *(int32_t *)plVar7 = 0xfffffffd;
      }
      else {
        *(int32_t *)plVar7 = 0xffffffff;
      }
    }
    plVar6 = plVar6 + 0x13;
    plVar7 = (int64_t *)((int64_t)plVar7 + 4);
    piVar12 = piVar12 + 0x16;
    lVar13 = lVar13 + -1;
    if (lVar13 == 0) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_108);
    }
  } while( true );
}



int64_t FUN_1801f65f0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (*(int64_t **)(param_1 + 0x450) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x450) + 0x38))();
  }
  FUN_1801f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x460,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




