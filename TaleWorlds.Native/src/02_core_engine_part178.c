#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part178.c - 1 个函数

// 函数: void FUN_180160cb0(void)
void FUN_180160cb0(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong *unaff_R15;
  
  *(undefined8 *)(unaff_R12 + 0x40) = *(undefined8 *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(undefined1 *)(unaff_R15 + 2) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_180160d20(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar11;
  undefined *puStack_68;
  undefined *puStack_60;
  int iStack_58;
  undefined *puStack_48;
  longlong lStack_40;
  undefined4 uStack_30;
  
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,0,param_3,param_4,0,0xfffffffffffffffe);
  *(undefined4 *)(param_1 + 2) = 0;
  if ((undefined1 *)param_1[1] != (undefined1 *)0x0) {
    *(undefined1 *)param_1[1] = 0;
  }
  uVar11 = 1;
  FUN_180627ae0(&puStack_68,param_2);
  if (param_3[1] - *param_3 >> 5 == 0) {
    puVar7 = &DAT_18098bc73;
    if (puStack_60 != (undefined *)0x0) {
      puVar7 = puStack_60;
    }
    lVar2 = strstr(puVar7,&UNK_180a07f10);
    iVar9 = *(int *)(param_1 + 2);
    if (lVar2 == 0) {
      iVar10 = iVar9 + 9;
      FUN_1806277c0(param_1,iVar10);
      uVar1 = *(uint *)(param_1 + 2);
      lVar2 = param_1[1];
      *(undefined8 *)((ulonglong)uVar1 + lVar2) = 0x666f2065756c6156;
      *(undefined2 *)((undefined8 *)((ulonglong)uVar1 + lVar2) + 1) = 0x20;
      *(int *)(param_1 + 2) = iVar10;
      if (0 < iStack_58) {
        FUN_1806277c0(param_1,iVar10 + iStack_58);
                    // WARNING: Subroutine does not return
        memcpy((ulonglong)*(uint *)(param_1 + 2) + param_1[1],puStack_60,(longlong)(iStack_58 + 1));
      }
      FUN_1806277c0(param_1,iVar9 + 0xd);
      uVar1 = *(uint *)(param_1 + 2);
      lVar2 = param_1[1];
      *(undefined4 *)((ulonglong)uVar1 + lVar2) = 0x20736920;
      *(undefined1 *)((undefined4 *)((ulonglong)uVar1 + lVar2) + 1) = 0;
      *(int *)(param_1 + 2) = iVar9 + 0xd;
      uVar6 = FUN_1800af9f0(_DAT_180c86920,&puStack_48,&puStack_68,param_4,uVar11);
      FUN_180628320(param_1,uVar6);
      puStack_48 = &UNK_180a3c3e0;
      if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_40 = 0;
      uStack_30 = 0;
      puStack_48 = &UNK_18098bcb0;
      iVar9 = *(int *)(param_1 + 2) + 1;
      FUN_1806277c0(param_1,iVar9);
      *(undefined2 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]) = 10;
    }
    else {
      FUN_1806277c0(param_1,iVar9 + 0x26);
      puVar8 = (undefined4 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
      *puVar8 = 0x73736f50;
      puVar8[1] = 0x656c6269;
      puVar8[2] = 0x6c617620;
      puVar8[3] = 0x20736575;
      puVar8[4] = 0x6120666f;
      puVar8[5] = 0x206f7475;
      puVar8[6] = 0x20786667;
      puVar8[7] = 0x6c617571;
      puVar8[8] = 0x20797469;
      *(undefined2 *)(puVar8 + 9) = 0xa3a;
      *(undefined1 *)((longlong)puVar8 + 0x26) = 0;
      *(int *)(param_1 + 2) = iVar9 + 0x26;
      FUN_1806277c0(param_1,iVar9 + 0x2e);
      uVar1 = *(uint *)(param_1 + 2);
      lVar2 = param_1[1];
      *(undefined8 *)((ulonglong)uVar1 + lVar2) = 0xa776f4c203a2030;
      *(undefined1 *)((undefined8 *)((ulonglong)uVar1 + lVar2) + 1) = 0;
      *(int *)(param_1 + 2) = iVar9 + 0x2e;
      FUN_1806277c0(param_1,iVar9 + 0x39);
      uVar1 = *(uint *)(param_1 + 2);
      lVar2 = param_1[1];
      *(undefined8 *)((ulonglong)uVar1 + lVar2) = 0x6964654d203a2031;
      *(undefined4 *)((undefined8 *)((ulonglong)uVar1 + lVar2) + 1) = 0xa6d75;
      *(int *)(param_1 + 2) = iVar9 + 0x39;
      FUN_1806277c0(param_1,iVar9 + 0x42);
      uVar1 = *(uint *)(param_1 + 2);
      lVar2 = param_1[1];
      *(undefined8 *)((ulonglong)uVar1 + lVar2) = 0x68676948203a2032;
      *(undefined2 *)((undefined8 *)((ulonglong)uVar1 + lVar2) + 1) = 10;
      *(int *)(param_1 + 2) = iVar9 + 0x42;
      iVar9 = iVar9 + 0x51;
      FUN_1806277c0(param_1,iVar9);
      puVar8 = (undefined4 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
      *puVar8 = 0x203a2033;
      puVar8[1] = 0x79726556;
      puVar8[2] = 0x67694820;
      puVar8[3] = 0xa0a68;
    }
    *(int *)(param_1 + 2) = iVar9;
  }
  else {
    FUN_180627ae0(&puStack_48);
    puVar7 = &DAT_18098bc73;
    if (puStack_60 != (undefined *)0x0) {
      puVar7 = puStack_60;
    }
    lVar2 = strstr(puVar7,&UNK_180a07f10);
    if (lVar2 == 0) {
      FUN_1800af2c0(_DAT_180c86920,&puStack_68,&puStack_48);
    }
    else {
      uVar11 = atoi(lStack_40);
      FUN_180100ff0(extraout_XMM0_Da,uVar11);
    }
    puVar7 = &DAT_18098bc73;
    if (puStack_60 != (undefined *)0x0) {
      puVar7 = puStack_60;
    }
    lVar2 = strstr(puVar7,&UNK_180a056c8);
    puVar7 = &DAT_18098bc73;
    if (puStack_60 != (undefined *)0x0) {
      puVar7 = puStack_60;
    }
    lVar3 = strstr(puVar7,&UNK_180a056b8);
    puVar7 = &DAT_18098bc73;
    if (puStack_60 != (undefined *)0x0) {
      puVar7 = puStack_60;
    }
    lVar4 = strstr(puVar7,&UNK_180a056d8);
    puVar7 = &DAT_18098bc73;
    if (puStack_60 != (undefined *)0x0) {
      puVar7 = puStack_60;
    }
    lVar5 = strstr(puVar7,&UNK_180a05710);
    if ((((lVar2 == 0) && (lVar3 == 0)) && (lVar4 == 0)) && (lVar5 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    FUN_180103970(extraout_XMM0_Da_00,uVar6);
    iVar9 = *(int *)(param_1 + 2);
    FUN_1806277c0(param_1,iVar9 + 0x23);
    puVar8 = (undefined4 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
    *puVar8 = 0x69676e45;
    puVar8[1] = 0x6320656e;
    puVar8[2] = 0x69666e6f;
    puVar8[3] = 0x68632067;
    puVar8[4] = 0x65676e61;
    puVar8[5] = 0x75732064;
    puVar8[6] = 0x73656363;
    puVar8[7] = 0x6c756673;
    puVar8[8] = 0x2e796c;
    *(int *)(param_1 + 2) = iVar9 + 0x23;
    puStack_48 = &UNK_180a3c3e0;
    if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_40 = 0;
    uStack_30 = 0;
    puStack_48 = &UNK_18098bcb0;
  }
  puStack_68 = &UNK_180a3c3e0;
  if (puStack_60 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_180161170(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined *puStack_68;
  undefined *puStack_60;
  int iStack_58;
  undefined *puStack_48;
  longlong lStack_40;
  undefined4 uStack_30;
  
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,0,param_3,param_4,0,0xfffffffffffffffe);
  *(undefined4 *)(param_1 + 2) = 0;
  if ((undefined1 *)param_1[1] != (undefined1 *)0x0) {
    *(undefined1 *)param_1[1] = 0;
  }
  uVar8 = 1;
  FUN_180627ae0(&puStack_68,param_2);
  if (param_3[1] - *param_3 >> 5 == 0) {
    puVar4 = &DAT_18098bc73;
    if (puStack_60 != (undefined *)0x0) {
      puVar4 = puStack_60;
    }
    lVar2 = strstr(puVar4,&UNK_180a07420);
    iVar6 = *(int *)(param_1 + 2);
    if (lVar2 != 0) {
      FUN_1806277c0(param_1,iVar6 + 0x2b);
      puVar5 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
      *puVar5 = 0x656c626973736f50;
      puVar5[1] = 0x207365756c617620;
      *(undefined4 *)(puVar5 + 2) = 0x7320666f;
      *(undefined4 *)((longlong)puVar5 + 0x14) = 0x65657263;
      *(undefined4 *)(puVar5 + 3) = 0x6f68736e;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = 0x6f662074;
      puVar5[4] = 0x2073692074616d72;
      *(undefined4 *)(puVar5 + 5) = 0xa203a;
      *(int *)(param_1 + 2) = iVar6 + 0x2b;
      FUN_1806277c0(param_1,iVar6 + 0x34);
      uVar1 = *(uint *)(param_1 + 2);
      lVar2 = param_1[1];
      *(undefined8 *)((ulonglong)uVar1 + lVar2) = 0x6765704a203a2030;
      *(undefined2 *)((undefined8 *)((ulonglong)uVar1 + lVar2) + 1) = 10;
      *(int *)(param_1 + 2) = iVar6 + 0x34;
      FUN_1806277c0(param_1,iVar6 + 0x3c);
      uVar1 = *(uint *)(param_1 + 2);
      lVar2 = param_1[1];
      *(undefined8 *)((ulonglong)uVar1 + lVar2) = 0xa676e50203a2031;
      *(undefined1 *)((undefined8 *)((ulonglong)uVar1 + lVar2) + 1) = 0;
      *(int *)(param_1 + 2) = iVar6 + 0x3c;
      iVar6 = iVar6 + 0x45;
      FUN_1806277c0(param_1,iVar6);
      uVar1 = *(uint *)(param_1 + 2);
      lVar2 = param_1[1];
      *(undefined8 *)((ulonglong)uVar1 + lVar2) = 0xa736444203a2032;
      *(undefined2 *)((undefined8 *)((ulonglong)uVar1 + lVar2) + 1) = 10;
      *(int *)(param_1 + 2) = iVar6;
    }
    iVar7 = iVar6 + 9;
    FUN_1806277c0(param_1,iVar7);
    uVar1 = *(uint *)(param_1 + 2);
    lVar2 = param_1[1];
    *(undefined8 *)((ulonglong)uVar1 + lVar2) = 0x666f2065756c6156;
    *(undefined2 *)((undefined8 *)((ulonglong)uVar1 + lVar2) + 1) = 0x20;
    *(int *)(param_1 + 2) = iVar7;
    if (0 < iStack_58) {
      FUN_1806277c0(param_1,iVar7 + iStack_58);
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)*(uint *)(param_1 + 2) + param_1[1],puStack_60,(longlong)(iStack_58 + 1));
    }
    FUN_1806277c0(param_1,iVar6 + 0xd);
    uVar1 = *(uint *)(param_1 + 2);
    lVar2 = param_1[1];
    *(undefined4 *)((ulonglong)uVar1 + lVar2) = 0x20736920;
    *(undefined1 *)((undefined4 *)((ulonglong)uVar1 + lVar2) + 1) = 0;
    *(int *)(param_1 + 2) = iVar6 + 0xd;
    lVar2 = FUN_1800af9f0(_DAT_180c8a9c8,&puStack_48,&puStack_68);
    if (0 < *(int *)(lVar2 + 0x10)) {
      FUN_1806277c0(param_1,*(int *)(param_1 + 2) + *(int *)(lVar2 + 0x10));
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)*(uint *)(param_1 + 2) + param_1[1],*(undefined8 *)(lVar2 + 8),
             (longlong)(*(int *)(lVar2 + 0x10) + 1));
    }
    puStack_48 = &UNK_180a3c3e0;
    if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_40 = 0;
    uStack_30 = 0;
    puStack_48 = &UNK_18098bcb0;
    iVar6 = *(int *)(param_1 + 2);
    FUN_1806277c0(param_1,iVar6 + 1);
    *(undefined2 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]) = 10;
    *(int *)(param_1 + 2) = iVar6 + 1;
  }
  else {
    FUN_180627ae0(&puStack_48);
    FUN_1800af2c0(_DAT_180c8a9c8,&puStack_68,&puStack_48,param_4,uVar8);
    iVar6 = *(int *)(param_1 + 2);
    FUN_1806277c0(param_1,iVar6 + 0x23);
    puVar3 = (undefined4 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
    *puVar3 = 0x75646f4d;
    puVar3[1] = 0x6f20656c;
    puVar3[2] = 0x6f697470;
    puVar3[3] = 0x6863206e;
    puVar3[4] = 0x65676e61;
    puVar3[5] = 0x75732064;
    puVar3[6] = 0x73656363;
    puVar3[7] = 0x6c756673;
    puVar3[8] = 0x2e796c;
    *(int *)(param_1 + 2) = iVar6 + 0x23;
    puStack_48 = &UNK_180a3c3e0;
    if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_40 = 0;
    uStack_30 = 0;
    puStack_48 = &UNK_18098bcb0;
  }
  puStack_68 = &UNK_180a3c3e0;
  if (puStack_60 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return param_1;
}



undefined8 *
FUN_1801614d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 3;
  param_1[0xc] = 0;
  param_1[0xd] = _guard_check_icall;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_180627be0();
  *(undefined4 *)(param_1 + 4) = 0;
  if ((code *)param_1[0xc] != (code *)0x0) {
    (*(code *)param_1[0xc])(param_1 + 10,0,0,param_4,uVar1);
  }
  param_1[0xc] = 0;
  param_1[0xd] = _guard_check_icall;
  param_1[9] = 0;
  return param_1;
}



undefined8 *
FUN_1801615a0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 3;
  puVar1 = param_1 + 10;
  param_1[0xc] = 0;
  param_1[0xd] = _guard_check_icall;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_180627be0();
  *(undefined4 *)(param_1 + 4) = 1;
  if (puVar1 != param_3) {
    if ((code *)param_1[0xc] != (code *)0x0) {
      (*(code *)param_1[0xc])(puVar1,0,0,param_4,uVar3);
    }
    pcVar2 = (code *)param_3[2];
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(puVar1,param_3,1);
      pcVar2 = (code *)param_3[2];
    }
    param_1[0xc] = pcVar2;
    param_1[0xd] = param_3[3];
  }
  param_1[9] = 0;
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3,0,0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1801616b0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  double dVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined7 uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  uint uStackX_8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined4 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined4 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  puVar9 = (undefined1 *)0x0;
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0xf);
    puVar6 = (undefined8 *)param_2[1];
    *puVar6 = 0x206e776f6e6b6e55;
    puVar6[1] = 0x646e616d6d6f63;
    *(undefined4 *)(param_2 + 2) = 0xf;
  }
  else {
    if (iVar1 == 1) {
      FUN_1806279c0(&puStack_a0,param_3);
      FUN_180169c30(&puStack_80,&puStack_a0);
      puStack_a0 = &UNK_180a3c3e0;
      if (puStack_98 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_98 = (undefined *)0x0;
      uStack_88 = 0;
      puStack_a0 = &UNK_18098bcb0;
      lVar12 = (**(code **)(param_1 + 0x68))(&puStack_a0,param_1,&puStack_80);
      *param_2 = &UNK_18098bcb0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      *param_2 = &UNK_180a3c3e0;
      param_2[3] = 0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar12 + 0x10);
      param_2[1] = *(undefined8 *)(lVar12 + 8);
      *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(lVar12 + 0x1c);
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(lVar12 + 0x18);
      *(undefined4 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 8) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      puStack_a0 = &UNK_180a3c3e0;
      if (puStack_98 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_98 = (undefined *)0x0;
      uStack_88 = 0;
      puStack_a0 = &UNK_18098bcb0;
      puStack_c0 = puStack_80;
      for (puVar6 = puStack_80; puVar6 != puStack_78; puVar6 = puVar6 + 4) {
        puStack_80 = puStack_c0;
        (**(code **)*puVar6)(puVar6,0);
        puStack_c0 = puStack_80;
      }
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 != 3) {
          *param_2 = &UNK_18098bcb0;
          param_2[1] = 0;
          *(undefined4 *)(param_2 + 2) = 0;
          *param_2 = &UNK_180a3c3e0;
          param_2[3] = 0;
          param_2[1] = 0;
          *(undefined4 *)(param_2 + 2) = 0;
          FUN_1806277c0(param_2,0x1a);
          puVar6 = (undefined8 *)param_2[1];
          *puVar6 = 0x206e776f6e6b6e75;
          puVar6[1] = 0x20646e616d6d6f63;
          puVar6[2] = 0x70797420656e696c;
          *(undefined2 *)(puVar6 + 3) = 0x2165;
          *(undefined1 *)((longlong)puVar6 + 0x1a) = 0;
          *(undefined4 *)(param_2 + 2) = 0x1a;
          return param_2;
        }
        FUN_1801624e0(param_1,&puStack_a0);
        FUN_1806279c0(&puStack_80,param_3);
        FUN_180169c30(&puStack_60);
        puStack_80 = (undefined8 *)&UNK_180a3c3e0;
        if (puStack_78 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_78 = (undefined8 *)0x0;
        uStack_68 = 0;
        puStack_80 = (undefined8 *)&UNK_18098bcb0;
        puStack_c0 = (undefined8 *)&UNK_180a3c3e0;
        uStack_a8 = 0;
        puStack_b8 = (undefined8 *)0x0;
        uStack_b0 = 0;
        uStack_a4 = 0;
        uVar10 = 0;
        uStackX_8 = 0;
        puVar5 = puVar9;
        if ((longlong)puStack_58 - (longlong)puStack_60 >> 5 != 0) {
          uVar8 = 0;
          lVar12 = 0;
          puVar6 = puStack_58;
          puVar15 = puStack_60;
          puVar16 = puVar9;
          do {
            iVar1 = *(int *)((longlong)puVar15 + lVar12 + 0x10);
            uVar11 = (undefined7)(uVar10 >> 8);
            iVar13 = (int)puVar16;
            if (0 < iVar1) {
              iVar13 = iVar13 + iVar1;
              if (iVar13 != 0) {
                uVar14 = iVar13 + 1;
                if (puVar5 == (undefined1 *)0x0) {
                  if ((int)uVar14 < 0x10) {
                    uVar14 = 0x10;
                  }
                  puVar5 = (undefined1 *)
                           FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar14,CONCAT71(uVar11,0x13))
                  ;
                  *puVar5 = 0;
                  puStack_b8 = (undefined8 *)puVar5;
                  uStack_a8 = FUN_18064e990(puVar5);
                }
                else if ((uint)puVar9 < uVar14) {
                  puVar5 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puVar5,uVar14,0x10,0x13);
                  puStack_b8 = (undefined8 *)puVar5;
                  uStack_a8 = FUN_18064e990(puVar5);
                }
              }
                    // WARNING: Subroutine does not return
              memcpy(puVar16 + (longlong)puVar5,*(undefined8 *)((longlong)puVar15 + lVar12 + 8),
                     (longlong)(*(int *)((longlong)puVar15 + lVar12 + 0x10) + 1));
            }
            uVar14 = (uint)uVar10;
            if (uVar8 != ((longlong)puVar6 - (longlong)puVar15 >> 5) - 1U) {
              uVar14 = iVar13 + 1;
              if (uVar14 != 0) {
                uVar3 = iVar13 + 2;
                if (puVar5 == (undefined1 *)0x0) {
                  if ((int)uVar3 < 0x10) {
                    uVar3 = 0x10;
                  }
                  puVar5 = (undefined1 *)
                           FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar3,CONCAT71(uVar11,0x13));
                  *puVar5 = 0;
                }
                else {
                  if (uVar3 <= (uint)puVar9) goto LAB_18016195a;
                  puVar5 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puVar5,uVar3,0x10,0x13);
                }
                puStack_b8 = (undefined8 *)puVar5;
                uStack_a8 = FUN_18064e990(puVar5);
                puVar9 = (undefined1 *)(ulonglong)uStack_a8;
              }
LAB_18016195a:
              puVar16[(longlong)puVar5] = 0x20;
              puVar5[uVar14] = 0;
              puVar16 = (undefined1 *)(ulonglong)uVar14;
              puVar6 = puStack_58;
              puVar15 = puStack_60;
              uStack_b0 = uVar14;
              uVar14 = uStackX_8;
            }
            uStackX_8 = uVar14 + 1;
            uVar10 = (ulonglong)uStackX_8;
            lVar12 = lVar12 + 0x20;
            uVar8 = (ulonglong)(int)uStackX_8;
          } while (uVar8 < (ulonglong)((longlong)puVar6 - (longlong)puVar15 >> 5));
        }
        puVar9 = &DAT_18098bc73;
        if (puVar5 != (undefined1 *)0x0) {
          puVar9 = puVar5;
        }
        puVar7 = &DAT_18098bc73;
        if (puStack_98 != (undefined *)0x0) {
          puVar7 = puStack_98;
        }
        lVar12 = (**(code **)(_DAT_180c8f008 + 0x48))(puVar7,puVar9);
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(lVar12 + 8) != (undefined *)0x0) {
          puVar7 = *(undefined **)(lVar12 + 8);
        }
        FUN_180627910(param_2,puVar7);
        puStack_c0 = (undefined8 *)&UNK_180a3c3e0;
        if (puVar5 == (undefined1 *)0x0) {
          puStack_b8 = (undefined8 *)0x0;
          uStack_a8 = 0;
          puStack_c0 = (undefined8 *)&UNK_18098bcb0;
          for (puVar6 = puStack_60; puVar6 != puStack_58; puVar6 = puVar6 + 4) {
            (**(code **)*puVar6)(puVar6,0);
          }
          if (puStack_60 == (undefined8 *)0x0) {
            puStack_a0 = &UNK_180a3c3e0;
            if (puStack_98 == (undefined *)0x0) {
              return param_2;
            }
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar5);
      }
      FUN_1806279c0(&puStack_a0,param_3);
      FUN_180169c30(&puStack_c0,&puStack_a0);
      puStack_a0 = &UNK_180a3c3e0;
      if (puStack_98 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_98 = (undefined *)0x0;
      uStack_88 = 0;
      puStack_a0 = &UNK_18098bcb0;
      lVar12 = (longlong)puStack_b8 - (longlong)puStack_c0 >> 5;
      if (lVar12 == 0) {
        FUN_18016a740(param_1 + 0x70,param_2);
        for (puVar6 = puStack_c0; puVar6 != puStack_b8; puVar6 = puVar6 + 4) {
          (**(code **)*puVar6)(puVar6,0);
        }
      }
      else if (lVar12 == 1) {
        if (*(longlong *)(param_1 + 0x70) == 0) {
          if (*(longlong *)(param_1 + 0x78) == 0) {
            if (*(longlong *)(param_1 + 0x80) != 0) {
              FUN_180627be0();
            }
          }
          else {
            dVar2 = (double)atof(puStack_c0[1]);
            **(float **)(param_1 + 0x78) = (float)dVar2;
          }
        }
        else {
          uVar4 = atoi(puStack_c0[1]);
          **(undefined4 **)(param_1 + 0x70) = uVar4;
        }
        *param_2 = &UNK_18098bcb0;
        param_2[1] = 0;
        *(undefined4 *)(param_2 + 2) = 0;
        *param_2 = &UNK_180a3c3e0;
        param_2[3] = 0;
        param_2[1] = 0;
        *(undefined4 *)(param_2 + 2) = 0;
        FUN_1806277c0(param_2,10);
        puVar6 = (undefined8 *)param_2[1];
        *puVar6 = 0x65732065756c6156;
        *(undefined2 *)(puVar6 + 1) = 0x2e74;
        *(undefined1 *)((longlong)puVar6 + 10) = 0;
        *(undefined4 *)(param_2 + 2) = 10;
        for (puVar6 = puStack_c0; puVar6 != puStack_b8; puVar6 = puVar6 + 4) {
          (**(code **)*puVar6)(puVar6,0);
        }
      }
      else {
        *param_2 = &UNK_18098bcb0;
        param_2[1] = 0;
        *(undefined4 *)(param_2 + 2) = 0;
        *param_2 = &UNK_180a3c3e0;
        param_2[3] = 0;
        param_2[1] = 0;
        *(undefined4 *)(param_2 + 2) = 0;
        FUN_1806277c0(param_2,0x2d);
        puVar6 = (undefined8 *)param_2[1];
        *puVar6 = 0x2064696c61766e49;
        puVar6[1] = 0x6f207265626d756e;
        puVar6[2] = 0x656d756772612066;
        puVar6[3] = 0x707845202e73746e;
        puVar6[4] = 0x3020676e69746365;
        *(undefined4 *)(puVar6 + 5) = 0x20726f20;
        *(undefined2 *)((longlong)puVar6 + 0x2c) = 0x31;
        *(undefined4 *)(param_2 + 2) = 0x2d;
        for (puVar6 = puStack_c0; puVar6 != puStack_b8; puVar6 = puVar6 + 4) {
          (**(code **)*puVar6)(puVar6,0);
        }
      }
    }
    if (puStack_c0 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return param_2;
}



longlong FUN_180161e00(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x28);
  iVar3 = 0;
  if (*(longlong *)(param_1 + 0x30) - lVar5 >> 3 != 0) {
    lVar4 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar5);
      iVar2 = *(int *)(param_2 + 0x10);
      iVar1 = *(int *)(lVar5 + 0x10);
      if (iVar1 == iVar2) {
        if (iVar1 != 0) {
          iVar2 = _stricmp(*(undefined8 *)(lVar5 + 8),*(undefined8 *)(param_2 + 8));
        }
LAB_180161e6a:
        if (iVar2 == 0) {
          return lVar5;
        }
      }
      else if (iVar1 == 0) goto LAB_180161e6a;
      lVar5 = *(longlong *)(param_1 + 0x28);
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while ((ulonglong)(longlong)iVar3 < (ulonglong)(*(longlong *)(param_1 + 0x30) - lVar5 >> 3));
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



