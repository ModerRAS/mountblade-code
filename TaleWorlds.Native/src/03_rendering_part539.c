#include "TaleWorlds.Native.Split.h"

// 03_rendering_part539.c - 1 个函数

// 函数: void FUN_1805610e0(longlong param_1,longlong param_2)
void FUN_1805610e0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  byte *pbVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_4d8 [32];
  undefined8 *puStack_4b8;
  undefined8 uStack_4b0;
  undefined *puStack_4a8;
  undefined1 *puStack_4a0;
  int iStack_498;
  undefined1 auStack_490 [40];
  undefined *puStack_468;
  byte *pbStack_460;
  int iStack_458;
  byte abStack_450 [1032];
  ulonglong uStack_48;
  
  uStack_4b0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_4d8;
  uVar2 = **(uint **)(param_2 + 8);
  puVar16 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar16;
  *(uint *)(param_1 + 8) = *puVar16;
  puVar7 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar7;
  *(undefined4 *)(param_1 + 0xc) = *puVar7;
  puVar7 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar7;
  *(undefined4 *)(param_1 + 0x10) = *puVar7;
  puVar7 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar7;
  *(undefined4 *)(param_1 + 0x14) = *puVar7;
  puVar7 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar7;
  *(undefined4 *)(param_1 + 0x18) = *puVar7;
  puVar7 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar7;
  *(undefined4 *)(param_1 + 0x1c) = *puVar7;
  puVar7 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar7;
  *(undefined4 *)(param_1 + 0x20) = *puVar7;
  lVar11 = *(longlong *)(param_2 + 8);
  *(undefined4 **)(param_2 + 8) = (undefined4 *)(lVar11 + 4);
  uVar4 = *(undefined4 *)(lVar11 + 8);
  uVar5 = *(undefined4 *)(lVar11 + 0xc);
  uVar6 = *(undefined4 *)(lVar11 + 0x10);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar11 + 4);
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  lVar11 = *(longlong *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar11 + 0x10);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar11 + 0x14);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(lVar11 + 0x18);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar11 + 0x1c);
  *(uint **)(param_2 + 8) = (uint *)(lVar11 + 0x20);
  uVar3 = *(uint *)(lVar11 + 0x20);
  puVar16 = (uint *)(lVar11 + 0x24);
  *(uint **)(param_2 + 8) = puVar16;
  if (uVar3 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x58) + 0x18))
              ((longlong *)(param_1 + 0x58),puVar16,(ulonglong)uVar3);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar3;
    puVar16 = *(uint **)(param_2 + 8);
  }
  uVar3 = *puVar16;
  puVar16 = puVar16 + 1;
  *(uint **)(param_2 + 8) = puVar16;
  if (uVar3 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x78) + 0x18))
              ((longlong *)(param_1 + 0x78),puVar16,(ulonglong)uVar3);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar3;
    puVar16 = *(uint **)(param_2 + 8);
  }
  uVar3 = *puVar16;
  puVar16 = puVar16 + 1;
  *(uint **)(param_2 + 8) = puVar16;
  if (uVar3 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x98) + 0x18))
              ((longlong *)(param_1 + 0x98),puVar16,(ulonglong)uVar3);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar3;
    puVar16 = *(uint **)(param_2 + 8);
  }
  uVar3 = *puVar16;
  puVar16 = puVar16 + 1;
  *(uint **)(param_2 + 8) = puVar16;
  if (uVar3 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xb8) + 0x18))
              ((longlong *)(param_1 + 0xb8),puVar16,(ulonglong)uVar3);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar3;
    puVar16 = *(uint **)(param_2 + 8);
  }
  uVar3 = *puVar16;
  puVar16 = puVar16 + 1;
  *(uint **)(param_2 + 8) = puVar16;
  if (uVar3 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xf8) + 0x18))
              ((longlong *)(param_1 + 0xf8),puVar16,(ulonglong)uVar3);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar3;
    puVar16 = *(uint **)(param_2 + 8);
  }
  *(uint *)(param_1 + 0x138) = *puVar16;
  puVar7 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar7;
  *(undefined4 *)(param_1 + 0x13c) = *puVar7;
  lVar11 = *(longlong *)(param_2 + 8);
  puVar16 = (uint *)(lVar11 + 4);
  *(uint **)(param_2 + 8) = puVar16;
  uVar3 = *puVar16;
  puVar7 = (undefined4 *)(lVar11 + 8);
  *(undefined4 **)(param_2 + 8) = puVar7;
  if (uVar3 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x118) + 0x18))
              ((longlong *)(param_1 + 0x118),puVar7,(ulonglong)uVar3);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar3;
    puVar7 = *(undefined4 **)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x140) = *puVar7;
  puVar7 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar7;
  *(undefined4 *)(param_1 + 0x144) = *puVar7;
  puVar8 = (undefined1 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined1 **)(param_2 + 8) = puVar8;
  *(undefined1 *)(param_1 + 0x148) = *puVar8;
  puVar7 = (undefined4 *)(*(longlong *)(param_2 + 8) + 1);
  *(undefined4 **)(param_2 + 8) = puVar7;
  *(undefined4 *)(param_1 + 0x40) = *puVar7;
  lVar11 = *(longlong *)(param_2 + 8);
  puVar16 = (uint *)(lVar11 + 4);
  *(uint **)(param_2 + 8) = puVar16;
  if (uVar2 != 0) {
    uVar3 = *puVar16;
    puVar16 = (uint *)(lVar11 + 8);
    *(uint **)(param_2 + 8) = puVar16;
    if (uVar3 != 0) {
      (**(code **)(*(longlong *)(param_1 + 0xd8) + 0x18))
                ((longlong *)(param_1 + 0xd8),puVar16,(ulonglong)uVar3);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar3;
      puVar16 = *(uint **)(param_2 + 8);
    }
    uVar3 = *puVar16;
    puVar16 = puVar16 + 1;
    *(uint **)(param_2 + 8) = puVar16;
    if (uVar3 != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x170) + 0x18))
                ((longlong *)(param_1 + 0x170),puVar16,(ulonglong)uVar3);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar3;
      puVar16 = *(uint **)(param_2 + 8);
    }
    uVar3 = *puVar16;
    puVar16 = puVar16 + 1;
    *(uint **)(param_2 + 8) = puVar16;
    if (uVar3 != 0) {
      (**(code **)(*(longlong *)(param_1 + 400) + 0x18))
                ((longlong *)(param_1 + 400),puVar16,(ulonglong)uVar3);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar3;
      puVar16 = *(uint **)(param_2 + 8);
    }
    *(char *)(param_1 + 0x1b0) = (char)*puVar16;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
    puVar16 = *(uint **)(param_2 + 8);
  }
  if (uVar2 < 6) {
    if (uVar2 < 2) {
      *(undefined1 *)(param_1 + 0x1b1) = 0;
    }
    else {
      uVar3 = *puVar16;
      *(char **)(param_2 + 8) = (char *)((longlong)puVar16 + 1);
      *(byte *)(param_1 + 0x1b1) = -((char)uVar3 != '\0') & 2;
    }
  }
  else {
    uVar3 = *puVar16;
    *(char **)(param_2 + 8) = (char *)((longlong)puVar16 + 1);
    *(char *)(param_1 + 0x1b1) = (char)uVar3;
  }
  puVar8 = *(undefined1 **)(param_2 + 8);
  if (4 < uVar2) {
    *(undefined1 *)(param_1 + 0x1b2) = *puVar8;
    puVar8 = (undefined1 *)(*(longlong *)(param_2 + 8) + 1);
  }
  if ((2 < uVar2) && (uVar2 < 4)) {
    puVar8 = puVar8 + 1;
  }
  *(undefined1 **)(param_2 + 8) = puVar8 + 4;
  lVar11 = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar2 = **(uint **)(param_2 + 8);
  puVar16 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar16;
  if (uVar2 != 0) {
    uVar20 = (ulonglong)uVar2;
    do {
      puStack_468 = &UNK_18098bb30;
      pbStack_460 = abStack_450;
      iStack_458 = 0;
      abStack_450[0] = 0;
      uVar2 = **(uint **)(param_2 + 8);
      puVar16 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar16;
      if (uVar2 != 0) {
        FUN_180045f60(&puStack_468,puVar16,uVar2);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
      }
      plVar18 = (longlong *)&UNK_1809f8e00;
      lVar19 = lVar11;
      do {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (*(char *)(*plVar18 + lVar9) != '\0');
        iVar15 = (int)lVar9;
        if (iStack_458 == iVar15) {
          if (iStack_458 != 0) {
            pbVar10 = pbStack_460;
            do {
              pbVar1 = pbVar10 + (*plVar18 - (longlong)pbStack_460);
              iVar15 = (uint)*pbVar10 - (uint)*pbVar1;
              if (iVar15 != 0) break;
              pbVar10 = pbVar10 + 1;
            } while (*pbVar1 != 0);
          }
LAB_18056151e:
          if (iVar15 == 0) {
            *(ulonglong *)(param_1 + 0x38) =
                 *(ulonglong *)(param_1 + 0x38) | *(ulonglong *)(&UNK_1809f8e08 + lVar19 * 0x10);
            break;
          }
        }
        else if (iStack_458 == 0) goto LAB_18056151e;
        lVar19 = lVar19 + 1;
        plVar18 = plVar18 + 2;
      } while ((longlong)plVar18 < 0x1809f9070);
      puStack_468 = &UNK_18098bcb0;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
    puVar16 = *(uint **)(param_2 + 8);
  }
  uVar2 = *puVar16;
  uVar20 = (ulonglong)uVar2;
  *(uint **)(param_2 + 8) = puVar16 + 1;
  plVar18 = (longlong *)(param_1 + 0x150);
  lVar19 = *plVar18;
  *(longlong *)(param_1 + 0x158) = lVar19;
  uVar21 = (ulonglong)(int)uVar2;
  if ((ulonglong)(*(longlong *)(param_1 + 0x160) - lVar19 >> 3) < uVar21) {
    lVar9 = lVar19;
    if (uVar2 != 0) {
      lVar11 = FUN_18062b420(_DAT_180c8ed18,uVar21 * 8,*(undefined1 *)(param_1 + 0x168));
      lVar19 = *plVar18;
      lVar9 = *(longlong *)(param_1 + 0x158);
    }
    if (lVar19 != lVar9) {
                    // WARNING: Subroutine does not return
      memmove(lVar11,lVar19,lVar9 - lVar19);
    }
    if (lVar19 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar18 = lVar11;
    *(longlong *)(param_1 + 0x158) = lVar11;
    *(ulonglong *)(param_1 + 0x160) = lVar11 + uVar21 * 8;
  }
  if (0 < (int)uVar2) {
    do {
      puStack_4a8 = &UNK_18098bc80;
      puStack_4a0 = auStack_490;
      iStack_498 = 0;
      auStack_490[0] = 0;
      uVar2 = **(uint **)(param_2 + 8);
      puVar16 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar16;
      if (uVar2 != 0) {
        FUN_180046400(&puStack_4a8,puVar16,uVar2);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
      }
      puVar8 = puStack_4a0;
      if (iStack_498 == 0xc) {
        iVar15 = strcmp(puStack_4a0,&UNK_180a24c60);
        if (iVar15 == 0) {
          puVar12 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3);
          puVar12[1] = 0;
          puVar12[2] = 0;
          puVar12[3] = 0;
          *puVar12 = &UNK_180a36170;
          lVar11 = *(longlong *)(param_2 + 8);
          *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(lVar11 + 4);
          *(undefined4 *)((longlong)puVar12 + 0xc) = *(undefined4 *)(lVar11 + 8);
          *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(lVar11 + 0xc);
          *(undefined4 *)((longlong)puVar12 + 0x14) = *(undefined4 *)(lVar11 + 0x10);
          *(undefined4 **)(param_2 + 8) = (undefined4 *)(lVar11 + 0x14);
          *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(lVar11 + 0x14);
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
          puVar14 = *(undefined8 **)(param_1 + 0x158);
          if (puVar14 < *(undefined8 **)(param_1 + 0x160)) {
            *(undefined8 **)(param_1 + 0x158) = puVar14 + 1;
            *puVar14 = puVar12;
          }
          else {
            puVar17 = (undefined8 *)*plVar18;
            lVar11 = (longlong)puVar14 - (longlong)puVar17 >> 3;
            if (lVar11 == 0) {
              lVar11 = 1;
LAB_18056174f:
              puVar13 = (undefined8 *)
                        FUN_18062b420(_DAT_180c8ed18,lVar11 * 8,*(undefined1 *)(param_1 + 0x168));
              puVar14 = *(undefined8 **)(param_1 + 0x158);
              puVar17 = (undefined8 *)*plVar18;
            }
            else {
              lVar11 = lVar11 * 2;
              if (lVar11 != 0) goto LAB_18056174f;
              puVar13 = (undefined8 *)0x0;
            }
            if (puVar17 != puVar14) {
                    // WARNING: Subroutine does not return
              memmove(puVar13,puVar17,(longlong)puVar14 - (longlong)puVar17);
            }
            *puVar13 = puVar12;
            if (*plVar18 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *plVar18 = (longlong)puVar13;
            puVar14 = puVar13 + lVar11;
LAB_180561930:
            *(undefined8 **)(param_1 + 0x158) = puVar13 + 1;
            *(undefined8 **)(param_1 + 0x160) = puVar14;
          }
        }
        else {
          iVar15 = strcmp(puVar8,&UNK_180a35f18);
          if (iVar15 == 0) {
            puStack_4b8 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x10,8,3);
            puStack_4b8[1] = 0;
            *puStack_4b8 = &UNK_180a36010;
LAB_1805617e6:
            *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
            *(undefined4 *)(puStack_4b8 + 1) = **(undefined4 **)(param_2 + 8);
            *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
            *(undefined4 *)((longlong)puStack_4b8 + 0xc) = **(undefined4 **)(param_2 + 8);
            goto LAB_180561ae5;
          }
        }
      }
      else if (iStack_498 == 0xd) {
        iVar15 = strcmp(puStack_4a0,&UNK_180a35f08);
        if (iVar15 == 0) {
          puVar12 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = &UNK_180a360f0;
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
          *(undefined4 *)(puVar12 + 1) = **(undefined4 **)(param_2 + 8);
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
          *(undefined4 *)((longlong)puVar12 + 0xc) = **(undefined4 **)(param_2 + 8);
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
          *(undefined4 *)(puVar12 + 2) = **(undefined4 **)(param_2 + 8);
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
          puVar14 = *(undefined8 **)(param_1 + 0x158);
          if (*(undefined8 **)(param_1 + 0x160) <= puVar14) {
            puVar17 = (undefined8 *)*plVar18;
            lVar11 = (longlong)puVar14 - (longlong)puVar17 >> 3;
            if (lVar11 == 0) {
              lVar11 = 1;
LAB_1805618d2:
              puVar13 = (undefined8 *)
                        FUN_18062b420(_DAT_180c8ed18,lVar11 * 8,*(undefined1 *)(param_1 + 0x168));
              puVar14 = *(undefined8 **)(param_1 + 0x158);
              puVar17 = (undefined8 *)*plVar18;
            }
            else {
              lVar11 = lVar11 * 2;
              if (lVar11 != 0) goto LAB_1805618d2;
              puVar13 = (undefined8 *)0x0;
            }
            if (puVar17 != puVar14) {
                    // WARNING: Subroutine does not return
              memmove(puVar13,puVar17,(longlong)puVar14 - (longlong)puVar17);
            }
            *puVar13 = puVar12;
            if (*plVar18 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *plVar18 = (longlong)puVar13;
            puVar14 = puVar13 + lVar11;
            goto LAB_180561930;
          }
          *(undefined8 **)(param_1 + 0x158) = puVar14 + 1;
          *puVar14 = puVar12;
        }
      }
      else if (iStack_498 == 10) {
        iVar15 = strcmp(puStack_4a0,&UNK_180a35ef8);
        if (iVar15 == 0) {
          puStack_4b8 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,3);
          *puStack_4b8 = &UNK_180a36260;
          puStack_4b8[1] = 0;
          puStack_4b8[2] = 0;
          puStack_4b8[3] = 0;
          *(undefined4 *)(puStack_4b8 + 4) = 0;
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
          *(undefined4 *)(puStack_4b8 + 1) = **(undefined4 **)(param_2 + 8);
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
          *(undefined4 *)((longlong)puStack_4b8 + 0x1c) = **(undefined4 **)(param_2 + 8);
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
          *(undefined4 *)(puStack_4b8 + 4) = **(undefined4 **)(param_2 + 8);
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
          *(undefined4 *)((longlong)puStack_4b8 + 0xc) = **(undefined4 **)(param_2 + 8);
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
          *(undefined4 *)(puStack_4b8 + 2) = **(undefined4 **)(param_2 + 8);
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
          *(undefined4 *)((longlong)puStack_4b8 + 0x14) = **(undefined4 **)(param_2 + 8);
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
          *(undefined4 *)(puStack_4b8 + 3) = **(undefined4 **)(param_2 + 8);
LAB_180561ae5:
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
          FUN_18005ea90(plVar18,&puStack_4b8);
        }
      }
      else {
        lVar11 = 0;
        if (iStack_498 == 5) {
          do {
            lVar19 = lVar11;
            if (puStack_4a0[lVar19] != (&UNK_180a35f28)[lVar19]) goto LAB_180561af8;
            lVar11 = lVar19 + 1;
          } while (lVar19 + 1 != 6);
          puStack_4b8 = (undefined8 *)
                        FUN_18062b1e0(_DAT_180c8ed18,(int)lVar19 + 0xb,(int)lVar19 + 3,3);
          puStack_4b8[1] = 0;
          *puStack_4b8 = &UNK_180a36078;
          goto LAB_1805617e6;
        }
        if ((iStack_498 == 0xb) && (iVar15 = strcmp(puStack_4a0,&UNK_180a35ee8), iVar15 == 0)) {
          puStack_4b8 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
          puStack_4b8[1] = 0;
          puStack_4b8[2] = 0;
          *puStack_4b8 = &UNK_180a35f78;
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
          *(undefined4 *)(puStack_4b8 + 1) = **(undefined4 **)(param_2 + 8);
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
          *(undefined4 *)((longlong)puStack_4b8 + 0xc) = **(undefined4 **)(param_2 + 8);
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
          *(undefined4 *)(puStack_4b8 + 2) = **(undefined4 **)(param_2 + 8);
          goto LAB_180561ae5;
        }
      }
LAB_180561af8:
      puStack_4a8 = &UNK_18098bcb0;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_4d8);
}





