#include "TaleWorlds.Native.Split.h"

// 99_part_04_part022.c - 1 个函数

// 函数: void FUN_18026c3f0(undefined8 *param_1,longlong param_2)
void FUN_18026c3f0(undefined8 *param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined1 auStack_498 [32];
  undefined8 uStack_478;
  undefined *puStack_468;
  byte *pbStack_460;
  int iStack_458;
  byte abStack_450 [1032];
  ulonglong uStack_48;
  
  uStack_478 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_498;
  puVar13 = *(uint **)(param_2 + 8);
  uVar16 = *puVar13;
  *(uint **)(param_2 + 8) = puVar13 + 1;
  uVar7 = *(undefined8 *)(puVar13 + 3);
  *param_1 = *(undefined8 *)(puVar13 + 1);
  param_1[1] = uVar7;
  lVar14 = *(longlong *)(param_2 + 8);
  puVar8 = (undefined8 *)(lVar14 + 0x10);
  *(undefined8 **)(param_2 + 8) = puVar8;
  uVar7 = *(undefined8 *)(lVar14 + 0x18);
  param_1[2] = *puVar8;
  param_1[3] = uVar7;
  lVar14 = *(longlong *)(param_2 + 8);
  puVar8 = (undefined8 *)(lVar14 + 0x10);
  *(undefined8 **)(param_2 + 8) = puVar8;
  uVar7 = *(undefined8 *)(lVar14 + 0x18);
  param_1[4] = *puVar8;
  param_1[5] = uVar7;
  lVar14 = *(longlong *)(param_2 + 8);
  *(undefined4 **)(param_2 + 8) = (undefined4 *)(lVar14 + 0x10);
  uVar4 = *(undefined4 *)(lVar14 + 0x14);
  uVar5 = *(undefined4 *)(lVar14 + 0x18);
  uVar6 = *(undefined4 *)(lVar14 + 0x1c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar14 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 7) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar6;
  lVar14 = *(longlong *)(param_2 + 8);
  puVar13 = (uint *)(lVar14 + 0x10);
  *(uint **)(param_2 + 8) = puVar13;
  uVar2 = *puVar13;
  lVar14 = lVar14 + 0x14;
  *(longlong *)(param_2 + 8) = lVar14;
  if (uVar2 != 0) {
    (**(code **)(param_1[8] + 0x18))(param_1 + 8,lVar14,uVar2);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
  }
  FUN_18025a7b0(&UNK_18098dc90,param_2,param_1 + 0xc);
  uVar15 = 0;
  puStack_468 = &UNK_18098bb30;
  pbStack_460 = abStack_450;
  iStack_458 = 0;
  abStack_450[0] = 0;
  uVar2 = **(uint **)(param_2 + 8);
  puVar13 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar13;
  if (uVar2 != 0) {
    FUN_180045f60(&puStack_468,puVar13,(ulonglong)uVar2);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
  }
  plVar18 = (longlong *)0x180bf8eb0;
  uVar17 = uVar15;
  do {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (*(char *)(*plVar18 + lVar14) != '\0');
    iVar12 = (int)lVar14;
    if (iStack_458 == iVar12) {
      if (iStack_458 != 0) {
        pbVar9 = pbStack_460;
        do {
          pbVar1 = pbVar9 + (*plVar18 - (longlong)pbStack_460);
          iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
          if (iVar12 != 0) break;
          pbVar9 = pbVar9 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18026c58e:
      if (iVar12 == 0) {
        *(undefined4 *)((longlong)param_1 + 100) =
             *(undefined4 *)((longlong)(int)uVar17 * 0x10 + 0x180bf8eb8);
        break;
      }
    }
    else if (iStack_458 == 0) goto LAB_18026c58e;
    uVar17 = (ulonglong)((int)uVar17 + 1);
    plVar18 = plVar18 + 2;
  } while ((longlong)plVar18 < 0x180bf8ed0);
  puStack_468 = &UNK_18098bb30;
  pbStack_460 = abStack_450;
  iStack_458 = 0;
  abStack_450[0] = 0;
  uVar2 = **(uint **)(param_2 + 8);
  puVar13 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar13;
  if (uVar2 != 0) {
    FUN_180045f60(&puStack_468,puVar13,(ulonglong)uVar2);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
  }
  plVar18 = (longlong *)0x180bf8ed0;
  uVar17 = uVar15;
  do {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (*(char *)(*plVar18 + lVar14) != '\0');
    iVar12 = (int)lVar14;
    if (iStack_458 == iVar12) {
      if (iStack_458 != 0) {
        pbVar9 = pbStack_460;
        do {
          pbVar1 = pbVar9 + (*plVar18 - (longlong)pbStack_460);
          iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
          if (iVar12 != 0) break;
          pbVar9 = pbVar9 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18026c687:
      if (iVar12 == 0) {
        *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)((longlong)(int)uVar17 * 0x10 + 0x180bf8ed8)
        ;
        break;
      }
    }
    else if (iStack_458 == 0) goto LAB_18026c687;
    uVar17 = (ulonglong)((int)uVar17 + 1);
    plVar18 = plVar18 + 2;
  } while ((longlong)plVar18 < 0x180bf8f00);
  puStack_468 = &UNK_18098bcb0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = **(undefined4 **)(param_2 + 8);
  lVar14 = *(longlong *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)(lVar14 + 8);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(lVar14 + 0xc);
  *(undefined4 **)(param_2 + 8) = (undefined4 *)(lVar14 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(lVar14 + 0x10);
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)((longlong)param_1 + 0x7c) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)(param_1 + 0x10) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)((longlong)param_1 + 0x84) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)(param_1 + 0x11) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)((longlong)param_1 + 0x8c) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)(param_1 + 0x12) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)((longlong)param_1 + 0x94) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)(param_1 + 0x13) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)((longlong)param_1 + 0x9c) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)(param_1 + 0x14) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)((longlong)param_1 + 0xa4) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)(param_1 + 0x15) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  if (2 < uVar16) {
    *(undefined4 *)((longlong)param_1 + 0xac) = *puVar10;
    puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
    *(undefined4 **)(param_2 + 8) = puVar10;
    *(undefined4 *)(param_1 + 0x16) = *puVar10;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
    puVar10 = *(undefined4 **)(param_2 + 8);
  }
  *(undefined4 *)((longlong)param_1 + 0xb4) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)(param_1 + 0x17) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)((longlong)param_1 + 0xbc) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)(param_1 + 0x18) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)((longlong)param_1 + 0xc4) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)(param_1 + 0x19) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)((longlong)param_1 + 0xcc) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)(param_1 + 0x1a) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)((longlong)param_1 + 0xd4) = *puVar10;
  puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar10;
  *(undefined4 *)(param_1 + 0x1b) = *puVar10;
  lVar14 = *(longlong *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)(lVar14 + 4);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar14 + 8);
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)(lVar14 + 0xc);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(lVar14 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)(lVar14 + 0x14);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(lVar14 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)(lVar14 + 0x1c);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(lVar14 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)(lVar14 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar14 + 0x30);
  *(longlong *)(param_2 + 8) = lVar14 + 0x34;
  FUN_180270120(param_1 + 0x21);
  puVar10 = *(undefined4 **)(param_2 + 8);
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  *(undefined4 *)(param_1 + 0x27) = *puVar10;
  *(undefined4 *)((longlong)param_1 + 0x13c) = uVar4;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar6;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x10;
  puStack_468 = &UNK_18098bb30;
  pbStack_460 = abStack_450;
  iStack_458 = 0;
  abStack_450[0] = 0;
  uVar2 = **(uint **)(param_2 + 8);
  puVar13 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar13;
  if (uVar2 != 0) {
    FUN_180045f60(&puStack_468,puVar13,(ulonglong)uVar2);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
  }
  plVar18 = (longlong *)0x180bf8f70;
  uVar17 = uVar15;
  do {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (*(char *)(*plVar18 + lVar14) != '\0');
    iVar12 = (int)lVar14;
    if (iStack_458 == iVar12) {
      if (iStack_458 != 0) {
        pbVar9 = pbStack_460;
        do {
          pbVar1 = pbVar9 + (*plVar18 - (longlong)pbStack_460);
          iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
          if (iVar12 != 0) break;
          pbVar9 = pbVar9 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18026ca07:
      if (iVar12 == 0) {
        *(undefined4 *)(param_1 + 0x29) =
             *(undefined4 *)((longlong)(int)uVar17 * 0x10 + 0x180bf8f78);
        break;
      }
    }
    else if (iStack_458 == 0) goto LAB_18026ca07;
    uVar17 = (ulonglong)((int)uVar17 + 1);
    plVar18 = plVar18 + 2;
  } while ((longlong)plVar18 < 0x180bf8fa0);
  puStack_468 = &UNK_18098bb30;
  pbStack_460 = abStack_450;
  iStack_458 = 0;
  abStack_450[0] = 0;
  uVar2 = **(uint **)(param_2 + 8);
  puVar13 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar13;
  if (uVar2 != 0) {
    FUN_180045f60(&puStack_468,puVar13,(ulonglong)uVar2);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
  }
  plVar18 = (longlong *)0x180bf8f00;
  uVar17 = uVar15;
  do {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (*(char *)(*plVar18 + lVar14) != '\0');
    iVar12 = (int)lVar14;
    if (iStack_458 == iVar12) {
      if (iStack_458 != 0) {
        pbVar9 = pbStack_460;
        do {
          pbVar1 = pbVar9 + (*plVar18 - (longlong)pbStack_460);
          iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
          if (iVar12 != 0) break;
          pbVar9 = pbVar9 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18026cafa:
      if (iVar12 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x14c) =
             *(undefined4 *)((longlong)(int)uVar17 * 0x10 + 0x180bf8f08);
        break;
      }
    }
    else if (iStack_458 == 0) goto LAB_18026cafa;
    uVar17 = (ulonglong)((int)uVar17 + 1);
    plVar18 = plVar18 + 2;
  } while ((longlong)plVar18 < 0x180bf8f20);
  if (1 < uVar16) {
    puStack_468 = &UNK_18098bb30;
    pbStack_460 = abStack_450;
    iStack_458 = 0;
    abStack_450[0] = 0;
    uVar2 = **(uint **)(param_2 + 8);
    puVar13 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar13;
    if (uVar2 != 0) {
      FUN_180045f60(&puStack_468,puVar13,(ulonglong)uVar2);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
    }
    plVar18 = (longlong *)0x180bf8fd0;
    uVar17 = uVar15;
    do {
      lVar14 = -1;
      do {
        lVar14 = lVar14 + 1;
      } while (*(char *)(*plVar18 + lVar14) != '\0');
      iVar12 = (int)lVar14;
      if (iStack_458 == iVar12) {
        if (iStack_458 != 0) {
          pbVar9 = pbStack_460;
          do {
            pbVar1 = pbVar9 + (*plVar18 - (longlong)pbStack_460);
            iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
            if (iVar12 != 0) break;
            pbVar9 = pbVar9 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18026cbfa:
        if (iVar12 == 0) {
          *(undefined4 *)(param_1 + 0x2a) =
               *(undefined4 *)((longlong)(int)uVar17 * 0x10 + 0x180bf8fd8);
          break;
        }
      }
      else if (iStack_458 == 0) goto LAB_18026cbfa;
      uVar17 = (ulonglong)((int)uVar17 + 1);
      plVar18 = plVar18 + 2;
    } while ((longlong)plVar18 < 0x180bf8ff0);
  }
  puStack_468 = &UNK_18098bcb0;
  lVar14 = *(longlong *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)(lVar14 + 8);
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(lVar14 + 0xc);
  *(longlong *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x2c);
  lVar14 = *(longlong *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(lVar14 + 8);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(lVar14 + 0xc);
  *(longlong *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x33);
  lVar14 = *(longlong *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = *(undefined4 *)(lVar14 + 8);
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(lVar14 + 0xc);
  *(longlong *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x3a);
  lVar14 = *(longlong *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x204) = *(undefined4 *)(lVar14 + 8);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar14 + 0xc);
  *(longlong *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x41);
  lVar14 = *(longlong *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x23c) = *(undefined4 *)(lVar14 + 8);
  *(undefined4 *)(param_1 + 0x47) = *(undefined4 *)(lVar14 + 0xc);
  *(longlong *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x48);
  lVar14 = *(longlong *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x274) = *(undefined4 *)(lVar14 + 8);
  *(undefined4 *)(param_1 + 0x4e) = *(undefined4 *)(lVar14 + 0xc);
  *(longlong *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x4f);
  FUN_180270120(param_1 + 0x55);
  lVar14 = *(longlong *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x2dc) = *(undefined4 *)(lVar14 + 8);
  *(undefined4 *)(param_1 + 0x5b) = *(undefined4 *)(lVar14 + 0xc);
  *(longlong *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x5c);
  lVar14 = *(longlong *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x314) = *(undefined4 *)(lVar14 + 8);
  *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(lVar14 + 0xc);
  *(longlong *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 99);
  lVar14 = *(longlong *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x34c) = *(undefined4 *)(lVar14 + 8);
  *(undefined4 *)(param_1 + 0x69) = *(undefined4 *)(lVar14 + 0xc);
  *(longlong *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x6a);
  lVar14 = *(longlong *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 900) = *(undefined4 *)(lVar14 + 8);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(lVar14 + 0xc);
  *(longlong *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x71);
  lVar14 = *(longlong *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x3bc) = *(undefined4 *)(lVar14 + 8);
  *(undefined4 *)(param_1 + 0x77) = *(undefined4 *)(lVar14 + 0xc);
  *(longlong *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x78);
  lVar14 = *(longlong *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x3f4) = *(undefined4 *)(lVar14 + 8);
  *(undefined4 *)(param_1 + 0x7e) = *(undefined4 *)(lVar14 + 0xc);
  *(longlong *)(param_2 + 8) = lVar14 + 0x10;
  FUN_180270120(param_1 + 0x7f);
  if (uVar16 != 0) {
    lVar14 = *(longlong *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x42c) = *(undefined4 *)(lVar14 + 8);
    *(undefined4 *)(param_1 + 0x85) = *(undefined4 *)(lVar14 + 0xc);
    *(longlong *)(param_2 + 8) = lVar14 + 0x10;
    FUN_180270120(param_1 + 0x86);
  }
  lVar14 = *(longlong *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x464) = *(undefined4 *)(lVar14 + 4);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(lVar14 + 8);
  *(undefined4 *)((longlong)param_1 + 0x46c) = *(undefined4 *)(lVar14 + 0x10);
  *(undefined4 *)(param_1 + 0x8d) = *(undefined4 *)(lVar14 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0x474) = *(undefined4 *)(lVar14 + 0x1c);
  *(undefined4 *)(param_1 + 0x8e) = *(undefined4 *)(lVar14 + 0x20);
  *(longlong *)(param_2 + 8) = lVar14 + 0x24;
  puStack_468 = &UNK_18098bb30;
  pbStack_460 = abStack_450;
  iStack_458 = 0;
  abStack_450[0] = 0;
  uVar16 = **(uint **)(param_2 + 8);
  puVar13 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar13;
  if (uVar16 != 0) {
    FUN_180045f60(&puStack_468,puVar13,(ulonglong)uVar16);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar16;
  }
  plVar18 = (longlong *)0x180bf8f20;
  uVar17 = uVar15;
  do {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (*(char *)(*plVar18 + lVar14) != '\0');
    iVar12 = (int)lVar14;
    if (iStack_458 == iVar12) {
      if (iStack_458 != 0) {
        pbVar9 = pbStack_460;
        do {
          pbVar1 = pbVar9 + (*plVar18 - (longlong)pbStack_460);
          iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
          if (iVar12 != 0) break;
          pbVar9 = pbVar9 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18026cf9a:
      if (iVar12 == 0) {
        *(undefined4 *)(param_1 + 0x8f) =
             *(undefined4 *)((longlong)(int)uVar17 * 0x10 + 0x180bf8f28);
        break;
      }
    }
    else if (iStack_458 == 0) goto LAB_18026cf9a;
    uVar17 = (ulonglong)((int)uVar17 + 1);
    plVar18 = plVar18 + 2;
  } while ((longlong)plVar18 < 0x180bf8f70);
  puStack_468 = &UNK_18098bb30;
  pbStack_460 = abStack_450;
  iStack_458 = 0;
  abStack_450[0] = 0;
  uVar16 = **(uint **)(param_2 + 8);
  puVar13 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar13;
  if (uVar16 != 0) {
    FUN_180045f60(&puStack_468,puVar13,(ulonglong)uVar16);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar16;
  }
  plVar18 = (longlong *)0x180bf8fa0;
  uVar17 = uVar15;
  do {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (*(char *)(*plVar18 + lVar14) != '\0');
    iVar12 = (int)lVar14;
    if (iStack_458 == iVar12) {
      if (iStack_458 != 0) {
        pbVar9 = pbStack_460;
        do {
          pbVar1 = pbVar9 + (*plVar18 - (longlong)pbStack_460);
          iVar12 = (uint)*pbVar9 - (uint)*pbVar1;
          if (iVar12 != 0) break;
          pbVar9 = pbVar9 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18026d094:
      if (iVar12 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x47c) =
             *(undefined4 *)((longlong)(int)uVar17 * 0x10 + 0x180bf8fa8);
        goto LAB_18026d0a6;
      }
    }
    else if (iStack_458 == 0) goto LAB_18026d094;
    uVar17 = (ulonglong)((int)uVar17 + 1);
    plVar18 = plVar18 + 2;
    if (0x180bf8fcf < (longlong)plVar18) {
LAB_18026d0a6:
      puStack_468 = &UNK_18098bcb0;
      FUN_18026fc50(param_1 + 0x90,param_2);
      puVar10 = *(undefined4 **)(param_2 + 8);
      *(undefined4 *)(param_1 + 0xfc) = *puVar10;
      *(undefined4 *)((longlong)param_1 + 0x7e4) = puVar10[1];
      *(undefined4 *)(param_1 + 0xfd) = puVar10[2];
      *(undefined4 *)((longlong)param_1 + 0x7ec) = puVar10[3];
      *(undefined4 **)(param_2 + 8) = puVar10 + 4;
      *(undefined4 *)(param_1 + 0xfe) = puVar10[4];
      puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
      *(undefined4 **)(param_2 + 8) = puVar10;
      *(undefined4 *)((longlong)param_1 + 0x7f4) = *puVar10;
      puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
      *(undefined4 **)(param_2 + 8) = puVar10;
      *(undefined4 *)(param_1 + 0xff) = *puVar10;
      puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
      *(undefined4 **)(param_2 + 8) = puVar10;
      *(undefined4 *)((longlong)param_1 + 0x7fc) = *puVar10;
      lVar14 = *(longlong *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar14 + 4);
      *(undefined4 *)((longlong)param_1 + 0x804) = *(undefined4 *)(lVar14 + 8);
      *(undefined4 *)(param_1 + 0x101) = *(undefined4 *)(lVar14 + 0xc);
      *(undefined4 *)((longlong)param_1 + 0x80c) = *(undefined4 *)(lVar14 + 0x10);
      *(undefined4 *)(param_1 + 0x102) = *(undefined4 *)(lVar14 + 0x14);
      *(undefined4 *)((longlong)param_1 + 0x814) = *(undefined4 *)(lVar14 + 0x18);
      *(undefined4 *)(param_1 + 0x103) = *(undefined4 *)(lVar14 + 0x1c);
      *(undefined4 *)((longlong)param_1 + 0x81c) = *(undefined4 *)(lVar14 + 0x20);
      *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(lVar14 + 0x24);
      *(undefined4 *)((longlong)param_1 + 0x824) = *(undefined4 *)(lVar14 + 0x28);
      *(undefined4 *)(param_1 + 0x105) = *(undefined4 *)(lVar14 + 0x2c);
      *(undefined4 *)((longlong)param_1 + 0x82c) = *(undefined4 *)(lVar14 + 0x30);
      *(undefined4 *)(param_1 + 0x106) = *(undefined4 *)(lVar14 + 0x34);
      *(undefined4 *)((longlong)param_1 + 0x834) = *(undefined4 *)(lVar14 + 0x38);
      *(undefined4 *)(param_1 + 0x107) = *(undefined4 *)(lVar14 + 0x3c);
      *(undefined4 *)((longlong)param_1 + 0x83c) = *(undefined4 *)(lVar14 + 0x40);
      *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(lVar14 + 0x44);
      *(undefined4 *)((longlong)param_1 + 0x844) = *(undefined4 *)(lVar14 + 0x48);
      *(undefined4 *)(param_1 + 0x109) = *(undefined4 *)(lVar14 + 0x4c);
      *(undefined4 *)((longlong)param_1 + 0x84c) = *(undefined4 *)(lVar14 + 0x50);
      *(undefined4 **)(param_2 + 8) = (undefined4 *)(lVar14 + 0x54);
      *(undefined4 *)(param_1 + 0x10a) = *(undefined4 *)(lVar14 + 0x54);
      puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
      *(undefined4 **)(param_2 + 8) = puVar10;
      *(undefined4 *)((longlong)param_1 + 0x854) = *puVar10;
      puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
      *(undefined4 **)(param_2 + 8) = puVar10;
      *(undefined4 *)(param_1 + 0x10b) = *puVar10;
      puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
      *(undefined4 **)(param_2 + 8) = puVar10;
      *(undefined4 *)((longlong)param_1 + 0x85c) = *puVar10;
      puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
      *(undefined4 **)(param_2 + 8) = puVar10;
      *(undefined4 *)(param_1 + 0x10c) = *puVar10;
      lVar14 = *(longlong *)(param_2 + 8);
      piVar11 = (int *)(lVar14 + 4);
      *(int **)(param_2 + 8) = piVar11;
      iVar12 = *piVar11;
      *(longlong *)(param_2 + 8) = lVar14 + 8;
      plVar18 = param_1 + 0x10d;
      FUN_180080aa0(plVar18,(longlong)iVar12);
      uVar17 = uVar15;
      if (param_1[0x10e] - *plVar18 >> 4 == 0) {
        puVar10 = *(undefined4 **)(param_2 + 8);
      }
      else {
        do {
          puVar3 = *(undefined4 **)(param_2 + 8);
          uVar4 = puVar3[1];
          uVar5 = puVar3[2];
          uVar6 = puVar3[3];
          puVar10 = (undefined4 *)(uVar15 + *plVar18);
          *puVar10 = *puVar3;
          puVar10[1] = uVar4;
          puVar10[2] = uVar5;
          puVar10[3] = uVar6;
          puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 0x10);
          *(undefined4 **)(param_2 + 8) = puVar10;
          uVar16 = (int)uVar17 + 1;
          uVar15 = uVar15 + 0x10;
          uVar17 = (ulonglong)uVar16;
        } while ((ulonglong)(longlong)(int)uVar16 < (ulonglong)(param_1[0x10e] - *plVar18 >> 4));
      }
      *(undefined4 *)(param_1 + 0x111) = *puVar10;
      *(undefined4 *)((longlong)param_1 + 0x88c) = puVar10[1];
      *(undefined4 *)(param_1 + 0x112) = puVar10[2];
      *(undefined4 *)((longlong)param_1 + 0x894) = puVar10[3];
      *(undefined4 *)(param_1 + 0x113) = puVar10[4];
      *(undefined4 *)((longlong)param_1 + 0x89c) = puVar10[5];
      *(undefined4 *)(param_1 + 0x114) = puVar10[6];
      *(undefined4 *)((longlong)param_1 + 0x8a4) = puVar10[7];
      *(undefined4 **)(param_2 + 8) = puVar10 + 8;
      *(undefined4 *)(param_1 + 0x115) = puVar10[8];
      puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
      *(undefined4 **)(param_2 + 8) = puVar10;
      *(undefined4 *)((longlong)param_1 + 0x8ac) = *puVar10;
      puVar10 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
      *(undefined4 **)(param_2 + 8) = puVar10;
      *(undefined4 *)(param_1 + 0x116) = *puVar10;
      lVar14 = *(longlong *)(param_2 + 8);
      puVar13 = (uint *)(lVar14 + 4);
      *(uint **)(param_2 + 8) = puVar13;
      uVar16 = *puVar13;
      puVar13 = (uint *)(lVar14 + 8);
      *(uint **)(param_2 + 8) = puVar13;
      if (uVar16 != 0) {
        (**(code **)(param_1[0x117] + 0x18))(param_1 + 0x117,puVar13,uVar16);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar16;
        puVar13 = *(uint **)(param_2 + 8);
      }
      uVar16 = *puVar13;
      puVar13 = puVar13 + 1;
      *(uint **)(param_2 + 8) = puVar13;
      if (uVar16 != 0) {
        (**(code **)(param_1[0x11b] + 0x18))(param_1 + 0x11b,puVar13,uVar16);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar16;
        puVar13 = *(uint **)(param_2 + 8);
      }
      *(uint *)(param_1 + 0x11f) = *puVar13;
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_498);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




