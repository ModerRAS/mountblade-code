#include "TaleWorlds.Native.Split.h"

// 99_part_03_part088.c - 4 个函数

// 函数: void FUN_18024bdd8(void)
void FUN_18024bdd8(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 extraout_XMM0_Da;
  undefined8 uStackX_20;
  
  *(undefined8 *)(unaff_RBX + 0x12c00) = uStackX_20;
  uVar11 = func_0x000180239f10(unaff_RBP + 0x78);
  uVar12 = func_0x000180239f10(unaff_RBP + -8);
  uVar11 = FUN_18024dde0(uVar11,&stack0x00000078,uVar12);
  puVar13 = (undefined8 *)func_0x000180645570(&stack0x00000038,uVar11);
  uVar11 = puVar13[1];
  *(undefined8 *)(unaff_RBX + 0x12a80) = *puVar13;
  *(undefined8 *)(unaff_RBX + 0x12a88) = uVar11;
  uVar11 = puVar13[3];
  *(undefined8 *)(unaff_RBX + 0x12a90) = puVar13[2];
  *(undefined8 *)(unaff_RBX + 0x12a98) = uVar11;
  uVar2 = *(undefined4 *)((longlong)puVar13 + 0x24);
  uVar3 = *(undefined4 *)(puVar13 + 5);
  uVar4 = *(undefined4 *)((longlong)puVar13 + 0x2c);
  *(undefined4 *)(unaff_RBX + 0x12aa0) = *(undefined4 *)(puVar13 + 4);
  *(undefined4 *)(unaff_RBX + 0x12aa4) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12aa8) = uVar3;
  *(undefined4 *)(unaff_RBX + 0x12aac) = uVar4;
  uVar2 = *(undefined4 *)((longlong)puVar13 + 0x34);
  uVar3 = *(undefined4 *)(puVar13 + 7);
  uVar4 = *(undefined4 *)((longlong)puVar13 + 0x3c);
  lVar1 = *(longlong *)(unaff_RBX + 0x3580);
  *(undefined4 *)(unaff_RBX + 0x12ab0) = *(undefined4 *)(puVar13 + 6);
  *(undefined4 *)(unaff_RBX + 0x12ab4) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12ab8) = uVar3;
  *(undefined4 *)(unaff_RBX + 0x12abc) = uVar4;
  if (((lVar1 != 0) && ((*(byte *)(unaff_RBX + 0x1bd9) & 2) == 0)) &&
     ((*(byte *)(unaff_RBX + 0x1bd8) & 0x20) != 0)) {
    uVar2 = *(undefined4 *)(unaff_RBX + 0x12ac4);
    uVar3 = *(undefined4 *)(unaff_RBX + 0x12ac8);
    uVar4 = *(undefined4 *)(unaff_RBX + 0x12acc);
    uVar5 = *(undefined4 *)(unaff_RBX + 0x12ad0);
    uVar6 = *(undefined4 *)(unaff_RBX + 0x12ad4);
    uVar7 = *(undefined4 *)(unaff_RBX + 0x12ad8);
    uVar8 = *(undefined4 *)(unaff_RBX + 0x12adc);
    uVar11 = *(undefined8 *)(unaff_RBX + 0x12ae0);
    uVar12 = *(undefined8 *)(unaff_RBX + 0x12ae8);
    uVar9 = *(undefined8 *)(unaff_RBX + 0x12af0);
    uVar10 = *(undefined8 *)(unaff_RBX + 0x12af8);
    *(undefined4 *)(lVar1 + 0x680) = *(undefined4 *)(unaff_RBX + 0x12ac0);
    *(undefined4 *)(lVar1 + 0x684) = uVar2;
    *(undefined4 *)(lVar1 + 0x688) = uVar3;
    *(undefined4 *)(lVar1 + 0x68c) = uVar4;
    *(undefined4 *)(lVar1 + 0x690) = uVar5;
    *(undefined4 *)(lVar1 + 0x694) = uVar6;
    *(undefined4 *)(lVar1 + 0x698) = uVar7;
    *(undefined4 *)(lVar1 + 0x69c) = uVar8;
    *(undefined8 *)(lVar1 + 0x6a0) = uVar11;
    *(undefined8 *)(lVar1 + 0x6a8) = uVar12;
    *(undefined8 *)(lVar1 + 0x6b0) = uVar9;
    *(undefined8 *)(lVar1 + 0x6b8) = uVar10;
  }
  uVar11 = FUN_180286010(unaff_RBX + 0x30,&stack0x00000038,0);
  puVar13 = (undefined8 *)FUN_1800946d0(extraout_XMM0_Da,unaff_RBP + 0x100,uVar11);
  uVar11 = puVar13[1];
  *(undefined8 *)(unaff_RBX + 0x12b00) = *puVar13;
  *(undefined8 *)(unaff_RBX + 0x12b08) = uVar11;
  uVar11 = puVar13[3];
  *(undefined8 *)(unaff_RBX + 0x12b10) = puVar13[2];
  *(undefined8 *)(unaff_RBX + 0x12b18) = uVar11;
  uVar2 = *(undefined4 *)((longlong)puVar13 + 0x24);
  uVar3 = *(undefined4 *)(puVar13 + 5);
  uVar4 = *(undefined4 *)((longlong)puVar13 + 0x2c);
  *(undefined4 *)(unaff_RBX + 0x12b20) = *(undefined4 *)(puVar13 + 4);
  *(undefined4 *)(unaff_RBX + 0x12b24) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12b28) = uVar3;
  *(undefined4 *)(unaff_RBX + 0x12b2c) = uVar4;
  uVar2 = *(undefined4 *)((longlong)puVar13 + 0x34);
  uVar3 = *(undefined4 *)(puVar13 + 7);
  uVar4 = *(undefined4 *)((longlong)puVar13 + 0x3c);
  *(undefined4 *)(unaff_RBX + 0x12b30) = *(undefined4 *)(puVar13 + 6);
  *(undefined4 *)(unaff_RBX + 0x12b34) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12b38) = uVar3;
  *(undefined4 *)(unaff_RBX + 0x12b3c) = uVar4;
  puVar13 = (undefined8 *)FUN_180286f50(unaff_RBX + 0x30,&stack0x00000038);
  uVar11 = puVar13[1];
  *(undefined8 *)(unaff_RBX + 0x12b80) = *puVar13;
  *(undefined8 *)(unaff_RBX + 0x12b88) = uVar11;
  uVar11 = puVar13[3];
  *(undefined8 *)(unaff_RBX + 0x12b90) = puVar13[2];
  *(undefined8 *)(unaff_RBX + 0x12b98) = uVar11;
  uVar2 = *(undefined4 *)((longlong)puVar13 + 0x24);
  uVar3 = *(undefined4 *)(puVar13 + 5);
  uVar4 = *(undefined4 *)((longlong)puVar13 + 0x2c);
  *(undefined4 *)(unaff_RBX + 0x12ba0) = *(undefined4 *)(puVar13 + 4);
  *(undefined4 *)(unaff_RBX + 0x12ba4) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12ba8) = uVar3;
  *(undefined4 *)(unaff_RBX + 0x12bac) = uVar4;
  uVar2 = *(undefined4 *)((longlong)puVar13 + 0x34);
  uVar3 = *(undefined4 *)(puVar13 + 7);
  uVar4 = *(undefined4 *)((longlong)puVar13 + 0x3c);
  *(undefined4 *)(unaff_RBX + 0x12bb0) = *(undefined4 *)(puVar13 + 6);
  *(undefined4 *)(unaff_RBX + 0x12bb4) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12bb8) = uVar3;
  *(undefined4 *)(unaff_RBX + 0x12bbc) = uVar4;
  uVar11 = func_0x000180239f10(unaff_RBP + 0x78);
  uVar12 = func_0x000180239f10(unaff_RBP + -8);
  uVar11 = FUN_18024dde0(uVar11,&stack0x00000078,uVar12);
  puVar13 = (undefined8 *)func_0x000180645570(unaff_RBP + 0x180,uVar11);
  uVar11 = puVar13[1];
  *(undefined8 *)(unaff_RBX + 0x12bc0) = *puVar13;
  *(undefined8 *)(unaff_RBX + 0x12bc8) = uVar11;
  uVar11 = puVar13[3];
  *(undefined8 *)(unaff_RBX + 0x12bd0) = puVar13[2];
  *(undefined8 *)(unaff_RBX + 0x12bd8) = uVar11;
  uVar2 = *(undefined4 *)((longlong)puVar13 + 0x24);
  uVar3 = *(undefined4 *)(puVar13 + 5);
  uVar4 = *(undefined4 *)((longlong)puVar13 + 0x2c);
  *(undefined4 *)(unaff_RBX + 0x12be0) = *(undefined4 *)(puVar13 + 4);
  *(undefined4 *)(unaff_RBX + 0x12be4) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12be8) = uVar3;
  *(undefined4 *)(unaff_RBX + 0x12bec) = uVar4;
  uVar2 = *(undefined4 *)((longlong)puVar13 + 0x34);
  uVar3 = *(undefined4 *)(puVar13 + 7);
  uVar4 = *(undefined4 *)((longlong)puVar13 + 0x3c);
  *(undefined4 *)(unaff_RBX + 0x12bf0) = *(undefined4 *)(puVar13 + 6);
  *(undefined4 *)(unaff_RBX + 0x12bf4) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12bf8) = uVar3;
  *(undefined4 *)(unaff_RBX + 0x12bfc) = uVar4;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x200) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18024be63(void)
void FUN_18024be63(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong in_RAX;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 extraout_XMM0_Da;
  
  if (((*(byte *)(unaff_RBX + 0x1bd9) & 2) == 0) && ((*(byte *)(unaff_RBX + 0x1bd8) & 0x20) != 0)) {
    uVar1 = *(undefined4 *)(unaff_RBX + 0x12ac4);
    uVar2 = *(undefined4 *)(unaff_RBX + 0x12ac8);
    uVar3 = *(undefined4 *)(unaff_RBX + 0x12acc);
    uVar4 = *(undefined4 *)(unaff_RBX + 0x12ad0);
    uVar5 = *(undefined4 *)(unaff_RBX + 0x12ad4);
    uVar6 = *(undefined4 *)(unaff_RBX + 0x12ad8);
    uVar7 = *(undefined4 *)(unaff_RBX + 0x12adc);
    uVar8 = *(undefined4 *)(unaff_RBX + 0x12ae0);
    uVar9 = *(undefined4 *)(unaff_RBX + 0x12ae4);
    uVar10 = *(undefined4 *)(unaff_RBX + 0x12ae8);
    uVar11 = *(undefined4 *)(unaff_RBX + 0x12aec);
    uVar12 = *(undefined4 *)(unaff_RBX + 0x12af0);
    uVar13 = *(undefined4 *)(unaff_RBX + 0x12af4);
    uVar14 = *(undefined4 *)(unaff_RBX + 0x12af8);
    uVar15 = *(undefined4 *)(unaff_RBX + 0x12afc);
    *(undefined4 *)(in_RAX + 0x680) = *(undefined4 *)(unaff_RBX + 0x12ac0);
    *(undefined4 *)(in_RAX + 0x684) = uVar1;
    *(undefined4 *)(in_RAX + 0x688) = uVar2;
    *(undefined4 *)(in_RAX + 0x68c) = uVar3;
    *(undefined4 *)(in_RAX + 0x690) = uVar4;
    *(undefined4 *)(in_RAX + 0x694) = uVar5;
    *(undefined4 *)(in_RAX + 0x698) = uVar6;
    *(undefined4 *)(in_RAX + 0x69c) = uVar7;
    *(undefined4 *)(in_RAX + 0x6a0) = uVar8;
    *(undefined4 *)(in_RAX + 0x6a4) = uVar9;
    *(undefined4 *)(in_RAX + 0x6a8) = uVar10;
    *(undefined4 *)(in_RAX + 0x6ac) = uVar11;
    *(undefined4 *)(in_RAX + 0x6b0) = uVar12;
    *(undefined4 *)(in_RAX + 0x6b4) = uVar13;
    *(undefined4 *)(in_RAX + 0x6b8) = uVar14;
    *(undefined4 *)(in_RAX + 0x6bc) = uVar15;
  }
  uVar16 = FUN_180286010(unaff_RBX + 0x30,&stack0x00000038,0);
  puVar17 = (undefined8 *)FUN_1800946d0(extraout_XMM0_Da,unaff_RBP + 0x100,uVar16);
  uVar16 = puVar17[1];
  *(undefined8 *)(unaff_RBX + 0x12b00) = *puVar17;
  *(undefined8 *)(unaff_RBX + 0x12b08) = uVar16;
  uVar16 = puVar17[3];
  *(undefined8 *)(unaff_RBX + 0x12b10) = puVar17[2];
  *(undefined8 *)(unaff_RBX + 0x12b18) = uVar16;
  uVar1 = *(undefined4 *)((longlong)puVar17 + 0x24);
  uVar2 = *(undefined4 *)(puVar17 + 5);
  uVar3 = *(undefined4 *)((longlong)puVar17 + 0x2c);
  *(undefined4 *)(unaff_RBX + 0x12b20) = *(undefined4 *)(puVar17 + 4);
  *(undefined4 *)(unaff_RBX + 0x12b24) = uVar1;
  *(undefined4 *)(unaff_RBX + 0x12b28) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12b2c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)puVar17 + 0x34);
  uVar2 = *(undefined4 *)(puVar17 + 7);
  uVar3 = *(undefined4 *)((longlong)puVar17 + 0x3c);
  *(undefined4 *)(unaff_RBX + 0x12b30) = *(undefined4 *)(puVar17 + 6);
  *(undefined4 *)(unaff_RBX + 0x12b34) = uVar1;
  *(undefined4 *)(unaff_RBX + 0x12b38) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12b3c) = uVar3;
  puVar17 = (undefined8 *)FUN_180286f50(unaff_RBX + 0x30,&stack0x00000038);
  uVar16 = puVar17[1];
  *(undefined8 *)(unaff_RBX + 0x12b80) = *puVar17;
  *(undefined8 *)(unaff_RBX + 0x12b88) = uVar16;
  uVar16 = puVar17[3];
  *(undefined8 *)(unaff_RBX + 0x12b90) = puVar17[2];
  *(undefined8 *)(unaff_RBX + 0x12b98) = uVar16;
  uVar1 = *(undefined4 *)((longlong)puVar17 + 0x24);
  uVar2 = *(undefined4 *)(puVar17 + 5);
  uVar3 = *(undefined4 *)((longlong)puVar17 + 0x2c);
  *(undefined4 *)(unaff_RBX + 0x12ba0) = *(undefined4 *)(puVar17 + 4);
  *(undefined4 *)(unaff_RBX + 0x12ba4) = uVar1;
  *(undefined4 *)(unaff_RBX + 0x12ba8) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12bac) = uVar3;
  uVar1 = *(undefined4 *)((longlong)puVar17 + 0x34);
  uVar2 = *(undefined4 *)(puVar17 + 7);
  uVar3 = *(undefined4 *)((longlong)puVar17 + 0x3c);
  *(undefined4 *)(unaff_RBX + 0x12bb0) = *(undefined4 *)(puVar17 + 6);
  *(undefined4 *)(unaff_RBX + 0x12bb4) = uVar1;
  *(undefined4 *)(unaff_RBX + 0x12bb8) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12bbc) = uVar3;
  uVar16 = func_0x000180239f10(unaff_RBP + 0x78);
  uVar18 = func_0x000180239f10(unaff_RBP + -8);
  uVar16 = FUN_18024dde0(uVar16,&stack0x00000078,uVar18);
  puVar17 = (undefined8 *)func_0x000180645570(unaff_RBP + 0x180,uVar16);
  uVar16 = puVar17[1];
  *(undefined8 *)(unaff_RBX + 0x12bc0) = *puVar17;
  *(undefined8 *)(unaff_RBX + 0x12bc8) = uVar16;
  uVar16 = puVar17[3];
  *(undefined8 *)(unaff_RBX + 0x12bd0) = puVar17[2];
  *(undefined8 *)(unaff_RBX + 0x12bd8) = uVar16;
  uVar1 = *(undefined4 *)((longlong)puVar17 + 0x24);
  uVar2 = *(undefined4 *)(puVar17 + 5);
  uVar3 = *(undefined4 *)((longlong)puVar17 + 0x2c);
  *(undefined4 *)(unaff_RBX + 0x12be0) = *(undefined4 *)(puVar17 + 4);
  *(undefined4 *)(unaff_RBX + 0x12be4) = uVar1;
  *(undefined4 *)(unaff_RBX + 0x12be8) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12bec) = uVar3;
  uVar1 = *(undefined4 *)((longlong)puVar17 + 0x34);
  uVar2 = *(undefined4 *)(puVar17 + 7);
  uVar3 = *(undefined4 *)((longlong)puVar17 + 0x3c);
  *(undefined4 *)(unaff_RBX + 0x12bf0) = *(undefined4 *)(puVar17 + 6);
  *(undefined4 *)(unaff_RBX + 0x12bf4) = uVar1;
  *(undefined4 *)(unaff_RBX + 0x12bf8) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12bfc) = uVar3;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x200) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_18024c080(longlong param_1,char param_2)
void FUN_18024c080(longlong param_1,char param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((param_2 == '\0') && ((*(uint *)(param_1 + 4) & 0x10000) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  puVar3 = (undefined8 *)(param_1 + 0x9a48);
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x11a48); iVar1 = iVar1 + 1) {
    FUN_18024c080(*puVar3,uVar2);
    puVar3 = puVar3 + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024c0f0(longlong param_1,undefined8 param_2)
void FUN_18024c0f0(longlong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined *puVar3;
  undefined1 auStack_128 [32];
  uint uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [72];
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_100 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_128;
  uStack_108 = 0;
  uStack_f8 = param_2;
  if (*(int *)(param_1 + 0x3530) < 1) {
    puStack_e8 = &UNK_1809fcc58;
    puStack_e0 = auStack_d0;
    auStack_d0[0] = 0;
    uStack_d8 = 7;
    strcpy_s(auStack_d0,0x40,&UNK_180a147b8);
    ppuVar1 = &puStack_e8;
    uVar2 = 2;
  }
  else {
    puStack_88 = &UNK_1809fcc58;
    puStack_80 = auStack_70;
    auStack_70[0] = 0;
    uStack_78 = *(undefined4 *)(param_1 + 0x3530);
    puVar3 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x3528) != (undefined *)0x0) {
      puVar3 = *(undefined **)(param_1 + 0x3528);
    }
    strcpy_s(auStack_70,0x40,puVar3);
    ppuVar1 = &puStack_88;
    uVar2 = 1;
  }
  uStack_108 = uVar2;
  FUN_1800b8300(param_2,ppuVar1);
  if ((uVar2 & 2) != 0) {
    uVar2 = uVar2 & 0xfffffffd;
    puStack_e8 = &UNK_18098bcb0;
  }
  if ((uVar2 & 1) != 0) {
    uVar2 = uVar2 & 0xfffffffe;
    puStack_88 = &UNK_18098bcb0;
  }
  uStack_108 = uVar2 | 4;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_128);
}



uint FUN_18024c250(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  uVar5 = 0;
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x280), lVar1 != 0)) {
    if (((*(char *)(lVar1 + 0x13c) == '\x06') && (*(float *)(param_2 + 0x154) != 1.0)) &&
       (*(float *)(param_2 + 0x154) != 0.0)) {
      uVar5 = 0x100000;
    }
    uVar7 = uVar5 | 0x8000;
    if ((*(uint *)(param_2 + 0x1cc) & 0x400) == 0) {
      uVar7 = uVar5;
    }
    cVar4 = FUN_18022e5d0(lVar1);
    if (cVar4 == '\0') {
      lVar2 = *(longlong *)(lVar1 + 200);
      if (lVar2 != 0) {
        if ((*(byte *)(lVar2 + 0x2e0) & 1) == 0) {
          if (*(int *)(lVar2 + 0x324) == 0x14) {
            uVar7 = uVar7 | 0x40000;
          }
        }
        else {
          uVar7 = uVar7 | 0x10000;
        }
      }
      lVar1 = *(longlong *)(lVar1 + 0xd0);
      if (lVar1 != 0) {
        if ((*(byte *)(lVar1 + 0x2e0) & 1) == 0) {
          if (*(int *)(lVar1 + 0x324) == 0x14) {
            uVar7 = uVar7 | 0x80000;
          }
        }
        else {
          uVar7 = uVar7 | 0x20000;
        }
      }
    }
    if (((*(uint *)(param_1 + 4) >> 0x16 & 1) != 0) &&
       ((*(uint *)(param_2 + 0x1cc) >> 0x1e & 1) == 0)) {
      uVar7 = uVar7 | 0x20;
    }
    uVar5 = *(uint *)(*(longlong *)(param_2 + 0x280) + 0x138);
    uVar6 = uVar7 | 0x400000;
    if ((uVar5 & 0x20) == 0) {
      uVar6 = uVar7;
    }
    if ((*(char *)(*(longlong *)(param_2 + 0x280) + 0x13c) == '\x01') && ((uVar5 >> 0x13 & 1) != 0))
    {
      uVar6 = uVar6 | 4;
    }
    if ((((*(char *)(param_1 + 0x9a38) != '\0') && ((*(uint *)(param_2 + 0x1cc) & 0x400000) != 0))
        && (*(longlong *)(param_2 + 0x1b8) != 0)) &&
       (*(char *)(*(longlong *)(param_2 + 0x1b8) + 0x13d) != '\0')) {
      uVar6 = uVar6 | 0x100;
    }
    if (((*(float *)(param_2 + 0x1a8) == 0.0) && (*(float *)(param_2 + 0x1ac) == 0.0)) &&
       (*(float *)(param_2 + 0x1b0) == 0.0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar5 = uVar6 | 0x20000000;
    if (!bVar3) {
      uVar5 = uVar6;
    }
    return uVar5;
  }
  if ((*(uint *)(param_1 + 4) >> 0x16 & 1) != 0) {
    uVar7 = 0x20;
  }
  return uVar7;
}



uint FUN_18024c28e(uint param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint in_EAX;
  uint uVar5;
  uint uVar6;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R14;
  bool in_ZF;
  
  if (((in_ZF) && (*(float *)(param_2 + 0x154) != 1.0)) && (*(float *)(param_2 + 0x154) != 0.0)) {
    in_EAX = 0x100000;
  }
  uVar6 = in_EAX | 0x8000;
  if ((param_1 & 0x400) == 0) {
    uVar6 = in_EAX;
  }
  cVar4 = FUN_18022e5d0();
  if (cVar4 == '\0') {
    lVar2 = *(longlong *)(unaff_RBP + 200);
    if (lVar2 != 0) {
      if ((*(byte *)(lVar2 + 0x2e0) & 1) == 0) {
        if (*(int *)(lVar2 + 0x324) == 0x14) {
          uVar6 = uVar6 | 0x40000;
        }
      }
      else {
        uVar6 = uVar6 | 0x10000;
      }
    }
    lVar2 = *(longlong *)(unaff_RBP + 0xd0);
    if (lVar2 != 0) {
      if ((*(byte *)(lVar2 + 0x2e0) & 1) == 0) {
        if (*(int *)(lVar2 + 0x324) == 0x14) {
          uVar6 = uVar6 | 0x80000;
        }
      }
      else {
        uVar6 = uVar6 | 0x20000;
      }
    }
  }
  if (((*(uint *)(unaff_R14 + 4) >> 0x16 & 1) != 0) &&
     ((*(uint *)(unaff_RDI + 0x1cc) >> 0x1e & 1) == 0)) {
    uVar6 = uVar6 | 0x20;
  }
  uVar1 = *(uint *)(*(longlong *)(unaff_RDI + 0x280) + 0x138);
  uVar5 = uVar6 | 0x400000;
  if ((uVar1 & 0x20) == 0) {
    uVar5 = uVar6;
  }
  if ((*(char *)(*(longlong *)(unaff_RDI + 0x280) + 0x13c) == '\x01') && ((uVar1 >> 0x13 & 1) != 0))
  {
    uVar5 = uVar5 | 4;
  }
  if ((((*(char *)(unaff_R14 + 0x9a38) != '\0') && ((*(uint *)(unaff_RDI + 0x1cc) & 0x400000) != 0))
      && (*(longlong *)(unaff_RDI + 0x1b8) != 0)) &&
     (*(char *)(*(longlong *)(unaff_RDI + 0x1b8) + 0x13d) != '\0')) {
    uVar5 = uVar5 | 0x100;
  }
  if (((*(float *)(unaff_RDI + 0x1a8) == 0.0) && (*(float *)(unaff_RDI + 0x1ac) == 0.0)) &&
     (*(float *)(unaff_RDI + 0x1b0) == 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uVar6 = uVar5 | 0x20000000;
  if (!bVar3) {
    uVar6 = uVar5;
  }
  return uVar6;
}



uint FUN_18024c293(uint param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint in_EAX;
  uint uVar5;
  uint uVar6;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R14;
  bool in_ZF;
  
  if (((in_ZF) && (*(float *)(param_2 + 0x154) != 1.0)) && (*(float *)(param_2 + 0x154) != 0.0)) {
    in_EAX = 0x100000;
  }
  uVar6 = in_EAX | 0x8000;
  if ((param_1 & 0x400) == 0) {
    uVar6 = in_EAX;
  }
  cVar4 = FUN_18022e5d0();
  if (cVar4 == '\0') {
    lVar2 = *(longlong *)(unaff_RBP + 200);
    if (lVar2 != 0) {
      if ((*(byte *)(lVar2 + 0x2e0) & 1) == 0) {
        if (*(int *)(lVar2 + 0x324) == 0x14) {
          uVar6 = uVar6 | 0x40000;
        }
      }
      else {
        uVar6 = uVar6 | 0x10000;
      }
    }
    lVar2 = *(longlong *)(unaff_RBP + 0xd0);
    if (lVar2 != 0) {
      if ((*(byte *)(lVar2 + 0x2e0) & 1) == 0) {
        if (*(int *)(lVar2 + 0x324) == 0x14) {
          uVar6 = uVar6 | 0x80000;
        }
      }
      else {
        uVar6 = uVar6 | 0x20000;
      }
    }
  }
  if (((*(uint *)(unaff_R14 + 4) >> 0x16 & 1) != 0) &&
     ((*(uint *)(unaff_RDI + 0x1cc) >> 0x1e & 1) == 0)) {
    uVar6 = uVar6 | 0x20;
  }
  uVar1 = *(uint *)(*(longlong *)(unaff_RDI + 0x280) + 0x138);
  uVar5 = uVar6 | 0x400000;
  if ((uVar1 & 0x20) == 0) {
    uVar5 = uVar6;
  }
  if ((*(char *)(*(longlong *)(unaff_RDI + 0x280) + 0x13c) == '\x01') && ((uVar1 >> 0x13 & 1) != 0))
  {
    uVar5 = uVar5 | 4;
  }
  if ((((*(char *)(unaff_R14 + 0x9a38) != '\0') && ((*(uint *)(unaff_RDI + 0x1cc) & 0x400000) != 0))
      && (*(longlong *)(unaff_RDI + 0x1b8) != 0)) &&
     (*(char *)(*(longlong *)(unaff_RDI + 0x1b8) + 0x13d) != '\0')) {
    uVar5 = uVar5 | 0x100;
  }
  if (((*(float *)(unaff_RDI + 0x1a8) == 0.0) && (*(float *)(unaff_RDI + 0x1ac) == 0.0)) &&
     (*(float *)(unaff_RDI + 0x1b0) == 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uVar6 = uVar5 | 0x20000000;
  if (!bVar3) {
    uVar6 = uVar5;
  }
  return uVar6;
}



uint FUN_18024c33a(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_EBX;
  longlong unaff_RDI;
  longlong unaff_R14;
  float unaff_XMM6_Da;
  
  if ((*(uint *)(unaff_RDI + 0x1cc) >> 0x1e & 1) == 0) {
    unaff_EBX = unaff_EBX | 0x20;
  }
  uVar2 = *(uint *)(*(longlong *)(unaff_RDI + 0x280) + 0x138);
  uVar3 = unaff_EBX | 0x400000;
  if ((uVar2 & 0x20) == 0) {
    uVar3 = unaff_EBX;
  }
  if ((*(char *)(*(longlong *)(unaff_RDI + 0x280) + 0x13c) == '\x01') && ((uVar2 >> 0x13 & 1) != 0))
  {
    uVar3 = uVar3 | 4;
  }
  if ((((*(char *)(unaff_R14 + 0x9a38) != '\0') && ((*(uint *)(unaff_RDI + 0x1cc) & 0x400000) != 0))
      && (*(longlong *)(unaff_RDI + 0x1b8) != 0)) &&
     (*(char *)(*(longlong *)(unaff_RDI + 0x1b8) + 0x13d) != '\0')) {
    uVar3 = uVar3 | 0x100;
  }
  if (((unaff_XMM6_Da == *(float *)(unaff_RDI + 0x1a8)) &&
      (unaff_XMM6_Da == *(float *)(unaff_RDI + 0x1ac))) &&
     (unaff_XMM6_Da == *(float *)(unaff_RDI + 0x1b0))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar2 = uVar3 | 0x20000000;
  if (!bVar1) {
    uVar2 = uVar3;
  }
  return uVar2;
}



uint FUN_18024c37a(undefined8 param_1,uint param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  longlong unaff_RDI;
  longlong unaff_R14;
  float unaff_XMM6_Da;
  
  if ((param_4 >> 0x13 & 1) != 0) {
    param_2 = param_2 | 4;
  }
  if ((((*(char *)(unaff_R14 + 0x9a38) != '\0') && ((*(uint *)(unaff_RDI + 0x1cc) & 0x400000) != 0))
      && (*(longlong *)(unaff_RDI + 0x1b8) != 0)) &&
     (*(char *)(*(longlong *)(unaff_RDI + 0x1b8) + 0x13d) != '\0')) {
    param_2 = param_2 | 0x100;
  }
  if (((unaff_XMM6_Da == *(float *)(unaff_RDI + 0x1a8)) &&
      (unaff_XMM6_Da == *(float *)(unaff_RDI + 0x1ac))) &&
     (unaff_XMM6_Da == *(float *)(unaff_RDI + 0x1b0))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar1 = param_2 | 0x20000000;
  if (!bVar2) {
    uVar1 = param_2;
  }
  return uVar1;
}



undefined4 FUN_18024c3f5(longlong param_1)

{
  undefined4 in_EAX;
  
  if ((*(uint *)(param_1 + 4) >> 0x16 & 1) != 0) {
    in_EAX = 0x20;
  }
  return in_EAX;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




