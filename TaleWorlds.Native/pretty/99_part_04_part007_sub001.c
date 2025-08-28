#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part007_sub001.c - 8 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_04_part007.c - 8 个函数


// 函数: void FUN_18025c090(int *param_1,int64_t *param_2)
void FUN_18025c090(int *param_1,int64_t *param_2)

{
  int8_t uVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int *piVar5;
  uint64_t *puVar6;
  int8_t *puVar7;
  int iVar8;
  
  piVar5 = (int *)0x180bf89e8;
  iVar8 = 0;
  do {
    if (*piVar5 == *param_1) {
      UtilitiesSystem_ThreadManager(param_2,*(uint64_t *)((int64_t)iVar8 * 0x10 + 0x180bf89e0));
      break;
    }
    iVar8 = iVar8 + 1;
    piVar5 = piVar5 + 4;
  } while ((int64_t)piVar5 < 0x180bf8a48);
  puVar7 = (int8_t *)param_2[1];
  iVar8 = param_1[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar7 + (1 - *param_2));
    puVar7 = (int8_t *)param_2[1];
  }
  *puVar7 = (char)iVar8;
  param_2[1] = param_2[1] + 1;
  puVar7 = (int8_t *)param_2[1];
  uVar1 = *(int8_t *)((int64_t)param_1 + 5);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar7 + (1 - *param_2));
    puVar7 = (int8_t *)param_2[1];
  }
  *puVar7 = uVar1;
  param_2[1] = param_2[1] + 1;
  puVar7 = (int8_t *)param_2[1];
  uVar1 = *(int8_t *)((int64_t)param_1 + 6);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar7 + (1 - *param_2));
    puVar7 = (int8_t *)param_2[1];
  }
  *puVar7 = uVar1;
  param_2[1] = param_2[1] + 1;
  puVar7 = (int8_t *)param_2[1];
  uVar1 = *(int8_t *)((int64_t)param_1 + 7);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar7 + (1 - *param_2));
    puVar7 = (int8_t *)param_2[1];
  }
  *puVar7 = uVar1;
  param_2[1] = param_2[1] + 1;
  puVar7 = (int8_t *)param_2[1];
  uVar1 = *(int8_t *)((int64_t)param_1 + 9);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar7 + (1 - *param_2));
    puVar7 = (int8_t *)param_2[1];
  }
  *puVar7 = uVar1;
  param_2[1] = param_2[1] + 1;
  puVar7 = (int8_t *)param_2[1];
  uVar1 = *(int8_t *)((int64_t)param_1 + 10);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar7 + (1 - *param_2));
    puVar7 = (int8_t *)param_2[1];
  }
  *puVar7 = uVar1;
  param_2[1] = param_2[1] + 1;
  Audio_SoundManager(param_2,param_1 + 3);
  piVar5 = (int *)param_2[1];
  iVar8 = param_1[7];
  if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar5 + (4 - *param_2));
    piVar5 = (int *)param_2[1];
  }
  *piVar5 = iVar8;
  param_2[1] = param_2[1] + 4;
  puVar6 = (uint64_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar6) + param_2[2]) < 0x41) {
    System_BufferManager(param_2,(int64_t)puVar6 + (0x40 - *param_2));
    puVar6 = (uint64_t *)param_2[1];
  }
  uVar4 = *(uint64_t *)(param_1 + 10);
  *puVar6 = *(uint64_t *)(param_1 + 8);
  puVar6[1] = uVar4;
  uVar4 = *(uint64_t *)(param_1 + 0xe);
  puVar6[2] = *(uint64_t *)(param_1 + 0xc);
  puVar6[3] = uVar4;
  iVar8 = param_1[0x11];
  iVar2 = param_1[0x12];
  iVar3 = param_1[0x13];
  *(int *)(puVar6 + 4) = param_1[0x10];
  *(int *)((int64_t)puVar6 + 0x24) = iVar8;
  *(int *)(puVar6 + 5) = iVar2;
  *(int *)((int64_t)puVar6 + 0x2c) = iVar3;
  iVar8 = param_1[0x15];
  iVar2 = param_1[0x16];
  iVar3 = param_1[0x17];
  *(int *)(puVar6 + 6) = param_1[0x14];
  *(int *)((int64_t)puVar6 + 0x34) = iVar8;
  *(int *)(puVar6 + 7) = iVar2;
  *(int *)((int64_t)puVar6 + 0x3c) = iVar3;
  param_2[1] = param_2[1] + 0x40;
  piVar5 = (int *)param_2[1];
  iVar8 = param_1[0x18];
  if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar5 + (4 - *param_2));
    piVar5 = (int *)param_2[1];
  }
  *piVar5 = iVar8;
  param_2[1] = param_2[1] + 4;
  puVar7 = (int8_t *)param_2[1];
  iVar8 = param_1[2];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar7 + (1 - *param_2));
    puVar7 = (int8_t *)param_2[1];
  }
  *puVar7 = (char)iVar8;
  param_2[1] = param_2[1] + 1;
  piVar5 = (int *)param_2[1];
  iVar8 = param_1[0x19];
  if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar5 + (4 - *param_2));
    piVar5 = (int *)param_2[1];
  }
  *piVar5 = iVar8;
  param_2[1] = param_2[1] + 4;
  piVar5 = (int *)param_2[1];
  iVar8 = param_1[0x1a];
  if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar5 + (4 - *param_2));
    piVar5 = (int *)param_2[1];
  }
  *piVar5 = iVar8;
  param_2[1] = param_2[1] + 4;
  puVar7 = (int8_t *)param_2[1];
  uVar1 = *(int8_t *)((int64_t)param_1 + 0xb);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar7 + (1 - *param_2));
    *(int8_t *)param_2[1] = uVar1;
  }
  else {
    *puVar7 = uVar1;
  }
  param_2[1] = param_2[1] + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_18025c3e0(int32_t *param_1,int64_t param_2,uint param_3)
void FUN_18025c3e0(int32_t *param_1,int64_t param_2,uint param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  byte *pbVar10;
  int32_t *puVar11;
  int iVar12;
  int iVar13;
  int64_t *plVar14;
  int8_t auStack_488 [32];
  uint64_t uStack_468;
  void *puStack_458;
  byte *pbStack_450;
  int iStack_448;
  byte abStack_440 [1032];
  uint64_t uStack_38;
  
  uStack_468 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_488;
  iVar13 = 0;
  puStack_458 = &memory_allocator_336_ptr;
  pbStack_450 = abStack_440;
  iStack_448 = 0;
  abStack_440[0] = 0;
  uVar3 = **(uint **)(param_2 + 8);
  puVar1 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar1;
  if (uVar3 != 0) {
    SystemManager_Executor(&puStack_458,puVar1,uVar3);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar3;
  }
  plVar14 = (int64_t *)0x180bf89e0;
  do {
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (*(char *)(*plVar14 + lVar9) != '\0');
    iVar12 = (int)lVar9;
    if (iStack_448 == iVar12) {
      if (iStack_448 != 0) {
        pbVar10 = pbStack_450;
        do {
          pbVar2 = pbVar10 + (*plVar14 - (int64_t)pbStack_450);
          iVar12 = (uint)*pbVar10 - (uint)*pbVar2;
          if (iVar12 != 0) break;
          pbVar10 = pbVar10 + 1;
        } while (*pbVar2 != 0);
      }
LAB_18025c4ee:
      if (iVar12 == 0) {
        *param_1 = *(int32_t *)((int64_t)iVar13 * 0x10 + 0x180bf89e8);
        goto LAB_18025c4ff;
      }
    }
    else if (iStack_448 == 0) goto LAB_18025c4ee;
    iVar13 = iVar13 + 1;
    plVar14 = plVar14 + 2;
    if (0x180bf8a3f < (int64_t)plVar14) {
LAB_18025c4ff:
      puStack_458 = &system_state_ptr;
      *(int8_t *)(param_1 + 1) = **(int8_t **)(param_2 + 8);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
      *(int8_t *)((int64_t)param_1 + 5) = **(int8_t **)(param_2 + 8);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
      *(int8_t *)((int64_t)param_1 + 6) = **(int8_t **)(param_2 + 8);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
      *(int8_t *)((int64_t)param_1 + 7) = **(int8_t **)(param_2 + 8);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
      *(int8_t *)((int64_t)param_1 + 9) = **(int8_t **)(param_2 + 8);
      puVar11 = (int32_t *)(*(int64_t *)(param_2 + 8) + 1);
      *(int32_t **)(param_2 + 8) = puVar11;
      if (1 < param_3) {
        *(int8_t *)((int64_t)param_1 + 10) = *(int8_t *)puVar11;
        puVar11 = (int32_t *)(*(int64_t *)(param_2 + 8) + 1);
      }
      param_1[3] = *puVar11;
      param_1[4] = puVar11[1];
      param_1[5] = puVar11[2];
      param_1[6] = puVar11[3];
      *(int32_t **)(param_2 + 8) = puVar11 + 4;
      param_1[7] = puVar11[4];
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
      puVar4 = *(uint64_t **)(param_2 + 8);
      uVar8 = puVar4[1];
      *(uint64_t *)(param_1 + 8) = *puVar4;
      *(uint64_t *)(param_1 + 10) = uVar8;
      uVar8 = puVar4[3];
      *(uint64_t *)(param_1 + 0xc) = puVar4[2];
      *(uint64_t *)(param_1 + 0xe) = uVar8;
      uVar5 = *(int32_t *)((int64_t)puVar4 + 0x24);
      uVar6 = *(int32_t *)(puVar4 + 5);
      uVar7 = *(int32_t *)((int64_t)puVar4 + 0x2c);
      param_1[0x10] = *(int32_t *)(puVar4 + 4);
      param_1[0x11] = uVar5;
      param_1[0x12] = uVar6;
      param_1[0x13] = uVar7;
      uVar5 = *(int32_t *)((int64_t)puVar4 + 0x34);
      uVar6 = *(int32_t *)(puVar4 + 7);
      uVar7 = *(int32_t *)((int64_t)puVar4 + 0x3c);
      param_1[0x14] = *(int32_t *)(puVar4 + 6);
      param_1[0x15] = uVar5;
      param_1[0x16] = uVar6;
      param_1[0x17] = uVar7;
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 0x40;
      param_1[0x18] = **(int32_t **)(param_2 + 8);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
      *(int8_t *)(param_1 + 2) = **(int8_t **)(param_2 + 8);
      puVar11 = (int32_t *)(*(int64_t *)(param_2 + 8) + 1);
      *(int32_t **)(param_2 + 8) = puVar11;
      if (param_3 != 0) {
        param_1[0x19] = *puVar11;
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
        param_1[0x1a] = **(int32_t **)(param_2 + 8);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
        puVar11 = *(int32_t **)(param_2 + 8);
      }
      if (2 < param_3) {
        *(int8_t *)((int64_t)param_1 + 0xb) = *(int8_t *)puVar11;
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
      }
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_488);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_18025c650(int64_t param_1,int64_t param_2,int param_3)
void FUN_18025c650(int64_t param_1,int64_t param_2,int param_3)

{
  uint *puVar1;
  byte *pbVar2;
  int8_t uVar3;
  uint uVar4;
  int32_t *puVar5;
  int8_t *puVar6;
  int16_t *puVar7;
  int64_t lVar8;
  byte *pbVar9;
  int iVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int8_t auStack_498 [32];
  int iStack_478;
  uint64_t uStack_470;
  void *puStack_468;
  byte *pbStack_460;
  int iStack_458;
  byte abStack_450 [1032];
  uint64_t uStack_48;
  
  uStack_470 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_498;
  uVar3 = **(int8_t **)(param_2 + 8);
  *(int8_t **)(param_2 + 8) = *(int8_t **)(param_2 + 8) + 1;
  *(int8_t *)(param_1 + 0x17) = uVar3;
  *(int32_t *)(param_1 + 8) = **(int32_t **)(param_2 + 8);
  puVar5 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar5;
  *(int32_t *)(param_1 + 0xc) = *puVar5;
  puVar5 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar5;
  *(int32_t *)(param_1 + 0x10) = *puVar5;
  puVar6 = (int8_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int8_t **)(param_2 + 8) = puVar6;
  *(int8_t *)(param_1 + 0x16) = *puVar6;
  puVar7 = (int16_t *)(*(int64_t *)(param_2 + 8) + 1);
  *(int16_t **)(param_2 + 8) = puVar7;
  *(int16_t *)(param_1 + 0x14) = *puVar7;
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 2;
  iStack_478 = param_3;
  FUN_180257480(param_1,param_2,param_1);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  uVar11 = 0;
  *(int32_t *)(param_1 + 4) = 0;
  uVar4 = **(uint **)(param_2 + 8);
  *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 1;
  if (uVar4 != 0) {
    uVar14 = (uint64_t)uVar4;
    do {
      puStack_468 = &memory_allocator_336_ptr;
      pbStack_460 = abStack_450;
      iStack_458 = 0;
      abStack_450[0] = 0;
      uVar4 = **(uint **)(param_2 + 8);
      puVar1 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar1;
      if (uVar4 != 0) {
        SystemManager_Executor(&puStack_468,puVar1,uVar4);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar4;
      }
      plVar12 = (int64_t *)&processed_var_8384_ptr;
      uVar13 = uVar11;
      do {
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (*(char *)(*plVar12 + lVar8) != '\0');
        iVar10 = (int)lVar8;
        if (iStack_458 == iVar10) {
          if (iStack_458 != 0) {
            pbVar9 = pbStack_460;
            do {
              pbVar2 = pbVar9 + (*plVar12 - (int64_t)pbStack_460);
              iVar10 = (uint)*pbVar9 - (uint)*pbVar2;
              if (iVar10 != 0) break;
              pbVar9 = pbVar9 + 1;
            } while (*pbVar2 != 0);
          }
LAB_18025c7fe:
          if (iVar10 == 0) {
            *(uint *)(param_1 + 4) =
                 *(uint *)(param_1 + 4) | *(uint *)(&processed_var_8392_ptr + uVar13 * 0x10);
            break;
          }
        }
        else if (iStack_458 == 0) goto LAB_18025c7fe;
        uVar13 = uVar13 + 1;
        plVar12 = plVar12 + 2;
      } while ((int64_t)plVar12 < 0x18098dac0);
      puStack_468 = &system_state_ptr;
      uVar14 = uVar14 - 1;
      param_3 = iStack_478;
    } while (uVar14 != 0);
  }
  if (param_3 == 0) {
    *(int8_t *)(param_1 + 0x18) = 0;
  }
  else {
    puStack_468 = &memory_allocator_336_ptr;
    pbStack_460 = abStack_450;
    iStack_458 = 0;
    abStack_450[0] = 0;
    uVar4 = **(uint **)(param_2 + 8);
    puVar1 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar1;
    if (uVar4 != 0) {
      SystemManager_Executor(&puStack_468,puVar1,uVar4);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar4;
    }
    plVar12 = (int64_t *)0x180bf8990;
    do {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (*(char *)(*plVar12 + lVar8) != '\0');
      iVar10 = (int)lVar8;
      if (iStack_458 == iVar10) {
        if (iStack_458 != 0) {
          pbVar9 = pbStack_460;
          do {
            pbVar2 = pbVar9 + (*plVar12 - (int64_t)pbStack_460);
            iVar10 = (uint)*pbVar9 - (uint)*pbVar2;
            if (iVar10 != 0) break;
            pbVar9 = pbVar9 + 1;
          } while (*pbVar2 != 0);
        }
LAB_18025c90e:
        if (iVar10 == 0) {
          puStack_468 = &system_state_ptr;
          *(char *)(param_1 + 0x18) =
               (char)*(int32_t *)((int64_t)(int)uVar11 * 0x10 + 0x180bf8998);
          goto LAB_18025c952;
        }
      }
      else if (iStack_458 == 0) goto LAB_18025c90e;
      uVar11 = (uint64_t)((int)uVar11 + 1);
      plVar12 = plVar12 + 2;
    } while ((int64_t)plVar12 < 0x180bf89e0);
    puStack_468 = &system_state_ptr;
    *(char *)(param_1 + 0x18) = (char)iStack_478;
  }
LAB_18025c952:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_498);
}







// 函数: void FUN_18025c980(int32_t *param_1,int64_t *param_2)
void FUN_18025c980(int32_t *param_1,int64_t *param_2)

{
  int8_t uVar1;
  int16_t uVar2;
  int32_t uVar3;
  uint uVar4;
  int64_t lVar5;
  uint *puVar6;
  int8_t *puVar7;
  int16_t *puVar8;
  int32_t *puVar9;
  int64_t lVar10;
  int iVar11;
  int iVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  
  uVar1 = *(int8_t *)((int64_t)param_1 + 0x17);
  puVar7 = (int8_t *)param_2[1];
  if ((uint64_t)((param_2[2] - (int64_t)puVar7) + *param_2) < 2) {
    System_BufferManager(param_2,puVar7 + (1 - *param_2));
    puVar7 = (int8_t *)param_2[1];
  }
  *puVar7 = uVar1;
  param_2[1] = param_2[1] + 1;
  puVar9 = (int32_t *)param_2[1];
  uVar3 = param_1[2];
  if ((uint64_t)((param_2[2] - (int64_t)puVar9) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar9 + (4 - *param_2));
    puVar9 = (int32_t *)param_2[1];
  }
  *puVar9 = uVar3;
  param_2[1] = param_2[1] + 4;
  puVar9 = (int32_t *)param_2[1];
  uVar3 = param_1[3];
  if ((uint64_t)((param_2[2] - (int64_t)puVar9) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar9 + (4 - *param_2));
    puVar9 = (int32_t *)param_2[1];
  }
  *puVar9 = uVar3;
  param_2[1] = param_2[1] + 4;
  puVar9 = (int32_t *)param_2[1];
  uVar3 = param_1[4];
  if ((uint64_t)((param_2[2] - (int64_t)puVar9) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar9 + (4 - *param_2));
    puVar9 = (int32_t *)param_2[1];
  }
  *puVar9 = uVar3;
  param_2[1] = param_2[1] + 4;
  puVar7 = (int8_t *)param_2[1];
  uVar1 = *(int8_t *)((int64_t)param_1 + 0x16);
  if ((uint64_t)((param_2[2] - (int64_t)puVar7) + *param_2) < 2) {
    System_BufferManager(param_2,puVar7 + (1 - *param_2));
    puVar7 = (int8_t *)param_2[1];
  }
  *puVar7 = uVar1;
  param_2[1] = param_2[1] + 1;
  puVar8 = (int16_t *)param_2[1];
  uVar2 = *(int16_t *)(param_1 + 5);
  if ((uint64_t)((param_2[2] - (int64_t)puVar8) + *param_2) < 3) {
    System_BufferManager(param_2,(int64_t)puVar8 + (2 - *param_2));
    puVar8 = (int16_t *)param_2[1];
  }
  *puVar8 = uVar2;
  param_2[1] = param_2[1] + 2;
  FUN_1802575d0(puVar8,*param_1,param_2);
  puVar9 = (int32_t *)param_2[1];
  uVar4 = param_1[1];
  if ((uint64_t)((param_2[2] - (int64_t)puVar9) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar9 + (4 - *param_2));
    puVar9 = (int32_t *)param_2[1];
  }
  iVar12 = 0;
  *puVar9 = 0;
  lVar5 = *param_2;
  lVar10 = param_2[1] + 4;
  param_2[1] = lVar10;
  lVar14 = 0;
  if (lVar5 != 0) {
    lVar14 = lVar10 - lVar5;
  }
  if ((uint64_t)((param_2[2] - lVar10) + lVar5) < 5) {
    System_BufferManager(param_2,(lVar10 - lVar5) + 4);
    lVar10 = param_2[1];
  }
  iVar11 = 0;
  param_2[1] = lVar10 + 4;
  puVar13 = (uint64_t *)&processed_var_8384_ptr;
  do {
    if ((*(uint *)(puVar13 + 1) & uVar4) != 0) {
      UtilitiesSystem_ThreadManager(param_2,*puVar13);
      iVar11 = iVar11 + 1;
    }
    puVar13 = puVar13 + 2;
  } while ((int64_t)puVar13 < 0x18098dac0);
  *(int *)(lVar14 + *param_2) = iVar11;
  puVar6 = (uint *)0x180bf8998;
  do {
    if (*puVar6 == (uint)*(byte *)(param_1 + 6)) {
      UtilitiesSystem_ThreadManager(param_2,*(uint64_t *)((int64_t)iVar12 * 0x10 + 0x180bf8990));
      return;
    }
    iVar12 = iVar12 + 1;
    puVar6 = puVar6 + 4;
  } while ((int64_t)puVar6 < 0x180bf89e8);
  return;
}







// 函数: void HighFreq_FileSystem1(uint64_t param_1,int32_t param_2,uint64_t param_3)
void HighFreq_FileSystem1(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  int8_t uStack_10;
  
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  FUN_18025c650(&uStack_28,param_1,param_2);
  FUN_18025c980(&uStack_28,param_3);
  return;
}







// 函数: void FUN_18025cc70(int64_t param_1,int64_t *param_2)
void FUN_18025cc70(int64_t param_1,int64_t *param_2)

{
  int32_t *puVar1;
  int8_t uVar2;
  int32_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t *puVar8;
  int8_t *puVar9;
  int64_t lVar10;
  int *piVar11;
  uint64_t uVar12;
  int64_t lVar13;
  int iVar14;
  uint64_t *puVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  
  puVar8 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar8) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar8 + (4 - *param_2));
    puVar8 = (int32_t *)param_2[1];
  }
  *puVar8 = 2;
  puVar8 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar8;
  if ((uint64_t)((*param_2 - (int64_t)puVar8) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar8 + (0x10 - *param_2));
    puVar8 = (int32_t *)param_2[1];
  }
  uVar3 = *(int32_t *)(param_1 + 0xc);
  uVar6 = *(int32_t *)(param_1 + 0x10);
  uVar7 = *(int32_t *)(param_1 + 0x14);
  *puVar8 = *(int32_t *)(param_1 + 8);
  puVar8[1] = uVar3;
  puVar8[2] = uVar6;
  puVar8[3] = uVar7;
  puVar8 = (int32_t *)(param_2[1] + 0x10);
  param_2[1] = (int64_t)puVar8;
  uVar3 = *(int32_t *)(param_1 + 0x3c);
  if ((uint64_t)((*param_2 - (int64_t)puVar8) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar8 + (4 - *param_2));
    puVar8 = (int32_t *)param_2[1];
  }
  *puVar8 = uVar3;
  param_2[1] = param_2[1] + 4;
  System_QueueProcessor(param_2,param_1 + 0x40);
  puVar15 = (uint64_t *)param_2[1];
  uVar5 = *(uint64_t *)(param_1 + 0x60);
  if ((uint64_t)((*param_2 - (int64_t)puVar15) + param_2[2]) < 9) {
    System_BufferManager(param_2,(int64_t)puVar15 + (8 - *param_2));
    puVar15 = (uint64_t *)param_2[1];
  }
  *puVar15 = uVar5;
  puVar9 = (int8_t *)(param_2[1] + 8);
  param_2[1] = (int64_t)puVar9;
  uVar2 = *(int8_t *)(param_1 + 0x1c);
  if ((uint64_t)((*param_2 - (int64_t)puVar9) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar9 + (1 - *param_2));
    puVar9 = (int8_t *)param_2[1];
  }
  *puVar9 = uVar2;
  puVar8 = (int32_t *)(param_2[1] + 1);
  param_2[1] = (int64_t)puVar8;
  uVar4 = *(uint *)(param_1 + 0x18);
  if ((uint64_t)((*param_2 - (int64_t)puVar8) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar8 + (4 - *param_2));
    puVar8 = (int32_t *)param_2[1];
  }
  uVar17 = 0;
  *puVar8 = 0;
  lVar13 = *param_2;
  lVar10 = param_2[1] + 4;
  param_2[1] = lVar10;
  uVar16 = uVar17;
  if (lVar13 != 0) {
    uVar16 = lVar10 - lVar13;
  }
  if ((uint64_t)((lVar13 - lVar10) + param_2[2]) < 5) {
    System_BufferManager(param_2,(lVar10 - lVar13) + 4);
    lVar10 = param_2[1];
  }
  param_2[1] = lVar10 + 4;
  puVar15 = (uint64_t *)&processed_var_8176_ptr;
  uVar12 = uVar17;
  do {
    if ((*(uint *)(puVar15 + 1) & uVar4) != 0) {
      UtilitiesSystem_ThreadManager(param_2,*puVar15);
      uVar12 = (uint64_t)((int)uVar12 + 1);
    }
    puVar15 = puVar15 + 2;
  } while ((int64_t)puVar15 < 0x18098daa0);
  *(int *)(uVar16 + *param_2) = (int)uVar12;
  puVar8 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar8) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar8 + (4 - *param_2));
    puVar8 = (int32_t *)param_2[1];
  }
  *puVar8 = 1;
  param_2[1] = param_2[1] + 4;
  FUN_18025c980(param_1 + 0x20,param_2);
  lVar13 = *(int64_t *)(param_1 + 0x78);
  lVar10 = *(int64_t *)(param_1 + 0x70);
  piVar11 = (int *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)piVar11) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar11 + (4 - *param_2));
    piVar11 = (int *)param_2[1];
  }
  iVar14 = (int)(lVar13 - lVar10 >> 5);
  *piVar11 = iVar14;
  puVar15 = (uint64_t *)(param_2[1] + 4);
  lVar13 = (int64_t)iVar14;
  param_2[1] = (int64_t)puVar15;
  if (0 < iVar14) {
    do {
      lVar10 = *(int64_t *)(param_1 + 0x70);
      if ((uint64_t)((*param_2 - (int64_t)puVar15) + param_2[2]) < 0x11) {
        System_BufferManager(param_2,(int64_t)puVar15 + (0x10 - *param_2));
        puVar15 = (uint64_t *)param_2[1];
      }
      puVar8 = (int32_t *)(lVar10 + uVar17);
      uVar3 = puVar8[1];
      uVar6 = puVar8[2];
      uVar7 = puVar8[3];
      *(int32_t *)puVar15 = *puVar8;
      *(int32_t *)((int64_t)puVar15 + 4) = uVar3;
      *(int32_t *)(puVar15 + 1) = uVar6;
      *(int32_t *)((int64_t)puVar15 + 0xc) = uVar7;
      param_2[1] = param_2[1] + 0x10;
      puVar8 = (int32_t *)param_2[1];
      lVar10 = *(int64_t *)(param_1 + 0x70);
      if ((uint64_t)((*param_2 - (int64_t)puVar8) + param_2[2]) < 0x11) {
        System_BufferManager(param_2,(int64_t)puVar8 + (0x10 - *param_2));
        puVar8 = (int32_t *)param_2[1];
      }
      puVar1 = (int32_t *)(lVar10 + 0x10 + uVar17);
      uVar3 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      uVar17 = uVar17 + 0x20;
      *puVar8 = *puVar1;
      puVar8[1] = uVar3;
      puVar8[2] = uVar6;
      puVar8[3] = uVar7;
      puVar15 = (uint64_t *)(param_2[1] + 0x10);
      param_2[1] = (int64_t)puVar15;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  uVar5 = *(uint64_t *)(param_1 + 0x68);
  if ((uint64_t)((*param_2 - (int64_t)puVar15) + param_2[2]) < 9) {
    System_BufferManager(param_2,(int64_t)puVar15 + (8 - *param_2));
    *(uint64_t *)param_2[1] = uVar5;
  }
  else {
    *puVar15 = uVar5;
  }
  param_2[1] = param_2[1] + 8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_18025cfd0(int64_t param_1,int64_t param_2)
void FUN_18025cfd0(int64_t param_1,int64_t param_2)

{
  byte *pbVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  uint uVar4;
  int32_t *puVar5;
  uint64_t uVar6;
  uint uVar7;
  uint uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t *puVar11;
  int8_t *puVar12;
  int64_t lVar13;
  byte *pbVar14;
  uint *puVar15;
  int iVar16;
  int64_t lVar17;
  uint64_t uVar18;
  int64_t *plVar19;
  int64_t lVar20;
  uint uVar21;
  int8_t auStack_498 [32];
  uint uStack_478;
  uint64_t uStack_470;
  void *puStack_468;
  byte *pbStack_460;
  int iStack_458;
  byte abStack_450 [1032];
  uint64_t uStack_48;
  
  uStack_470 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_498;
  puVar15 = *(uint **)(param_2 + 8);
  uVar21 = *puVar15;
  *(uint **)(param_2 + 8) = puVar15 + 1;
  uVar4 = puVar15[2];
  uVar7 = puVar15[3];
  uVar8 = puVar15[4];
  *(uint *)(param_1 + 8) = puVar15[1];
  *(uint *)(param_1 + 0xc) = uVar4;
  *(uint *)(param_1 + 0x10) = uVar7;
  *(uint *)(param_1 + 0x14) = uVar8;
  lVar17 = *(int64_t *)(param_2 + 8);
  puVar11 = (int32_t *)(lVar17 + 0x10);
  *(int32_t **)(param_2 + 8) = puVar11;
  uVar3 = *puVar11;
  *(int64_t *)(param_2 + 8) = lVar17 + 0x14;
  *(int32_t *)(param_1 + 0x3c) = uVar3;
  uVar4 = **(uint **)(param_2 + 8);
  puVar15 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar15;
  uStack_478 = uVar21;
  if (uVar4 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x40) + 0x18))((int64_t *)(param_1 + 0x40),puVar15,uVar4);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar4;
    puVar15 = *(uint **)(param_2 + 8);
  }
  *(uint64_t *)(param_1 + 0x60) = *(uint64_t *)puVar15;
  puVar12 = (int8_t *)(*(int64_t *)(param_2 + 8) + 8);
  *(int8_t **)(param_2 + 8) = puVar12;
  *(int8_t *)(param_1 + 0x1c) = *puVar12;
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 5;
  lVar17 = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  uVar4 = **(uint **)(param_2 + 8);
  puVar15 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar15;
  if (uVar4 != 0) {
    uVar18 = (uint64_t)uVar4;
    do {
      puStack_468 = &memory_allocator_336_ptr;
      pbStack_460 = abStack_450;
      iStack_458 = 0;
      abStack_450[0] = 0;
      uVar21 = **(uint **)(param_2 + 8);
      puVar15 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar15;
      if (uVar21 != 0) {
        SystemManager_Executor(&puStack_468,puVar15,uVar21);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar21;
      }
      plVar19 = (int64_t *)&processed_var_8176_ptr;
      lVar20 = lVar17;
      do {
        lVar13 = -1;
        do {
          lVar13 = lVar13 + 1;
        } while (*(char *)(*plVar19 + lVar13) != '\0');
        iVar16 = (int)lVar13;
        if (iStack_458 == iVar16) {
          if (iStack_458 != 0) {
            pbVar14 = pbStack_460;
            do {
              pbVar1 = pbVar14 + (*plVar19 - (int64_t)pbStack_460);
              iVar16 = (uint)*pbVar14 - (uint)*pbVar1;
              if (iVar16 != 0) break;
              pbVar14 = pbVar14 + 1;
            } while (*pbVar1 != 0);
          }
LAB_18025d16e:
          if (iVar16 == 0) {
            *(uint *)(param_1 + 0x18) =
                 *(uint *)(param_1 + 0x18) | *(uint *)(&processed_var_8184_ptr + lVar20 * 0x10);
            break;
          }
        }
        else if (iStack_458 == 0) goto LAB_18025d16e;
        lVar20 = lVar20 + 1;
        plVar19 = plVar19 + 2;
      } while ((int64_t)plVar19 < 0x18098daa0);
      puStack_468 = &system_state_ptr;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
    puVar15 = *(uint **)(param_2 + 8);
    uVar21 = uStack_478;
  }
  uVar4 = *puVar15;
  *(uint **)(param_2 + 8) = puVar15 + 1;
  FUN_18025c650(param_1 + 0x20,param_2,uVar4);
  if (uVar21 != 0) {
    lVar20 = (int64_t)**(int **)(param_2 + 8);
    *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
    FUN_18025ab30(param_1 + 0x70,lVar20);
    if (0 < lVar20) {
      do {
        uVar6 = (*(uint64_t **)(param_2 + 8))[1];
        puVar2 = (uint64_t *)(*(int64_t *)(param_1 + 0x70) + lVar17);
        *puVar2 = **(uint64_t **)(param_2 + 8);
        puVar2[1] = uVar6;
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 0x10;
        puVar5 = *(int32_t **)(param_2 + 8);
        uVar3 = puVar5[1];
        uVar9 = puVar5[2];
        uVar10 = puVar5[3];
        puVar11 = (int32_t *)(*(int64_t *)(param_1 + 0x70) + 0x10 + lVar17);
        *puVar11 = *puVar5;
        puVar11[1] = uVar3;
        puVar11[2] = uVar9;
        puVar11[3] = uVar10;
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 0x10;
        lVar17 = lVar17 + 0x20;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
  }
  if (1 < uVar21) {
    uVar6 = **(uint64_t **)(param_2 + 8);
    *(uint64_t **)(param_2 + 8) = *(uint64_t **)(param_2 + 8) + 1;
    *(uint64_t *)(param_1 + 0x68) = uVar6;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_498);
}







