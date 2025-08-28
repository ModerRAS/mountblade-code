#include "TaleWorlds.Native.Split.h"

// 99_part_12_part064.c - 3 个函数

// 函数: void FUN_1807f75f2(void)
void FUN_1807f75f2(void)

{
  ulonglong in_stack_00000860;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000860 ^ (ulonglong)&stack0x00000000);
}



undefined8 FUN_1807f7610(longlong param_1,undefined8 param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_48 [40];
  
  *param_4 = 0;
  if (*(int *)(param_1 + 0x200) != 0) {
    uVar1 = *(uint *)(param_1 + 0x204);
    if (uVar1 == 0) {
      uVar3 = FUN_1807f5fd0(param_1,auStack_48,1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
                    // WARNING: Subroutine does not return
      memset(*(undefined8 *)(param_1 + 0x208),0,0xff1);
    }
    if (uVar1 < param_3) {
      param_3 = uVar1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x1f8);
  uVar2 = *(uint *)(param_1 + 0x24);
  if (uVar1 != uVar2) {
    uVar4 = uVar2 - uVar1;
    if (uVar1 + param_3 <= uVar2) {
      uVar4 = param_3;
    }
    if (0x1000 < uVar4) {
      uVar4 = 0x1000;
    }
    uVar1 = *(uint *)(param_1 + 0x204);
    if ((uVar1 != 0) && (uVar1 < uVar4)) {
      uVar4 = uVar1;
    }
    uVar3 = FUN_1807f5fd0(param_1,param_2,uVar4);
    if ((int)uVar3 == 0) {
      *param_4 = uVar4;
      *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + uVar4;
      if (*(int *)(param_1 + 0x200) != 0) {
        *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x204) - uVar4;
      }
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0x10;
}



undefined8 FUN_1807f769b(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int in_EAX;
  int iVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  uint unaff_EBP;
  longlong unaff_RDI;
  char cStack0000000000000090;
  uint *in_stack_000000a8;
  
  lVar5 = *(longlong *)(unaff_RDI + 0x198);
  cStack0000000000000090 = (char)in_EAX;
  if (lVar5 != 0) {
    func_0x000180743c20(lVar5,in_EAX + 0xb);
    cStack0000000000000090 = '\x01';
  }
  lVar7 = FUN_18076b7c0(*(undefined8 *)(unaff_RDI + 0x208),&UNK_18097e5d8);
  if (lVar7 != 0) {
    *(undefined1 *)(lVar7 + 0xb) = 0;
    lVar11 = lVar7 + 0xd;
    cVar2 = *(char *)(lVar7 + 0xd);
    while ((cVar2 != '\0' && (cVar2 != ';'))) {
      pcVar1 = (char *)(lVar11 + 1);
      lVar11 = lVar11 + 1;
      cVar2 = *pcVar1;
    }
    *(undefined1 *)(lVar11 + -1) = 0;
    puVar8 = (undefined1 *)FUN_18076b7c0(lVar7 + 0xd,&DAT_1809fd738);
    if (puVar8 != (undefined1 *)0x0) {
      *puVar8 = 0;
      puVar8 = puVar8 + 3;
    }
    iVar6 = func_0x00018076b690(lVar7 + 0xd);
    FUN_1807d84c0(unaff_RDI + 0x210,4,&UNK_18097df10,lVar7 + 0xd,iVar6 + 1);
    if (puVar8 != (undefined1 *)0x0) {
      iVar6 = func_0x00018076b690(puVar8);
      FUN_1807d84c0(unaff_RDI + 0x210,4,&UNK_18095b4f8,puVar8,iVar6 + 1);
    }
    *(undefined1 *)(lVar7 + 0xb) = 0x20;
    *(undefined1 *)(lVar11 + -1) = 0x20;
    if (puVar8 != (undefined1 *)0x0) {
      puVar8[-3] = 0x20;
    }
  }
  lVar7 = FUN_18076b7c0(*(undefined8 *)(unaff_RDI + 0x208),&UNK_18097e5e8);
  if (lVar7 != 0) {
    *(undefined1 *)(lVar7 + 9) = 0;
    lVar11 = lVar7 + 0xb;
    cVar2 = *(char *)(lVar7 + 0xb);
    while ((cVar2 != '\0' && (cVar2 != ';'))) {
      pcVar1 = (char *)(lVar11 + 1);
      lVar11 = lVar11 + 1;
      cVar2 = *pcVar1;
    }
    *(undefined1 *)(lVar11 + -1) = 0;
    iVar6 = func_0x00018076b690(lVar7 + 0xb);
    FUN_1807d84c0(unaff_RDI + 0x210,4,lVar7,lVar7 + 0xb,iVar6 + 1);
  }
  if ((cStack0000000000000090 != '\0') && (lVar5 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar5,0xb);
  }
  *(undefined4 *)(unaff_RDI + 0x204) = *(undefined4 *)(unaff_RDI + 0x200);
  uVar3 = *(uint *)(unaff_RDI + 0x1f8);
  uVar4 = *(uint *)(unaff_RDI + 0x24);
  if (uVar3 != uVar4) {
    uVar10 = uVar4 - uVar3;
    if (uVar3 + unaff_EBP <= uVar4) {
      uVar10 = unaff_EBP;
    }
    if (0x1000 < uVar10) {
      uVar10 = 0x1000;
    }
    uVar3 = *(uint *)(unaff_RDI + 0x204);
    if ((uVar3 != 0) && (uVar3 < uVar10)) {
      uVar10 = uVar3;
    }
    uVar9 = FUN_1807f5fd0();
    if ((int)uVar9 == 0) {
      *in_stack_000000a8 = uVar10;
      *(int *)(unaff_RDI + 0x1f8) = *(int *)(unaff_RDI + 0x1f8) + uVar10;
      if (*(int *)(unaff_RDI + 0x200) != 0) {
        *(int *)(unaff_RDI + 0x204) = *(int *)(unaff_RDI + 0x204) - uVar10;
      }
      uVar9 = 0;
    }
    return uVar9;
  }
  return 0x10;
}



undefined8 FUN_1807f76aa(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char in_AL;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  uint unaff_EBP;
  longlong unaff_RDI;
  longlong unaff_R12;
  char cStack0000000000000090;
  uint *in_stack_000000a8;
  
  cStack0000000000000090 = in_AL;
  if (unaff_R12 != 0) {
    func_0x000180743c20();
    cStack0000000000000090 = '\x01';
  }
  lVar6 = FUN_18076b7c0(*(undefined8 *)(unaff_RDI + 0x208),&UNK_18097e5d8);
  if (lVar6 != 0) {
    *(undefined1 *)(lVar6 + 0xb) = 0;
    lVar10 = lVar6 + 0xd;
    cVar2 = *(char *)(lVar6 + 0xd);
    while ((cVar2 != '\0' && (cVar2 != ';'))) {
      pcVar1 = (char *)(lVar10 + 1);
      lVar10 = lVar10 + 1;
      cVar2 = *pcVar1;
    }
    *(undefined1 *)(lVar10 + -1) = 0;
    puVar7 = (undefined1 *)FUN_18076b7c0(lVar6 + 0xd,&DAT_1809fd738);
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = 0;
      puVar7 = puVar7 + 3;
    }
    iVar5 = func_0x00018076b690(lVar6 + 0xd);
    FUN_1807d84c0(unaff_RDI + 0x210,4,&UNK_18097df10,lVar6 + 0xd,iVar5 + 1);
    if (puVar7 != (undefined1 *)0x0) {
      iVar5 = func_0x00018076b690(puVar7);
      FUN_1807d84c0(unaff_RDI + 0x210,4,&UNK_18095b4f8,puVar7,iVar5 + 1);
    }
    *(undefined1 *)(lVar6 + 0xb) = 0x20;
    *(undefined1 *)(lVar10 + -1) = 0x20;
    if (puVar7 != (undefined1 *)0x0) {
      puVar7[-3] = 0x20;
    }
  }
  lVar6 = FUN_18076b7c0(*(undefined8 *)(unaff_RDI + 0x208),&UNK_18097e5e8);
  if (lVar6 != 0) {
    *(undefined1 *)(lVar6 + 9) = 0;
    lVar10 = lVar6 + 0xb;
    cVar2 = *(char *)(lVar6 + 0xb);
    while ((cVar2 != '\0' && (cVar2 != ';'))) {
      pcVar1 = (char *)(lVar10 + 1);
      lVar10 = lVar10 + 1;
      cVar2 = *pcVar1;
    }
    *(undefined1 *)(lVar10 + -1) = 0;
    iVar5 = func_0x00018076b690(lVar6 + 0xb);
    FUN_1807d84c0(unaff_RDI + 0x210,4,lVar6,lVar6 + 0xb,iVar5 + 1);
  }
  if ((cStack0000000000000090 != '\0') && (unaff_R12 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  *(undefined4 *)(unaff_RDI + 0x204) = *(undefined4 *)(unaff_RDI + 0x200);
  uVar3 = *(uint *)(unaff_RDI + 0x1f8);
  uVar4 = *(uint *)(unaff_RDI + 0x24);
  if (uVar3 != uVar4) {
    uVar9 = uVar4 - uVar3;
    if (uVar3 + unaff_EBP <= uVar4) {
      uVar9 = unaff_EBP;
    }
    if (0x1000 < uVar9) {
      uVar9 = 0x1000;
    }
    uVar3 = *(uint *)(unaff_RDI + 0x204);
    if ((uVar3 != 0) && (uVar3 < uVar9)) {
      uVar9 = uVar3;
    }
    uVar8 = FUN_1807f5fd0();
    if ((int)uVar8 == 0) {
      *in_stack_000000a8 = uVar9;
      *(int *)(unaff_RDI + 0x1f8) = *(int *)(unaff_RDI + 0x1f8) + uVar9;
      if (*(int *)(unaff_RDI + 0x200) != 0) {
        *(int *)(unaff_RDI + 0x204) = *(int *)(unaff_RDI + 0x204) - uVar9;
      }
      uVar8 = 0;
    }
    return uVar8;
  }
  return 0x10;
}



undefined8 FUN_1807f76f9(char param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong in_RAX;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong unaff_RBX;
  uint unaff_EBP;
  longlong unaff_RDI;
  longlong lVar10;
  longlong unaff_R12;
  longlong unaff_R14;
  char in_stack_00000090;
  uint *in_stack_000000a8;
  
  if (param_1 != '\0') {
    do {
      if (param_1 == ';') break;
      param_1 = *(char *)(unaff_RBX + 1);
      unaff_RBX = unaff_RBX + 1;
    } while (param_1 != '\0');
  }
  *(undefined1 *)(unaff_RBX + -1) = 0;
  puVar6 = (undefined1 *)FUN_18076b7c0(in_RAX + 0xd,&DAT_1809fd738);
  if (puVar6 != (undefined1 *)0x0) {
    *puVar6 = 0;
    puVar6 = puVar6 + 3;
  }
  iVar5 = func_0x00018076b690(unaff_R14 + 0xd);
  FUN_1807d84c0(unaff_RDI + 0x210,4,&UNK_18097df10,unaff_R14 + 0xd,iVar5 + 1);
  if (puVar6 != (undefined1 *)0x0) {
    iVar5 = func_0x00018076b690(puVar6);
    FUN_1807d84c0(unaff_RDI + 0x210,4,&UNK_18095b4f8,puVar6,iVar5 + 1);
  }
  *(undefined1 *)(unaff_R14 + 0xb) = 0x20;
  *(undefined1 *)(unaff_RBX + -1) = 0x20;
  if (puVar6 != (undefined1 *)0x0) {
    puVar6[-3] = 0x20;
  }
  lVar7 = FUN_18076b7c0(*(undefined8 *)(unaff_RDI + 0x208),&UNK_18097e5e8);
  if (lVar7 != 0) {
    *(undefined1 *)(lVar7 + 9) = 0;
    lVar10 = lVar7 + 0xb;
    cVar2 = *(char *)(lVar7 + 0xb);
    while ((cVar2 != '\0' && (cVar2 != ';'))) {
      pcVar1 = (char *)(lVar10 + 1);
      lVar10 = lVar10 + 1;
      cVar2 = *pcVar1;
    }
    *(undefined1 *)(lVar10 + -1) = 0;
    iVar5 = func_0x00018076b690(lVar7 + 0xb);
    FUN_1807d84c0(unaff_RDI + 0x210,4,lVar7,lVar7 + 0xb,iVar5 + 1);
  }
  if ((in_stack_00000090 != '\0') && (unaff_R12 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  *(undefined4 *)(unaff_RDI + 0x204) = *(undefined4 *)(unaff_RDI + 0x200);
  uVar3 = *(uint *)(unaff_RDI + 0x1f8);
  uVar4 = *(uint *)(unaff_RDI + 0x24);
  if (uVar3 != uVar4) {
    uVar9 = uVar4 - uVar3;
    if (uVar3 + unaff_EBP <= uVar4) {
      uVar9 = unaff_EBP;
    }
    if (0x1000 < uVar9) {
      uVar9 = 0x1000;
    }
    uVar3 = *(uint *)(unaff_RDI + 0x204);
    if ((uVar3 != 0) && (uVar3 < uVar9)) {
      uVar9 = uVar3;
    }
    uVar8 = FUN_1807f5fd0();
    if ((int)uVar8 == 0) {
      *in_stack_000000a8 = uVar9;
      *(int *)(unaff_RDI + 0x1f8) = *(int *)(unaff_RDI + 0x1f8) + uVar9;
      if (*(int *)(unaff_RDI + 0x200) != 0) {
        *(int *)(unaff_RDI + 0x204) = *(int *)(unaff_RDI + 0x204) - uVar9;
      }
      uVar8 = 0;
    }
    return uVar8;
  }
  return 0x10;
}



undefined8 FUN_1807f76fe(char param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong in_RAX;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong unaff_RBX;
  uint unaff_EBP;
  longlong unaff_RDI;
  longlong lVar10;
  longlong unaff_R12;
  longlong unaff_R14;
  char in_stack_00000090;
  uint *in_stack_000000a8;
  
  if (param_1 != '\0') {
    do {
      if (param_1 == ';') break;
      param_1 = *(char *)(unaff_RBX + 1);
      unaff_RBX = unaff_RBX + 1;
    } while (param_1 != '\0');
  }
  *(undefined1 *)(unaff_RBX + -1) = 0;
  puVar6 = (undefined1 *)FUN_18076b7c0(in_RAX + 0xd,&DAT_1809fd738);
  if (puVar6 != (undefined1 *)0x0) {
    *puVar6 = 0;
    puVar6 = puVar6 + 3;
  }
  iVar5 = func_0x00018076b690(unaff_R14 + 0xd);
  FUN_1807d84c0(unaff_RDI + 0x210,4,&UNK_18097df10,unaff_R14 + 0xd,iVar5 + 1);
  if (puVar6 != (undefined1 *)0x0) {
    iVar5 = func_0x00018076b690(puVar6);
    FUN_1807d84c0(unaff_RDI + 0x210,4,&UNK_18095b4f8,puVar6,iVar5 + 1);
  }
  *(undefined1 *)(unaff_R14 + 0xb) = 0x20;
  *(undefined1 *)(unaff_RBX + -1) = 0x20;
  if (puVar6 != (undefined1 *)0x0) {
    puVar6[-3] = 0x20;
  }
  lVar7 = FUN_18076b7c0(*(undefined8 *)(unaff_RDI + 0x208),&UNK_18097e5e8);
  if (lVar7 != 0) {
    *(undefined1 *)(lVar7 + 9) = 0;
    lVar10 = lVar7 + 0xb;
    cVar2 = *(char *)(lVar7 + 0xb);
    while ((cVar2 != '\0' && (cVar2 != ';'))) {
      pcVar1 = (char *)(lVar10 + 1);
      lVar10 = lVar10 + 1;
      cVar2 = *pcVar1;
    }
    *(undefined1 *)(lVar10 + -1) = 0;
    iVar5 = func_0x00018076b690(lVar7 + 0xb);
    FUN_1807d84c0(unaff_RDI + 0x210,4,lVar7,lVar7 + 0xb,iVar5 + 1);
  }
  if ((in_stack_00000090 != '\0') && (unaff_R12 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  *(undefined4 *)(unaff_RDI + 0x204) = *(undefined4 *)(unaff_RDI + 0x200);
  uVar3 = *(uint *)(unaff_RDI + 0x1f8);
  uVar4 = *(uint *)(unaff_RDI + 0x24);
  if (uVar3 != uVar4) {
    uVar9 = uVar4 - uVar3;
    if (uVar3 + unaff_EBP <= uVar4) {
      uVar9 = unaff_EBP;
    }
    if (0x1000 < uVar9) {
      uVar9 = 0x1000;
    }
    uVar3 = *(uint *)(unaff_RDI + 0x204);
    if ((uVar3 != 0) && (uVar3 < uVar9)) {
      uVar9 = uVar3;
    }
    uVar8 = FUN_1807f5fd0();
    if ((int)uVar8 == 0) {
      *in_stack_000000a8 = uVar9;
      *(int *)(unaff_RDI + 0x1f8) = *(int *)(unaff_RDI + 0x1f8) + uVar9;
      if (*(int *)(unaff_RDI + 0x200) != 0) {
        *(int *)(unaff_RDI + 0x204) = *(int *)(unaff_RDI + 0x204) - uVar9;
      }
      uVar8 = 0;
    }
    return uVar8;
  }
  return 0x10;
}



undefined8 FUN_1807f777c(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong unaff_RBX;
  uint unaff_EBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar9;
  longlong unaff_R12;
  longlong unaff_R14;
  char in_stack_00000090;
  uint *in_stack_000000a8;
  
  func_0x00018076b690();
  FUN_1807d84c0(unaff_RDI + 0x210,4,&UNK_18095b4f8);
  *(undefined1 *)(unaff_R14 + 0xb) = 0x20;
  *(undefined1 *)(unaff_RBX + -1) = 0x20;
  if (unaff_RSI != 0) {
    *(undefined1 *)(unaff_RSI + -3) = 0x20;
  }
  lVar6 = FUN_18076b7c0(*(undefined8 *)(unaff_RDI + 0x208),&UNK_18097e5e8);
  if (lVar6 != 0) {
    *(undefined1 *)(lVar6 + 9) = 0;
    lVar9 = lVar6 + 0xb;
    cVar2 = *(char *)(lVar6 + 0xb);
    while ((cVar2 != '\0' && (cVar2 != ';'))) {
      pcVar1 = (char *)(lVar9 + 1);
      lVar9 = lVar9 + 1;
      cVar2 = *pcVar1;
    }
    *(undefined1 *)(lVar9 + -1) = 0;
    iVar5 = func_0x00018076b690(lVar6 + 0xb);
    FUN_1807d84c0(unaff_RDI + 0x210,4,lVar6,lVar6 + 0xb,iVar5 + 1);
  }
  if ((in_stack_00000090 != '\0') && (unaff_R12 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  *(undefined4 *)(unaff_RDI + 0x204) = *(undefined4 *)(unaff_RDI + 0x200);
  uVar3 = *(uint *)(unaff_RDI + 0x1f8);
  uVar4 = *(uint *)(unaff_RDI + 0x24);
  if (uVar3 != uVar4) {
    uVar8 = uVar4 - uVar3;
    if (uVar3 + unaff_EBP <= uVar4) {
      uVar8 = unaff_EBP;
    }
    if (0x1000 < uVar8) {
      uVar8 = 0x1000;
    }
    uVar3 = *(uint *)(unaff_RDI + 0x204);
    if ((uVar3 != 0) && (uVar3 < uVar8)) {
      uVar8 = uVar3;
    }
    uVar7 = FUN_1807f5fd0();
    if ((int)uVar7 == 0) {
      *in_stack_000000a8 = uVar8;
      *(int *)(unaff_RDI + 0x1f8) = *(int *)(unaff_RDI + 0x1f8) + uVar8;
      if (*(int *)(unaff_RDI + 0x200) != 0) {
        *(int *)(unaff_RDI + 0x204) = *(int *)(unaff_RDI + 0x204) - uVar8;
      }
      uVar7 = 0;
    }
    return uVar7;
  }
  return 0x10;
}



undefined8 FUN_1807f77c5(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint unaff_EBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar9;
  longlong unaff_R12;
  char in_stack_00000090;
  uint *in_stack_000000a8;
  
  *(undefined1 *)(unaff_RSI + -3) = 0x20;
  lVar6 = FUN_18076b7c0(*(undefined8 *)(unaff_RDI + 0x208),&UNK_18097e5e8);
  if (lVar6 != 0) {
    *(undefined1 *)(lVar6 + 9) = 0;
    lVar9 = lVar6 + 0xb;
    cVar2 = *(char *)(lVar6 + 0xb);
    while ((cVar2 != '\0' && (cVar2 != ';'))) {
      pcVar1 = (char *)(lVar9 + 1);
      lVar9 = lVar9 + 1;
      cVar2 = *pcVar1;
    }
    *(undefined1 *)(lVar9 + -1) = 0;
    iVar5 = func_0x00018076b690(lVar6 + 0xb);
    FUN_1807d84c0(unaff_RDI + 0x210,4,lVar6,lVar6 + 0xb,iVar5 + 1);
  }
  if ((in_stack_00000090 != '\0') && (unaff_R12 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  *(undefined4 *)(unaff_RDI + 0x204) = *(undefined4 *)(unaff_RDI + 0x200);
  uVar3 = *(uint *)(unaff_RDI + 0x1f8);
  uVar4 = *(uint *)(unaff_RDI + 0x24);
  if (uVar3 != uVar4) {
    uVar8 = uVar4 - uVar3;
    if (uVar3 + unaff_EBP <= uVar4) {
      uVar8 = unaff_EBP;
    }
    if (0x1000 < uVar8) {
      uVar8 = 0x1000;
    }
    uVar3 = *(uint *)(unaff_RDI + 0x204);
    if ((uVar3 != 0) && (uVar3 < uVar8)) {
      uVar8 = uVar3;
    }
    uVar7 = FUN_1807f5fd0();
    if ((int)uVar7 == 0) {
      *in_stack_000000a8 = uVar8;
      *(int *)(unaff_RDI + 0x1f8) = *(int *)(unaff_RDI + 0x1f8) + uVar8;
      if (*(int *)(unaff_RDI + 0x200) != 0) {
        *(int *)(unaff_RDI + 0x204) = *(int *)(unaff_RDI + 0x204) - uVar8;
      }
      uVar7 = 0;
    }
    return uVar7;
  }
  return 0x10;
}



undefined8 FUN_1807f77e9(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong in_RAX;
  undefined8 uVar5;
  uint uVar6;
  uint unaff_EBP;
  longlong unaff_RDI;
  longlong lVar7;
  longlong unaff_R12;
  char in_stack_00000090;
  uint *in_stack_000000a8;
  
  *(undefined1 *)(in_RAX + 9) = 0;
  lVar7 = in_RAX + 0xb;
  cVar2 = *(char *)(in_RAX + 0xb);
  while ((cVar2 != '\0' && (cVar2 != ';'))) {
    pcVar1 = (char *)(lVar7 + 1);
    lVar7 = lVar7 + 1;
    cVar2 = *pcVar1;
  }
  *(undefined1 *)(lVar7 + -1) = 0;
  func_0x00018076b690(in_RAX + 0xb);
  FUN_1807d84c0(unaff_RDI + 0x210,4);
  if ((in_stack_00000090 != '\0') && (unaff_R12 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  *(undefined4 *)(unaff_RDI + 0x204) = *(undefined4 *)(unaff_RDI + 0x200);
  uVar3 = *(uint *)(unaff_RDI + 0x1f8);
  uVar4 = *(uint *)(unaff_RDI + 0x24);
  if (uVar3 != uVar4) {
    uVar6 = uVar4 - uVar3;
    if (uVar3 + unaff_EBP <= uVar4) {
      uVar6 = unaff_EBP;
    }
    if (0x1000 < uVar6) {
      uVar6 = 0x1000;
    }
    uVar3 = *(uint *)(unaff_RDI + 0x204);
    if ((uVar3 != 0) && (uVar3 < uVar6)) {
      uVar6 = uVar3;
    }
    uVar5 = FUN_1807f5fd0();
    if ((int)uVar5 == 0) {
      *in_stack_000000a8 = uVar6;
      *(int *)(unaff_RDI + 0x1f8) = *(int *)(unaff_RDI + 0x1f8) + uVar6;
      if (*(int *)(unaff_RDI + 0x200) != 0) {
        *(int *)(unaff_RDI + 0x204) = *(int *)(unaff_RDI + 0x204) - uVar6;
      }
      uVar5 = 0;
    }
    return uVar5;
  }
  return 0x10;
}



undefined8 FUN_1807f788c(void)

{
  uint uVar1;
  uint uVar2;
  uint in_EAX;
  undefined8 uVar3;
  uint uVar4;
  uint unaff_EBP;
  uint *unaff_RSI;
  longlong unaff_RDI;
  
  if (in_EAX < unaff_EBP) {
    unaff_EBP = in_EAX;
  }
  uVar1 = *(uint *)(unaff_RDI + 0x1f8);
  uVar2 = *(uint *)(unaff_RDI + 0x24);
  if (uVar1 == uVar2) {
    return 0x10;
  }
  uVar4 = uVar2 - uVar1;
  if (uVar1 + unaff_EBP <= uVar2) {
    uVar4 = unaff_EBP;
  }
  if (0x1000 < uVar4) {
    uVar4 = 0x1000;
  }
  uVar1 = *(uint *)(unaff_RDI + 0x204);
  if ((uVar1 != 0) && (uVar1 < uVar4)) {
    uVar4 = uVar1;
  }
  uVar3 = FUN_1807f5fd0();
  if ((int)uVar3 == 0) {
    *unaff_RSI = uVar4;
    *(int *)(unaff_RDI + 0x1f8) = *(int *)(unaff_RDI + 0x1f8) + uVar4;
    if (*(int *)(unaff_RDI + 0x200) != 0) {
      *(int *)(unaff_RDI + 0x204) = *(int *)(unaff_RDI + 0x204) - uVar4;
    }
    uVar3 = 0;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807f7910(void)
void FUN_1807f7910(void)

{
  undefined1 auStack_878 [80];
  undefined1 auStack_828 [2048];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_878;
                    // WARNING: Subroutine does not return
  memset(auStack_828,0,0x800);
}






// 函数: void FUN_1807f7964(void)
void FUN_1807f7964(void)

{
  int iVar1;
  undefined8 in_RAX;
  longlong unaff_RBX;
  undefined4 unaff_EDI;
  undefined4 uStack0000000000000028;
  undefined2 *puStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined4 uStack0000000000000040;
  ulonglong in_stack_00000850;
  
  uStack0000000000000040 = 0x7ff;
  uStack0000000000000028 = 0x1000;
  puStack0000000000000030 = (undefined2 *)(unaff_RBX + 0x2280);
  uStack0000000000000038 = in_RAX;
  iVar1 = FUN_1807f7090();
  if (iVar1 == 0) {
    uStack0000000000000038 = CONCAT44(uStack0000000000000038._4_4_,unaff_EDI);
    puStack0000000000000030 = (undefined2 *)0x0;
    uStack0000000000000028 =
         CONCAT22(uStack0000000000000028._2_2_,*(undefined2 *)(unaff_RBX + 0x2280));
    iVar1 = FUN_1807f61c0();
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_RBX + 0x1f8) = unaff_EDI;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000850 ^ (ulonglong)&stack0x00000000);
}






