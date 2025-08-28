#include "TaleWorlds.Native.Split.h"

// 99_part_02_part034.c - 9 个函数

// 函数: void FUN_1801a5cd0(void)
void FUN_1801a5cd0(void)

{
  uint64_t *puVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  uint64_t *unaff_RBX;
  longlong unaff_RDI;
  float *pfVar5;
  longlong in_R9;
  longlong in_R10;
  char *pcVar6;
  
  do {
    pcVar3 = (char *)*unaff_RBX;
    if (pcVar3 == (char *)0x0) {
      lVar4 = 0;
      pcVar3 = (char *)0x180d48d24;
    }
    else {
      lVar4 = unaff_RBX[2];
    }
    if (lVar4 == in_R9) {
      pcVar6 = pcVar3 + lVar4;
      if (pcVar6 <= pcVar3) {
FUN_1801a5d17:
        pcVar3 = "near_plane";
        do {
          pcVar6 = pcVar3;
          pcVar3 = pcVar6 + 1;
        } while (*pcVar3 != '\0');
        for (puVar1 = (uint64_t *)unaff_RBX[8]; puVar1 != (uint64_t *)0x0;
            puVar1 = (uint64_t *)puVar1[6]) {
          pcVar3 = (char *)*puVar1;
          if (pcVar3 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar3 = (char *)0x180d48d24;
          }
          else {
            pcVar2 = (char *)puVar1[2];
          }
          if (pcVar2 == pcVar6 + -0x180a0b66f) {
            pcVar2 = pcVar2 + (longlong)pcVar3;
            if (pcVar2 <= pcVar3) {
LAB_1801a5d96:
              lVar4 = 0x180d48d24;
              if (puVar1[1] != 0) {
                lVar4 = puVar1[1];
              }
              goto LAB_1801a5db1;
            }
            lVar4 = (longlong)&UNK_180a0b670 - (longlong)pcVar3;
            while (*pcVar3 == pcVar3[lVar4]) {
              pcVar3 = pcVar3 + 1;
              if (pcVar2 <= pcVar3) goto LAB_1801a5d96;
            }
          }
        }
        lVar4 = 0;
LAB_1801a5db1:
        if ((unaff_RDI + 0x607d4 != 0) && (lVar4 != 0)) {
          FUN_18010cbc0(lVar4,&DAT_180a06430,unaff_RDI + 0x607d4);
        }
        pfVar5 = (float *)(unaff_RDI + 0x607d8);
        pcVar3 = "far_plane";
        do {
          pcVar6 = pcVar3;
          pcVar3 = pcVar6 + 1;
        } while (*pcVar3 != '\0');
        puVar1 = (uint64_t *)unaff_RBX[8];
        do {
          if (puVar1 == (uint64_t *)0x0) {
            lVar4 = 0;
LAB_1801a5e49:
            if ((pfVar5 != (float *)0x0) && (lVar4 != 0)) {
              FUN_18010cbc0(lVar4,&DAT_180a06430,pfVar5);
            }
            if (*pfVar5 <= 5000.0 && *pfVar5 != 5000.0) {
              *pfVar5 = 5000.0;
            }
            return;
          }
          pcVar3 = (char *)*puVar1;
          if (pcVar3 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar3 = (char *)0x180d48d24;
          }
          else {
            pcVar2 = (char *)puVar1[2];
          }
          if (pcVar2 == pcVar6 + -0x180a0b65f) {
            pcVar2 = pcVar2 + (longlong)pcVar3;
            if (pcVar2 <= pcVar3) {
LAB_1801a5e31:
              lVar4 = 0x180d48d24;
              if (puVar1[1] != 0) {
                lVar4 = puVar1[1];
              }
              goto LAB_1801a5e49;
            }
            lVar4 = (longlong)&UNK_180a0b660 - (longlong)pcVar3;
            while (*pcVar3 == pcVar3[lVar4]) {
              pcVar3 = pcVar3 + 1;
              if (pcVar2 <= pcVar3) goto LAB_1801a5e31;
            }
          }
          puVar1 = (uint64_t *)puVar1[6];
        } while( true );
      }
      lVar4 = in_R10 - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar6 <= pcVar3) goto FUN_1801a5d17;
      }
    }
    unaff_RBX = (uint64_t *)unaff_RBX[0xb];
    if (unaff_RBX == (uint64_t *)0x0) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1801a5d17(int32_t param_1)
void FUN_1801a5d17(int32_t param_1)

{
  uint64_t *puVar1;
  char *pcVar2;
  longlong unaff_RBX;
  char *unaff_RSI;
  longlong unaff_RDI;
  float *pfVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = "near_plane";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  for (puVar1 = *(uint64_t **)(unaff_RBX + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar5 = (char *)0x0;
      pcVar2 = unaff_RSI;
    }
    else {
      pcVar5 = (char *)puVar1[2];
      pcVar2 = (char *)*puVar1;
    }
    if (pcVar5 == pcVar6 + -0x180a0b66f) {
      pcVar5 = pcVar5 + (longlong)pcVar2;
      if (pcVar5 <= pcVar2) {
LAB_1801a5d96:
        pcVar5 = unaff_RSI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar5 = (char *)puVar1[1];
        }
        goto LAB_1801a5db1;
      }
      lVar4 = (longlong)&UNK_180a0b670 - (longlong)pcVar2;
      while (*pcVar2 == pcVar2[lVar4]) {
        pcVar2 = pcVar2 + 1;
        if (pcVar5 <= pcVar2) goto LAB_1801a5d96;
      }
    }
  }
  pcVar5 = (char *)0x0;
LAB_1801a5db1:
  if ((unaff_RDI + 0x607d4 != 0) && (pcVar5 != (char *)0x0)) {
    FUN_18010cbc0(param_1,&DAT_180a06430,unaff_RDI + 0x607d4);
  }
  pfVar3 = (float *)(unaff_RDI + 0x607d8);
  pcVar5 = "far_plane";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  puVar1 = *(uint64_t **)(unaff_RBX + 0x40);
  do {
    if (puVar1 == (uint64_t *)0x0) {
      unaff_RSI = (char *)0x0;
LAB_1801a5e49:
      if ((pfVar3 != (float *)0x0) && (unaff_RSI != (char *)0x0)) {
        FUN_18010cbc0(unaff_RSI,&DAT_180a06430,pfVar3);
      }
      if (*pfVar3 <= 5000.0 && *pfVar3 != 5000.0) {
        *pfVar3 = 5000.0;
      }
      return;
    }
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar5 = (char *)0x0;
      pcVar2 = unaff_RSI;
    }
    else {
      pcVar5 = (char *)puVar1[2];
      pcVar2 = (char *)*puVar1;
    }
    if (pcVar5 == pcVar6 + -0x180a0b65f) {
      pcVar5 = pcVar5 + (longlong)pcVar2;
      if (pcVar5 <= pcVar2) {
LAB_1801a5e31:
        if ((char *)puVar1[1] != (char *)0x0) {
          unaff_RSI = (char *)puVar1[1];
        }
        goto LAB_1801a5e49;
      }
      lVar4 = (longlong)&UNK_180a0b660 - (longlong)pcVar2;
      while (*pcVar2 == pcVar2[lVar4]) {
        pcVar2 = pcVar2 + 1;
        if (pcVar5 <= pcVar2) goto LAB_1801a5e31;
      }
    }
    puVar1 = (uint64_t *)puVar1[6];
  } while( true );
}






// 函数: void FUN_1801a5d53(int32_t param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_1801a5d53(int32_t param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  uint64_t *puVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  uint64_t *unaff_RBX;
  char *unaff_RSI;
  longlong unaff_RDI;
  float *pfVar5;
  longlong in_R10;
  char *pcVar6;
  
  while( true ) {
    do {
      unaff_RBX = (uint64_t *)unaff_RBX[0xb];
      if (unaff_RBX == (uint64_t *)0x0) {
        return;
      }
      if ((char *)*unaff_RBX == (char *)0x0) {
        lVar4 = 0;
        pcVar2 = unaff_RSI;
      }
      else {
        lVar4 = unaff_RBX[2];
        pcVar2 = (char *)*unaff_RBX;
      }
    } while (lVar4 != param_4);
    pcVar6 = pcVar2 + lVar4;
    if (pcVar6 <= pcVar2) break;
    lVar4 = in_R10 - (longlong)pcVar2;
    while (*pcVar2 == pcVar2[lVar4]) {
      pcVar2 = pcVar2 + 1;
      if (pcVar6 <= pcVar2) goto FUN_1801a5d17;
    }
  }
FUN_1801a5d17:
  pcVar2 = "near_plane";
  do {
    pcVar6 = pcVar2;
    pcVar2 = pcVar6 + 1;
  } while (*pcVar2 != '\0');
  for (puVar1 = (uint64_t *)unaff_RBX[8]; puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RSI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar6 + -0x180a0b66f) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar2 <= pcVar3) {
LAB_1801a5d96:
        pcVar2 = unaff_RSI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar2 = (char *)puVar1[1];
        }
        goto LAB_1801a5db1;
      }
      lVar4 = (longlong)&UNK_180a0b670 - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar2 <= pcVar3) goto LAB_1801a5d96;
      }
    }
  }
  pcVar2 = (char *)0x0;
LAB_1801a5db1:
  if ((unaff_RDI + 0x607d4 != 0) && (pcVar2 != (char *)0x0)) {
    FUN_18010cbc0(param_1,&DAT_180a06430,unaff_RDI + 0x607d4);
  }
  pfVar5 = (float *)(unaff_RDI + 0x607d8);
  pcVar2 = "far_plane";
  do {
    pcVar6 = pcVar2;
    pcVar2 = pcVar6 + 1;
  } while (*pcVar2 != '\0');
  puVar1 = (uint64_t *)unaff_RBX[8];
  do {
    if (puVar1 == (uint64_t *)0x0) {
      unaff_RSI = (char *)0x0;
LAB_1801a5e49:
      if ((pfVar5 != (float *)0x0) && (unaff_RSI != (char *)0x0)) {
        FUN_18010cbc0(unaff_RSI,&DAT_180a06430,pfVar5);
      }
      if (*pfVar5 <= 5000.0 && *pfVar5 != 5000.0) {
        *pfVar5 = 5000.0;
      }
      return;
    }
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_RSI;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar6 + -0x180a0b65f) {
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar2 <= pcVar3) {
LAB_1801a5e31:
        if ((char *)puVar1[1] != (char *)0x0) {
          unaff_RSI = (char *)puVar1[1];
        }
        goto LAB_1801a5e49;
      }
      lVar4 = (longlong)&UNK_180a0b660 - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar2 <= pcVar3) goto LAB_1801a5e31;
      }
    }
    puVar1 = (uint64_t *)puVar1[6];
  } while( true );
}






// 函数: void FUN_1801a5d6c(int32_t param_1,uint64_t *param_2)
void FUN_1801a5d6c(int32_t param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  char *pcVar2;
  char *pcVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  float *pfVar4;
  longlong lVar5;
  longlong in_R10;
  char *pcVar6;
  longlong in_R11;
  
code_r0x0001801a5d6c:
  lVar5 = 0;
  pcVar2 = unaff_RSI;
  do {
    if (lVar5 == in_R10) {
      pcVar6 = pcVar2 + lVar5;
      if (pcVar2 < pcVar6) {
        lVar5 = unaff_RBP - (longlong)pcVar2;
        while (*pcVar2 == pcVar2[lVar5]) {
          pcVar2 = pcVar2 + 1;
          if (pcVar6 <= pcVar2) goto LAB_1801a5d96;
        }
        goto LAB_1801a5da6;
      }
LAB_1801a5d96:
      pcVar2 = unaff_RSI;
      if ((char *)param_2[1] != (char *)0x0) {
        pcVar2 = (char *)param_2[1];
      }
LAB_1801a5db1:
      if ((in_R11 != 0) && (pcVar2 != (char *)0x0)) {
        FUN_18010cbc0(param_1,&DAT_180a06430);
      }
      pfVar4 = (float *)(unaff_RDI + 0x607d8);
      pcVar2 = "far_plane";
      do {
        pcVar6 = pcVar2;
        pcVar2 = pcVar6 + 1;
      } while (*pcVar2 != '\0');
      puVar1 = *(uint64_t **)(unaff_RBX + 0x40);
      while( true ) {
        if (puVar1 == (uint64_t *)0x0) {
          unaff_RSI = (char *)0x0;
          goto LAB_1801a5e49;
        }
        if ((char *)*puVar1 == (char *)0x0) {
          pcVar2 = (char *)0x0;
          pcVar3 = unaff_RSI;
        }
        else {
          pcVar2 = (char *)puVar1[2];
          pcVar3 = (char *)*puVar1;
        }
        if (pcVar2 == pcVar6 + -0x180a0b65f) break;
LAB_1801a5e3e:
        puVar1 = (uint64_t *)puVar1[6];
      }
      pcVar2 = pcVar2 + (longlong)pcVar3;
      if (pcVar3 < pcVar2) {
        lVar5 = (longlong)&UNK_180a0b660 - (longlong)pcVar3;
        do {
          if (*pcVar3 != pcVar3[lVar5]) goto LAB_1801a5e3e;
          pcVar3 = pcVar3 + 1;
        } while (pcVar3 < pcVar2);
      }
      if ((char *)puVar1[1] != (char *)0x0) {
        unaff_RSI = (char *)puVar1[1];
      }
LAB_1801a5e49:
      if ((pfVar4 != (float *)0x0) && (unaff_RSI != (char *)0x0)) {
        FUN_18010cbc0(unaff_RSI,&DAT_180a06430,pfVar4);
      }
      if (*pfVar4 <= 5000.0 && *pfVar4 != 5000.0) {
        *pfVar4 = 5000.0;
      }
      return;
    }
LAB_1801a5da6:
    param_2 = (uint64_t *)param_2[6];
    if (param_2 == (uint64_t *)0x0) {
      pcVar2 = (char *)0x0;
      goto LAB_1801a5db1;
    }
    pcVar2 = (char *)*param_2;
    if (pcVar2 == (char *)0x0) goto code_r0x0001801a5d6c;
    lVar5 = param_2[2];
  } while( true );
}






// 函数: void FUN_1801a5dbb(longlong param_1)
void FUN_1801a5dbb(longlong param_1)

{
  uint64_t *puVar1;
  char *pcVar2;
  longlong unaff_RBX;
  char *unaff_RSI;
  longlong unaff_RDI;
  float *pfVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (param_1 != 0) {
    FUN_18010cbc0(param_1,&DAT_180a06430);
  }
  pfVar3 = (float *)(unaff_RDI + 0x607d8);
  pcVar5 = "far_plane";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  puVar1 = *(uint64_t **)(unaff_RBX + 0x40);
  do {
    if (puVar1 == (uint64_t *)0x0) {
      unaff_RSI = (char *)0x0;
LAB_1801a5e49:
      if ((pfVar3 != (float *)0x0) && (unaff_RSI != (char *)0x0)) {
        FUN_18010cbc0(unaff_RSI,&DAT_180a06430,pfVar3);
      }
      if (*pfVar3 <= 5000.0 && *pfVar3 != 5000.0) {
        *pfVar3 = 5000.0;
      }
      return;
    }
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar5 = (char *)0x0;
      pcVar2 = unaff_RSI;
    }
    else {
      pcVar5 = (char *)puVar1[2];
      pcVar2 = (char *)*puVar1;
    }
    if (pcVar5 == pcVar6 + -0x180a0b65f) {
      pcVar5 = pcVar5 + (longlong)pcVar2;
      if (pcVar5 <= pcVar2) {
LAB_1801a5e31:
        if ((char *)puVar1[1] != (char *)0x0) {
          unaff_RSI = (char *)puVar1[1];
        }
        goto LAB_1801a5e49;
      }
      lVar4 = (longlong)&UNK_180a0b660 - (longlong)pcVar2;
      while (*pcVar2 == pcVar2[lVar4]) {
        pcVar2 = pcVar2 + 1;
        if (pcVar5 <= pcVar2) goto LAB_1801a5e31;
      }
    }
    puVar1 = (uint64_t *)puVar1[6];
  } while( true );
}






// 函数: void FUN_1801a5e88(void)
void FUN_1801a5e88(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801a5ea0(longlong param_1,longlong *param_2)
void FUN_1801a5ea0(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  uint64_t uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  uint64_t *puVar7;
  char *pcVar8;
  char *pcVar9;
  int8_t auStackX_8 [16];
  int32_t auStackX_18 [2];
  int aiStackX_20 [2];
  uint64_t uVar10;
  char **ppcVar11;
  char *pcStack_88;
  longlong *plStack_80;
  code *pcStack_78;
  void *puStack_70;
  longlong *plStack_68;
  longlong lStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int *piStack_48;
  
  uVar10 = 0xfffffffffffffffe;
  pcVar8 = "entities";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  puVar7 = *(uint64_t **)(*(longlong *)(param_1 + 0x81a0) + 0x30);
  if (puVar7 != (uint64_t *)0x0) {
    pcVar8 = (char *)0x0;
    do {
      pcVar3 = (char *)*puVar7;
      if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)0x180d48d24;
        pcVar4 = pcVar8;
      }
      else {
        pcVar4 = (char *)puVar7[2];
      }
      if (pcVar4 == pcVar9 + -0x180a0b68f) {
        pcVar4 = pcVar3 + (longlong)pcVar4;
        if (pcVar4 <= pcVar3) {
LAB_1801a5f38:
          pcVar9 = "game_entity";
          do {
            pcVar3 = pcVar9;
            pcVar9 = pcVar3 + 1;
          } while (*pcVar9 != '\0');
          pcVar3 = pcVar3 + -0x180a0b67f;
          pcVar9 = (char *)puVar7[6];
          do {
            if (pcVar9 == (char *)0x0) {
LAB_1801a6077:
              auStackX_18[0] = *(int32_t *)(param_1 + 0x60300);
              if (*(char *)(param_1 + 0x60730) == '\0') {
                auStackX_18[0] = 0;
              }
              aiStackX_20[0] = 1 << ((byte)*(int32_t *)(param_1 + 0x3054) & 0x1f);
              auStackX_8[0] = 1;
              uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,CONCAT71((int7)((ulonglong)pcVar3 >> 8),3)
                                   );
              uVar2 = FUN_18039fc00(uVar2);
              *(uint64_t *)(param_1 + 600) = uVar2;
              lVar6 = (param_2[1] - *param_2) / 6 + (param_2[1] - *param_2 >> 0x3f);
              ppcVar11 = &pcStack_88;
              uStack_58 = auStackX_8;
              uStack_50 = auStackX_18;
              piStack_48 = aiStackX_20;
              pcStack_78 = FUN_1801bc6c0;
              puStack_70 = &UNK_1801bc6b0;
              plStack_68 = param_2;
              lStack_60 = param_1;
              pcStack_88 = (char *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,DAT_180bf65bc);
              *(longlong **)pcStack_88 = plStack_68;
              *(longlong *)(pcStack_88 + 8) = lStack_60;
              *(int32_t *)(pcStack_88 + 0x10) = (int32_t)uStack_58;
              *(int32_t *)(pcStack_88 + 0x14) = uStack_58._4_4_;
              *(int32_t *)(pcStack_88 + 0x18) = (int32_t)uStack_50;
              *(int32_t *)(pcStack_88 + 0x1c) = uStack_50._4_4_;
              *(int **)(pcStack_88 + 0x20) = piStack_48;
              FUN_18015b810((int)piStack_48,0,(int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f),0x40,
                            0xffffffffffffffff,&pcStack_88,uVar10,ppcVar11);
              return;
            }
            pcVar4 = *(char **)pcVar9;
            if (pcVar4 == (char *)0x0) {
              pcVar4 = (char *)0x180d48d24;
              pcVar1 = pcVar8;
            }
            else {
              pcVar1 = *(char **)(pcVar9 + 0x10);
            }
            if (pcVar1 == pcVar3) {
              pcVar1 = pcVar1 + (longlong)pcVar4;
              if (pcVar1 <= pcVar4) {
LAB_1801a5fb0:
                do {
                  plStack_80 = (longlong *)0x0;
                  pcStack_78 = (code *)((ulonglong)pcStack_78 & 0xffffffffffffff00);
                  puVar7 = (uint64_t *)param_2[1];
                  pcStack_88 = pcVar9;
                  if (puVar7 < (uint64_t *)param_2[2]) {
                    param_2[1] = (longlong)(puVar7 + 3);
                    *puVar7 = pcVar9;
                    puVar7[1] = 0;
                    plStack_80 = (longlong *)0x0;
                    *(int8_t *)(puVar7 + 2) = 0;
                  }
                  else {
                    FUN_1801bb560(param_2,&pcStack_88);
                  }
                  if (plStack_80 != (longlong *)0x0) {
                    (**(code **)(*plStack_80 + 0x38))(plStack_80);
                  }
                  pcVar4 = "game_entity";
                  do {
                    pcVar3 = pcVar4;
                    pcVar4 = pcVar3 + 1;
                  } while (*pcVar4 != '\0');
                  pcVar3 = pcVar3 + -0x180a0b67f;
                  for (pcVar4 = *(char **)(pcVar9 + 0x58); pcVar9 = pcVar8, pcVar4 != (char *)0x0;
                      pcVar4 = *(char **)(pcVar4 + 0x58)) {
                    pcVar1 = *(char **)pcVar4;
                    if (pcVar1 == (char *)0x0) {
                      pcVar1 = (char *)0x180d48d24;
                      pcVar5 = pcVar8;
                    }
                    else {
                      pcVar5 = *(char **)(pcVar4 + 0x10);
                    }
                    if (pcVar5 == pcVar3) {
                      pcVar5 = pcVar1 + (longlong)pcVar5;
                      pcVar9 = pcVar4;
                      if (pcVar5 <= pcVar1) break;
                      lVar6 = (longlong)&UNK_180a0b680 - (longlong)pcVar1;
                      while (*pcVar1 == pcVar1[lVar6]) {
                        pcVar1 = pcVar1 + 1;
                        if (pcVar5 <= pcVar1) goto LAB_1801a606e;
                      }
                    }
                  }
LAB_1801a606e:
                } while (pcVar9 != (char *)0x0);
                goto LAB_1801a6077;
              }
              lVar6 = (longlong)&UNK_180a0b680 - (longlong)pcVar4;
              while (*pcVar4 == pcVar4[lVar6]) {
                pcVar4 = pcVar4 + 1;
                if (pcVar1 <= pcVar4) goto LAB_1801a5fb0;
              }
            }
            pcVar9 = *(char **)(pcVar9 + 0x58);
          } while( true );
        }
        lVar6 = (longlong)&UNK_180a0b690 - (longlong)pcVar3;
        while (*pcVar3 == pcVar3[lVar6]) {
          pcVar3 = pcVar3 + 1;
          if (pcVar4 <= pcVar3) goto LAB_1801a5f38;
        }
      }
      puVar7 = (uint64_t *)puVar7[0xb];
    } while (puVar7 != (uint64_t *)0x0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801a61a0(uint64_t *param_1,int param_2,int param_3)
void FUN_1801a61a0(uint64_t *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint64_t uVar6;
  longlong *plVar7;
  uint64_t *puVar8;
  longlong lVar9;
  uint64_t uStack_d8;
  longlong lStack_d0;
  int8_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  longlong *plStack_b0;
  uint64_t uStack_a8;
  int16_t uStack_a0;
  longlong *plStack_98;
  uint64_t uStack_88;
  int32_t uStack_80;
  int32_t uStack_7c;
  int16_t uStack_78;
  int8_t uStack_76;
  int32_t uStack_74;
  int8_t uStack_70;
  uint64_t uStack_68;
  longlong alStack_60 [3];
  int32_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  longlong *plStack_30;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar5 = (longlong)param_2;
  if (lVar5 < param_3) {
    lVar9 = lVar5 * 0x18;
    lVar5 = param_3 - lVar5;
    do {
      puVar8 = (uint64_t *)(*(longlong *)*param_1 + lVar9);
      uVar2 = *puVar8;
      uVar6 = FUN_18062b1e0(_DAT_180c8ed18,0x2f0,0x10,0xd);
      plVar7 = (longlong *)FUN_1802e6b00(uVar6,4);
      plStack_30 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7);
        (**(code **)(*plVar7 + 0x28))(plVar7);
      }
      plVar3 = (longlong *)puVar8[1];
      puVar8[1] = plVar7;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
      uVar6 = param_1[1];
      uStack_d8 = 0xffffffffffffffff;
      lStack_d0 = 0;
      uStack_c8 = 0;
      plStack_b0 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7);
      }
      uStack_a0 = 0;
      *(byte *)(plStack_b0 + 0x5d) = *(byte *)(plStack_b0 + 0x5d) & 0x7f;
      uStack_c0 = 0;
      uStack_a8 = uVar6;
      if (*(char *)param_1[2] != '\0') {
        uStack_b8 = *(uint64_t *)(param_1[1] + 600);
        uStack_c0 = FUN_18039fda0(uStack_b8,plStack_b0);
      }
      uStack_d8 = CONCAT44(*(int32_t *)param_1[3],*(int32_t *)param_1[4]);
      uStack_c8 = 1;
      lVar4 = param_1[1];
      lStack_d0 = lVar4 + 0x60300;
      FUN_1803ba550(&uStack_d8,uVar2,*(uint64_t *)(lVar4 + 0x81a8),lVar4 + 0x2890,1,0);
      if (uStack_a0._1_1_ == '\0') {
        if (*(char *)(param_1[1] + 0x60730) != '\0') {
          FUN_1802ed5d0(plVar7,uStack_d8._4_4_,uStack_d8 & 0xffffffff);
        }
        uVar1 = *(uint *)((longlong)plVar7 + 0x2ac);
        *(uint *)((longlong)plVar7 + 0x2ac) = uVar1 | 0x1000000;
        FUN_1802ee810(plVar7,uVar1);
        FUN_1802ee990(plVar7,uVar1);
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_7c = 0xffffffff;
        uStack_78 = 1;
        uStack_76 = 0;
        uStack_74 = 0xffffffff;
        uStack_70 = 1;
        uStack_68 = 0;
        plStack_98 = alStack_60;
        alStack_60[0] = 0;
        alStack_60[1] = 0;
        alStack_60[2] = 0;
        uStack_48 = 3;
        uStack_40 = 0;
        FUN_1802e7bc0(puVar8[1],&uStack_88);
        plStack_98 = alStack_60;
        if (alStack_60[0] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        if (plStack_b0 != (longlong *)0x0) {
          (**(code **)(*plStack_b0 + 0x38))();
        }
LAB_1801a63fc:
        (**(code **)(*plVar7 + 0x38))(plVar7);
      }
      else {
        *(int8_t *)(puVar8 + 2) = 1;
        if (plStack_b0 != (longlong *)0x0) {
          (**(code **)(*plStack_b0 + 0x38))();
        }
        if (plVar7 != (longlong *)0x0) goto LAB_1801a63fc;
      }
      lVar9 = lVar9 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}






// 函数: void FUN_1801a6440(void)
void FUN_1801a6440(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Removing unreachable block (ram,0x0001801a893f)
// WARNING: Removing unreachable block (ram,0x0001801a899d)
// WARNING: Removing unreachable block (ram,0x0001801a89a6)
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




