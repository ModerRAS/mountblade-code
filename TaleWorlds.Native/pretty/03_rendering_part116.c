#include "TaleWorlds.Native.Split.h"

// 03_rendering_part116.c - 6 个函数

// 函数: void FUN_1803387a0(longlong *param_1,longlong param_2)
void FUN_1803387a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  char cVar3;
  int8_t uVar4;
  int32_t uVar5;
  int iVar6;
  longlong lVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  int32_t *puVar19;
  int *piVar20;
  uint64_t *puVar21;
  int8_t *puVar22;
  longlong lVar23;
  uint64_t *puVar24;
  int8_t *puVar25;
  uint *puVar26;
  uint64_t *puVar27;
  int8_t *puVar28;
  longlong lVar29;
  int32_t *puVar30;
  uint uVar31;
  ulonglong uVar32;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  
  uVar31 = **(uint **)(param_2 + 8);
  puVar26 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar26;
  if (uVar31 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1,puVar26);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar31;
    puVar26 = *(uint **)(param_2 + 8);
  }
  *(uint *)((longlong)param_1 + 0x5c) = *puVar26;
  puVar19 = (int32_t *)(*(longlong *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar19;
  *(int32_t *)(param_1 + 0xb) = *puVar19;
  puVar19 = (int32_t *)(*(longlong *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar19;
  *(int32_t *)(param_1 + 0xc) = *puVar19;
  lVar29 = *(longlong *)(param_2 + 8);
  *(char **)(param_2 + 8) = (char *)(lVar29 + 4);
  cVar3 = *(char *)(lVar29 + 4);
  *(int32_t **)(param_2 + 8) = (int32_t *)(lVar29 + 5);
  if (cVar3 == '\0') {
    *(int32_t *)(param_1 + 0x1a) = *(int32_t *)(lVar29 + 5);
    *(int32_t *)((longlong)param_1 + 0xd4) = *(int32_t *)(lVar29 + 9);
    *(int32_t *)(param_1 + 0x1b) = *(int32_t *)(lVar29 + 0xd);
    *(int32_t *)((longlong)param_1 + 0xdc) = *(int32_t *)(lVar29 + 0x11);
    *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(lVar29 + 0x15);
    *(int32_t *)((longlong)param_1 + 0xe4) = *(int32_t *)(lVar29 + 0x19);
    *(int32_t *)(param_1 + 0x1d) = *(int32_t *)(lVar29 + 0x1d);
    *(int32_t *)((longlong)param_1 + 0xec) = *(int32_t *)(lVar29 + 0x21);
    *(int32_t *)(param_1 + 0x1e) = *(int32_t *)(lVar29 + 0x25);
    *(int32_t *)((longlong)param_1 + 0xf4) = *(int32_t *)(lVar29 + 0x29);
    *(int32_t *)(param_1 + 0x1f) = *(int32_t *)(lVar29 + 0x2d);
    *(int32_t *)((longlong)param_1 + 0xfc) = *(int32_t *)(lVar29 + 0x31);
    *(int32_t *)(param_1 + 0x20) = *(int32_t *)(lVar29 + 0x35);
    *(int32_t *)((longlong)param_1 + 0x104) = *(int32_t *)(lVar29 + 0x39);
    *(int32_t *)(param_1 + 0x21) = *(int32_t *)(lVar29 + 0x3d);
    uVar5 = *(int32_t *)(lVar29 + 0x41);
    puVar19 = (int32_t *)(lVar29 + 0x45);
    *(int32_t **)(param_2 + 8) = puVar19;
    *(int32_t *)((longlong)param_1 + 0x10c) = uVar5;
  }
  else {
    param_1[0x1a] = 0x3f800000;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0x3f80000000000000;
    param_1[0x1d] = 0;
    *(int32_t *)(param_1 + 0x1e) = 0;
    *(int32_t *)((longlong)param_1 + 0xf4) = 0;
    *(int32_t *)(param_1 + 0x1f) = 0x3f800000;
    *(int32_t *)((longlong)param_1 + 0xfc) = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0x3f80000000000000;
    puVar19 = *(int32_t **)(param_2 + 8);
  }
  *(int32_t *)((longlong)param_1 + 100) = *puVar19;
  lVar29 = *(longlong *)(param_2 + 8);
  *(int32_t *)(param_1 + 0x10) = *(int32_t *)(lVar29 + 4);
  *(int32_t *)((longlong)param_1 + 0x84) = *(int32_t *)(lVar29 + 8);
  *(int32_t *)(param_1 + 0x11) = *(int32_t *)(lVar29 + 0xc);
  *(int32_t *)((longlong)param_1 + 0x8c) = *(int32_t *)(lVar29 + 0x10);
  *(int32_t *)(param_1 + 0x12) = *(int32_t *)(lVar29 + 0x14);
  *(int32_t *)((longlong)param_1 + 0x94) = *(int32_t *)(lVar29 + 0x18);
  *(int32_t *)(param_1 + 0x13) = *(int32_t *)(lVar29 + 0x1c);
  *(int32_t *)((longlong)param_1 + 0x9c) = *(int32_t *)(lVar29 + 0x20);
  *(int32_t *)(param_1 + 0x14) = *(int32_t *)(lVar29 + 0x24);
  *(int32_t *)((longlong)param_1 + 0xa4) = *(int32_t *)(lVar29 + 0x28);
  *(int32_t *)(param_1 + 0x15) = *(int32_t *)(lVar29 + 0x2c);
  *(int32_t *)((longlong)param_1 + 0xac) = *(int32_t *)(lVar29 + 0x30);
  *(int32_t *)(param_1 + 0x16) = *(int32_t *)(lVar29 + 0x34);
  *(int32_t *)((longlong)param_1 + 0xb4) = *(int32_t *)(lVar29 + 0x38);
  *(int32_t *)(param_1 + 0x17) = *(int32_t *)(lVar29 + 0x3c);
  *(int32_t *)((longlong)param_1 + 0xbc) = *(int32_t *)(lVar29 + 0x40);
  *(int32_t *)(param_1 + 0x18) = *(int32_t *)(lVar29 + 0x44);
  *(int32_t *)((longlong)param_1 + 0xc4) = *(int32_t *)(lVar29 + 0x48);
  *(int32_t *)(param_1 + 0x19) = *(int32_t *)(lVar29 + 0x4c);
  uVar5 = *(int32_t *)(lVar29 + 0x50);
  *(int32_t **)(param_2 + 8) = (int32_t *)(lVar29 + 0x54);
  *(int32_t *)((longlong)param_1 + 0xcc) = uVar5;
  *(int32_t *)(param_1 + 0xd) = *(int32_t *)(lVar29 + 0x54);
  puVar19 = (int32_t *)(*(longlong *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar19;
  *(int32_t *)(param_1 + 0x33) = *puVar19;
  lVar29 = *(longlong *)(param_2 + 8);
  piVar20 = (int *)(lVar29 + 4);
  *(int **)(param_2 + 8) = piVar20;
  iVar6 = *piVar20;
  lVar23 = (longlong)iVar6;
  puVar19 = (int32_t *)(lVar29 + 8);
  *(int32_t **)(param_2 + 8) = puVar19;
  if (0 < iVar6) {
    plVar1 = param_1 + 0x26;
    FUN_18033a920(plVar1,lVar23);
    puVar19 = *(int32_t **)(param_2 + 8);
    lVar29 = 0;
    if (3 < lVar23) {
      puVar30 = puVar19;
      do {
        uVar5 = *puVar30;
        lVar7 = *plVar1;
        *(int32_t **)(param_2 + 8) = puVar30 + 2;
        *(int32_t *)(lVar7 + lVar29 * 8) = uVar5;
        *(int32_t *)(lVar7 + 4 + lVar29 * 8) = puVar30[1];
        lVar7 = *plVar1;
        *(int32_t *)(lVar7 + 8 + lVar29 * 8) = puVar30[2];
        *(int32_t *)(lVar7 + 0xc + lVar29 * 8) = puVar30[3];
        *(int32_t **)(param_2 + 8) = puVar30 + 4;
        lVar7 = *plVar1;
        *(int32_t *)(lVar7 + 0x10 + lVar29 * 8) = puVar30[4];
        *(int32_t *)(lVar7 + 0x14 + lVar29 * 8) = puVar30[5];
        *(int32_t **)(param_2 + 8) = puVar30 + 6;
        lVar7 = *plVar1;
        uVar5 = puVar30[6];
        puVar19 = puVar30 + 8;
        *(int32_t **)(param_2 + 8) = puVar19;
        *(int32_t *)(lVar7 + 0x18 + lVar29 * 8) = uVar5;
        *(int32_t *)(lVar7 + 0x1c + lVar29 * 8) = puVar30[7];
        lVar29 = lVar29 + 4;
        puVar30 = puVar19;
      } while (lVar29 < lVar23 + -3);
    }
    for (; lVar29 < lVar23; lVar29 = lVar29 + 1) {
      lVar7 = *plVar1;
      *(int32_t *)(lVar7 + lVar29 * 8) = *puVar19;
      *(int32_t *)(lVar7 + 4 + lVar29 * 8) = puVar19[1];
      *(int32_t **)(param_2 + 8) = puVar19 + 2;
      puVar19 = puVar19 + 2;
    }
  }
  puVar2 = (ulonglong *)(param_1 + 0x2a);
  *(int32_t *)((longlong)param_1 + 0x7c) = *puVar19;
  puVar19 = (int32_t *)(*(longlong *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar19;
  *(int32_t *)((longlong)param_1 + 0x74) = *puVar19;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  FUN_180284120(puVar2,*(int32_t *)((longlong)param_1 + 0x74));
  uVar31 = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    do {
      puVar27 = *(uint64_t **)(param_2 + 8);
      uVar11 = *puVar27;
      uVar12 = puVar27[1];
      uVar13 = puVar27[2];
      uVar14 = puVar27[3];
      uVar15 = puVar27[4];
      uVar16 = puVar27[5];
      uVar5 = *(int32_t *)(puVar27 + 6);
      uVar8 = *(int32_t *)((longlong)puVar27 + 0x34);
      uVar17 = puVar27[6];
      uVar9 = *(int32_t *)(puVar27 + 7);
      uVar10 = *(int32_t *)((longlong)puVar27 + 0x3c);
      uVar18 = puVar27[7];
      *(uint64_t **)(param_2 + 8) = puVar27 + 8;
      puVar27 = (uint64_t *)param_1[0x2b];
      uStack_48 = (int32_t)uVar15;
      uStack_44 = (int32_t)((ulonglong)uVar15 >> 0x20);
      uStack_40 = (int32_t)uVar16;
      uStack_3c = (int32_t)((ulonglong)uVar16 >> 0x20);
      if (puVar27 < (uint64_t *)param_1[0x2c]) {
        param_1[0x2b] = (longlong)(puVar27 + 8);
        *puVar27 = uVar11;
        puVar27[1] = uVar12;
        puVar27[2] = uVar13;
        puVar27[3] = uVar14;
        *(int32_t *)(puVar27 + 4) = uStack_48;
        *(int32_t *)((longlong)puVar27 + 0x24) = uStack_44;
        *(int32_t *)(puVar27 + 5) = uStack_40;
        *(int32_t *)((longlong)puVar27 + 0x2c) = uStack_3c;
        puVar27[6] = uVar17;
        puVar27[7] = uVar18;
      }
      else {
        puVar24 = (uint64_t *)*puVar2;
        lVar29 = (longlong)puVar27 - (longlong)puVar24 >> 6;
        if (lVar29 == 0) {
          lVar29 = 1;
LAB_180338b93:
          puVar21 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar29 << 6,(char)param_1[0x2d]);
          puVar24 = (uint64_t *)*puVar2;
          puVar27 = (uint64_t *)param_1[0x2b];
        }
        else {
          lVar29 = lVar29 * 2;
          if (lVar29 != 0) goto LAB_180338b93;
          puVar21 = (uint64_t *)0x0;
        }
        if (puVar24 != puVar27) {
                    // WARNING: Subroutine does not return
          memmove(puVar21,puVar24,(longlong)puVar27 - (longlong)puVar24);
        }
        *puVar21 = uVar11;
        puVar21[1] = uVar12;
        puVar21[2] = uVar13;
        puVar21[3] = uVar14;
        *(int32_t *)(puVar21 + 4) = uStack_48;
        *(int32_t *)((longlong)puVar21 + 0x24) = uStack_44;
        *(int32_t *)(puVar21 + 5) = uStack_40;
        *(int32_t *)((longlong)puVar21 + 0x2c) = uStack_3c;
        *(int32_t *)(puVar21 + 6) = uVar5;
        *(int32_t *)((longlong)puVar21 + 0x34) = uVar8;
        *(int32_t *)(puVar21 + 7) = uVar9;
        *(int32_t *)((longlong)puVar21 + 0x3c) = uVar10;
        if (*puVar2 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *puVar2 = (ulonglong)puVar21;
        param_1[0x2c] = (longlong)(puVar21 + lVar29 * 8);
        param_1[0x2b] = (longlong)(puVar21 + 8);
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 < *(uint *)((longlong)param_1 + 0x74));
  }
  *(int32_t *)(param_1 + 0xf) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  lVar29 = param_1[0x2e];
  uVar32 = (ulonglong)*(uint *)(param_1 + 0xf);
  if ((ulonglong)(param_1[0x30] - lVar29) < uVar32) {
    if (uVar32 == 0) {
      lVar23 = 0;
    }
    else {
      lVar23 = FUN_18062b420(_DAT_180c8ed18,uVar32,(char)param_1[0x31]);
      lVar29 = param_1[0x2e];
    }
    if (lVar29 != param_1[0x2f]) {
                    // WARNING: Subroutine does not return
      memmove(lVar23,lVar29,param_1[0x2f] - lVar29);
    }
    if (lVar29 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_1[0x2e] = lVar23;
    param_1[0x30] = lVar23 + uVar32;
    param_1[0x2f] = lVar23;
  }
  uVar31 = 0;
  if ((int)param_1[0xf] != 0) {
    do {
      uVar4 = **(int8_t **)(param_2 + 8);
      *(int8_t **)(param_2 + 8) = *(int8_t **)(param_2 + 8) + 1;
      puVar28 = (int8_t *)param_1[0x2f];
      if (puVar28 < (int8_t *)param_1[0x30]) {
        param_1[0x2f] = (longlong)(puVar28 + 1);
        *puVar28 = uVar4;
      }
      else {
        puVar25 = (int8_t *)param_1[0x2e];
        if ((longlong)puVar28 - (longlong)puVar25 == 0) {
          lVar29 = 1;
LAB_180338d21:
          puVar22 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,lVar29,(char)param_1[0x31]);
          puVar25 = (int8_t *)param_1[0x2e];
          puVar28 = (int8_t *)param_1[0x2f];
        }
        else {
          lVar29 = ((longlong)puVar28 - (longlong)puVar25) * 2;
          if (lVar29 != 0) goto LAB_180338d21;
          puVar22 = (int8_t *)0x0;
        }
        if (puVar25 != puVar28) {
                    // WARNING: Subroutine does not return
          memmove(puVar22,puVar25,(longlong)puVar28 - (longlong)puVar25);
        }
        *puVar22 = uVar4;
        if (param_1[0x2e] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        param_1[0x2e] = (longlong)puVar22;
        param_1[0x30] = (longlong)(puVar22 + lVar29);
        param_1[0x2f] = (longlong)(puVar22 + 1);
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 < *(uint *)(param_1 + 0xf));
  }
  *(int32_t *)((longlong)param_1 + 0x6c) = **(int32_t **)(param_2 + 8);
  lVar29 = *(longlong *)(param_2 + 8);
  puVar26 = (uint *)(lVar29 + 4);
  *(uint **)(param_2 + 8) = puVar26;
  uVar31 = *puVar26;
  puVar19 = (int32_t *)(lVar29 + 8);
  *(int32_t **)(param_2 + 8) = puVar19;
  if (uVar31 != 0) {
    (**(code **)(param_1[0x22] + 0x18))(param_1 + 0x22,puVar19,uVar31);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar31;
    puVar19 = *(int32_t **)(param_2 + 8);
  }
  *(int32_t *)(param_1 + 0xe) = *puVar19;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  return;
}





// 函数: void FUN_180338e10(longlong param_1,longlong *param_2)
void FUN_180338e10(longlong param_1,longlong *param_2)

{
  int8_t uVar1;
  int32_t uVar2;
  int8_t *puVar3;
  int32_t *puVar4;
  
  FUN_1803377b0();
  puVar4 = (int32_t *)param_2[1];
  uVar2 = *(int32_t *)(param_1 + 8);
  if ((ulonglong)((param_2[2] - (longlong)puVar4) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar2;
  param_2[1] = param_2[1] + 4;
  FUN_180639ec0(param_2,param_1 + 0xb0);
  FUN_180639ec0(param_2,param_1 + 0x108);
  FUN_180639ec0(param_2,param_1 + 0x160);
  puVar4 = (int32_t *)param_2[1];
  uVar2 = *(int32_t *)(param_1 + 0x1b8);
  if ((ulonglong)((param_2[2] - (longlong)puVar4) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar2;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  uVar2 = *(int32_t *)(param_1 + 0x1bc);
  if ((ulonglong)((param_2[2] - (longlong)puVar4) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar2;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  uVar2 = *(int32_t *)(param_1 + 0x1c0);
  if ((ulonglong)((param_2[2] - (longlong)puVar4) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar2;
  param_2[1] = param_2[1] + 4;
  puVar3 = (int8_t *)param_2[1];
  uVar1 = *(int8_t *)(param_1 + 0x1c4);
  if ((ulonglong)((param_2[2] - (longlong)puVar3) + *param_2) < 2) {
    FUN_180639bf0(param_2,puVar3 + (1 - *param_2));
    *(int8_t *)param_2[1] = uVar1;
  }
  else {
    *puVar3 = uVar1;
  }
  param_2[1] = param_2[1] + 1;
  return;
}





// 函数: void FUN_180338f90(longlong param_1,longlong param_2)
void FUN_180338f90(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  
  FUN_180337990();
  *(int32_t *)(param_1 + 8) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  uVar1 = **(uint **)(param_2 + 8);
  puVar2 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar2;
  if (uVar1 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xb0) + 0x18))((longlong *)(param_1 + 0xb0),puVar2,uVar1);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
    puVar2 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar2;
  puVar2 = puVar2 + 1;
  *(uint **)(param_2 + 8) = puVar2;
  if (uVar1 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x108) + 0x18))((longlong *)(param_1 + 0x108),puVar2,uVar1)
    ;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
    puVar2 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar2;
  puVar2 = puVar2 + 1;
  *(uint **)(param_2 + 8) = puVar2;
  if (uVar1 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x160) + 0x18))((longlong *)(param_1 + 0x160),puVar2,uVar1)
    ;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
    puVar2 = *(uint **)(param_2 + 8);
  }
  *(uint *)(param_1 + 0x1b8) = *puVar2;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0x1bc) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0x1c0) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int8_t *)(param_1 + 0x1c4) = **(int8_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
  return;
}





// 函数: void FUN_180339080(longlong param_1)
void FUN_180339080(longlong param_1)

{
  *(int32_t *)(param_1 + 0x8c) = 8;
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  FUN_180284720(param_1 + 0x90);
  *(int32_t *)(param_1 + 0xc0) = 0;
  **(int8_t **)(param_1 + 0xb8) = 0;
  *(int32_t *)(param_1 + 0x118) = 0;
  **(int8_t **)(param_1 + 0x110) = 0;
  *(int32_t *)(param_1 + 0x170) = 0;
  **(int8_t **)(param_1 + 0x168) = 0;
  *(int32_t *)(param_1 + 0x8c) = 0;
  *(int8_t *)(param_1 + 0x1c4) = 0;
  *(int32_t *)(param_1 + 0x1bc) = 0xffffffff;
  *(int32_t *)(param_1 + 0x1c0) = 0;
  *(int32_t *)(param_1 + 0x1b8) = 0;
  return;
}



uint64_t * FUN_180339110(uint64_t *param_1)

{
  FUN_180320470();
  *param_1 = &UNK_180a1b430;
  param_1[0x16] = &UNK_18098bcb0;
  param_1[0x17] = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  param_1[0x16] = &UNK_1809fcc58;
  param_1[0x17] = param_1 + 0x19;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(int8_t *)(param_1 + 0x19) = 0;
  param_1[0x21] = &UNK_18098bcb0;
  param_1[0x22] = 0;
  *(int32_t *)(param_1 + 0x23) = 0;
  param_1[0x21] = &UNK_1809fcc58;
  param_1[0x22] = param_1 + 0x24;
  *(int32_t *)(param_1 + 0x23) = 0;
  *(int8_t *)(param_1 + 0x24) = 0;
  param_1[0x2c] = &UNK_18098bcb0;
  param_1[0x2d] = 0;
  *(int32_t *)(param_1 + 0x2e) = 0;
  param_1[0x2c] = &UNK_1809fcc58;
  param_1[0x2d] = param_1 + 0x2f;
  *(int32_t *)(param_1 + 0x2e) = 0;
  *(int8_t *)(param_1 + 0x2f) = 0;
  FUN_180339080(param_1);
  return param_1;
}



bool FUN_1803391e0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  
  cVar3 = func_0x000180274d30(param_1 + 0x58,param_2 + 0x58);
  if (cVar3 == '\0') {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  }
  fVar13 = 0.0001;
  cVar4 = func_0x000180285f10(param_1 + 0x18,param_2 + 0x18);
  if (cVar4 == '\0') {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  }
  bVar11 = *(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14);
  if (bVar11) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  }
  bVar11 = bVar11 || (cVar4 == '\0' || cVar3 == '\0');
  iVar8 = *(int *)(param_1 + 0x170);
  iVar7 = *(int *)(param_2 + 0x170);
  if (iVar8 == iVar7) {
    if (iVar8 != 0) {
      pbVar5 = *(byte **)(param_1 + 0x168);
      lVar9 = *(longlong *)(param_2 + 0x168) - (longlong)pbVar5;
      do {
        pbVar1 = pbVar5 + lVar9;
        iVar7 = (uint)*pbVar5 - (uint)*pbVar1;
        if (iVar7 != 0) break;
        pbVar5 = pbVar5 + 1;
      } while (*pbVar1 != 0);
    }
LAB_18033928d:
    if (iVar7 == 0) goto LAB_180339296;
  }
  else if (iVar8 == 0) goto LAB_18033928d;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
  bVar11 = true;
LAB_180339296:
  fVar12 = *(float *)(param_1 + 0x1b8) - *(float *)(param_2 + 0x1b8);
  if ((fVar12 <= -0.0001) || (fVar13 <= fVar12)) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
    bVar11 = true;
  }
  lVar9 = *(longlong *)(param_1 + 0x90);
  lVar6 = *(longlong *)(param_1 + 0x98) - lVar9;
  lVar2 = lVar6 >> 0x3f;
  lVar6 = lVar6 / 0x1a0 + lVar2;
  if (lVar6 - lVar2 == (*(longlong *)(param_2 + 0x98) - *(longlong *)(param_2 + 0x90)) / 0x1a0) {
    iVar8 = 0;
    if (lVar6 != lVar2) {
      uVar10 = 0;
      do {
        cVar3 = FUN_180327250(uVar10 * 0x1a0 + lVar9,*(longlong *)(param_2 + 0x90) + uVar10 * 0x1a0)
        ;
        if (cVar3 != '\0') {
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
          bVar11 = true;
        }
        lVar9 = *(longlong *)(param_1 + 0x90);
        iVar8 = iVar8 + 1;
        uVar10 = (ulonglong)iVar8;
      } while (uVar10 < (ulonglong)((*(longlong *)(param_1 + 0x98) - lVar9) / 0x1a0));
    }
  }
  else {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  }
  return bVar11;
}



int8_t FUN_18033931a(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  longlong unaff_RBX;
  int iVar3;
  longlong unaff_RSI;
  int8_t unaff_DIL;
  ulonglong uVar4;
  longlong unaff_R14;
  
  iVar3 = 0;
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      cVar1 = FUN_180327250(uVar4 * 0x1a0 + param_4,*(longlong *)(unaff_RSI + 0x90) + uVar4 * 0x1a0)
      ;
      if (cVar1 != '\0') {
        *(uint *)(unaff_RBX + 0x10) = *(uint *)(unaff_RBX + 0x10) | 8;
        unaff_DIL = 1;
      }
      param_4 = *(longlong *)(unaff_RBX + 0x90);
      iVar3 = iVar3 + 1;
      uVar4 = (ulonglong)iVar3;
      lVar2 = SUB168(SEXT816(unaff_R14) * SEXT816(*(longlong *)(unaff_RBX + 0x98) - param_4),8);
    } while (uVar4 < (ulonglong)((lVar2 >> 7) - (lVar2 >> 0x3f)));
  }
  return unaff_DIL;
}



int8_t FUN_180339388(void)

{
  int8_t unaff_DIL;
  
  return unaff_DIL;
}





// 函数: void FUN_1803393b0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803393b0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong uVar1;
  int32_t uVar2;
  uint uVar3;
  longlong lVar4;
  int32_t *puVar5;
  uint *puVar6;
  void *puVar7;
  uint64_t unaff_RDI;
  
  FUN_1803377b0();
  puVar5 = (int32_t *)param_2[1];
  uVar2 = *(int32_t *)(param_1 + 0xb0);
  if ((ulonglong)((param_2[2] - (longlong)puVar5) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar2;
  param_2[1] = param_2[1] + 4;
  puVar5 = (int32_t *)param_2[1];
  uVar2 = *(int32_t *)(param_1 + 0xb4);
  if ((ulonglong)((param_2[2] - (longlong)puVar5) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar2;
  param_2[1] = param_2[1] + 4;
  puVar5 = (int32_t *)param_2[1];
  uVar2 = *(int32_t *)(param_1 + 0xb8);
  if ((ulonglong)((param_2[2] - (longlong)puVar5) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar2;
  param_2[1] = param_2[1] + 4;
  puVar5 = (int32_t *)param_2[1];
  uVar2 = *(int32_t *)(param_1 + 0xbc);
  if ((ulonglong)((param_2[2] - (longlong)puVar5) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar2;
  param_2[1] = param_2[1] + 4;
  puVar5 = (int32_t *)param_2[1];
  uVar2 = *(int32_t *)(param_1 + 0xc0);
  if ((ulonglong)((param_2[2] - (longlong)puVar5) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar2;
  param_2[1] = param_2[1] + 4;
  puVar5 = (int32_t *)param_2[1];
  uVar2 = *(int32_t *)(param_1 + 0xc4);
  if ((ulonglong)((param_2[2] - (longlong)puVar5) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar2;
  param_2[1] = param_2[1] + 4;
  puVar5 = (int32_t *)param_2[1];
  uVar2 = *(int32_t *)(param_1 + 200);
  if ((ulonglong)((param_2[2] - (longlong)puVar5) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar2;
  param_2[1] = param_2[1] + 4;
  puVar5 = (int32_t *)param_2[1];
  uVar2 = *(int32_t *)(param_1 + 0xcc);
  if ((ulonglong)((param_2[2] - (longlong)puVar5) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar2;
  param_2[1] = param_2[1] + 4;
  puVar5 = (int32_t *)param_2[1];
  uVar2 = *(int32_t *)(param_1 + 0xd0);
  if ((ulonglong)((param_2[2] - (longlong)puVar5) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar2;
  param_2[1] = param_2[1] + 4;
  puVar5 = (int32_t *)param_2[1];
  uVar2 = *(int32_t *)(param_1 + 0xd4);
  if ((ulonglong)((param_2[2] - (longlong)puVar5) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar2;
  param_2[1] = param_2[1] + 4;
  FUN_180639fd0(param_2,param_1 + 0xd8);
  FUN_180639fd0(param_2,param_1 + 0xe8);
  FUN_180639ec0(param_2,param_1 + 0xf8);
  FUN_180639ec0(param_2,param_1 + 0x150);
  uVar3 = *(uint *)(param_1 + 0x1b8);
  puVar6 = (uint *)param_2[1];
  uVar1 = (ulonglong)uVar3 + 4;
  lVar4 = *param_2;
  if ((ulonglong)((param_2[2] - (longlong)puVar6) + lVar4) <= uVar1) {
    FUN_180639bf0(param_2,(longlong)puVar6 + (uVar1 - lVar4),lVar4,param_4,unaff_RDI);
    puVar6 = (uint *)param_2[1];
  }
  *puVar6 = uVar3;
  lVar4 = param_2[1];
  param_2[1] = lVar4 + 4;
  puVar7 = &DAT_18098bc73;
  if (*(void **)(param_1 + 0x1b0) != (void *)0x0) {
    puVar7 = *(void **)(param_1 + 0x1b0);
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar4 + 4,puVar7,(ulonglong)uVar3);
}





// 函数: void FUN_180339680(longlong param_1,longlong param_2)
void FUN_180339680(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  
  FUN_180337990();
  *(int32_t *)(param_1 + 0xb0) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xb4) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xb8) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xbc) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xc0) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xc4) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 200) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xcc) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xd0) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xd4) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xd8) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xdc) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xe0) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xe4) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xe8) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xec) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xf0) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xf4) = **(int32_t **)(param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 8);
  puVar3 = (uint *)(lVar2 + 4);
  *(uint **)(param_2 + 8) = puVar3;
  uVar1 = *puVar3;
  puVar3 = (uint *)(lVar2 + 8);
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xf8) + 0x18))((longlong *)(param_1 + 0xf8),puVar3,uVar1);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  puVar3 = puVar3 + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x150) + 0x18))((longlong *)(param_1 + 0x150),puVar3,uVar1)
    ;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  *(uint **)(param_2 + 8) = puVar3 + 1;
  if (uVar1 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x1a8) + 0x18))
              ((longlong *)(param_1 + 0x1a8),puVar3 + 1,uVar1);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
  }
  return;
}





