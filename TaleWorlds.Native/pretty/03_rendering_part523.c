#include "TaleWorlds.Native.Split.h"

// 03_rendering_part523.c - 1 个函数

// 函数: void FUN_18054ff10(int32_t *param_1,int64_t param_2)
void FUN_18054ff10(int32_t *param_1,int64_t param_2)

{
  int iVar1;
  int32_t uVar2;
  char *pcVar3;
  char *pcVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  char *pcVar8;
  char *pcVar9;
  void *puStack_c8;
  int8_t *puStack_c0;
  int iStack_b8;
  uint64_t uStack_b0;
  void *puStack_a8;
  int64_t lStack_a0;
  int iStack_98;
  uint64_t uStack_90;
  void *puStack_88;
  int64_t lStack_80;
  int iStack_78;
  uint64_t uStack_70;
  void *puStack_68;
  int64_t lStack_60;
  int iStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  if (param_2 == 0) {
    return;
  }
  uStack_48 = 0xfffffffffffffffe;
  pcVar4 = (char *)0x0;
  puStack_a8 = &system_data_buffer_ptr;
  uStack_90 = 0;
  lStack_a0 = 0;
  iStack_98 = 0;
  pcVar8 = "style";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar3 = pcVar4;
    }
    else {
      pcVar3 = (char *)puVar7[2];
    }
    if (pcVar3 == pcVar9 + -0x180a3467b) {
      pcVar3 = pcVar8 + (int64_t)pcVar3;
      if (pcVar3 <= pcVar8) {
LAB_18054ffe0:
        lVar5 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar5 = puVar7[1];
        }
        CoreSystem_ConfigValidator0(&puStack_a8,lVar5);
        break;
      }
      lVar5 = (int64_t)&ui_system_data_1356_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_18054ffe0;
      }
    }
  }
  lVar5 = lStack_a0;
  if (iStack_98 == 9) {
    iVar1 = strcmp(lStack_a0,&ui_system_data_1424_ptr);
    if (iVar1 == 0) {
      *param_1 = 0;
      goto LAB_180550158;
    }
    iVar1 = strcmp(lVar5,&ui_system_data_1624_ptr);
    if (iVar1 == 0) {
      *param_1 = 4;
      goto LAB_180550158;
    }
  }
  else if (iStack_98 == 0xb) {
    iVar1 = strcmp(lStack_a0,&ui_system_data_1408_ptr);
    if (iVar1 == 0) {
      *param_1 = 1;
      goto LAB_180550158;
    }
    iVar1 = strcmp(lVar5,&ui_system_data_1592_ptr);
    if (iVar1 == 0) {
      *param_1 = 2;
      goto LAB_180550158;
    }
    iVar1 = strcmp(lVar5,&ui_system_data_1608_ptr);
    if (iVar1 == 0) {
      *param_1 = 5;
      goto LAB_180550158;
    }
    iVar1 = strcmp(lVar5,&ui_system_data_1528_ptr);
    if (iVar1 == 0) {
      *param_1 = 6;
      goto LAB_180550158;
    }
  }
  else if (iStack_98 == 0xc) {
    iVar1 = strcmp(lStack_a0,&ui_system_data_1576_ptr);
    if (iVar1 == 0) {
      *param_1 = 3;
      goto LAB_180550158;
    }
    iVar1 = strcmp(lVar5,&ui_system_data_1512_ptr);
    if (iVar1 == 0) {
      *param_1 = 7;
      goto LAB_180550158;
    }
  }
  else if (iStack_98 == 10) {
    iVar1 = strcmp(lStack_a0,&ui_system_data_1560_ptr);
    if (iVar1 == 0) {
      *param_1 = 8;
      goto LAB_180550158;
    }
    iVar1 = strcmp(lVar5,&ui_system_data_1544_ptr);
    if (iVar1 == 0) {
      *param_1 = 9;
      goto LAB_180550158;
    }
  }
  SystemCore_ResourceManager0(&ui_system_data_1744_ptr);
  *param_1 = 0xffffffff;
LAB_180550158:
  *(int8_t *)(param_1 + 1) = 0;
  FUN_180631000(param_2,&ui_system_data_1728_ptr);
  *(int8_t *)((int64_t)param_1 + 5) = 0;
  FUN_180631000(param_2,&ui_system_data_1800_ptr);
  *(int8_t *)((int64_t)param_1 + 6) = 0;
  FUN_180631000(param_2,&ui_system_data_1776_ptr);
  param_1[2] = 0xffffffff;
  puStack_68 = &system_data_buffer_ptr;
  uStack_50 = 0;
  lStack_60 = 0;
  iStack_58 = 0;
  pcVar8 = "require_left_hand_usage_root_set";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar3 = pcVar4;
    }
    else {
      pcVar3 = (char *)puVar7[2];
    }
    if (pcVar3 == pcVar9 + -0x180a34687) {
      pcVar3 = pcVar3 + (int64_t)pcVar8;
      if (pcVar3 <= pcVar8) {
LAB_180550225:
        lVar5 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar5 = puVar7[1];
        }
        CoreSystem_ConfigValidator0(&puStack_68,lVar5);
        break;
      }
      lVar5 = (int64_t)&ui_system_data_1368_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_180550225;
      }
    }
  }
  if (0 < iStack_58) {
    uVar2 = FUN_180552800(&system_data_5ff0,&puStack_68);
    param_1[2] = uVar2;
  }
  puStack_c8 = &system_data_buffer_ptr;
  uStack_b0 = 0;
  puStack_c0 = (int8_t *)0x0;
  iStack_b8 = 0;
  param_1[7] = 0xffffffff;
  pcVar8 = "ready_action";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar3 = pcVar4;
    }
    else {
      pcVar3 = (char *)puVar7[2];
    }
    if (pcVar3 == pcVar9 + -0x180a347af) {
      pcVar3 = pcVar3 + (int64_t)pcVar8;
      if (pcVar3 <= pcVar8) {
LAB_1805502e0:
        lVar5 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar5 = puVar7[1];
        }
        CoreSystem_ConfigValidator0(&puStack_c8,lVar5);
        break;
      }
      lVar5 = (int64_t)&ui_system_data_1664_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_1805502e0;
      }
    }
  }
  if (0 < iStack_b8) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_c8);
    param_1[7] = uVar2;
  }
  iStack_b8 = 0;
  if (puStack_c0 != (int8_t *)0x0) {
    *puStack_c0 = 0;
  }
  param_1[8] = 0xffffffff;
  pcVar8 = "ready_from_up_action";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar3 = pcVar4;
    }
    else {
      pcVar3 = (char *)puVar7[2];
    }
    if (pcVar3 == pcVar9 + -0x180a34797) {
      pcVar3 = pcVar3 + (int64_t)pcVar8;
      if (pcVar3 <= pcVar8) {
LAB_180550390:
        lVar5 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar5 = puVar7[1];
        }
        (**(code **)(puStack_c8 + 0x10))(&puStack_c8,lVar5);
        break;
      }
      lVar5 = (int64_t)&ui_system_data_1640_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_180550390;
      }
    }
  }
  if (0 < iStack_b8) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_c8);
    param_1[8] = uVar2;
  }
  iStack_b8 = 0;
  if (puStack_c0 != (int8_t *)0x0) {
    *puStack_c0 = 0;
  }
  param_1[9] = 0xffffffff;
  pcVar8 = "ready_from_down_action";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar3 = pcVar4;
    }
    else {
      pcVar3 = (char *)puVar7[2];
    }
    if (pcVar3 == pcVar9 + -0x180a347d7) {
      pcVar3 = pcVar3 + (int64_t)pcVar8;
      if (pcVar3 <= pcVar8) {
LAB_180550440:
        lVar5 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar5 = puVar7[1];
        }
        (**(code **)(puStack_c8 + 0x10))(&puStack_c8,lVar5);
        break;
      }
      lVar5 = (int64_t)&ui_system_data_1704_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_180550440;
      }
    }
  }
  if (0 < iStack_b8) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_c8);
    param_1[9] = uVar2;
  }
  iStack_b8 = 0;
  if (puStack_c0 != (int8_t *)0x0) {
    *puStack_c0 = 0;
  }
  param_1[10] = 0xffffffff;
  pcVar8 = "ready_from_left_action";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar3 = pcVar4;
    }
    else {
      pcVar3 = (char *)puVar7[2];
    }
    if (pcVar3 == pcVar9 + -0x180a347bf) {
      pcVar3 = pcVar3 + (int64_t)pcVar8;
      if (pcVar3 <= pcVar8) {
LAB_1805504f0:
        lVar5 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar5 = puVar7[1];
        }
        (**(code **)(puStack_c8 + 0x10))(&puStack_c8,lVar5);
        break;
      }
      lVar5 = (int64_t)&ui_system_data_1680_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_1805504f0;
      }
    }
  }
  if (0 < iStack_b8) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_c8);
    param_1[10] = uVar2;
  }
  iStack_b8 = 0;
  if (puStack_c0 != (int8_t *)0x0) {
    *puStack_c0 = 0;
  }
  param_1[0xb] = 0xffffffff;
  pcVar8 = "ready_from_right_action";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar3 = pcVar4;
    }
    else {
      pcVar3 = (char *)puVar7[2];
    }
    if (pcVar3 == pcVar9 + -0x180a348b7) {
      pcVar3 = pcVar8 + (int64_t)pcVar3;
      if (pcVar3 <= pcVar8) {
LAB_1805505a0:
        lVar5 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar5 = puVar7[1];
        }
        (**(code **)(puStack_c8 + 0x10))(&puStack_c8,lVar5);
        break;
      }
      lVar5 = (int64_t)&ui_system_data_1928_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_1805505a0;
      }
    }
  }
  if (0 < iStack_b8) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_c8);
    param_1[0xb] = uVar2;
  }
  iStack_b8 = 0;
  if (puStack_c0 != (int8_t *)0x0) {
    *puStack_c0 = 0;
  }
  param_1[0xc] = 0xffffffff;
  pcVar8 = "quick_release_action";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar3 = pcVar4;
    }
    else {
      pcVar3 = (char *)puVar7[2];
    }
    if (pcVar3 == pcVar9 + -0x180a3489f) {
      pcVar3 = pcVar3 + (int64_t)pcVar8;
      if (pcVar3 <= pcVar8) {
LAB_180550650:
        lVar5 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar5 = puVar7[1];
        }
        (**(code **)(puStack_c8 + 0x10))(&puStack_c8,lVar5);
        break;
      }
      lVar5 = (int64_t)&ui_system_data_1904_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_180550650;
      }
    }
  }
  if (0 < iStack_b8) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_c8);
    param_1[0xc] = uVar2;
  }
  iStack_b8 = 0;
  if (puStack_c0 != (int8_t *)0x0) {
    *puStack_c0 = 0;
  }
  param_1[0xd] = 0xffffffff;
  pcVar8 = "release_action";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar3 = pcVar4;
    }
    else {
      pcVar3 = (char *)puVar7[2];
    }
    if (pcVar3 == pcVar9 + -0x180a348e7) {
      pcVar3 = pcVar8 + (int64_t)pcVar3;
      if (pcVar3 <= pcVar8) {
LAB_180550700:
        lVar5 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar5 = puVar7[1];
        }
        (**(code **)(puStack_c8 + 0x10))(&puStack_c8,lVar5);
        break;
      }
      lVar5 = (int64_t)&ui_system_data_1976_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_180550700;
      }
    }
  }
  if (0 < iStack_b8) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_c8);
    param_1[0xd] = uVar2;
  }
  iStack_b8 = 0;
  if (puStack_c0 != (int8_t *)0x0) {
    *puStack_c0 = 0;
  }
  param_1[0xe] = 0xffffffff;
  pcVar8 = "quick_blocked_action";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar3 = pcVar4;
    }
    else {
      pcVar3 = (char *)puVar7[2];
    }
    if (pcVar3 == pcVar9 + -0x180a348cf) {
      pcVar3 = pcVar3 + (int64_t)pcVar8;
      if (pcVar3 <= pcVar8) {
LAB_1805507b0:
        lVar5 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar5 = puVar7[1];
        }
        (**(code **)(puStack_c8 + 0x10))(&puStack_c8,lVar5);
        break;
      }
      lVar5 = (int64_t)&ui_system_data_1952_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_1805507b0;
      }
    }
  }
  if (0 < iStack_b8) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_c8);
    param_1[0xe] = uVar2;
  }
  iStack_b8 = 0;
  if (puStack_c0 != (int8_t *)0x0) {
    *puStack_c0 = 0;
  }
  param_1[0xf] = 0xffffffff;
  pcVar8 = "blocked_action";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar3 = pcVar4;
    }
    else {
      pcVar3 = (char *)puVar7[2];
    }
    if (pcVar3 == pcVar9 + -0x180a3485f) {
      pcVar3 = pcVar3 + (int64_t)pcVar8;
      if (pcVar3 <= pcVar8) {
LAB_180550860:
        lVar5 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar5 = puVar7[1];
        }
        (**(code **)(puStack_c8 + 0x10))(&puStack_c8,lVar5);
        break;
      }
      lVar5 = (int64_t)&ui_system_data_1840_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_180550860;
      }
    }
  }
  if (0 < iStack_b8) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_c8);
    param_1[0xf] = uVar2;
  }
  iStack_b8 = 0;
  if (puStack_c0 != (int8_t *)0x0) {
    *puStack_c0 = 0;
  }
  param_1[0x10] = 0xffffffff;
  pcVar8 = "quick_stuck_action";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar3 = pcVar4;
    }
    else {
      pcVar3 = (char *)puVar7[2];
    }
    if (pcVar3 == pcVar9 + -0x180a34847) {
      pcVar3 = pcVar3 + (int64_t)pcVar8;
      if (pcVar3 <= pcVar8) {
LAB_180550910:
        lVar5 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar5 = puVar7[1];
        }
        (**(code **)(puStack_c8 + 0x10))(&puStack_c8,lVar5);
        break;
      }
      lVar5 = (int64_t)&ui_system_data_1816_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_180550910;
      }
    }
  }
  if (0 < iStack_b8) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_c8);
    param_1[0x10] = uVar2;
  }
  iStack_b8 = 0;
  if (puStack_c0 != (int8_t *)0x0) {
    *puStack_c0 = 0;
  }
  param_1[0x11] = 0xffffffff;
  pcVar8 = "stuck_action";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar3 = pcVar4;
    }
    else {
      pcVar3 = (char *)puVar7[2];
    }
    if (pcVar3 == pcVar9 + -0x180a3488f) {
      pcVar3 = pcVar3 + (int64_t)pcVar8;
      if (pcVar3 <= pcVar8) {
LAB_1805509c0:
        lVar5 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar5 = puVar7[1];
        }
        (**(code **)(puStack_c8 + 0x10))(&puStack_c8,lVar5);
        break;
      }
      lVar5 = (int64_t)&ui_system_data_1888_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_1805509c0;
      }
    }
  }
  if (0 < iStack_b8) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_c8);
    param_1[0x11] = uVar2;
  }
  iStack_b8 = 0;
  if (puStack_c0 != (int8_t *)0x0) {
    *puStack_c0 = 0;
  }
  param_1[0x12] = 0xffffffff;
  pcVar8 = "ready_continue_ranged_action";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar3 = pcVar4;
    }
    else {
      pcVar3 = (char *)puVar7[2];
    }
    if (pcVar3 == pcVar9 + -0x180a3486f) {
      pcVar3 = pcVar8 + (int64_t)pcVar3;
      if (pcVar3 <= pcVar8) {
LAB_180550a74:
        lVar5 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar5 = puVar7[1];
        }
        (**(code **)(puStack_c8 + 0x10))(&puStack_c8,lVar5);
        break;
      }
      lVar5 = (int64_t)&ui_system_data_1856_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_180550a74;
      }
    }
  }
  if (0 < iStack_b8) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_c8);
    param_1[0x12] = uVar2;
  }
  iStack_b8 = 0;
  if (puStack_c0 != (int8_t *)0x0) {
    *puStack_c0 = 0;
  }
  param_1[0x13] = 0xffffffff;
  pcVar8 = "ready_continue_shake_action";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar3 = pcVar4;
    }
    else {
      pcVar3 = (char *)puVar7[2];
    }
    if (pcVar3 == pcVar9 + -0x180a34967) {
      pcVar3 = pcVar3 + (int64_t)pcVar8;
      if (pcVar3 <= pcVar8) {
LAB_180550b25:
        lVar5 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar5 = puVar7[1];
        }
        (**(code **)(puStack_c8 + 0x10))(&puStack_c8,lVar5);
        break;
      }
      lVar5 = (int64_t)&rendering_buffer_2104_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_180550b25;
      }
    }
  }
  if (0 < iStack_b8) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_c8);
    param_1[0x13] = uVar2;
  }
  iStack_b8 = 0;
  if (puStack_c0 != (int8_t *)0x0) {
    *puStack_c0 = 0;
  }
  param_1[0x14] = 0xffffffff;
  pcVar8 = "reload_action";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar3 = pcVar4;
    }
    else {
      pcVar3 = (char *)puVar7[2];
    }
    if (pcVar3 == pcVar9 + -0x180a34957) {
      pcVar3 = pcVar3 + (int64_t)pcVar8;
      if (pcVar3 <= pcVar8) {
LAB_180550be0:
        lVar5 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar5 = puVar7[1];
        }
        (**(code **)(puStack_c8 + 0x10))(&puStack_c8,lVar5);
        break;
      }
      lVar5 = (int64_t)&rendering_buffer_2088_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_180550be0;
      }
    }
  }
  if (0 < iStack_b8) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_c8);
    param_1[0x14] = uVar2;
  }
  iStack_b8 = 0;
  if (puStack_c0 != (int8_t *)0x0) {
    *puStack_c0 = 0;
  }
  param_1[3] = 0xffffffff;
  pcVar8 = "defend_action";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar3 = pcVar4;
    }
    else {
      pcVar3 = (char *)puVar7[2];
    }
    if (pcVar3 == pcVar9 + -0x180a3499f) {
      pcVar3 = pcVar3 + (int64_t)pcVar8;
      if (pcVar3 <= pcVar8) {
LAB_180550c94:
        lVar5 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar5 = puVar7[1];
        }
        (**(code **)(puStack_c8 + 0x10))(&puStack_c8,lVar5);
        break;
      }
      lVar5 = (int64_t)&rendering_buffer_2160_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_180550c94;
      }
    }
  }
  if (0 < iStack_b8) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_c8);
    param_1[3] = uVar2;
  }
  iStack_b8 = 0;
  if (puStack_c0 != (int8_t *)0x0) {
    *puStack_c0 = 0;
  }
  param_1[4] = 0xffffffff;
  lVar5 = FUN_1800a02a0(param_2,&rendering_buffer_2136_ptr);
  if (lVar5 != 0) {
    lVar6 = 0x180d48d24;
    if (*(int64_t *)(lVar5 + 8) != 0) {
      lVar6 = *(int64_t *)(lVar5 + 8);
    }
    (**(code **)(puStack_c8 + 0x10))(&puStack_c8,lVar6);
  }
  if (0 < iStack_b8) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_c8);
    param_1[4] = uVar2;
  }
  iStack_b8 = 0;
  if (puStack_c0 != (int8_t *)0x0) {
    *puStack_c0 = 0;
  }
  param_1[5] = 0xffffffff;
  lVar5 = FUN_1800a02a0(param_2,&rendering_buffer_2032_ptr);
  if (lVar5 != 0) {
    lVar6 = 0x180d48d24;
    if (*(int64_t *)(lVar5 + 8) != 0) {
      lVar6 = *(int64_t *)(lVar5 + 8);
    }
    (**(code **)(puStack_c8 + 0x10))(&puStack_c8,lVar6);
  }
  if (0 < iStack_b8) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_c8);
    param_1[5] = uVar2;
  }
  iStack_b8 = 0;
  if (puStack_c0 != (int8_t *)0x0) {
    *puStack_c0 = 0;
  }
  param_1[6] = 0xffffffff;
  lVar5 = FUN_1800a02a0(param_2,&ui_system_data_1992_ptr);
  if (lVar5 != 0) {
    lVar6 = 0x180d48d24;
    if (*(int64_t *)(lVar5 + 8) != 0) {
      lVar6 = *(int64_t *)(lVar5 + 8);
    }
    (**(code **)(puStack_c8 + 0x10))(&puStack_c8,lVar6);
  }
  if (0 < iStack_b8) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_c8);
    param_1[6] = uVar2;
  }
  param_1[0x41] = 0xffffffff;
  puStack_88 = &system_data_buffer_ptr;
  uStack_70 = 0;
  lStack_80 = 0;
  iStack_78 = 0;
  lVar5 = FUN_1800a02a0(param_2,&rendering_buffer_2072_ptr);
  if (lVar5 != 0) {
    lVar6 = 0x180d48d24;
    if (*(int64_t *)(lVar5 + 8) != 0) {
      lVar6 = *(int64_t *)(lVar5 + 8);
    }
    (**(code **)(puStack_88 + 0x10))(&puStack_88,lVar6);
  }
  if (iStack_78 == 5) {
    do {
      pcVar8 = pcVar4 + 1;
      if (pcVar4[lStack_80] != pcVar4[0x180a3493c]) goto LAB_180550eae;
      pcVar4 = pcVar8;
    } while (pcVar8 != (char *)0x6);
    param_1[0x41] = 0;
  }
  else if (iStack_78 == 6) {
    do {
      pcVar8 = pcVar4 + 1;
      if (pcVar4[lStack_80] != pcVar4[0x180a34a24]) goto LAB_180550eae;
      pcVar4 = pcVar8;
    } while (pcVar8 != (char *)0x7);
    param_1[0x41] = 1;
  }
LAB_180550eae:
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(uint64_t *)(param_1 + 0x19) = 0;
  *(uint64_t *)(param_1 + 0x1b) = 0;
  param_1[0x1d] = 0;
  *(int8_t *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0xffffffff;
  FUN_180631960(param_2,&rendering_buffer_2272_ptr);
  FUN_180631850(param_2,&rendering_buffer_2328_ptr,param_1 + 0x19);
  FUN_180631850(param_2,&rendering_buffer_2304_ptr,param_1 + 0x1b);
  FUN_1806313c0(param_2,&rendering_buffer_2200_ptr,param_1 + 0x1d);
  param_1[0x19] = (float)param_1[0x19] * 0.017453292;
  param_1[0x1a] = (float)param_1[0x1a] * 0.017453292;
  param_1[0x1b] = (float)param_1[0x1b] * 0.017453292;
  param_1[0x1c] = (float)param_1[0x1c] * 0.017453292;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(uint64_t *)(param_1 + 0x24) = 0;
  *(uint64_t *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  *(int8_t *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0xffffffff;
  FUN_180631960(param_2,&rendering_buffer_2176_ptr);
  FUN_180631850(param_2,&rendering_buffer_2248_ptr,param_1 + 0x24);
  FUN_180631850(param_2,&system_callback2_ptr,param_1 + 0x26);
  FUN_1806313c0(param_2,&rendering_buffer_2512_ptr,param_1 + 0x28);
  param_1[0x24] = (float)param_1[0x24] * 0.017453292;
  param_1[0x25] = (float)param_1[0x25] * 0.017453292;
  param_1[0x26] = (float)param_1[0x26] * 0.017453292;
  param_1[0x27] = (float)param_1[0x27] * 0.017453292;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(uint64_t *)(param_1 + 0x2f) = 0;
  *(uint64_t *)(param_1 + 0x31) = 0;
  param_1[0x33] = 0;
  *(int8_t *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0xffffffff;
  FUN_180631960(param_2,&rendering_buffer_2480_ptr);
  FUN_180631850(param_2,&rendering_buffer_2560_ptr,param_1 + 0x2f);
  FUN_180631850(param_2,&rendering_buffer_2528_ptr,param_1 + 0x31);
  FUN_1806313c0(param_2,&rendering_buffer_2384_ptr,param_1 + 0x33);
  param_1[0x2f] = (float)param_1[0x2f] * 0.017453292;
  param_1[0x30] = (float)param_1[0x30] * 0.017453292;
  param_1[0x31] = (float)param_1[0x31] * 0.017453292;
  param_1[0x32] = (float)param_1[0x32] * 0.017453292;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(uint64_t *)(param_1 + 0x3a) = 0;
  *(uint64_t *)(param_1 + 0x3c) = 0;
  param_1[0x3e] = 0;
  *(int8_t *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0xffffffff;
  FUN_180631960(param_2,&rendering_buffer_2352_ptr);
  FUN_180631850(param_2,&rendering_buffer_2448_ptr,param_1 + 0x3a);
  FUN_180631850(param_2,&rendering_buffer_2416_ptr,param_1 + 0x3c);
  FUN_1806313c0(param_2,&rendering_buffer_2688_ptr,param_1 + 0x3e);
  param_1[0x3a] = (float)param_1[0x3a] * 0.017453292;
  param_1[0x3b] = (float)param_1[0x3b] * 0.017453292;
  param_1[0x3c] = (float)param_1[0x3c] * 0.017453292;
  param_1[0x3d] = (float)param_1[0x3d] * 0.017453292;
  puStack_88 = &system_data_buffer_ptr;
  if (lStack_80 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_80 = 0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  puStack_88 = &system_state_ptr;
  puStack_c8 = &system_data_buffer_ptr;
  if (puStack_c0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  puStack_c0 = (int8_t *)0x0;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  puStack_c8 = &system_state_ptr;
  puStack_68 = &system_data_buffer_ptr;
  if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_60 = 0;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  puStack_68 = &system_state_ptr;
  puStack_a8 = &system_data_buffer_ptr;
  if (lStack_a0 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}





