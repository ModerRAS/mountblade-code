#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part064.c - 3 个函数

// 函数: void FUN_1807f75f2(void)
void FUN_1807f75f2(void)

{
  uint64_t in_stack_00000860;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000860 ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_1807f7610(int64_t param_1,uint64_t param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint uVar4;
  int8_t auStack_48 [40];
  
  *param_4 = 0;
  if (*(int *)(param_1 + 0x200) != 0) {
    uVar1 = *(uint *)(param_1 + 0x204);
    if (uVar1 == 0) {
      uVar3 = FUN_1807f5fd0(param_1,auStack_48,1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
                    // WARNING: Subroutine does not return
      memset(*(uint64_t *)(param_1 + 0x208),0,0xff1);
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



uint64_t FUN_1807f769b(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int64_t lVar5;
  int in_EAX;
  int iVar6;
  int64_t lVar7;
  int8_t *puVar8;
  uint64_t uVar9;
  uint uVar10;
  int64_t lVar11;
  uint unaff_EBP;
  int64_t unaff_RDI;
  char cStack0000000000000090;
  uint *in_stack_000000a8;
  
  lVar5 = *(int64_t *)(unaff_RDI + 0x198);
  cStack0000000000000090 = (char)in_EAX;
  if (lVar5 != 0) {
    func_0x000180743c20(lVar5,in_EAX + 0xb);
    cStack0000000000000090 = '\x01';
  }
  lVar7 = FUN_18076b7c0(*(uint64_t *)(unaff_RDI + 0x208),&unknown_var_5720_ptr);
  if (lVar7 != 0) {
    *(int8_t *)(lVar7 + 0xb) = 0;
    lVar11 = lVar7 + 0xd;
    cVar2 = *(char *)(lVar7 + 0xd);
    while ((cVar2 != '\0' && (cVar2 != ';'))) {
      pcVar1 = (char *)(lVar11 + 1);
      lVar11 = lVar11 + 1;
      cVar2 = *pcVar1;
    }
    *(int8_t *)(lVar11 + -1) = 0;
    puVar8 = (int8_t *)FUN_18076b7c0(lVar7 + 0xd,&system_data_d738);
    if (puVar8 != (int8_t *)0x0) {
      *puVar8 = 0;
      puVar8 = puVar8 + 3;
    }
    iVar6 = func_0x00018076b690(lVar7 + 0xd);
    FUN_1807d84c0(unaff_RDI + 0x210,4,&unknown_var_3984_ptr,lVar7 + 0xd,iVar6 + 1);
    if (puVar8 != (int8_t *)0x0) {
      iVar6 = func_0x00018076b690(puVar8);
      FUN_1807d84c0(unaff_RDI + 0x210,4,&unknown_var_2136_ptr,puVar8,iVar6 + 1);
    }
    *(int8_t *)(lVar7 + 0xb) = 0x20;
    *(int8_t *)(lVar11 + -1) = 0x20;
    if (puVar8 != (int8_t *)0x0) {
      puVar8[-3] = 0x20;
    }
  }
  lVar7 = FUN_18076b7c0(*(uint64_t *)(unaff_RDI + 0x208),&unknown_var_5736_ptr);
  if (lVar7 != 0) {
    *(int8_t *)(lVar7 + 9) = 0;
    lVar11 = lVar7 + 0xb;
    cVar2 = *(char *)(lVar7 + 0xb);
    while ((cVar2 != '\0' && (cVar2 != ';'))) {
      pcVar1 = (char *)(lVar11 + 1);
      lVar11 = lVar11 + 1;
      cVar2 = *pcVar1;
    }
    *(int8_t *)(lVar11 + -1) = 0;
    iVar6 = func_0x00018076b690(lVar7 + 0xb);
    FUN_1807d84c0(unaff_RDI + 0x210,4,lVar7,lVar7 + 0xb,iVar6 + 1);
  }
  if ((cStack0000000000000090 != '\0') && (lVar5 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar5,0xb);
  }
  *(int32_t *)(unaff_RDI + 0x204) = *(int32_t *)(unaff_RDI + 0x200);
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



uint64_t FUN_1807f76aa(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char in_AL;
  int iVar5;
  int64_t lVar6;
  int8_t *puVar7;
  uint64_t uVar8;
  uint uVar9;
  int64_t lVar10;
  uint unaff_EBP;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  char cStack0000000000000090;
  uint *in_stack_000000a8;
  
  cStack0000000000000090 = in_AL;
  if (unaff_R12 != 0) {
    func_0x000180743c20();
    cStack0000000000000090 = '\x01';
  }
  lVar6 = FUN_18076b7c0(*(uint64_t *)(unaff_RDI + 0x208),&unknown_var_5720_ptr);
  if (lVar6 != 0) {
    *(int8_t *)(lVar6 + 0xb) = 0;
    lVar10 = lVar6 + 0xd;
    cVar2 = *(char *)(lVar6 + 0xd);
    while ((cVar2 != '\0' && (cVar2 != ';'))) {
      pcVar1 = (char *)(lVar10 + 1);
      lVar10 = lVar10 + 1;
      cVar2 = *pcVar1;
    }
    *(int8_t *)(lVar10 + -1) = 0;
    puVar7 = (int8_t *)FUN_18076b7c0(lVar6 + 0xd,&system_data_d738);
    if (puVar7 != (int8_t *)0x0) {
      *puVar7 = 0;
      puVar7 = puVar7 + 3;
    }
    iVar5 = func_0x00018076b690(lVar6 + 0xd);
    FUN_1807d84c0(unaff_RDI + 0x210,4,&unknown_var_3984_ptr,lVar6 + 0xd,iVar5 + 1);
    if (puVar7 != (int8_t *)0x0) {
      iVar5 = func_0x00018076b690(puVar7);
      FUN_1807d84c0(unaff_RDI + 0x210,4,&unknown_var_2136_ptr,puVar7,iVar5 + 1);
    }
    *(int8_t *)(lVar6 + 0xb) = 0x20;
    *(int8_t *)(lVar10 + -1) = 0x20;
    if (puVar7 != (int8_t *)0x0) {
      puVar7[-3] = 0x20;
    }
  }
  lVar6 = FUN_18076b7c0(*(uint64_t *)(unaff_RDI + 0x208),&unknown_var_5736_ptr);
  if (lVar6 != 0) {
    *(int8_t *)(lVar6 + 9) = 0;
    lVar10 = lVar6 + 0xb;
    cVar2 = *(char *)(lVar6 + 0xb);
    while ((cVar2 != '\0' && (cVar2 != ';'))) {
      pcVar1 = (char *)(lVar10 + 1);
      lVar10 = lVar10 + 1;
      cVar2 = *pcVar1;
    }
    *(int8_t *)(lVar10 + -1) = 0;
    iVar5 = func_0x00018076b690(lVar6 + 0xb);
    FUN_1807d84c0(unaff_RDI + 0x210,4,lVar6,lVar6 + 0xb,iVar5 + 1);
  }
  if ((cStack0000000000000090 != '\0') && (unaff_R12 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  *(int32_t *)(unaff_RDI + 0x204) = *(int32_t *)(unaff_RDI + 0x200);
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



uint64_t FUN_1807f76f9(char param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int64_t in_RAX;
  int8_t *puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint uVar9;
  int64_t unaff_RBX;
  uint unaff_EBP;
  int64_t unaff_RDI;
  int64_t lVar10;
  int64_t unaff_R12;
  int64_t unaff_R14;
  char in_stack_00000090;
  uint *in_stack_000000a8;
  
  if (param_1 != '\0') {
    do {
      if (param_1 == ';') break;
      param_1 = *(char *)(unaff_RBX + 1);
      unaff_RBX = unaff_RBX + 1;
    } while (param_1 != '\0');
  }
  *(int8_t *)(unaff_RBX + -1) = 0;
  puVar6 = (int8_t *)FUN_18076b7c0(in_RAX + 0xd,&system_data_d738);
  if (puVar6 != (int8_t *)0x0) {
    *puVar6 = 0;
    puVar6 = puVar6 + 3;
  }
  iVar5 = func_0x00018076b690(unaff_R14 + 0xd);
  FUN_1807d84c0(unaff_RDI + 0x210,4,&unknown_var_3984_ptr,unaff_R14 + 0xd,iVar5 + 1);
  if (puVar6 != (int8_t *)0x0) {
    iVar5 = func_0x00018076b690(puVar6);
    FUN_1807d84c0(unaff_RDI + 0x210,4,&unknown_var_2136_ptr,puVar6,iVar5 + 1);
  }
  *(int8_t *)(unaff_R14 + 0xb) = 0x20;
  *(int8_t *)(unaff_RBX + -1) = 0x20;
  if (puVar6 != (int8_t *)0x0) {
    puVar6[-3] = 0x20;
  }
  lVar7 = FUN_18076b7c0(*(uint64_t *)(unaff_RDI + 0x208),&unknown_var_5736_ptr);
  if (lVar7 != 0) {
    *(int8_t *)(lVar7 + 9) = 0;
    lVar10 = lVar7 + 0xb;
    cVar2 = *(char *)(lVar7 + 0xb);
    while ((cVar2 != '\0' && (cVar2 != ';'))) {
      pcVar1 = (char *)(lVar10 + 1);
      lVar10 = lVar10 + 1;
      cVar2 = *pcVar1;
    }
    *(int8_t *)(lVar10 + -1) = 0;
    iVar5 = func_0x00018076b690(lVar7 + 0xb);
    FUN_1807d84c0(unaff_RDI + 0x210,4,lVar7,lVar7 + 0xb,iVar5 + 1);
  }
  if ((in_stack_00000090 != '\0') && (unaff_R12 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  *(int32_t *)(unaff_RDI + 0x204) = *(int32_t *)(unaff_RDI + 0x200);
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



uint64_t FUN_1807f76fe(char param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int64_t in_RAX;
  int8_t *puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint uVar9;
  int64_t unaff_RBX;
  uint unaff_EBP;
  int64_t unaff_RDI;
  int64_t lVar10;
  int64_t unaff_R12;
  int64_t unaff_R14;
  char in_stack_00000090;
  uint *in_stack_000000a8;
  
  if (param_1 != '\0') {
    do {
      if (param_1 == ';') break;
      param_1 = *(char *)(unaff_RBX + 1);
      unaff_RBX = unaff_RBX + 1;
    } while (param_1 != '\0');
  }
  *(int8_t *)(unaff_RBX + -1) = 0;
  puVar6 = (int8_t *)FUN_18076b7c0(in_RAX + 0xd,&system_data_d738);
  if (puVar6 != (int8_t *)0x0) {
    *puVar6 = 0;
    puVar6 = puVar6 + 3;
  }
  iVar5 = func_0x00018076b690(unaff_R14 + 0xd);
  FUN_1807d84c0(unaff_RDI + 0x210,4,&unknown_var_3984_ptr,unaff_R14 + 0xd,iVar5 + 1);
  if (puVar6 != (int8_t *)0x0) {
    iVar5 = func_0x00018076b690(puVar6);
    FUN_1807d84c0(unaff_RDI + 0x210,4,&unknown_var_2136_ptr,puVar6,iVar5 + 1);
  }
  *(int8_t *)(unaff_R14 + 0xb) = 0x20;
  *(int8_t *)(unaff_RBX + -1) = 0x20;
  if (puVar6 != (int8_t *)0x0) {
    puVar6[-3] = 0x20;
  }
  lVar7 = FUN_18076b7c0(*(uint64_t *)(unaff_RDI + 0x208),&unknown_var_5736_ptr);
  if (lVar7 != 0) {
    *(int8_t *)(lVar7 + 9) = 0;
    lVar10 = lVar7 + 0xb;
    cVar2 = *(char *)(lVar7 + 0xb);
    while ((cVar2 != '\0' && (cVar2 != ';'))) {
      pcVar1 = (char *)(lVar10 + 1);
      lVar10 = lVar10 + 1;
      cVar2 = *pcVar1;
    }
    *(int8_t *)(lVar10 + -1) = 0;
    iVar5 = func_0x00018076b690(lVar7 + 0xb);
    FUN_1807d84c0(unaff_RDI + 0x210,4,lVar7,lVar7 + 0xb,iVar5 + 1);
  }
  if ((in_stack_00000090 != '\0') && (unaff_R12 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  *(int32_t *)(unaff_RDI + 0x204) = *(int32_t *)(unaff_RDI + 0x200);
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



uint64_t FUN_1807f777c(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint uVar8;
  int64_t unaff_RBX;
  uint unaff_EBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar9;
  int64_t unaff_R12;
  int64_t unaff_R14;
  char in_stack_00000090;
  uint *in_stack_000000a8;
  
  func_0x00018076b690();
  FUN_1807d84c0(unaff_RDI + 0x210,4,&unknown_var_2136_ptr);
  *(int8_t *)(unaff_R14 + 0xb) = 0x20;
  *(int8_t *)(unaff_RBX + -1) = 0x20;
  if (unaff_RSI != 0) {
    *(int8_t *)(unaff_RSI + -3) = 0x20;
  }
  lVar6 = FUN_18076b7c0(*(uint64_t *)(unaff_RDI + 0x208),&unknown_var_5736_ptr);
  if (lVar6 != 0) {
    *(int8_t *)(lVar6 + 9) = 0;
    lVar9 = lVar6 + 0xb;
    cVar2 = *(char *)(lVar6 + 0xb);
    while ((cVar2 != '\0' && (cVar2 != ';'))) {
      pcVar1 = (char *)(lVar9 + 1);
      lVar9 = lVar9 + 1;
      cVar2 = *pcVar1;
    }
    *(int8_t *)(lVar9 + -1) = 0;
    iVar5 = func_0x00018076b690(lVar6 + 0xb);
    FUN_1807d84c0(unaff_RDI + 0x210,4,lVar6,lVar6 + 0xb,iVar5 + 1);
  }
  if ((in_stack_00000090 != '\0') && (unaff_R12 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  *(int32_t *)(unaff_RDI + 0x204) = *(int32_t *)(unaff_RDI + 0x200);
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



uint64_t FUN_1807f77c5(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint uVar8;
  uint unaff_EBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar9;
  int64_t unaff_R12;
  char in_stack_00000090;
  uint *in_stack_000000a8;
  
  *(int8_t *)(unaff_RSI + -3) = 0x20;
  lVar6 = FUN_18076b7c0(*(uint64_t *)(unaff_RDI + 0x208),&unknown_var_5736_ptr);
  if (lVar6 != 0) {
    *(int8_t *)(lVar6 + 9) = 0;
    lVar9 = lVar6 + 0xb;
    cVar2 = *(char *)(lVar6 + 0xb);
    while ((cVar2 != '\0' && (cVar2 != ';'))) {
      pcVar1 = (char *)(lVar9 + 1);
      lVar9 = lVar9 + 1;
      cVar2 = *pcVar1;
    }
    *(int8_t *)(lVar9 + -1) = 0;
    iVar5 = func_0x00018076b690(lVar6 + 0xb);
    FUN_1807d84c0(unaff_RDI + 0x210,4,lVar6,lVar6 + 0xb,iVar5 + 1);
  }
  if ((in_stack_00000090 != '\0') && (unaff_R12 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  *(int32_t *)(unaff_RDI + 0x204) = *(int32_t *)(unaff_RDI + 0x200);
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



uint64_t FUN_1807f77e9(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int64_t in_RAX;
  uint64_t uVar5;
  uint uVar6;
  uint unaff_EBP;
  int64_t unaff_RDI;
  int64_t lVar7;
  int64_t unaff_R12;
  char in_stack_00000090;
  uint *in_stack_000000a8;
  
  *(int8_t *)(in_RAX + 9) = 0;
  lVar7 = in_RAX + 0xb;
  cVar2 = *(char *)(in_RAX + 0xb);
  while ((cVar2 != '\0' && (cVar2 != ';'))) {
    pcVar1 = (char *)(lVar7 + 1);
    lVar7 = lVar7 + 1;
    cVar2 = *pcVar1;
  }
  *(int8_t *)(lVar7 + -1) = 0;
  func_0x00018076b690(in_RAX + 0xb);
  FUN_1807d84c0(unaff_RDI + 0x210,4);
  if ((in_stack_00000090 != '\0') && (unaff_R12 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  *(int32_t *)(unaff_RDI + 0x204) = *(int32_t *)(unaff_RDI + 0x200);
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



uint64_t FUN_1807f788c(void)

{
  uint uVar1;
  uint uVar2;
  uint in_EAX;
  uint64_t uVar3;
  uint uVar4;
  uint unaff_EBP;
  uint *unaff_RSI;
  int64_t unaff_RDI;
  
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
  int8_t auStack_878 [80];
  int8_t auStack_828 [2048];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_878;
                    // WARNING: Subroutine does not return
  memset(auStack_828,0,0x800);
}






// 函数: void FUN_1807f7964(void)
void FUN_1807f7964(void)

{
  int iVar1;
  uint64_t in_RAX;
  int64_t unaff_RBX;
  int32_t unaff_EDI;
  int32_t uStack0000000000000028;
  int16_t *puStack0000000000000030;
  uint64_t uStack0000000000000038;
  int32_t uStack0000000000000040;
  uint64_t in_stack_00000850;
  
  uStack0000000000000040 = 0x7ff;
  uStack0000000000000028 = 0x1000;
  puStack0000000000000030 = (int16_t *)(unaff_RBX + 0x2280);
  uStack0000000000000038 = in_RAX;
  iVar1 = FUN_1807f7090();
  if (iVar1 == 0) {
    uStack0000000000000038 = CONCAT44(uStack0000000000000038._4_4_,unaff_EDI);
    puStack0000000000000030 = (int16_t *)0x0;
    uStack0000000000000028 =
         CONCAT22(uStack0000000000000028._2_2_,*(int16_t *)(unaff_RBX + 0x2280));
    iVar1 = FUN_1807f61c0();
    if (iVar1 == 0) {
      *(int32_t *)(unaff_RBX + 0x1f8) = unaff_EDI;
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000850 ^ (uint64_t)&stack0x00000000);
}






