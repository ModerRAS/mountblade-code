#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part030.c - 7 个函数

// 函数: void FUN_1803c19dc(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1803c19dc(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t unaff_RBX;
  int64_t in_stack_00000080;
  
  if (*(int64_t *)(unaff_RBX + 0x40) != 0) {
    if (*(int64_t *)(in_stack_00000080 + 0x30) != 0) {
      *(uint64_t *)(unaff_RBX + 0x50) = *(uint64_t *)(in_stack_00000080 + 0x38);
      *(int64_t *)(*(int64_t *)(in_stack_00000080 + 0x38) + 0x58) = unaff_RBX;
      *(int64_t *)(in_stack_00000080 + 0x38) = unaff_RBX;
      *(int64_t *)(unaff_RBX + 0x20) = in_stack_00000080;
      *(uint64_t *)(unaff_RBX + 0x58) = param_3;
      return;
    }
    *(uint64_t *)(unaff_RBX + 0x50) = param_3;
    *(int64_t *)(in_stack_00000080 + 0x30) = unaff_RBX;
    *(int64_t *)(in_stack_00000080 + 0x38) = unaff_RBX;
    *(int64_t *)(unaff_RBX + 0x20) = in_stack_00000080;
    *(uint64_t *)(unaff_RBX + 0x58) = param_3;
  }
  return;
}






// 函数: void FUN_1803c1a30(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
void FUN_1803c1a30(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  byte *pbVar2;
  uint uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  char *pcVar6;
  int64_t lVar7;
  int64_t lVar8;
  char *pcVar9;
  byte *pbVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  int iVar13;
  int iVar14;
  int64_t lVar15;
  void *puVar16;
  int64_t *plVar17;
  int64_t *plVar18;
  bool bVar19;
  int64_t *plStack_90;
  int64_t *plStack_88;
  int64_t *plStack_80;
  int32_t uStack_78;
  uint64_t *puStack_70;
  uint64_t *puStack_68;
  
  puVar4 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60,param_3,param_4,0xfffffffffffffffe);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[4] = 0;
  *(int32_t *)(puVar4 + 5) = 1;
  puVar4[6] = 0;
  puVar4[8] = 0;
  pcVar9 = "levels";
  do {
    pcVar6 = pcVar9;
    pcVar9 = pcVar6 + 1;
  } while (*pcVar9 != '\0');
  *puVar4 = &processed_var_4572_ptr;
  puVar4[2] = pcVar6 + -0x180a0bafb;
  lVar8 = *(int64_t *)(param_1 + 8);
  if (*(int64_t *)(lVar8 + 0x268) != 0) {
    bVar19 = *(int *)(lVar8 + 0x2c8) == -1;
    if (!bVar19) {
      bVar19 = true;
      if (*(int64_t *)(lVar8 + 0x1b0) == 0) goto LAB_1803c1cdd;
      plStack_90 = (int64_t *)0x0;
      plStack_88 = (int64_t *)0x0;
      plVar12 = (int64_t *)0x0;
      plStack_80 = (int64_t *)0x0;
      uStack_78 = 3;
      lVar8 = *(int64_t *)(lVar8 + 0x20) + 0x60300;
      FUN_1801b8340(lVar8,&puStack_70);
      iVar13 = 0;
      plVar18 = plStack_88;
      if ((int64_t)puStack_68 - (int64_t)puStack_70 >> 5 != 0) {
        uVar11 = 0;
        do {
          uVar3 = FUN_1801b83d0(lVar8,puStack_70 + uVar11 * 4);
          if ((*(uint *)(*(int64_t *)(param_1 + 8) + 0x2c8) & uVar3) != 0) {
            if (plVar18 < plVar12) {
              plStack_88 = plVar18 + 4;
              CoreEngineDataTransformer(plVar18);
              plVar18 = plVar18 + 4;
            }
            else {
              SystemCore_BackupSystem(&plStack_90,puStack_70 + uVar11 * 4);
              plVar12 = plStack_80;
              plVar18 = plStack_88;
            }
          }
          iVar13 = iVar13 + 1;
          uVar11 = (uint64_t)iVar13;
        } while (uVar11 < (uint64_t)((int64_t)puStack_68 - (int64_t)puStack_70 >> 5));
      }
      plVar12 = plStack_90;
      lVar8 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x268);
      if (*(int64_t *)(lVar8 + 0x1b0) == (int64_t)plVar18 - (int64_t)plStack_90 >> 5) {
        lVar7 = *(int64_t *)(lVar8 + 0x198);
LAB_1803c1bf9:
        puVar5 = puStack_70;
        if (lVar7 != lVar8 + 400) {
          if (plVar12 != plVar18) {
            iVar13 = *(int *)(lVar7 + 0x30);
            plVar17 = plVar12 + 1;
            do {
              iVar14 = (int)plVar17[1];
              if (iVar13 == iVar14) {
                if (iVar13 != 0) {
                  pbVar10 = *(byte **)(lVar7 + 0x28);
                  lVar15 = *plVar17 - (int64_t)pbVar10;
                  do {
                    pbVar2 = pbVar10 + lVar15;
                    iVar14 = (uint)*pbVar10 - (uint)*pbVar2;
                    if (iVar14 != 0) break;
                    pbVar10 = pbVar10 + 1;
                  } while (*pbVar2 != 0);
                }
LAB_1803c1c51:
                if (iVar14 == 0) goto LAB_1803c1d9d;
              }
              else if (iVar13 == 0) goto LAB_1803c1c51;
              plVar1 = plVar17 + 3;
              plVar17 = plVar17 + 4;
              if (plVar1 == plVar18) break;
            } while( true );
          }
          goto LAB_1803c1c64;
        }
        goto joined_r0x0001803c1c74;
      }
LAB_1803c1c64:
      bVar19 = false;
      puVar5 = puStack_70;
joined_r0x0001803c1c74:
      for (; puVar5 != puStack_68; puVar5 = puVar5 + 4) {
        (**(code **)*puVar5)(puVar5,0);
      }
      plVar17 = plVar12;
      if (puStack_70 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      for (; plVar17 != plVar18; plVar17 = plVar17 + 4) {
        (**(code **)*plVar17)(plVar17,0);
      }
      if (plVar12 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(plVar12);
      }
    }
    if (bVar19) goto LAB_1803c1de4;
  }
LAB_1803c1cdd:
  lVar8 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x198);
  if (lVar8 != *(int64_t *)(param_1 + 8) + 400) {
    do {
      puVar5 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar9 = "level";
      do {
        pcVar6 = pcVar9;
        pcVar9 = pcVar6 + 1;
      } while (*pcVar9 != '\0');
      *puVar5 = &processed_var_4592_ptr;
      puVar5[2] = pcVar6 + -0x180a0bb0f;
      puVar16 = &system_buffer_ptr;
      if (*(void **)(lVar8 + 0x28) != (void *)0x0) {
        puVar16 = *(void **)(lVar8 + 0x28);
      }
      SystemAllocationProcessor(param_2,puVar5,&system_data_3a84,puVar16);
      if ((puVar5[6] != 0) || (puVar5[8] != 0)) {
        if (puVar4[6] == 0) {
          puVar5[10] = 0;
          puVar4[6] = puVar5;
        }
        else {
          puVar5[10] = puVar4[7];
          *(uint64_t **)(puVar4[7] + 0x58) = puVar5;
        }
        puVar4[7] = puVar5;
        puVar5[4] = puVar4;
        puVar5[0xb] = 0;
      }
      lVar8 = func_0x00018066bd70(lVar8);
    } while (lVar8 != *(int64_t *)(param_1 + 8) + 400);
  }
LAB_1803c1de4:
  if ((puVar4[6] != 0) || (puVar4[8] != 0)) {
    if (*(int64_t *)(param_3 + 0x30) == 0) {
      puVar4[10] = 0;
      *(uint64_t **)(param_3 + 0x30) = puVar4;
    }
    else {
      puVar4[10] = *(uint64_t *)(param_3 + 0x38);
      *(uint64_t **)(*(int64_t *)(param_3 + 0x38) + 0x58) = puVar4;
    }
    *(uint64_t **)(param_3 + 0x38) = puVar4;
    puVar4[4] = param_3;
    puVar4[0xb] = 0;
  }
  return;
LAB_1803c1d9d:
  lVar7 = func_0x00018066bd70(lVar7);
  goto LAB_1803c1bf9;
}






// 函数: void FUN_1803c1e40(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
void FUN_1803c1e40(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  byte *pbVar2;
  int iVar3;
  int64_t *plVar4;
  char cVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  char *pcVar8;
  uint64_t *puVar9;
  byte *pbVar10;
  char *pcVar11;
  int iVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t lVar15;
  void *puVar16;
  uint64_t uVar17;
  uint uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  
  lVar1 = param_2 + 0x60;
  puVar6 = (uint64_t *)DataPipelineManager(lVar1,0x60,param_3,param_4,0xfffffffffffffffe);
  uVar14 = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[4] = 0;
  *(int32_t *)(puVar6 + 5) = 1;
  puVar6[6] = 0;
  puVar6[8] = 0;
  pcVar11 = "scripts";
  do {
    pcVar8 = pcVar11;
    pcVar11 = pcVar8 + 1;
  } while (*pcVar11 != '\0');
  *puVar6 = &ui_system_data_1448_ptr;
  puVar6[2] = pcVar8 + -0x180a23567;
  lVar13 = *(int64_t *)(param_1 + 8);
  uVar19 = uVar14;
  uVar20 = uVar14;
  if (*(int64_t *)(lVar13 + 0x208) - *(int64_t *)(lVar13 + 0x200) >> 3 != 0) {
    do {
      plVar4 = *(int64_t **)(uVar20 + *(int64_t *)(lVar13 + 0x200));
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      if ((*(code **)(*plVar4 + 0x118) == (code *)&processed_var_8224_ptr) ||
         (cVar5 = (**(code **)(*plVar4 + 0x118))(plVar4), cVar5 == '\0')) {
        lVar13 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x268);
        if (lVar13 != 0) {
          uVar14 = *(uint64_t *)(uVar20 + *(int64_t *)(lVar13 + 0x200));
        }
        puVar7 = (uint64_t *)DataPipelineManager(lVar1,0x60);
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[4] = 0;
        *(int32_t *)(puVar7 + 5) = 1;
        puVar7[6] = 0;
        puVar7[8] = 0;
        pcVar11 = "script";
        do {
          pcVar8 = pcVar11;
          pcVar11 = pcVar8 + 1;
        } while (*pcVar11 != '\0');
        *puVar7 = &ui_system_data_1436_ptr;
        puVar7[2] = pcVar8 + -0x180a2355b;
        puVar9 = (uint64_t *)DataPipelineManager(lVar1,0x60);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[4] = 0;
        *(int32_t *)(puVar9 + 5) = 1;
        puVar9[6] = 0;
        puVar9[8] = 0;
        pcVar11 = "variables";
        do {
          pcVar8 = pcVar11;
          pcVar11 = pcVar8 + 1;
        } while (*pcVar11 != '\0');
        *puVar9 = &processed_var_400_ptr;
        puVar9[2] = pcVar8 + -0x180a1950f;
        lVar13 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x268);
        uVar17 = 0;
        if (lVar13 != 0) {
          lVar15 = *(int64_t *)(*(int64_t *)(uVar20 + *(int64_t *)(lVar13 + 0x200)) + 0x10);
          iVar3 = *(int *)(lVar15 + 0x18);
          iVar12 = *(int *)(plVar4[2] + 0x18);
          if (iVar3 == iVar12) {
            if (iVar3 != 0) {
              pbVar10 = *(byte **)(lVar15 + 0x10);
              lVar15 = *(int64_t *)(plVar4[2] + 0x10) - (int64_t)pbVar10;
              do {
                pbVar2 = pbVar10 + lVar15;
                iVar12 = (uint)*pbVar10 - (uint)*pbVar2;
                if (iVar12 != 0) break;
                pbVar10 = pbVar10 + 1;
              } while (*pbVar2 != 0);
            }
          }
          else {
            uVar17 = 0;
            if (iVar3 != 0) goto LAB_1803c203b;
          }
          uVar17 = 0;
          if (iVar12 == 0) {
            uVar17 = *(uint64_t *)(uVar20 + *(int64_t *)(lVar13 + 0x200));
          }
        }
LAB_1803c203b:
        FUN_1803530c0(plVar4,param_2,puVar9,uVar17);
        if ((puVar9[6] == 0) && (puVar9[8] == 0)) {
          if (uVar14 == 0) goto LAB_1803c20bf;
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          if (puVar7[6] == 0) {
            puVar9[10] = 0;
            puVar7[6] = puVar9;
          }
          else {
            puVar9[10] = puVar7[7];
            *(uint64_t **)(puVar7[7] + 0x58) = puVar9;
          }
          puVar7[7] = puVar9;
          puVar9[4] = puVar7;
          puVar9[0xb] = 0;
LAB_1803c20bf:
          puVar16 = &system_buffer_ptr;
          if (*(void **)(plVar4[2] + 0x10) != (void *)0x0) {
            puVar16 = *(void **)(plVar4[2] + 0x10);
          }
          SystemAllocationProcessor(param_2,puVar7,&system_data_3a84,puVar16);
        }
        if ((puVar7[6] != 0) || (puVar7[8] != 0)) {
          if (puVar6[6] == 0) {
            puVar7[10] = uVar14;
            puVar6[6] = puVar7;
          }
          else {
            puVar7[10] = puVar6[7];
            *(uint64_t **)(puVar6[7] + 0x58) = puVar7;
          }
          puVar6[7] = puVar7;
          puVar7[4] = puVar6;
          puVar7[0xb] = uVar14;
        }
        (**(code **)(*plVar4 + 0x38))(plVar4);
      }
      else {
        (**(code **)(*plVar4 + 0x38))(plVar4);
      }
      uVar18 = (int)uVar19 + 1;
      lVar13 = *(int64_t *)(param_1 + 8);
      uVar19 = (uint64_t)uVar18;
      uVar20 = uVar20 + 8;
    } while ((uint64_t)(int64_t)(int)uVar18 <
             (uint64_t)(*(int64_t *)(lVar13 + 0x208) - *(int64_t *)(lVar13 + 0x200) >> 3));
  }
  if ((puVar6[6] != 0) || (puVar6[8] != 0)) {
    if (*(int64_t *)(param_3 + 0x30) == 0) {
      puVar6[10] = uVar14;
      *(uint64_t **)(param_3 + 0x30) = puVar6;
    }
    else {
      puVar6[10] = *(uint64_t *)(param_3 + 0x38);
      *(uint64_t **)(*(int64_t *)(param_3 + 0x38) + 0x58) = puVar6;
    }
    *(uint64_t **)(param_3 + 0x38) = puVar6;
    puVar6[4] = param_3;
    puVar6[0xb] = uVar14;
  }
  return;
}






// 函数: void FUN_1803c21c0(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_1803c21c0(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  char *pcVar4;
  uint64_t *puVar5;
  char *pcVar6;
  uint64_t *puVar7;
  bool bVar8;
  
  puVar3 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[4] = 0;
  *(int32_t *)(puVar3 + 5) = 1;
  puVar3[6] = 0;
  puVar3[8] = 0;
  pcVar4 = "additional_features";
  do {
    pcVar6 = pcVar4;
    pcVar4 = pcVar6 + 1;
  } while (*pcVar4 != '\0');
  *puVar3 = &rendering_buffer_2920_ptr;
  puVar3[2] = pcVar6 + -0x180a23b27;
  lVar1 = *(int64_t *)(param_1 + 8);
  lVar2 = *(int64_t *)(lVar1 + 0x268);
  if (lVar2 == 0) {
    bVar8 = (*(byte *)(lVar1 + 0x2e8) & 0x40) == 0;
  }
  else {
    if (((*(byte *)(lVar2 + 0x2e8) ^ *(byte *)(lVar1 + 0x2e8)) & 0x40) != 0) goto LAB_1803c2297;
    if ((*(float *)(lVar1 + 0x180) != *(float *)(lVar2 + 0x180)) ||
       (*(float *)(lVar1 + 0x184) != *(float *)(lVar2 + 0x184))) goto LAB_1803c2297;
    bVar8 = *(float *)(lVar1 + 0x188) == *(float *)(lVar2 + 0x188);
  }
  if (bVar8) {
    return;
  }
LAB_1803c2297:
  puVar5 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[4] = 0;
  *(int32_t *)(puVar5 + 5) = 1;
  puVar5[6] = 0;
  puVar5[8] = 0;
  pcVar4 = "feature";
  do {
    pcVar6 = pcVar4;
    pcVar4 = pcVar6 + 1;
  } while (*pcVar4 != '\0');
  *puVar5 = &rendering_buffer_2912_ptr;
  puVar5[2] = pcVar6 + -0x180a23b1f;
  SystemAllocationProcessor(param_2,puVar5,&system_data_3a84,&rendering_buffer_2872_ptr);
  FUN_18062f7c0(param_2,puVar5,&memory_allocator_3692_ptr,*(byte *)(*(int64_t *)(param_1 + 8) + 0x2e8) >> 6 & 1
               );
  if (puVar3[6] == 0) {
    puVar5[10] = 0;
    puVar3[6] = puVar5;
  }
  else {
    puVar5[10] = puVar3[7];
    *(uint64_t **)(puVar3[7] + 0x58) = puVar5;
  }
  puVar3[7] = puVar5;
  puVar5[4] = puVar3;
  puVar5[0xb] = 0;
  puVar7 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[4] = 0;
  *(int32_t *)(puVar7 + 5) = 1;
  puVar7[6] = 0;
  puVar7[8] = 0;
  pcVar4 = "factor";
  do {
    pcVar6 = pcVar4;
    pcVar4 = pcVar6 + 1;
  } while (*pcVar4 != '\0');
  *puVar7 = &processed_var_8684_ptr;
  puVar7[2] = pcVar6 + -0x180a1674b;
  FUN_180630010(param_2,puVar7,&memory_allocator_3692_ptr,*(int64_t *)(param_1 + 8) + 0x180);
  if (puVar5[6] == 0) {
    puVar7[10] = 0;
    puVar5[6] = puVar7;
  }
  else {
    puVar7[10] = puVar5[7];
    *(uint64_t **)(puVar5[7] + 0x58) = puVar7;
  }
  puVar5[7] = puVar7;
  puVar7[4] = puVar5;
  puVar7[0xb] = 0;
  if (*(int64_t *)(param_3 + 0x30) == 0) {
    puVar3[10] = 0;
    *(uint64_t **)(param_3 + 0x30) = puVar3;
  }
  else {
    puVar3[10] = *(uint64_t *)(param_3 + 0x38);
    *(uint64_t **)(*(int64_t *)(param_3 + 0x38) + 0x58) = puVar3;
  }
  *(uint64_t **)(param_3 + 0x38) = puVar3;
  puVar3[4] = param_3;
  puVar3[0xb] = 0;
  return;
}






// 函数: void FUN_1803c229c(void)
void FUN_1803c229c(void)

{
  int64_t *plVar1;
  char *pcVar2;
  int64_t *plVar4;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_R12;
  int64_t unaff_R14;
  char *pcVar3;
  
  plVar1 = (int64_t *)DataPipelineManager(unaff_R14 + 0x60);
  *plVar1 = unaff_R12;
  plVar1[1] = unaff_R12;
  plVar1[4] = unaff_R12;
  *(int32_t *)(plVar1 + 5) = 1;
  plVar1[6] = unaff_R12;
  plVar1[8] = unaff_R12;
  pcVar2 = "feature";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar2 != (char)unaff_R12);
  *plVar1 = (int64_t)&rendering_buffer_2912_ptr;
  plVar1[2] = (int64_t)(pcVar3 + -0x180a23b1f);
  SystemAllocationProcessor();
  FUN_18062f7c0();
  if (*(int64_t *)(unaff_RBX + 0x30) == unaff_R12) {
    plVar1[10] = unaff_R12;
    *(int64_t **)(unaff_RBX + 0x30) = plVar1;
  }
  else {
    plVar1[10] = *(int64_t *)(unaff_RBX + 0x38);
    *(int64_t **)(*(int64_t *)(unaff_RBX + 0x38) + 0x58) = plVar1;
  }
  *(int64_t **)(unaff_RBX + 0x38) = plVar1;
  plVar1[4] = unaff_RBX;
  plVar1[0xb] = unaff_R12;
  plVar4 = (int64_t *)DataPipelineManager(unaff_R14 + 0x60,0x60);
  *plVar4 = unaff_R12;
  plVar4[1] = unaff_R12;
  plVar4[4] = unaff_R12;
  *(int32_t *)(plVar4 + 5) = 1;
  plVar4[6] = unaff_R12;
  plVar4[8] = unaff_R12;
  pcVar2 = "factor";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar2 != (char)unaff_R12);
  *plVar4 = (int64_t)&processed_var_8684_ptr;
  plVar4[2] = (int64_t)(pcVar3 + -0x180a1674b);
  FUN_180630010();
  if (plVar1[6] == unaff_R12) {
    plVar4[10] = unaff_R12;
    plVar1[6] = (int64_t)plVar4;
  }
  else {
    plVar4[10] = plVar1[7];
    *(int64_t **)(plVar1[7] + 0x58) = plVar4;
  }
  plVar1[7] = (int64_t)plVar4;
  plVar4[4] = (int64_t)plVar1;
  plVar4[0xb] = unaff_R12;
  if (*(int64_t *)(unaff_RBP + 0x30) == unaff_R12) {
    *(int64_t *)(unaff_RBX + 0x50) = unaff_R12;
    *(int64_t *)(unaff_RBP + 0x30) = unaff_RBX;
  }
  else {
    *(uint64_t *)(unaff_RBX + 0x50) = *(uint64_t *)(unaff_RBP + 0x38);
    *(int64_t *)(*(int64_t *)(unaff_RBP + 0x38) + 0x58) = unaff_RBX;
  }
  *(int64_t *)(unaff_RBP + 0x38) = unaff_RBX;
  *(int64_t *)(unaff_RBX + 0x20) = unaff_RBP;
  *(int64_t *)(unaff_RBX + 0x58) = unaff_R12;
  return;
}






// 函数: void FUN_1803c23e9(void)
void FUN_1803c23e9(void)

{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_R12;
  
  *(uint64_t *)(unaff_RBX + 0x50) = *(uint64_t *)(unaff_RBP + 0x38);
  *(int64_t *)(*(int64_t *)(unaff_RBP + 0x38) + 0x58) = unaff_RBX;
  *(int64_t *)(unaff_RBP + 0x38) = unaff_RBX;
  *(int64_t *)(unaff_RBX + 0x20) = unaff_RBP;
  *(uint64_t *)(unaff_RBX + 0x58) = unaff_R12;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_1803c2430(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  byte bVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  byte *pbVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t *puStackX_8;
  int64_t lStackX_10;
  
  lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x78,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  puVar1 = (uint64_t *)(lVar4 + 0x20);
  SystemCommunicationProcessor(puVar1,param_3);
  lStackX_10 = lVar4;
  lVar5 = SystemCore_SecurityValidator(param_1,&puStackX_8,puVar1);
  if ((char)puStackX_8 == '\0') {
    *puVar1 = &system_state_ptr;
    if (lVar4 != 0) {
      puStackX_8 = puVar1;
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar4);
    }
    *param_2 = lVar5;
    *(int8_t *)(param_2 + 1) = 0;
    return param_2;
  }
  if (lVar5 != param_1) {
    if (*(int *)(lVar5 + 0x30) == 0) {
LAB_1803c24d7:
      uVar8 = 1;
      goto LAB_1803c24e2;
    }
    if (*(int *)(lVar4 + 0x30) != 0) {
      pbVar6 = *(byte **)(lVar5 + 0x28);
      lVar7 = *(int64_t *)(lVar4 + 0x28) - (int64_t)pbVar6;
      do {
        bVar2 = *pbVar6;
        uVar3 = (uint)pbVar6[lVar7];
        if (bVar2 != uVar3) break;
        pbVar6 = pbVar6 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar2 - uVar3) < 1) goto LAB_1803c24d7;
    }
  }
  uVar8 = 0;
LAB_1803c24e2:
                    // WARNING: Subroutine does not return
  SystemConfigProcessor(lVar4,lVar5,param_1,uVar8);
}






// 函数: void FUN_1803c2540(int64_t param_1,uint param_2)
void FUN_1803c2540(int64_t param_1,uint param_2)

{
  uint64_t *puVar1;
  uint uVar2;
  uint64_t uVar3;
  
  uVar3 = (uint64_t)param_2;
  if ((int)param_2 < (int)(param_2 + 0x1000)) {
    do {
      puVar1 = (uint64_t *)
               ((int64_t)((int)uVar3 + (int)(uVar3 >> 0xc) * -0x1000) * 0x30 +
               *(int64_t *)(param_1 + 8 + (uVar3 >> 0xc) * 8));
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[2] = &system_state_ptr;
      puVar1[3] = 0;
      *(int32_t *)(puVar1 + 4) = 0;
      puVar1[2] = &system_data_buffer_ptr;
      puVar1[5] = 0;
      puVar1[3] = 0;
      *(int32_t *)(puVar1 + 4) = 0;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while ((int)uVar2 < (int)(param_2 + 0x1000));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




