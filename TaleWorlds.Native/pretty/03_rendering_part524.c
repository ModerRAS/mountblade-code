#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part524.c - 4 个函数

// 函数: void FUN_1805511b0(int32_t *param_1,int64_t param_2)
void FUN_1805511b0(int32_t *param_1,int64_t param_2)

{
  float *pfVar1;
  float *pfVar2;
  int32_t uVar3;
  char *pcVar4;
  char *pcVar5;
  int64_t lVar6;
  char *pcVar7;
  uint64_t *puVar8;
  char *pcVar9;
  void *puStack_a0;
  char *pcStack_98;
  int iStack_90;
  uint64_t uStack_88;
  void *puStack_80;
  int64_t lStack_78;
  int iStack_70;
  uint64_t uStack_68;
  void *puStack_60;
  int64_t lStack_58;
  int iStack_50;
  uint64_t uStack_48;
  
  if (param_2 == 0) {
    return;
  }
  pcVar7 = (char *)0x0;
  puStack_a0 = &system_data_buffer_ptr;
  uStack_88 = 0;
  pcStack_98 = (char *)0x0;
  iStack_90 = 0;
  pcVar9 = "style";
  do {
    pcVar5 = pcVar9;
    pcVar9 = pcVar5 + 1;
  } while (*pcVar9 != '\0');
  for (puVar8 = *(uint64_t **)(param_2 + 0x40); puVar8 != (uint64_t *)0x0;
      puVar8 = (uint64_t *)puVar8[6]) {
    pcVar9 = (char *)*puVar8;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x180d48d24;
      pcVar4 = pcVar7;
    }
    else {
      pcVar4 = (char *)puVar8[2];
    }
    if (pcVar4 == pcVar5 + -0x180a3467b) {
      pcVar4 = pcVar4 + (int64_t)pcVar9;
      if (pcVar4 <= pcVar9) {
LAB_180551280:
        lVar6 = 0x180d48d24;
        if (puVar8[1] != 0) {
          lVar6 = puVar8[1];
        }
        FUN_180627c50(&puStack_a0,lVar6,pcVar4,puVar8,0xfffffffffffffffe);
        break;
      }
      lVar6 = (int64_t)&unknown_var_1356_ptr - (int64_t)pcVar9;
      while (*pcVar9 == pcVar9[lVar6]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar4 <= pcVar9) goto LAB_180551280;
      }
    }
  }
  if (iStack_90 == 2) {
    if (((*pcStack_98 == 'u') && (pcStack_98[1] == 'p')) && (pcStack_98[2] == '\0')) {
      *param_1 = 0;
      goto LAB_1805513c0;
    }
  }
  else {
    pcVar9 = pcVar7;
    if (iStack_90 == 4) {
      do {
        pcVar4 = pcVar9 + 1;
        pcVar5 = pcVar7;
        if (pcStack_98[(int64_t)pcVar9] != pcVar9[0x180a34bd0]) goto LAB_180551330;
        pcVar9 = pcVar4;
      } while (pcVar4 != (char *)0x5);
      *param_1 = 1;
      goto LAB_1805513c0;
    }
    if (iStack_90 == 5) {
      do {
        pcVar5 = pcVar9 + 1;
        if (pcStack_98[(int64_t)pcVar9] != pcVar9[0x180a34b7c]) goto LAB_1805513ad;
        pcVar9 = pcVar5;
      } while (pcVar5 != (char *)0x6);
      *param_1 = 3;
      goto LAB_1805513c0;
    }
  }
LAB_1805513ad:
  FUN_180626f80(&unknown_var_2592_ptr);
  *param_1 = 0xfffffffe;
  goto LAB_1805513c0;
  while (pcVar5 = pcVar4, pcVar4 != (char *)0x5) {
LAB_180551330:
    pcVar4 = pcVar5 + 1;
    pcVar9 = pcVar7;
    if (pcStack_98[(int64_t)pcVar5] != pcVar5[0x180a34bc8]) goto LAB_180551360;
  }
  *param_1 = 2;
  goto LAB_1805513c0;
  while (pcVar9 = pcVar5, pcVar5 != (char *)0x5) {
LAB_180551360:
    pcVar5 = pcVar9 + 1;
    if (pcStack_98[(int64_t)pcVar9] != pcVar9[0x180a0b57c]) goto LAB_1805513ad;
  }
  *param_1 = 0xffffffff;
LAB_1805513c0:
  *(int8_t *)(param_1 + 1) = 0;
  FUN_180631000(param_2,&unknown_var_1800_ptr);
  *(int8_t *)((int64_t)param_1 + 5) = 0;
  FUN_180631000(param_2,&unknown_var_1776_ptr);
  param_1[2] = 0xffffffff;
  puStack_60 = &system_data_buffer_ptr;
  uStack_48 = 0;
  lStack_58 = 0;
  iStack_50 = 0;
  pcVar9 = "require_left_hand_usage_root_set";
  do {
    pcVar5 = pcVar9;
    pcVar9 = pcVar5 + 1;
  } while (*pcVar9 != '\0');
  for (puVar8 = *(uint64_t **)(param_2 + 0x40); puVar8 != (uint64_t *)0x0;
      puVar8 = (uint64_t *)puVar8[6]) {
    pcVar9 = (char *)*puVar8;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x180d48d24;
      pcVar4 = pcVar7;
    }
    else {
      pcVar4 = (char *)puVar8[2];
    }
    if (pcVar4 == pcVar5 + -0x180a34687) {
      pcVar4 = pcVar4 + (int64_t)pcVar9;
      if (pcVar4 <= pcVar9) {
LAB_180551475:
        lVar6 = 0x180d48d24;
        if (puVar8[1] != 0) {
          lVar6 = puVar8[1];
        }
        FUN_180627c50(&puStack_60,lVar6);
        break;
      }
      lVar6 = (int64_t)&unknown_var_1368_ptr - (int64_t)pcVar9;
      while (*pcVar9 == pcVar9[lVar6]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar4 <= pcVar9) goto LAB_180551475;
      }
    }
  }
  if (0 < iStack_50) {
    uVar3 = FUN_180552800(&system_data_5ff0,&puStack_60);
    param_1[2] = uVar3;
  }
  puStack_80 = &system_data_buffer_ptr;
  uStack_68 = 0;
  lStack_78 = 0;
  iStack_70 = 0;
  param_1[3] = 0xffffffff;
  pcVar9 = "action";
  do {
    pcVar5 = pcVar9;
    pcVar9 = pcVar5 + 1;
  } while (*pcVar9 != '\0');
  for (puVar8 = *(uint64_t **)(param_2 + 0x40); puVar8 != (uint64_t *)0x0;
      puVar8 = (uint64_t *)puVar8[6]) {
    pcVar9 = (char *)*puVar8;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x180d48d24;
      pcVar4 = pcVar7;
    }
    else {
      pcVar4 = (char *)puVar8[2];
    }
    if (pcVar4 == pcVar5 + -0x180a339df) {
      pcVar4 = pcVar9 + (int64_t)pcVar4;
      if (pcVar4 <= pcVar9) {
LAB_180551534:
        lVar6 = 0x180d48d24;
        if (puVar8[1] != 0) {
          lVar6 = puVar8[1];
        }
        FUN_180627c50(&puStack_80,lVar6);
        break;
      }
      lVar6 = (int64_t)&unknown_var_8128_ptr - (int64_t)pcVar9;
      while (*pcVar9 == pcVar9[lVar6]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar4 <= pcVar9) goto LAB_180551534;
      }
    }
  }
  if (0 < iStack_70) {
    uVar3 = FUN_18055b2f0(&system_data_6150,&puStack_80);
    param_1[3] = uVar3;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  *(int8_t *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0xffffffff;
  *(int8_t *)(param_1 + 0xd) = 1;
  param_1[0xe] = *param_1;
  FUN_180631960(param_2,&unknown_var_2664_ptr);
  FUN_180631850(param_2,&unknown_var_2648_ptr,param_1 + 8);
  FUN_180631850(param_2,&unknown_var_2816_ptr,param_1 + 10);
  pcVar9 = "arm_length";
  do {
    pcVar5 = pcVar9;
    pcVar9 = pcVar5 + 1;
  } while (*pcVar9 != '\0');
  for (puVar8 = *(uint64_t **)(param_2 + 0x40); pcVar9 = pcVar7, puVar8 != (uint64_t *)0x0;
      puVar8 = (uint64_t *)puVar8[6]) {
    pcVar9 = (char *)*puVar8;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x180d48d24;
      pcVar4 = pcVar7;
    }
    else {
      pcVar4 = (char *)puVar8[2];
    }
    if (pcVar4 == pcVar5 + -0x180a34c1f) {
      pcVar4 = pcVar4 + (int64_t)pcVar9;
      if (pcVar4 <= pcVar9) {
LAB_180551646:
        pcVar9 = (char *)0x180d48d24;
        if ((char *)puVar8[1] != (char *)0x0) {
          pcVar9 = (char *)puVar8[1];
        }
        break;
      }
      lVar6 = (int64_t)&unknown_var_2800_ptr - (int64_t)pcVar9;
      while (*pcVar9 == pcVar9[lVar6]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar4 <= pcVar9) goto LAB_180551646;
      }
    }
  }
  if ((param_1 + 0xc != (int32_t *)0x0) && (pcVar9 != (char *)0x0)) {
    FUN_18010cbc0(pcVar9,&system_data_6430,param_1 + 0xc);
  }
  param_1[8] = (float)param_1[8] * 0.017453292;
  param_1[9] = (float)param_1[9] * 0.017453292;
  param_1[10] = (float)param_1[10] * 0.017453292;
  param_1[0xb] = (float)param_1[0xb] * 0.017453292;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(uint64_t *)(param_1 + 0x13) = 0;
  *(uint64_t *)(param_1 + 0x15) = 0;
  param_1[0x17] = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0xffffffff;
  *(int8_t *)(param_1 + 0x18) = 1;
  param_1[0x19] = *param_1;
  FUN_180631960(param_2,&unknown_var_2856_ptr);
  pfVar1 = (float *)(param_1 + 0x13);
  FUN_180631850(param_2,&unknown_var_2832_ptr,pfVar1);
  pfVar2 = (float *)(param_1 + 0x15);
  FUN_180631850(param_2,&unknown_var_2752_ptr,pfVar2);
  pcVar9 = "offhand_arm_length";
  do {
    pcVar5 = pcVar9;
    pcVar9 = pcVar5 + 1;
  } while (*pcVar9 != '\0');
  puVar8 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar8 == (uint64_t *)0x0) {
LAB_180551786:
      if ((param_1 + 0x17 != (int32_t *)0x0) && (pcVar7 != (char *)0x0)) {
        FUN_18010cbc0(pcVar7,&system_data_6430,param_1 + 0x17);
      }
      *pfVar1 = *pfVar1 * 0.017453292;
      param_1[0x14] = (float)param_1[0x14] * 0.017453292;
      *pfVar2 = *pfVar2 * 0.017453292;
      param_1[0x16] = (float)param_1[0x16] * 0.017453292;
      puStack_80 = &system_data_buffer_ptr;
      if (lStack_78 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_78 = 0;
      uStack_68 = uStack_68 & 0xffffffff00000000;
      puStack_80 = &system_state_ptr;
      puStack_60 = &system_data_buffer_ptr;
      if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_58 = 0;
      uStack_48 = uStack_48 & 0xffffffff00000000;
      puStack_60 = &system_state_ptr;
      puStack_a0 = &system_data_buffer_ptr;
      if (pcStack_98 == (char *)0x0) {
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pcVar9 = (char *)*puVar8;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x180d48d24;
      pcVar4 = pcVar7;
    }
    else {
      pcVar4 = (char *)puVar8[2];
    }
    if (pcVar4 == pcVar5 + -0x180a34bd7) {
      pcVar4 = pcVar4 + (int64_t)pcVar9;
      if (pcVar4 <= pcVar9) {
LAB_180551770:
        pcVar7 = (char *)0x180d48d24;
        if ((char *)puVar8[1] != (char *)0x0) {
          pcVar7 = (char *)puVar8[1];
        }
        goto LAB_180551786;
      }
      lVar6 = (int64_t)&unknown_var_2728_ptr - (int64_t)pcVar9;
      while (*pcVar9 == pcVar9[lVar6]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar4 <= pcVar9) goto LAB_180551770;
      }
    }
    puVar8 = (uint64_t *)puVar8[6];
  } while( true );
}





// 函数: void FUN_180551870(int8_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180551870(int8_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  char *pcVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  char *pcVar5;
  char *pcVar6;
  void *puStack_60;
  int64_t lStack_58;
  int iStack_50;
  uint64_t uStack_48;
  void *puStack_40;
  int64_t lStack_38;
  int iStack_30;
  uint64_t uStack_28;
  
  if (param_2 != 0) {
    *param_1 = 0;
    FUN_180631000(param_2,&unknown_var_1800_ptr,param_1,param_4,0xfffffffffffffffe);
    param_1[1] = 0;
    FUN_180631000(param_2,&unknown_var_1776_ptr);
    *(int32_t *)(param_1 + 4) = 0xffffffff;
    puStack_40 = &system_data_buffer_ptr;
    uStack_28 = 0;
    lStack_38 = 0;
    iStack_30 = 0;
    pcVar5 = "require_left_hand_usage_root_set";
    do {
      pcVar6 = pcVar5;
      pcVar5 = pcVar6 + 1;
    } while (*pcVar5 != '\0');
    for (puVar4 = *(uint64_t **)(param_2 + 0x40); puVar4 != (uint64_t *)0x0;
        puVar4 = (uint64_t *)puVar4[6]) {
      pcVar5 = (char *)*puVar4;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)0x180d48d24;
        pcVar2 = (char *)0x0;
      }
      else {
        pcVar2 = (char *)puVar4[2];
      }
      if (pcVar2 == pcVar6 + -0x180a34687) {
        pcVar2 = pcVar2 + (int64_t)pcVar5;
        if (pcVar2 <= pcVar5) {
LAB_180551974:
          lVar3 = 0x180d48d24;
          if (puVar4[1] != 0) {
            lVar3 = puVar4[1];
          }
          FUN_180627c50(&puStack_40,lVar3);
          break;
        }
        lVar3 = (int64_t)&unknown_var_1368_ptr - (int64_t)pcVar5;
        while (*pcVar5 == pcVar5[lVar3]) {
          pcVar5 = pcVar5 + 1;
          if (pcVar2 <= pcVar5) goto LAB_180551974;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_180552800(&system_data_5ff0,&puStack_40);
      *(int32_t *)(param_1 + 4) = uVar1;
    }
    puStack_60 = &system_data_buffer_ptr;
    uStack_48 = 0;
    lStack_58 = 0;
    iStack_50 = 0;
    *(int32_t *)(param_1 + 8) = 0xffffffff;
    pcVar5 = "action";
    do {
      pcVar6 = pcVar5;
      pcVar5 = pcVar6 + 1;
    } while (*pcVar5 != '\0');
    for (puVar4 = *(uint64_t **)(param_2 + 0x40); puVar4 != (uint64_t *)0x0;
        puVar4 = (uint64_t *)puVar4[6]) {
      pcVar5 = (char *)*puVar4;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)0x180d48d24;
        pcVar2 = (char *)0x0;
      }
      else {
        pcVar2 = (char *)puVar4[2];
      }
      if (pcVar2 == pcVar6 + -0x180a339df) {
        pcVar2 = pcVar2 + (int64_t)pcVar5;
        if (pcVar2 <= pcVar5) {
LAB_180551a34:
          lVar3 = 0x180d48d24;
          if (puVar4[1] != 0) {
            lVar3 = puVar4[1];
          }
          FUN_180627c50(&puStack_60,lVar3);
          break;
        }
        lVar3 = (int64_t)&unknown_var_8128_ptr - (int64_t)pcVar5;
        while (*pcVar5 == pcVar5[lVar3]) {
          pcVar5 = pcVar5 + 1;
          if (pcVar2 <= pcVar5) goto LAB_180551a34;
        }
      }
    }
    if (0 < iStack_50) {
      uVar1 = FUN_18055b2f0(&system_data_6150,&puStack_60);
      *(int32_t *)(param_1 + 8) = uVar1;
    }
    puStack_60 = &system_data_buffer_ptr;
    if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_58 = 0;
    uStack_48 = uStack_48 & 0xffffffff00000000;
    puStack_60 = &system_state_ptr;
    puStack_40 = &system_data_buffer_ptr;
    if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}





// 函数: void FUN_180551ad0(int32_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180551ad0(int32_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  char *pcVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  void *puStack_80;
  int8_t *puStack_78;
  int iStack_70;
  uint64_t uStack_68;
  void *puStack_60;
  int64_t lStack_58;
  int iStack_50;
  uint64_t uStack_48;
  void *puStack_40;
  int64_t lStack_38;
  int iStack_30;
  uint64_t uStack_28;
  
  if (param_2 != 0) {
    pcVar7 = (char *)0x0;
    param_1[1] = 0;
    FUN_180631330(param_2,&unknown_var_2788_ptr,param_1 + 1,param_4,0xfffffffffffffffe);
    *(int8_t *)(param_1 + 2) = 0;
    FUN_180631000(param_2,&unknown_var_1776_ptr);
    param_1[3] = 0xffffffff;
    puStack_40 = &system_data_buffer_ptr;
    uStack_28 = 0;
    lStack_38 = 0;
    iStack_30 = 0;
    pcVar5 = "require_left_hand_usage_root_set";
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
      if (pcVar2 == pcVar6 + -0x180a34687) {
        pcVar2 = pcVar2 + (int64_t)pcVar5;
        if (pcVar2 <= pcVar5) {
LAB_180551bd4:
          lVar3 = 0x180d48d24;
          if (puVar4[1] != 0) {
            lVar3 = puVar4[1];
          }
          FUN_180627c50(&puStack_40,lVar3);
          break;
        }
        lVar3 = (int64_t)&unknown_var_1368_ptr - (int64_t)pcVar5;
        while (*pcVar5 == pcVar5[lVar3]) {
          pcVar5 = pcVar5 + 1;
          if (pcVar2 <= pcVar5) goto LAB_180551bd4;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_180552800(&system_data_5ff0,&puStack_40);
      param_1[3] = uVar1;
    }
    puStack_60 = &system_data_buffer_ptr;
    uStack_48 = 0;
    lStack_58 = 0;
    iStack_50 = 0;
    *param_1 = 0xffffffff;
    pcVar5 = "mount_id";
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
      if (pcVar2 == pcVar6 + -0x180a34c07) {
        pcVar2 = pcVar2 + (int64_t)pcVar5;
        if (pcVar2 <= pcVar5) {
LAB_180551c94:
          lVar3 = 0x180d48d24;
          if (puVar4[1] != 0) {
            lVar3 = puVar4[1];
          }
          FUN_180627c50(&puStack_60,lVar3);
          break;
        }
        lVar3 = (int64_t)&unknown_var_2776_ptr - (int64_t)pcVar5;
        while (*pcVar5 == pcVar5[lVar3]) {
          pcVar5 = pcVar5 + 1;
          if (pcVar2 <= pcVar5) goto LAB_180551c94;
        }
      }
    }
    if (0 < iStack_50) {
      uVar1 = FUN_180555eb0(&system_data_60a0,&puStack_60);
      *param_1 = uVar1;
    }
    puStack_80 = &system_data_buffer_ptr;
    uStack_68 = 0;
    puStack_78 = (int8_t *)0x0;
    iStack_70 = 0;
    param_1[5] = 0xffffffff;
    pcVar5 = "action";
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
      if (pcVar2 == pcVar6 + -0x180a339df) {
        pcVar2 = pcVar2 + (int64_t)pcVar5;
        if (pcVar2 <= pcVar5) {
LAB_180551d50:
          lVar3 = 0x180d48d24;
          if (puVar4[1] != 0) {
            lVar3 = puVar4[1];
          }
          FUN_180627c50(&puStack_80,lVar3);
          break;
        }
        lVar3 = (int64_t)&unknown_var_8128_ptr - (int64_t)pcVar5;
        while (*pcVar5 == pcVar5[lVar3]) {
          pcVar5 = pcVar5 + 1;
          if (pcVar2 <= pcVar5) goto LAB_180551d50;
        }
      }
    }
    if (0 < iStack_70) {
      uVar1 = FUN_18055b2f0(&system_data_6150,&puStack_80);
      param_1[5] = uVar1;
    }
    iStack_70 = 0;
    if (puStack_78 != (int8_t *)0x0) {
      *puStack_78 = 0;
    }
    param_1[4] = 0xffffffff;
    pcVar5 = "required_mount_action";
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
      if (pcVar2 == pcVar6 + -0x180a34caf) {
        pcVar2 = pcVar5 + (int64_t)pcVar2;
        if (pcVar2 <= pcVar5) {
LAB_180551e04:
          lVar3 = 0x180d48d24;
          if (puVar4[1] != 0) {
            lVar3 = puVar4[1];
          }
          (**(code **)(puStack_80 + 0x10))(&puStack_80,lVar3);
          break;
        }
        lVar3 = (int64_t)&unknown_var_2944_ptr - (int64_t)pcVar5;
        while (*pcVar5 == pcVar5[lVar3]) {
          pcVar5 = pcVar5 + 1;
          if (pcVar2 <= pcVar5) goto LAB_180551e04;
        }
      }
    }
    if (0 < iStack_70) {
      uVar1 = FUN_18055b2f0(&system_data_6150,&puStack_80);
      param_1[4] = uVar1;
    }
    puStack_80 = &system_data_buffer_ptr;
    if (puStack_78 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_78 = (int8_t *)0x0;
    uStack_68 = uStack_68 & 0xffffffff00000000;
    puStack_80 = &system_state_ptr;
    puStack_60 = &system_data_buffer_ptr;
    if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_58 = 0;
    uStack_48 = uStack_48 & 0xffffffff00000000;
    puStack_60 = &system_state_ptr;
    puStack_40 = &system_data_buffer_ptr;
    if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180551ec0(int64_t param_1,int64_t param_2)
void FUN_180551ec0(int64_t param_1,int64_t param_2)

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
  *(int64_t *)lVar4 = lVar4;
  *(int64_t *)(lVar4 + 8) = lVar4;
  *(uint64_t *)(lVar4 + 0x10) = 0;
  *(int8_t *)(lVar4 + 0x18) = 0;
  *(uint64_t *)(lVar4 + 0x20) = 0;
  *(int64_t *)(param_1 + 0x10) = lVar4;
  if (param_2 != 0) {
    pcVar13 = "item_usage_set";
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
      if (pcVar5 == pcVar17 + -0x180a34c9f) {
        pcVar5 = pcVar5 + (int64_t)pcVar13;
        if (pcVar5 <= pcVar13) goto LAB_180551fb0;
        lVar4 = (int64_t)&unknown_var_2928_ptr - (int64_t)pcVar13;
        while (*pcVar13 == pcVar13[lVar4]) {
          pcVar13 = pcVar13 + 1;
          if (pcVar5 <= pcVar13) goto LAB_180551fb0;
        }
      }
    }
  }
  return;
LAB_180551fb0:
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
        pcVar5 = pcVar5 + (int64_t)pcVar13;
        if (pcVar5 <= pcVar13) {
LAB_180552063:
          lVar4 = 0x180d48d24;
          if (puVar14[1] != 0) {
            lVar4 = puVar14[1];
          }
          FUN_180627c50(&puStack_60,lVar4);
          break;
        }
        lVar4 = (int64_t)&unknown_var_1288_ptr - (int64_t)pcVar13;
        while (*pcVar13 == pcVar13[lVar4]) {
          pcVar13 = pcVar13 + 1;
          if (pcVar5 <= pcVar13) goto LAB_180552063;
        }
      }
    }
    puVar14 = *(uint64_t **)(param_1 + 0x10);
    puVar15 = (uint64_t *)puVar14[2];
    puVar6 = puVar14;
    if (puVar15 == (uint64_t *)0x0) {
LAB_180552139:
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
              goto LAB_1805520fb;
            }
          }
          puVar16 = (uint64_t *)*puVar15;
        }
LAB_1805520fb:
        puVar7 = puVar15;
        if (bVar3) {
          puVar7 = puVar6;
        }
        puVar6 = puVar7;
        puVar15 = puVar16;
      } while (puVar16 != (uint64_t *)0x0);
      if (puVar7 == puVar14) goto LAB_180552139;
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
          if ((int)(bVar1 - uVar10) < 1) goto LAB_18055213c;
        }
        goto LAB_180552139;
      }
    }
LAB_18055213c:
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
  pcVar13 = "item_usage_set";
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
    } while (pcVar5 != pcVar17 + -0x180a34c9f);
    pcVar5 = pcVar5 + (int64_t)pcVar13;
    if (pcVar5 <= pcVar13) break;
    lVar4 = (int64_t)&unknown_var_2928_ptr - (int64_t)pcVar13;
    while (*pcVar13 == pcVar13[lVar4]) {
      pcVar13 = pcVar13 + 1;
      if (pcVar5 <= pcVar13) goto LAB_180551fb0;
    }
  }
  goto LAB_180551fb0;
}





