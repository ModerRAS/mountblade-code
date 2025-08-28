#include "TaleWorlds.Native.Split.h"

// 99_part_02_part017.c - 5 个函数

// 函数: void FUN_1800f5d13(void)
void FUN_1800f5d13(void)

{
  uint64_t *puVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  uint64_t *unaff_RBX;
  longlong unaff_RSI;
  char *unaff_RDI;
  longlong in_R9;
  longlong in_R10;
  char *pcVar5;
  
  while( true ) {
    do {
      unaff_RBX = (uint64_t *)unaff_RBX[0xb];
      if (unaff_RBX == (uint64_t *)0x0) {
        return;
      }
      if ((char *)*unaff_RBX == (char *)0x0) {
        lVar4 = 0;
        pcVar2 = unaff_RDI;
      }
      else {
        lVar4 = unaff_RBX[2];
        pcVar2 = (char *)*unaff_RBX;
      }
    } while (lVar4 != in_R9);
    pcVar5 = pcVar2 + lVar4;
    if (pcVar5 <= pcVar2) break;
    lVar4 = in_R10 - (longlong)pcVar2;
    while (*pcVar2 == pcVar2[lVar4]) {
      pcVar2 = pcVar2 + 1;
      if (pcVar5 <= pcVar2) goto FUN_1800f5cd6;
    }
  }
FUN_1800f5cd6:
  pcVar2 = "stretching_stiffness";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = (uint64_t *)unaff_RBX[8]; puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04c77) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar2 <= pcVar3) {
LAB_1800f5d60:
        pcVar2 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar2 = (char *)puVar1[1];
        }
        goto LAB_1800f5d7b;
      }
      lVar4 = (longlong)&UNK_180a04c78 - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar2 <= pcVar3) goto LAB_1800f5d60;
      }
    }
  }
  pcVar2 = (char *)0x0;
LAB_1800f5d7b:
  if ((unaff_RSI != -0x2c) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "anchor_stiffness";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = (uint64_t *)unaff_RBX[8]; puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04c5f) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar2 <= pcVar3) {
LAB_1800f5e00:
        pcVar2 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar2 = (char *)puVar1[1];
        }
        goto LAB_1800f5e1b;
      }
      lVar4 = (longlong)&UNK_180a04c60 - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar2 <= pcVar3) goto LAB_1800f5e00;
      }
    }
  }
  pcVar2 = (char *)0x0;
LAB_1800f5e1b:
  if ((unaff_RSI != -0x30) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "bending_stiffness";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = (uint64_t *)unaff_RBX[8]; puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04ca7) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar2 <= pcVar3) {
LAB_1800f5ea0:
        pcVar2 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar2 = (char *)puVar1[1];
        }
        goto LAB_1800f5ebb;
      }
      lVar4 = (longlong)&UNK_180a04ca8 - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar2 <= pcVar3) goto LAB_1800f5ea0;
      }
    }
  }
  pcVar2 = (char *)0x0;
LAB_1800f5ebb:
  if ((unaff_RSI != -0x24) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "shearing_stiffness_";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = (uint64_t *)unaff_RBX[8]; puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04c8f) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar2 <= pcVar3) {
LAB_1800f5f40:
        pcVar2 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar2 = (char *)puVar1[1];
        }
        goto LAB_1800f5f5b;
      }
      lVar4 = (longlong)&UNK_180a04c90 - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar2 <= pcVar3) goto LAB_1800f5f40;
      }
    }
  }
  pcVar2 = (char *)0x0;
LAB_1800f5f5b:
  if ((unaff_RSI != -0x28) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "damping";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = (uint64_t *)unaff_RBX[8]; puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04cc7) {
      pcVar2 = pcVar3 + (longlong)pcVar2;
      if (pcVar2 <= pcVar3) {
LAB_1800f5fe0:
        pcVar2 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar2 = (char *)puVar1[1];
        }
        goto LAB_1800f5ffb;
      }
      lVar4 = (longlong)&UNK_180a04cc8 - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar2 <= pcVar3) goto LAB_1800f5fe0;
      }
    }
  }
  pcVar2 = (char *)0x0;
LAB_1800f5ffb:
  if ((unaff_RSI != -0x34) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "gravity";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = (uint64_t *)unaff_RBX[8]; puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04cbf) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar2 <= pcVar3) {
LAB_1800f6080:
        pcVar2 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar2 = (char *)puVar1[1];
        }
        goto LAB_1800f609b;
      }
      lVar4 = (longlong)&UNK_180a04cc0 - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar2 <= pcVar3) goto LAB_1800f6080;
      }
    }
  }
  pcVar2 = (char *)0x0;
LAB_1800f609b:
  if ((unaff_RSI != -0x38) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "linear_inertia";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = (uint64_t *)unaff_RBX[8]; puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04ce7) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar2 <= pcVar3) {
LAB_1800f6120:
        pcVar2 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar2 = (char *)puVar1[1];
        }
        goto LAB_1800f613b;
      }
      lVar4 = (longlong)&UNK_180a04ce8 - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar2 <= pcVar3) goto LAB_1800f6120;
      }
    }
  }
  pcVar2 = (char *)0x0;
LAB_1800f613b:
  if ((unaff_RSI != -0x3c) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "max_linear_velocity";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = (uint64_t *)unaff_RBX[8]; puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04ccf) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar2 <= pcVar3) {
LAB_1800f61c0:
        pcVar2 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar2 = (char *)puVar1[1];
        }
        goto LAB_1800f61db;
      }
      lVar4 = (longlong)&UNK_180a04cd0 - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar2 <= pcVar3) goto LAB_1800f61c0;
      }
    }
  }
  pcVar2 = (char *)0x0;
LAB_1800f61db:
  if ((unaff_RSI != -0x40) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "linear_velocity_multiplier";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = (uint64_t *)unaff_RBX[8]; puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04cff) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar2 <= pcVar3) {
LAB_1800f6260:
        pcVar2 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar2 = (char *)puVar1[1];
        }
        goto LAB_1800f627b;
      }
      lVar4 = (longlong)&UNK_180a04d00 - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar2 <= pcVar3) goto LAB_1800f6260;
      }
    }
  }
  pcVar2 = (char *)0x0;
LAB_1800f627b:
  if ((unaff_RSI != -0x44) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "wind";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = (uint64_t *)unaff_RBX[8]; puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04cf7) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar2 <= pcVar3) {
LAB_1800f6300:
        pcVar2 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar2 = (char *)puVar1[1];
        }
        goto LAB_1800f631b;
      }
      lVar4 = (longlong)&UNK_180a04cf8 - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar2 <= pcVar3) goto LAB_1800f6300;
      }
    }
  }
  pcVar2 = (char *)0x0;
LAB_1800f631b:
  if ((unaff_RSI != -0x4c) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "air_drag_multiplier";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  puVar1 = (uint64_t *)unaff_RBX[8];
  do {
    if (puVar1 == (uint64_t *)0x0) {
      unaff_RDI = (char *)0x0;
LAB_1800f63b8:
      if ((unaff_RSI + 0x48 != 0) && (unaff_RDI != (char *)0x0)) {
        FUN_18010cbc0(unaff_RDI,&system_data_6430,unaff_RSI + 0x48);
      }
      return;
    }
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04d1f) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar2 <= pcVar3) {
LAB_1800f63a0:
        if ((char *)puVar1[1] != (char *)0x0) {
          unaff_RDI = (char *)puVar1[1];
        }
        goto LAB_1800f63b8;
      }
      lVar4 = (longlong)&UNK_180a04d20 - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar2 <= pcVar3) goto LAB_1800f63a0;
      }
    }
    puVar1 = (uint64_t *)puVar1[6];
  } while( true );
}






// 函数: void FUN_1800f5d30(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_1800f5d30(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char *unaff_RDI;
  longlong in_R10;
  char *pcVar5;
  longlong in_R11;
  
code_r0x0001800f5d30:
  lVar4 = 0;
  pcVar2 = unaff_RDI;
  while (lVar4 != in_R10) {
LAB_1800f5d70:
    param_3 = (uint64_t *)param_3[6];
    if (param_3 == (uint64_t *)0x0) {
      pcVar2 = (char *)0x0;
      goto LAB_1800f5d7b;
    }
    pcVar2 = (char *)*param_3;
    if (pcVar2 == (char *)0x0) goto code_r0x0001800f5d30;
    lVar4 = param_3[2];
  }
  pcVar5 = pcVar2 + lVar4;
  if (pcVar2 < pcVar5) {
    lVar4 = unaff_RBP - (longlong)pcVar2;
    while (*pcVar2 == pcVar2[lVar4]) {
      pcVar2 = pcVar2 + 1;
      if (pcVar5 <= pcVar2) goto LAB_1800f5d60;
    }
    goto LAB_1800f5d70;
  }
LAB_1800f5d60:
  pcVar2 = unaff_RDI;
  if ((char *)param_3[1] != (char *)0x0) {
    pcVar2 = (char *)param_3[1];
  }
LAB_1800f5d7b:
  if ((in_R11 != 0) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "anchor_stiffness";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = *(uint64_t **)(unaff_RBX + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04c5f) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar3 < pcVar2) {
        lVar4 = (longlong)&UNK_180a04c60 - (longlong)pcVar3;
        do {
          if (*pcVar3 != pcVar3[lVar4]) goto LAB_1800f5e10;
          pcVar3 = pcVar3 + 1;
        } while (pcVar3 < pcVar2);
      }
      pcVar2 = unaff_RDI;
      if ((char *)puVar1[1] != (char *)0x0) {
        pcVar2 = (char *)puVar1[1];
      }
      goto LAB_1800f5e1b;
    }
LAB_1800f5e10:
  }
  pcVar2 = (char *)0x0;
LAB_1800f5e1b:
  if ((unaff_RSI != -0x30) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "bending_stiffness";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = *(uint64_t **)(unaff_RBX + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04ca7) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar3 < pcVar2) {
        lVar4 = (longlong)&UNK_180a04ca8 - (longlong)pcVar3;
        do {
          if (*pcVar3 != pcVar3[lVar4]) goto LAB_1800f5eb0;
          pcVar3 = pcVar3 + 1;
        } while (pcVar3 < pcVar2);
      }
      pcVar2 = unaff_RDI;
      if ((char *)puVar1[1] != (char *)0x0) {
        pcVar2 = (char *)puVar1[1];
      }
      goto LAB_1800f5ebb;
    }
LAB_1800f5eb0:
  }
  pcVar2 = (char *)0x0;
LAB_1800f5ebb:
  if ((unaff_RSI != -0x24) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "shearing_stiffness_";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = *(uint64_t **)(unaff_RBX + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04c8f) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar3 < pcVar2) {
        lVar4 = (longlong)&UNK_180a04c90 - (longlong)pcVar3;
        do {
          if (*pcVar3 != pcVar3[lVar4]) goto LAB_1800f5f50;
          pcVar3 = pcVar3 + 1;
        } while (pcVar3 < pcVar2);
      }
      pcVar2 = unaff_RDI;
      if ((char *)puVar1[1] != (char *)0x0) {
        pcVar2 = (char *)puVar1[1];
      }
      goto LAB_1800f5f5b;
    }
LAB_1800f5f50:
  }
  pcVar2 = (char *)0x0;
LAB_1800f5f5b:
  if ((unaff_RSI != -0x28) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "damping";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = *(uint64_t **)(unaff_RBX + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04cc7) {
      pcVar2 = pcVar3 + (longlong)pcVar2;
      if (pcVar3 < pcVar2) {
        lVar4 = (longlong)&UNK_180a04cc8 - (longlong)pcVar3;
        do {
          if (*pcVar3 != pcVar3[lVar4]) goto LAB_1800f5ff0;
          pcVar3 = pcVar3 + 1;
        } while (pcVar3 < pcVar2);
      }
      pcVar2 = unaff_RDI;
      if ((char *)puVar1[1] != (char *)0x0) {
        pcVar2 = (char *)puVar1[1];
      }
      goto LAB_1800f5ffb;
    }
LAB_1800f5ff0:
  }
  pcVar2 = (char *)0x0;
LAB_1800f5ffb:
  if ((unaff_RSI != -0x34) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "gravity";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = *(uint64_t **)(unaff_RBX + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04cbf) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar3 < pcVar2) {
        lVar4 = (longlong)&UNK_180a04cc0 - (longlong)pcVar3;
        do {
          if (*pcVar3 != pcVar3[lVar4]) goto LAB_1800f6090;
          pcVar3 = pcVar3 + 1;
        } while (pcVar3 < pcVar2);
      }
      pcVar2 = unaff_RDI;
      if ((char *)puVar1[1] != (char *)0x0) {
        pcVar2 = (char *)puVar1[1];
      }
      goto LAB_1800f609b;
    }
LAB_1800f6090:
  }
  pcVar2 = (char *)0x0;
LAB_1800f609b:
  if ((unaff_RSI != -0x38) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "linear_inertia";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = *(uint64_t **)(unaff_RBX + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04ce7) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar3 < pcVar2) {
        lVar4 = (longlong)&UNK_180a04ce8 - (longlong)pcVar3;
        do {
          if (*pcVar3 != pcVar3[lVar4]) goto LAB_1800f6130;
          pcVar3 = pcVar3 + 1;
        } while (pcVar3 < pcVar2);
      }
      pcVar2 = unaff_RDI;
      if ((char *)puVar1[1] != (char *)0x0) {
        pcVar2 = (char *)puVar1[1];
      }
      goto LAB_1800f613b;
    }
LAB_1800f6130:
  }
  pcVar2 = (char *)0x0;
LAB_1800f613b:
  if ((unaff_RSI != -0x3c) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "max_linear_velocity";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = *(uint64_t **)(unaff_RBX + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04ccf) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar3 < pcVar2) {
        lVar4 = (longlong)&UNK_180a04cd0 - (longlong)pcVar3;
        do {
          if (*pcVar3 != pcVar3[lVar4]) goto LAB_1800f61d0;
          pcVar3 = pcVar3 + 1;
        } while (pcVar3 < pcVar2);
      }
      pcVar2 = unaff_RDI;
      if ((char *)puVar1[1] != (char *)0x0) {
        pcVar2 = (char *)puVar1[1];
      }
      goto LAB_1800f61db;
    }
LAB_1800f61d0:
  }
  pcVar2 = (char *)0x0;
LAB_1800f61db:
  if ((unaff_RSI != -0x40) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "linear_velocity_multiplier";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = *(uint64_t **)(unaff_RBX + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04cff) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar3 < pcVar2) {
        lVar4 = (longlong)&UNK_180a04d00 - (longlong)pcVar3;
        do {
          if (*pcVar3 != pcVar3[lVar4]) goto LAB_1800f6270;
          pcVar3 = pcVar3 + 1;
        } while (pcVar3 < pcVar2);
      }
      pcVar2 = unaff_RDI;
      if ((char *)puVar1[1] != (char *)0x0) {
        pcVar2 = (char *)puVar1[1];
      }
      goto LAB_1800f627b;
    }
LAB_1800f6270:
  }
  pcVar2 = (char *)0x0;
LAB_1800f627b:
  if ((unaff_RSI != -0x44) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar2 = "wind";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar2 != '\0');
  puVar1 = *(uint64_t **)(unaff_RBX + 0x40);
  do {
    if (puVar1 == (uint64_t *)0x0) {
      pcVar2 = (char *)0x0;
LAB_1800f631b:
      if ((unaff_RSI != -0x4c) && (pcVar2 != (char *)0x0)) {
        FUN_18010cbc0();
      }
      pcVar2 = "air_drag_multiplier";
      do {
        pcVar5 = pcVar2;
        pcVar2 = pcVar5 + 1;
      } while (*pcVar2 != '\0');
      puVar1 = *(uint64_t **)(unaff_RBX + 0x40);
      while( true ) {
        if (puVar1 == (uint64_t *)0x0) {
          unaff_RDI = (char *)0x0;
          goto LAB_1800f63b8;
        }
        if ((char *)*puVar1 == (char *)0x0) {
          pcVar2 = (char *)0x0;
          pcVar3 = unaff_RDI;
        }
        else {
          pcVar2 = (char *)puVar1[2];
          pcVar3 = (char *)*puVar1;
        }
        if (pcVar2 == pcVar5 + -0x180a04d1f) break;
LAB_1800f63ad:
        puVar1 = (uint64_t *)puVar1[6];
      }
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar3 < pcVar2) {
        lVar4 = (longlong)&UNK_180a04d20 - (longlong)pcVar3;
        do {
          if (*pcVar3 != pcVar3[lVar4]) goto LAB_1800f63ad;
          pcVar3 = pcVar3 + 1;
        } while (pcVar3 < pcVar2);
      }
      if ((char *)puVar1[1] != (char *)0x0) {
        unaff_RDI = (char *)puVar1[1];
      }
LAB_1800f63b8:
      if ((unaff_RSI + 0x48 != 0) && (unaff_RDI != (char *)0x0)) {
        FUN_18010cbc0(unaff_RDI,&system_data_6430,unaff_RSI + 0x48);
      }
      return;
    }
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RDI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar5 + -0x180a04cf7) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar3 < pcVar2) {
        lVar4 = (longlong)&UNK_180a04cf8 - (longlong)pcVar3;
        do {
          if (*pcVar3 != pcVar3[lVar4]) goto LAB_1800f6310;
          pcVar3 = pcVar3 + 1;
        } while (pcVar3 < pcVar2);
      }
      pcVar2 = unaff_RDI;
      if ((char *)puVar1[1] != (char *)0x0) {
        pcVar2 = (char *)puVar1[1];
      }
      goto LAB_1800f631b;
    }
LAB_1800f6310:
    puVar1 = (uint64_t *)puVar1[6];
  } while( true );
}






// 函数: void FUN_1800f6325(longlong param_1)
void FUN_1800f6325(longlong param_1)

{
  uint64_t *puVar1;
  char *pcVar2;
  longlong lVar3;
  longlong unaff_RBX;
  longlong unaff_RSI;
  char *unaff_RDI;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 != 0) {
    FUN_18010cbc0(param_1,&system_data_6430);
  }
  pcVar4 = "air_drag_multiplier";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  puVar1 = *(uint64_t **)(unaff_RBX + 0x40);
  do {
    if (puVar1 == (uint64_t *)0x0) {
      unaff_RDI = (char *)0x0;
LAB_1800f63b8:
      if ((unaff_RSI + 0x48 != 0) && (unaff_RDI != (char *)0x0)) {
        FUN_18010cbc0(unaff_RDI,&system_data_6430,unaff_RSI + 0x48);
      }
      return;
    }
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar2 = unaff_RDI;
    }
    else {
      pcVar4 = (char *)puVar1[2];
      pcVar2 = (char *)*puVar1;
    }
    if (pcVar4 == pcVar5 + -0x180a04d1f) {
      pcVar4 = pcVar4 + (longlong)pcVar2;
      if (pcVar4 <= pcVar2) {
LAB_1800f63a0:
        if ((char *)puVar1[1] != (char *)0x0) {
          unaff_RDI = (char *)puVar1[1];
        }
        goto LAB_1800f63b8;
      }
      lVar3 = (longlong)&UNK_180a04d20 - (longlong)pcVar2;
      while (*pcVar2 == pcVar2[lVar3]) {
        pcVar2 = pcVar2 + 1;
        if (pcVar4 <= pcVar2) goto LAB_1800f63a0;
      }
    }
    puVar1 = (uint64_t *)puVar1[6];
  } while( true );
}



uint64_t * FUN_1800f63f0(uint64_t *param_1)

{
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *(int32_t *)(param_1 + 4) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x24) = 0x3f000000;
  *(int32_t *)(param_1 + 5) = 0x3f000000;
  *(int32_t *)((longlong)param_1 + 0x2c) = 0x3f4ccccd;
  *(int32_t *)(param_1 + 6) = 0x3f000000;
  *(int32_t *)((longlong)param_1 + 0x34) = 0x3e99999a;
  *(int32_t *)(param_1 + 7) = 0x411cf5c3;
  *(int32_t *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(int32_t *)(param_1 + 8) = 0xbf800000;
  *(int32_t *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(int32_t *)(param_1 + 9) = 0x3f000000;
  *(int32_t *)((longlong)param_1 + 0x4c) = 0x3f800000;
  return param_1;
}



longlong FUN_1800f6490(longlong param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x38))();
  }
  FUN_180049470(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xd0,param_3,param_4,uVar1);
  }
  return param_1;
}






// 函数: void FUN_1800f64f0(longlong param_1)
void FUN_1800f64f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t uVar7;
  longlong alStack_70 [2];
  code *pcStack_60;
  code *pcStack_58;
  longlong alStack_50 [2];
  code *pcStack_40;
  void *puStack_38;
  
  uVar7 = 0xfffffffffffffffe;
  iVar3 = (int)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x40) -
                *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x38) >> 4);
  lVar5 = (longlong)iVar3;
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0xc0);
      lVar2 = *(longlong *)(lVar6 + *(longlong *)(lVar4 + 0x38));
      if ((*(byte *)(lVar2 + 0xfd) & 0x20) == 0) {
        lVar2 = func_0x000180085de0(*(uint64_t *)(lVar2 + 0x1b0));
      }
      if (*(char *)(lVar2 + 0x2e9) == '\x01') {
        if (*(longlong *)(lVar4 + 0x30) == 0) {
          lVar4 = *(longlong *)(lVar2 + 0x1c8);
        }
        plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x30) + 0x88);
        pcStack_40 = (code *)&UNK_1800f8200;
        puStack_38 = &UNK_1800f81f0;
        pcStack_60 = (code *)&UNK_1800f83c0;
        pcStack_58 = FUN_1800f8240;
        alStack_70[0] = lVar2;
        alStack_50[0] = lVar2;
        (**(code **)(*plVar1 + 0x70))
                  (plVar1,&system_data_c9b8,lVar2 + 0xb8,0,alStack_70,alStack_50,uVar7);
        if (pcStack_60 != (code *)0x0) {
          (*pcStack_60)(alStack_70,0,0);
        }
        if (pcStack_40 != (code *)0x0) {
          (*pcStack_40)(alStack_50,0,0);
        }
      }
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



longlong FUN_1800f66b0(longlong param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x38))();
  }
  FUN_180049470(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,200,param_3,param_4,uVar1);
  }
  return param_1;
}






// 函数: void FUN_1800f6710(longlong param_1)
void FUN_1800f6710(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t uVar7;
  longlong alStack_70 [2];
  code *pcStack_60;
  code *pcStack_58;
  longlong alStack_50 [2];
  code *pcStack_40;
  void *puStack_38;
  
  uVar7 = 0xfffffffffffffffe;
  iVar3 = (int)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x40) -
                *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x38) >> 4);
  lVar5 = (longlong)iVar3;
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0xc0);
      lVar2 = *(longlong *)(lVar6 + *(longlong *)(lVar4 + 0x38));
      if ((*(byte *)(lVar2 + 0xfd) & 0x20) == 0) {
        lVar2 = func_0x000180085de0(*(uint64_t *)(lVar2 + 0x1b0));
      }
      if (*(char *)(lVar2 + 0x2f9) == '\x01') {
        if (*(longlong *)(lVar4 + 0x30) == 0) {
          lVar4 = *(longlong *)(lVar2 + 0x1c8);
        }
        plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x30) + 0x88);
        pcStack_40 = (code *)&UNK_1800f8120;
        puStack_38 = &UNK_1800f8110;
        pcStack_60 = (code *)&UNK_1800f81b0;
        pcStack_58 = FUN_1800f8160;
        alStack_70[0] = lVar2;
        alStack_50[0] = lVar2;
        (**(code **)(*plVar1 + 0x70))
                  (plVar1,&system_data_c940,lVar2 + 0xb8,0,alStack_70,alStack_50,uVar7);
        if (pcStack_60 != (code *)0x0) {
          (*pcStack_60)(alStack_70,0,0);
        }
        if (pcStack_40 != (code *)0x0) {
          (*pcStack_40)(alStack_50,0,0);
        }
      }
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




