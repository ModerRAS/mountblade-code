#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part022.c - 1 个函数

// 函数: void FUN_18026c3f0(uint64_t *param_1,int64_t param_2)
void FUN_18026c3f0(uint64_t *param_1,int64_t param_2)

{
  byte *pbVar1;
  uint uVar2;
  int32_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  byte *pbVar9;
  int32_t *puVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  int64_t lVar14;
  uint64_t uVar15;
  uint uVar16;
  uint64_t uVar17;
  int64_t *plVar18;
  int8_t auStack_498 [32];
  uint64_t uStack_478;
  void *puStack_468;
  byte *pbStack_460;
  int iStack_458;
  byte abStack_450 [1032];
  uint64_t uStack_48;
  
  uStack_478 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_498;
  puVar13 = *(uint **)(param_2 + 8);
  uVar16 = *puVar13;
  *(uint **)(param_2 + 8) = puVar13 + 1;
  uVar7 = *(uint64_t *)(puVar13 + 3);
  *param_1 = *(uint64_t *)(puVar13 + 1);
  param_1[1] = uVar7;
  lVar14 = *(int64_t *)(param_2 + 8);
  puVar8 = (uint64_t *)(lVar14 + 0x10);
  *(uint64_t **)(param_2 + 8) = puVar8;
  uVar7 = *(uint64_t *)(lVar14 + 0x18);
  param_1[2] = *puVar8;
  param_1[3] = uVar7;
  lVar14 = *(int64_t *)(param_2 + 8);
  puVar8 = (uint64_t *)(lVar14 + 0x10);
  *(uint64_t **)(param_2 + 8) = puVar8;
  uVar7 = *(uint64_t *)(lVar14 + 0x18);
  param_1[4] = *puVar8;
  param_1[5] = uVar7;
  lVar14 = *(int64_t *)(param_2 + 8);
  *(int32_t **)(param_2 + 8) = (int32_t *)(lVar14 + 0x10);
  uVar4 = *(int32_t *)(lVar14 + 0x14);
  uVar5 = *(int32_t *)(lVar14 + 0x18);
  uVar6 = *(int32_t *)(lVar14 + 0x1c);
  *(int32_t *)(param_1 + 6) = *(int32_t *)(lVar14 + 0x10);
  *(int32_t *)((int64_t)param_1 + 0x34) = uVar4;
  *(int32_t *)(param_1 + 7) = uVar5;
  *(int32_t *)((int64_t)param_1 + 0x3c) = uVar6;
  lVar14 = *(int64_t *)(param_2 + 8);
  puVar13 = (uint *)(lVar14 + 0x10);
  *(uint **)(param_2 + 8) = puVar13;
  uVar2 = *puVar13;
  lVar14 = lVar14 + 0x14;
  *(int64_t *)(param_2 + 8) = lVar14;
  if (uVar2 != 0) {
    (**(code **)(param_1[8] + 0x18))(param_1 + 8,lVar14,uVar2);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
  }
  FUN_18025a7b0(&processed_var_8880_ptr,param_2,param_1 + 0xc);
  uVar15 = 0;
  puStack_468 = &memory_allocator_336_ptr;
  pbStack_460 = abStack_450;
  iStack_458 = 0;
  abStack_450[0] = 0;
  uVar2 = **(uint **)(param_2 + 8);
  puVar13 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar13;
  if (uVar2 != 0) {
    FUN_180045f60(&puStack_468,puVar13,(uint64_t)uVar2);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
  }
  plVar18 = (int64_t *)0x180bf8eb0;
  uVar17 = uVar15;
  do {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (*(char *)(*plVar18 + lVar14) != '\0');
    iVar12 = (int)lVar14;
    if (iStack_458 == iVar12) {
      if (iStack_458 != 0) {
        pbVar9 = pbStack_460;
        do {
          pbVar1 = pbVar9 + (*plVar18 - (int64_t)pbStack_460);
          iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
          if (iVar12 != 0) break;
          pbVar9 = pbVar9 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18026c58e:
      if (iVar12 == 0) {
        *(int32_t *)((int64_t)param_1 + 100) =
             *(int32_t *)((int64_t)(int)uVar17 * 0x10 + 0x180bf8eb8);
        break;
      }
    }
    else if (iStack_458 == 0) goto LAB_18026c58e;
    uVar17 = (uint64_t)((int)uVar17 + 1);
    plVar18 = plVar18 + 2;
  } while ((int64_t)plVar18 < 0x180bf8ed0);
  puStack_468 = &memory_allocator_336_ptr;
  pbStack_460 = abStack_450;
  iStack_458 = 0;
  abStack_450[0] = 0;
  uVar2 = **(uint **)(param_2 + 8);
  puVar13 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar13;
  if (uVar2 != 0) {
    FUN_180045f60(&puStack_468,puVar13,(uint64_t)uVar2);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
  }
  plVar18 = (int64_t *)0x180bf8ed0;
  uVar17 = uVar15;
  do {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (*(char *)(*plVar18 + lVar14) != '\0');
    iVar12 = (int)lVar14;
    if (iStack_458 == iVar12) {
      if (iStack_458 != 0) {
        pbVar9 = pbStack_460;
        do {
          pbVar1 = pbVar9 + (*plVar18 - (int64_t)pbStack_460);
          iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
          if (iVar12 != 0) break;
          pbVar9 = pbVar9 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18026c687:
      if (iVar12 == 0) {
        *(int32_t *)(param_1 + 0xd) = *(int32_t *)((int64_t)(int)uVar17 * 0x10 + 0x180bf8ed8)
        ;
        break;
      }
    }
    else if (iStack_458 == 0) goto LAB_18026c687;
    uVar17 = (uint64_t)((int)uVar17 + 1);
    plVar18 = plVar18 + 2;
  } while ((int64_t)plVar18 < 0x180bf8f00);
  puStack_468 = &system_state_ptr;
  *(int32_t *)((int64_t)param_1 + 0x6c) = **(int32_t **)(param_2 + 8);
  lVar14 = *(int64_t *)(param_2 + 8);
  *(int32_t *)((int64_t)param_1 + 0x74) = *(int32_t *)(lVar14 + 8);
  *(int32_t *)(param_1 + 0xe) = *(int32_t *)(lVar14 + 0xc);
  *(int32_t **)(param_2 + 8) = (int32_t *)(lVar14 + 0x10);
  *(int32_t *)(param_1 + 0xf) = *(int32_t *)(lVar14 + 0x10);
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)((int64_t)param_1 + 0x7c) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)(param_1 + 0x10) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)((int64_t)param_1 + 0x84) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)(param_1 + 0x11) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)((int64_t)param_1 + 0x8c) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)(param_1 + 0x12) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)((int64_t)param_1 + 0x94) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)(param_1 + 0x13) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)((int64_t)param_1 + 0x9c) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)(param_1 + 0x14) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)((int64_t)param_1 + 0xa4) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)(param_1 + 0x15) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  if (2 < uVar16) {
    *(int32_t *)((int64_t)param_1 + 0xac) = *puVar10;
    puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
    *(int32_t **)(param_2 + 8) = puVar10;
    *(int32_t *)(param_1 + 0x16) = *puVar10;
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
    puVar10 = *(int32_t **)(param_2 + 8);
  }
  *(int32_t *)((int64_t)param_1 + 0xb4) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)(param_1 + 0x17) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)((int64_t)param_1 + 0xbc) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)(param_1 + 0x18) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)((int64_t)param_1 + 0xc4) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)(param_1 + 0x19) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)((int64_t)param_1 + 0xcc) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)(param_1 + 0x1a) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)((int64_t)param_1 + 0xd4) = *puVar10;
  puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar10;
  *(int32_t *)(param_1 + 0x1b) = *puVar10;
  lVar14 = *(int64_t *)(param_2 + 8);
  *(int32_t *)((int64_t)param_1 + 0xdc) = *(int32_t *)(lVar14 + 4);
  *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(lVar14 + 8);
  *(int32_t *)((int64_t)param_1 + 0xe4) = *(int32_t *)(lVar14 + 0xc);
  *(int32_t *)(param_1 + 0x1d) = *(int32_t *)(lVar14 + 0x10);
  *(int32_t *)((int64_t)param_1 + 0xec) = *(int32_t *)(lVar14 + 0x14);
  *(int32_t *)(param_1 + 0x1e) = *(int32_t *)(lVar14 + 0x18);
  *(int32_t *)((int64_t)param_1 + 0xf4) = *(int32_t *)(lVar14 + 0x1c);
  *(int32_t *)(param_1 + 0x1f) = *(int32_t *)(lVar14 + 0x20);
  *(int32_t *)((int64_t)param_1 + 0x104) = *(int32_t *)(lVar14 + 0x2c);
  *(int32_t *)(param_1 + 0x20) = *(int32_t *)(lVar14 + 0x30);
  *(int64_t *)(param_2 + 8) = lVar14 + 0x34;
  FUN_180270120(param_1 + 0x21);
  puVar10 = *(int32_t **)(param_2 + 8);
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  *(int32_t *)(param_1 + 0x27) = *puVar10;
  *(int32_t *)((int64_t)param_1 + 0x13c) = uVar4;
  *(int32_t *)(param_1 + 0x28) = uVar5;
  *(int32_t *)((int64_t)param_1 + 0x144) = uVar6;
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 0x10;
  puStack_468 = &memory_allocator_336_ptr;
  pbStack_460 = abStack_450;
  iStack_458 = 0;
  abStack_450[0] = 0;
  uVar2 = **(uint **)(param_2 + 8);
  puVar13 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar13;
  if (uVar2 != 0) {
    FUN_180045f60(&puStack_468,puVar13,(uint64_t)uVar2);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
  }
  plVar18 = (int64_t *)0x180bf8f70;
  uVar17 = uVar15;
  do {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (*(char *)(*plVar18 + lVar14) != '\0');
    iVar12 = (int)lVar14;
    if (iStack_458 == iVar12) {
      if (iStack_458 != 0) {
        pbVar9 = pbStack_460;
        do {
          pbVar1 = pbVar9 + (*plVar18 - (int64_t)pbStack_460);
          iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
          if (iVar12 != 0) break;
          pbVar9 = pbVar9 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18026ca07:
      if (iVar12 == 0) {
        *(int32_t *)(param_1 + 0x29) =
             *(int32_t *)((int64_t)(int)uVar17 * 0x10 + 0x180bf8f78);
        break;
      }
    }
    else if (iStack_458 == 0) goto LAB_18026ca07;
    uVar17 = (uint64_t)((int)uVar17 + 1);
    plVar18 = plVar18 + 2;
  } while ((int64_t)plVar18 < 0x180bf8fa0);
  puStack_468 = &memory_allocator_336_ptr;
  pbStack_460 = abStack_450;
  iStack_458 = 0;
  abStack_450[0] = 0;
  uVar2 = **(uint **)(param_2 + 8);
  puVar13 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar13;
  if (uVar2 != 0) {
    FUN_180045f60(&puStack_468,puVar13,(uint64_t)uVar2);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
  }
  plVar18 = (int64_t *)0x180bf8f00;
  uVar17 = uVar15;
  do {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (*(char *)(*plVar18 + lVar14) != '\0');
    iVar12 = (int)lVar14;
    if (iStack_458 == iVar12) {
      if (iStack_458 != 0) {
        pbVar9 = pbStack_460;
        do {
          pbVar1 = pbVar9 + (*plVar18 - (int64_t)pbStack_460);
          iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
          if (iVar12 != 0) break;
          pbVar9 = pbVar9 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18026cafa:
      if (iVar12 == 0) {
        *(int32_t *)((int64_t)param_1 + 0x14c) =
             *(int32_t *)((int64_t)(int)uVar17 * 0x10 + 0x180bf8f08);
        break;
      }
    }
    else if (iStack_458 == 0) goto LAB_18026cafa;
    uVar17 = (uint64_t)((int)uVar17 + 1);
    plVar18 = plVar18 + 2;
  } while ((int64_t)plVar18 < 0x180bf8f20);
  if (1 < uVar16) {
    puStack_468 = &memory_allocator_336_ptr;
    pbStack_460 = abStack_450;
    iStack_458 = 0;
    abStack_450[0] = 0;
    uVar2 = **(uint **)(param_2 + 8);
    puVar13 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar13;
    if (uVar2 != 0) {
      FUN_180045f60(&puStack_468,puVar13,(uint64_t)uVar2);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
    }
    plVar18 = (int64_t *)0x180bf8fd0;
    uVar17 = uVar15;
    do {
      lVar14 = -1;
      do {
        lVar14 = lVar14 + 1;
      } while (*(char *)(*plVar18 + lVar14) != '\0');
      iVar12 = (int)lVar14;
      if (iStack_458 == iVar12) {
        if (iStack_458 != 0) {
          pbVar9 = pbStack_460;
          do {
            pbVar1 = pbVar9 + (*plVar18 - (int64_t)pbStack_460);
            iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
            if (iVar12 != 0) break;
            pbVar9 = pbVar9 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18026cbfa:
        if (iVar12 == 0) {
          *(int32_t *)(param_1 + 0x2a) =
               *(int32_t *)((int64_t)(int)uVar17 * 0x10 + 0x180bf8fd8);
          break;
        }
      }
      else if (iStack_458 == 0) goto LAB_18026cbfa;
      uVar17 = (uint64_t)((int)uVar17 + 1);
      plVar18 = plVar18 + 2;
    } while ((int64_t)plVar18 < 0x180bf8ff0);
  }
  puStack_468 = &system_state_ptr;
  lVar14 = *(int64_t *)(param_2 + 8);
  *(int32_t *)((int64_t)param_1 + 0x15c) = *(int32_t *)(lVar14 + 8);
  *(int32_t *)(param_1 + 0x2b) = *(int32_t *)(lVar14 + 0xc);
  *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x2c);
  lVar14 = *(int64_t *)(param_2 + 8);
  *(int32_t *)((int64_t)param_1 + 0x194) = *(int32_t *)(lVar14 + 8);
  *(int32_t *)(param_1 + 0x32) = *(int32_t *)(lVar14 + 0xc);
  *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x33);
  lVar14 = *(int64_t *)(param_2 + 8);
  *(int32_t *)((int64_t)param_1 + 0x1cc) = *(int32_t *)(lVar14 + 8);
  *(int32_t *)(param_1 + 0x39) = *(int32_t *)(lVar14 + 0xc);
  *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x3a);
  lVar14 = *(int64_t *)(param_2 + 8);
  *(int32_t *)((int64_t)param_1 + 0x204) = *(int32_t *)(lVar14 + 8);
  *(int32_t *)(param_1 + 0x40) = *(int32_t *)(lVar14 + 0xc);
  *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x41);
  lVar14 = *(int64_t *)(param_2 + 8);
  *(int32_t *)((int64_t)param_1 + 0x23c) = *(int32_t *)(lVar14 + 8);
  *(int32_t *)(param_1 + 0x47) = *(int32_t *)(lVar14 + 0xc);
  *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x48);
  lVar14 = *(int64_t *)(param_2 + 8);
  *(int32_t *)((int64_t)param_1 + 0x274) = *(int32_t *)(lVar14 + 8);
  *(int32_t *)(param_1 + 0x4e) = *(int32_t *)(lVar14 + 0xc);
  *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x4f);
  FUN_180270120(param_1 + 0x55);
  lVar14 = *(int64_t *)(param_2 + 8);
  *(int32_t *)((int64_t)param_1 + 0x2dc) = *(int32_t *)(lVar14 + 8);
  *(int32_t *)(param_1 + 0x5b) = *(int32_t *)(lVar14 + 0xc);
  *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x5c);
  lVar14 = *(int64_t *)(param_2 + 8);
  *(int32_t *)((int64_t)param_1 + 0x314) = *(int32_t *)(lVar14 + 8);
  *(int32_t *)(param_1 + 0x62) = *(int32_t *)(lVar14 + 0xc);
  *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 99);
  lVar14 = *(int64_t *)(param_2 + 8);
  *(int32_t *)((int64_t)param_1 + 0x34c) = *(int32_t *)(lVar14 + 8);
  *(int32_t *)(param_1 + 0x69) = *(int32_t *)(lVar14 + 0xc);
  *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x6a);
  lVar14 = *(int64_t *)(param_2 + 8);
  *(int32_t *)((int64_t)param_1 + 900) = *(int32_t *)(lVar14 + 8);
  *(int32_t *)(param_1 + 0x70) = *(int32_t *)(lVar14 + 0xc);
  *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x71);
  lVar14 = *(int64_t *)(param_2 + 8);
  *(int32_t *)((int64_t)param_1 + 0x3bc) = *(int32_t *)(lVar14 + 8);
  *(int32_t *)(param_1 + 0x77) = *(int32_t *)(lVar14 + 0xc);
  *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x78);
  lVar14 = *(int64_t *)(param_2 + 8);
  *(int32_t *)((int64_t)param_1 + 0x3f4) = *(int32_t *)(lVar14 + 8);
  *(int32_t *)(param_1 + 0x7e) = *(int32_t *)(lVar14 + 0xc);
  *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x7f);
  if (uVar16 != 0) {
    lVar14 = *(int64_t *)(param_2 + 8);
    *(int32_t *)((int64_t)param_1 + 0x42c) = *(int32_t *)(lVar14 + 8);
    *(int32_t *)(param_1 + 0x85) = *(int32_t *)(lVar14 + 0xc);
    *(int64_t *)(param_2 + 8) = lVar14 + 0x10;
    FUN_180270120(param_1 + 0x86);
  }
  lVar14 = *(int64_t *)(param_2 + 8);
  *(int32_t *)((int64_t)param_1 + 0x464) = *(int32_t *)(lVar14 + 4);
  *(int32_t *)(param_1 + 0x8c) = *(int32_t *)(lVar14 + 8);
  *(int32_t *)((int64_t)param_1 + 0x46c) = *(int32_t *)(lVar14 + 0x10);
  *(int32_t *)(param_1 + 0x8d) = *(int32_t *)(lVar14 + 0x14);
  *(int32_t *)((int64_t)param_1 + 0x474) = *(int32_t *)(lVar14 + 0x1c);
  *(int32_t *)(param_1 + 0x8e) = *(int32_t *)(lVar14 + 0x20);
  *(int64_t *)(param_2 + 8) = lVar14 + 0x24;
  puStack_468 = &memory_allocator_336_ptr;
  pbStack_460 = abStack_450;
  iStack_458 = 0;
  abStack_450[0] = 0;
  uVar16 = **(uint **)(param_2 + 8);
  puVar13 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar13;
  if (uVar16 != 0) {
    FUN_180045f60(&puStack_468,puVar13,(uint64_t)uVar16);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar16;
  }
  plVar18 = (int64_t *)0x180bf8f20;
  uVar17 = uVar15;
  do {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (*(char *)(*plVar18 + lVar14) != '\0');
    iVar12 = (int)lVar14;
    if (iStack_458 == iVar12) {
      if (iStack_458 != 0) {
        pbVar9 = pbStack_460;
        do {
          pbVar1 = pbVar9 + (*plVar18 - (int64_t)pbStack_460);
          iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
          if (iVar12 != 0) break;
          pbVar9 = pbVar9 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18026cf9a:
      if (iVar12 == 0) {
        *(int32_t *)(param_1 + 0x8f) =
             *(int32_t *)((int64_t)(int)uVar17 * 0x10 + 0x180bf8f28);
        break;
      }
    }
    else if (iStack_458 == 0) goto LAB_18026cf9a;
    uVar17 = (uint64_t)((int)uVar17 + 1);
    plVar18 = plVar18 + 2;
  } while ((int64_t)plVar18 < 0x180bf8f70);
  puStack_468 = &memory_allocator_336_ptr;
  pbStack_460 = abStack_450;
  iStack_458 = 0;
  abStack_450[0] = 0;
  uVar16 = **(uint **)(param_2 + 8);
  puVar13 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar13;
  if (uVar16 != 0) {
    FUN_180045f60(&puStack_468,puVar13,(uint64_t)uVar16);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar16;
  }
  plVar18 = (int64_t *)0x180bf8fa0;
  uVar17 = uVar15;
  do {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (*(char *)(*plVar18 + lVar14) != '\0');
    iVar12 = (int)lVar14;
    if (iStack_458 == iVar12) {
      if (iStack_458 != 0) {
        pbVar9 = pbStack_460;
        do {
          pbVar1 = pbVar9 + (*plVar18 - (int64_t)pbStack_460);
          iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
          if (iVar12 != 0) break;
          pbVar9 = pbVar9 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18026d094:
      if (iVar12 == 0) {
        *(int32_t *)((int64_t)param_1 + 0x47c) =
             *(int32_t *)((int64_t)(int)uVar17 * 0x10 + 0x180bf8fa8);
        goto LAB_18026d0a6;
      }
    }
    else if (iStack_458 == 0) goto LAB_18026d094;
    uVar17 = (uint64_t)((int)uVar17 + 1);
    plVar18 = plVar18 + 2;
    if (0x180bf8fcf < (int64_t)plVar18) {
LAB_18026d0a6:
      puStack_468 = &system_state_ptr;
      FUN_18026fc50(param_1 + 0x90,param_2);
      puVar10 = *(int32_t **)(param_2 + 8);
      *(int32_t *)(param_1 + 0xfc) = *puVar10;
      *(int32_t *)((int64_t)param_1 + 0x7e4) = puVar10[1];
      *(int32_t *)(param_1 + 0xfd) = puVar10[2];
      *(int32_t *)((int64_t)param_1 + 0x7ec) = puVar10[3];
      *(int32_t **)(param_2 + 8) = puVar10 + 4;
      *(int32_t *)(param_1 + 0xfe) = puVar10[4];
      puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
      *(int32_t **)(param_2 + 8) = puVar10;
      *(int32_t *)((int64_t)param_1 + 0x7f4) = *puVar10;
      puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
      *(int32_t **)(param_2 + 8) = puVar10;
      *(int32_t *)(param_1 + 0xff) = *puVar10;
      puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
      *(int32_t **)(param_2 + 8) = puVar10;
      *(int32_t *)((int64_t)param_1 + 0x7fc) = *puVar10;
      lVar14 = *(int64_t *)(param_2 + 8);
      *(int32_t *)(param_1 + 0x100) = *(int32_t *)(lVar14 + 4);
      *(int32_t *)((int64_t)param_1 + 0x804) = *(int32_t *)(lVar14 + 8);
      *(int32_t *)(param_1 + 0x101) = *(int32_t *)(lVar14 + 0xc);
      *(int32_t *)((int64_t)param_1 + 0x80c) = *(int32_t *)(lVar14 + 0x10);
      *(int32_t *)(param_1 + 0x102) = *(int32_t *)(lVar14 + 0x14);
      *(int32_t *)((int64_t)param_1 + 0x814) = *(int32_t *)(lVar14 + 0x18);
      *(int32_t *)(param_1 + 0x103) = *(int32_t *)(lVar14 + 0x1c);
      *(int32_t *)((int64_t)param_1 + 0x81c) = *(int32_t *)(lVar14 + 0x20);
      *(int32_t *)(param_1 + 0x104) = *(int32_t *)(lVar14 + 0x24);
      *(int32_t *)((int64_t)param_1 + 0x824) = *(int32_t *)(lVar14 + 0x28);
      *(int32_t *)(param_1 + 0x105) = *(int32_t *)(lVar14 + 0x2c);
      *(int32_t *)((int64_t)param_1 + 0x82c) = *(int32_t *)(lVar14 + 0x30);
      *(int32_t *)(param_1 + 0x106) = *(int32_t *)(lVar14 + 0x34);
      *(int32_t *)((int64_t)param_1 + 0x834) = *(int32_t *)(lVar14 + 0x38);
      *(int32_t *)(param_1 + 0x107) = *(int32_t *)(lVar14 + 0x3c);
      *(int32_t *)((int64_t)param_1 + 0x83c) = *(int32_t *)(lVar14 + 0x40);
      *(int32_t *)(param_1 + 0x108) = *(int32_t *)(lVar14 + 0x44);
      *(int32_t *)((int64_t)param_1 + 0x844) = *(int32_t *)(lVar14 + 0x48);
      *(int32_t *)(param_1 + 0x109) = *(int32_t *)(lVar14 + 0x4c);
      *(int32_t *)((int64_t)param_1 + 0x84c) = *(int32_t *)(lVar14 + 0x50);
      *(int32_t **)(param_2 + 8) = (int32_t *)(lVar14 + 0x54);
      *(int32_t *)(param_1 + 0x10a) = *(int32_t *)(lVar14 + 0x54);
      puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
      *(int32_t **)(param_2 + 8) = puVar10;
      *(int32_t *)((int64_t)param_1 + 0x854) = *puVar10;
      puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
      *(int32_t **)(param_2 + 8) = puVar10;
      *(int32_t *)(param_1 + 0x10b) = *puVar10;
      puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
      *(int32_t **)(param_2 + 8) = puVar10;
      *(int32_t *)((int64_t)param_1 + 0x85c) = *puVar10;
      puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
      *(int32_t **)(param_2 + 8) = puVar10;
      *(int32_t *)(param_1 + 0x10c) = *puVar10;
      lVar14 = *(int64_t *)(param_2 + 8);
      piVar11 = (int *)(lVar14 + 4);
      *(int **)(param_2 + 8) = piVar11;
      iVar12 = *piVar11;
      *(int64_t *)(param_2 + 8) = lVar14 + 8;
      plVar18 = param_1 + 0x10d;
      FUN_180080aa0(plVar18,(int64_t)iVar12);
      uVar17 = uVar15;
      if (param_1[0x10e] - *plVar18 >> 4 == 0) {
        puVar10 = *(int32_t **)(param_2 + 8);
      }
      else {
        do {
          puVar3 = *(int32_t **)(param_2 + 8);
          uVar4 = puVar3[1];
          uVar5 = puVar3[2];
          uVar6 = puVar3[3];
          puVar10 = (int32_t *)(uVar15 + *plVar18);
          *puVar10 = *puVar3;
          puVar10[1] = uVar4;
          puVar10[2] = uVar5;
          puVar10[3] = uVar6;
          puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 0x10);
          *(int32_t **)(param_2 + 8) = puVar10;
          uVar16 = (int)uVar17 + 1;
          uVar15 = uVar15 + 0x10;
          uVar17 = (uint64_t)uVar16;
        } while ((uint64_t)(int64_t)(int)uVar16 < (uint64_t)(param_1[0x10e] - *plVar18 >> 4));
      }
      *(int32_t *)(param_1 + 0x111) = *puVar10;
      *(int32_t *)((int64_t)param_1 + 0x88c) = puVar10[1];
      *(int32_t *)(param_1 + 0x112) = puVar10[2];
      *(int32_t *)((int64_t)param_1 + 0x894) = puVar10[3];
      *(int32_t *)(param_1 + 0x113) = puVar10[4];
      *(int32_t *)((int64_t)param_1 + 0x89c) = puVar10[5];
      *(int32_t *)(param_1 + 0x114) = puVar10[6];
      *(int32_t *)((int64_t)param_1 + 0x8a4) = puVar10[7];
      *(int32_t **)(param_2 + 8) = puVar10 + 8;
      *(int32_t *)(param_1 + 0x115) = puVar10[8];
      puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
      *(int32_t **)(param_2 + 8) = puVar10;
      *(int32_t *)((int64_t)param_1 + 0x8ac) = *puVar10;
      puVar10 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
      *(int32_t **)(param_2 + 8) = puVar10;
      *(int32_t *)(param_1 + 0x116) = *puVar10;
      lVar14 = *(int64_t *)(param_2 + 8);
      puVar13 = (uint *)(lVar14 + 4);
      *(uint **)(param_2 + 8) = puVar13;
      uVar16 = *puVar13;
      puVar13 = (uint *)(lVar14 + 8);
      *(uint **)(param_2 + 8) = puVar13;
      if (uVar16 != 0) {
        (**(code **)(param_1[0x117] + 0x18))(param_1 + 0x117,puVar13,uVar16);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar16;
        puVar13 = *(uint **)(param_2 + 8);
      }
      uVar16 = *puVar13;
      puVar13 = puVar13 + 1;
      *(uint **)(param_2 + 8) = puVar13;
      if (uVar16 != 0) {
        (**(code **)(param_1[0x11b] + 0x18))(param_1 + 0x11b,puVar13,uVar16);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar16;
        puVar13 = *(uint **)(param_2 + 8);
      }
      *(uint *)(param_1 + 0x11f) = *puVar13;
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_498);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




