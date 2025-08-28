#include "TaleWorlds.Native.Split.h"

// 03_rendering_part123.c - 3 个函数

// 函数: void FUN_18033eb00(undefined8 param_1,longlong param_2,longlong param_3)
void FUN_18033eb00(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined *puVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  int *piVar16;
  undefined1 auStack_a8 [32];
  undefined *puStack_88;
  undefined *puStack_80;
  uint uStack_78;
  ulonglong uStack_70;
  uint uStack_64;
  longlong lStack_60;
  undefined8 uStack_58;
  char acStack_50 [16];
  ulonglong uStack_40;
  
  uStack_58 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  uStack_64 = 1;
  if (*(int *)(param_3 + 0x408) == 0) {
    uStack_64 = (uint)(*(int *)(param_3 + 0x1a8) != 0);
  }
  iVar9 = *(int *)(param_2 + 0x10);
  iVar8 = iVar9 + 0x25;
  lStack_60 = param_3;
  FUN_1806277c0(param_2,iVar8);
  puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar1 = 0x41572f2f;
  puVar1[1] = 0x4e494e52;
  puVar1[2] = 0x203a2047;
  puVar1[3] = 0x73696854;
  puVar1[4] = 0x20736920;
  puVar1[5] = 0x65672061;
  puVar1[6] = 0x6172656e;
  puVar1[7] = 0x20646574;
  puVar1[8] = 0x656c6966;
  *(undefined2 *)(puVar1 + 9) = 10;
  *(int *)(param_2 + 0x10) = iVar8;
  iVar9 = iVar9 + 0x4b;
  FUN_1806277c0(param_2,iVar9);
  puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar1 = 0x41572f2f;
  puVar1[1] = 0x4e494e52;
  puVar1[2] = 0x203a2047;
  puVar1[3] = 0x6e206f44;
  *(undefined8 *)(puVar1 + 4) = 0x676e61686320746f;
  *(undefined8 *)(puVar1 + 6) = 0x6620736968742065;
  puVar1[8] = 0x2e656c69;
  *(undefined2 *)(puVar1 + 9) = 0xa0a;
  *(undefined1 *)((longlong)puVar1 + 0x26) = 0;
  *(int *)(param_2 + 0x10) = iVar9;
  uVar5 = 0;
  piVar16 = (int *)(param_3 + 0x4c0);
  lVar14 = -1;
  lVar13 = -1;
  uVar6 = uVar5;
  do {
    if (*piVar16 != 0) {
      iVar9 = *(int *)(param_2 + 0x10);
      iVar8 = iVar9 + 8;
      FUN_1806277c0(param_2,iVar8);
      puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
      *puVar2 = 0x20656e6966656423;
      *(undefined1 *)(puVar2 + 1) = 0;
      *(int *)(param_2 + 0x10) = iVar8;
      if (0 < *piVar16) {
        FUN_1806277c0(param_2,iVar8 + *piVar16);
                    // WARNING: Subroutine does not return
        memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
               *(undefined8 *)(piVar16 + -2),(longlong)(*piVar16 + 1));
      }
      FUN_1806277c0(param_2,iVar9 + 9);
      *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
      *(int *)(param_2 + 0x10) = iVar9 + 9;
      FUN_1806277c0(param_2,iVar9 + 0x10);
      *(undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
           0x65727574786574;
      *(int *)(param_2 + 0x10) = iVar9 + 0x10;
      puStack_88 = &UNK_180a3c3e0;
      uStack_70 = 0;
      puStack_80 = (undefined *)0x0;
      uStack_78 = 0;
      FUN_180060680(acStack_50,&UNK_1809fd0a0,uVar6);
      lVar11 = lVar14;
      do {
        lVar7 = lVar11;
        lVar11 = lVar7 + 1;
      } while (acStack_50[lVar7 + 1] != '\0');
      iVar9 = (int)(lVar7 + 1);
      if (0 < iVar9) {
        FUN_1806277c0(&puStack_88,uStack_78 + iVar9);
                    // WARNING: Subroutine does not return
        memcpy(puStack_80 + uStack_78,acStack_50,(longlong)((int)lVar7 + 2));
      }
      lVar11 = lVar14;
      puVar12 = &DAT_18098bc73;
      if (puStack_80 != (undefined *)0x0) {
        puVar12 = puStack_80;
      }
      do {
        lVar7 = lVar11;
        lVar11 = lVar7 + 1;
      } while (puVar12[lVar11] != '\0');
      if (0 < (int)lVar11) {
        FUN_1806277c0(param_2,*(int *)(param_2 + 0x10) + (int)lVar11);
                    // WARNING: Subroutine does not return
        memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),puVar12,
               (longlong)((int)lVar7 + 2));
      }
      iVar9 = *(int *)(param_2 + 0x10) + 1;
      FUN_1806277c0(param_2,iVar9);
      *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 10;
      *(int *)(param_2 + 0x10) = iVar9;
      puStack_88 = &UNK_180a3c3e0;
      if (puStack_80 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_80 = (undefined *)0x0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      puStack_88 = &UNK_18098bcb0;
    }
    uVar15 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar15;
    piVar16 = piVar16 + 0x16;
  } while ((int)uVar15 < 0x10);
  iVar9 = *(int *)(param_2 + 0x10) + 1;
  FUN_1806277c0(param_2,iVar9);
  lVar7 = lStack_60;
  *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 10;
  *(int *)(param_2 + 0x10) = iVar9;
  lVar3 = *(longlong *)(lStack_60 + 0x180) - *(longlong *)(lStack_60 + 0x178);
  lVar11 = lVar3 >> 0x3f;
  uVar6 = uVar5;
  if (lVar3 / 0x98 + lVar11 != lVar11) {
    do {
      iVar10 = iVar9 + 8;
      FUN_1806277c0(param_2,iVar10);
      puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
      *puVar2 = 0x20656e6966656423;
      *(undefined1 *)(puVar2 + 1) = 0;
      *(int *)(param_2 + 0x10) = iVar10;
      lVar11 = *(longlong *)(lVar7 + 0x178);
      iVar8 = *(int *)(lVar11 + 0x10 + uVar6);
      if (0 < iVar8) {
        FUN_1806277c0(param_2,iVar10 + iVar8);
                    // WARNING: Subroutine does not return
        memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
               *(undefined8 *)(lVar11 + 8 + uVar6),(longlong)(*(int *)(lVar11 + 0x10 + uVar6) + 1));
      }
      iVar9 = iVar9 + 9;
      FUN_1806277c0(param_2,iVar9);
      *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 10;
      *(int *)(param_2 + 0x10) = iVar9;
      uVar15 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar15;
      uVar6 = uVar6 + 0x98;
    } while ((ulonglong)(longlong)(int)uVar15 <
             (ulonglong)((*(longlong *)(lVar7 + 0x180) - *(longlong *)(lVar7 + 0x178)) / 0x98));
  }
  uVar6 = 0;
  if ((char)uStack_64 != '\0') {
    iVar9 = iVar9 + 0x15;
    FUN_1806277c0(param_2,iVar9);
    puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar1 = 0x66656423;
    puVar1[1] = 0x20656e69;
    puVar1[2] = 0x5f534148;
    puVar1[3] = 0x49444f4d;
    puVar1[4] = 0x52454946;
    *(undefined2 *)(puVar1 + 5) = 10;
    *(int *)(param_2 + 0x10) = iVar9;
  }
  iVar8 = iVar9 + 0x22;
  FUN_1806277c0(param_2,iVar8);
  puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar1 = 0x66656423;
  puVar1[1] = 0x20656e69;
  puVar1[2] = 0x74726556;
  puVar1[3] = 0x735f7865;
  puVar1[4] = 0x65646168;
  puVar1[5] = 0x756f5f72;
  puVar1[6] = 0x74757074;
  puVar1[7] = 0x7079745f;
  *(undefined2 *)(puVar1 + 8) = 0x2065;
  *(undefined1 *)((longlong)puVar1 + 0x22) = 0;
  *(int *)(param_2 + 0x10) = iVar8;
  if (0 < *(int *)(lVar7 + 0x50)) {
    FUN_1806277c0(param_2,iVar8 + *(int *)(lVar7 + 0x50));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
           *(undefined8 *)(lVar7 + 0x48),(longlong)(*(int *)(lVar7 + 0x50) + 1));
  }
  FUN_1806277c0(param_2,iVar9 + 0x24);
  puVar4 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar4 = 0xa0a;
  *(undefined1 *)(puVar4 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar9 + 0x24;
  FUN_1803437e0(puVar4,param_2,lVar7);
  iVar9 = *(int *)(param_2 + 0x10) + 0x17;
  FUN_1806277c0(param_2,iVar9);
  puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar1 = 0x66656423;
  puVar1[1] = 0x20656e69;
  puVar1[2] = 0x6d5f796d;
  puVar1[3] = 0x72657461;
  *(undefined8 *)(puVar1 + 4) = 0x2064695f6c6169;
  *(int *)(param_2 + 0x10) = iVar9;
  switch(*(undefined4 *)(lVar7 + 0xdc)) {
  case 1:
    puVar12 = &UNK_180a1bff8;
    lVar14 = lVar13;
    break;
  case 2:
    puVar12 = &UNK_180a1bfe0;
    lVar14 = lVar13;
    break;
  case 3:
    puVar12 = &UNK_180a1bfc8;
    lVar14 = lVar13;
    break;
  case 4:
    puVar12 = &UNK_180a1bfb0;
    lVar14 = lVar13;
    break;
  case 5:
    puVar12 = &UNK_180a1c078;
    lVar14 = lVar13;
    break;
  case 6:
    puVar12 = &UNK_180a1c060;
    lVar14 = lVar13;
    break;
  case 7:
    puVar12 = &UNK_180a1c040;
    lVar14 = lVar13;
    break;
  case 8:
    puVar12 = &UNK_180a1c0e0;
    lVar14 = lVar13;
    break;
  case 9:
    puVar12 = &UNK_180a1c010;
    lVar14 = lVar13;
    break;
  case 10:
    puVar12 = &UNK_180a1c0b0;
    break;
  case 0xb:
    puVar12 = &UNK_180a1c090;
    break;
  case 0xc:
    puVar12 = &UNK_180a1c0c8;
    break;
  default:
    FUN_180627020(&UNK_180a1c0f8);
    iVar9 = *(int *)(param_2 + 0x10);
    goto code_r0x00018033f10d;
  }
  do {
    lVar13 = lVar14;
    lVar14 = lVar13 + 1;
  } while (puVar12[lVar14] != '\0');
  if (0 < (int)lVar14) {
    FUN_1806277c0(param_2,iVar9 + (int)lVar14);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),puVar12,
           (longlong)((int)lVar13 + 2));
  }
code_r0x00018033f10d:
  FUN_1806277c0(param_2,iVar9 + 2);
  puVar4 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar4 = 0xa0a;
  *(undefined1 *)(puVar4 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar9 + 2;
  iVar8 = iVar9 + 0x29;
  FUN_1806277c0(param_2,iVar8);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x20656e6966656423;
  puVar2[1] = 0x657869705f726550;
  *(undefined4 *)(puVar2 + 2) = 0x6f6d5f6c;
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0x69666964;
  *(undefined4 *)(puVar2 + 3) = 0x656c6261;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x7261765f;
  puVar2[4] = 0x2073656c626169;
  *(int *)(param_2 + 0x10) = iVar8;
  if (0 < *(int *)(lVar7 + 0xf98)) {
    FUN_1806277c0(param_2,iVar8 + *(int *)(lVar7 + 0xf98));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
           *(undefined8 *)(lVar7 + 0xf90),(longlong)(*(int *)(lVar7 + 0xf98) + 1));
  }
  FUN_1806277c0(param_2,iVar9 + 0x2b);
  puVar4 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar4 = 0xa0a;
  *(undefined1 *)(puVar4 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar9 + 0x2b;
  iVar8 = iVar9 + 0x51;
  FUN_1806277c0(param_2,iVar8);
  puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar1 = 0x66656423;
  puVar1[1] = 0x20656e69;
  puVar1[2] = 0x5f726550;
  puVar1[3] = 0x65786970;
  puVar1[4] = 0x75615f6c;
  puVar1[5] = 0x696c6978;
  puVar1[6] = 0x5f797261;
  puVar1[7] = 0x69726176;
  puVar1[8] = 0x656c6261;
  *(undefined2 *)(puVar1 + 9) = 0x2073;
  *(undefined1 *)((longlong)puVar1 + 0x26) = 0;
  *(int *)(param_2 + 0x10) = iVar8;
  if (*(int *)(lVar7 + 0x1030) < 1) {
    FUN_1806277c0(param_2,iVar9 + 0x53);
    puVar4 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar4 = 0xa0a;
    *(undefined1 *)(puVar4 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar9 + 0x53;
    FUN_1806277c0(param_2,iVar9 + 0x79);
    puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar1 = 0x636e6923;
    puVar1[1] = 0x6564756c;
    puVar1[2] = 0x2e2e2220;
    puVar1[3] = 0x6168732f;
    puVar1[4] = 0x5f726564;
    puVar1[5] = 0x666e6f63;
    puVar1[6] = 0x72756769;
    puVar1[7] = 0x6f697461;
    puVar1[8] = 0x22682e6e;
    *(undefined2 *)(puVar1 + 9) = 0xa20;
    *(undefined1 *)((longlong)puVar1 + 0x26) = 0;
    *(int *)(param_2 + 0x10) = iVar9 + 0x79;
    FUN_1806277c0(param_2,iVar9 + 0x95);
    puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar1 = 0x636e6923;
    puVar1[1] = 0x6564756c;
    puVar1[2] = 0x65642220;
    puVar1[3] = 0x696e6966;
    *(undefined8 *)(puVar1 + 4) = 0x73722e736e6f6974;
    puVar1[6] = 0xa202268;
    *(undefined1 *)(puVar1 + 7) = 0;
    *(int *)(param_2 + 0x10) = iVar9 + 0x95;
    FUN_1806277c0(param_2,iVar9 + 0xc0);
    puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar2 = 0x6564756c636e6923;
    puVar2[1] = 0x616c75646f6d2220;
    *(undefined4 *)(puVar2 + 2) = 0x74735f72;
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0x74637572;
    *(undefined4 *)(puVar2 + 3) = 0x6665645f;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x74696e69;
    puVar2[4] = 0x6873722e736e6f69;
    *(undefined4 *)(puVar2 + 5) = 0xa2022;
    *(int *)(param_2 + 0x10) = iVar9 + 0xc0;
    FUN_1806277c0(param_2,iVar9 + 0xe1);
    puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar1 = 0x636e6923;
    puVar1[1] = 0x6564756c;
    puVar1[2] = 0x68732220;
    puVar1[3] = 0x64657261;
    puVar1[4] = 0x6e75665f;
    puVar1[5] = 0x6f697463;
    puVar1[6] = 0x722e736e;
    puVar1[7] = 0x20226873;
    *(undefined2 *)(puVar1 + 8) = 10;
    *(int *)(param_2 + 0x10) = iVar9 + 0xe1;
    FUN_1806277c0(param_2,iVar9 + 0xff);
    puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar1 = 0x636e6923;
    puVar1[1] = 0x6564756c;
    puVar1[2] = 0x6f6d2220;
    puVar1[3] = 0x6e6f6974;
    *(undefined8 *)(puVar1 + 4) = 0x2e726f746365765f;
    puVar1[6] = 0x22687372;
    *(undefined2 *)(puVar1 + 7) = 0xa20;
    *(undefined1 *)((longlong)puVar1 + 0x1e) = 0;
    *(int *)(param_2 + 0x10) = iVar9 + 0xff;
    iVar9 = iVar9 + 0x126;
    FUN_1806277c0(param_2,iVar9);
    puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar2 = 0x6564756c636e6923;
    puVar2[1] = 0x6172656e65672220;
    puVar2[2] = 0x696665645f646574;
    puVar2[3] = 0x2e736e6f6974696e;
    puVar2[4] = 0xa0a2022687372;
    *(int *)(param_2 + 0x10) = iVar9;
    uVar5 = uVar6;
    if ((*(longlong *)(lVar7 + 0x28) - *(longlong *)(lVar7 + 0x20)) / 0x98 != 0) {
      do {
        iVar10 = iVar9 + 10;
        FUN_1806277c0(param_2,iVar10);
        puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
        *puVar2 = 0x6564756c636e6923;
        *(undefined2 *)(puVar2 + 1) = 0x2220;
        *(undefined1 *)((longlong)puVar2 + 10) = 0;
        *(int *)(param_2 + 0x10) = iVar10;
        lVar14 = *(longlong *)(lVar7 + 0x20);
        iVar8 = *(int *)(lVar14 + 0x10 + uVar5);
        if (0 < iVar8) {
          FUN_1806277c0(param_2,iVar10 + iVar8);
                    // WARNING: Subroutine does not return
          memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
                 *(undefined8 *)(lVar14 + 8 + uVar5),(longlong)(*(int *)(lVar14 + 0x10 + uVar5) + 1)
                );
        }
        iVar9 = iVar9 + 0xe;
        FUN_1806277c0(param_2,iVar9);
        puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
        *puVar1 = 0xa0a2022;
        *(undefined1 *)(puVar1 + 1) = 0;
        *(int *)(param_2 + 0x10) = iVar9;
        uVar15 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar15;
        uVar5 = uVar5 + 0x98;
      } while ((ulonglong)(longlong)(int)uVar15 <
               (ulonglong)((*(longlong *)(lVar7 + 0x28) - *(longlong *)(lVar7 + 0x20)) / 0x98));
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_a8);
  }
  FUN_1806277c0(param_2,iVar8 + *(int *)(lVar7 + 0x1030));
                    // WARNING: Subroutine does not return
  memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
         *(undefined8 *)(lVar7 + 0x1028),(longlong)(*(int *)(lVar7 + 0x1030) + 1));
}





// 函数: void FUN_18033f560(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)
void FUN_18033f560(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined *puVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined *puStack_30;
  longlong lStack_28;
  
  puVar4 = &UNK_180a1bab8;
  if (*(char *)(param_3 + 0xd8) != '\0') {
    puVar4 = &UNK_180a1bad8;
  }
  FUN_180627910(&puStack_30,puVar4,param_3,param_4,0xfffffffffffffffe);
  iVar8 = *(int *)(param_2 + 0x10);
  FUN_1806277c0(param_2,iVar8 + 0x12);
  puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar1 = 0x20666923;
  puVar1[1] = 0x54524556;
  puVar1[2] = 0x535f5845;
  puVar1[3] = 0x45444148;
  *(undefined2 *)(puVar1 + 4) = 0xa52;
  *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
  *(int *)(param_2 + 0x10) = iVar8 + 0x12;
  FUN_1806277c0(param_2,iVar8 + 0x45);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x735f786574726556;
  puVar2[1] = 0x756f5f7265646168;
  *(undefined4 *)(puVar2 + 2) = 0x74757074;
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0x7079745f;
  *(undefined4 *)(puVar2 + 3) = 0x616d2065;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x765f6e69;
  *(undefined4 *)(puVar2 + 4) = 0x47522873;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0x53565f4c;
  *(undefined4 *)(puVar2 + 5) = 0x504e495f;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x49205455;
  *(undefined4 *)(puVar2 + 6) = 0xa296e;
  *(int *)(param_2 + 0x10) = iVar8 + 0x45;
  FUN_1806277c0(param_2,iVar8 + 0x47);
  puVar3 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar3 = 0xa7b;
  *(undefined1 *)(puVar3 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar8 + 0x47;
  FUN_1806277c0(param_2,iVar8 + 0x7b);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x4c414954494e4909;
  puVar2[1] = 0x5054554f5f455a49;
  *(undefined4 *)(puVar2 + 2) = 0x56285455;
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0x65747265;
  *(undefined4 *)(puVar2 + 3) = 0x68735f78;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x72656461;
  *(undefined4 *)(puVar2 + 4) = 0x74756f5f;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0x5f747570;
  *(undefined4 *)(puVar2 + 5) = 0x65707974;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x754f202c;
  *(undefined4 *)(puVar2 + 6) = 0xa3b2974;
  *(undefined1 *)((longlong)puVar2 + 0x34) = 0;
  *(int *)(param_2 + 0x10) = iVar8 + 0x7b;
  FUN_1806277c0(param_2,iVar8 + 0xd1);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x7265765f72655009;
  puVar2[1] = 0x69646f6d5f786574;
  puVar2[2] = 0x765f656c62616966;
  puVar2[3] = 0x73656c6261697261;
  puVar2[4] = 0x69646f6d5f767020;
  puVar2[5] = 0x3d20656c62616966;
  *(undefined4 *)(puVar2 + 6) = 0x65502820;
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0x65765f72;
  *(undefined4 *)(puVar2 + 7) = 0x78657472;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x646f6d5f;
  *(undefined4 *)(puVar2 + 8) = 0x61696669;
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0x5f656c62;
  *(undefined4 *)(puVar2 + 9) = 0x69726176;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = 0x656c6261;
  *(undefined4 *)(puVar2 + 10) = 0x3b302973;
  *(undefined2 *)((longlong)puVar2 + 0x54) = 0xa0a;
  *(undefined1 *)((longlong)puVar2 + 0x56) = 0;
  *(int *)(param_2 + 0x10) = iVar8 + 0xd1;
  if (*(int *)(param_3 + 0x1a8) != 0) {
    iVar7 = iVar8 + 0xd2;
    FUN_1806277c0(param_2,iVar7);
    *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
    *(int *)(param_2 + 0x10) = iVar7;
    if (0 < *(int *)(param_3 + 0x1a8)) {
      FUN_1806277c0(param_2,iVar7 + *(int *)(param_3 + 0x1a8));
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
             *(undefined8 *)(param_3 + 0x1a0),(longlong)(*(int *)(param_3 + 0x1a8) + 1));
    }
    FUN_1806277c0(param_2,iVar8 + 0xd8);
    puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar1 = 0x296e4928;
    *(undefined2 *)(puVar1 + 1) = 0xa3b;
    *(undefined1 *)((longlong)puVar1 + 6) = 0;
    *(int *)(param_2 + 0x10) = iVar8 + 0xd8;
  }
  piVar6 = (int *)(param_3 + 0x240);
  lVar5 = 3;
  do {
    iVar8 = *(int *)(param_2 + 0x10);
    if (*piVar6 != 0) {
      iVar7 = iVar8 + 1;
      FUN_1806277c0(param_2,iVar7);
      *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
      *(int *)(param_2 + 0x10) = iVar7;
      if (0 < *piVar6) {
        FUN_1806277c0(param_2,iVar7 + *piVar6);
                    // WARNING: Subroutine does not return
        memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
               *(undefined8 *)(piVar6 + -2),(longlong)(*piVar6 + 1));
      }
      iVar8 = iVar8 + 0x1d;
      FUN_1806277c0(param_2,iVar8);
      puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
      *puVar1 = 0x206e4928;
      puVar1[1] = 0x7670202c;
      puVar1[2] = 0x646f6d5f;
      puVar1[3] = 0x61696669;
      *(undefined8 *)(puVar1 + 4) = 0x74754f202c656c62;
      puVar1[6] = 0xa3b2920;
      *(undefined1 *)(puVar1 + 7) = 0;
      *(int *)(param_2 + 0x10) = iVar8;
    }
    piVar6 = piVar6 + 0x26;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if (*(int *)(param_3 + 0x408) != 0) {
    iVar8 = *(int *)(param_2 + 0x10);
    iVar7 = iVar8 + 1;
    FUN_1806277c0(param_2,iVar7);
    *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
    *(int *)(param_2 + 0x10) = iVar7;
    if (0 < *(int *)(param_3 + 0x408)) {
      FUN_1806277c0(param_2,iVar7 + *(int *)(param_3 + 0x408));
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
             *(undefined8 *)(param_3 + 0x400),(longlong)(*(int *)(param_3 + 0x408) + 1));
    }
    iVar8 = iVar8 + 0x1c;
    FUN_1806277c0(param_2,iVar8);
    puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar1 = 0x206e4928;
    puVar1[1] = 0x7670202c;
    puVar1[2] = 0x646f6d5f;
    puVar1[3] = 0x61696669;
    *(undefined8 *)(puVar1 + 4) = 0x74754f202c656c62;
    puVar1[6] = 0xa3b29;
    *(int *)(param_2 + 0x10) = iVar8;
  }
  FUN_1806277c0(param_2,iVar8 + 0x21);
  puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar1 = 0x64666923;
  puVar1[1] = 0x53206665;
  puVar1[2] = 0x45545359;
  puVar1[3] = 0x48535f4d;
  puVar1[4] = 0x565f574f;
  puVar1[5] = 0x45545245;
  puVar1[6] = 0x4f435f58;
  puVar1[7] = 0x53524f4c;
  *(undefined2 *)(puVar1 + 8) = 10;
  *(int *)(param_2 + 0x10) = iVar8 + 0x21;
  FUN_1806277c0(param_2,iVar8 + 0x43);
  puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar1 = 0x5f737609;
  puVar1[1] = 0x7074756f;
  puVar1[2] = 0x765f7475;
  puVar1[3] = 0x65747265;
  puVar1[4] = 0x6f635f78;
  puVar1[5] = 0x28726f6c;
  puVar1[6] = 0x2c74754f;
  puVar1[7] = 0x296e4920;
  *(undefined2 *)(puVar1 + 8) = 0xa3b;
  *(undefined1 *)((longlong)puVar1 + 0x22) = 0;
  *(int *)(param_2 + 0x10) = iVar8 + 0x43;
  FUN_1806277c0(param_2,iVar8 + 0x4a);
  *(undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
       0xa6669646e6523;
  *(int *)(param_2 + 0x10) = iVar8 + 0x4a;
  FUN_1806277c0(param_2,iVar8 + 0x57);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x206e727574657209;
  *(undefined4 *)(puVar2 + 1) = 0x3b74754f;
  *(undefined2 *)((longlong)puVar2 + 0xc) = 10;
  *(int *)(param_2 + 0x10) = iVar8 + 0x57;
  FUN_1806277c0(param_2,iVar8 + 0x5a);
  *(undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0xa0a7d;
  *(int *)(param_2 + 0x10) = iVar8 + 0x5a;
  FUN_1806277c0(param_2,iVar8 + 0x61);
  *(undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
       0xa6669646e6523;
  *(int *)(param_2 + 0x10) = iVar8 + 0x61;
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18033fa60(undefined8 param_1,longlong param_2,undefined8 param_3)
void FUN_18033fa60(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined4 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  uint uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  int iStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 *puStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [16];
  ulonglong uStack_38;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  uStack_c8 = 0;
  FUN_18033dd20(param_1,&puStack_88);
  puStack_60 = &UNK_1809fdc18;
  puStack_58 = auStack_48;
  auStack_48[0] = 0;
  uStack_50 = 6;
  strcpy_s(auStack_48,0x10,&UNK_180a3c07c);
  uStack_c8 = 2;
  FUN_1806279c0(&puStack_c0,&puStack_60);
  uStack_c8 = 0;
  puStack_60 = &UNK_18098bcb0;
  uVar3 = uStack_b0 + 0x10;
  FUN_1806277c0(&puStack_c0,uVar3);
  puVar1 = (undefined4 *)(puStack_b8 + uStack_b0);
  *puVar1 = 0x64616853;
  puVar1[1] = 0x2f737265;
  puVar1[2] = 0x72756f53;
  puVar1[3] = 0x2f736563;
  *(undefined1 *)(puVar1 + 4) = 0;
  uStack_b0 = uVar3;
  FUN_180627be0(param_2,param_3);
  if (0 < *(int *)(param_2 + 0x10)) {
    FUN_1806277c0(&puStack_c0,uStack_b0 + *(int *)(param_2 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy(puStack_b8 + uStack_b0,*(undefined8 *)(param_2 + 8),
           (longlong)(*(int *)(param_2 + 0x10) + 1));
  }
  iVar4 = uStack_b0 + 3;
  FUN_1806277c0(&puStack_c0,iVar4);
  *(undefined4 *)(puStack_b8 + uStack_b0) = 0x73722e;
  uStack_a0 = 0;
  lStack_98 = 0;
  puVar2 = &DAT_18098bc73;
  if (puStack_b8 != (undefined *)0x0) {
    puVar2 = puStack_b8;
  }
  uStack_b0 = iVar4;
  FUN_18062dee0(&uStack_a0,puVar2,&DAT_1809fc7ec);
  lVar5 = lStack_98;
  puVar2 = &DAT_18098bc73;
  if (puStack_80 != (undefined *)0x0) {
    puVar2 = puStack_80;
  }
  fwrite(puVar2,(longlong)iStack_78,1,lStack_98);
  if (lVar5 != 0) {
    fclose(lVar5);
    lStack_98 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    fclose(lVar5);
    lStack_98 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  puStack_c0 = &UNK_180a3c3e0;
  if (puStack_b8 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_b8 = (undefined *)0x0;
  uStack_a8 = 0;
  puStack_c0 = &UNK_18098bcb0;
  puStack_88 = &UNK_180a3c3e0;
  if (puStack_80 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_80 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



