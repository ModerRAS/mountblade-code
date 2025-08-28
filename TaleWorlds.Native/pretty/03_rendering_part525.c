#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part525.c - 8 个函数

// 函数: void FUN_1805521f0(int64_t *param_1,int64_t param_2)
void FUN_1805521f0(int64_t *param_1,int64_t param_2)

{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  int64_t lVar10;
  byte *pbVar11;
  int64_t lVar12;
  int iVar13;
  char *pcVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  char *pcVar17;
  int64_t *plVar18;
  uint64_t *puVar19;
  int64_t lStackX_10;
  int8_t auStackX_18 [16];
  void *puStack_60;
  byte *pbStack_58;
  int iStack_50;
  uint64_t uStack_48;
  
  if (param_2 == 0) {
    return;
  }
  pcVar14 = "item_usage_set";
  do {
    pcVar17 = pcVar14;
    pcVar14 = pcVar17 + 1;
  } while (*pcVar14 != '\0');
  for (puVar19 = *(uint64_t **)(param_2 + 0x30); lStackX_10 = param_2,
      puVar19 != (uint64_t *)0x0; puVar19 = (uint64_t *)puVar19[0xb]) {
    pcVar14 = (char *)*puVar19;
    if (pcVar14 == (char *)0x0) {
      pcVar14 = (char *)0x180d48d24;
      pcVar7 = (char *)0x0;
    }
    else {
      pcVar7 = (char *)puVar19[2];
    }
    if (pcVar7 == pcVar17 + -0x180a34c9f) {
      pcVar7 = pcVar7 + (int64_t)pcVar14;
      if (pcVar7 <= pcVar14) goto LAB_1805522b0;
      lVar10 = (int64_t)&unknown_var_2928_ptr - (int64_t)pcVar14;
      while (*pcVar14 == pcVar14[lVar10]) {
        pcVar14 = pcVar14 + 1;
        if (pcVar7 <= pcVar14) goto LAB_1805522b0;
      }
    }
  }
  goto LAB_18055255b;
LAB_1805522b0:
  do {
    puStack_60 = &system_data_buffer_ptr;
    uStack_48 = 0;
    pbStack_58 = (byte *)0x0;
    iStack_50 = 0;
    pcVar14 = "id";
    do {
      pcVar17 = pcVar14;
      pcVar14 = pcVar17 + 1;
    } while (*pcVar14 != '\0');
    for (puVar16 = (uint64_t *)puVar19[8]; puVar16 != (uint64_t *)0x0;
        puVar16 = (uint64_t *)puVar16[6]) {
      pcVar14 = (char *)*puVar16;
      if (pcVar14 == (char *)0x0) {
        pcVar14 = (char *)0x180d48d24;
        pcVar7 = (char *)0x0;
      }
      else {
        pcVar7 = (char *)puVar16[2];
      }
      if (pcVar7 == pcVar17 + -0x180a0ae27) {
        pcVar7 = pcVar7 + (int64_t)pcVar14;
        if (pcVar7 <= pcVar14) {
LAB_180552330:
          lVar10 = 0x180d48d24;
          if (puVar16[1] != 0) {
            lVar10 = puVar16[1];
          }
          FUN_180627c50(&puStack_60,lVar10);
          break;
        }
        lVar10 = (int64_t)&unknown_var_1288_ptr - (int64_t)pcVar14;
        while (*pcVar14 == pcVar14[lVar10]) {
          pcVar14 = pcVar14 + 1;
          if (pcVar7 <= pcVar14) goto LAB_180552330;
        }
      }
    }
    lVar10 = *param_1;
    puVar16 = (uint64_t *)param_1[2];
    puVar5 = puVar16;
    puVar3 = (uint64_t *)puVar16[2];
    while (puVar4 = puVar5, puVar3 != (uint64_t *)0x0) {
      if (iStack_50 == 0) {
        bVar2 = false;
        puVar15 = (uint64_t *)puVar3[1];
      }
      else {
        if (*(int *)(puVar3 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar11 = pbStack_58;
          do {
            uVar9 = (uint)pbVar11[puVar3[5] - (int64_t)pbStack_58];
            iVar13 = *pbVar11 - uVar9;
            if (*pbVar11 != uVar9) break;
            pbVar11 = pbVar11 + 1;
          } while (uVar9 != 0);
          bVar2 = 0 < iVar13;
          if (iVar13 < 1) {
            puVar15 = (uint64_t *)puVar3[1];
            goto LAB_1805523bb;
          }
        }
        puVar15 = (uint64_t *)*puVar3;
      }
LAB_1805523bb:
      puVar5 = puVar3;
      puVar3 = puVar15;
      if (bVar2) {
        puVar5 = puVar4;
      }
    }
    if (puVar4 == puVar16) {
LAB_1805523fb:
      puVar4 = (uint64_t *)FUN_1800c2ab0(puVar16,auStackX_18);
      puVar4 = (uint64_t *)*puVar4;
    }
    else if (*(int *)(puVar4 + 6) != 0) {
      if (iStack_50 != 0) {
        pbVar11 = (byte *)puVar4[5];
        lVar12 = (int64_t)pbStack_58 - (int64_t)pbVar11;
        do {
          bVar1 = *pbVar11;
          uVar9 = (uint)pbVar11[lVar12];
          if (bVar1 != uVar9) break;
          pbVar11 = pbVar11 + 1;
        } while (uVar9 != 0);
        if ((int)(bVar1 - uVar9) < 1) goto LAB_180552416;
      }
      goto LAB_1805523fb;
    }
LAB_180552416:
    plVar18 = (int64_t *)((int64_t)*(int *)(puVar4 + 8) * 0x170 + lVar10);
    pcVar14 = "id";
    do {
      pcVar17 = pcVar14;
      pcVar14 = pcVar17 + 1;
    } while (*pcVar14 != '\0');
    for (puVar16 = (uint64_t *)puVar19[8]; puVar16 != (uint64_t *)0x0;
        puVar16 = (uint64_t *)puVar16[6]) {
      pcVar14 = (char *)*puVar16;
      if (pcVar14 == (char *)0x0) {
        pcVar7 = (char *)0x0;
        pcVar14 = (char *)0x180d48d24;
      }
      else {
        pcVar7 = (char *)puVar16[2];
      }
      if (pcVar7 == pcVar17 + -0x180a0ae27) {
        pcVar7 = pcVar7 + (int64_t)pcVar14;
        if (pcVar7 <= pcVar14) {
LAB_180552487:
          lVar10 = 0x180d48d24;
          if (puVar16[1] != 0) {
            lVar10 = puVar16[1];
          }
          (**(code **)(*plVar18 + 0x10))(plVar18,lVar10);
          break;
        }
        lVar10 = (int64_t)&unknown_var_1288_ptr - (int64_t)pcVar14;
        while (*pcVar14 == pcVar14[lVar10]) {
          pcVar14 = pcVar14 + 1;
          if (pcVar7 <= pcVar14) goto LAB_180552487;
        }
      }
    }
    puStack_60 = &system_data_buffer_ptr;
    if (pbStack_58 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    pcVar14 = "item_usage_set";
    do {
      pcVar17 = pcVar14;
      pcVar14 = pcVar17 + 1;
    } while (*pcVar14 != '\0');
    while (puVar19 = (uint64_t *)puVar19[0xb], puVar19 != (uint64_t *)0x0) {
      pcVar14 = (char *)*puVar19;
      if (pcVar14 == (char *)0x0) {
        pcVar14 = (char *)0x180d48d24;
        pcVar7 = (char *)0x0;
      }
      else {
        pcVar7 = (char *)puVar19[2];
      }
      if (pcVar7 == pcVar17 + -0x180a34c9f) {
        pcVar7 = pcVar14 + (int64_t)pcVar7;
        if (pcVar7 <= pcVar14) goto LAB_180552539;
        lVar10 = (int64_t)&unknown_var_2928_ptr - (int64_t)pcVar14;
        while (*pcVar14 == pcVar14[lVar10]) {
          pcVar14 = pcVar14 + 1;
          if (pcVar7 <= pcVar14) goto LAB_180552539;
        }
      }
    }
    puVar19 = (uint64_t *)0x0;
LAB_180552539:
  } while (puVar19 != (uint64_t *)0x0);
LAB_18055255b:
  pcVar14 = "item_usage_set";
  do {
    pcVar17 = pcVar14;
    pcVar14 = pcVar17 + 1;
  } while (*pcVar14 != '\0');
  pcVar14 = *(char **)(lStackX_10 + 0x30);
  do {
    if (pcVar14 == (char *)0x0) {
      return;
    }
    pcVar7 = *(char **)pcVar14;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x180d48d24;
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar6 = *(char **)(pcVar14 + 0x10);
    }
    if (pcVar6 == pcVar17 + -0x180a34c9f) {
      pcVar6 = pcVar6 + (int64_t)pcVar7;
      if (pcVar6 <= pcVar7) break;
      lVar10 = (int64_t)&unknown_var_2928_ptr - (int64_t)pcVar7;
      while (*pcVar7 == pcVar7[lVar10]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar6 <= pcVar7) goto LAB_1805525b0;
      }
    }
    pcVar14 = *(char **)(pcVar14 + 0x58);
  } while( true );
LAB_1805525b0:
  puStack_60 = &system_data_buffer_ptr;
  uStack_48 = 0;
  pbStack_58 = (byte *)0x0;
  iStack_50 = 0;
  pcVar17 = "id";
  do {
    pcVar7 = pcVar17;
    pcVar17 = pcVar7 + 1;
  } while (*pcVar17 != '\0');
  for (puVar19 = *(uint64_t **)(pcVar14 + 0x40); puVar19 != (uint64_t *)0x0;
      puVar19 = (uint64_t *)puVar19[6]) {
    pcVar17 = (char *)*puVar19;
    if (pcVar17 == (char *)0x0) {
      pcVar17 = (char *)0x180d48d24;
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar6 = (char *)puVar19[2];
    }
    if (pcVar6 == pcVar7 + -0x180a0ae27) {
      pcVar6 = pcVar6 + (int64_t)pcVar17;
      if (pcVar6 <= pcVar17) {
LAB_180552630:
        lVar10 = 0x180d48d24;
        if (puVar19[1] != 0) {
          lVar10 = puVar19[1];
        }
        FUN_180627c50(&puStack_60,lVar10);
        break;
      }
      lVar10 = (int64_t)&unknown_var_1288_ptr - (int64_t)pcVar17;
      while (*pcVar17 == pcVar17[lVar10]) {
        pcVar17 = pcVar17 + 1;
        if (pcVar6 <= pcVar17) goto LAB_180552630;
      }
    }
  }
  lVar10 = *param_1;
  puVar19 = (uint64_t *)param_1[2];
  puVar3 = puVar19;
  puVar16 = (uint64_t *)puVar19[2];
  while (puVar5 = puVar3, puVar16 != (uint64_t *)0x0) {
    if (iStack_50 == 0) {
      bVar2 = false;
      puVar4 = (uint64_t *)puVar16[1];
    }
    else {
      if (*(int *)(puVar16 + 6) == 0) {
        bVar2 = true;
      }
      else {
        pbVar11 = pbStack_58;
        do {
          uVar9 = (uint)pbVar11[puVar16[5] - (int64_t)pbStack_58];
          iVar13 = *pbVar11 - uVar9;
          if (*pbVar11 != uVar9) break;
          pbVar11 = pbVar11 + 1;
        } while (uVar9 != 0);
        bVar2 = 0 < iVar13;
        if (iVar13 < 1) {
          puVar4 = (uint64_t *)puVar16[1];
          goto LAB_1805526bb;
        }
      }
      puVar4 = (uint64_t *)*puVar16;
    }
LAB_1805526bb:
    puVar3 = puVar16;
    puVar16 = puVar4;
    if (bVar2) {
      puVar3 = puVar5;
    }
  }
  if (puVar5 == puVar19) {
LAB_1805526fb:
    puVar5 = (uint64_t *)FUN_1800c2ab0(puVar19,&lStackX_10);
    puVar5 = (uint64_t *)*puVar5;
  }
  else if (*(int *)(puVar5 + 6) != 0) {
    if (iStack_50 != 0) {
      pbVar11 = (byte *)puVar5[5];
      lVar12 = (int64_t)pbStack_58 - (int64_t)pbVar11;
      do {
        bVar1 = *pbVar11;
        uVar9 = (uint)pbVar11[lVar12];
        if (bVar1 != uVar9) break;
        pbVar11 = pbVar11 + 1;
      } while (uVar9 != 0);
      if ((int)(bVar1 - uVar9) < 1) goto LAB_180552716;
    }
    goto LAB_1805526fb;
  }
LAB_180552716:
  FUN_18054cb10((int64_t)*(int *)(puVar5 + 8) * 0x170 + lVar10,pcVar14);
  puStack_60 = &system_data_buffer_ptr;
  if (pbStack_58 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  pcVar17 = "item_usage_set";
  do {
    pcVar7 = pcVar17;
    pcVar17 = pcVar7 + 1;
  } while (*pcVar17 != '\0');
  for (pcVar17 = *(char **)(pcVar14 + 0x58); pcVar14 = (char *)0x0, pcVar17 != (char *)0x0;
      pcVar17 = *(char **)(pcVar17 + 0x58)) {
    pcVar6 = *(char **)pcVar17;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)0x180d48d24;
      pcVar8 = (char *)0x0;
    }
    else {
      pcVar8 = *(char **)(pcVar17 + 0x10);
    }
    if (pcVar8 == pcVar7 + -0x180a34c9f) {
      pcVar8 = pcVar8 + (int64_t)pcVar6;
      pcVar14 = pcVar17;
      if (pcVar8 <= pcVar6) break;
      lVar10 = (int64_t)&unknown_var_2928_ptr - (int64_t)pcVar6;
      while (*pcVar6 == pcVar6[lVar10]) {
        pcVar6 = pcVar6 + 1;
        if (pcVar8 <= pcVar6) goto LAB_1805527cc;
      }
    }
  }
LAB_1805527cc:
  if (pcVar14 == (char *)0x0) {
    return;
  }
  goto LAB_1805525b0;
}



int FUN_180552800(int64_t *param_1,int64_t param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  void *puVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int iVar9;
  
  iVar9 = 0;
  if (0 < (int)param_1[1]) {
    iVar2 = *(int *)(param_2 + 0x10);
    puVar8 = (uint64_t *)(*param_1 + 8);
    do {
      iVar3 = *(int *)(puVar8 + 1);
      iVar5 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar4 = (byte *)*puVar8;
          lVar7 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar7;
            iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar5 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18055285e:
        if (iVar5 == 0) {
          return iVar9;
        }
      }
      else if (iVar3 == 0) goto LAB_18055285e;
      iVar9 = iVar9 + 1;
      puVar8 = puVar8 + 0x2e;
    } while (iVar9 < (int)param_1[1]);
  }
  puVar6 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar6 = *(void **)(param_2 + 8);
  }
  SystemDataInitializer(&unknown_var_2984_ptr,puVar6);
  return -1;
}





// 函数: void FUN_1805528b0(int32_t *param_1,int64_t param_2)
void FUN_1805528b0(int32_t *param_1,int64_t param_2)

{
  int32_t uVar1;
  char *pcVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  void *puStack_40;
  int64_t lStack_38;
  int iStack_30;
  uint64_t uStack_28;
  
  pcVar7 = (char *)0x0;
  puStack_40 = &system_data_buffer_ptr;
  uStack_28 = 0;
  lStack_38 = 0;
  iStack_30 = 0;
  *param_1 = 0xffffffff;
  pcVar5 = "release_action";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  for (puVar4 = *(uint64_t **)(param_2 + 0x40); puVar4 != (uint64_t *)0x0;
      puVar4 = (uint64_t *)puVar4[6]) {
    pcVar5 = (char *)*puVar4;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x180d48d24;
      pcVar2 = pcVar7;
    }
    else {
      pcVar2 = (char *)puVar4[2];
    }
    if (pcVar2 == pcVar6 + -0x180a348e7) {
      pcVar2 = pcVar2 + (int64_t)pcVar5;
      if (pcVar2 <= pcVar5) {
LAB_180552978:
        lVar3 = 0x180d48d24;
        if (puVar4[1] != 0) {
          lVar3 = puVar4[1];
        }
        FUN_180627c50(&puStack_40,lVar3,pcVar2,puVar4,0xfffffffffffffffe);
        break;
      }
      lVar3 = (int64_t)&unknown_var_1976_ptr - (int64_t)pcVar5;
      while (*pcVar5 == pcVar5[lVar3]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar2 <= pcVar5) goto LAB_180552978;
      }
    }
  }
  if (0 < iStack_30) {
    uVar1 = FUN_18055b2f0(&system_data_6150,&puStack_40);
    *param_1 = uVar1;
  }
  param_1[1] = 0xffffffff;
  pcVar5 = "hit_action";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  for (puVar4 = *(uint64_t **)(param_2 + 0x40); puVar4 != (uint64_t *)0x0;
      puVar4 = (uint64_t *)puVar4[6]) {
    pcVar5 = (char *)*puVar4;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x180d48d24;
      pcVar2 = pcVar7;
    }
    else {
      pcVar2 = (char *)puVar4[2];
    }
    if (pcVar2 == pcVar6 + -0x180a34cc7) {
      pcVar2 = pcVar5 + (int64_t)pcVar2;
      if (pcVar2 <= pcVar5) {
LAB_180552a20:
        lVar3 = 0x180d48d24;
        if (puVar4[1] != 0) {
          lVar3 = puVar4[1];
        }
        (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar3);
        break;
      }
      lVar3 = (int64_t)&unknown_var_2968_ptr - (int64_t)pcVar5;
      while (*pcVar5 == pcVar5[lVar3]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar2 <= pcVar5) goto LAB_180552a20;
      }
    }
  }
  if (0 < iStack_30) {
    uVar1 = FUN_18055b2f0(&system_data_6150,&puStack_40);
    param_1[1] = uVar1;
  }
  param_1[2] = 0xffffffff;
  pcVar5 = "hit_agent_action";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  for (puVar4 = *(uint64_t **)(param_2 + 0x40); puVar4 != (uint64_t *)0x0;
      puVar4 = (uint64_t *)puVar4[6]) {
    pcVar5 = (char *)*puVar4;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x180d48d24;
      pcVar2 = pcVar7;
    }
    else {
      pcVar2 = (char *)puVar4[2];
    }
    if (pcVar2 == pcVar6 + -0x180a34c87) {
      pcVar2 = pcVar2 + (int64_t)pcVar5;
      if (pcVar2 <= pcVar5) {
LAB_180552ac0:
        lVar3 = 0x180d48d24;
        if (puVar4[1] != 0) {
          lVar3 = puVar4[1];
        }
        (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar3);
        break;
      }
      lVar3 = (int64_t)&unknown_var_2904_ptr - (int64_t)pcVar5;
      while (*pcVar5 == pcVar5[lVar3]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar2 <= pcVar5) goto LAB_180552ac0;
      }
    }
  }
  if (0 < iStack_30) {
    uVar1 = FUN_18055b2f0(&system_data_6150,&puStack_40);
    param_1[2] = uVar1;
  }
  param_1[3] = 0xffffffff;
  pcVar5 = "miss_step_back_action";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  puVar4 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar4 == (uint64_t *)0x0) {
LAB_180552b7d:
      if (0 < iStack_30) {
        uVar1 = FUN_18055b2f0(&system_data_6150,&puStack_40);
        param_1[3] = uVar1;
      }
      *(int8_t *)(param_1 + 4) = 0;
      FUN_180631000(param_2,&unknown_var_1800_ptr);
      puStack_40 = &system_data_buffer_ptr;
      if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      return;
    }
    pcVar5 = (char *)*puVar4;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x180d48d24;
      pcVar2 = pcVar7;
    }
    else {
      pcVar2 = (char *)puVar4[2];
    }
    if (pcVar2 == pcVar6 + -0x180a34c6f) {
      pcVar2 = pcVar2 + (int64_t)pcVar5;
      if (pcVar2 <= pcVar5) {
LAB_180552b64:
        lVar3 = 0x180d48d24;
        if (puVar4[1] != 0) {
          lVar3 = puVar4[1];
        }
        (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar3);
        goto LAB_180552b7d;
      }
      lVar3 = (int64_t)&unknown_var_2880_ptr - (int64_t)pcVar5;
      while (*pcVar5 == pcVar5[lVar3]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar2 <= pcVar5) goto LAB_180552b64;
      }
    }
    puVar4 = (uint64_t *)puVar4[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180552c00(int64_t param_1,uint64_t *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int8_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  char acStackX_8 [4];
  uint uStackX_c;
  
  iVar1 = *param_3;
  uVar5 = (uint64_t)(int64_t)iVar1 % (uint64_t)*(uint *)(param_1 + 0x10);
  piVar2 = *(int **)(*(int64_t *)(param_1 + 8) + uVar5 * 8);
  lVar4 = *(int64_t *)(param_1 + 8) + uVar5 * 8;
  do {
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,*(int8_t *)(param_1 + 0x2c));
      *(uint64_t *)piVar2 = *(uint64_t *)param_3;
      piVar2[2] = 0;
      piVar2[3] = 0;
      FUN_18066c220(param_1 + 0x20,acStackX_8,*(int32_t *)(param_1 + 0x10),
                    *(int32_t *)(param_1 + 0x18),1);
      if (acStackX_8[0] != '\0') {
        uVar5 = (uint64_t)(int64_t)iVar1 % (uint64_t)uStackX_c;
        FUN_18053e470(param_1,uStackX_c);
      }
      *(uint64_t *)(piVar2 + 2) = *(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar5 * 8);
      uVar3 = 1;
      *(int **)(*(int64_t *)(param_1 + 8) + uVar5 * 8) = piVar2;
      *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
      lVar4 = *(int64_t *)(param_1 + 8) + uVar5 * 8;
LAB_180552cdd:
      *param_2 = piVar2;
      param_2[1] = lVar4;
      *(int8_t *)(param_2 + 2) = uVar3;
      return param_2;
    }
    if (iVar1 == *piVar2) {
      uVar3 = 0;
      goto LAB_180552cdd;
    }
    piVar2 = *(int **)(piVar2 + 2);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180552d10(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,param_1 * 0x108,3);
  iVar3 = 0;
  lVar2 = lVar1 + 0x70;
  do {
    *(uint64_t *)(lVar2 + -0xc) = 0;
    iVar3 = iVar3 + 1;
    *(uint64_t *)(lVar2 + -4) = 0;
    *(uint64_t *)(lVar2 + 0x20) = 0;
    *(uint64_t *)(lVar2 + 0x28) = 0;
    *(uint64_t *)(lVar2 + 0x4c) = 0;
    *(uint64_t *)(lVar2 + 0x54) = 0;
    *(uint64_t *)(lVar2 + 0x78) = 0;
    *(uint64_t *)(lVar2 + 0x80) = 0;
    lVar2 = lVar2 + 0x108;
  } while ((uint64_t)(int64_t)iVar3 < param_1);
  return lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180552d90(uint64_t param_1)

{
  int64_t lVar1;
  uint64_t *puVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,param_1 * 0x14);
  iVar3 = 0;
  puVar2 = (uint64_t *)(lVar1 + 8);
  do {
    iVar3 = iVar3 + 1;
    puVar2[-1] = 0xffffffffffffffff;
    *puVar2 = 0xffffffffffffffff;
    *(int8_t *)(puVar2 + 1) = 0;
    puVar2 = (uint64_t *)((int64_t)puVar2 + 0x14);
  } while ((uint64_t)(int64_t)iVar3 < param_1);
  return lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180552e00(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,param_1 * 0x68,3);
  iVar3 = 0;
  lVar2 = lVar1 + 0x2c;
  do {
    *(uint64_t *)(lVar2 + -0xc) = 0;
    iVar3 = iVar3 + 1;
    *(uint64_t *)(lVar2 + -4) = 0;
    *(uint64_t *)(lVar2 + 0x20) = 0;
    *(uint64_t *)(lVar2 + 0x28) = 0;
    lVar2 = lVar2 + 0x68;
  } while ((uint64_t)(int64_t)iVar3 < param_1);
  return lVar1;
}





// 函数: void FUN_180552e70(int64_t param_1)
void FUN_180552e70(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  if (param_1 == 0) {
    return;
  }
  uVar3 = 0;
  uVar1 = *(uint64_t *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      FUN_180553110(uVar3 + param_1);
      uVar3 = (uint64_t)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_1 + -0x10);
}





// 函数: void FUN_180552e7a(int64_t param_1)
void FUN_180552e7a(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0;
  uVar1 = *(uint64_t *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      FUN_180553110(uVar3 + param_1);
      uVar3 = (uint64_t)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_1 + -0x10);
}





// 函数: void FUN_180552e9d(void)
void FUN_180552e9d(void)

{
  int64_t in_RAX;
  uint unaff_EBX;
  int unaff_EBP;
  int64_t unaff_RDI;
  
  do {
    FUN_180553110((uint64_t)unaff_EBX + unaff_RDI);
    unaff_EBX = unaff_EBX + unaff_EBP;
    in_RAX = in_RAX + -1;
  } while (in_RAX != 0);
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(unaff_RDI + -0x10);
}





// 函数: void FUN_180552ebc(void)
void FUN_180552ebc(void)

{
  int64_t unaff_RDI;
  
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(unaff_RDI + -0x10);
}





// 函数: void FUN_180552ed9(void)
void FUN_180552ed9(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180552ee0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return (uint64_t *)0x0;
  }
  puVar1 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,param_1 * 0x170 + 0x10,3,param_4,0xfffffffffffffffe);
  *puVar1 = param_1 << 0x20 | 0x170;
  iVar3 = 0;
  puVar2 = puVar1 + 0xd;
  do {
    puVar2[-0xb] = (uint64_t)&system_state_ptr;
    puVar2[-10] = 0;
    *(int32_t *)(puVar2 + -9) = 0;
    puVar2[-0xb] = (uint64_t)&system_data_buffer_ptr;
    puVar2[-8] = 0;
    puVar2[-10] = 0;
    *(int32_t *)(puVar2 + -9) = 0;
    *(int32_t *)(puVar2 + -1) = 0x3f800000;
    *(uint64_t *)((int64_t)puVar2 + -4) = 0x40000000;
    *(int32_t *)((int64_t)puVar2 + 4) = 3;
    puVar2[-3] = 1;
    puVar2[-4] = (uint64_t)&system_data_0000;
    puVar2[-2] = 0;
    *(int32_t *)(puVar2 + 9) = 0x3f800000;
    *(uint64_t *)((int64_t)puVar2 + 0x4c) = 0x40000000;
    *(int32_t *)((int64_t)puVar2 + 0x54) = 3;
    puVar2[7] = 1;
    puVar2[6] = (uint64_t)&system_data_0000;
    puVar2[8] = 0;
    *(int32_t *)(puVar2 + 0x11) = 0x3f800000;
    *(uint64_t *)((int64_t)puVar2 + 0x8c) = 0x40000000;
    *(int32_t *)((int64_t)puVar2 + 0x94) = 3;
    puVar2[0xf] = 1;
    puVar2[0xe] = (uint64_t)&system_data_0000;
    puVar2[0x10] = 0;
    *(int32_t *)(puVar2 + 0x19) = 0x3f800000;
    *(uint64_t *)((int64_t)puVar2 + 0xcc) = 0x40000000;
    *(int32_t *)((int64_t)puVar2 + 0xd4) = 3;
    puVar2[0x17] = 1;
    puVar2[0x16] = (uint64_t)&system_data_0000;
    puVar2[0x18] = 0;
    *(int32_t *)(puVar2 + -7) = 0xffffffff;
    puVar2[-6] = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    puVar2[4] = 0;
    *(int32_t *)(puVar2 + 0xb) = 0;
    puVar2[0xc] = 0;
    *(int32_t *)(puVar2 + 0x13) = 0;
    puVar2[0x14] = 0;
    *(int32_t *)(puVar2 + 0x1b) = 0;
    *(int16_t *)((int64_t)puVar2 + 0xdc) = 0;
    puVar2[0x1c] = 0xffffffffffffffff;
    *(int8_t *)(puVar2 + 0x1d) = 0;
    puVar2[0x1e] = 0;
    puVar2[0x1f] = 0;
    *(int32_t *)(puVar2 + 0x20) = 0;
    *(uint64_t *)((int64_t)puVar2 + 0x104) = 0xffffffffffffffff;
    *(uint64_t *)((int64_t)puVar2 + 0x10c) = 0xffffffffffffffff;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0x2e;
  } while ((uint64_t)(int64_t)iVar3 < param_1);
  return puVar1 + 2;
}





// 函数: void FUN_180553110(uint64_t *param_1)
void FUN_180553110(uint64_t *param_1)

{
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[5] = 0;
  if (param_1[0xd] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xd] = 0;
  if (param_1[0xf] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xf] = 0;
  if (param_1[0x17] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x17] = 0;
  if (param_1[0x1f] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x1f] = 0;
  FUN_180057790();
  FUN_180057790();
  FUN_180057790();
  FUN_180057790();
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}





