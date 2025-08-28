#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part166.c - 4 个函数

// 函数: void FUN_180767956(void)
void FUN_180767956(void)

{
  return;
}



uint64_t FUN_1807679d0(uint64_t *param_1)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  
  FUN_180768b50(param_1 + 0x22);
  if ((param_1[0x27] != 0) && (*(int *)(param_1 + 0x28) != -1)) {
    *(uint64_t *)(param_1[0x27] + 0x10 + (longlong)*(int *)(param_1 + 0x28) * 8) = param_1[0x22];
  }
  *(int8_t *)(param_1 + 0x23) = 1;
  FUN_180768910(param_1[0x26]);
  cVar1 = *(char *)(param_1 + 0x23);
  while (cVar1 != '\0') {
    if (param_1[0x25] != 0) {
      FUN_180768940();
    }
    if (*(char *)(param_1 + 0x23) != '\0') {
      if ((code *)param_1[0x29] == (code *)0x0) {
        (**(code **)*param_1)(param_1);
      }
      else {
        (*(code *)param_1[0x29])(param_1[0x24]);
      }
      if (*(int *)((longlong)param_1 + 0x11c) != 0) {
        FUN_180768bf0();
      }
    }
    if (*(char *)((longlong)param_1 + 0x119) == '\0') break;
    cVar1 = *(char *)(param_1 + 0x23);
  }
  if ((param_1[0x27] != 0) && (*(int *)(param_1 + 0x28) != -1)) {
    *(uint64_t *)(param_1[0x27] + 0x10 + (longlong)*(int *)(param_1 + 0x28) * 8) = 0;
  }
  iVar2 = ReleaseSemaphore(param_1[0x26],1);
  uVar3 = 0;
  if (iVar2 == 0) {
    uVar3 = 0x1c;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180767ad0(longlong param_1)

{
  uint64_t uVar1;
  longlong lVar2;
  code *pcVar3;
  
  if (*(char *)(param_1 + 0x118) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x119) != '\0') {
    *(int8_t *)(param_1 + 0x118) = 0;
  }
  if ((*(longlong *)(param_1 + 0x128) != 0) && (uVar1 = FUN_180768910(), (int)uVar1 != 0)) {
    return uVar1;
  }
  uVar1 = FUN_180768940(*(uint64_t *)(param_1 + 0x130));
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    uVar1 = FUN_1807688f0();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *(uint64_t *)(param_1 + 0x128) = 0;
  }
  uVar1 = FUN_1807688f0(*(uint64_t *)(param_1 + 0x130));
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  *(uint64_t *)(param_1 + 0x130) = 0;
  uVar1 = FUN_1807688f0(*(uint64_t *)(param_1 + 0x108));
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  lVar2 = *(longlong *)(param_1 + 0x138);
  if (lVar2 == 0) {
    pcVar3 = *(code **)(SYSTEM_MAIN_CONTROL_BLOCK + 8);
    if ((pcVar3 == (code *)0x0) || ((*(uint *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x200) == 0))
    goto LAB_180767bda;
    uVar1 = *(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x18);
    lVar2 = 0;
  }
  else {
    pcVar3 = *(code **)(lVar2 + 0x11838);
    if ((pcVar3 == (code *)0x0) || ((*(uint *)(lVar2 + 0x11840) & 0x200) == 0)) goto LAB_180767bda;
    uVar1 = *(uint64_t *)(lVar2 + 0x11670);
  }
  (*pcVar3)(lVar2,0x200,*(uint64_t *)(param_1 + 0x108),param_1 + 8,uVar1);
LAB_180767bda:
  *(uint64_t *)(param_1 + 0x108) = 0;
  *(uint64_t *)(param_1 + 0x110) = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180767c00(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,int param_5,
             char param_6,int32_t param_7,uint64_t param_8,int8_t param_9)

{
  uint64_t uVar1;
  uint64_t uVar2;
  longlong lVar3;
  code *pcVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t in_stack_ffffffffffffffc8;
  int32_t uVar7;
  
  uVar7 = (int32_t)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar3 = (longlong)param_5;
  if (param_5 == -1) {
    uVar2 = 0;
    uVar5 = 0xffff7ffd;
    uVar6 = 0x20000;
  }
  else {
    uVar2 = *(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x48 + lVar3 * 8);
    uVar5 = *(int32_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0xb0 + lVar3 * 4);
    uVar6 = *(int32_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0xe4 + lVar3 * 4);
  }
  *(int32_t *)(param_1 + 0x11c) = param_7;
  *(int8_t *)(param_1 + 0x119) = param_9;
  *(uint64_t *)(param_1 + 0x148) = param_3;
  *(uint64_t *)(param_1 + 0x120) = param_4;
  *(uint64_t *)(param_1 + 0x138) = param_8;
  *(int8_t *)(param_1 + 0x118) = 0;
  *(int *)(param_1 + 0x140) = param_5;
  uVar1 = FUN_1807688b0(param_1 + 0x130);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if ((param_6 != (char)uVar1) && (uVar1 = FUN_1807688b0(param_1 + 0x128), (int)uVar1 != 0)) {
    return uVar1;
  }
  func_0x00018076b450(param_1 + 8,param_2,0x100);
  uVar2 = FUN_1807689d0(param_1 + 8,FUN_1807679d0,param_1,uVar2,CONCAT44(uVar7,uVar5),uVar6,
                        (uint64_t *)(param_1 + 0x108));
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = FUN_180768940(*(uint64_t *)(param_1 + 0x130));
  if ((int)uVar2 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x138);
    if (lVar3 == 0) {
      pcVar4 = *(code **)(SYSTEM_MAIN_CONTROL_BLOCK + 8);
      if (pcVar4 == (code *)0x0) {
        return 0;
      }
      if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 8) == 0) {
        return 0;
      }
      uVar2 = *(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x18);
      lVar3 = 0;
    }
    else {
      pcVar4 = *(code **)(lVar3 + 0x11838);
      if (pcVar4 == (code *)0x0) {
        return 0;
      }
      if ((*(byte *)(lVar3 + 0x11840) & 8) == 0) {
        return 0;
      }
      uVar2 = *(uint64_t *)(lVar3 + 0x11670);
    }
    (*pcVar4)(lVar3,8,*(uint64_t *)(param_1 + 0x108),param_1 + 8,uVar2);
    return 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180767cd6(void)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong unaff_RBX;
  code *pcVar3;
  
  func_0x00018076b450(unaff_RBX + 8);
  uVar1 = FUN_1807689d0(unaff_RBX + 8,FUN_1807679d0);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_180768940(*(uint64_t *)(unaff_RBX + 0x130));
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  lVar2 = *(longlong *)(unaff_RBX + 0x138);
  if (lVar2 == 0) {
    pcVar3 = *(code **)(SYSTEM_MAIN_CONTROL_BLOCK + 8);
    if (pcVar3 == (code *)0x0) {
      return 0;
    }
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 8) == 0) {
      return 0;
    }
    uVar1 = *(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x18);
    lVar2 = 0;
  }
  else {
    pcVar3 = *(code **)(lVar2 + 0x11838);
    if (pcVar3 == (code *)0x0) {
      return 0;
    }
    if ((*(byte *)(lVar2 + 0x11840) & 8) == 0) {
      return 0;
    }
    uVar1 = *(uint64_t *)(lVar2 + 0x11670);
  }
  (*pcVar3)(lVar2,8,*(uint64_t *)(unaff_RBX + 0x108),unaff_RBX + 8,uVar1);
  return 0;
}





// 函数: void FUN_180767d88(void)
void FUN_180767d88(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180767db0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong alStackX_10 [3];
  
  FUN_180768b50(alStackX_10);
  lVar3 = 0;
  lVar1 = lVar3;
  do {
    if (alStackX_10[0] == *(longlong *)(param_1 + lVar1 * 8)) {
      return 1;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 < 0xd);
  if (alStackX_10[0] != *(longlong *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x40)) {
    plVar2 = (longlong *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x130);
    while (alStackX_10[0] != *plVar2) {
      lVar3 = lVar3 + 1;
      plVar2 = plVar2 + 1;
      if (4 < lVar3) {
        return 0;
      }
    }
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180767e20(int param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_1;
  if (param_1 < 0xd) {
    if (param_2 == 0x4000000000000000) {
      param_2 = 0;
      switch(param_1) {
      case 0:
        param_2 = 0x4000000000000001;
        break;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
        param_2 = 0x4000000000000003;
        break;
      case 8:
        param_2 = 0x4000000000000002;
      }
    }
    *(longlong *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x48 + lVar1 * 8) = param_2;
    if (param_3 == -0x8001) {
      param_3 = 0;
      switch(param_1) {
      case 0:
        param_3 = -0x8006;
        break;
      case 1:
        param_3 = -0x8007;
        break;
      case 2:
      case 0xb:
      case 0xc:
        param_3 = -0x8005;
        break;
      case 3:
      case 4:
      case 5:
        param_3 = -0x8004;
        break;
      case 6:
        param_3 = -0x8002;
        break;
      case 7:
      case 8:
      case 9:
      case 10:
        param_3 = -0x8003;
      }
    }
    *(int *)(SYSTEM_MAIN_CONTROL_BLOCK + 0xb0 + lVar1 * 4) = param_3;
    if (param_4 == 0) {
      param_4 = 0;
      switch(param_1) {
      case 0:
        param_4 = 0x14000;
        break;
      case 1:
      case 5:
      case 0xb:
      case 0xc:
        param_4 = 0x4000;
        break;
      case 2:
      case 8:
      case 9:
      case 10:
        param_4 = 0x18000;
        break;
      case 3:
        param_4 = 0x10000;
        break;
      case 4:
        param_4 = 0x1c000;
        break;
      case 6:
        param_4 = 0xc000;
        break;
      case 7:
        param_4 = 0x20000;
      }
    }
    *(int *)(SYSTEM_MAIN_CONTROL_BLOCK + 0xe4 + lVar1 * 4) = param_4;
    return 0;
  }
  return 0x1f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180767e42(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  longlong in_RAX;
  uint64_t uVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  int unaff_EBX;
  longlong in_R10;
  uint in_R11D;
  int32_t in_register_0000009c;
  
  if ((in_R10 == in_RAX) && (in_R10 = 0, in_R11D < 0xd)) {
                    // WARNING: Could not recover jumptable at 0x000180767e66. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (*(code *)((ulonglong)
                       *(uint *)(FUN_180767f5c + CONCAT44(in_register_0000009c,in_R11D) * 4) +
                      0x180000000))
                      ((code *)((ulonglong)
                                *(uint *)(FUN_180767f5c + CONCAT44(in_register_0000009c,in_R11D) * 4
                                         ) + 0x180000000));
    return uVar1;
  }
  *(longlong *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x48 + CONCAT44(in_register_0000009c,in_R11D) * 8) = in_R10;
  if (((int)param_3 == -0x8001) && (param_3 = 0, in_R11D < 0xd)) {
    UNRECOVERED_JUMPTABLE_00 =
         (code *)((ulonglong)*(uint *)(CONCAT44(in_register_0000009c,in_R11D) * 4 + 0x180767f90) +
                 0x180000000);
                    // WARNING: Could not recover jumptable at 0x000180767eb5. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
    return uVar1;
  }
  *(int *)(SYSTEM_MAIN_CONTROL_BLOCK + 0xb0 + CONCAT44(in_register_0000009c,in_R11D) * 4) = (int)param_3;
  if ((unaff_EBX == 0) && (unaff_EBX = 0, in_R11D < 0xd)) {
    UNRECOVERED_JUMPTABLE_00 =
         (code *)((ulonglong)*(uint *)(CONCAT44(in_register_0000009c,in_R11D) * 4 + 0x180767fc4) +
                 0x180000000);
                    // WARNING: Could not recover jumptable at 0x000180767f0e. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
    return uVar1;
  }
  *(int *)(SYSTEM_MAIN_CONTROL_BLOCK + 0xe4 + CONCAT44(in_register_0000009c,in_R11D) * 4) = unaff_EBX;
  return 0;
}



// WARNING: Instruction at (ram,0x00018076805e) overlaps instruction at (ram,0x00018076805d)
// 
// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180767f5c(char *param_1,char *param_2,void *param_3,uint64_t param_4)
void FUN_180767f5c(char *param_1,char *param_2,void *param_3,uint64_t param_4)

{
  uint *puVar1;
  int *piVar2;
  code *pcVar3;
  code cVar4;
  byte bVar5;
  uint64_t uVar7;
  int iVar8;
  uint64_t *puVar9;
  char cVar10;
  int iVar11;
  char cVar12;
  int *in_RAX;
  char *pcVar13;
  char cVar14;
  byte bVar16;
  char *pcVar15;
  char cVar17;
  char cVar18;
  char cVar19;
  byte *unaff_RBX;
  uint64_t *puVar20;
  uint64_t *puVar25;
  uint64_t *puVar26;
  longlong unaff_RBP;
  char *unaff_RSI;
  code *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  bool bVar27;
  int8_t auStackX_18 [16];
  uint64_t uStack_8;
  byte bVar6;
  uint64_t *puVar21;
  uint64_t *puVar22;
  uint64_t *puVar23;
  uint64_t *puVar24;
  
  puVar20 = &uStack_8;
  puVar21 = &uStack_8;
  puVar25 = &uStack_8;
  puVar22 = &uStack_8;
  puVar23 = &uStack_8;
  puVar24 = &uStack_8;
  puVar26 = &uStack_8;
  uStack_8 = 0x7400767e;
  bVar16 = (byte)((ulonglong)param_2 >> 8);
  iVar11 = (int)in_RAX;
  cVar14 = (char)param_2;
  if (in_ZF || in_OF != in_SF) {
LAB_180767fd9:
    if (in_ZF || in_OF != in_SF) {
      bVar5 = *unaff_RBX;
      bVar6 = *unaff_RBX;
      *unaff_RBX = *unaff_RBX + bVar16;
      if (*unaff_RBX != 0 && SCARRY1(bVar6,bVar16) == (char)*unaff_RBX < '\0') {
        out((short)param_2,iVar11);
        bRam00000001dd01c85c = bRam00000001dd01c85c >> 1 | CARRY1(bVar5,bVar16) << 7;
        return;
      }
      cVar12 = *param_2;
      cVar10 = (char)((ulonglong)unaff_RBX >> 8);
      *param_2 = *param_2 + cVar10;
      if (*param_2 != '\0' && SCARRY1(cVar12,cVar10) == *param_2 < '\0') {
        return;
      }
      cVar12 = *unaff_RSI;
      cVar10 = (char)unaff_RBX;
      *unaff_RSI = *unaff_RSI + cVar10;
      if (*unaff_RSI != '\0' && SCARRY1(cVar12,cVar10) == *unaff_RSI < '\0') {
        return;
      }
      cVar12 = *unaff_RSI;
      *unaff_RSI = *unaff_RSI + cVar10;
      if (*unaff_RSI != '\0' && SCARRY1(cVar12,cVar10) == *unaff_RSI < '\0') {
        return;
      }
      cVar12 = *unaff_RSI;
      *unaff_RSI = *unaff_RSI + cVar10;
      if (*unaff_RSI != '\0' && SCARRY1(cVar12,cVar10) == *unaff_RSI < '\0') {
        return;
      }
      cVar4 = *unaff_RDI;
      *unaff_RDI = (code)((char)*unaff_RDI + cVar14);
      if (*unaff_RDI != (code)0x0 && SCARRY1((char)cVar4,cVar14) == (char)*unaff_RDI < '\0') {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar4 = *unaff_RDI;
      *unaff_RDI = (code)((char)*unaff_RDI + cVar14);
      if (*unaff_RDI != (code)0x0 && SCARRY1((char)cVar4,cVar14) == (char)*unaff_RDI < '\0') {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
LAB_180767ff9:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    goto LAB_180768051;
  }
  unaff_RSI[(longlong)unaff_RDI * 2 + 0x76] = unaff_RSI[(longlong)unaff_RDI * 2 + 0x76] + bVar16;
  unaff_RSI[(longlong)unaff_RDI * 2 + 0x76] = unaff_RSI[(longlong)unaff_RDI * 2 + 0x76] + bVar16;
  unaff_RSI[(longlong)unaff_RDI * 2 + 0x76] = unaff_RSI[(longlong)unaff_RDI * 2 + 0x76] + bVar16;
  unaff_RSI[(longlong)unaff_RDI * 2 + 0x76] = unaff_RSI[(longlong)unaff_RDI * 2 + 0x76] + bVar16;
  unaff_RSI[(longlong)unaff_RDI * 2 + 0x76] = unaff_RSI[(longlong)unaff_RDI * 2 + 0x76] + bVar16;
  unaff_RSI[(longlong)unaff_RDI * 2 + 0x76] = unaff_RSI[(longlong)unaff_RDI * 2 + 0x76] + bVar16;
  pcVar13 = (char *)((longlong)in_RAX + 0x7400767e);
  cVar12 = *pcVar13;
  cVar10 = (char)in_RAX;
  *pcVar13 = *pcVar13 + cVar10;
  if (*pcVar13 == '\0' || SCARRY1(cVar12,cVar10) != *pcVar13 < '\0') goto LAB_180767ff9;
  unaff_RSI[(longlong)unaff_RDI * 2 + 0x76] = unaff_RSI[(longlong)unaff_RDI * 2 + 0x76] + bVar16;
  unaff_RSI[(longlong)unaff_RDI * 2 + 0x76] = unaff_RSI[(longlong)unaff_RDI * 2 + 0x76] + bVar16;
  unaff_RSI[(longlong)unaff_RDI * 2 + 0x76] = unaff_RSI[(longlong)unaff_RDI * 2 + 0x76] + bVar16;
  pcVar3 = unaff_RDI + -0x40ff8982;
  cVar4 = *pcVar3;
  *pcVar3 = (code)((char)*pcVar3 + bVar16);
  pcVar13 = SYSTEM_MAIN_CONTROL_BLOCK;
  pcVar15 = param_1;
  if (*pcVar3 == (code)0x0 || SCARRY1((char)cVar4,bVar16) != (char)*pcVar3 < '\0') {
    param_3 = &unknown_var_1424_ptr;
    register0x00000020 = (BADSPACEBASE *)&uStack_8;
  }
  else {
    cVar19 = (char)((ulonglong)unaff_RBX >> 8);
    cVar17 = (char)unaff_RBX;
    cVar18 = cVar19 + cVar10;
    cVar12 = (char)param_1;
    if (cVar18 == '\0' || SCARRY1(cVar19,cVar10) != cVar18 < '\0') {
      *(char *)((longlong)in_RAX + -0x75) = *(char *)((longlong)in_RAX + -0x75) + cVar12;
      pcVar13 = (char *)0x7400767e;
      *(byte *)((longlong)in_RAX + -0x75) = *(byte *)((longlong)in_RAX + -0x75) | 0x7e;
      puVar1 = (uint *)((longlong)in_RAX + -0x75);
      *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
      pcVar15 = param_2;
    }
    else {
      cVar19 = cVar18 + cVar12;
      register0x00000020 = (BADSPACEBASE *)&uStack_8;
      if (cVar19 != '\0' && SCARRY1(cVar18,cVar12) == cVar19 < '\0') {
        cVar18 = cVar19 + cVar12;
        if (cVar18 == '\0' || SCARRY1(cVar19,cVar12) != cVar18 < '\0') {
          pcVar15 = (char *)((ulonglong)param_1 & 0xffffffff);
          register0x00000020 = (BADSPACEBASE *)puVar24;
        }
        else {
          cVar19 = cVar18 + cVar12;
          pcVar13 = param_1;
          pcVar15 = param_2;
          register0x00000020 = (BADSPACEBASE *)puVar20;
          if (cVar19 != '\0' && SCARRY1(cVar18,cVar12) == cVar19 < '\0') {
            cVar18 = cVar19 + cVar14;
            if (cVar18 == '\0' || SCARRY1(cVar19,cVar14) != cVar18 < '\0') {
              param_1[-0x47] = param_1[-0x47] + cVar10;
              cVar14 = (char)*in_RAX;
            }
            else {
              cVar19 = cVar18 + cVar17;
              if (cVar19 != '\0' && SCARRY1(cVar18,cVar17) == cVar19 < '\0') {
                cVar18 = cVar19 + cVar17;
                if (cVar18 == '\0' || SCARRY1(cVar19,cVar17) != cVar18 < '\0') goto LAB_180768028_1;
                cVar19 = cVar18 + cVar17;
                register0x00000020 = (BADSPACEBASE *)puVar21;
                if (cVar19 == '\0' || SCARRY1(cVar18,cVar17) != cVar19 < '\0') goto LAB_18076802d;
                cVar18 = cVar19 + cVar17;
                if (cVar18 == '\0' || SCARRY1(cVar19,cVar17) != cVar18 < '\0') {
                  *in_RAX = *in_RAX + iVar11;
                  halt_baddata();
                }
                cVar19 = cVar18 + cVar10;
                if (cVar19 == '\0' || SCARRY1(cVar18,cVar10) != cVar19 < '\0') {
                  halt_baddata();
                }
                cVar18 = cVar19 + cVar10;
                unaff_RBX = (byte *)CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),
                                             CONCAT11(cVar18,cVar17));
                if (cVar18 == '\0' || SCARRY1(cVar19,cVar10) != cVar18 < '\0') {
                  param_2 = (char *)0x2;
                  param_1 = (char *)0x0;
code_r0x000180768040:
                  *(uint64_t *)((longlong)puVar25 + -8) = 0x180768046;
                  CoInitializeEx(param_1,param_2);
                  puVar9 = puVar25;
                }
                else {
                  iVar8 = *in_RAX;
                  *(char *)in_RAX = (char)*in_RAX + cVar14;
                  if ((char)*in_RAX != '\0' && SCARRY1((char)iVar8,cVar14) == (char)*in_RAX < '\0')
                  {
                    *unaff_RBX = *unaff_RBX + bVar16;
                    puVar25 = (uint64_t *)(unaff_RBP + 8);
                    goto code_r0x000180768040;
                  }
                  cVar4 = *unaff_RDI;
                  *unaff_RDI = (code)((char)*unaff_RDI + cVar14);
                  puVar9 = puVar22;
                  if (*unaff_RDI == (code)0x0 ||
                      SCARRY1((char)cVar4,cVar14) != (char)*unaff_RDI < '\0') {
                    cVar10 = *unaff_RSI;
                    *unaff_RSI = *unaff_RSI + cVar17;
                    if (*unaff_RSI != '\0' && SCARRY1(cVar10,cVar17) == *unaff_RSI < '\0') {
                      *(char *)((longlong)in_RAX + -0x75) =
                           *(char *)((longlong)in_RAX + -0x75) + cVar12;
                      return;
                    }
                    cVar12 = (char)((ulonglong)in_RAX >> 8);
                    bVar27 = SCARRY1(system_state_f654,cVar12);


// 函数: void FUN_180768000(uint64_t param_1)
void FUN_180768000(uint64_t param_1)

{
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_1424_ptr,0x266,1);
}



uint64_t FUN_180768070(longlong param_1)

{
  int32_t uVar1;
  
  uVar1 = timeGetTime();
  *(int32_t *)(param_1 + 8) = uVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180768090(longlong param_1,uint64_t param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  
  plVar1 = (longlong *)(param_1 + 0x200);
  lVar3 = *plVar1;
  if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&unknown_var_1424_ptr,0xd5,1);
  }
  uVar6 = 0;
  uVar5 = 0;
  iVar4 = MultiByteToWideChar(0xfde9,8,param_2,0xffffffff,0,0);
  if (iVar4 != 0) {
    plVar2 = (longlong *)(param_1 + 0x208);
    if (0xff < iVar4) {
      param_1 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar4 * 2,&unknown_var_1424_ptr,0xe7,
                              uVar5 & 0xffffffff00000000,uVar6 & 0xffffff00,1);
      *plVar1 = param_1;
    }
    *plVar2 = param_1;
    iVar4 = MultiByteToWideChar(0xfde9,0,param_2,0xffffffff,param_1,iVar4);
    if (iVar4 != 0) {
      return 0;
    }
  }
  return 0x1c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18076810a(void)

{
  longlong *plVar1;
  int in_EAX;
  int iVar2;
  uint64_t uVar3;
  longlong unaff_RBX;
  longlong *unaff_RSI;
  int32_t unaff_R15D;
  
  plVar1 = (longlong *)(unaff_RBX + 0x208);
  if (0xff < in_EAX) {
    unaff_RBX = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),in_EAX * 2,&unknown_var_1424_ptr,0xe7
                              ,unaff_R15D);
    *unaff_RSI = unaff_RBX;
  }
  *plVar1 = unaff_RBX;
  iVar2 = MultiByteToWideChar(0xfde9,0);
  if (iVar2 == 0) {
    uVar3 = 0x1c;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_180768180(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000180768237)
// WARNING: Removing unreachable block (ram,0x0001807681dd)
// WARNING: Removing unreachable block (ram,0x0001807681c0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1807681a0(uint param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  byte in_XCR0;
  
  if (ui_system_config == 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    uVar4 = 0;
    ui_system_config = uVar4;
    if (0 < *piVar1) {
      lVar2 = cpuid_Version_info(1);
      uVar3 = *(uint *)(lVar2 + 0xc);
      if (((*(uint *)(lVar2 + 8) & 0x6000000) == 0x6000000) && ((uVar3 & 1) != 0)) {
        uVar4 = 1;
      }
      if ((uVar3 >> 0xc & 1) != 0) {
        uVar4 = uVar4 | 0x10;
      }
      ui_system_config = uVar4;
      if ((((uVar3 & 0x18000000) == 0x18000000) && ((in_XCR0 & 6) == 6)) &&
         (ui_system_config = uVar4 | 2, 6 < *piVar1)) {
        lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
        if ((*(uint *)(lVar2 + 4) & 0x20) != 0) {
          ui_system_config = uVar4 | 6;
        }
        if (((*(uint *)(lVar2 + 4) >> 0x10 & 1) != 0) && ((in_XCR0 & 0xe0) == 0xe0)) {
          ui_system_config = ui_system_config | 8;
        }
      }
    }
    ui_system_config = ui_system_config | 0x40;
  }
  return (ui_system_config >> (param_1 & 0x1f) & 1) != 0;
}



// WARNING: Removing unreachable block (ram,0x000180768237)
// WARNING: Removing unreachable block (ram,0x0001807681dd)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1807681b9(uint64_t param_1,uint64_t param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int in_EAX;
  uint uVar4;
  uint in_R11D;
  byte in_XCR0;
  
  if (in_EAX == 0) {
    piVar1 = (int *)cpuid_basic_info(0);
  }
  else if (in_EAX == 1) {
    piVar1 = (int *)cpuid_Version_info(1);
  }
  else if (in_EAX == 2) {
    piVar1 = (int *)cpuid_cache_tlb_info(2);
  }
  else if (in_EAX == 3) {
    piVar1 = (int *)cpuid_serial_info(3);
  }
  else if (in_EAX == 4) {
    piVar1 = (int *)cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (in_EAX == 5) {
    piVar1 = (int *)cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (in_EAX == 6) {
    piVar1 = (int *)cpuid_Thermal_Power_Management_info(6);
  }
  else if (in_EAX == 7) {
    piVar1 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (in_EAX == 9) {
    piVar1 = (int *)cpuid_Direct_Cache_Access_info(9);
  }
  else if (in_EAX == 10) {
    piVar1 = (int *)cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (in_EAX == 0xb) {
    piVar1 = (int *)cpuid_Extended_Topology_info(0xb);
  }
  else if (in_EAX == 0xd) {
    piVar1 = (int *)cpuid_Processor_Extended_States_info(0xd);
  }
  else if (in_EAX == 0xf) {
    piVar1 = (int *)cpuid_Quality_of_Service_info(0xf);
  }
  else if (in_EAX == -0x7ffffffe) {
    piVar1 = (int *)cpuid_brand_part1_info(0x80000002);
  }
  else if (in_EAX == -0x7ffffffd) {
    piVar1 = (int *)cpuid_brand_part2_info(0x80000003);
  }
  else if (in_EAX == -0x7ffffffc) {
    piVar1 = (int *)cpuid_brand_part3_info(0x80000004);
  }
  else {
    piVar1 = (int *)cpuid(in_EAX);
  }
  if (0 < *piVar1) {
    lVar2 = cpuid_Version_info(1);
    uVar3 = *(uint *)(lVar2 + 0xc);
    uVar4 = param_3;
    if (((*(uint *)(lVar2 + 8) & 0x6000000) == 0x6000000) && ((uVar3 & 1) != 0)) {
      uVar4 = 1;
    }
    if ((uVar3 >> 0xc & 1) != 0) {
      uVar4 = uVar4 | 0x10;
    }
    param_3 = uVar4;
    if ((((uVar3 & 0x18000000) == 0x18000000) && ((in_XCR0 & 6) == 6)) &&
       (param_3 = uVar4 | 2, 6 < *piVar1)) {
      lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
      if ((*(uint *)(lVar2 + 4) & 0x20) != 0) {
        param_3 = uVar4 | 6;
      }
      if (((*(uint *)(lVar2 + 4) >> 0x10 & 1) != 0) && ((in_XCR0 & 0xe0) == 0xe0)) {
        param_3 = param_3 | 8;
      }
    }
  }
  ui_system_config = param_3 | 0x40;
  return ((param_3 | 0x40) >> (in_R11D & 0x1f) & 1) != 0;
}



bool FUN_18076826f(uint64_t param_1,uint64_t param_2,uint param_3)

{
  uint in_R11D;
  
  return (param_3 >> (in_R11D & 0x1f) & 1) != 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180768280(int8_t *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = ui_system_config;
  if (*(int *)(ui_system_config + 8) != 0) {
    iVar2 = timeGetTime();
    if (1000 < (uint)(iVar2 - *(int *)(lVar1 + 8))) {
      *(int32_t *)(lVar1 + 8) = 0;
      *param_1 = 1;
      return 0;
    }
  }
  *param_1 = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1807682e0(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  if (param_2 == '\0') {
    lVar1 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&unknown_var_1424_ptr,0x2d9,0x200000
                          ,0,1);
    if (lVar1 == 0) {
      return 0x26;
    }
  }
  else {
    lVar1 = 0x180c0c6f8;
  }
  InitializeCriticalSection(lVar1);
  *param_1 = lVar1;
  return 0;
}



int32_t FUN_180768360(longlong param_1)

{
  if (param_1 == 0) {
    return 0x1c;
  }
  EnterCriticalSection();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180768380(longlong param_1,char param_2)

{
  if (param_1 == 0) {
    return 0x1c;
  }
  if (*(int *)(param_1 + 8) != -1) {
    GetCurrentThreadId();
  }
  DeleteCriticalSection(param_1);
  if (param_2 == '\0') {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_1424_ptr,0x2f9,1);
  }
  return 0;
}



int32_t FUN_180768400(longlong param_1)

{
  if (param_1 == 0) {
    return 0x1c;
  }
  LeaveCriticalSection();
  return 0;
}



uint64_t FUN_180768420(void)

{
  int iVar1;
  uint64_t uVar2;
  
  iVar1 = CloseHandle();
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0xd;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



