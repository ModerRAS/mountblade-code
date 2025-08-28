#include "TaleWorlds.Native.Split.h"

// 03_rendering_part526.c - 2 个函数

// 函数: void FUN_180553220(longlong *param_1,longlong param_2)
void FUN_180553220(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined *puStack_40;
  undefined1 *puStack_38;
  int iStack_30;
  undefined8 uStack_28;
  
  if (param_2 != 0) {
    pcVar6 = "id";
    do {
      pcVar7 = pcVar6;
      pcVar6 = pcVar7 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = (char *)0x0;
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar3 = (char *)*puVar5;
      if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar7 + -0x180a0ae27) {
        pcVar2 = pcVar2 + (longlong)pcVar3;
        if (pcVar2 <= pcVar3) {
LAB_1805532c4:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          (**(code **)(*param_1 + 0x10))(param_1,lVar4,pcVar2,puVar5,0xfffffffffffffffe);
          break;
        }
        lVar4 = (longlong)&UNK_180a0ae28 - (longlong)pcVar3;
        while (*pcVar3 == pcVar3[lVar4]) {
          pcVar3 = pcVar3 + 1;
          if (pcVar2 <= pcVar3) goto LAB_1805532c4;
        }
      }
    }
    puStack_40 = &UNK_180a3c3e0;
    uStack_28 = 0;
    puStack_38 = (undefined1 *)0x0;
    iStack_30 = 0;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    pcVar7 = "idle";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar3 + -0x180a34d03) {
        pcVar2 = pcVar7 + (longlong)pcVar2;
        if (pcVar2 <= pcVar7) {
LAB_180553374:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          FUN_180627c50(&puStack_40,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a34d04 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) goto LAB_180553374;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_40);
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
    iStack_30 = 0;
    if (puStack_38 != (undefined1 *)0x0) {
      *puStack_38 = 0;
    }
    *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
    pcVar7 = "forward";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar3 + -0x180a34d0f) {
        pcVar2 = pcVar2 + (longlong)pcVar7;
        if (pcVar2 <= pcVar7) {
LAB_180553425:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a34d10 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) goto LAB_180553425;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_40);
      *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
    }
    iStack_30 = 0;
    if (puStack_38 != (undefined1 *)0x0) {
      *puStack_38 = 0;
    }
    *(undefined4 *)(param_1 + 5) = 0xffffffff;
    pcVar7 = "backward";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar3 + -0x180a34d5f) {
        pcVar2 = pcVar2 + (longlong)pcVar7;
        if (pcVar2 <= pcVar7) {
LAB_1805534e0:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a34d60 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) goto LAB_1805534e0;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_40);
      *(undefined4 *)(param_1 + 5) = uVar1;
    }
    iStack_30 = 0;
    if (puStack_38 != (undefined1 *)0x0) {
      *puStack_38 = 0;
    }
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
    pcVar7 = "right";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar3 + -0x180a34b7b) {
        pcVar2 = pcVar2 + (longlong)pcVar7;
        if (pcVar2 <= pcVar7) {
LAB_180553590:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a34b7c - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) goto LAB_180553590;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_40);
      *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
    }
    iStack_30 = 0;
    if (puStack_38 != (undefined1 *)0x0) {
      *puStack_38 = 0;
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    pcVar7 = "right_back";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar3 + -0x180a34d4f) {
        pcVar2 = pcVar2 + (longlong)pcVar7;
        if (pcVar2 <= pcVar7) {
LAB_180553640:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a34d50 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) goto LAB_180553640;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_40);
      *(undefined4 *)(param_1 + 6) = uVar1;
    }
    iStack_30 = 0;
    if (puStack_38 != (undefined1 *)0x0) {
      *puStack_38 = 0;
    }
    *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
    pcVar7 = "left";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar3 + -0x180a34bc7) {
        pcVar2 = pcVar7 + (longlong)pcVar2;
        if (pcVar2 <= pcVar7) {
LAB_1805536f4:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a34bc8 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) goto LAB_1805536f4;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_40);
      *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
    }
    iStack_30 = 0;
    if (puStack_38 != (undefined1 *)0x0) {
      *puStack_38 = 0;
    }
    *(undefined4 *)(param_1 + 7) = 0xffffffff;
    pcVar7 = "left_back";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar3 + -0x180a34d7f) {
        pcVar2 = pcVar2 + (longlong)pcVar7;
        if (pcVar2 <= pcVar7) {
LAB_1805537a5:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a34d80 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) goto LAB_1805537a5;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_40);
      *(undefined4 *)(param_1 + 7) = uVar1;
    }
    iStack_30 = 0;
    if (puStack_38 != (undefined1 *)0x0) {
      *puStack_38 = 0;
    }
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
    pcVar7 = "left_to_right";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar3 + -0x180a34d6f) {
        pcVar2 = pcVar2 + (longlong)pcVar7;
        if (pcVar2 <= pcVar7) {
LAB_180553860:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a34d70 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) goto LAB_180553860;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_40);
      *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
    }
    iStack_30 = 0;
    if (puStack_38 != (undefined1 *)0x0) {
      *puStack_38 = 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    pcVar7 = "right_to_left";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar3 + -0x180a34d1f) {
        pcVar2 = pcVar2 + (longlong)pcVar7;
        if (pcVar2 <= pcVar7) {
LAB_180553910:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a34d20 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) goto LAB_180553910;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_40);
      *(undefined4 *)(param_1 + 8) = uVar1;
    }
    iStack_30 = 0;
    if (puStack_38 != (undefined1 *)0x0) {
      *puStack_38 = 0;
    }
    *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
    pcVar7 = "rotate";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar3 + -0x180a34d17) {
        pcVar2 = pcVar2 + (longlong)pcVar7;
        if (pcVar2 <= pcVar7) {
LAB_1805539c0:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a34d18 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) goto LAB_1805539c0;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_40);
      *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
    }
    iStack_30 = 0;
    if (puStack_38 != (undefined1 *)0x0) {
      *puStack_38 = 0;
    }
    *(undefined4 *)(param_1 + 9) = 0xffffffff;
    pcVar7 = "forward_adder";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar3 + -0x180a34d3f) {
        pcVar2 = pcVar2 + (longlong)pcVar7;
        if (pcVar2 <= pcVar7) {
LAB_180553a70:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a34d40 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) goto LAB_180553a70;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_40);
      *(undefined4 *)(param_1 + 9) = uVar1;
    }
    iStack_30 = 0;
    if (puStack_38 != (undefined1 *)0x0) {
      *puStack_38 = 0;
    }
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
    pcVar7 = "backward_adder";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar3 + -0x180a34d2f) {
        pcVar2 = pcVar7 + (longlong)pcVar2;
        if (pcVar2 <= pcVar7) {
LAB_180553b24:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a34d30 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) goto LAB_180553b24;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_40);
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar1;
    }
    iStack_30 = 0;
    if (puStack_38 != (undefined1 *)0x0) {
      *puStack_38 = 0;
    }
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
    pcVar7 = "right_adder";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar3 + -0x180a34e1f) {
        pcVar2 = pcVar7 + (longlong)pcVar2;
        if (pcVar2 <= pcVar7) {
LAB_180553bd5:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a34e20 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) goto LAB_180553bd5;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_40);
      *(undefined4 *)(param_1 + 10) = uVar1;
    }
    iStack_30 = 0;
    if (puStack_38 != (undefined1 *)0x0) {
      *puStack_38 = 0;
    }
    *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
    pcVar7 = "right_back_adder";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar3 + -0x180a34e07) {
        pcVar2 = pcVar2 + (longlong)pcVar7;
        if (pcVar2 <= pcVar7) {
LAB_180553c90:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a34e08 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) goto LAB_180553c90;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_40);
      *(undefined4 *)((longlong)param_1 + 0x54) = uVar1;
    }
    iStack_30 = 0;
    if (puStack_38 != (undefined1 *)0x0) {
      *puStack_38 = 0;
    }
    *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
    pcVar7 = "left_adder";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar3 + -0x180a34e3f) {
        pcVar2 = pcVar2 + (longlong)pcVar7;
        if (pcVar2 <= pcVar7) {
LAB_180553d40:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a34e40 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) goto LAB_180553d40;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_40);
      *(undefined4 *)(param_1 + 0xb) = uVar1;
    }
    iStack_30 = 0;
    if (puStack_38 != (undefined1 *)0x0) {
      *puStack_38 = 0;
    }
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
    pcVar7 = "left_back_adder";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar3 + -0x180a34e2f) {
        pcVar2 = pcVar2 + (longlong)pcVar7;
        if (pcVar2 <= pcVar7) {
LAB_180553df0:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a34e30 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) goto LAB_180553df0;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_40);
      *(undefined4 *)((longlong)param_1 + 0x5c) = uVar1;
    }
    iStack_30 = 0;
    if (puStack_38 != (undefined1 *)0x0) {
      *puStack_38 = 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    pcVar7 = "left_to_right_adder";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar3 + -0x180a34da7) {
        pcVar2 = pcVar2 + (longlong)pcVar7;
        if (pcVar2 <= pcVar7) {
LAB_180553ea0:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a34da8 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) goto LAB_180553ea0;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_40);
      *(undefined4 *)(param_1 + 0xc) = uVar1;
    }
    iStack_30 = 0;
    if (puStack_38 != (undefined1 *)0x0) {
      *puStack_38 = 0;
    }
    *(undefined4 *)((longlong)param_1 + 100) = 0xffffffff;
    pcVar7 = "right_to_left_adder";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x40); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar2 = pcVar6;
      }
      else {
        pcVar2 = (char *)puVar5[2];
      }
      if (pcVar2 == pcVar3 + -0x180a34d8f) {
        pcVar2 = pcVar7 + (longlong)pcVar2;
        if (pcVar2 <= pcVar7) {
LAB_180553f50:
          lVar4 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar4 = puVar5[1];
          }
          (**(code **)(puStack_40 + 0x10))(&puStack_40,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a34d90 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar2 <= pcVar7) goto LAB_180553f50;
        }
      }
    }
    if (0 < iStack_30) {
      uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_40);
      *(undefined4 *)((longlong)param_1 + 100) = uVar1;
    }
    puStack_40 = &UNK_180a3c3e0;
    if (puStack_38 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180553fd0(longlong param_1,longlong param_2)
void FUN_180553fd0(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  char *pcVar17;
  char *pcVar18;
  undefined *puStack_60;
  byte *pbStack_58;
  int iStack_50;
  undefined8 uStack_48;
  
  lVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3,0xfffffffffffffffe);
  pcVar18 = (char *)0x0;
  *(undefined8 *)(lVar4 + 0x28) = 3;
  *(undefined4 *)(lVar4 + 0x19) = 0;
  *(undefined2 *)(lVar4 + 0x1d) = 0;
  *(undefined1 *)(lVar4 + 0x1f) = 0;
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(undefined1 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(longlong *)(param_1 + 0x10) = lVar4;
  if (param_2 != 0) {
    pcVar13 = "movement_set";
    do {
      pcVar17 = pcVar13;
      pcVar13 = pcVar17 + 1;
    } while (*pcVar13 != '\0');
    for (puVar11 = *(undefined8 **)(param_2 + 0x30); puVar11 != (undefined8 *)0x0;
        puVar11 = (undefined8 *)puVar11[0xb]) {
      pcVar13 = (char *)*puVar11;
      if (pcVar13 == (char *)0x0) {
        pcVar13 = (char *)0x180d48d24;
        pcVar5 = pcVar18;
      }
      else {
        pcVar5 = (char *)puVar11[2];
      }
      if (pcVar5 == pcVar17 + -0x180a345b7) {
        pcVar5 = pcVar5 + (longlong)pcVar13;
        if (pcVar5 <= pcVar13) goto LAB_1805540c0;
        lVar4 = (longlong)&UNK_180a345b8 - (longlong)pcVar13;
        while (*pcVar13 == pcVar13[lVar4]) {
          pcVar13 = pcVar13 + 1;
          if (pcVar5 <= pcVar13) goto LAB_1805540c0;
        }
      }
    }
  }
  return;
LAB_1805540c0:
  if (puVar11 != (undefined8 *)0x0) {
    puStack_60 = &UNK_180a3c3e0;
    uStack_48 = 0;
    pbStack_58 = (byte *)0x0;
    iStack_50 = 0;
    pcVar13 = "id";
    do {
      pcVar17 = pcVar13;
      pcVar13 = pcVar17 + 1;
    } while (*pcVar13 != '\0');
    for (puVar14 = (undefined8 *)puVar11[8]; puVar14 != (undefined8 *)0x0;
        puVar14 = (undefined8 *)puVar14[6]) {
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
LAB_180554173:
          lVar4 = 0x180d48d24;
          if (puVar14[1] != 0) {
            lVar4 = puVar14[1];
          }
          FUN_180627c50(&puStack_60,lVar4);
          break;
        }
        lVar4 = (longlong)&UNK_180a0ae28 - (longlong)pcVar13;
        while (*pcVar13 == pcVar13[lVar4]) {
          pcVar13 = pcVar13 + 1;
          if (pcVar5 <= pcVar13) goto LAB_180554173;
        }
      }
    }
    puVar14 = *(undefined8 **)(param_1 + 0x10);
    puVar15 = (undefined8 *)puVar14[2];
    puVar6 = puVar14;
    if (puVar15 == (undefined8 *)0x0) {
LAB_180554249:
      puVar7 = puVar14;
    }
    else {
      do {
        if (iStack_50 == 0) {
          bVar3 = false;
          puVar16 = (undefined8 *)puVar15[1];
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
              puVar16 = (undefined8 *)puVar15[1];
              goto LAB_18055420b;
            }
          }
          puVar16 = (undefined8 *)*puVar15;
        }
LAB_18055420b:
        puVar7 = puVar15;
        if (bVar3) {
          puVar7 = puVar6;
        }
        puVar6 = puVar7;
        puVar15 = puVar16;
      } while (puVar16 != (undefined8 *)0x0);
      if (puVar7 == puVar14) goto LAB_180554249;
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
          if ((int)(bVar1 - uVar10) < 1) goto LAB_18055424c;
        }
        goto LAB_180554249;
      }
    }
LAB_18055424c:
    if (puVar7 == puVar14) {
      uVar2 = puVar14[4];
      puVar8 = (undefined4 *)FUN_1800c2970(puVar14,&puStack_60);
      *puVar8 = (int)uVar2;
    }
    puStack_60 = &UNK_180a3c3e0;
    if (pbStack_58 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  pcVar13 = "movement_set";
  do {
    pcVar17 = pcVar13;
    pcVar13 = pcVar17 + 1;
  } while (*pcVar13 != '\0');
  while( true ) {
    do {
      puVar11 = (undefined8 *)puVar11[0xb];
      if (puVar11 == (undefined8 *)0x0) {
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
    } while (pcVar5 != pcVar17 + -0x180a345b7);
    pcVar5 = pcVar5 + (longlong)pcVar13;
    if (pcVar5 <= pcVar13) break;
    lVar4 = (longlong)&UNK_180a345b8 - (longlong)pcVar13;
    while (*pcVar13 == pcVar13[lVar4]) {
      pcVar13 = pcVar13 + 1;
      if (pcVar5 <= pcVar13) goto LAB_1805540c0;
    }
  }
  goto LAB_1805540c0;
}





