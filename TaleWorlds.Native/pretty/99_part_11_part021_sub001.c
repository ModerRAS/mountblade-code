#include "TaleWorlds.Native.Split.h"

// 99_part_11_part021_sub001.c - 18 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_11_part021.c - 18 个函数


// 函数: void FUN_1806f0151(longlong *param_1)
void FUN_1806f0151(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  char *pcVar9;
  ulonglong *unaff_R13;
  uint unaff_R14D;
  ulonglong uVar10;
  longlong *plStack0000000000000060;
  char *in_stack_00000070;
  char *in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  uint uVar8;
  
  pcVar9 = in_stack_00000078;
  plStack0000000000000060 = param_1;
  if (in_stack_00000078 != (char *)0x0) {
    _DAT_180c0c328 = _DAT_180c0c328 + 1;
    pcVar4 = in_stack_00000078;
    uVar7 = unaff_R14D;
    if (*in_stack_00000078 != (char)unaff_R14D) {
      do {
        uVar8 = uVar7;
        uVar7 = uVar8 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar4 != (char)unaff_R14D);
      uVar5 = (**(code **)(*param_1 + 8))(param_1,uVar8 + 2);
                    // WARNING: Subroutine does not return
      memcpy(uVar5,pcVar9,uVar7);
    }
    in_stack_00000070 = "";
    uVar10 = (ulonglong)unaff_R14D;
    uVar3 = uStack0000000000000080;
    while (cVar1 = *in_stack_00000070, pcVar9 = in_stack_00000070, cVar1 != '\0') {
      while (iVar2 = isspace((int)cVar1), iVar2 != 0) {
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 1;
        if (cVar1 == '\0') goto LAB_1806f01f8;
      }
      if ((in_stack_00000070 != (char *)0x0) && (*in_stack_00000070 != '\0')) {
        uVar3 = strtoul(in_stack_00000070,&stack0x00000070,10);
      }
      uVar8 = uVar7 + 4;
      uVar6 = uVar10;
      if (unaff_R14D < uVar8) {
        unaff_R14D = 0x20;
        if (0x20 < uVar8) {
          do {
            unaff_R14D = unaff_R14D * 2;
          } while (unaff_R14D < uVar8);
        }
        uVar6 = (**(code **)(*plStack0000000000000060 + 8))(plStack0000000000000060,unaff_R14D);
        if (uVar7 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(uVar6,uVar10,uVar7);
        }
        (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060,uVar10);
      }
      *(undefined4 *)(uVar7 + uVar6) = uVar3;
      uVar10 = uVar6;
      uVar7 = uVar8;
    }
LAB_1806f01f8:
    *unaff_R13 = uVar10;
    *(uint *)CONCAT44(uStack0000000000000084,uStack0000000000000080) = uVar7 >> 2;
    (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060,&DAT_18098bc73);
  }
  (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060,0);
  return;
}







// 函数: void FUN_1806f017f(longlong *param_1)
void FUN_1806f017f(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint unaff_ESI;
  char *unaff_RDI;
  char *pcVar7;
  longlong *unaff_R13;
  uint unaff_R14D;
  longlong unaff_R15;
  longlong *in_stack_00000060;
  char *in_stack_00000070;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  
  if (*unaff_RDI != (char)unaff_ESI) {
    do {
      uVar6 = unaff_R14D;
      unaff_RDI = unaff_RDI + 1;
      unaff_R14D = uVar6 + 1;
    } while (*unaff_RDI != (char)unaff_ESI);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,uVar6 + 2);
                    // WARNING: Subroutine does not return
    memcpy(uVar4);
  }
  in_stack_00000070 = "";
  uVar3 = uStack0000000000000080;
  while (cVar1 = *in_stack_00000070, pcVar7 = in_stack_00000070, cVar1 != '\0') {
    while (iVar2 = isspace((int)cVar1), iVar2 != 0) {
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
      if (cVar1 == '\0') goto LAB_1806f01f8;
    }
    if ((in_stack_00000070 != (char *)0x0) && (*in_stack_00000070 != '\0')) {
      uVar3 = strtoul(in_stack_00000070,&stack0x00000070,10);
    }
    uVar6 = unaff_R14D + 4;
    lVar5 = unaff_R15;
    if (unaff_ESI < uVar6) {
      unaff_ESI = 0x20;
      if (0x20 < uVar6) {
        do {
          unaff_ESI = unaff_ESI * 2;
        } while (unaff_ESI < uVar6);
      }
      lVar5 = (**(code **)(*in_stack_00000060 + 8))(in_stack_00000060,unaff_ESI);
      if (unaff_R14D != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar5,unaff_R15,unaff_R14D);
      }
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,unaff_R15);
    }
    *(undefined4 *)((ulonglong)unaff_R14D + lVar5) = uVar3;
    unaff_R15 = lVar5;
    unaff_R14D = uVar6;
  }
LAB_1806f01f8:
  *unaff_R13 = unaff_R15;
  *(uint *)CONCAT44(uStack0000000000000084,uStack0000000000000080) = unaff_R14D >> 2;
  (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,&DAT_18098bc73);
  (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,0);
  return;
}







// 函数: void FUN_1806f0223(void)
void FUN_1806f0223(void)

{
  longlong *in_stack_00000060;
  
  (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,0);
  return;
}







// 函数: void FUN_1806f023f(void)
void FUN_1806f023f(void)

{
  return;
}







// 函数: void FUN_1806f0249(void)
void FUN_1806f0249(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 unaff_EBX;
  uint unaff_ESI;
  uint uVar4;
  char *pcVar5;
  longlong *unaff_R13;
  uint unaff_R14D;
  longlong unaff_R15;
  longlong *in_stack_00000060;
  char *in_stack_00000070;
  uint *in_stack_00000080;
  
  do {
    if ((in_stack_00000070 != (char *)0x0) && (*in_stack_00000070 != '\0')) {
      unaff_EBX = strtoul(in_stack_00000070,&stack0x00000070,10);
    }
    uVar4 = unaff_R14D + 4;
    lVar3 = unaff_R15;
    if (unaff_ESI < uVar4) {
      unaff_ESI = 0x20;
      if (0x20 < uVar4) {
        do {
          unaff_ESI = unaff_ESI * 2;
        } while (unaff_ESI < uVar4);
      }
      lVar3 = (**(code **)(*in_stack_00000060 + 8))(in_stack_00000060,unaff_ESI);
      if (unaff_R14D != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar3,unaff_R15,unaff_R14D);
      }
      (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,unaff_R15);
    }
    *(undefined4 *)((ulonglong)unaff_R14D + lVar3) = unaff_EBX;
    cVar1 = *in_stack_00000070;
    pcVar5 = in_stack_00000070;
    while( true ) {
      if (cVar1 == '\0') {
        *unaff_R13 = lVar3;
        *in_stack_00000080 = uVar4 >> 2;
        (**(code **)(*in_stack_00000060 + 0x10))();
        (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,0);
        return;
      }
      iVar2 = isspace((int)cVar1);
      unaff_R15 = lVar3;
      unaff_R14D = uVar4;
      if (iVar2 == 0) break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1806f02d0(longlong *param_1,undefined8 param_2,ulonglong *param_3,undefined4 *param_4,
void FUN_1806f02d0(longlong *param_1,undefined8 param_2,ulonglong *param_3,undefined4 *param_4,
                  undefined4 *param_5,longlong *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char *pcVar10;
  ulonglong uVar11;
  char *pcStackX_8;
  char *pcStackX_20;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  uVar9 = 0;
  *param_4 = 0xc;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&pcStackX_20);
  if (cVar2 != '\0') {
    if (pcStackX_20 != (char *)0x0) {
      _DAT_180c0c32c = _DAT_180c0c32c + 1;
      pcVar10 = pcStackX_20;
      if (*pcStackX_20 != '\0') {
        do {
          iVar3 = (int)uVar9;
          uVar6 = iVar3 + 1;
          uVar9 = (ulonglong)uVar6;
          pcVar10 = pcVar10 + 1;
        } while (*pcVar10 != '\0');
        uVar4 = (**(code **)(*param_6 + 8))(param_6,iVar3 + 2);
                    // WARNING: Subroutine does not return
        memcpy(uVar4,pcStackX_20,uVar6);
      }
      pcVar10 = "";
      pcStackX_8 = "";
      uVar8 = uVar9;
      uVar11 = uVar9;
      do {
        cVar2 = *pcVar10;
        pcVar7 = pcVar10;
        while( true ) {
          if (cVar2 == '\0') {
            *param_3 = uVar11;
            *param_5 = (int)(uVar8 / 0xc);
            (**(code **)(*param_6 + 0x10))(param_6,&DAT_18098bc73);
            goto FUN_1806f0409;
          }
          iVar3 = isspace((int)cVar2);
          if (iVar3 == 0) break;
          cVar2 = pcVar7[1];
          pcVar7 = pcVar7 + 1;
        }
        if (*pcVar10 != '\0') {
          uStack_48 = FUN_1806d80c0(pcVar10,&pcStackX_8);
          uStack_44 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
          uStack_40 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
          pcVar10 = pcStackX_8;
        }
        uVar6 = (int)uVar8 + 0xc;
        uVar5 = uVar11;
        if ((uint)uVar9 < uVar6) {
          uVar9 = 0x20;
          if (0x20 < uVar6) {
            do {
              uVar1 = (int)uVar9 * 2;
              uVar9 = (ulonglong)uVar1;
            } while (uVar1 < uVar6);
          }
          uVar5 = (**(code **)(*param_6 + 8))(param_6,uVar9);
          if ((int)uVar8 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(uVar5,uVar11,uVar8);
          }
          (**(code **)(*param_6 + 0x10))(param_6,uVar11);
        }
        *(ulonglong *)(uVar8 + uVar5) = CONCAT44(uStack_44,uStack_48);
        *(undefined4 *)(uVar8 + 8 + uVar5) = uStack_40;
        uVar8 = (ulonglong)uVar6;
        uVar11 = uVar5;
      } while( true );
    }
FUN_1806f0409:
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1806f030f(longlong *param_1)
void FUN_1806f030f(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  char *pcVar7;
  uint unaff_EBP;
  ulonglong *unaff_R13;
  char *pcVar8;
  ulonglong uVar9;
  undefined4 uStackX_20;
  undefined4 uStackX_24;
  undefined4 in_stack_00000028;
  char *in_stack_00000070;
  longlong *plStack0000000000000080;
  char *in_stack_00000088;
  uint *in_stack_00000090;
  uint uVar6;
  
  plStack0000000000000080 = param_1;
  if (in_stack_00000088 != (char *)0x0) {
    _DAT_180c0c32c = _DAT_180c0c32c + 1;
    pcVar8 = in_stack_00000088;
    uVar5 = unaff_EBP;
    if (*in_stack_00000088 != (char)unaff_EBP) {
      do {
        uVar6 = uVar5;
        uVar5 = uVar6 + 1;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar8 != (char)unaff_EBP);
      uVar3 = (**(code **)(*param_1 + 8))(param_1,uVar6 + 2);
                    // WARNING: Subroutine does not return
      memcpy(uVar3,in_stack_00000088,uVar5);
    }
    pcVar8 = "";
    in_stack_00000070 = "";
    uVar9 = (ulonglong)unaff_EBP;
    while (cVar1 = *pcVar8, pcVar7 = pcVar8, cVar1 != '\0') {
      while (iVar2 = isspace((int)cVar1), iVar2 != 0) {
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 1;
        if (cVar1 == '\0') goto LAB_1806f03c8;
      }
      if (*pcVar8 != '\0') {
        uStackX_20 = FUN_1806d80c0(pcVar8,&stack0x00000070);
        uStackX_24 = FUN_1806d80c0(in_stack_00000070,&stack0x00000070);
        in_stack_00000028 = FUN_1806d80c0(in_stack_00000070,&stack0x00000070);
        pcVar8 = in_stack_00000070;
      }
      uVar6 = uVar5 + 0xc;
      uVar4 = uVar9;
      if (unaff_EBP < uVar6) {
        unaff_EBP = 0x20;
        if (0x20 < uVar6) {
          do {
            unaff_EBP = unaff_EBP * 2;
          } while (unaff_EBP < uVar6);
        }
        uVar4 = (**(code **)(*plStack0000000000000080 + 8))(plStack0000000000000080,unaff_EBP);
        if (uVar5 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(uVar4,uVar9,uVar5);
        }
        (**(code **)(*plStack0000000000000080 + 0x10))(plStack0000000000000080,uVar9);
      }
      *(ulonglong *)(uVar5 + uVar4) = CONCAT44(uStackX_24,uStackX_20);
      *(undefined4 *)((ulonglong)uVar5 + 8 + uVar4) = in_stack_00000028;
      uVar9 = uVar4;
      uVar5 = uVar6;
    }
LAB_1806f03c8:
    *unaff_R13 = uVar9;
    *in_stack_00000090 = uVar5 / 0xc;
    (**(code **)(*plStack0000000000000080 + 0x10))(plStack0000000000000080,&DAT_18098bc73);
  }
  (**(code **)(*plStack0000000000000080 + 0x10))(plStack0000000000000080,0);
  return;
}







// 函数: void FUN_1806f0342(longlong *param_1)
void FUN_1806f0342(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  char *pcVar6;
  uint unaff_EBP;
  char *unaff_RSI;
  uint unaff_EDI;
  longlong *unaff_R13;
  char *pcVar7;
  longlong unaff_R15;
  undefined4 uStackX_20;
  undefined4 uStackX_24;
  undefined4 in_stack_00000028;
  char *in_stack_00000070;
  longlong *in_stack_00000080;
  uint *in_stack_00000090;
  
  if (*unaff_RSI != (char)unaff_EDI) {
    do {
      uVar5 = unaff_EBP;
      unaff_RSI = unaff_RSI + 1;
      unaff_EBP = uVar5 + 1;
    } while (*unaff_RSI != (char)unaff_EDI);
    uVar3 = (**(code **)(*param_1 + 8))(param_1,uVar5 + 2);
                    // WARNING: Subroutine does not return
    memcpy(uVar3);
  }
  pcVar7 = "";
  in_stack_00000070 = "";
  while (cVar1 = *pcVar7, pcVar6 = pcVar7, cVar1 != '\0') {
    while (iVar2 = isspace((int)cVar1), iVar2 != 0) {
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
      if (cVar1 == '\0') goto LAB_1806f03c8;
    }
    if (*pcVar7 != '\0') {
      uStackX_20 = FUN_1806d80c0(pcVar7,&stack0x00000070);
      uStackX_24 = FUN_1806d80c0(in_stack_00000070,&stack0x00000070);
      in_stack_00000028 = FUN_1806d80c0(in_stack_00000070,&stack0x00000070);
      pcVar7 = in_stack_00000070;
    }
    uVar5 = unaff_EBP + 0xc;
    lVar4 = unaff_R15;
    if (unaff_EDI < uVar5) {
      unaff_EDI = 0x20;
      if (0x20 < uVar5) {
        do {
          unaff_EDI = unaff_EDI * 2;
        } while (unaff_EDI < uVar5);
      }
      lVar4 = (**(code **)(*in_stack_00000080 + 8))(in_stack_00000080,unaff_EDI);
      if (unaff_EBP != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar4,unaff_R15,unaff_EBP);
      }
      (**(code **)(*in_stack_00000080 + 0x10))(in_stack_00000080,unaff_R15);
    }
    *(ulonglong *)((ulonglong)unaff_EBP + lVar4) = CONCAT44(uStackX_24,uStackX_20);
    *(undefined4 *)((ulonglong)unaff_EBP + 8 + lVar4) = in_stack_00000028;
    unaff_R15 = lVar4;
    unaff_EBP = uVar5;
  }
LAB_1806f03c8:
  *unaff_R13 = unaff_R15;
  *in_stack_00000090 = unaff_EBP / 0xc;
  (**(code **)(*in_stack_00000080 + 0x10))(in_stack_00000080,&DAT_18098bc73);
  (**(code **)(*in_stack_00000080 + 0x10))(in_stack_00000080,0);
  return;
}







// 函数: void FUN_1806f0409(void)
void FUN_1806f0409(void)

{
  longlong *in_stack_00000080;
  
  (**(code **)(*in_stack_00000080 + 0x10))(in_stack_00000080,0);
  return;
}







// 函数: void FUN_1806f0428(void)
void FUN_1806f0428(void)

{
  return;
}







// 函数: void FUN_1806f0430(void)
void FUN_1806f0430(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  char *pcVar5;
  uint unaff_EBP;
  uint unaff_EDI;
  longlong *unaff_R13;
  char *unaff_R14;
  longlong unaff_R15;
  undefined4 uStackX_20;
  undefined4 uStackX_24;
  undefined4 in_stack_00000028;
  char *in_stack_00000070;
  longlong *in_stack_00000080;
  uint *in_stack_00000090;
  
  do {
    if (*unaff_R14 != '\0') {
      uStackX_20 = FUN_1806d80c0(unaff_R14,&stack0x00000070);
      uStackX_24 = FUN_1806d80c0(in_stack_00000070,&stack0x00000070);
      in_stack_00000028 = FUN_1806d80c0(in_stack_00000070,&stack0x00000070);
      unaff_R14 = in_stack_00000070;
    }
    uVar4 = unaff_EBP + 0xc;
    lVar3 = unaff_R15;
    if (unaff_EDI < uVar4) {
      unaff_EDI = 0x20;
      if (0x20 < uVar4) {
        do {
          unaff_EDI = unaff_EDI * 2;
        } while (unaff_EDI < uVar4);
      }
      lVar3 = (**(code **)(*in_stack_00000080 + 8))(in_stack_00000080,unaff_EDI);
      if (unaff_EBP != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar3,unaff_R15,unaff_EBP);
      }
      (**(code **)(*in_stack_00000080 + 0x10))(in_stack_00000080,unaff_R15);
    }
    *(ulonglong *)((ulonglong)unaff_EBP + lVar3) = CONCAT44(uStackX_24,uStackX_20);
    *(undefined4 *)((ulonglong)unaff_EBP + 8 + lVar3) = in_stack_00000028;
    cVar1 = *unaff_R14;
    pcVar5 = unaff_R14;
    while( true ) {
      if (cVar1 == '\0') {
        *unaff_R13 = lVar3;
        *in_stack_00000090 = uVar4 / 0xc;
        (**(code **)(*in_stack_00000080 + 0x10))();
        (**(code **)(*in_stack_00000080 + 0x10))(in_stack_00000080,0);
        return;
      }
      iVar2 = isspace((int)cVar1);
      unaff_R15 = lVar3;
      unaff_EBP = uVar4;
      if (iVar2 == 0) break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    }
  } while( true );
}



int FUN_1806f04f0(undefined8 *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcStackX_8;
  char *pcStackX_10;
  undefined4 auStackX_18 [2];
  
  pcVar3 = (code *)param_1[3];
  FUN_1806d7080(param_2,*param_1);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar7 = &UNK_18094c9c0;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      pcStackX_10 = pcStackX_8;
      uVar5 = strtoul(pcStackX_8,&pcStackX_10,10);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = (code *)param_1[7];
  FUN_1806d7080(param_2,param_1[4]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      pcStackX_10 = pcStackX_8;
      uVar5 = strtoul(pcStackX_8,&pcStackX_10,10);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = (code *)param_1[0xb];
  FUN_1806d7080(param_2,param_1[8]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar5 = FUN_1806d5410(pcStackX_8,&DAT_180be0f00);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = (code *)param_1[0x13];
  FUN_1806d7080(param_2,param_1[0x10]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar5 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  FUN_1806d6f60(param_2);
  pcVar3 = (code *)param_1[0x17];
  FUN_1806d7080(param_2,param_1[0x14]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar7 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar7,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      auStackX_18[0] = 0;
      FUN_1806d81c0(pcStackX_8,param_2[7],auStackX_18,0x180be0f20);
      (*pcVar3)(param_2[6],auStackX_18);
    }
  }
  FUN_1806d6f60(param_2);
  return param_3 + 6;
}



int FUN_1806f07f0(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined1 auStackX_18 [16];
  
  pcVar3 = *(code **)(param_1 + 0x148);
  FUN_1806d7170(param_2,*(undefined8 *)(param_1 + 0x138));
  piVar2 = (int *)param_2[6];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar4 = (undefined1 *)(*pcVar3)(auStackX_18,param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar6 = &UNK_18094c9c0;
  }
  else {
    puVar6 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  FUN_1806d82a0(param_2[1],param_2[3],puVar6,*puVar4,0x180be0e90);
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar5 + 8) + 8 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  return param_3 + 4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1806f08b0(undefined8 *param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined *puVar9;
  longlong *plVar10;
  undefined *puVar11;
  undefined1 auStackX_18 [8];
  
  pcVar3 = (code *)param_1[2];
  FUN_1806d7170(param_2,*param_1);
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar4 = (*pcVar3)(param_2[2]);
  puVar11 = &UNK_18094c9c0;
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar9 = &UNK_18094c9c0;
  }
  else {
    puVar9 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar5 - 1) * 0x10);
  }
  puVar2 = (undefined8 *)param_2[3];
  plVar10 = (longlong *)param_2[1];
  FUN_1806c4e00(puVar2,&UNK_180a063a0,uVar4);
  auStackX_18[0] = 0;
  (**(code **)*puVar2)(puVar2,auStackX_18,1);
  (**(code **)(*plVar10 + 0x10))(plVar10,puVar9,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar3 = (code *)param_1[6];
  FUN_1806d7170(param_2,param_1[4]);
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar4 = (*pcVar3)(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar9 = &UNK_18094c9c0;
  }
  else {
    puVar9 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar5 - 1) * 0x10);
  }
  puVar2 = (undefined8 *)param_2[3];
  plVar10 = (longlong *)param_2[1];
  FUN_1806c4e00(puVar2,&UNK_180a063a0,uVar4);
  auStackX_18[0] = 0;
  (**(code **)*puVar2)(puVar2,auStackX_18,1);
  (**(code **)(*plVar10 + 0x10))(plVar10,puVar9,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar3 = (code *)param_1[10];
  FUN_1806d7170(param_2,param_1[8]);
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  iVar5 = (*pcVar3)(param_2[2]);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) == 0) {
    puVar9 = &UNK_18094c9c0;
  }
  else {
    puVar9 = *(undefined **)
              (*(longlong *)(lVar7 + 8) + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10);
  }
  plVar8 = (longlong *)&DAT_180be0f00;
  plVar10 = (longlong *)param_2[1];
  if (_DAT_180be0f00 != 0) {
    do {
      if ((int)plVar8[1] == iVar5) {
        (**(code **)(*plVar10 + 0x10))(plVar10,puVar9,*plVar8);
      }
      plVar8 = plVar8 + 2;
    } while (*plVar8 != 0);
    plVar10 = (longlong *)param_2[1];
    lVar7 = *param_2;
  }
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*plVar10 + 0x20))(plVar10);
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar3 = (code *)param_1[0x12];
  FUN_1806d7170(param_2,param_1[0x10]);
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar4 = (*pcVar3)(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar9 = &UNK_18094c9c0;
  }
  else {
    puVar9 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar5 - 1) * 0x10);
  }
  puVar2 = (undefined8 *)param_2[3];
  plVar10 = (longlong *)param_2[1];
  FUN_1806d3300(puVar2,uVar4);
  auStackX_18[0] = 0;
  (**(code **)*puVar2)(puVar2,auStackX_18,1);
  (**(code **)(*plVar10 + 0x10))(plVar10,puVar9,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar3 = (code *)param_1[0x16];
  FUN_1806d7170(param_2,param_1[0x14]);
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar6 = (undefined2 *)(*pcVar3)(auStackX_18,param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 != 0) {
    puVar11 = *(undefined **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar5 - 1) * 0x10);
  }
  FUN_1806d82a0(param_2[1],param_2[3],puVar11,*puVar6,0x180be0f20);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return param_3 + 6;
}







// 函数: void FUN_1806f0c90(longlong *param_1,undefined8 *param_2,uint param_3,longlong param_4,uint param_5,
void FUN_1806f0c90(longlong *param_1,undefined8 *param_2,uint param_3,longlong param_4,uint param_5,
                  undefined8 param_6,code *param_7)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  pcVar2 = param_7;
  uVar1 = param_5;
  if ((param_5 != 0) && (param_4 != 0)) {
    uVar4 = 0;
    if (param_5 != 0) {
      do {
        if ((uVar4 == 0) || (uVar4 % param_3 != 0)) {
          uVar5 = 1;
          puVar3 = &DAT_1809fc8e4;
        }
        else {
          uVar5 = 4;
          puVar3 = &UNK_18094e480;
        }
        (**(code **)*param_2)(param_2,puVar3,uVar5);
        (*pcVar2)(param_2);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    param_5 = param_5 & 0xffffff00;
    (**(code **)*param_2)(param_2,&param_5,1);
    (**(code **)(*param_1 + 0x10))(param_1,param_6,param_2[4]);
    param_2[3] = 0;
  }
  return;
}







// 函数: void FUN_1806f0cc4(void)
void FUN_1806f0cc4(void)

{
  undefined8 *unaff_RBX;
  uint unaff_EBP;
  uint uVar1;
  longlong *unaff_R12;
  code *in_stack_00000070;
  
  uVar1 = 0;
  if (unaff_EBP != 0) {
    do {
      (**(code **)*unaff_RBX)();
      (*in_stack_00000070)();
      uVar1 = uVar1 + 1;
    } while (uVar1 < unaff_EBP);
  }
  (**(code **)*unaff_RBX)();
  (**(code **)(*unaff_R12 + 0x10))();
  unaff_RBX[3] = 0;
  return;
}







// 函数: void FUN_1806f0ccf(void)
void FUN_1806f0ccf(void)

{
  undefined8 *unaff_RBX;
  uint unaff_EBP;
  uint unaff_EDI;
  longlong *unaff_R12;
  code *in_stack_00000070;
  
  do {
    (**(code **)*unaff_RBX)();
    (*in_stack_00000070)();
    unaff_EDI = unaff_EDI + 1;
  } while (unaff_EDI < unaff_EBP);
  (**(code **)*unaff_RBX)();
  (**(code **)(*unaff_R12 + 0x10))();
  unaff_RBX[3] = 0;
  return;
}







// 函数: void FUN_1806f0d28(void)
void FUN_1806f0d28(void)

{
  undefined8 *unaff_RBX;
  longlong *unaff_R12;
  undefined1 uStack0000000000000060;
  
  uStack0000000000000060 = 0;
  (**(code **)*unaff_RBX)();
  (**(code **)(*unaff_R12 + 0x10))();
  unaff_RBX[3] = 0;
  return;
}







// 函数: void FUN_1806f0d60(void)
void FUN_1806f0d60(void)

{
  return;
}







// 函数: void FUN_1806f0d80(longlong *param_1,undefined8 *param_2,uint param_3,longlong param_4,uint param_5,
void FUN_1806f0d80(longlong *param_1,undefined8 *param_2,uint param_3,longlong param_4,uint param_5,
                  undefined8 param_6,code *param_7)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  pcVar2 = param_7;
  uVar1 = param_5;
  if ((param_5 != 0) && (param_4 != 0)) {
    uVar4 = 0;
    if (param_5 != 0) {
      do {
        if ((uVar4 == 0) || (uVar4 % param_3 != 0)) {
          uVar5 = 1;
          puVar3 = &DAT_1809fc8e4;
        }
        else {
          uVar5 = 4;
          puVar3 = &UNK_18094e480;
        }
        (**(code **)*param_2)(param_2,puVar3,uVar5);
        (*pcVar2)(param_2);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    param_5 = param_5 & 0xffffff00;
    (**(code **)*param_2)(param_2,&param_5,1);
    (**(code **)(*param_1 + 0x10))(param_1,param_6,param_2[4]);
    param_2[3] = 0;
  }
  return;
}







