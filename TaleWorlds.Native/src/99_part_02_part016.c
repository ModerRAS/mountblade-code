#include "TaleWorlds.Native.Split.h"

// 99_part_02_part016.c - 2 个函数

// 函数: void FUN_1800f5bd0(longlong *param_1,longlong param_2)
void FUN_1800f5bd0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar6 = "name";
  do {
    pcVar5 = pcVar6;
    pcVar6 = pcVar5 + 1;
  } while (*pcVar6 != '\0');
  for (puVar4 = *(undefined8 **)(param_2 + 0x40); puVar4 != (undefined8 *)0x0;
      puVar4 = (undefined8 *)puVar4[6]) {
    pcVar6 = (char *)*puVar4;
    if (pcVar6 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar6 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar4[2];
    }
    if (pcVar2 == pcVar5 + -0x180a03a83) {
      pcVar2 = pcVar2 + (longlong)pcVar6;
      if (pcVar2 <= pcVar6) {
LAB_1800f5c47:
        lVar3 = 0x180d48d24;
        if (puVar4[1] != 0) {
          lVar3 = puVar4[1];
        }
        (**(code **)(*param_1 + 0x10))(param_1,lVar3);
        break;
      }
      lVar3 = (longlong)&DAT_180a03a84 - (longlong)pcVar6;
      while (*pcVar6 == pcVar6[lVar3]) {
        pcVar6 = pcVar6 + 1;
        if (pcVar2 <= pcVar6) goto LAB_1800f5c47;
      }
    }
  }
  pcVar6 = "simulation";
  do {
    pcVar5 = pcVar6;
    pcVar6 = pcVar5 + 1;
  } while (*pcVar6 != '\0');
  puVar4 = *(undefined8 **)(param_2 + 0x30);
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  do {
    pcVar6 = (char *)*puVar4;
    if (pcVar6 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar6 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar4[2];
    }
    if (pcVar2 == pcVar5 + -0x180a04c4f) {
      pcVar2 = pcVar6 + (longlong)pcVar2;
      if (pcVar2 <= pcVar6) {
FUN_1800f5cd6:
        pcVar6 = "stretching_stiffness";
        do {
          pcVar5 = pcVar6;
          pcVar6 = pcVar5 + 1;
        } while (*pcVar6 != '\0');
        for (puVar1 = (undefined8 *)puVar4[8]; puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)puVar1[6]) {
          pcVar6 = (char *)*puVar1;
          if (pcVar6 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar6 = (char *)0x180d48d24;
          }
          else {
            pcVar2 = (char *)puVar1[2];
          }
          if (pcVar2 == pcVar5 + -0x180a04c77) {
            pcVar2 = pcVar2 + (longlong)pcVar6;
            if (pcVar2 <= pcVar6) {
LAB_1800f5d60:
              lVar3 = 0x180d48d24;
              if (puVar1[1] != 0) {
                lVar3 = puVar1[1];
              }
              goto LAB_1800f5d7b;
            }
            lVar3 = (longlong)&UNK_180a04c78 - (longlong)pcVar6;
            while (*pcVar6 == pcVar6[lVar3]) {
              pcVar6 = pcVar6 + 1;
              if (pcVar2 <= pcVar6) goto LAB_1800f5d60;
            }
          }
        }
        lVar3 = 0;
LAB_1800f5d7b:
        if (((longlong)param_1 + 0x2c != 0) && (lVar3 != 0)) {
          FUN_18010cbc0(lVar3,&DAT_180a06430,(longlong)param_1 + 0x2c);
        }
        pcVar6 = "anchor_stiffness";
        do {
          pcVar5 = pcVar6;
          pcVar6 = pcVar5 + 1;
        } while (*pcVar6 != '\0');
        for (puVar1 = (undefined8 *)puVar4[8]; puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)puVar1[6]) {
          pcVar6 = (char *)*puVar1;
          if (pcVar6 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar6 = (char *)0x180d48d24;
          }
          else {
            pcVar2 = (char *)puVar1[2];
          }
          if (pcVar2 == pcVar5 + -0x180a04c5f) {
            pcVar2 = pcVar2 + (longlong)pcVar6;
            if (pcVar2 <= pcVar6) {
LAB_1800f5e00:
              lVar3 = 0x180d48d24;
              if (puVar1[1] != 0) {
                lVar3 = puVar1[1];
              }
              goto LAB_1800f5e1b;
            }
            lVar3 = (longlong)&UNK_180a04c60 - (longlong)pcVar6;
            while (*pcVar6 == pcVar6[lVar3]) {
              pcVar6 = pcVar6 + 1;
              if (pcVar2 <= pcVar6) goto LAB_1800f5e00;
            }
          }
        }
        lVar3 = 0;
LAB_1800f5e1b:
        if ((param_1 + 6 != (longlong *)0x0) && (lVar3 != 0)) {
          FUN_18010cbc0(lVar3,&DAT_180a06430,param_1 + 6);
        }
        pcVar6 = "bending_stiffness";
        do {
          pcVar5 = pcVar6;
          pcVar6 = pcVar5 + 1;
        } while (*pcVar6 != '\0');
        for (puVar1 = (undefined8 *)puVar4[8]; puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)puVar1[6]) {
          pcVar6 = (char *)*puVar1;
          if (pcVar6 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar6 = (char *)0x180d48d24;
          }
          else {
            pcVar2 = (char *)puVar1[2];
          }
          if (pcVar2 == pcVar5 + -0x180a04ca7) {
            pcVar2 = pcVar2 + (longlong)pcVar6;
            if (pcVar2 <= pcVar6) {
LAB_1800f5ea0:
              lVar3 = 0x180d48d24;
              if (puVar1[1] != 0) {
                lVar3 = puVar1[1];
              }
              goto LAB_1800f5ebb;
            }
            lVar3 = (longlong)&UNK_180a04ca8 - (longlong)pcVar6;
            while (*pcVar6 == pcVar6[lVar3]) {
              pcVar6 = pcVar6 + 1;
              if (pcVar2 <= pcVar6) goto LAB_1800f5ea0;
            }
          }
        }
        lVar3 = 0;
LAB_1800f5ebb:
        if (((longlong)param_1 + 0x24 != 0) && (lVar3 != 0)) {
          FUN_18010cbc0(lVar3,&DAT_180a06430,(longlong)param_1 + 0x24);
        }
        pcVar6 = "shearing_stiffness_";
        do {
          pcVar5 = pcVar6;
          pcVar6 = pcVar5 + 1;
        } while (*pcVar6 != '\0');
        for (puVar1 = (undefined8 *)puVar4[8]; puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)puVar1[6]) {
          pcVar6 = (char *)*puVar1;
          if (pcVar6 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar6 = (char *)0x180d48d24;
          }
          else {
            pcVar2 = (char *)puVar1[2];
          }
          if (pcVar2 == pcVar5 + -0x180a04c8f) {
            pcVar2 = pcVar2 + (longlong)pcVar6;
            if (pcVar2 <= pcVar6) {
LAB_1800f5f40:
              lVar3 = 0x180d48d24;
              if (puVar1[1] != 0) {
                lVar3 = puVar1[1];
              }
              goto LAB_1800f5f5b;
            }
            lVar3 = (longlong)&UNK_180a04c90 - (longlong)pcVar6;
            while (*pcVar6 == pcVar6[lVar3]) {
              pcVar6 = pcVar6 + 1;
              if (pcVar2 <= pcVar6) goto LAB_1800f5f40;
            }
          }
        }
        lVar3 = 0;
LAB_1800f5f5b:
        if ((param_1 + 5 != (longlong *)0x0) && (lVar3 != 0)) {
          FUN_18010cbc0(lVar3,&DAT_180a06430,param_1 + 5);
        }
        pcVar6 = "damping";
        do {
          pcVar5 = pcVar6;
          pcVar6 = pcVar5 + 1;
        } while (*pcVar6 != '\0');
        for (puVar1 = (undefined8 *)puVar4[8]; puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)puVar1[6]) {
          pcVar6 = (char *)*puVar1;
          if (pcVar6 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar6 = (char *)0x180d48d24;
          }
          else {
            pcVar2 = (char *)puVar1[2];
          }
          if (pcVar2 == pcVar5 + -0x180a04cc7) {
            pcVar2 = pcVar6 + (longlong)pcVar2;
            if (pcVar2 <= pcVar6) {
LAB_1800f5fe0:
              lVar3 = 0x180d48d24;
              if (puVar1[1] != 0) {
                lVar3 = puVar1[1];
              }
              goto LAB_1800f5ffb;
            }
            lVar3 = (longlong)&UNK_180a04cc8 - (longlong)pcVar6;
            while (*pcVar6 == pcVar6[lVar3]) {
              pcVar6 = pcVar6 + 1;
              if (pcVar2 <= pcVar6) goto LAB_1800f5fe0;
            }
          }
        }
        lVar3 = 0;
LAB_1800f5ffb:
        if (((longlong)param_1 + 0x34 != 0) && (lVar3 != 0)) {
          FUN_18010cbc0(lVar3,&DAT_180a06430,(longlong)param_1 + 0x34);
        }
        pcVar6 = "gravity";
        do {
          pcVar5 = pcVar6;
          pcVar6 = pcVar5 + 1;
        } while (*pcVar6 != '\0');
        for (puVar1 = (undefined8 *)puVar4[8]; puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)puVar1[6]) {
          pcVar6 = (char *)*puVar1;
          if (pcVar6 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar6 = (char *)0x180d48d24;
          }
          else {
            pcVar2 = (char *)puVar1[2];
          }
          if (pcVar2 == pcVar5 + -0x180a04cbf) {
            pcVar2 = pcVar2 + (longlong)pcVar6;
            if (pcVar2 <= pcVar6) {
LAB_1800f6080:
              lVar3 = 0x180d48d24;
              if (puVar1[1] != 0) {
                lVar3 = puVar1[1];
              }
              goto LAB_1800f609b;
            }
            lVar3 = (longlong)&UNK_180a04cc0 - (longlong)pcVar6;
            while (*pcVar6 == pcVar6[lVar3]) {
              pcVar6 = pcVar6 + 1;
              if (pcVar2 <= pcVar6) goto LAB_1800f6080;
            }
          }
        }
        lVar3 = 0;
LAB_1800f609b:
        if ((param_1 + 7 != (longlong *)0x0) && (lVar3 != 0)) {
          FUN_18010cbc0(lVar3,&DAT_180a06430,param_1 + 7);
        }
        pcVar6 = "linear_inertia";
        do {
          pcVar5 = pcVar6;
          pcVar6 = pcVar5 + 1;
        } while (*pcVar6 != '\0');
        for (puVar1 = (undefined8 *)puVar4[8]; puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)puVar1[6]) {
          pcVar6 = (char *)*puVar1;
          if (pcVar6 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar6 = (char *)0x180d48d24;
          }
          else {
            pcVar2 = (char *)puVar1[2];
          }
          if (pcVar2 == pcVar5 + -0x180a04ce7) {
            pcVar2 = pcVar2 + (longlong)pcVar6;
            if (pcVar2 <= pcVar6) {
LAB_1800f6120:
              lVar3 = 0x180d48d24;
              if (puVar1[1] != 0) {
                lVar3 = puVar1[1];
              }
              goto LAB_1800f613b;
            }
            lVar3 = (longlong)&UNK_180a04ce8 - (longlong)pcVar6;
            while (*pcVar6 == pcVar6[lVar3]) {
              pcVar6 = pcVar6 + 1;
              if (pcVar2 <= pcVar6) goto LAB_1800f6120;
            }
          }
        }
        lVar3 = 0;
LAB_1800f613b:
        if (((longlong)param_1 + 0x3c != 0) && (lVar3 != 0)) {
          FUN_18010cbc0(lVar3,&DAT_180a06430,(longlong)param_1 + 0x3c);
        }
        pcVar6 = "max_linear_velocity";
        do {
          pcVar5 = pcVar6;
          pcVar6 = pcVar5 + 1;
        } while (*pcVar6 != '\0');
        for (puVar1 = (undefined8 *)puVar4[8]; puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)puVar1[6]) {
          pcVar6 = (char *)*puVar1;
          if (pcVar6 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar6 = (char *)0x180d48d24;
          }
          else {
            pcVar2 = (char *)puVar1[2];
          }
          if (pcVar2 == pcVar5 + -0x180a04ccf) {
            pcVar2 = pcVar2 + (longlong)pcVar6;
            if (pcVar2 <= pcVar6) {
LAB_1800f61c0:
              lVar3 = 0x180d48d24;
              if (puVar1[1] != 0) {
                lVar3 = puVar1[1];
              }
              goto LAB_1800f61db;
            }
            lVar3 = (longlong)&UNK_180a04cd0 - (longlong)pcVar6;
            while (*pcVar6 == pcVar6[lVar3]) {
              pcVar6 = pcVar6 + 1;
              if (pcVar2 <= pcVar6) goto LAB_1800f61c0;
            }
          }
        }
        lVar3 = 0;
LAB_1800f61db:
        if ((param_1 + 8 != (longlong *)0x0) && (lVar3 != 0)) {
          FUN_18010cbc0(lVar3,&DAT_180a06430,param_1 + 8);
        }
        pcVar6 = "linear_velocity_multiplier";
        do {
          pcVar5 = pcVar6;
          pcVar6 = pcVar5 + 1;
        } while (*pcVar6 != '\0');
        for (puVar1 = (undefined8 *)puVar4[8]; puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)puVar1[6]) {
          pcVar6 = (char *)*puVar1;
          if (pcVar6 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar6 = (char *)0x180d48d24;
          }
          else {
            pcVar2 = (char *)puVar1[2];
          }
          if (pcVar2 == pcVar5 + -0x180a04cff) {
            pcVar2 = pcVar2 + (longlong)pcVar6;
            if (pcVar2 <= pcVar6) {
LAB_1800f6260:
              lVar3 = 0x180d48d24;
              if (puVar1[1] != 0) {
                lVar3 = puVar1[1];
              }
              goto LAB_1800f627b;
            }
            lVar3 = (longlong)&UNK_180a04d00 - (longlong)pcVar6;
            while (*pcVar6 == pcVar6[lVar3]) {
              pcVar6 = pcVar6 + 1;
              if (pcVar2 <= pcVar6) goto LAB_1800f6260;
            }
          }
        }
        lVar3 = 0;
LAB_1800f627b:
        if (((longlong)param_1 + 0x44 != 0) && (lVar3 != 0)) {
          FUN_18010cbc0(lVar3,&DAT_180a06430,(longlong)param_1 + 0x44);
        }
        pcVar6 = "wind";
        do {
          pcVar5 = pcVar6;
          pcVar6 = pcVar5 + 1;
        } while (*pcVar6 != '\0');
        for (puVar1 = (undefined8 *)puVar4[8]; puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)puVar1[6]) {
          pcVar6 = (char *)*puVar1;
          if (pcVar6 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar6 = (char *)0x180d48d24;
          }
          else {
            pcVar2 = (char *)puVar1[2];
          }
          if (pcVar2 == pcVar5 + -0x180a04cf7) {
            pcVar2 = pcVar2 + (longlong)pcVar6;
            if (pcVar2 <= pcVar6) {
LAB_1800f6300:
              lVar3 = 0x180d48d24;
              if (puVar1[1] != 0) {
                lVar3 = puVar1[1];
              }
              goto LAB_1800f631b;
            }
            lVar3 = (longlong)&UNK_180a04cf8 - (longlong)pcVar6;
            while (*pcVar6 == pcVar6[lVar3]) {
              pcVar6 = pcVar6 + 1;
              if (pcVar2 <= pcVar6) goto LAB_1800f6300;
            }
          }
        }
        lVar3 = 0;
LAB_1800f631b:
        if (((longlong)param_1 + 0x4c != 0) && (lVar3 != 0)) {
          FUN_18010cbc0(lVar3,&DAT_180a06430,(longlong)param_1 + 0x4c);
        }
        pcVar6 = "air_drag_multiplier";
        do {
          pcVar5 = pcVar6;
          pcVar6 = pcVar5 + 1;
        } while (*pcVar6 != '\0');
        puVar4 = (undefined8 *)puVar4[8];
        do {
          if (puVar4 == (undefined8 *)0x0) {
            lVar3 = 0;
LAB_1800f63b8:
            if (param_1 + 9 == (longlong *)0x0) {
              return;
            }
            if (lVar3 == 0) {
              return;
            }
            FUN_18010cbc0(lVar3,&DAT_180a06430,param_1 + 9);
            return;
          }
          pcVar6 = (char *)*puVar4;
          if (pcVar6 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar6 = (char *)0x180d48d24;
          }
          else {
            pcVar2 = (char *)puVar4[2];
          }
          if (pcVar2 == pcVar5 + -0x180a04d1f) {
            pcVar2 = pcVar2 + (longlong)pcVar6;
            if (pcVar2 <= pcVar6) {
LAB_1800f63a0:
              lVar3 = 0x180d48d24;
              if (puVar4[1] != 0) {
                lVar3 = puVar4[1];
              }
              goto LAB_1800f63b8;
            }
            lVar3 = (longlong)&UNK_180a04d20 - (longlong)pcVar6;
            while (*pcVar6 == pcVar6[lVar3]) {
              pcVar6 = pcVar6 + 1;
              if (pcVar2 <= pcVar6) goto LAB_1800f63a0;
            }
          }
          puVar4 = (undefined8 *)puVar4[6];
        } while( true );
      }
      lVar3 = (longlong)&UNK_180a04c50 - (longlong)pcVar6;
      while (*pcVar6 == pcVar6[lVar3]) {
        pcVar6 = pcVar6 + 1;
        if (pcVar2 <= pcVar6) goto FUN_1800f5cd6;
      }
    }
    puVar4 = (undefined8 *)puVar4[0xb];
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1800f5cd6(void)
void FUN_1800f5cd6(void)

{
  undefined8 *puVar1;
  char *pcVar2;
  longlong lVar3;
  longlong unaff_RBX;
  longlong unaff_RSI;
  char *unaff_RDI;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = "stretching_stiffness";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(undefined8 **)(unaff_RBX + 0x40); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar2 = unaff_RDI;
    }
    else {
      pcVar4 = (char *)puVar1[2];
      pcVar2 = (char *)*puVar1;
    }
    if (pcVar4 == pcVar5 + -0x180a04c77) {
      pcVar4 = pcVar4 + (longlong)pcVar2;
      if (pcVar4 <= pcVar2) {
LAB_1800f5d60:
        pcVar4 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar4 = (char *)puVar1[1];
        }
        goto LAB_1800f5d7b;
      }
      lVar3 = (longlong)&UNK_180a04c78 - (longlong)pcVar2;
      while (*pcVar2 == pcVar2[lVar3]) {
        pcVar2 = pcVar2 + 1;
        if (pcVar4 <= pcVar2) goto LAB_1800f5d60;
      }
    }
  }
  pcVar4 = (char *)0x0;
LAB_1800f5d7b:
  if ((unaff_RSI != -0x2c) && (pcVar4 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar4 = "anchor_stiffness";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(undefined8 **)(unaff_RBX + 0x40); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar2 = unaff_RDI;
    }
    else {
      pcVar4 = (char *)puVar1[2];
      pcVar2 = (char *)*puVar1;
    }
    if (pcVar4 == pcVar5 + -0x180a04c5f) {
      pcVar4 = pcVar4 + (longlong)pcVar2;
      if (pcVar4 <= pcVar2) {
LAB_1800f5e00:
        pcVar4 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar4 = (char *)puVar1[1];
        }
        goto LAB_1800f5e1b;
      }
      lVar3 = (longlong)&UNK_180a04c60 - (longlong)pcVar2;
      while (*pcVar2 == pcVar2[lVar3]) {
        pcVar2 = pcVar2 + 1;
        if (pcVar4 <= pcVar2) goto LAB_1800f5e00;
      }
    }
  }
  pcVar4 = (char *)0x0;
LAB_1800f5e1b:
  if ((unaff_RSI != -0x30) && (pcVar4 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar4 = "bending_stiffness";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(undefined8 **)(unaff_RBX + 0x40); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar2 = unaff_RDI;
    }
    else {
      pcVar4 = (char *)puVar1[2];
      pcVar2 = (char *)*puVar1;
    }
    if (pcVar4 == pcVar5 + -0x180a04ca7) {
      pcVar4 = pcVar4 + (longlong)pcVar2;
      if (pcVar4 <= pcVar2) {
LAB_1800f5ea0:
        pcVar4 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar4 = (char *)puVar1[1];
        }
        goto LAB_1800f5ebb;
      }
      lVar3 = (longlong)&UNK_180a04ca8 - (longlong)pcVar2;
      while (*pcVar2 == pcVar2[lVar3]) {
        pcVar2 = pcVar2 + 1;
        if (pcVar4 <= pcVar2) goto LAB_1800f5ea0;
      }
    }
  }
  pcVar4 = (char *)0x0;
LAB_1800f5ebb:
  if ((unaff_RSI != -0x24) && (pcVar4 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar4 = "shearing_stiffness_";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(undefined8 **)(unaff_RBX + 0x40); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar2 = unaff_RDI;
    }
    else {
      pcVar4 = (char *)puVar1[2];
      pcVar2 = (char *)*puVar1;
    }
    if (pcVar4 == pcVar5 + -0x180a04c8f) {
      pcVar4 = pcVar4 + (longlong)pcVar2;
      if (pcVar4 <= pcVar2) {
LAB_1800f5f40:
        pcVar4 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar4 = (char *)puVar1[1];
        }
        goto LAB_1800f5f5b;
      }
      lVar3 = (longlong)&UNK_180a04c90 - (longlong)pcVar2;
      while (*pcVar2 == pcVar2[lVar3]) {
        pcVar2 = pcVar2 + 1;
        if (pcVar4 <= pcVar2) goto LAB_1800f5f40;
      }
    }
  }
  pcVar4 = (char *)0x0;
LAB_1800f5f5b:
  if ((unaff_RSI != -0x28) && (pcVar4 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar4 = "damping";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(undefined8 **)(unaff_RBX + 0x40); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar2 = unaff_RDI;
    }
    else {
      pcVar4 = (char *)puVar1[2];
      pcVar2 = (char *)*puVar1;
    }
    if (pcVar4 == pcVar5 + -0x180a04cc7) {
      pcVar4 = pcVar2 + (longlong)pcVar4;
      if (pcVar4 <= pcVar2) {
LAB_1800f5fe0:
        pcVar4 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar4 = (char *)puVar1[1];
        }
        goto LAB_1800f5ffb;
      }
      lVar3 = (longlong)&UNK_180a04cc8 - (longlong)pcVar2;
      while (*pcVar2 == pcVar2[lVar3]) {
        pcVar2 = pcVar2 + 1;
        if (pcVar4 <= pcVar2) goto LAB_1800f5fe0;
      }
    }
  }
  pcVar4 = (char *)0x0;
LAB_1800f5ffb:
  if ((unaff_RSI != -0x34) && (pcVar4 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar4 = "gravity";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(undefined8 **)(unaff_RBX + 0x40); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar2 = unaff_RDI;
    }
    else {
      pcVar4 = (char *)puVar1[2];
      pcVar2 = (char *)*puVar1;
    }
    if (pcVar4 == pcVar5 + -0x180a04cbf) {
      pcVar4 = pcVar4 + (longlong)pcVar2;
      if (pcVar4 <= pcVar2) {
LAB_1800f6080:
        pcVar4 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar4 = (char *)puVar1[1];
        }
        goto LAB_1800f609b;
      }
      lVar3 = (longlong)&UNK_180a04cc0 - (longlong)pcVar2;
      while (*pcVar2 == pcVar2[lVar3]) {
        pcVar2 = pcVar2 + 1;
        if (pcVar4 <= pcVar2) goto LAB_1800f6080;
      }
    }
  }
  pcVar4 = (char *)0x0;
LAB_1800f609b:
  if ((unaff_RSI != -0x38) && (pcVar4 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar4 = "linear_inertia";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(undefined8 **)(unaff_RBX + 0x40); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar2 = unaff_RDI;
    }
    else {
      pcVar4 = (char *)puVar1[2];
      pcVar2 = (char *)*puVar1;
    }
    if (pcVar4 == pcVar5 + -0x180a04ce7) {
      pcVar4 = pcVar4 + (longlong)pcVar2;
      if (pcVar4 <= pcVar2) {
LAB_1800f6120:
        pcVar4 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar4 = (char *)puVar1[1];
        }
        goto LAB_1800f613b;
      }
      lVar3 = (longlong)&UNK_180a04ce8 - (longlong)pcVar2;
      while (*pcVar2 == pcVar2[lVar3]) {
        pcVar2 = pcVar2 + 1;
        if (pcVar4 <= pcVar2) goto LAB_1800f6120;
      }
    }
  }
  pcVar4 = (char *)0x0;
LAB_1800f613b:
  if ((unaff_RSI != -0x3c) && (pcVar4 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar4 = "max_linear_velocity";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(undefined8 **)(unaff_RBX + 0x40); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar2 = unaff_RDI;
    }
    else {
      pcVar4 = (char *)puVar1[2];
      pcVar2 = (char *)*puVar1;
    }
    if (pcVar4 == pcVar5 + -0x180a04ccf) {
      pcVar4 = pcVar4 + (longlong)pcVar2;
      if (pcVar4 <= pcVar2) {
LAB_1800f61c0:
        pcVar4 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar4 = (char *)puVar1[1];
        }
        goto LAB_1800f61db;
      }
      lVar3 = (longlong)&UNK_180a04cd0 - (longlong)pcVar2;
      while (*pcVar2 == pcVar2[lVar3]) {
        pcVar2 = pcVar2 + 1;
        if (pcVar4 <= pcVar2) goto LAB_1800f61c0;
      }
    }
  }
  pcVar4 = (char *)0x0;
LAB_1800f61db:
  if ((unaff_RSI != -0x40) && (pcVar4 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar4 = "linear_velocity_multiplier";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(undefined8 **)(unaff_RBX + 0x40); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar2 = unaff_RDI;
    }
    else {
      pcVar4 = (char *)puVar1[2];
      pcVar2 = (char *)*puVar1;
    }
    if (pcVar4 == pcVar5 + -0x180a04cff) {
      pcVar4 = pcVar4 + (longlong)pcVar2;
      if (pcVar4 <= pcVar2) {
LAB_1800f6260:
        pcVar4 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar4 = (char *)puVar1[1];
        }
        goto LAB_1800f627b;
      }
      lVar3 = (longlong)&UNK_180a04d00 - (longlong)pcVar2;
      while (*pcVar2 == pcVar2[lVar3]) {
        pcVar2 = pcVar2 + 1;
        if (pcVar4 <= pcVar2) goto LAB_1800f6260;
      }
    }
  }
  pcVar4 = (char *)0x0;
LAB_1800f627b:
  if ((unaff_RSI != -0x44) && (pcVar4 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar4 = "wind";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(undefined8 **)(unaff_RBX + 0x40); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar2 = unaff_RDI;
    }
    else {
      pcVar4 = (char *)puVar1[2];
      pcVar2 = (char *)*puVar1;
    }
    if (pcVar4 == pcVar5 + -0x180a04cf7) {
      pcVar4 = pcVar4 + (longlong)pcVar2;
      if (pcVar4 <= pcVar2) {
LAB_1800f6300:
        pcVar4 = unaff_RDI;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar4 = (char *)puVar1[1];
        }
        goto LAB_1800f631b;
      }
      lVar3 = (longlong)&UNK_180a04cf8 - (longlong)pcVar2;
      while (*pcVar2 == pcVar2[lVar3]) {
        pcVar2 = pcVar2 + 1;
        if (pcVar4 <= pcVar2) goto LAB_1800f6300;
      }
    }
  }
  pcVar4 = (char *)0x0;
LAB_1800f631b:
  if ((unaff_RSI != -0x4c) && (pcVar4 != (char *)0x0)) {
    FUN_18010cbc0();
  }
  pcVar4 = "air_drag_multiplier";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  puVar1 = *(undefined8 **)(unaff_RBX + 0x40);
  do {
    if (puVar1 == (undefined8 *)0x0) {
      unaff_RDI = (char *)0x0;
LAB_1800f63b8:
      if ((unaff_RSI + 0x48 != 0) && (unaff_RDI != (char *)0x0)) {
        FUN_18010cbc0(unaff_RDI,&DAT_180a06430,unaff_RSI + 0x48);
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
    puVar1 = (undefined8 *)puVar1[6];
  } while( true );
}






