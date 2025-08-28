#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part528.c - 2 个函数
// 函数: void function_5554f0(int64_t param_1,int64_t param_2)
void function_5554f0(int64_t param_1,int64_t param_2)
{
  byte bVar1;
  uint64_t uVar2;
  bool bVar3;
  int64_t lVar4;
  char *pcVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int32_t *puVar8;
  byte *pbVar9;
  uint uVar10;
  uint64_t *puVar11;
  int iVar12;
  char *pcVar13;
  uint64_t *puVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  char *pcVar17;
  char *pcVar18;
  void *plocal_var_60;
  byte *pbStack_58;
  int iStack_50;
  uint64_t local_var_48;
  lVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,3,0xfffffffffffffffe);
  pcVar18 = (char *)0x0;
  *(uint64_t *)(lVar4 + 0x28) = 3;
  *(int32_t *)(lVar4 + 0x19) = 0;
  *(int16_t *)(lVar4 + 0x1d) = 0;
  *(int8_t *)(lVar4 + 0x1f) = 0;
  *(int64_t *)lVar4 = lVar4;
  *(int64_t *)(lVar4 + 8) = lVar4;
  *(uint64_t *)(lVar4 + 0x10) = 0;
  *(int8_t *)(lVar4 + 0x18) = 0;
  *(uint64_t *)(lVar4 + 0x20) = 0;
  *(int64_t *)(param_1 + 0x10) = lVar4;
  if (param_2 != 0) {
    pcVar13 = "monster_usage_set";
    do {
      pcVar17 = pcVar13;
      pcVar13 = pcVar17 + 1;
    } while (*pcVar13 != '\0');
    for (puVar11 = *(uint64_t **)(param_2 + 0x30); puVar11 != (uint64_t *)0x0;
        puVar11 = (uint64_t *)puVar11[0xb]) {
      pcVar13 = (char *)*puVar11;
      if (pcVar13 == (char *)0x0) {
        pcVar13 = (char *)0x180d48d24;
        pcVar5 = pcVar18;
      }
      else {
        pcVar5 = (char *)puVar11[2];
      }
      if (pcVar5 == pcVar17 + -0x180a34ecf) {
        pcVar5 = pcVar5 + (int64_t)pcVar13;
        if (pcVar5 <= pcVar13) goto LAB_1805555e0;
        lVar4 = (int64_t)&memory_allocator_3488_ptr - (int64_t)pcVar13;
        while (*pcVar13 == pcVar13[lVar4]) {
          pcVar13 = pcVar13 + 1;
          if (pcVar5 <= pcVar13) goto LAB_1805555e0;
        }
      }
    }
  }
  return;
LAB_1805555e0:
  if (puVar11 != (uint64_t *)0x0) {
    plocal_var_60 = &system_data_buffer_ptr;
    local_var_48 = 0;
    pbStack_58 = (byte *)0x0;
    iStack_50 = 0;
    pcVar13 = "id";
    do {
      pcVar17 = pcVar13;
      pcVar13 = pcVar17 + 1;
    } while (*pcVar13 != '\0');
    for (puVar14 = (uint64_t *)puVar11[8]; puVar14 != (uint64_t *)0x0;
        puVar14 = (uint64_t *)puVar14[6]) {
      pcVar13 = (char *)*puVar14;
      if (pcVar13 == (char *)0x0) {
        pcVar13 = (char *)0x180d48d24;
        pcVar5 = pcVar18;
      }
      else {
        pcVar5 = (char *)puVar14[2];
      }
      if (pcVar5 == pcVar17 + -0x180a0ae27) {
        pcVar5 = pcVar5 + (int64_t)pcVar13;
        if (pcVar5 <= pcVar13) {
LAB_180555693:
          lVar4 = 0x180d48d24;
          if (puVar14[1] != 0) {
            lVar4 = puVar14[1];
          }
          CoreSystem_ConfigValidator0(&plocal_var_60,lVar4);
          break;
        }
        lVar4 = (int64_t)&ui_system_data_1288_ptr - (int64_t)pcVar13;
        while (*pcVar13 == pcVar13[lVar4]) {
          pcVar13 = pcVar13 + 1;
          if (pcVar5 <= pcVar13) goto LAB_180555693;
        }
      }
    }
    puVar14 = *(uint64_t **)(param_1 + 0x10);
    puVar15 = (uint64_t *)puVar14[2];
    puVar6 = puVar14;
    if (puVar15 == (uint64_t *)0x0) {
LAB_180555769:
      puVar7 = puVar14;
    }
    else {
      do {
        if (iStack_50 == 0) {
          bVar3 = false;
          puVar16 = (uint64_t *)puVar15[1];
        }
        else {
          if (*(int *)(puVar15 + 6) == 0) {
            bVar3 = true;
          }
          else {
            pbVar9 = pbStack_58;
            do {
              uVar10 = (uint)pbVar9[puVar15[5] - (int64_t)pbStack_58];
              iVar12 = *pbVar9 - uVar10;
              if (*pbVar9 != uVar10) break;
              pbVar9 = pbVar9 + 1;
            } while (uVar10 != 0);
            bVar3 = 0 < iVar12;
            if (iVar12 < 1) {
              puVar16 = (uint64_t *)puVar15[1];
              goto LAB_18055572b;
            }
          }
          puVar16 = (uint64_t *)*puVar15;
        }
LAB_18055572b:
        puVar7 = puVar15;
        if (bVar3) {
          puVar7 = puVar6;
        }
        puVar6 = puVar7;
        puVar15 = puVar16;
      } while (puVar16 != (uint64_t *)0x0);
      if (puVar7 == puVar14) goto LAB_180555769;
      if (*(int *)(puVar7 + 6) != 0) {
        if (iStack_50 != 0) {
          pbVar9 = (byte *)puVar7[5];
          lVar4 = (int64_t)pbStack_58 - (int64_t)pbVar9;
          do {
            bVar1 = *pbVar9;
            uVar10 = (uint)pbVar9[lVar4];
            if (bVar1 != uVar10) break;
            pbVar9 = pbVar9 + 1;
          } while (uVar10 != 0);
          if ((int)(bVar1 - uVar10) < 1) goto LAB_18055576c;
        }
        goto LAB_180555769;
      }
    }
LAB_18055576c:
    if (puVar7 == puVar14) {
      uVar2 = puVar14[4];
      puVar8 = (int32_t *)function_0c2970(puVar14,&plocal_var_60);
      *puVar8 = (int)uVar2;
    }
    plocal_var_60 = &system_data_buffer_ptr;
    if (pbStack_58 != (byte *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  pcVar13 = "monster_usage_set";
  do {
    pcVar17 = pcVar13;
    pcVar13 = pcVar17 + 1;
  } while (*pcVar13 != '\0');
  while( true ) {
    do {
      puVar11 = (uint64_t *)puVar11[0xb];
      if (puVar11 == (uint64_t *)0x0) {
        return;
      }
      pcVar13 = (char *)*puVar11;
      if (pcVar13 == (char *)0x0) {
        pcVar13 = (char *)0x180d48d24;
        pcVar5 = pcVar18;
      }
      else {
        pcVar5 = (char *)puVar11[2];
      }
    } while (pcVar5 != pcVar17 + -0x180a34ecf);
    pcVar5 = pcVar5 + (int64_t)pcVar13;
    if (pcVar5 <= pcVar13) break;
    lVar4 = (int64_t)&memory_allocator_3488_ptr - (int64_t)pcVar13;
    while (*pcVar13 == pcVar13[lVar4]) {
      pcVar13 = pcVar13 + 1;
      if (pcVar5 <= pcVar13) goto LAB_1805555e0;
    }
  }
  goto LAB_1805555e0;
}
// 函数: void function_555820(int64_t *param_1,int64_t param_2)
void function_555820(int64_t *param_1,int64_t param_2)
{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  int *piVar4;
  uint64_t *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  int64_t lVar11;
  byte *pbVar12;
  uint64_t *puVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  char *pcVar19;
  int64_t lVar20;
  int64_t *plVar21;
  int8_t astack_special_x_8 [8];
  int64_t lStackX_10;
  void *plocal_var_60;
  byte *pbStack_58;
  int iStack_50;
  uint64_t local_var_48;
  if (param_2 == 0) {
    return;
  }
  iVar14 = (int)*(uint64_t *)(param_1[2] + 0x20);
  if (iVar14 < 1) {
    return;
  }
  pcVar16 = "monster_usage_set";
  do {
    pcVar19 = pcVar16;
    pcVar16 = pcVar19 + 1;
  } while (*pcVar16 != '\0');
  pcVar16 = (char *)0x0;
  for (puVar13 = *(uint64_t **)(param_2 + 0x30); lStackX_10 = param_2,
      puVar13 != (uint64_t *)0x0; puVar13 = (uint64_t *)puVar13[0xb]) {
    pcVar7 = (char *)*puVar13;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x180d48d24;
      pcVar8 = pcVar16;
    }
    else {
      pcVar8 = (char *)puVar13[2];
    }
    if (pcVar8 == pcVar19 + -0x180a34ecf) {
      pcVar8 = pcVar8 + (int64_t)pcVar7;
      pcVar6 = pcVar16;
      if (pcVar8 <= pcVar7) goto LAB_1805558f1;
      lVar11 = (int64_t)&memory_allocator_3488_ptr - (int64_t)pcVar7;
      while (*pcVar7 == pcVar7[lVar11]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar8 <= pcVar7) goto LAB_1805558f1;
      }
    }
  }
LAB_180555b20:
  pcVar19 = "monster_usage_set";
  do {
    pcVar7 = pcVar19;
    pcVar19 = pcVar7 + 1;
  } while (*pcVar19 != '\0');
  pcVar19 = *(char **)(lStackX_10 + 0x30);
  do {
    if (pcVar19 == (char *)0x0) {
      return;
    }
    pcVar8 = *(char **)pcVar19;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar6 = pcVar16;
    }
    else {
      pcVar6 = *(char **)(pcVar19 + 0x10);
    }
    if (pcVar6 == pcVar7 + -0x180a34ecf) {
      pcVar6 = pcVar6 + (int64_t)pcVar8;
      if (pcVar6 <= pcVar8) goto LAB_180555b71;
      lVar11 = (int64_t)&memory_allocator_3488_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar11]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar6 <= pcVar8) goto LAB_180555b71;
      }
    }
    pcVar19 = *(char **)(pcVar19 + 0x58);
  } while( true );
LAB_1805558f1:
  if ((int)pcVar6 < iVar14) {
    plocal_var_60 = &system_data_buffer_ptr;
    local_var_48 = 0;
    pbStack_58 = (byte *)0x0;
    iStack_50 = 0;
    pcVar19 = "id";
    do {
      pcVar7 = pcVar19;
      pcVar19 = pcVar7 + 1;
    } while (*pcVar19 != '\0');
    for (puVar17 = (uint64_t *)puVar13[8]; puVar17 != (uint64_t *)0x0;
        puVar17 = (uint64_t *)puVar17[6]) {
      pcVar19 = (char *)*puVar17;
      if (pcVar19 == (char *)0x0) {
        pcVar19 = (char *)0x180d48d24;
        pcVar8 = pcVar16;
      }
      else {
        pcVar8 = (char *)puVar17[2];
      }
      if (pcVar8 == pcVar7 + -0x180a0ae27) {
        pcVar8 = pcVar8 + (int64_t)pcVar19;
        if (pcVar8 <= pcVar19) {
LAB_180555981:
          lVar11 = 0x180d48d24;
          if (puVar17[1] != 0) {
            lVar11 = puVar17[1];
          }
          CoreSystem_ConfigValidator0(&plocal_var_60,lVar11);
          break;
        }
        lVar11 = (int64_t)&ui_system_data_1288_ptr - (int64_t)pcVar19;
        while (*pcVar19 == pcVar19[lVar11]) {
          pcVar19 = pcVar19 + 1;
          if (pcVar8 <= pcVar19) goto LAB_180555981;
        }
      }
    }
    lVar11 = *param_1;
    piVar4 = (int *)function_0c2970(param_1[2],&plocal_var_60);
    plVar21 = (int64_t *)((int64_t)*piVar4 * 0x1a8 + lVar11);
    pcVar19 = "id";
    do {
      pcVar7 = pcVar19;
      pcVar19 = pcVar7 + 1;
    } while (*pcVar19 != '\0');
    for (puVar17 = (uint64_t *)puVar13[8]; puVar17 != (uint64_t *)0x0;
        puVar17 = (uint64_t *)puVar17[6]) {
      pcVar19 = (char *)*puVar17;
      if (pcVar19 == (char *)0x0) {
        pcVar19 = (char *)0x180d48d24;
        pcVar8 = pcVar16;
      }
      else {
        pcVar8 = (char *)puVar17[2];
      }
      if (pcVar8 == pcVar7 + -0x180a0ae27) {
        pcVar8 = pcVar19 + (int64_t)pcVar8;
        if (pcVar8 <= pcVar19) {
LAB_180555a34:
          lVar11 = 0x180d48d24;
          if (puVar17[1] != 0) {
            lVar11 = puVar17[1];
          }
          (**(code **)(*plVar21 + 0x10))(plVar21,lVar11);
          break;
        }
        lVar11 = (int64_t)&ui_system_data_1288_ptr - (int64_t)pcVar19;
        while (*pcVar19 == pcVar19[lVar11]) {
          pcVar19 = pcVar19 + 1;
          if (pcVar8 <= pcVar19) goto LAB_180555a34;
        }
      }
    }
    plocal_var_60 = &system_data_buffer_ptr;
    if (pbStack_58 != (byte *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    pcVar6 = (char *)(uint64_t)((int)pcVar6 + 1);
    pcVar19 = "monster_usage_set";
    do {
      pcVar7 = pcVar19;
      pcVar19 = pcVar7 + 1;
    } while (*pcVar19 != '\0');
    puVar13 = (uint64_t *)puVar13[0xb];
    if (puVar13 != (uint64_t *)0x0) {
      do {
        pcVar19 = (char *)*puVar13;
        if (pcVar19 == (char *)0x0) {
          pcVar19 = (char *)0x180d48d24;
          pcVar8 = pcVar16;
        }
        else {
          pcVar8 = (char *)puVar13[2];
        }
        if (pcVar8 == pcVar7 + -0x180a34ecf) {
          pcVar8 = pcVar19 + (int64_t)pcVar8;
          if (pcVar8 <= pcVar19) goto LAB_1805558f1;
          lVar11 = (int64_t)&memory_allocator_3488_ptr - (int64_t)pcVar19;
          while (*pcVar19 == pcVar19[lVar11]) {
            pcVar19 = pcVar19 + 1;
            if (pcVar8 <= pcVar19) goto LAB_1805558f1;
          }
        }
        puVar13 = (uint64_t *)puVar13[0xb];
        if (puVar13 == (uint64_t *)0x0) break;
      } while( true );
    }
  }
  goto LAB_180555b20;
LAB_180555b71:
  plocal_var_60 = &system_data_buffer_ptr;
  local_var_48 = 0;
  pbStack_58 = (byte *)0x0;
  iStack_50 = 0;
  pcVar7 = "id";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  for (puVar13 = *(uint64_t **)(pcVar19 + 0x40); puVar13 != (uint64_t *)0x0;
      puVar13 = (uint64_t *)puVar13[6]) {
    pcVar7 = (char *)*puVar13;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x180d48d24;
      pcVar6 = pcVar16;
    }
    else {
      pcVar6 = (char *)puVar13[2];
    }
    if (pcVar6 == pcVar8 + -0x180a0ae27) {
      pcVar6 = pcVar6 + (int64_t)pcVar7;
      if (pcVar6 <= pcVar7) {
LAB_180555bf4:
        lVar11 = 0x180d48d24;
        if (puVar13[1] != 0) {
          lVar11 = puVar13[1];
        }
        CoreSystem_ConfigValidator0(&plocal_var_60,lVar11);
        break;
      }
      lVar11 = (int64_t)&ui_system_data_1288_ptr - (int64_t)pcVar7;
      while (*pcVar7 == pcVar7[lVar11]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar6 <= pcVar7) goto LAB_180555bf4;
      }
    }
  }
  lVar11 = *param_1;
  puVar13 = (uint64_t *)param_1[2];
  puVar3 = puVar13;
  puVar17 = (uint64_t *)puVar13[2];
  while (puVar5 = puVar3, puVar17 != (uint64_t *)0x0) {
    if (iStack_50 == 0) {
      bVar2 = false;
      puVar18 = (uint64_t *)puVar17[1];
    }
    else {
      if (*(int *)(puVar17 + 6) == 0) {
        bVar2 = true;
      }
      else {
        pbVar12 = pbStack_58;
        do {
          uVar10 = (uint)pbVar12[puVar17[5] - (int64_t)pbStack_58];
          iVar14 = *pbVar12 - uVar10;
          if (*pbVar12 != uVar10) break;
          pbVar12 = pbVar12 + 1;
        } while (uVar10 != 0);
        bVar2 = 0 < iVar14;
        if (iVar14 < 1) {
          puVar18 = (uint64_t *)puVar17[1];
          goto LAB_180555c8b;
        }
      }
      puVar18 = (uint64_t *)*puVar17;
    }
LAB_180555c8b:
    puVar3 = puVar17;
    puVar17 = puVar18;
    if (bVar2) {
      puVar3 = puVar5;
    }
  }
  if (puVar5 == puVar13) {
LAB_180555cdb:
    puVar5 = (uint64_t *)function_0c2ab0(puVar13,&lStackX_10);
    puVar5 = (uint64_t *)*puVar5;
  }
  else if (*(int *)(puVar5 + 6) != 0) {
    if (iStack_50 != 0) {
      pbVar12 = (byte *)puVar5[5];
      lVar20 = (int64_t)pbStack_58 - (int64_t)pbVar12;
      do {
        bVar1 = *pbVar12;
        uVar10 = (uint)pbVar12[lVar20];
        if (bVar1 != uVar10) break;
        pbVar12 = pbVar12 + 1;
      } while (uVar10 != 0);
      if ((int)(bVar1 - uVar10) < 1) goto LAB_180555cfe;
    }
    goto LAB_180555cdb;
  }
LAB_180555cfe:
  iVar14 = *(int *)(puVar5 + 8);
  puVar13 = (uint64_t *)param_1[2];
  puVar3 = puVar13;
  puVar17 = (uint64_t *)puVar13[2];
  while (puVar5 = puVar3, puVar17 != (uint64_t *)0x0) {
    if (iStack_50 == 0) {
      bVar2 = false;
      puVar18 = (uint64_t *)puVar17[1];
    }
    else {
      if (*(int *)(puVar17 + 6) == 0) {
        bVar2 = true;
      }
      else {
        pbVar12 = pbStack_58;
        do {
          uVar10 = (uint)pbVar12[puVar17[5] - (int64_t)pbStack_58];
          iVar15 = *pbVar12 - uVar10;
          if (*pbVar12 != uVar10) break;
          pbVar12 = pbVar12 + 1;
        } while (uVar10 != 0);
        bVar2 = 0 < iVar15;
        if (iVar15 < 1) {
          puVar18 = (uint64_t *)puVar17[1];
          goto LAB_180555d6c;
        }
      }
      puVar18 = (uint64_t *)*puVar17;
    }
LAB_180555d6c:
    puVar3 = puVar17;
    puVar17 = puVar18;
    if (bVar2) {
      puVar3 = puVar5;
    }
  }
  if (puVar5 == puVar13) {
LAB_180555dac:
    puVar5 = (uint64_t *)function_0c2ab0(puVar13,astack_special_x_8);
    puVar5 = (uint64_t *)*puVar5;
  }
  else if (*(int *)(puVar5 + 6) != 0) {
    if (iStack_50 != 0) {
      pbVar12 = (byte *)puVar5[5];
      lVar20 = (int64_t)pbStack_58 - (int64_t)pbVar12;
      do {
        bVar1 = *pbVar12;
        uVar10 = (uint)pbVar12[lVar20];
        if (bVar1 != uVar10) break;
        pbVar12 = pbVar12 + 1;
      } while (uVar10 != 0);
      if ((int)(bVar1 - uVar10) < 1) goto LAB_180555dc7;
    }
    goto LAB_180555dac;
  }
LAB_180555dc7:
  function_555f60(lVar11 + (int64_t)iVar14 * 0x1a8,*(int32_t *)(puVar5 + 8),pcVar19);
  plocal_var_60 = &system_data_buffer_ptr;
  if (pbStack_58 != (byte *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  pcVar7 = "monster_usage_set";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  for (pcVar7 = *(char **)(pcVar19 + 0x58); pcVar19 = pcVar16, pcVar7 != (char *)0x0;
      pcVar7 = *(char **)(pcVar7 + 0x58)) {
    pcVar6 = *(char **)pcVar7;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)0x180d48d24;
      pcVar9 = pcVar16;
    }
    else {
      pcVar9 = *(char **)(pcVar7 + 0x10);
    }
    if (pcVar9 == pcVar8 + -0x180a34ecf) {
      pcVar9 = pcVar9 + (int64_t)pcVar6;
      pcVar19 = pcVar7;
      if (pcVar9 <= pcVar6) break;
      lVar11 = (int64_t)&memory_allocator_3488_ptr - (int64_t)pcVar6;
      while (*pcVar6 == pcVar6[lVar11]) {
        pcVar6 = pcVar6 + 1;
        if (pcVar9 <= pcVar6) goto LAB_180555e7a;
      }
    }
  }
LAB_180555e7a:
  if (pcVar19 == (char *)0x0) {
    return;
  }
  goto LAB_180555b71;
}
int function_555eb0(int64_t *param_1,int64_t param_2)
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
LAB_180555f0e:
        if (iVar5 == 0) {
          return iVar9;
        }
      }
      else if (iVar3 == 0) goto LAB_180555f0e;
      iVar9 = iVar9 + 1;
      puVar8 = puVar8 + 0x35;
    } while (iVar9 < (int)param_1[1]);
  }
  puVar6 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar6 = *(void **)(param_2 + 8);
  }
  SystemDataInitializer(&memory_allocator_3448_ptr,puVar6);
  return -1;
}