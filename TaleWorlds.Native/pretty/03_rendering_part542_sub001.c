#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part542_sub001.c - 9 个函数

#include "TaleWorlds.Native.Split.h"

// 03_rendering_part542.c - 9 个函数


// 函数: void FUN_180564350(longlong param_1,longlong param_2)
void FUN_180564350(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  
  FUN_180631960(param_2,&unknown_var_8224_ptr,param_1 + 8);
  puVar3 = (int32_t *)(param_1 + 0x18);
  *puVar3 = 0x3f800000;
  pcVar5 = "displacement_end_progress";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  puVar2 = *(uint64_t **)(param_2 + 0x40);
  if (puVar2 != (uint64_t *)0x0) {
    do {
      pcVar5 = (char *)*puVar2;
      if (pcVar5 == (char *)0x0) {
        pcVar1 = (char *)0x0;
        pcVar5 = (char *)0x180d48d24;
      }
      else {
        pcVar1 = (char *)puVar2[2];
      }
      if (pcVar1 == pcVar6 + -0x180a3610f) {
        pcVar1 = pcVar1 + (longlong)pcVar5;
        if (pcVar1 <= pcVar5) {
LAB_1805643e8:
          lVar4 = 0x180d48d24;
          if (puVar2[1] != 0) {
            lVar4 = puVar2[1];
          }
          goto LAB_180564401;
        }
        lVar4 = (longlong)&unknown_var_8160_ptr - (longlong)pcVar5;
        while (*pcVar5 == pcVar5[lVar4]) {
          pcVar5 = pcVar5 + 1;
          if (pcVar1 <= pcVar5) goto LAB_1805643e8;
        }
      }
      puVar2 = (uint64_t *)puVar2[6];
    } while (puVar2 != (uint64_t *)0x0);
  }
  lVar4 = 0;
LAB_180564401:
  if ((puVar3 != (int32_t *)0x0) && (lVar4 != 0)) {
    FUN_18010cbc0(lVar4,&system_data_6430,puVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180564430(longlong param_1)
void FUN_180564430(longlong param_1)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x28,8,3);
  *puVar1 = &unknown_var_8496_ptr;
  *(int32_t *)(puVar1 + 1) = *(int32_t *)(param_1 + 8);
  *(uint64_t *)((longlong)puVar1 + 0xc) = *(uint64_t *)(param_1 + 0xc);
  *(uint64_t *)((longlong)puVar1 + 0x14) = *(uint64_t *)(param_1 + 0x14);
  *(uint64_t *)((longlong)puVar1 + 0x1c) = *(uint64_t *)(param_1 + 0x1c);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180564480(longlong param_1,longlong param_2,longlong param_3,char param_4)
void FUN_180564480(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  char cVar1;
  uint64_t *puVar2;
  char *pcVar3;
  char *pcVar4;
  int8_t auStack_78 [32];
  char cStack_58;
  char acStack_57 [31];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_78;
  if (param_4 == '\0') {
    puVar2 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x38);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    pcVar4 = "type";
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar4 != '\0');
    *puVar2 = &unknown_var_7680_ptr;
    puVar2[2] = pcVar3 + -0x180a0ee2f;
    pcVar4 = "bipedal_movement_and_ik_data";
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar4 != '\0');
    puVar2[1] = &unknown_var_8288_ptr;
    puVar2[3] = pcVar3 + -0x180a3618f;
    if (*(longlong *)(param_3 + 0x40) == 0) {
      puVar2[5] = 0;
      *(uint64_t **)(param_3 + 0x40) = puVar2;
    }
    else {
      puVar2[5] = *(uint64_t *)(param_3 + 0x48);
      *(uint64_t **)(*(longlong *)(param_3 + 0x48) + 0x30) = puVar2;
    }
    *(uint64_t **)(param_3 + 0x48) = puVar2;
    puVar2[4] = param_3;
    puVar2[6] = 0;
  }
  FUN_180626eb0(&cStack_58,0x20,&system_data_6430,(double)*(float *)(param_1 + 8));
  param_2 = param_2 + 0x60;
  puVar2 = (uint64_t *)FUN_1804c1300(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "loop_displacement";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &unknown_var_8416_ptr;
  puVar2[2] = pcVar3 + -0x180a3620f;
  pcVar4 = &cStack_58;
  cVar1 = cStack_58;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_58;
  puVar2[3] = (longlong)pcVar4 - (longlong)&cStack_58;
  if (*(longlong *)(param_3 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(longlong *)(param_3 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar2;
  puVar2[4] = param_3;
  puVar2[6] = 0;
  FUN_180626eb0(&cStack_58,0x20,&system_data_6430,(double)*(float *)(param_1 + 0xc));
  puVar2 = (uint64_t *)FUN_1804c1300(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "snapping_duration_right";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &unknown_var_8392_ptr;
  puVar2[2] = pcVar3 + -0x180a361f7;
  pcVar4 = &cStack_58;
  cVar1 = cStack_58;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_58;
  puVar2[3] = (longlong)pcVar4 - (longlong)&cStack_58;
  if (*(longlong *)(param_3 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(longlong *)(param_3 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar2;
  puVar2[4] = param_3;
  puVar2[6] = 0;
  FUN_180626eb0(&cStack_58,0x20,&system_data_6430,(double)*(float *)(param_1 + 0x10));
  puVar2 = (uint64_t *)FUN_1804c1300(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "snapping_duration_left";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &unknown_var_8464_ptr;
  puVar2[2] = pcVar3 + -0x180a3623f;
  pcVar4 = &cStack_58;
  cVar1 = cStack_58;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_58;
  puVar2[3] = (longlong)pcVar4 - (longlong)&cStack_58;
  if (*(longlong *)(param_3 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(longlong *)(param_3 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar2;
  puVar2[4] = param_3;
  puVar2[6] = 0;
  FUN_180626eb0(&cStack_58,0x20,&system_data_6430,(double)*(float *)(param_1 + 0x14));
  puVar2 = (uint64_t *)FUN_1804c1300(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "snapping_period_right";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &unknown_var_8440_ptr;
  puVar2[2] = pcVar3 + -0x180a36227;
  pcVar4 = &cStack_58;
  cVar1 = cStack_58;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_58;
  puVar2[3] = (longlong)pcVar4 - (longlong)&cStack_58;
  if (*(longlong *)(param_3 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(longlong *)(param_3 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar2;
  puVar2[4] = param_3;
  puVar2[6] = 0;
  FUN_180626eb0(&cStack_58,0x20,&system_data_6430,(double)*(float *)(param_1 + 0x18));
  puVar2 = (uint64_t *)FUN_1804c1300(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "snapping_period_left";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &unknown_var_8344_ptr;
  puVar2[2] = pcVar3 + -0x180a361c7;
  pcVar4 = &cStack_58;
  cVar1 = cStack_58;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_58;
  puVar2[3] = (longlong)pcVar4 - (longlong)&cStack_58;
  if (*(longlong *)(param_3 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(longlong *)(param_3 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar2;
  puVar2[4] = param_3;
  puVar2[6] = 0;
  FUN_180626eb0(&cStack_58,0x20,&system_data_6430,(double)*(float *)(param_1 + 0x1c));
  puVar2 = (uint64_t *)FUN_1804c1300(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "adjusting_period_right";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &unknown_var_8320_ptr;
  puVar2[2] = pcVar3 + -0x180a361af;
  pcVar4 = &cStack_58;
  cVar1 = cStack_58;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_58;
  puVar2[3] = (longlong)pcVar4 - (longlong)&cStack_58;
  if (*(longlong *)(param_3 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(longlong *)(param_3 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar2;
  puVar2[4] = param_3;
  puVar2[6] = 0;
  FUN_180626eb0(&cStack_58,0x20,&system_data_6430,(double)*(float *)(param_1 + 0x20));
  puVar2 = (uint64_t *)FUN_1804c1300(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "adjusting_period_left";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &unknown_var_8368_ptr;
  puVar2[2] = pcVar3 + -0x180a361df;
  pcVar4 = &cStack_58;
  cVar1 = cStack_58;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_58;
  puVar2[3] = (longlong)pcVar4 - (longlong)&cStack_58;
  if (*(longlong *)(param_3 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(longlong *)(param_3 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar2;
  puVar2[4] = param_3;
  puVar2[6] = 0;
  FUN_180626eb0(&cStack_58,0x20,&system_data_6430,(double)*(float *)(param_1 + 8));
  puVar2 = (uint64_t *)FUN_1804c1300(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "loop_displacement";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &unknown_var_8416_ptr;
  puVar2[2] = pcVar3 + -0x180a3620f;
  pcVar4 = &cStack_58;
  while (cStack_58 != '\0') {
    pcVar4 = pcVar4 + 1;
    cStack_58 = *pcVar4;
  }
  puVar2[1] = &cStack_58;
  puVar2[3] = (longlong)pcVar4 - (longlong)&cStack_58;
  if (*(longlong *)(param_3 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(longlong *)(param_3 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar2;
  puVar2[4] = param_3;
  puVar2[6] = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_78);
}






// 函数: void FUN_180564ae0(longlong param_1,longlong param_2)
void FUN_180564ae0(longlong param_1,longlong param_2)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  char *pcVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  
  puVar1 = (int32_t *)(param_1 + 8);
  *puVar1 = 0;
  pcVar5 = "loop_displacement";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  for (puVar2 = *(uint64_t **)(param_2 + 0x40); puVar2 != (uint64_t *)0x0;
      puVar2 = (uint64_t *)puVar2[6]) {
    pcVar5 = (char *)*puVar2;
    if (pcVar5 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar5 = (char *)0x180d48d24;
    }
    else {
      pcVar3 = (char *)puVar2[2];
    }
    if (pcVar3 == pcVar6 + -0x180a3620f) {
      pcVar3 = pcVar3 + (longlong)pcVar5;
      if (pcVar3 <= pcVar5) {
LAB_180564b67:
        lVar4 = 0x180d48d24;
        if (puVar2[1] != 0) {
          lVar4 = puVar2[1];
        }
        goto LAB_180564b82;
      }
      lVar4 = (longlong)&unknown_var_8416_ptr - (longlong)pcVar5;
      while (*pcVar5 == pcVar5[lVar4]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar3 <= pcVar5) goto LAB_180564b67;
      }
    }
  }
  lVar4 = 0;
LAB_180564b82:
  if ((puVar1 != (int32_t *)0x0) && (lVar4 != 0)) {
    FUN_18010cbc0(lVar4,&system_data_6430,puVar1);
  }
  pcVar5 = "snapping_duration_right";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  for (puVar2 = *(uint64_t **)(param_2 + 0x40); puVar2 != (uint64_t *)0x0;
      puVar2 = (uint64_t *)puVar2[6]) {
    pcVar5 = (char *)*puVar2;
    if (pcVar5 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar5 = (char *)0x180d48d24;
    }
    else {
      pcVar3 = (char *)puVar2[2];
    }
    if (pcVar3 == pcVar6 + -0x180a361f7) {
      pcVar3 = pcVar3 + (longlong)pcVar5;
      if (pcVar3 <= pcVar5) {
LAB_180564c00:
        lVar4 = 0x180d48d24;
        if (puVar2[1] != 0) {
          lVar4 = puVar2[1];
        }
        goto LAB_180564c1b;
      }
      lVar4 = (longlong)&unknown_var_8392_ptr - (longlong)pcVar5;
      while (*pcVar5 == pcVar5[lVar4]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar3 <= pcVar5) goto LAB_180564c00;
      }
    }
  }
  lVar4 = 0;
LAB_180564c1b:
  if ((param_1 + 0xc != 0) && (lVar4 != 0)) {
    FUN_18010cbc0(lVar4,&system_data_6430,param_1 + 0xc);
  }
  pcVar5 = "snapping_duration_left";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  for (puVar2 = *(uint64_t **)(param_2 + 0x40); puVar2 != (uint64_t *)0x0;
      puVar2 = (uint64_t *)puVar2[6]) {
    pcVar5 = (char *)*puVar2;
    if (pcVar5 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar5 = (char *)0x180d48d24;
    }
    else {
      pcVar3 = (char *)puVar2[2];
    }
    if (pcVar3 == pcVar6 + -0x180a3623f) {
      pcVar3 = pcVar3 + (longlong)pcVar5;
      if (pcVar3 <= pcVar5) {
LAB_180564ca0:
        lVar4 = 0x180d48d24;
        if (puVar2[1] != 0) {
          lVar4 = puVar2[1];
        }
        goto LAB_180564cbb;
      }
      lVar4 = (longlong)&unknown_var_8464_ptr - (longlong)pcVar5;
      while (*pcVar5 == pcVar5[lVar4]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar3 <= pcVar5) goto LAB_180564ca0;
      }
    }
  }
  lVar4 = 0;
LAB_180564cbb:
  if ((param_1 + 0x10 != 0) && (lVar4 != 0)) {
    FUN_18010cbc0(lVar4,&system_data_6430,param_1 + 0x10);
  }
  pcVar5 = "snapping_period_right";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  for (puVar2 = *(uint64_t **)(param_2 + 0x40); puVar2 != (uint64_t *)0x0;
      puVar2 = (uint64_t *)puVar2[6]) {
    pcVar5 = (char *)*puVar2;
    if (pcVar5 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar5 = (char *)0x180d48d24;
    }
    else {
      pcVar3 = (char *)puVar2[2];
    }
    if (pcVar3 == pcVar6 + -0x180a36227) {
      pcVar3 = pcVar3 + (longlong)pcVar5;
      if (pcVar3 <= pcVar5) {
LAB_180564d40:
        lVar4 = 0x180d48d24;
        if (puVar2[1] != 0) {
          lVar4 = puVar2[1];
        }
        goto LAB_180564d5b;
      }
      lVar4 = (longlong)&unknown_var_8440_ptr - (longlong)pcVar5;
      while (*pcVar5 == pcVar5[lVar4]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar3 <= pcVar5) goto LAB_180564d40;
      }
    }
  }
  lVar4 = 0;
LAB_180564d5b:
  if ((param_1 + 0x14 != 0) && (lVar4 != 0)) {
    FUN_18010cbc0(lVar4,&system_data_6430,param_1 + 0x14);
  }
  pcVar5 = "snapping_period_left";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  for (puVar2 = *(uint64_t **)(param_2 + 0x40); puVar2 != (uint64_t *)0x0;
      puVar2 = (uint64_t *)puVar2[6]) {
    pcVar5 = (char *)*puVar2;
    if (pcVar5 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar5 = (char *)0x180d48d24;
    }
    else {
      pcVar3 = (char *)puVar2[2];
    }
    if (pcVar3 == pcVar6 + -0x180a361c7) {
      pcVar3 = pcVar5 + (longlong)pcVar3;
      if (pcVar3 <= pcVar5) {
LAB_180564de0:
        lVar4 = 0x180d48d24;
        if (puVar2[1] != 0) {
          lVar4 = puVar2[1];
        }
        goto LAB_180564dfb;
      }
      lVar4 = (longlong)&unknown_var_8344_ptr - (longlong)pcVar5;
      while (*pcVar5 == pcVar5[lVar4]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar3 <= pcVar5) goto LAB_180564de0;
      }
    }
  }
  lVar4 = 0;
LAB_180564dfb:
  if ((param_1 + 0x18 != 0) && (lVar4 != 0)) {
    FUN_18010cbc0(lVar4,&system_data_6430,param_1 + 0x18);
  }
  pcVar5 = "adjusting_period_right";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  for (puVar2 = *(uint64_t **)(param_2 + 0x40); puVar2 != (uint64_t *)0x0;
      puVar2 = (uint64_t *)puVar2[6]) {
    pcVar5 = (char *)*puVar2;
    if (pcVar5 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar5 = (char *)0x180d48d24;
    }
    else {
      pcVar3 = (char *)puVar2[2];
    }
    if (pcVar3 == pcVar6 + -0x180a361af) {
      pcVar3 = pcVar3 + (longlong)pcVar5;
      if (pcVar3 <= pcVar5) {
LAB_180564e80:
        lVar4 = 0x180d48d24;
        if (puVar2[1] != 0) {
          lVar4 = puVar2[1];
        }
        goto LAB_180564e9b;
      }
      lVar4 = (longlong)&unknown_var_8320_ptr - (longlong)pcVar5;
      while (*pcVar5 == pcVar5[lVar4]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar3 <= pcVar5) goto LAB_180564e80;
      }
    }
  }
  lVar4 = 0;
LAB_180564e9b:
  if ((param_1 + 0x1c != 0) && (lVar4 != 0)) {
    FUN_18010cbc0(lVar4,&system_data_6430,param_1 + 0x1c);
  }
  pcVar5 = "adjusting_period_left";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  puVar2 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar2 == (uint64_t *)0x0) {
      lVar4 = 0;
LAB_180564f38:
      if ((param_1 + 0x20 != 0) && (lVar4 != 0)) {
        FUN_18010cbc0(lVar4,&system_data_6430,param_1 + 0x20);
      }
      return;
    }
    pcVar5 = (char *)*puVar2;
    if (pcVar5 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar5 = (char *)0x180d48d24;
    }
    else {
      pcVar3 = (char *)puVar2[2];
    }
    if (pcVar3 == pcVar6 + -0x180a361df) {
      pcVar3 = pcVar3 + (longlong)pcVar5;
      if (pcVar3 <= pcVar5) {
LAB_180564f20:
        lVar4 = 0x180d48d24;
        if (puVar2[1] != 0) {
          lVar4 = puVar2[1];
        }
        goto LAB_180564f38;
      }
      lVar4 = (longlong)&unknown_var_8368_ptr - (longlong)pcVar5;
      while (*pcVar5 == pcVar5[lVar4]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar3 <= pcVar5) goto LAB_180564f20;
      }
    }
    puVar2 = (uint64_t *)puVar2[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_180564f80(float *param_1,longlong param_2,uint64_t param_3,float param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStackX_10;
  float fStackX_14;
  float fStack_d0;
  float fStack_cc;
  int32_t uStack_c8;
  int32_t uStack_c4;
  
  if (param_2 == 0) {
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
  }
  else {
    fStackX_10 = (float)param_3;
    fStackX_14 = (float)((ulonglong)param_3 >> 0x20);
    if (param_4 <= 0.0) {
      *param_1 = fStackX_10;
      param_1[1] = fStackX_14;
      param_1[2] = 0.0;
      param_1[3] = 3.4028235e+38;
    }
    else {
      bVar6 = false;
      iVar5 = 0;
      fStack_d0 = fStackX_10;
      fStack_cc = fStackX_14;
      uStack_c8 = 0;
      uStack_c4 = 0x7f7fffff;
      lVar2 = FUN_180455a30(param_2 + 0x2a68,&fStack_d0,param_2 + 0x28c8,0xffffffff,0,0x3fc00000);
      fVar9 = fStackX_14;
      fVar10 = fStackX_10;
      uVar1 = system_memory_flags;
      if (lVar2 == 0) {
LAB_1805651e0:
        FUN_1806272a0(&unknown_var_7288_ptr,(double)fStackX_10,(double)fStackX_14,(double)param_4);
      }
      else {
        do {
          if (2999 < iVar5) {
            if (!bVar6) goto LAB_1805651e0;
            break;
          }
          iVar5 = iVar5 + 1;
          uVar1 = uVar1 << 0xd ^ uVar1;
          uVar1 = uVar1 >> 0x11 ^ uVar1;
          uVar4 = uVar1 << 5 ^ uVar1;
          uVar1 = uVar4 << 0xd ^ uVar4;
          uVar1 = uVar1 >> 0x11 ^ uVar1;
          uVar1 = uVar1 << 5 ^ uVar1;
          fVar7 = (float)(uVar4 - 1) * 2.3283064e-10;
          fVar8 = (float)(uVar1 - 1) * 2.3283064e-10;
          fVar7 = ((fVar7 + fVar7) - 1.0) * param_4;
          fVar8 = ((fVar8 + fVar8) - 1.0) * param_4;
          system_memory_flags = uVar1;
          if (fVar7 * fVar7 + fVar8 * fVar8 <= param_4 * param_4) {
            uStack_c8 = 0;
            fVar10 = fVar7 + fStackX_10;
            uStack_c4 = 0x7f7fffff;
            fVar9 = fVar8 + fStackX_14;
            fStack_d0 = fVar10;
            fStack_cc = fVar9;
            lVar3 = FUN_180455a30(param_2 + 0x2a68,&fStack_d0,param_2 + 0x28c8,0xffffffff,0,
                                  0x3fc00000);
            if (lVar3 != 0) {
              bVar6 = *(int *)(lVar2 + 0x128) == *(int *)(lVar3 + 0x128);
            }
          }
        } while (!bVar6);
      }
      *param_1 = fVar10;
      param_1[1] = fVar9;
      param_1[2] = 0.0;
      param_1[3] = 3.4028235e+38;
    }
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180564fd0(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_180564fd0(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint64_t in_RAX;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong unaff_RBP;
  float *unaff_RSI;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_XMM10_Da;
  int32_t uStack0000000000000028;
  float fStack0000000000000048;
  float fStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  
  bVar8 = false;
  iVar7 = 0;
  *(uint64_t *)(unaff_RBP + 0x28) = in_RAX;
  fVar1 = *(float *)(unaff_RBP + 0x28);
  fVar2 = *(float *)(unaff_RBP + 0x2c);
  uStack0000000000000028 = 0x3fc00000;
  *(uint64_t *)(unaff_RBP + 0x20) = in_RAX;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0x7f7fffff;
  fStack0000000000000048 = fVar1;
  fStack000000000000004c = fVar2;
  lVar4 = FUN_180455a30(param_2 + 0x2a68,&stack0x00000048,param_2 + 0x28c8,param_4,0);
  fVar11 = *(float *)(unaff_RBP + 0x24);
  fVar12 = *(float *)(unaff_RBP + 0x20);
  uVar3 = system_memory_flags;
  if (lVar4 == 0) {
LAB_1805651e0:
    FUN_1806272a0(&unknown_var_7288_ptr,(double)fVar1,(double)fVar2,(double)unaff_XMM10_Da);
  }
  else {
    do {
      if (2999 < iVar7) {
        if (!bVar8) goto LAB_1805651e0;
        break;
      }
      iVar7 = iVar7 + 1;
      uVar3 = uVar3 << 0xd ^ uVar3;
      uVar3 = uVar3 >> 0x11 ^ uVar3;
      uVar6 = uVar3 << 5 ^ uVar3;
      uVar3 = uVar6 << 0xd ^ uVar6;
      uVar3 = uVar3 >> 0x11 ^ uVar3;
      uVar3 = uVar3 << 5 ^ uVar3;
      fVar9 = (float)(uVar6 - 1) * 2.3283064e-10;
      fVar10 = (float)(uVar3 - 1) * 2.3283064e-10;
      fVar9 = ((fVar9 + fVar9) - 1.0) * unaff_XMM10_Da;
      fVar10 = ((fVar10 + fVar10) - 1.0) * unaff_XMM10_Da;
      system_memory_flags = uVar3;
      if (fVar9 * fVar9 + fVar10 * fVar10 <= unaff_XMM10_Da * unaff_XMM10_Da) {
        uStack0000000000000028 = 0x3fc00000;
        uStack0000000000000050 = 0;
        fVar12 = fVar9 + fVar1;
        uStack0000000000000054 = 0x7f7fffff;
        fVar11 = fVar10 + fVar2;
        fStack0000000000000048 = fVar12;
        fStack000000000000004c = fVar11;
        lVar5 = FUN_180455a30(param_2 + 0x2a68,&stack0x00000048,param_2 + 0x28c8,0xffffffff,0);
        if (lVar5 != 0) {
          bVar8 = *(int *)(lVar4 + 0x128) == *(int *)(lVar5 + 0x128);
        }
      }
    } while (!bVar8);
  }
  *unaff_RSI = fVar12;
  unaff_RSI[1] = fVar11;
  unaff_RSI[2] = 0.0;
  unaff_RSI[3] = 3.4028235e+38;
  return;
}






// 函数: void FUN_1805652a4(int32_t *param_1)
void FUN_1805652a4(int32_t *param_1)

{
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  
  *param_1 = uStack0000000000000040;
  param_1[1] = uStack0000000000000044;
  param_1[2] = 0;
  param_1[3] = 0x7f7fffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180565300(longlong param_1)
void FUN_180565300(longlong param_1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  longlong lVar4;
  int8_t auStack_a8 [32];
  int32_t uStack_88;
  void *puStack_80;
  longlong lStack_78;
  int32_t uStack_68;
  uint64_t uStack_60;
  void *puStack_58;
  int8_t *puStack_50;
  int32_t uStack_48;
  int8_t auStack_40 [32];
  ulonglong uStack_20;
  
  if (param_1 == 0) {
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  uStack_20 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_a8;
  uStack_88 = 0;
  uVar2 = FUN_18062b1e0(system_memory_pool_ptr,0xea0,8,3);
  uVar2 = FUN_1803a9530(uVar2);
  puStack_58 = &unknown_var_672_ptr;
  puStack_50 = auStack_40;
  auStack_40[0] = 0;
  uStack_48 = 0xc;
  strcpy_s(auStack_40,0x20,&unknown_var_8560_ptr);
  uVar3 = FUN_180627ae0(&puStack_80,param_1 + 0x27c8);
  uStack_88 = 1;
  FUN_1803ae570(uVar2,uVar3,&puStack_58);
  uStack_88 = 0;
  puStack_80 = &unknown_var_3456_ptr;
  if (lStack_78 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_78 = 0;
  uStack_68 = 0;
  puStack_80 = &unknown_var_720_ptr;
  puStack_58 = &unknown_var_720_ptr;
  puVar1 = *(uint64_t **)(param_1 + 0x3360);
  if (puVar1 != (uint64_t *)0x0) {
    lVar4 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar4);
    }
  }
  *(uint64_t *)(param_1 + 0x3360) = uVar2;
  func_0x0001801be740(param_1 + 0x60c10);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180565480(longlong param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_180565480(longlong param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
                  char param_5)

{
  int32_t uVar1;
  int32_t auStackX_8 [2];
  longlong lStackX_18;
  uint64_t uStackX_20;
  uint64_t uStack_68;
  uint64_t uStack_60;
  longlong **pplStack_58;
  longlong *aplStack_50 [2];
  code *pcStack_40;
  void *puStack_38;
  longlong *plStack_30;
  uint64_t *puStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  uint64_t *puStack_10;
  
  uStack_60 = 0xfffffffffffffffe;
  auStackX_8[0] = *(int32_t *)(param_1 + 0x60300);
  pplStack_58 = aplStack_50;
  plStack_30 = &lStackX_18;
  puStack_28 = &uStack_68;
  uStack_20 = auStackX_8;
  uStack_18 = &stack0x00000030;
  puStack_10 = &uStackX_20;
  lStackX_18 = param_1;
  uStackX_20 = param_4;
  uStack_68 = param_3;
  if (param_5 == '\0') {
    pcStack_40 = FUN_180567870;
    puStack_38 = &unknown_var_7856_ptr;
    aplStack_50[0] = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,0x28,8,system_allocation_flags);
    *aplStack_50[0] = (longlong)plStack_30;
    aplStack_50[0][1] = (longlong)puStack_28;
    *(int32_t *)(aplStack_50[0] + 2) = (int32_t)uStack_20;
    *(int32_t *)((longlong)aplStack_50[0] + 0x14) = uStack_20._4_4_;
    *(int32_t *)(aplStack_50[0] + 3) = (int32_t)uStack_18;
    *(int32_t *)((longlong)aplStack_50[0] + 0x1c) = uStack_18._4_4_;
    uVar1 = SUB84(puStack_10,0);
    aplStack_50[0][4] = (longlong)puStack_10;
  }
  else {
    pcStack_40 = FUN_180567960;
    puStack_38 = &unknown_var_8096_ptr;
    aplStack_50[0] = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,0x28,8,system_allocation_flags);
    *aplStack_50[0] = (longlong)plStack_30;
    aplStack_50[0][1] = (longlong)puStack_28;
    *(int32_t *)(aplStack_50[0] + 2) = (int32_t)uStack_20;
    *(int32_t *)((longlong)aplStack_50[0] + 0x14) = uStack_20._4_4_;
    *(int32_t *)(aplStack_50[0] + 3) = (int32_t)uStack_18;
    *(int32_t *)((longlong)aplStack_50[0] + 0x1c) = uStack_18._4_4_;
    uVar1 = SUB84(puStack_10,0);
    aplStack_50[0][4] = (longlong)puStack_10;
  }
  FUN_18015b810(uVar1,0,param_2,0x10,0xffffffffffffffff,aplStack_50);
  return;
}






