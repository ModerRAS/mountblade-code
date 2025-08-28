#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part527.c - 5 个函数

// 函数: void FUN_180554300(longlong *param_1,longlong param_2)
void FUN_180554300(longlong *param_1,longlong param_2)

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
  longlong lVar10;
  byte *pbVar11;
  longlong lVar12;
  int iVar13;
  char *pcVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  char *pcVar17;
  char *pcVar18;
  int8_t auStackX_10 [8];
  void *puStack_50;
  byte *pbStack_48;
  int iStack_40;
  uint64_t uStack_38;
  
  if (param_2 != 0) {
    pcVar14 = "movement_set";
    do {
      pcVar17 = pcVar14;
      pcVar14 = pcVar17 + 1;
    } while (*pcVar14 != '\0');
    pcVar14 = *(char **)(param_2 + 0x30);
    if (pcVar14 != (char *)0x0) {
      pcVar18 = (char *)0x0;
      do {
        pcVar7 = *(char **)pcVar14;
        if (pcVar7 == (char *)0x0) {
          pcVar7 = (char *)0x180d48d24;
          pcVar6 = pcVar18;
        }
        else {
          pcVar6 = *(char **)(pcVar14 + 0x10);
        }
        if (pcVar6 == pcVar17 + -0x180a345b7) {
          pcVar6 = pcVar6 + (longlong)pcVar7;
          if (pcVar6 <= pcVar7) goto LAB_1805543c0;
          lVar10 = (longlong)&unknown_var_1160_ptr - (longlong)pcVar7;
          while (*pcVar7 == pcVar7[lVar10]) {
            pcVar7 = pcVar7 + 1;
            if (pcVar6 <= pcVar7) goto LAB_1805543c0;
          }
        }
        pcVar14 = *(char **)(pcVar14 + 0x58);
      } while (pcVar14 != (char *)0x0);
    }
  }
  return;
LAB_1805543c0:
  puStack_50 = &system_data_buffer_ptr;
  uStack_38 = 0;
  pbStack_48 = (byte *)0x0;
  iStack_40 = 0;
  pcVar17 = "id";
  do {
    pcVar7 = pcVar17;
    pcVar17 = pcVar7 + 1;
  } while (*pcVar17 != '\0');
  for (puVar15 = *(uint64_t **)(pcVar14 + 0x40); puVar15 != (uint64_t *)0x0;
      puVar15 = (uint64_t *)puVar15[6]) {
    pcVar17 = (char *)*puVar15;
    if (pcVar17 == (char *)0x0) {
      pcVar17 = (char *)0x180d48d24;
      pcVar6 = pcVar18;
    }
    else {
      pcVar6 = (char *)puVar15[2];
    }
    if (pcVar6 == pcVar7 + -0x180a0ae27) {
      pcVar6 = pcVar6 + (longlong)pcVar17;
      if (pcVar6 <= pcVar17) {
LAB_180554446:
        lVar10 = 0x180d48d24;
        if (puVar15[1] != 0) {
          lVar10 = puVar15[1];
        }
        FUN_180627c50(&puStack_50,lVar10);
        lVar10 = *param_1;
        puVar15 = (uint64_t *)param_1[2];
        puVar4 = puVar15;
        puVar3 = (uint64_t *)puVar15[2];
        goto joined_r0x00018055447b;
      }
      lVar10 = (longlong)&unknown_var_1288_ptr - (longlong)pcVar17;
      while (*pcVar17 == pcVar17[lVar10]) {
        pcVar17 = pcVar17 + 1;
        if (pcVar6 <= pcVar17) goto LAB_180554446;
      }
    }
  }
  goto LAB_18055455c;
joined_r0x00018055447b:
  puVar5 = puVar4;
  if (puVar3 != (uint64_t *)0x0) {
    if (iStack_40 == 0) {
      bVar2 = false;
      puVar16 = (uint64_t *)puVar3[1];
    }
    else {
      if (*(int *)(puVar3 + 6) == 0) {
        bVar2 = true;
      }
      else {
        pbVar11 = pbStack_48;
        do {
          uVar9 = (uint)pbVar11[puVar3[5] - (longlong)pbStack_48];
          iVar13 = *pbVar11 - uVar9;
          if (*pbVar11 != uVar9) break;
          pbVar11 = pbVar11 + 1;
        } while (uVar9 != 0);
        bVar2 = 0 < iVar13;
        if (iVar13 < 1) {
          puVar16 = (uint64_t *)puVar3[1];
          goto LAB_1805544db;
        }
      }
      puVar16 = (uint64_t *)*puVar3;
    }
LAB_1805544db:
    puVar4 = puVar3;
    puVar3 = puVar16;
    if (bVar2) {
      puVar4 = puVar5;
    }
    goto joined_r0x00018055447b;
  }
  if (puVar5 != puVar15) {
    if (*(int *)(puVar5 + 6) == 0) goto LAB_18055453b;
    if (iStack_40 != 0) {
      pbVar11 = (byte *)puVar5[5];
      lVar12 = (longlong)pbStack_48 - (longlong)pbVar11;
      do {
        bVar1 = *pbVar11;
        uVar9 = (uint)pbVar11[lVar12];
        if (bVar1 != uVar9) break;
        pbVar11 = pbVar11 + 1;
      } while (uVar9 != 0);
      if ((int)(bVar1 - uVar9) < 1) goto LAB_18055453b;
    }
  }
  puVar5 = (uint64_t *)FUN_1800c2ab0(puVar15,auStackX_10);
  puVar5 = (uint64_t *)*puVar5;
LAB_18055453b:
  FUN_180553220((longlong)*(int *)(puVar5 + 8) * 0x68 + lVar10,pcVar14);
LAB_18055455c:
  puStack_50 = &system_data_buffer_ptr;
  if (pbStack_48 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  pcVar17 = "movement_set";
  do {
    pcVar7 = pcVar17;
    pcVar17 = pcVar7 + 1;
  } while (*pcVar17 != '\0');
  for (pcVar17 = *(char **)(pcVar14 + 0x58); pcVar14 = pcVar18, pcVar17 != (char *)0x0;
      pcVar17 = *(char **)(pcVar17 + 0x58)) {
    pcVar6 = *(char **)pcVar17;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)0x180d48d24;
      pcVar8 = pcVar18;
    }
    else {
      pcVar8 = *(char **)(pcVar17 + 0x10);
    }
    if (pcVar8 == pcVar7 + -0x180a345b7) {
      pcVar8 = pcVar6 + (longlong)pcVar8;
      pcVar14 = pcVar17;
      if (pcVar8 <= pcVar6) break;
      lVar10 = (longlong)&unknown_var_1160_ptr - (longlong)pcVar6;
      while (*pcVar6 == pcVar6[lVar10]) {
        pcVar6 = pcVar6 + 1;
        if (pcVar8 <= pcVar6) goto LAB_1805545ee;
      }
    }
  }
LAB_1805545ee:
  if (pcVar14 == (char *)0x0) {
    return;
  }
  goto LAB_1805543c0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180554640(longlong *param_1,longlong param_2)
void FUN_180554640(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  void *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  uint uStack_a0;
  int iStack_9c;
  int iStack_98;
  void *puStack_90;
  longlong lStack_88;
  int iStack_80;
  ulonglong uStack_78;
  void *puStack_70;
  void *puStack_68;
  int iStack_60;
  ulonglong uStack_58;
  void *puStack_50;
  longlong lStack_48;
  int iStack_40;
  uint64_t uStack_38;
  
  if (param_2 != 0) {
    pcVar12 = "id";
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    pcVar12 = (char *)0x0;
    for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
        puVar9 = (uint64_t *)puVar9[6]) {
      pcVar4 = (char *)*puVar9;
      if (pcVar4 == (char *)0x0) {
        pcVar4 = (char *)0x180d48d24;
        pcVar5 = pcVar12;
      }
      else {
        pcVar5 = (char *)puVar9[2];
      }
      if (pcVar5 == pcVar13 + -0x180a0ae27) {
        pcVar5 = pcVar5 + (longlong)pcVar4;
        if (pcVar5 <= pcVar4) {
LAB_1805546e0:
          lVar7 = 0x180d48d24;
          if (puVar9[1] != 0) {
            lVar7 = puVar9[1];
          }
          (**(code **)(*param_1 + 0x10))(param_1,lVar7,pcVar5,puVar9,0xfffffffffffffffe);
          break;
        }
        lVar7 = (longlong)&unknown_var_1288_ptr - (longlong)pcVar4;
        while (*pcVar4 == pcVar4[lVar7]) {
          pcVar4 = pcVar4 + 1;
          if (pcVar5 <= pcVar4) goto LAB_1805546e0;
        }
      }
    }
    puStack_50 = &system_data_buffer_ptr;
    uStack_38 = 0;
    lStack_48 = 0;
    iStack_40 = 0;
    pcVar13 = "base_set";
    do {
      pcVar4 = pcVar13;
      pcVar13 = pcVar4 + 1;
    } while (*pcVar13 != '\0');
    for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
        puVar9 = (uint64_t *)puVar9[6]) {
      pcVar13 = (char *)*puVar9;
      if (pcVar13 == (char *)0x0) {
        pcVar13 = (char *)0x180d48d24;
        pcVar5 = pcVar12;
      }
      else {
        pcVar5 = (char *)puVar9[2];
      }
      if (pcVar5 == pcVar4 + -0x180a2f62f) {
        pcVar5 = pcVar5 + (longlong)pcVar13;
        if (pcVar5 <= pcVar13) {
LAB_180554794:
          lVar7 = 0x180d48d24;
          if (puVar9[1] != 0) {
            lVar7 = puVar9[1];
          }
          FUN_180627c50(&puStack_50,lVar7);
          break;
        }
        lVar7 = (longlong)&unknown_var_800_ptr - (longlong)pcVar13;
        while (*pcVar13 == pcVar13[lVar7]) {
          pcVar13 = pcVar13 + 1;
          if (pcVar5 <= pcVar13) goto LAB_180554794;
        }
      }
    }
    if (0 < iStack_40) {
      iVar2 = FUN_180554d20(&system_data_6050,&puStack_50);
      lVar7 = (longlong)iVar2 * 0x80 + render_system_memory;
      param_1[4] = *(longlong *)(lVar7 + 0x20);
      *(int32_t *)(param_1 + 5) = *(int32_t *)(lVar7 + 0x28);
      *(uint64_t *)((longlong)param_1 + 0x2c) = *(uint64_t *)(lVar7 + 0x2c);
      *(int32_t *)((longlong)param_1 + 0x34) = *(int32_t *)(lVar7 + 0x34);
      param_1[7] = *(longlong *)(lVar7 + 0x38);
      *(int32_t *)(param_1 + 8) = *(int32_t *)(lVar7 + 0x40);
      *(uint64_t *)((longlong)param_1 + 0x44) = *(uint64_t *)(lVar7 + 0x44);
      *(int32_t *)((longlong)param_1 + 0x4c) = *(int32_t *)(lVar7 + 0x4c);
      param_1[10] = *(longlong *)(lVar7 + 0x50);
      *(int32_t *)(param_1 + 0xb) = *(int32_t *)(lVar7 + 0x58);
      *(uint64_t *)((longlong)param_1 + 0x5c) = *(uint64_t *)(lVar7 + 0x5c);
      *(int32_t *)((longlong)param_1 + 100) = *(int32_t *)(lVar7 + 100);
      param_1[0xd] = *(longlong *)(lVar7 + 0x68);
      *(int32_t *)(param_1 + 0xe) = *(int32_t *)(lVar7 + 0x70);
      *(uint64_t *)((longlong)param_1 + 0x74) = *(uint64_t *)(lVar7 + 0x74);
      *(int32_t *)((longlong)param_1 + 0x7c) = *(int32_t *)(lVar7 + 0x7c);
    }
    pcVar13 = "movement_set";
    do {
      pcVar4 = pcVar13;
      pcVar13 = pcVar4 + 1;
    } while (*pcVar13 != '\0');
    for (puVar9 = *(uint64_t **)(param_2 + 0x30); puVar9 != (uint64_t *)0x0;
        puVar9 = (uint64_t *)puVar9[0xb]) {
      pcVar13 = (char *)*puVar9;
      if (pcVar13 == (char *)0x0) {
        pcVar13 = (char *)0x180d48d24;
        pcVar5 = pcVar12;
      }
      else {
        pcVar5 = (char *)puVar9[2];
      }
      if (pcVar5 == pcVar4 + -0x180a345b7) {
        pcVar5 = pcVar5 + (longlong)pcVar13;
        if (pcVar5 <= pcVar13) goto LAB_1805548d0;
        lVar7 = (longlong)&unknown_var_1160_ptr - (longlong)pcVar13;
        while (*pcVar13 == pcVar13[lVar7]) {
          pcVar13 = pcVar13 + 1;
          if (pcVar5 <= pcVar13) goto LAB_1805548d0;
        }
      }
    }
LAB_180554c63:
    if ((int)param_1[0xb] < 0) {
      param_1[10] = param_1[4];
      *(int *)(param_1 + 0xb) = (int)param_1[5];
    }
    if (*(int *)((longlong)param_1 + 100) < 0) {
      *(uint64_t *)((longlong)param_1 + 0x5c) = *(uint64_t *)((longlong)param_1 + 0x2c);
      *(int32_t *)((longlong)param_1 + 100) = *(int32_t *)((longlong)param_1 + 0x34);
    }
    if ((int)param_1[0xe] < 0) {
      param_1[0xd] = param_1[7];
      *(int *)(param_1 + 0xe) = (int)param_1[8];
    }
    if (*(int *)((longlong)param_1 + 0x7c) < 0) {
      *(uint64_t *)((longlong)param_1 + 0x74) = *(uint64_t *)((longlong)param_1 + 0x44);
      *(int32_t *)((longlong)param_1 + 0x7c) = *(int32_t *)((longlong)param_1 + 0x4c);
    }
    puStack_50 = &system_data_buffer_ptr;
    if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
LAB_1805548d0:
  iVar2 = -1;
  if (puVar9 != (uint64_t *)0x0) {
    puStack_70 = &system_data_buffer_ptr;
    uStack_58 = 0;
    puStack_68 = (void *)0x0;
    iStack_60 = 0;
    pcVar13 = "id";
    do {
      pcVar4 = pcVar13;
      pcVar13 = pcVar4 + 1;
    } while (*pcVar13 != '\0');
    for (puVar10 = (uint64_t *)puVar9[8]; puVar10 != (uint64_t *)0x0;
        puVar10 = (uint64_t *)puVar10[6]) {
      pcVar13 = (char *)*puVar10;
      if (pcVar13 == (char *)0x0) {
        pcVar13 = (char *)0x180d48d24;
        pcVar5 = pcVar12;
      }
      else {
        pcVar5 = (char *)puVar10[2];
      }
      if (pcVar5 == pcVar4 + -0x180a0ae27) {
        pcVar5 = pcVar5 + (longlong)pcVar13;
        if (pcVar5 <= pcVar13) {
LAB_180554970:
          lVar7 = 0x180d48d24;
          if (puVar10[1] != 0) {
            lVar7 = puVar10[1];
          }
          FUN_180627c50(&puStack_70,lVar7);
          break;
        }
        lVar7 = (longlong)&unknown_var_1288_ptr - (longlong)pcVar13;
        while (*pcVar13 == pcVar13[lVar7]) {
          pcVar13 = pcVar13 + 1;
          if (pcVar5 <= pcVar13) goto LAB_180554970;
        }
      }
    }
    if (0 < render_system_memory) {
      puVar10 = (uint64_t *)(render_system_memory + 8);
      pcVar13 = pcVar12;
      do {
        iVar11 = (int)pcVar13;
        iVar2 = *(int *)(puVar10 + 1);
        iVar6 = iStack_60;
        if (iVar2 == iStack_60) {
          if (iVar2 != 0) {
            pbVar3 = (byte *)*puVar10;
            lVar7 = (longlong)puStack_68 - (longlong)pbVar3;
            do {
              pbVar1 = pbVar3 + lVar7;
              iVar6 = (uint)*pbVar3 - (uint)*pbVar1;
              if (iVar6 != 0) break;
              pbVar3 = pbVar3 + 1;
            } while (*pbVar1 != 0);
          }
LAB_1805549f7:
          if (iVar6 == 0) goto LAB_180554a25;
        }
        else if (iVar2 == 0) goto LAB_1805549f7;
        pcVar13 = (char *)(ulonglong)(iVar11 + 1U);
        puVar10 = puVar10 + 0xd;
      } while ((int)(iVar11 + 1U) < render_system_memory);
    }
    puVar8 = &system_buffer_ptr;
    if (puStack_68 != (void *)0x0) {
      puVar8 = puStack_68;
    }
    FUN_180626f80(&unknown_var_3232_ptr,puVar8);
    iVar11 = -1;
LAB_180554a25:
    puStack_90 = &system_data_buffer_ptr;
    uStack_78 = 0;
    lStack_88 = 0;
    iStack_80 = 0;
    pcVar13 = "movement_mode";
    do {
      pcVar4 = pcVar13;
      pcVar13 = pcVar4 + 1;
    } while (*pcVar13 != '\0');
    for (puVar10 = (uint64_t *)puVar9[8]; iStack_98 = iVar11, puVar10 != (uint64_t *)0x0;
        puVar10 = (uint64_t *)puVar10[6]) {
      pcVar13 = (char *)*puVar10;
      if (pcVar13 == (char *)0x0) {
        pcVar13 = (char *)0x180d48d24;
        pcVar5 = pcVar12;
      }
      else {
        pcVar5 = (char *)puVar10[2];
      }
      if (pcVar5 == pcVar4 + -0x180a34dbf) {
        pcVar5 = pcVar13 + (longlong)pcVar5;
        if (pcVar5 <= pcVar13) {
LAB_180554ab0:
          lVar7 = 0x180d48d24;
          if (puVar10[1] != 0) {
            lVar7 = puVar10[1];
          }
          FUN_180627c50(&puStack_90,lVar7);
          break;
        }
        lVar7 = (longlong)&unknown_var_3216_ptr - (longlong)pcVar13;
        while (*pcVar13 == pcVar13[lVar7]) {
          pcVar13 = pcVar13 + 1;
          if (pcVar5 <= pcVar13) goto LAB_180554ab0;
        }
      }
    }
    lVar7 = lStack_88;
    pcVar13 = pcVar12;
    if (iStack_80 == 7) {
      do {
        pcVar5 = pcVar13 + 1;
        pcVar4 = pcVar12;
        if (pcVar13[lStack_88] != pcVar13[0x180a34e80]) goto LAB_180554b10;
        pcVar13 = pcVar5;
      } while (pcVar5 != &system_data_0008);
      iStack_9c = 0;
    }
    else if (iStack_80 == 0xe) {
      iVar2 = strcmp(lStack_88,&unknown_var_3432_ptr);
      if (iVar2 == 0) {
        iStack_9c = 2;
      }
      else {
        iVar2 = strcmp(lVar7,&unknown_var_3416_ptr);
        iStack_9c = 3;
        if (iVar2 != 0) goto LAB_180554b6c;
      }
    }
    else {
LAB_180554b6c:
      iStack_9c = 4;
    }
    goto LAB_180554b73;
  }
  goto LAB_180554bdf;
  while (pcVar4 = pcVar13, pcVar13 != &system_data_0008) {
LAB_180554b10:
    pcVar13 = pcVar4 + 1;
    if (pcVar4[lStack_88] != pcVar4[0x180a34e78]) goto LAB_180554b6c;
  }
  iStack_9c = 1;
LAB_180554b73:
  uStack_a0 = uStack_a0 & 0xffffff00;
  FUN_180631000(puVar9,&unknown_var_3384_ptr,&uStack_a0);
  puStack_90 = &system_data_buffer_ptr;
  if (lStack_88 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_88 = 0;
  uStack_78 = uStack_78 & 0xffffffff00000000;
  puStack_90 = &system_state_ptr;
  puStack_70 = &system_data_buffer_ptr;
  if (puStack_68 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_68 = (void *)0x0;
  uStack_58 = uStack_58 & 0xffffffff00000000;
  puStack_70 = &system_state_ptr;
  iVar2 = iStack_98;
LAB_180554bdf:
  lVar7 = (longlong)(int)(iStack_9c + (uStack_a0 & 0xff) * 4);
  *(ulonglong *)((longlong)param_1 + lVar7 * 0xc + 0x20) = CONCAT44(iStack_9c,uStack_a0);
  *(int *)((longlong)param_1 + lVar7 * 0xc + 0x28) = iVar2;
  pcVar13 = "movement_set";
  do {
    pcVar4 = pcVar13;
    pcVar13 = pcVar4 + 1;
  } while (*pcVar13 != '\0');
  puVar9 = (uint64_t *)puVar9[0xb];
  if (puVar9 != (uint64_t *)0x0) {
    do {
      pcVar13 = (char *)*puVar9;
      if (pcVar13 == (char *)0x0) {
        pcVar13 = (char *)0x180d48d24;
        pcVar5 = pcVar12;
      }
      else {
        pcVar5 = (char *)puVar9[2];
      }
      if (pcVar5 == pcVar4 + -0x180a345b7) {
        pcVar5 = pcVar13 + (longlong)pcVar5;
        if (pcVar5 <= pcVar13) goto LAB_1805548d0;
        lVar7 = (longlong)&unknown_var_1160_ptr - (longlong)pcVar13;
        while (*pcVar13 == pcVar13[lVar7]) {
          pcVar13 = pcVar13 + 1;
          if (pcVar5 <= pcVar13) goto LAB_1805548d0;
        }
      }
      puVar9 = (uint64_t *)puVar9[0xb];
      if (puVar9 == (uint64_t *)0x0) break;
    } while( true );
  }
  goto LAB_180554c63;
}



int FUN_180554d20(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  void *puVar6;
  longlong lVar7;
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
          lVar7 = *(longlong *)(param_2 + 8) - (longlong)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar7;
            iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar5 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_180554d7e:
        if (iVar5 == 0) {
          return iVar9;
        }
      }
      else if (iVar3 == 0) goto LAB_180554d7e;
      iVar9 = iVar9 + 1;
      puVar8 = puVar8 + 0x10;
    } while (iVar9 < (int)param_1[1]);
  }
  puVar6 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar6 = *(void **)(param_2 + 8);
  }
  FUN_180626f80(&unknown_var_3232_ptr,puVar6);
  return -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180554dd0(longlong param_1,longlong param_2)
void FUN_180554dd0(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint64_t uVar2;
  bool bVar3;
  longlong lVar4;
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
  void *puStack_60;
  byte *pbStack_58;
  int iStack_50;
  uint64_t uStack_48;
  
  lVar4 = FUN_18062b1e0(system_memory_pool_ptr,0x30,8,3,0xfffffffffffffffe);
  pcVar18 = (char *)0x0;
  *(uint64_t *)(lVar4 + 0x28) = 3;
  *(int32_t *)(lVar4 + 0x19) = 0;
  *(int16_t *)(lVar4 + 0x1d) = 0;
  *(int8_t *)(lVar4 + 0x1f) = 0;
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(uint64_t *)(lVar4 + 0x10) = 0;
  *(int8_t *)(lVar4 + 0x18) = 0;
  *(uint64_t *)(lVar4 + 0x20) = 0;
  *(longlong *)(param_1 + 0x10) = lVar4;
  if (param_2 != 0) {
    pcVar13 = "full_movement_set";
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
      if (pcVar5 == pcVar17 + -0x180a34e4f) {
        pcVar5 = pcVar5 + (longlong)pcVar13;
        if (pcVar5 <= pcVar13) goto LAB_180554ec0;
        lVar4 = (longlong)&unknown_var_3360_ptr - (longlong)pcVar13;
        while (*pcVar13 == pcVar13[lVar4]) {
          pcVar13 = pcVar13 + 1;
          if (pcVar5 <= pcVar13) goto LAB_180554ec0;
        }
      }
    }
  }
  return;
LAB_180554ec0:
  if (puVar11 != (uint64_t *)0x0) {
    puStack_60 = &system_data_buffer_ptr;
    uStack_48 = 0;
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
        pcVar5 = pcVar5 + (longlong)pcVar13;
        if (pcVar5 <= pcVar13) {
LAB_180554f73:
          lVar4 = 0x180d48d24;
          if (puVar14[1] != 0) {
            lVar4 = puVar14[1];
          }
          FUN_180627c50(&puStack_60,lVar4);
          break;
        }
        lVar4 = (longlong)&unknown_var_1288_ptr - (longlong)pcVar13;
        while (*pcVar13 == pcVar13[lVar4]) {
          pcVar13 = pcVar13 + 1;
          if (pcVar5 <= pcVar13) goto LAB_180554f73;
        }
      }
    }
    puVar14 = *(uint64_t **)(param_1 + 0x10);
    puVar15 = (uint64_t *)puVar14[2];
    puVar6 = puVar14;
    if (puVar15 == (uint64_t *)0x0) {
LAB_180555049:
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
              uVar10 = (uint)pbVar9[puVar15[5] - (longlong)pbStack_58];
              iVar12 = *pbVar9 - uVar10;
              if (*pbVar9 != uVar10) break;
              pbVar9 = pbVar9 + 1;
            } while (uVar10 != 0);
            bVar3 = 0 < iVar12;
            if (iVar12 < 1) {
              puVar16 = (uint64_t *)puVar15[1];
              goto LAB_18055500b;
            }
          }
          puVar16 = (uint64_t *)*puVar15;
        }
LAB_18055500b:
        puVar7 = puVar15;
        if (bVar3) {
          puVar7 = puVar6;
        }
        puVar6 = puVar7;
        puVar15 = puVar16;
      } while (puVar16 != (uint64_t *)0x0);
      if (puVar7 == puVar14) goto LAB_180555049;
      if (*(int *)(puVar7 + 6) != 0) {
        if (iStack_50 != 0) {
          pbVar9 = (byte *)puVar7[5];
          lVar4 = (longlong)pbStack_58 - (longlong)pbVar9;
          do {
            bVar1 = *pbVar9;
            uVar10 = (uint)pbVar9[lVar4];
            if (bVar1 != uVar10) break;
            pbVar9 = pbVar9 + 1;
          } while (uVar10 != 0);
          if ((int)(bVar1 - uVar10) < 1) goto LAB_18055504c;
        }
        goto LAB_180555049;
      }
    }
LAB_18055504c:
    if (puVar7 == puVar14) {
      uVar2 = puVar14[4];
      puVar8 = (int32_t *)FUN_1800c2970(puVar14,&puStack_60);
      *puVar8 = (int)uVar2;
    }
    puStack_60 = &system_data_buffer_ptr;
    if (pbStack_58 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  pcVar13 = "full_movement_set";
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
    } while (pcVar5 != pcVar17 + -0x180a34e4f);
    pcVar5 = pcVar5 + (longlong)pcVar13;
    if (pcVar5 <= pcVar13) break;
    lVar4 = (longlong)&unknown_var_3360_ptr - (longlong)pcVar13;
    while (*pcVar13 == pcVar13[lVar4]) {
      pcVar13 = pcVar13 + 1;
      if (pcVar5 <= pcVar13) goto LAB_180554ec0;
    }
  }
  goto LAB_180554ec0;
}





// 函数: void FUN_180555100(longlong *param_1,longlong param_2)
void FUN_180555100(longlong *param_1,longlong param_2)

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
  longlong lVar10;
  byte *pbVar11;
  longlong lVar12;
  int iVar13;
  char *pcVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  char *pcVar17;
  char *pcVar18;
  int8_t auStackX_10 [8];
  void *puStack_50;
  byte *pbStack_48;
  int iStack_40;
  uint64_t uStack_38;
  
  if (param_2 != 0) {
    pcVar14 = "full_movement_set";
    do {
      pcVar17 = pcVar14;
      pcVar14 = pcVar17 + 1;
    } while (*pcVar14 != '\0');
    pcVar14 = *(char **)(param_2 + 0x30);
    if (pcVar14 != (char *)0x0) {
      pcVar18 = (char *)0x0;
      do {
        pcVar7 = *(char **)pcVar14;
        if (pcVar7 == (char *)0x0) {
          pcVar7 = (char *)0x180d48d24;
          pcVar6 = pcVar18;
        }
        else {
          pcVar6 = *(char **)(pcVar14 + 0x10);
        }
        if (pcVar6 == pcVar17 + -0x180a34e4f) {
          pcVar6 = pcVar6 + (longlong)pcVar7;
          if (pcVar6 <= pcVar7) goto LAB_1805551c0;
          lVar10 = (longlong)&unknown_var_3360_ptr - (longlong)pcVar7;
          while (*pcVar7 == pcVar7[lVar10]) {
            pcVar7 = pcVar7 + 1;
            if (pcVar6 <= pcVar7) goto LAB_1805551c0;
          }
        }
        pcVar14 = *(char **)(pcVar14 + 0x58);
      } while (pcVar14 != (char *)0x0);
    }
  }
  return;
LAB_1805551c0:
  puStack_50 = &system_data_buffer_ptr;
  uStack_38 = 0;
  pbStack_48 = (byte *)0x0;
  iStack_40 = 0;
  pcVar17 = "id";
  do {
    pcVar7 = pcVar17;
    pcVar17 = pcVar7 + 1;
  } while (*pcVar17 != '\0');
  for (puVar15 = *(uint64_t **)(pcVar14 + 0x40); puVar15 != (uint64_t *)0x0;
      puVar15 = (uint64_t *)puVar15[6]) {
    pcVar17 = (char *)*puVar15;
    if (pcVar17 == (char *)0x0) {
      pcVar17 = (char *)0x180d48d24;
      pcVar6 = pcVar18;
    }
    else {
      pcVar6 = (char *)puVar15[2];
    }
    if (pcVar6 == pcVar7 + -0x180a0ae27) {
      pcVar6 = pcVar6 + (longlong)pcVar17;
      if (pcVar6 <= pcVar17) {
LAB_180555246:
        lVar10 = 0x180d48d24;
        if (puVar15[1] != 0) {
          lVar10 = puVar15[1];
        }
        FUN_180627c50(&puStack_50,lVar10);
        lVar10 = *param_1;
        puVar15 = (uint64_t *)param_1[2];
        puVar4 = puVar15;
        puVar3 = (uint64_t *)puVar15[2];
        goto joined_r0x00018055527b;
      }
      lVar10 = (longlong)&unknown_var_1288_ptr - (longlong)pcVar17;
      while (*pcVar17 == pcVar17[lVar10]) {
        pcVar17 = pcVar17 + 1;
        if (pcVar6 <= pcVar17) goto LAB_180555246;
      }
    }
  }
  goto LAB_18055535c;
joined_r0x00018055527b:
  puVar5 = puVar4;
  if (puVar3 != (uint64_t *)0x0) {
    if (iStack_40 == 0) {
      bVar2 = false;
      puVar16 = (uint64_t *)puVar3[1];
    }
    else {
      if (*(int *)(puVar3 + 6) == 0) {
        bVar2 = true;
      }
      else {
        pbVar11 = pbStack_48;
        do {
          uVar9 = (uint)pbVar11[puVar3[5] - (longlong)pbStack_48];
          iVar13 = *pbVar11 - uVar9;
          if (*pbVar11 != uVar9) break;
          pbVar11 = pbVar11 + 1;
        } while (uVar9 != 0);
        bVar2 = 0 < iVar13;
        if (iVar13 < 1) {
          puVar16 = (uint64_t *)puVar3[1];
          goto LAB_1805552db;
        }
      }
      puVar16 = (uint64_t *)*puVar3;
    }
LAB_1805552db:
    puVar4 = puVar3;
    puVar3 = puVar16;
    if (bVar2) {
      puVar4 = puVar5;
    }
    goto joined_r0x00018055527b;
  }
  if (puVar5 != puVar15) {
    if (*(int *)(puVar5 + 6) == 0) goto LAB_18055533b;
    if (iStack_40 != 0) {
      pbVar11 = (byte *)puVar5[5];
      lVar12 = (longlong)pbStack_48 - (longlong)pbVar11;
      do {
        bVar1 = *pbVar11;
        uVar9 = (uint)pbVar11[lVar12];
        if (bVar1 != uVar9) break;
        pbVar11 = pbVar11 + 1;
      } while (uVar9 != 0);
      if ((int)(bVar1 - uVar9) < 1) goto LAB_18055533b;
    }
  }
  puVar5 = (uint64_t *)FUN_1800c2ab0(puVar15,auStackX_10);
  puVar5 = (uint64_t *)*puVar5;
LAB_18055533b:
  FUN_180554640((longlong)*(int *)(puVar5 + 8) * 0x80 + lVar10,pcVar14);
LAB_18055535c:
  puStack_50 = &system_data_buffer_ptr;
  if (pbStack_48 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  pcVar17 = "full_movement_set";
  do {
    pcVar7 = pcVar17;
    pcVar17 = pcVar7 + 1;
  } while (*pcVar17 != '\0');
  for (pcVar17 = *(char **)(pcVar14 + 0x58); pcVar14 = pcVar18, pcVar17 != (char *)0x0;
      pcVar17 = *(char **)(pcVar17 + 0x58)) {
    pcVar6 = *(char **)pcVar17;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)0x180d48d24;
      pcVar8 = pcVar18;
    }
    else {
      pcVar8 = *(char **)(pcVar17 + 0x10);
    }
    if (pcVar8 == pcVar7 + -0x180a34e4f) {
      pcVar8 = pcVar6 + (longlong)pcVar8;
      pcVar14 = pcVar17;
      if (pcVar8 <= pcVar6) break;
      lVar10 = (longlong)&unknown_var_3360_ptr - (longlong)pcVar6;
      while (*pcVar6 == pcVar6[lVar10]) {
        pcVar6 = pcVar6 + 1;
        if (pcVar8 <= pcVar6) goto LAB_1805553ee;
      }
    }
  }
LAB_1805553ee:
  if (pcVar14 == (char *)0x0) {
    return;
  }
  goto LAB_1805551c0;
}





// 函数: void FUN_180555430(longlong param_1)
void FUN_180555430(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint64_t *puVar3;
  ulonglong uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(ulonglong *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  uVar4 = 0;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      puVar3 = (uint64_t *)(uVar4 + param_1);
      *puVar3 = &system_data_buffer_ptr;
      if (puVar3[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar3[1] = 0;
      *(int32_t *)(puVar3 + 3) = 0;
      *puVar3 = &system_state_ptr;
      uVar4 = (ulonglong)(uint)((int)uVar4 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900((ulonglong *)(param_1 + -0x10));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



