#include "TaleWorlds.Native.Split.h"

// 99_part_14_part019.c - 1 个函数

// 函数: void FUN_1808fac70(longlong param_1,undefined8 param_2)
void FUN_1808fac70(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  undefined4 uStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  undefined1 *puStack_50;
  longlong lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  lStack_48 = 0;
  uVar6 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    do {
      iVar3 = lstrcmpA(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + uVar6 * 0x18),&UNK_18098ae20)
      ;
      pcVar2 = _DAT_180c69f78;
      if (iVar3 == 0) {
        puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x80) + 0x10 + uVar6 * 0x18);
        _guard_check_icall(_DAT_180c69f78);
        puStack_50 = auStack_40;
        plStack_58 = &lStack_48;
        uStack_60 = 0;
        uStack_68 = 0x8000;
        iVar3 = (*pcVar2)(0x10001,0x21,*(undefined8 *)(puVar1 + 2),*puVar1);
        if ((iVar3 == 1) &&
           (lVar4 = FUN_1808fa9b0(*(undefined8 *)(lStack_48 + 0x10),*(undefined4 *)(lStack_48 + 8),0
                                 ), lVar4 != 0)) {
          FileTimeToSystemTime(param_2,auStack_38);
        }
        break;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0x78));
  }
  LocalFree(lStack_48);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1808fade0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar8;
  undefined1 auStackX_8 [8];
  longlong lStackX_20;
  undefined1 *in_stack_fffffffffffffec8;
  undefined4 uVar9;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [8];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulonglong uVar7;
  
  uVar7 = 0;
  bVar8 = false;
  lStackX_20 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    do {
      if (bVar8 != false) break;
      iVar4 = lstrcmpA(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + uVar7 * 0x18),&UNK_18098adf8)
      ;
      pcVar2 = _DAT_180c69f78;
      uVar9 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
      if (iVar4 == 0) {
        puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x80) + 0x10 + uVar7 * 0x18);
        _guard_check_icall(_DAT_180c69f78);
        iVar4 = (*pcVar2)(0x10001,500,*(undefined8 *)(puVar1 + 2),*puVar1,CONCAT44(uVar9,0x8000),0,
                          &lStackX_20,auStackX_8);
        pcVar2 = _DAT_180c69f58;
        if (iVar4 != 1) break;
        uStack_d8 = *(undefined8 *)(lStackX_20 + 8);
        uStack_d0 = *(undefined8 *)(lStackX_20 + 0x10);
        uStack_100 = *(undefined4 *)(lStackX_20 + 0x18);
        uStack_fc = *(undefined4 *)(lStackX_20 + 0x1c);
        uStack_f8 = *(undefined4 *)(lStackX_20 + 0x20);
        uStack_f4 = *(undefined4 *)(lStackX_20 + 0x24);
        _guard_check_icall(_DAT_180c69f58);
        in_stack_fffffffffffffec8 = auStack_108;
        lVar5 = (*pcVar2)(param_2,0x10001,0,0xb0000,in_stack_fffffffffffffec8,0);
        if (lVar5 == 0) break;
        cVar3 = FUN_1808f92e0(lStackX_20,auStack_118);
        if (cVar3 != '\0') {
          iVar4 = CompareFileTime(param_3,auStack_118);
          bVar8 = iVar4 < 1;
        }
        pcVar2 = _DAT_180c69f50;
        _guard_check_icall(_DAT_180c69f50);
        (*pcVar2)(lVar5);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x78));
  }
  LocalFree(lStackX_20);
  return bVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_1808fae14(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong in_RAX;
  longlong lVar5;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined8 unaff_RDI;
  char unaff_R14B;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined1 *in_stack_00000020;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  longlong in_stack_00000178;
  
  *(undefined8 *)(in_RAX + 0x10) = unaff_RBX;
  *(undefined8 *)(in_RAX + -0x38) = unaff_RDI;
  do {
    if (unaff_R14B != '\0') break;
    iVar4 = lstrcmpA(*(undefined8 *)(*(longlong *)(unaff_RBP + 0x80) + (ulonglong)unaff_ESI * 0x18),
                     &UNK_18098adf8);
    pcVar2 = _DAT_180c69f78;
    uVar6 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
    if (iVar4 == 0) {
      puVar1 = *(undefined4 **)
                (*(longlong *)(unaff_RBP + 0x80) + 0x10 + (ulonglong)unaff_ESI * 0x18);
      _guard_check_icall(_DAT_180c69f78);
      iVar4 = (*pcVar2)(0x10001,500,*(undefined8 *)(puVar1 + 2),*puVar1,CONCAT44(uVar6,0x8000));
      pcVar2 = _DAT_180c69f58;
      if (iVar4 != 1) break;
      in_stack_00000080 = *(undefined8 *)(in_stack_00000178 + 8);
      in_stack_00000088 = *(undefined8 *)(in_stack_00000178 + 0x10);
      uStack0000000000000058 = *(undefined4 *)(in_stack_00000178 + 0x18);
      uStack000000000000005c = *(undefined4 *)(in_stack_00000178 + 0x1c);
      uStack0000000000000060 = *(undefined4 *)(in_stack_00000178 + 0x20);
      uStack0000000000000064 = *(undefined4 *)(in_stack_00000178 + 0x24);
      uVar6 = _guard_check_icall(_DAT_180c69f58);
      in_stack_00000020 = &stack0x00000050;
      lVar5 = (*pcVar2)(uVar6,0x10001,0,0xb0000,in_stack_00000020);
      if (lVar5 == 0) break;
      cVar3 = FUN_1808f92e0(in_stack_00000178,&stack0x00000040);
      if (cVar3 != '\0') {
        iVar4 = CompareFileTime(extraout_XMM0_Da,&stack0x00000040);
        unaff_R14B = iVar4 < 1;
      }
      pcVar2 = _DAT_180c69f50;
      _guard_check_icall(_DAT_180c69f50);
      (*pcVar2)(lVar5);
    }
    unaff_ESI = unaff_ESI + 1;
  } while (unaff_ESI < *(uint *)(unaff_RBP + 0x78));
  LocalFree(in_stack_00000178);
  return unaff_R14B;
}



undefined1 FUN_1808faf67(void)

{
  undefined1 unaff_R14B;
  undefined8 in_stack_00000178;
  
  LocalFree(in_stack_00000178);
  return unaff_R14B;
}



char * FUN_1808faf90(short *param_1,uint param_2,char param_3)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  char acStackX_8 [8];
  
  pcVar6 = (char *)0x0;
  SetLastError(0);
  if ((param_1 == (short *)0x0) ||
     (((sVar1 = *param_1, sVar1 != 0x5c && (sVar1 != 0x2f)) &&
      (((iVar3 = isalpha(sVar1), iVar3 == 0 || (param_1[1] != 0x3a)) ||
       ((param_1[2] != 0x2f && (param_1[2] != 0x5c)))))))) {
    SetLastError(0xa0);
    return (char *)0x0;
  }
  uVar4 = GetFileAttributesW(param_1);
  if ((uVar4 == 0xffffffff) || ((uVar4 & 0x50) != 0)) {
    SetLastError(0x7e);
    return (char *)0x0;
  }
  lVar5 = CreateFileW(param_1,0x80000000,1,0,3,0,0);
  if (lVar5 == -1) {
    uVar7 = 0x20;
    goto LAB_1808fb04a;
  }
  acStackX_8[0] = '\0';
  pcVar8 = acStackX_8;
  if (param_3 == '\0') {
    pcVar8 = pcVar6;
  }
  cVar2 = FUN_1808fb170(param_1,pcVar8);
  if (cVar2 == '\0') {
    FUN_1808fb9a0(&UNK_18098aa80,0x2dd,&UNK_18098aa60,&UNK_18098aa48);
    FUN_1808fb730(&UNK_18098aad8,param_1);
LAB_1808fb0e9:
    uVar7 = GetLastError();
    cVar2 = FUN_1808fa4a0(param_1,uVar7);
    if (cVar2 != '\0') goto LAB_1808fb0fd;
  }
  else {
    if ((param_3 != '\0') && (acStackX_8[0] == '\0')) {
      SetLastError(0x80092009);
      FUN_1808fb9a0(&UNK_18098aa80,0x2e5,&UNK_18098aa60,&UNK_18098ab18);
      goto LAB_1808fb0e9;
    }
LAB_1808fb0fd:
    pcVar6 = (char *)LoadLibraryExW(param_1,0,param_2 & 0xffffe0f7);
  }
  if (lVar5 == 0) {
    return pcVar6;
  }
  uVar7 = GetLastError();
  CloseHandle(lVar5);
LAB_1808fb04a:
  SetLastError(uVar7);
  return pcVar6;
}



undefined8
FUN_1808fb027(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  char unaff_BPL;
  undefined8 unaff_RDI;
  
  lVar2 = CreateFileW(param_1,param_2,(int)param_4 + 1,param_4,3);
  if (lVar2 == -1) {
    uVar3 = 0x20;
    goto LAB_1808fb04a;
  }
  cVar1 = FUN_1808fb170();
  if (cVar1 == '\0') {
    FUN_1808fb9a0(&UNK_18098aa80,0x2dd,&UNK_18098aa60,&UNK_18098aa48);
    FUN_1808fb730(&UNK_18098aad8);
LAB_1808fb0e9:
    GetLastError();
    cVar1 = FUN_1808fa4a0();
    if (cVar1 != '\0') goto LAB_1808fb0fd;
  }
  else {
    if (unaff_BPL != '\0') {
      SetLastError(0x80092009);
      FUN_1808fb9a0(&UNK_18098aa80,0x2e5,&UNK_18098aa60,&UNK_18098ab18);
      goto LAB_1808fb0e9;
    }
LAB_1808fb0fd:
    unaff_RDI = LoadLibraryExW();
  }
  if (lVar2 == 0) {
    return unaff_RDI;
  }
  uVar3 = GetLastError();
  CloseHandle(lVar2);
LAB_1808fb04a:
  SetLastError(uVar3);
  return unaff_RDI;
}



undefined8 FUN_1808fb066(void)

{
  char cVar1;
  undefined4 uVar2;
  char unaff_BPL;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  char cStack0000000000000060;
  
  cStack0000000000000060 = (char)unaff_RDI;
  cVar1 = FUN_1808fb170();
  if (cVar1 == '\0') {
    FUN_1808fb9a0(&UNK_18098aa80,0x2dd,&UNK_18098aa60,&UNK_18098aa48);
    FUN_1808fb730(&UNK_18098aad8);
LAB_1808fb0e9:
    GetLastError();
    cVar1 = FUN_1808fa4a0();
    if (cVar1 == '\0') goto LAB_1808fb115;
  }
  else if ((unaff_BPL != '\0') && (cStack0000000000000060 == (char)unaff_RDI)) {
    SetLastError(0x80092009);
    FUN_1808fb9a0(&UNK_18098aa80,0x2e5,&UNK_18098aa60,&UNK_18098ab18);
    goto LAB_1808fb0e9;
  }
  unaff_RDI = LoadLibraryExW();
LAB_1808fb115:
  if (unaff_RSI != 0) {
    uVar2 = GetLastError();
    CloseHandle();
    SetLastError(uVar2);
  }
  return unaff_RDI;
}






