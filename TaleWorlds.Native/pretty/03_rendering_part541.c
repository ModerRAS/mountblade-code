#include "TaleWorlds.Native.Split.h"

// 03_rendering_part541.c - 13 个函数

// 函数: void FUN_180562f60(longlong param_1,longlong param_2,longlong param_3,char param_4)
void FUN_180562f60(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  char cVar1;
  uint64_t *puVar2;
  char *pcVar3;
  char *pcVar4;
  int8_t auStack_68 [32];
  char cStack_48;
  char acStack_47 [31];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
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
    *puVar2 = &UNK_180a0ee30;
    puVar2[2] = pcVar3 + -0x180a0ee2f;
    pcVar4 = "hand_switch_data";
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar4 != '\0');
    puVar2[1] = &UNK_180a35f58;
    puVar2[3] = pcVar3 + -0x180a35f57;
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
  FUN_180626eb0(&cStack_48,0x20,&DAT_180a06430,(double)*(float *)(param_1 + 8));
  param_2 = param_2 + 0x60;
  puVar2 = (uint64_t *)FUN_1804c1300(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "switch_progress";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &UNK_180a35f48;
  puVar2[2] = pcVar3 + -0x180a35f47;
  pcVar4 = &cStack_48;
  cVar1 = cStack_48;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (longlong)pcVar4 - (longlong)&cStack_48;
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
  FUN_180626eb0(&cStack_48,0x20,&DAT_180a06430,(double)*(float *)(param_1 + 0xc));
  puVar2 = (uint64_t *)FUN_1804c1300(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "switch_back_progress";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &UNK_180a35f30;
  puVar2[2] = pcVar3 + -0x180a35f2f;
  pcVar4 = &cStack_48;
  cVar1 = cStack_48;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (longlong)pcVar4 - (longlong)&cStack_48;
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
  FUN_180626eb0(&cStack_48,0x20,&DAT_180a06430,(double)*(float *)(param_1 + 0x10));
  puVar2 = (uint64_t *)FUN_1804c1300(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "weapon_displacement";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &UNK_180a35f98;
  puVar2[2] = pcVar3 + -0x180a35f97;
  pcVar4 = &cStack_48;
  while (cStack_48 != '\0') {
    pcVar4 = pcVar4 + 1;
    cStack_48 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (longlong)pcVar4 - (longlong)&cStack_48;
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
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_68);
}





// 函数: void FUN_180563250(longlong param_1,longlong param_2)
void FUN_180563250(longlong param_1,longlong param_2)

{
  uint64_t *puVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = "switch_progress";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(uint64_t **)(param_2 + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a35f47) {
      pcVar2 = pcVar2 + (longlong)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_1805632d7:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_1805632f2;
      }
      lVar3 = (longlong)&UNK_180a35f48 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_1805632d7;
      }
    }
  }
  lVar3 = 0;
LAB_1805632f2:
  if ((param_1 + 8 != 0) && (lVar3 != 0)) {
    FUN_18010cbc0(lVar3,&DAT_180a06430,param_1 + 8);
  }
  pcVar4 = "switch_back_progress";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(uint64_t **)(param_2 + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a35f2f) {
      pcVar2 = pcVar2 + (longlong)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_180563370:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_18056338b;
      }
      lVar3 = (longlong)&UNK_180a35f30 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180563370;
      }
    }
  }
  lVar3 = 0;
LAB_18056338b:
  if ((param_1 + 0xc != 0) && (lVar3 != 0)) {
    FUN_18010cbc0(lVar3,&DAT_180a06430,param_1 + 0xc);
  }
  pcVar4 = "weapon_displacement";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  puVar1 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar1 == (uint64_t *)0x0) {
      lVar3 = 0;
LAB_180563428:
      if ((param_1 + 0x10 != 0) && (lVar3 != 0)) {
        FUN_18010cbc0(lVar3,&DAT_180a06430,param_1 + 0x10);
      }
      return;
    }
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a35f97) {
      pcVar2 = pcVar2 + (longlong)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_180563410:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_180563428;
      }
      lVar3 = (longlong)&UNK_180a35f98 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180563410;
      }
    }
    puVar1 = (uint64_t *)puVar1[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180563470(longlong param_1)
void FUN_180563470(longlong param_1)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x10,8,3);
  *puVar1 = &UNK_180a36010;
  *(int32_t *)(puVar1 + 1) = *(int32_t *)(param_1 + 8);
  *(int32_t *)((longlong)puVar1 + 0xc) = *(int32_t *)(param_1 + 0xc);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805634b0(longlong param_1,longlong param_2,longlong param_3,char param_4)
void FUN_1805634b0(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  char cVar1;
  uint64_t *puVar2;
  char *pcVar3;
  char *pcVar4;
  int8_t auStack_68 [32];
  char cStack_48;
  char acStack_47 [31];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
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
    *puVar2 = &UNK_180a0ee30;
    puVar2[2] = pcVar3 + -0x180a0ee2f;
    pcVar4 = "mount_change_data";
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar4 != '\0');
    puVar2[1] = &UNK_180a35ff0;
    puVar2[3] = pcVar3 + -0x180a35fef;
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
  FUN_180626eb0(&cStack_48,0x20,&DAT_180a06430,(double)*(float *)(param_1 + 8));
  puVar2 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "scale_blend_start_progress";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &UNK_180a35fd0;
  puVar2[2] = pcVar3 + -0x180a35fcf;
  pcVar4 = &cStack_48;
  cVar1 = cStack_48;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (longlong)pcVar4 - (longlong)&cStack_48;
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
  FUN_180626eb0(&cStack_48,0x20,&DAT_180a06430,(double)*(float *)(param_1 + 0xc));
  puVar2 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "scale_blend_end_progress";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &UNK_180a35fb0;
  puVar2[2] = pcVar3 + -0x180a35faf;
  pcVar4 = &cStack_48;
  while (cStack_48 != '\0') {
    pcVar4 = pcVar4 + 1;
    cStack_48 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (longlong)pcVar4 - (longlong)&cStack_48;
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
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_68);
}





// 函数: void FUN_1805636e0(longlong param_1,longlong param_2)
void FUN_1805636e0(longlong param_1,longlong param_2)

{
  uint64_t *puVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = "scale_blend_start_progress";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(uint64_t **)(param_2 + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a35fcf) {
      pcVar2 = pcVar2 + (longlong)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_180563768:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_180563783;
      }
      lVar3 = (longlong)&UNK_180a35fd0 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180563768;
      }
    }
  }
  lVar3 = 0;
LAB_180563783:
  if ((param_1 + 8 != 0) && (lVar3 != 0)) {
    FUN_18010cbc0(lVar3,&DAT_180a06430,param_1 + 8);
  }
  pcVar4 = "scale_blend_end_progress";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  puVar1 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar1 == (uint64_t *)0x0) {
      lVar3 = 0;
LAB_180563819:
      if ((param_1 + 0xc != 0) && (lVar3 != 0)) {
        FUN_18010cbc0(lVar3,&DAT_180a06430,param_1 + 0xc);
      }
      return;
    }
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a35faf) {
      pcVar2 = pcVar4 + (longlong)pcVar2;
      if (pcVar2 <= pcVar4) {
LAB_180563801:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_180563819;
      }
      lVar3 = (longlong)&UNK_180a35fb0 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180563801;
      }
    }
    puVar1 = (uint64_t *)puVar1[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180563860(longlong param_1)
void FUN_180563860(longlong param_1)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x10,8,3);
  *puVar1 = &UNK_180a36078;
  *(int32_t *)(puVar1 + 1) = *(int32_t *)(param_1 + 8);
  *(int32_t *)((longlong)puVar1 + 0xc) = *(int32_t *)(param_1 + 0xc);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805638a0(longlong param_1,longlong param_2,longlong param_3,char param_4)
void FUN_1805638a0(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  char cVar1;
  uint64_t *puVar2;
  char *pcVar3;
  char *pcVar4;
  int8_t auStack_68 [32];
  char cStack_48;
  char acStack_47 [31];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
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
    *puVar2 = &UNK_180a0ee30;
    puVar2[2] = pcVar3 + -0x180a0ee2f;
    pcVar4 = "blend_data";
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar4 != '\0');
    puVar2[1] = &UNK_180a36030;
    puVar2[3] = pcVar3 + -0x180a3602f;
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
  FUN_180626eb0(&cStack_48,0x20,&DAT_180a06430,(double)*(float *)(param_1 + 8));
  puVar2 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "blend_start_progress";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &UNK_180a36040;
  puVar2[2] = pcVar3 + -0x180a3603f;
  pcVar4 = &cStack_48;
  cVar1 = cStack_48;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (longlong)pcVar4 - (longlong)&cStack_48;
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
  FUN_180626eb0(&cStack_48,0x20,&DAT_180a06430,(double)*(float *)(param_1 + 0xc));
  puVar2 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "blend_end_progress";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &UNK_180a36058;
  puVar2[2] = pcVar3 + -0x180a36057;
  pcVar4 = &cStack_48;
  while (cStack_48 != '\0') {
    pcVar4 = pcVar4 + 1;
    cStack_48 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (longlong)pcVar4 - (longlong)&cStack_48;
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
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_68);
}





// 函数: void FUN_180563ad0(longlong param_1,longlong param_2)
void FUN_180563ad0(longlong param_1,longlong param_2)

{
  uint64_t *puVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = "blend_start_progress";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(uint64_t **)(param_2 + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a3603f) {
      pcVar2 = pcVar2 + (longlong)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_180563b58:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_180563b73;
      }
      lVar3 = (longlong)&UNK_180a36040 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180563b58;
      }
    }
  }
  lVar3 = 0;
LAB_180563b73:
  if ((param_1 + 8 != 0) && (lVar3 != 0)) {
    FUN_18010cbc0(lVar3,&DAT_180a06430,param_1 + 8);
  }
  pcVar4 = "blend_end_progress";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  puVar1 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar1 == (uint64_t *)0x0) {
      lVar3 = 0;
LAB_180563c09:
      if ((param_1 + 0xc != 0) && (lVar3 != 0)) {
        FUN_18010cbc0(lVar3,&DAT_180a06430,param_1 + 0xc);
      }
      return;
    }
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a36057) {
      pcVar2 = pcVar4 + (longlong)pcVar2;
      if (pcVar2 <= pcVar4) {
LAB_180563bf1:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_180563c09;
      }
      lVar3 = (longlong)&UNK_180a36058 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180563bf1;
      }
    }
    puVar1 = (uint64_t *)puVar1[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180563c50(longlong param_1)
void FUN_180563c50(longlong param_1)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  *puVar1 = &UNK_180a360f0;
  *(int32_t *)(puVar1 + 1) = *(int32_t *)(param_1 + 8);
  *(int32_t *)((longlong)puVar1 + 0xc) = *(int32_t *)(param_1 + 0xc);
  *(int32_t *)(puVar1 + 2) = *(int32_t *)(param_1 + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180563ca0(longlong param_1,longlong param_2,longlong param_3,char param_4)
void FUN_180563ca0(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  char cVar1;
  uint64_t *puVar2;
  char *pcVar3;
  char *pcVar4;
  int8_t auStack_68 [32];
  char cStack_48;
  char acStack_47 [31];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
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
    *puVar2 = &UNK_180a0ee30;
    puVar2[2] = pcVar3 + -0x180a0ee2f;
    pcVar4 = "quadrupedal_movement_data";
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar4 != '\0');
    puVar2[1] = &UNK_180a360c8;
    puVar2[3] = pcVar3 + -0x180a360c7;
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
  FUN_180626eb0(&cStack_48,0x20,&DAT_180a06430,(double)*(float *)(param_1 + 8));
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
  *puVar2 = &UNK_180a36210;
  puVar2[2] = pcVar3 + -0x180a3620f;
  pcVar4 = &cStack_48;
  cVar1 = cStack_48;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (longlong)pcVar4 - (longlong)&cStack_48;
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
  FUN_180626eb0(&cStack_48,0x20,&DAT_180a06430,(double)*(float *)(param_1 + 0xc));
  puVar2 = (uint64_t *)FUN_1804c1300(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "pace_switch_limit_min";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &UNK_180a360b0;
  puVar2[2] = pcVar3 + -0x180a360af;
  pcVar4 = &cStack_48;
  cVar1 = cStack_48;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (longlong)pcVar4 - (longlong)&cStack_48;
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
  FUN_180626eb0(&cStack_48,0x20,&DAT_180a06430,(double)*(float *)(param_1 + 0x10));
  puVar2 = (uint64_t *)FUN_1804c1300(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "pace_switch_limit_max";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &UNK_180a36098;
  puVar2[2] = pcVar3 + -0x180a36097;
  pcVar4 = &cStack_48;
  while (cStack_48 != '\0') {
    pcVar4 = pcVar4 + 1;
    cStack_48 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (longlong)pcVar4 - (longlong)&cStack_48;
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
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_68);
}





// 函数: void FUN_180563f90(longlong param_1,longlong param_2)
void FUN_180563f90(longlong param_1,longlong param_2)

{
  uint64_t *puVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = "loop_displacement";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(uint64_t **)(param_2 + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a3620f) {
      pcVar2 = pcVar2 + (longlong)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_180564017:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_180564032;
      }
      lVar3 = (longlong)&UNK_180a36210 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180564017;
      }
    }
  }
  lVar3 = 0;
LAB_180564032:
  if ((param_1 + 8 != 0) && (lVar3 != 0)) {
    FUN_18010cbc0(lVar3,&DAT_180a06430,param_1 + 8);
  }
  pcVar4 = "pace_switch_limit_min";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(uint64_t **)(param_2 + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a360af) {
      pcVar2 = pcVar2 + (longlong)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_1805640b0:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_1805640cb;
      }
      lVar3 = (longlong)&UNK_180a360b0 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_1805640b0;
      }
    }
  }
  lVar3 = 0;
LAB_1805640cb:
  if ((param_1 + 0xc != 0) && (lVar3 != 0)) {
    FUN_18010cbc0(lVar3,&DAT_180a06430,param_1 + 0xc);
  }
  pcVar4 = "pace_switch_limit_max";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  puVar1 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar1 == (uint64_t *)0x0) {
      lVar3 = 0;
LAB_180564168:
      if ((param_1 + 0x10 != 0) && (lVar3 != 0)) {
        FUN_18010cbc0(lVar3,&DAT_180a06430,param_1 + 0x10);
      }
      return;
    }
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a36097) {
      pcVar2 = pcVar2 + (longlong)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_180564150:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_180564168;
      }
      lVar3 = (longlong)&UNK_180a36098 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180564150;
      }
    }
    puVar1 = (uint64_t *)puVar1[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805641b0(longlong param_1)
void FUN_1805641b0(longlong param_1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  
  puVar2 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3);
  *puVar2 = &UNK_180a36170;
  uVar1 = *(uint64_t *)(param_1 + 0x10);
  puVar2[1] = *(uint64_t *)(param_1 + 8);
  puVar2[2] = uVar1;
  *(int32_t *)(puVar2 + 3) = *(int32_t *)(param_1 + 0x18);
  return;
}





// 函数: void FUN_1805641f0(longlong param_1,longlong param_2,longlong param_3,char param_4)
void FUN_1805641f0(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  uint64_t *puVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_4 == '\0') {
    puVar1 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x38);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    pcVar3 = "type";
    do {
      pcVar2 = pcVar3;
      pcVar3 = pcVar2 + 1;
    } while (*pcVar3 != '\0');
    *puVar1 = &UNK_180a0ee30;
    puVar1[2] = pcVar2 + -0x180a0ee2f;
    pcVar3 = "displacement_data";
    do {
      pcVar2 = pcVar3;
      pcVar3 = pcVar2 + 1;
    } while (*pcVar3 != '\0');
    puVar1[1] = &UNK_180a36130;
    puVar1[3] = pcVar2 + -0x180a3612f;
    if (*(longlong *)(param_3 + 0x40) == 0) {
      puVar1[5] = 0;
      *(uint64_t **)(param_3 + 0x40) = puVar1;
    }
    else {
      puVar1[5] = *(uint64_t *)(param_3 + 0x48);
      *(uint64_t **)(*(longlong *)(param_3 + 0x48) + 0x30) = puVar1;
    }
    *(uint64_t **)(param_3 + 0x48) = puVar1;
    puVar1[4] = param_3;
    puVar1[6] = 0;
  }
  puVar1 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x38);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  pcVar3 = "displacement_vector";
  do {
    pcVar2 = pcVar3;
    pcVar3 = pcVar2 + 1;
  } while (*pcVar3 != '\0');
  *puVar1 = &UNK_180a36150;
  puVar1[2] = pcVar2 + -0x180a3614f;
  puVar1[1] = &DAT_18098bc73;
  puVar1[3] = 0;
  if (*(longlong *)(param_3 + 0x40) == 0) {
    puVar1[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar1;
  }
  else {
    puVar1[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(longlong *)(param_3 + 0x48) + 0x30) = puVar1;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar1;
  puVar1[4] = param_3;
  puVar1[6] = 0;
  FUN_18062fb40(param_2,param_3,&UNK_180a36150,param_1 + 8);
  FUN_18062f990(param_2,param_3,&UNK_180a36110,*(int32_t *)(param_1 + 0x18));
  return;
}





