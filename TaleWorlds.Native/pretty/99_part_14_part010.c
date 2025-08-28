#include "TaleWorlds.Native.Split.h"

// 99_part_14_part010.c - 23 个函数

// 函数: void FUN_1808efa90(byte *param_1,byte *param_2,byte *param_3,int param_4,char param_5)
void FUN_1808efa90(byte *param_1,byte *param_2,byte *param_3,int param_4,char param_5)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  byte bVar10;
  bool bVar11;
  
  if (param_4 < 0xff) {
    uVar2 = 0xd;
    if (param_5 != '\0') {
      uVar2 = 0;
    }
    iVar5 = (param_4 * 100) / 0xff;
    iVar4 = (uint)*param_1 * iVar5 * 100;
    bVar7 = (4999 < iVar4 % 10000) + (char)(iVar4 / 10000);
    iVar4 = (uint)*param_2 * iVar5 * 100;
    bVar10 = (4999 < iVar4 % 10000) + (char)(iVar4 / 10000);
    iVar5 = (uint)*param_3 * iVar5 * 100;
    bVar8 = (4999 < iVar5 % 10000) + (char)(iVar5 / 10000);
    if (((bVar7 < uVar2) && (uVar9 = (uint)bVar10, uVar9 < uVar2)) && (bVar8 < uVar2)) {
      if (bVar10 < bVar7) {
        bVar11 = bVar8 < bVar7;
        bVar3 = bVar7;
        bVar10 = bVar7;
        bVar1 = bVar8;
      }
      else {
        bVar11 = bVar10 < bVar8;
        bVar3 = bVar8;
        bVar1 = bVar10;
      }
      if (!bVar11 && bVar8 != bVar10) {
        bVar3 = bVar1;
      }
      if (bVar3 == 0) {
        return;
      }
      uVar2 = (uVar2 * 100) / (uint)bVar3;
      uVar6 = bVar7 * uVar2 * 100;
      bVar7 = (4999 < uVar6 % 10000) + (char)(uVar6 / 10000);
      uVar9 = uVar9 * uVar2 * 100;
      bVar10 = (4999 < uVar9 % 10000) + (char)(uVar9 / 10000);
      uVar2 = bVar8 * uVar2 * 100;
      bVar8 = (4999 < uVar2 % 10000) + (char)(uVar2 / 10000);
    }
    *param_1 = bVar7;
    *param_2 = bVar10;
    *param_3 = bVar8;
  }
  return;
}






// 函数: void FUN_1808efaa4(byte *param_1,byte *param_2,byte *param_3,int param_4)
void FUN_1808efaa4(byte *param_1,byte *param_2,byte *param_3,int param_4)

{
  byte bVar1;
  uint in_EAX;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  char in_stack_00000040;
  
  uVar2 = 0xd;
  if (in_stack_00000040 != (char)in_EAX) {
    uVar2 = in_EAX;
  }
  iVar5 = (param_4 * 100) / 0xff;
  iVar4 = (uint)*param_1 * iVar5 * 100;
  bVar6 = (4999 < iVar4 % 10000) + (char)(iVar4 / 10000);
  iVar4 = (uint)*param_2 * iVar5 * 100;
  bVar9 = (4999 < iVar4 % 10000) + (char)(iVar4 / 10000);
  iVar5 = (uint)*param_3 * iVar5 * 100;
  bVar8 = (4999 < iVar5 % 10000) + (char)(iVar5 / 10000);
  if (((bVar6 < uVar2) && (uVar7 = (uint)bVar9, uVar7 < uVar2)) && (bVar8 < uVar2)) {
    if (bVar9 < bVar6) {
      bVar10 = bVar8 < bVar6;
      bVar3 = bVar6;
      bVar9 = bVar6;
      bVar1 = bVar8;
    }
    else {
      bVar10 = bVar9 < bVar8;
      bVar3 = bVar8;
      bVar1 = bVar9;
    }
    if (!bVar10 && bVar8 != bVar9) {
      bVar3 = bVar1;
    }
    if (bVar3 == 0) {
      return;
    }
    uVar2 = (uVar2 * 100) / (uint)bVar3;
    iVar5 = bVar6 * uVar2 * 100;
    bVar6 = (4999 < iVar5 % 10000) + (char)(iVar5 / 10000);
    iVar5 = uVar7 * uVar2 * 100;
    bVar9 = (4999 < iVar5 % 10000) + (char)(iVar5 / 10000);
    iVar5 = bVar8 * uVar2 * 100;
    bVar8 = (4999 < iVar5 % 10000) + (char)(iVar5 / 10000);
  }
  *param_1 = bVar6;
  *param_2 = bVar9;
  *param_3 = bVar8;
  return;
}






// 函数: void FUN_1808efc86(void)
void FUN_1808efc86(void)

{
  return;
}






// 函数: void FUN_1808efc90(void)
void FUN_1808efc90(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined2 uVar6;
  
  iVar4 = FUN_1808f6cb0();
  if (iVar4 != 0) {
    return;
  }
  lVar5 = func_0x0001808f0da0();
  if (lVar5 != 0) {
    puVar1 = *(undefined8 **)(lVar5 + 0x23c8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
    }
    lVar2 = *(longlong *)(lVar5 + 0x23d0);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar5 + 0x23d0) = 0;
    }
    *(longlong *)(lVar5 + 0x23c8) = lVar2;
    if (lVar2 != 0) {
      uVar6 = 0x20;
      cVar3 = func_0x0001808f0e30(*(undefined2 *)(lVar5 + 2),*(undefined2 *)(lVar5 + 4));
      if (cVar3 != '\0') {
        uVar6 = 0x30;
      }
      FUN_1808f22b0(*(undefined4 *)(lVar5 + 0x14),*(undefined8 *)(lVar5 + 0x23c8),uVar6,
                    FUN_1808efc90);
    }
  }
  if (DAT_180c69e20 != '\0') {
                    // WARNING: Could not recover jumptable at 0x0001808f6cf0. Too many branches
                    // WARNING: Treating indirect jump as call
    LeaveCriticalSection(0x180c69e28);
    return;
  }
  return;
}






// 函数: void FUN_1808efd09(void)
void FUN_1808efd09(void)

{
  char cVar1;
  longlong unaff_RBX;
  undefined2 uVar2;
  
  uVar2 = 0x20;
  cVar1 = func_0x0001808f0e30();
  if (cVar1 != '\0') {
    uVar2 = 0x30;
  }
  FUN_1808f22b0(*(undefined4 *)(unaff_RBX + 0x14),*(undefined8 *)(unaff_RBX + 0x23c8),uVar2,
                FUN_1808efc90);
  if (DAT_180c69e20 != '\0') {
                    // WARNING: Could not recover jumptable at 0x0001808f6cf0. Too many branches
                    // WARNING: Treating indirect jump as call
    LeaveCriticalSection(0x180c69e28);
    return;
  }
  return;
}






// 函数: void FUN_1808efd40(void)
void FUN_1808efd40(void)

{
  if (DAT_180c69e20 != '\0') {
                    // WARNING: Could not recover jumptable at 0x0001808f6cf0. Too many branches
                    // WARNING: Treating indirect jump as call
    LeaveCriticalSection(0x180c69e28);
    return;
  }
  return;
}



// WARNING: Possible PIC construction at 0x0001808f01ed: Changing call to branch
// WARNING: Removing unreachable block (ram,0x0001808f01f2)




// 函数: void FUN_1808efd80(int param_1)
void FUN_1808efd80(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_1808f6cb0();
  if (iVar1 != 0) {
    return;
  }
  pcVar2 = (char *)0x180c4f820;
  while ((*pcVar2 == '\0' || (*(int *)(pcVar2 + 0x14) != param_1))) {
    pcVar2 = pcVar2 + 0x2408;
    if (0x180c5883f < (longlong)pcVar2) {
SUB_1808f6ce0:
      if (DAT_180c69e20 == '\0') {
        return;
      }
                    // WARNING: Could not recover jumptable at 0x0001808f6cf0. Too many branches
                    // WARNING: Treating indirect jump as call
      LeaveCriticalSection(0x180c69e28);
      return;
    }
  }
  if (pcVar2 != (char *)0x0) {
                    // WARNING: Subroutine does not return
    memset(pcVar2 + (longlong)*(int *)(pcVar2 + 0x15c) * 0x88 + 0x168,0,0x88);
  }
  goto SUB_1808f6ce0;
}



// WARNING: Possible PIC construction at 0x0001808f01ed: Changing call to branch
// WARNING: Removing unreachable block (ram,0x0001808f01f2)




// 函数: void FUN_1808efd9a(void)
void FUN_1808efd9a(void)

{
  char *pcVar1;
  int unaff_EDI;
  
  pcVar1 = (char *)0x180c4f820;
  while ((*pcVar1 == '\0' || (*(int *)(pcVar1 + 0x14) != unaff_EDI))) {
    pcVar1 = pcVar1 + 0x2408;
    if (0x180c5883f < (longlong)pcVar1) {
SUB_1808f6ce0:
      if (DAT_180c69e20 == '\0') {
        return;
      }
                    // WARNING: Could not recover jumptable at 0x0001808f6cf0. Too many branches
                    // WARNING: Treating indirect jump as call
      LeaveCriticalSection(0x180c69e28);
      return;
    }
  }
  if (pcVar1 != (char *)0x0) {
                    // WARNING: Subroutine does not return
    memset(pcVar1 + (longlong)*(int *)(pcVar1 + 0x15c) * 0x88 + 0x168,0,0x88);
  }
  goto SUB_1808f6ce0;
}






// 函数: void FUN_1808efdd7(void)
void FUN_1808efdd7(void)

{
  longlong unaff_RBX;
  
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memset((longlong)*(int *)(unaff_RBX + 0x15c) * 0x88 + unaff_RBX + 0x168,0,0x88);
  }
  func_0x0001808f6ce0();
  return;
}






// 函数: void FUN_1808efde9(undefined8 param_1,undefined8 param_2)
void FUN_1808efde9(undefined8 param_1,undefined8 param_2)

{
  longlong in_RAX;
  longlong unaff_RBX;
  
                    // WARNING: Subroutine does not return
  memset(in_RAX * 0x88 + unaff_RBX + 0x168,param_2,0x88);
}






// 函数: void FUN_1808efee0(undefined8 param_1,undefined8 param_2,ulonglong param_3,int param_4)
void FUN_1808efee0(undefined8 param_1,undefined8 param_2,ulonglong param_3,int param_4)

{
  ushort *puVar1;
  short sVar2;
  bool bVar3;
  undefined1 in_AL;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  byte bVar7;
  longlong lVar8;
  longlong unaff_RBX;
  ushort uVar9;
  longlong unaff_RDI;
  ulonglong uVar10;
  ushort uVar11;
  byte in_R11B;
  uint unaff_R12D;
  undefined8 unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  undefined1 uStack0000000000000060;
  
  uVar11 = (ushort)*(byte *)(param_3 * 0x88 + 0x17c + unaff_RBX);
  uVar9 = (ushort)*(byte *)(param_3 * 0x88 + 0x17d + unaff_RBX);
  uVar10 = param_3;
  do {
    if (param_3 == 0) {
      param_3 = 0x3f;
      uVar10 = 0x3f;
    }
    else {
      uVar10 = (ulonglong)((int)uVar10 - 1);
      param_3 = param_3 - 1;
    }
    lVar8 = param_3 * 0x88;
    if (20000 < (ulonglong)(unaff_RDI - *(longlong *)(lVar8 + 0x168 + unaff_RBX))) break;
    in_R11B = in_R11B + 1;
    uVar11 = uVar11 + *(byte *)(lVar8 + 0x17c + unaff_RBX);
    param_4 = param_4 + 1;
    uVar9 = uVar9 + *(byte *)(lVar8 + 0x17d + unaff_RBX);
  } while (param_4 < 0x40);
  lVar8 = (longlong)(int)uVar10 * 0x88;
  uVar5 = *(undefined1 *)(lVar8 + 0x1ec + unaff_RBX);
  uStack0000000000000060 = in_AL;
  uVar4 = FUN_1808f0c10(*(undefined1 *)(unaff_RBX + 0x23f1),unaff_RBX + 0x23f2,
                        (ulonglong)uVar11 / (ulonglong)in_R11B,
                        *(undefined1 *)(lVar8 + 0x1eb + unaff_RBX));
  *(undefined1 *)(unaff_R14 + 0x1eb) = uVar4;
  uVar5 = FUN_1808f0c10(uStack0000000000000060,unaff_RBX + 0x23fd,
                        (ulonglong)uVar9 / (ulonglong)in_R11B,uVar5);
  *(undefined1 *)(unaff_R14 + 0x1ec) = uVar5;
  *(undefined1 *)(unaff_R14 + 0x1ed) = 0xf0;
  *(undefined1 *)(unaff_R14 + 0x17f) = *(undefined1 *)(unaff_R15 + 0x2a);
  if (-1 < (char)*(byte *)(unaff_R15 + 0x2b)) {
    *(byte *)(unaff_R14 + 0x182) = *(byte *)(unaff_R15 + 0x2b) & 0x7f;
    *(undefined2 *)(unaff_R14 + 0x184) = *(undefined2 *)(unaff_R15 + 0x2e);
    bVar3 = false;
    if ((*(short *)(unaff_RBX + 2) == 0x54c) && (bVar3 = false, *(short *)(unaff_RBX + 4) == 0xce6))
    {
      bVar3 = true;
    }
    if (bVar3) {
      *(ushort *)(unaff_R14 + 0x186) = *(ushort *)(unaff_R15 + 0x30);
    }
    else {
      sVar2 = (short)(((uint)*(ushort *)(unaff_R15 + 0x30) * 0x438) / 0x3ae);
      *(short *)(unaff_R14 + 0x186) = sVar2;
      if (sVar2 == 0x436) {
        *(undefined2 *)(unaff_R14 + 0x186) = 0x437;
      }
    }
    unaff_R12D = 1;
  }
  if (-1 < (char)*(byte *)(unaff_R15 + 0x2c)) {
    lVar8 = (ulonglong)unaff_R12D * 6;
    *(byte *)(unaff_R14 + 0x182 + lVar8) = *(byte *)(unaff_R15 + 0x2c) & 0x7f;
    *(undefined2 *)(unaff_R14 + 0x184 + lVar8) = *(undefined2 *)(unaff_R15 + 0x32);
    bVar3 = false;
    if ((*(short *)(unaff_RBX + 2) == 0x54c) && (bVar3 = false, *(short *)(unaff_RBX + 4) == 0xce6))
    {
      bVar3 = true;
    }
    puVar1 = (ushort *)(unaff_R14 + ((ulonglong)unaff_R12D + 0x41) * 6);
    if (bVar3) {
      *puVar1 = *(ushort *)(unaff_R15 + 0x34);
    }
    else {
      uVar9 = (ushort)(((uint)*(ushort *)(unaff_R15 + 0x34) * 0x438) / 0x3ae);
      *puVar1 = uVar9;
      if (uVar9 == 0x436) {
        *puVar1 = 0x437;
      }
    }
    unaff_R12D = unaff_R12D + 1;
  }
  *(undefined1 *)(unaff_R14 + 0x180) = 0;
  *(char *)(unaff_R14 + 0x181) = (char)unaff_R12D;
  FUN_1808f7310();
  uVar6 = *(int *)(unaff_RBX + 0x15c) + 1U & 0x8000003f;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
  }
  *(uint *)(unaff_RBX + 0x15c) = uVar6;
  if (*(int *)(unaff_RBX + 0x154) < 0x40) {
    *(int *)(unaff_RBX + 0x154) = *(int *)(unaff_RBX + 0x154) + 1;
  }
  else {
    *(uint *)(unaff_RBX + 0x158) = uVar6;
  }
  if (((*(longlong *)(unaff_RBX + 0x160) != 0) &&
      ((*(uint *)(*(longlong *)(unaff_RBX + 0x160) + 0xc) & 0x200000) != 0)) &&
     ((*(uint *)(unaff_R14 + 0x174) & 0x200000) == 0)) {
    FUN_1808ef750(*(undefined4 *)(unaff_RBX + 0x10),*(undefined1 *)(unaff_R14 + 0x1e9));
  }
  if ((*(byte *)(unaff_RBX + 8) & 3) == 0) {
    bVar7 = *(byte *)(unaff_R14 + 0x1e9) & 2;
    if ((*(longlong *)(unaff_RBX + 0x160) == 0) ||
       ((*(byte *)(*(longlong *)(unaff_RBX + 0x160) + 0x81) & 2) != bVar7)) {
      FUN_1808ef100(*(undefined4 *)(unaff_RBX + 0x10),bVar7 == 0,bVar7 == 0);
    }
  }
  *(undefined8 *)(unaff_RBX + 0x160) = unaff_R13;
  func_0x0001808f6ce0();
  return;
}






// 函数: void FUN_1808effd9(void)
void FUN_1808effd9(void)

{
  ushort *puVar1;
  longlong lVar2;
  short sVar3;
  ushort uVar4;
  bool bVar5;
  undefined1 in_AL;
  uint uVar6;
  byte bVar7;
  longlong unaff_RBX;
  uint unaff_R12D;
  undefined8 unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  
  *(undefined1 *)(unaff_R14 + 0x1ed) = in_AL;
  *(undefined1 *)(unaff_R14 + 0x17f) = *(undefined1 *)(unaff_R15 + 0x2a);
  if (-1 < (char)*(byte *)(unaff_R15 + 0x2b)) {
    *(byte *)(unaff_R14 + 0x182) = *(byte *)(unaff_R15 + 0x2b) & 0x7f;
    *(undefined2 *)(unaff_R14 + 0x184) = *(undefined2 *)(unaff_R15 + 0x2e);
    bVar5 = false;
    if ((*(short *)(unaff_RBX + 2) == 0x54c) && (bVar5 = false, *(short *)(unaff_RBX + 4) == 0xce6))
    {
      bVar5 = true;
    }
    if (bVar5) {
      *(ushort *)(unaff_R14 + 0x186) = *(ushort *)(unaff_R15 + 0x30);
    }
    else {
      sVar3 = (short)(((uint)*(ushort *)(unaff_R15 + 0x30) * 0x438) / 0x3ae);
      *(short *)(unaff_R14 + 0x186) = sVar3;
      if (sVar3 == 0x436) {
        *(undefined2 *)(unaff_R14 + 0x186) = 0x437;
      }
    }
    unaff_R12D = 1;
  }
  if (-1 < (char)*(byte *)(unaff_R15 + 0x2c)) {
    lVar2 = (ulonglong)unaff_R12D * 6;
    *(byte *)(unaff_R14 + 0x182 + lVar2) = *(byte *)(unaff_R15 + 0x2c) & 0x7f;
    *(undefined2 *)(unaff_R14 + 0x184 + lVar2) = *(undefined2 *)(unaff_R15 + 0x32);
    bVar5 = false;
    if ((*(short *)(unaff_RBX + 2) == 0x54c) && (bVar5 = false, *(short *)(unaff_RBX + 4) == 0xce6))
    {
      bVar5 = true;
    }
    puVar1 = (ushort *)(unaff_R14 + ((ulonglong)unaff_R12D + 0x41) * 6);
    if (bVar5) {
      *puVar1 = *(ushort *)(unaff_R15 + 0x34);
    }
    else {
      uVar4 = (ushort)(((uint)*(ushort *)(unaff_R15 + 0x34) * 0x438) / 0x3ae);
      *puVar1 = uVar4;
      if (uVar4 == 0x436) {
        *puVar1 = 0x437;
      }
    }
    unaff_R12D = unaff_R12D + 1;
  }
  *(undefined1 *)(unaff_R14 + 0x180) = 0;
  *(char *)(unaff_R14 + 0x181) = (char)unaff_R12D;
  FUN_1808f7310();
  uVar6 = *(int *)(unaff_RBX + 0x15c) + 1U & 0x8000003f;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
  }
  *(uint *)(unaff_RBX + 0x15c) = uVar6;
  if (*(int *)(unaff_RBX + 0x154) < 0x40) {
    *(int *)(unaff_RBX + 0x154) = *(int *)(unaff_RBX + 0x154) + 1;
  }
  else {
    *(uint *)(unaff_RBX + 0x158) = uVar6;
  }
  if (((*(longlong *)(unaff_RBX + 0x160) != 0) &&
      ((*(uint *)(*(longlong *)(unaff_RBX + 0x160) + 0xc) & 0x200000) != 0)) &&
     ((*(uint *)(unaff_R14 + 0x174) & 0x200000) == 0)) {
    FUN_1808ef750(*(undefined4 *)(unaff_RBX + 0x10),*(undefined1 *)(unaff_R14 + 0x1e9));
  }
  if ((*(byte *)(unaff_RBX + 8) & 3) == 0) {
    bVar7 = *(byte *)(unaff_R14 + 0x1e9) & 2;
    if ((*(longlong *)(unaff_RBX + 0x160) == 0) ||
       ((*(byte *)(*(longlong *)(unaff_RBX + 0x160) + 0x81) & 2) != bVar7)) {
      FUN_1808ef100(*(undefined4 *)(unaff_RBX + 0x10),bVar7 == 0,bVar7 == 0);
    }
  }
  *(undefined8 *)(unaff_RBX + 0x160) = unaff_R13;
  func_0x0001808f6ce0();
  return;
}






// 函数: void FUN_1808f0146(int param_1)
void FUN_1808f0146(int param_1)

{
  int in_EAX;
  int iVar1;
  byte bVar2;
  longlong unaff_RBX;
  undefined8 unaff_R13;
  longlong unaff_R14;
  
  iVar1 = (in_EAX - 1U | 0xffffffc0) + 1;
  *(int *)(unaff_RBX + 0x15c) = iVar1;
  if (param_1 < 0x40) {
    *(int *)(unaff_RBX + 0x154) = *(int *)(unaff_RBX + 0x154) + 1;
  }
  else {
    *(int *)(unaff_RBX + 0x158) = iVar1;
  }
  if (((*(longlong *)(unaff_RBX + 0x160) != 0) &&
      ((*(uint *)(*(longlong *)(unaff_RBX + 0x160) + 0xc) & 0x200000) != 0)) &&
     ((*(uint *)(unaff_R14 + 0x174) & 0x200000) == 0)) {
    FUN_1808ef750(*(undefined4 *)(unaff_RBX + 0x10),*(undefined1 *)(unaff_R14 + 0x1e9));
  }
  if ((*(byte *)(unaff_RBX + 8) & 3) == 0) {
    bVar2 = *(byte *)(unaff_R14 + 0x1e9) & 2;
    if ((*(longlong *)(unaff_RBX + 0x160) == 0) ||
       ((*(byte *)(*(longlong *)(unaff_RBX + 0x160) + 0x81) & 2) != bVar2)) {
      FUN_1808ef100(*(undefined4 *)(unaff_RBX + 0x10),bVar2 == 0,bVar2 == 0);
    }
  }
  *(undefined8 *)(unaff_RBX + 0x160) = unaff_R13;
  func_0x0001808f6ce0();
  return;
}






// 函数: void FUN_1808f01ed(void)
void FUN_1808f01ed(void)

{
  func_0x0001808f6ce0();
  return;
}






// 函数: void FUN_1808f01f7(void)
void FUN_1808f01f7(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f0230(int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
void FUN_1808f0230(int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 auStack_88 [32];
  char cStack_68;
  char cStack_67;
  char cStack_66;
  char cStack_65;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong uStack_30;
  
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  uStack_40 = param_8;
  iVar1 = FUN_1808f6cb0();
  if (iVar1 == 0) {
    pcVar3 = (char *)0x180c4f820;
    pcVar2 = (char *)0x180c4f820;
    do {
      if ((*pcVar2 == '\x01') && (*(int *)(pcVar2 + 0x14) == param_1)) {
        *(undefined4 *)(pcVar2 + 0x60) = param_7;
        *(undefined4 *)(pcVar2 + 0x1c) = param_4;
        *(undefined2 *)(pcVar2 + 2) = param_2;
        *(undefined2 *)(pcVar2 + 4) = param_3;
        FUN_1808f0950();
        func_0x0001808f6ce0();
        goto FUN_1808f0529;
      }
      pcVar2 = pcVar2 + 0x2408;
    } while ((longlong)pcVar2 < 0x180c58840);
    do {
      if (*pcVar3 == '\0') {
        cStack_68 = pcVar3[1];
        uStack_50 = *(undefined8 *)(pcVar3 + 0x23f0);
        uStack_48 = *(undefined8 *)(pcVar3 + 0x23f8);
        uStack_64 = *(undefined4 *)(pcVar3 + 100);
        uStack_60 = *(undefined4 *)(pcVar3 + 0x10);
        uStack_5c = *(undefined4 *)(pcVar3 + 0x18);
        cStack_67 = pcVar3[6];
        cStack_66 = pcVar3[7];
        cStack_65 = pcVar3[9];
        uStack_58 = *(undefined8 *)(pcVar3 + 0x2400);
                    // WARNING: Subroutine does not return
        memset(pcVar3,0,0x2408);
      }
      pcVar3 = pcVar3 + 0x2408;
    } while ((longlong)pcVar3 < 0x180c58840);
    func_0x0001808f6ce0();
  }
FUN_1808f0529:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_88);
}






// 函数: void FUN_1808f0280(void)
void FUN_1808f0280(void)

{
  char *pcVar1;
  int unaff_EBP;
  char *pcVar2;
  undefined8 in_R9;
  undefined2 unaff_R12W;
  undefined2 unaff_R13W;
  undefined4 unaff_R15D;
  undefined4 uStack000000000000002c;
  ulonglong in_stack_00000058;
  undefined4 in_stack_000000c0;
  
  pcVar2 = (char *)0x180c4f820;
  pcVar1 = (char *)0x180c4f820;
  while ((*pcVar1 != '\x01' || (*(int *)(pcVar1 + 0x14) != unaff_EBP))) {
    pcVar1 = pcVar1 + 0x2408;
    if (0x180c5883f < (longlong)pcVar1) {
      do {
        if (*pcVar2 == '\0') {
          uStack000000000000002c = *(undefined4 *)(pcVar2 + 0x18);
                    // WARNING: Subroutine does not return
          memset(pcVar2,0,0x2408,in_R9,pcVar2[1]);
        }
        pcVar2 = pcVar2 + 0x2408;
      } while ((longlong)pcVar2 < 0x180c58840);
      func_0x0001808f6ce0();
LAB_1808f0521:
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000058 ^ (ulonglong)&stack0x00000000);
    }
  }
  *(undefined4 *)(pcVar1 + 0x60) = in_stack_000000c0;
  *(undefined4 *)(pcVar1 + 0x1c) = unaff_R15D;
  *(undefined2 *)(pcVar1 + 2) = unaff_R13W;
  *(undefined2 *)(pcVar1 + 4) = unaff_R12W;
  FUN_1808f0950();
  func_0x0001808f6ce0();
  goto LAB_1808f0521;
}






// 函数: void FUN_1808f0345(void)
void FUN_1808f0345(void)

{
  longlong unaff_RSI;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000030 = *(undefined8 *)(unaff_RSI + 0x2400);
                    // WARNING: Subroutine does not return
  memset();
}






// 函数: void FUN_1808f051f(void)
void FUN_1808f051f(void)

{
  ulonglong in_stack_00000058;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000058 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808f0529(void)
void FUN_1808f0529(void)

{
  ulonglong in_stack_00000058;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000058 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808f0550(int param_1)
void FUN_1808f0550(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_1808f6cb0();
  if (iVar1 != 0) {
    return;
  }
  pcVar2 = (char *)0x180c4f820;
  while ((*pcVar2 == '\0' || (*(int *)(pcVar2 + 0x14) != param_1))) {
    pcVar2 = pcVar2 + 0x2408;
    if (0x180c5883f < (longlong)pcVar2) {
SUB_1808f6ce0:
      if (DAT_180c69e20 == '\0') {
        return;
      }
                    // WARNING: Could not recover jumptable at 0x0001808f6cf0. Too many branches
                    // WARNING: Treating indirect jump as call
      LeaveCriticalSection(0x180c69e28);
      return;
    }
  }
  pcVar2[0x14] = '\0';
  pcVar2[0x15] = '\0';
  pcVar2[0x16] = '\0';
  pcVar2[0x17] = '\0';
  *pcVar2 = '\0';
  goto SUB_1808f6ce0;
}



undefined8 FUN_1808f0650(int param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  piVar2 = (int *)0x180c4f838;
  iVar5 = 4;
  if (param_1 < 5) {
    iVar5 = param_1;
  }
  do {
    if (*piVar2 == iVar5) {
      return 0x80010001;
    }
    piVar2 = piVar2 + 0x902;
  } while ((longlong)piVar2 < 0x180c58858);
  piVar2 = (int *)0x180c4f830;
  while ((piVar2[1] == 0 || (*piVar2 != 0))) {
    piVar2 = piVar2 + 0x902;
    if (0x180c5884f < (longlong)piVar2) {
      lVar4 = 0x180c4f820;
      do {
        if (*(int *)(lVar4 + 0x10) == 0) {
          bVar1 = DAT_180c58840 + 1;
          if (bVar1 == 0) {
            bVar1 = DAT_180c58840 + 2;
          }
          iVar3 = (uint)bVar1 * 0x100 + iVar5;



// 函数: void FUN_1808f0860(void)
void FUN_1808f0860(void)

{
  int iVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)0x180c51c08;
  do {
    if (puVar2 + -0x11f4 != (undefined2 *)0x0) {
      iVar1 = *(int *)(puVar2 + -0x11e8);
      *(undefined4 *)(puVar2 + -0x11c2) = 9;
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          *puVar2 = 0;
          *(undefined1 *)(puVar2 + 1) = 0x40;
        }
        else if (iVar1 == 2) {
          *puVar2 = 0x40;
          *(undefined1 *)(puVar2 + 1) = 0;
        }
        else if (iVar1 == 3) {
          *puVar2 = 0x4000;
          *(undefined1 *)(puVar2 + 1) = 0;
        }
        else if (iVar1 == 4) {
          *puVar2 = 0x20;
          *(undefined1 *)(puVar2 + 1) = 0x20;
        }
        puVar2[2] = 0;
        *(undefined1 *)(puVar2 + 3) = 0;
      }
      puVar2[4] = 0x503;
      *(undefined1 *)(puVar2 + 10) = 5;
      *(undefined8 *)(puVar2 + 5) = 0;
      puVar2[9] = 0;
      *(undefined8 *)((longlong)puVar2 + 0x15) = 0;
      *(undefined2 *)((longlong)puVar2 + 0x1d) = 0;
      *(undefined4 *)(puVar2 + -0x11f1) = 1;
      puVar2[-0x11ef] = 0xb08;
      *(undefined1 *)(puVar2 + -0x11ee) = 0;
      FUN_1808f0950(puVar2 + -0x11f4);
    }
    puVar2 = puVar2 + 0x1204;
  } while ((longlong)puVar2 < 0x180c5ac28);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f0950(char *param_1)
void FUN_1808f0950(char *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined1 uStack_44;
  undefined1 uStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  undefined2 uStack_3f;
  char cStack_3d;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  char cStack_32;
  undefined1 uStack_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  char cStack_1b;
  char cStack_1a;
  char cStack_19;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  bVar3 = false;
  if ((*(short *)(param_1 + 2) == 0x54c) && (bVar3 = false, *(short *)(param_1 + 4) == 0xce6)) {
    bVar3 = true;
  }
  if (bVar3) {
    if (*param_1 != '\x01') goto LAB_1808f0b1c;
    iVar2 = *(int *)(param_1 + 0x18);
    cStack_42 = '\0';
    cStack_41 = '\0';
    cStack_40 = '\0';
    uStack_3f = 0;
    uStack_1c = 0;
    uStack_48 = 0xd05;
    uStack_46 = 0x17;
    if (iVar2 == 1) {
      uStack_1c = 4;
    }
    else if (iVar2 == 2) {
      uStack_1c = 10;
    }
    else if (iVar2 == 3) {
      uStack_1c = 0x15;
    }
    else if (iVar2 == 4) {
      uStack_1c = 0x1b;
    }
    cStack_1b = param_1[0x23ec];
    cStack_1a = param_1[0x23ed];
    cStack_19 = param_1[0x23ee];
    cVar1 = param_1[9];
    if (cVar1 == '\x01') {
      uStack_3f = 0x1001;
    }
    else if (cVar1 == '\0') {
      uStack_3f = 0;
    }
    else if ((byte)(cVar1 - 2U) < 2) {
      uStack_3f = 0x1000;
    }
    cStack_32 = param_1[0x23f1];
    uVar4 = 0x30;
    uStack_29 = (undefined1)*(undefined2 *)(param_1 + 0x23fa);
    uStack_28 = (undefined1)((ushort)*(undefined2 *)(param_1 + 0x23fa) >> 8);
    cStack_3d = param_1[0x23fc];
    uStack_34 = *(undefined2 *)(param_1 + 0x2405);
    uStack_31 = (undefined1)*(undefined8 *)(param_1 + 0x23f2);
    uStack_30 = (undefined7)((ulonglong)*(undefined8 *)(param_1 + 0x23f2) >> 8);
    uStack_3c = (undefined4)*(undefined8 *)(param_1 + 0x23fd);
    uStack_38 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x23fd) >> 0x20);
  }
  else {
    if (*param_1 == '\x01') {
      uStack_46 = 0;
      cStack_42 = '\0';
      cStack_41 = '\0';
      cStack_40 = '\0';
      uStack_3f = 0;
      cStack_3d = '\0';
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      cStack_32 = '\0';
      uStack_31 = 0;
      uStack_30 = 0;
      uStack_29 = 0;
      uStack_28 = 0;
      uStack_27 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      cStack_1b = '\0';
      cStack_1a = '\0';
      cStack_19 = '\0';
      uStack_48 = 0x105;
      uStack_44 = 0;
      uStack_43 = 0;
      FUN_1808f2040(*(undefined4 *)(param_1 + 0x14),&uStack_48,0x20);
    }
    if ((*(int *)(param_1 + 0x18) == 0) || (*param_1 != '\x01')) goto LAB_1808f0b1c;
    uVar4 = 0x20;
    uStack_46 = 0;
    uStack_3f = 0;
    cStack_3d = '\0';
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    cStack_32 = '\0';
    uStack_31 = 0;
    uStack_30 = 0;
    uStack_29 = 0;
    uStack_28 = 0;
    uStack_1c = 0;
    cStack_1b = '\0';
    cStack_1a = '\0';
    cStack_19 = '\0';
    cStack_42 = param_1[0x23e8];
    cStack_41 = param_1[0x23e9];
    cStack_40 = param_1[0x23ea];
    uStack_48 = 0x205;
  }
  uStack_20 = 0;
  uStack_27 = 0;
  uStack_43 = 0;
  uStack_44 = 0;
  FUN_1808f2040(*(undefined4 *)(param_1 + 0x14),&uStack_48,uVar4);
LAB_1808f0b1c:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
}



ulonglong FUN_1808f0c10(char param_1,longlong param_2,byte param_3,char param_4)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 == '!') || (param_1 == '&')) {
    uVar4 = 0;
    while( true ) {
      bVar3 = (byte)uVar4 & 7;
      uVar5 = uVar4;
      if ((int)uVar4 < 0) {
        uVar5 = uVar4 + 7;
        bVar3 = bVar3 - 8;
      }
      in_RAX = (ulonglong)((int)uVar5 >> 3 & 0xff);
      if ((*(byte *)(in_RAX + param_2) >> (bVar3 & 0x1f) & 1) != 0) break;
      uVar4 = uVar4 + 1;
      if (9 < (int)uVar4) {
        return 0;
      }
    }
    if ((byte)uVar4 < 10) {
      if (param_1 != '!') {
        return (ulonglong)(byte)(((byte)(&UNK_180989f60)[uVar4 & 0xff] <= param_3) + 6);
      }
      return (ulonglong)(byte)(((byte)(&UNK_180989f30)[uVar4 & 0xff] <= param_3) + 1);
    }
  }
  else if (param_1 == '%') {
    uVar5 = 9;
    uVar4 = 2;
    do {
      bVar3 = (byte)uVar4 & 7;
      uVar1 = uVar4;
      if ((int)uVar4 < 0) {
        uVar1 = uVar4 + 7;
        bVar3 = bVar3 - 8;
      }
      in_RAX = (ulonglong)((int)uVar1 >> 3 & 0xff);
      if ((*(byte *)(in_RAX + param_2) >> (bVar3 & 0x1f) & 1) != 0) {
        bVar3 = (byte)uVar4;
        if ((char)uVar5 != '\t') break;
        uVar5 = uVar4 & 0xff;
      }
      uVar4 = uVar4 + 1;
      bVar3 = 9;
    } while ((int)uVar4 < 9);
    if ((((byte)uVar5 < 8) && (bVar3 < 9)) && ((byte)uVar5 < bVar3)) {
      if (param_4 == '\x05') {
        uVar2 = 3;
        if ((byte)(&UNK_180989f40)[uVar5] <= param_3) {
          uVar2 = 5;
        }
        return uVar2;
      }
      if ((byte)(&UNK_180989f40)[uVar5] <= param_3) {
        return (ulonglong)(byte)(((byte)(&UNK_180989f50)[bVar3] <= param_3) + 4);
      }
      return 3;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}






